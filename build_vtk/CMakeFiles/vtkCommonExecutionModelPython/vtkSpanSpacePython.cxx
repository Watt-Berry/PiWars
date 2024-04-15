// python wrapper for vtkSpanSpace
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSpanSpace.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpanSpace(PyObject *dict); }
extern "C" { PyObject *PyvtkSpanSpace_ClassNew(); }

#ifndef DECLARED_PyvtkScalarTree_ClassNew
extern "C" { PyObject *PyvtkScalarTree_ClassNew(); }
#define DECLARED_PyvtkScalarTree_ClassNew
#endif

static PyObject *
PyvtkSpanSpace_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpanSpace::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpanSpace::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpanSpace *tempr = vtkSpanSpace::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpanSpace *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpanSpace::NewInstance());

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
PyvtkSpanSpace_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSpanSpace::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSpanSpace::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  vtkScalarTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarTree"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSpanSpace::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0, temp1);
    }
    else
    {
      op->vtkSpanSpace::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpanSpace_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0);
    }
    else
    {
      op->vtkSpanSpace::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSpanSpace_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSpanSpace_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkSpanSpace_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}


static PyObject *
PyvtkSpanSpace_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkSpanSpace::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_SetComputeScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeScalarRange(temp0);
    }
    else
    {
      op->vtkSpanSpace::SetComputeScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetComputeScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeScalarRange() :
      op->vtkSpanSpace::GetComputeScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_ComputeScalarRangeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarRangeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarRangeOn();
    }
    else
    {
      op->vtkSpanSpace::ComputeScalarRangeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_ComputeScalarRangeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarRangeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarRangeOff();
    }
    else
    {
      op->vtkSpanSpace::ComputeScalarRangeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkSpanSpace::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkSpanSpace::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkSpanSpace::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkSpanSpace::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_SetComputeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeResolution(temp0);
    }
    else
    {
      op->vtkSpanSpace::SetComputeResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetComputeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeResolution() :
      op->vtkSpanSpace::GetComputeResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_ComputeResolutionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeResolutionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeResolutionOn();
    }
    else
    {
      op->vtkSpanSpace::ComputeResolutionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_ComputeResolutionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeResolutionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeResolutionOff();
    }
    else
    {
      op->vtkSpanSpace::ComputeResolutionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_SetNumberOfCellsPerBucket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCellsPerBucket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfCellsPerBucket(temp0);
    }
    else
    {
      op->vtkSpanSpace::SetNumberOfCellsPerBucket(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetNumberOfCellsPerBucketMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellsPerBucketMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellsPerBucketMinValue() :
      op->vtkSpanSpace::GetNumberOfCellsPerBucketMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetNumberOfCellsPerBucketMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellsPerBucketMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellsPerBucketMaxValue() :
      op->vtkSpanSpace::GetNumberOfCellsPerBucketMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetNumberOfCellsPerBucket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellsPerBucket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellsPerBucket() :
      op->vtkSpanSpace::GetNumberOfCellsPerBucket());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkSpanSpace::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_BuildTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildTree();
    }
    else
    {
      op->vtkSpanSpace::BuildTree();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal(temp0);
    }
    else
    {
      op->vtkSpanSpace::InitTraversal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetNumberOfCellBatches(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellBatches");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCellBatches(temp0) :
      op->vtkSpanSpace::GetNumberOfCellBatches(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetCellBatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const long long *tempr = (ap.IsBound() ?
      op->GetCellBatch(temp0, temp1) :
      op->vtkSpanSpace::GetCellBatch(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_SetBatchSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBatchSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBatchSize(temp0);
    }
    else
    {
      op->vtkSpanSpace::SetBatchSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetBatchSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetBatchSizeMinValue() :
      op->vtkSpanSpace::GetBatchSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetBatchSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetBatchSizeMaxValue() :
      op->vtkSpanSpace::GetBatchSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanSpace_GetBatchSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanSpace *op = static_cast<vtkSpanSpace *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetBatchSize() :
      op->vtkSpanSpace::GetBatchSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSpanSpace_Methods[] = {
  {"IsTypeOf", PyvtkSpanSpace_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSpanSpace_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSpanSpace_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSpanSpace\nC++: static vtkSpanSpace *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSpanSpace_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSpanSpace\nC++: vtkSpanSpace *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSpanSpace_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSpanSpace_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ShallowCopy", PyvtkSpanSpace_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, stree:vtkScalarTree) -> None\nC++: void ShallowCopy(vtkScalarTree *stree) override;\n\nThis method is used to copy data members when cloning an instance\nof the class. It does not copy heavy data.\n"},
  {"SetScalarRange", PyvtkSpanSpace_SetScalarRange, METH_VARARGS,
   "SetScalarRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetScalarRange(double _arg1, double _arg2)\nSetScalarRange(self, _arg:(float, float)) -> None\nC++: void SetScalarRange(const double _arg[2])\n\nSpecify the scalar range in terms of minimum and maximum values\n(smin,smax). These values are used to build the span space. Note\nthat setting the range can have significant impact on the\nperformance of the span space as it controls the effective\nresolution near important isocontour values. By default the range\nis computed automatically; turn off ComputeScalarRange is you\nwish to manually specify it.\n"},
  {"GetScalarRange", PyvtkSpanSpace_GetScalarRange, METH_VARARGS,
   "GetScalarRange(self) -> (float, float)\nC++: virtual double *GetScalarRange()\n\n"},
  {"SetComputeScalarRange", PyvtkSpanSpace_SetComputeScalarRange, METH_VARARGS,
   "SetComputeScalarRange(self, _arg:int) -> None\nC++: virtual void SetComputeScalarRange(vtkTypeBool _arg)\n\nThis boolean controls whether the determination of the scalar\nrange is computed from the input scalar data. By default this is\nenabled.\n"},
  {"GetComputeScalarRange", PyvtkSpanSpace_GetComputeScalarRange, METH_VARARGS,
   "GetComputeScalarRange(self) -> int\nC++: virtual vtkTypeBool GetComputeScalarRange()\n\n"},
  {"ComputeScalarRangeOn", PyvtkSpanSpace_ComputeScalarRangeOn, METH_VARARGS,
   "ComputeScalarRangeOn(self) -> None\nC++: virtual void ComputeScalarRangeOn()\n\n"},
  {"ComputeScalarRangeOff", PyvtkSpanSpace_ComputeScalarRangeOff, METH_VARARGS,
   "ComputeScalarRangeOff(self) -> None\nC++: virtual void ComputeScalarRangeOff()\n\n"},
  {"SetResolution", PyvtkSpanSpace_SetResolution, METH_VARARGS,
   "SetResolution(self, _arg:int) -> None\nC++: virtual void SetResolution(vtkIdType _arg)\n\nSet/Get the resolution N of the span space. The span space can be\nenvisioned as a rectangular lattice of NXN buckets/bins (i.e., N\nrows and N columns), where each bucket stores a list of cell ids.\nThe i-j coordinate of each cell (hence its location in the\nlattice) is determined from the cell's 2-tuple (smin,smax) scalar\nrange.  By default Resolution = 100, with a clamp of 10,000.\n"},
  {"GetResolutionMinValue", PyvtkSpanSpace_GetResolutionMinValue, METH_VARARGS,
   "GetResolutionMinValue(self) -> int\nC++: virtual vtkIdType GetResolutionMinValue()\n\n"},
  {"GetResolutionMaxValue", PyvtkSpanSpace_GetResolutionMaxValue, METH_VARARGS,
   "GetResolutionMaxValue(self) -> int\nC++: virtual vtkIdType GetResolutionMaxValue()\n\n"},
  {"GetResolution", PyvtkSpanSpace_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual vtkIdType GetResolution()\n\n"},
  {"SetComputeResolution", PyvtkSpanSpace_SetComputeResolution, METH_VARARGS,
   "SetComputeResolution(self, _arg:int) -> None\nC++: virtual void SetComputeResolution(vtkTypeBool _arg)\n\nBoolean controls whether the resolution of span space is computed\nautomatically from the average number of cells falling in each\nbucket.\n"},
  {"GetComputeResolution", PyvtkSpanSpace_GetComputeResolution, METH_VARARGS,
   "GetComputeResolution(self) -> int\nC++: virtual vtkTypeBool GetComputeResolution()\n\n"},
  {"ComputeResolutionOn", PyvtkSpanSpace_ComputeResolutionOn, METH_VARARGS,
   "ComputeResolutionOn(self) -> None\nC++: virtual void ComputeResolutionOn()\n\n"},
  {"ComputeResolutionOff", PyvtkSpanSpace_ComputeResolutionOff, METH_VARARGS,
   "ComputeResolutionOff(self) -> None\nC++: virtual void ComputeResolutionOff()\n\n"},
  {"SetNumberOfCellsPerBucket", PyvtkSpanSpace_SetNumberOfCellsPerBucket, METH_VARARGS,
   "SetNumberOfCellsPerBucket(self, _arg:int) -> None\nC++: virtual void SetNumberOfCellsPerBucket(int _arg)\n\nSpecify the average number of cells in each bucket. This is used\nto indirectly control the resolution if ComputeResolution is\nenabled.\n"},
  {"GetNumberOfCellsPerBucketMinValue", PyvtkSpanSpace_GetNumberOfCellsPerBucketMinValue, METH_VARARGS,
   "GetNumberOfCellsPerBucketMinValue(self) -> int\nC++: virtual int GetNumberOfCellsPerBucketMinValue()\n\n"},
  {"GetNumberOfCellsPerBucketMaxValue", PyvtkSpanSpace_GetNumberOfCellsPerBucketMaxValue, METH_VARARGS,
   "GetNumberOfCellsPerBucketMaxValue(self) -> int\nC++: virtual int GetNumberOfCellsPerBucketMaxValue()\n\n"},
  {"GetNumberOfCellsPerBucket", PyvtkSpanSpace_GetNumberOfCellsPerBucket, METH_VARARGS,
   "GetNumberOfCellsPerBucket(self) -> int\nC++: virtual int GetNumberOfCellsPerBucket()\n\n"},
  {"Initialize", PyvtkSpanSpace_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nInitialize the span space. Frees memory and resets object as\nappropriate.\n"},
  {"BuildTree", PyvtkSpanSpace_BuildTree, METH_VARARGS,
   "BuildTree(self) -> None\nC++: void BuildTree() override;\n\nConstruct the scalar tree from the dataset provided. Checks build\ntimes and modified time from input and reconstructs the tree if\nnecessary.\n"},
  {"InitTraversal", PyvtkSpanSpace_InitTraversal, METH_VARARGS,
   "InitTraversal(self, scalarValue:float) -> None\nC++: void InitTraversal(double scalarValue) override;\n\nBegin to traverse the cells based on a scalar value. Returned\ncells will have scalar values that span the scalar value\nspecified (within the resolution of the span space). Note this\nmethod must be called prior to parallel or serial traversal since\nit specifies the scalar value to be extracted.\n"},
  {"GetNumberOfCellBatches", PyvtkSpanSpace_GetNumberOfCellBatches, METH_VARARGS,
   "GetNumberOfCellBatches(self, scalarValue:float) -> int\nC++: vtkIdType GetNumberOfCellBatches(double scalarValue)\n    override;\n\nGet the number of cell batches available for processing as a\nfunction of the specified scalar value. Each batch contains a\nlist of candidate cells that may contain the specified isocontour\nvalue.\n"},
  {"GetCellBatch", PyvtkSpanSpace_GetCellBatch, METH_VARARGS,
   "GetCellBatch(self, batchNum:int, numCells:int) -> Pointer\nC++: const vtkIdType *GetCellBatch(vtkIdType batchNum,\n    vtkIdType &numCells) override;\n\nReturn the array of cell ids in the specified batch. The method\nalso returns the number of cell ids in the array. Make sure to\ncall GetNumberOfCellBatches() beforehand.\n"},
  {"SetBatchSize", PyvtkSpanSpace_SetBatchSize, METH_VARARGS,
   "SetBatchSize(self, _arg:int) -> None\nC++: virtual void SetBatchSize(vtkIdType _arg)\n\nSet/Get the size of the cell batches when processing in parallel.\nBy default the batch size = 100 cells in each batch.\n"},
  {"GetBatchSizeMinValue", PyvtkSpanSpace_GetBatchSizeMinValue, METH_VARARGS,
   "GetBatchSizeMinValue(self) -> int\nC++: virtual vtkIdType GetBatchSizeMinValue()\n\n"},
  {"GetBatchSizeMaxValue", PyvtkSpanSpace_GetBatchSizeMaxValue, METH_VARARGS,
   "GetBatchSizeMaxValue(self) -> int\nC++: virtual vtkIdType GetBatchSizeMaxValue()\n\n"},
  {"GetBatchSize", PyvtkSpanSpace_GetBatchSize, METH_VARARGS,
   "GetBatchSize(self) -> int\nC++: virtual vtkIdType GetBatchSize()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSpanSpace_Doc =
  "vtkSpanSpace - organize data according to scalar span space\n\n"
  "Superclass: vtkScalarTree\n\n"
  "This is a helper class used to accelerate contouring operations.\n"
  "Given an dataset, it organizes the dataset cells into a 2D binned\n"
  "space, with coordinate axes (scalar_min,scalar_max). This so-called\n"
  "span space can then be traversed quickly to find the cells that\n"
  "intersect a specified contour value.\n\n"
  "This class has an API that supports both serial and parallel\n"
  "operation.  The parallel API enables the using class to grab arrays\n"
  "(or batches) of cells that lie along a particular row in the span\n"
  "space. These arrays can then be processed separately or in parallel.\n\n"
  "Learn more about span space in these two publications: 1) \"A Near\n"
  "Optimal Isosorface Extraction Algorithm Using the Span Space.\" Yarden\n"
  "Livnat et al. and 2) Isosurfacing in Span Space with Utmost\n"
  "Efficiency.\" Han-Wei Shen et al.\n\n"
  "@sa\n"
  "vtkScalarTree vtkSimpleScalarTree\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSpanSpace_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkSpanSpace", // tp_name
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
  PyvtkSpanSpace_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpanSpace_StaticNew()
{
  return vtkSpanSpace::New();
}

PyObject *PyvtkSpanSpace_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSpanSpace_Type, PyvtkSpanSpace_Methods,
    "vtkSpanSpace",
 &PyvtkSpanSpace_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkScalarTree_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpanSpace(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpanSpace_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpanSpace", o) != 0)
  {
    Py_DECREF(o);
  }

}

