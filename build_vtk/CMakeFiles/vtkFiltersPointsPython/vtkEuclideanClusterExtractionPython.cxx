// python wrapper for vtkEuclideanClusterExtraction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkEuclideanClusterExtraction.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEuclideanClusterExtraction(PyObject *dict); }
extern "C" { PyObject *PyvtkEuclideanClusterExtraction_ClassNew(); }


static PyObject *
PyvtkEuclideanClusterExtraction_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEuclideanClusterExtraction::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEuclideanClusterExtraction::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEuclideanClusterExtraction *tempr = vtkEuclideanClusterExtraction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEuclideanClusterExtraction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEuclideanClusterExtraction::NewInstance());

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
PyvtkEuclideanClusterExtraction_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEuclideanClusterExtraction::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEuclideanClusterExtraction::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkEuclideanClusterExtraction::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkEuclideanClusterExtraction::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkEuclideanClusterExtraction::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarConnectivity(temp0);
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetScalarConnectivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScalarConnectivity() :
      op->vtkEuclideanClusterExtraction::GetScalarConnectivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_ScalarConnectivityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarConnectivityOn();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::ScalarConnectivityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_ScalarConnectivityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarConnectivityOff();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::ScalarConnectivityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

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
      op->vtkEuclideanClusterExtraction::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEuclideanClusterExtraction_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

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
      op->vtkEuclideanClusterExtraction::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEuclideanClusterExtraction_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkEuclideanClusterExtraction_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkEuclideanClusterExtraction_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkEuclideanClusterExtraction::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionMode(temp0);
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetExtractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetExtractionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionModeMinValue() :
      op->vtkEuclideanClusterExtraction::GetExtractionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetExtractionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionModeMaxValue() :
      op->vtkEuclideanClusterExtraction::GetExtractionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionMode() :
      op->vtkEuclideanClusterExtraction::GetExtractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetExtractionModeToPointSeededClusters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToPointSeededClusters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToPointSeededClusters();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetExtractionModeToPointSeededClusters();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetExtractionModeToLargestCluster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToLargestCluster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToLargestCluster();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetExtractionModeToLargestCluster();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetExtractionModeToSpecifiedClusters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToSpecifiedClusters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToSpecifiedClusters();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetExtractionModeToSpecifiedClusters();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetExtractionModeToClosestPointCluster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToClosestPointCluster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToClosestPointCluster();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetExtractionModeToClosestPointCluster();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetExtractionModeToAllClusters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToAllClusters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToAllClusters();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetExtractionModeToAllClusters();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetExtractionModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetExtractionModeAsString() :
      op->vtkEuclideanClusterExtraction::GetExtractionModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_InitializeSeedList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSeedList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeSeedList();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::InitializeSeedList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_AddSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddSeed(temp0);
    }
    else
    {
      op->vtkEuclideanClusterExtraction::AddSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_DeleteSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteSeed(temp0);
    }
    else
    {
      op->vtkEuclideanClusterExtraction::DeleteSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_InitializeSpecifiedClusterList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSpecifiedClusterList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeSpecifiedClusterList();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::InitializeSpecifiedClusterList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_AddSpecifiedCluster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSpecifiedCluster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddSpecifiedCluster(temp0);
    }
    else
    {
      op->vtkEuclideanClusterExtraction::AddSpecifiedCluster(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_DeleteSpecifiedCluster(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSpecifiedCluster");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteSpecifiedCluster(temp0);
    }
    else
    {
      op->vtkEuclideanClusterExtraction::DeleteSpecifiedCluster(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

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
      op->SetClosestPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetClosestPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEuclideanClusterExtraction_SetClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetClosestPoint(temp0);
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetClosestPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEuclideanClusterExtraction_SetClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkEuclideanClusterExtraction_SetClosestPoint_s1(self, args);
    case 1:
      return PyvtkEuclideanClusterExtraction_SetClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetClosestPoint");
  return nullptr;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetClosestPoint() :
      op->vtkEuclideanClusterExtraction::GetClosestPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetNumberOfExtractedClusters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfExtractedClusters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfExtractedClusters() :
      op->vtkEuclideanClusterExtraction::GetNumberOfExtractedClusters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetColorClusters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorClusters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorClusters(temp0);
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetColorClusters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetColorClusters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorClusters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorClusters() :
      op->vtkEuclideanClusterExtraction::GetColorClusters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_ColorClustersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorClustersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorClustersOn();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::ColorClustersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_ColorClustersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorClustersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorClustersOff();
    }
    else
    {
      op->vtkEuclideanClusterExtraction::ColorClustersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  vtkAbstractPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkEuclideanClusterExtraction::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEuclideanClusterExtraction_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEuclideanClusterExtraction *op = static_cast<vtkEuclideanClusterExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkEuclideanClusterExtraction::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEuclideanClusterExtraction_Methods[] = {
  {"IsTypeOf", PyvtkEuclideanClusterExtraction_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEuclideanClusterExtraction_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEuclideanClusterExtraction_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEuclideanClusterExtraction\nC++: static vtkEuclideanClusterExtraction *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEuclideanClusterExtraction_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEuclideanClusterExtraction\nC++: vtkEuclideanClusterExtraction *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEuclideanClusterExtraction_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEuclideanClusterExtraction_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRadius", PyvtkEuclideanClusterExtraction_SetRadius, METH_VARARGS,
   "SetRadius(self, _arg:float) -> None\nC++: virtual void SetRadius(double _arg)\n\nSpecify the local search radius.\n"},
  {"GetRadiusMinValue", PyvtkEuclideanClusterExtraction_GetRadiusMinValue, METH_VARARGS,
   "GetRadiusMinValue(self) -> float\nC++: virtual double GetRadiusMinValue()\n\n"},
  {"GetRadiusMaxValue", PyvtkEuclideanClusterExtraction_GetRadiusMaxValue, METH_VARARGS,
   "GetRadiusMaxValue(self) -> float\nC++: virtual double GetRadiusMaxValue()\n\n"},
  {"GetRadius", PyvtkEuclideanClusterExtraction_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: virtual double GetRadius()\n\n"},
  {"SetScalarConnectivity", PyvtkEuclideanClusterExtraction_SetScalarConnectivity, METH_VARARGS,
   "SetScalarConnectivity(self, _arg:bool) -> None\nC++: virtual void SetScalarConnectivity(bool _arg)\n\nTurn on/off connectivity based on scalar value. If on, points are\nconnected only if the are proximal AND the scalar value of a\ncandidate point falls in the scalar range specified. Of course\ninput point scalar data must be provided.\n"},
  {"GetScalarConnectivity", PyvtkEuclideanClusterExtraction_GetScalarConnectivity, METH_VARARGS,
   "GetScalarConnectivity(self) -> bool\nC++: virtual bool GetScalarConnectivity()\n\n"},
  {"ScalarConnectivityOn", PyvtkEuclideanClusterExtraction_ScalarConnectivityOn, METH_VARARGS,
   "ScalarConnectivityOn(self) -> None\nC++: virtual void ScalarConnectivityOn()\n\n"},
  {"ScalarConnectivityOff", PyvtkEuclideanClusterExtraction_ScalarConnectivityOff, METH_VARARGS,
   "ScalarConnectivityOff(self) -> None\nC++: virtual void ScalarConnectivityOff()\n\n"},
  {"SetScalarRange", PyvtkEuclideanClusterExtraction_SetScalarRange, METH_VARARGS,
   "SetScalarRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetScalarRange(double _arg1, double _arg2)\nSetScalarRange(self, _arg:(float, float)) -> None\nC++: void SetScalarRange(const double _arg[2])\n\nSet the scalar range used to extract points based on scalar\nconnectivity.\n"},
  {"GetScalarRange", PyvtkEuclideanClusterExtraction_GetScalarRange, METH_VARARGS,
   "GetScalarRange(self) -> (float, float)\nC++: virtual double *GetScalarRange()\n\n"},
  {"SetExtractionMode", PyvtkEuclideanClusterExtraction_SetExtractionMode, METH_VARARGS,
   "SetExtractionMode(self, _arg:int) -> None\nC++: virtual void SetExtractionMode(int _arg)\n\nControl the extraction of connected surfaces.\n"},
  {"GetExtractionModeMinValue", PyvtkEuclideanClusterExtraction_GetExtractionModeMinValue, METH_VARARGS,
   "GetExtractionModeMinValue(self) -> int\nC++: virtual int GetExtractionModeMinValue()\n\n"},
  {"GetExtractionModeMaxValue", PyvtkEuclideanClusterExtraction_GetExtractionModeMaxValue, METH_VARARGS,
   "GetExtractionModeMaxValue(self) -> int\nC++: virtual int GetExtractionModeMaxValue()\n\n"},
  {"GetExtractionMode", PyvtkEuclideanClusterExtraction_GetExtractionMode, METH_VARARGS,
   "GetExtractionMode(self) -> int\nC++: virtual int GetExtractionMode()\n\n"},
  {"SetExtractionModeToPointSeededClusters", PyvtkEuclideanClusterExtraction_SetExtractionModeToPointSeededClusters, METH_VARARGS,
   "SetExtractionModeToPointSeededClusters(self) -> None\nC++: void SetExtractionModeToPointSeededClusters()\n\n"},
  {"SetExtractionModeToLargestCluster", PyvtkEuclideanClusterExtraction_SetExtractionModeToLargestCluster, METH_VARARGS,
   "SetExtractionModeToLargestCluster(self) -> None\nC++: void SetExtractionModeToLargestCluster()\n\n"},
  {"SetExtractionModeToSpecifiedClusters", PyvtkEuclideanClusterExtraction_SetExtractionModeToSpecifiedClusters, METH_VARARGS,
   "SetExtractionModeToSpecifiedClusters(self) -> None\nC++: void SetExtractionModeToSpecifiedClusters()\n\n"},
  {"SetExtractionModeToClosestPointCluster", PyvtkEuclideanClusterExtraction_SetExtractionModeToClosestPointCluster, METH_VARARGS,
   "SetExtractionModeToClosestPointCluster(self) -> None\nC++: void SetExtractionModeToClosestPointCluster()\n\n"},
  {"SetExtractionModeToAllClusters", PyvtkEuclideanClusterExtraction_SetExtractionModeToAllClusters, METH_VARARGS,
   "SetExtractionModeToAllClusters(self) -> None\nC++: void SetExtractionModeToAllClusters()\n\n"},
  {"GetExtractionModeAsString", PyvtkEuclideanClusterExtraction_GetExtractionModeAsString, METH_VARARGS,
   "GetExtractionModeAsString(self) -> str\nC++: const char *GetExtractionModeAsString()\n\n"},
  {"InitializeSeedList", PyvtkEuclideanClusterExtraction_InitializeSeedList, METH_VARARGS,
   "InitializeSeedList(self) -> None\nC++: void InitializeSeedList()\n\nInitialize the list of point ids used to seed clusters.\n"},
  {"AddSeed", PyvtkEuclideanClusterExtraction_AddSeed, METH_VARARGS,
   "AddSeed(self, id:int) -> None\nC++: void AddSeed(vtkIdType id)\n\nAdd a seed id (point id). Note: ids are 0-offset.\n"},
  {"DeleteSeed", PyvtkEuclideanClusterExtraction_DeleteSeed, METH_VARARGS,
   "DeleteSeed(self, id:int) -> None\nC++: void DeleteSeed(vtkIdType id)\n\nDelete a seed id.a\n"},
  {"InitializeSpecifiedClusterList", PyvtkEuclideanClusterExtraction_InitializeSpecifiedClusterList, METH_VARARGS,
   "InitializeSpecifiedClusterList(self) -> None\nC++: void InitializeSpecifiedClusterList()\n\nInitialize the list of cluster ids to extract.\n"},
  {"AddSpecifiedCluster", PyvtkEuclideanClusterExtraction_AddSpecifiedCluster, METH_VARARGS,
   "AddSpecifiedCluster(self, id:int) -> None\nC++: void AddSpecifiedCluster(int id)\n\nAdd a cluster id to extract. Note: ids are 0-offset.\n"},
  {"DeleteSpecifiedCluster", PyvtkEuclideanClusterExtraction_DeleteSpecifiedCluster, METH_VARARGS,
   "DeleteSpecifiedCluster(self, id:int) -> None\nC++: void DeleteSpecifiedCluster(int id)\n\nDelete a cluster id to extract.\n"},
  {"SetClosestPoint", PyvtkEuclideanClusterExtraction_SetClosestPoint, METH_VARARGS,
   "SetClosestPoint(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetClosestPoint(double _arg1, double _arg2,\n    double _arg3)\nSetClosestPoint(self, _arg:(float, float, float)) -> None\nC++: virtual void SetClosestPoint(const double _arg[3])\n\nUsed to specify the x-y-z point coordinates when extracting the\ncluster closest to a specified point.\n"},
  {"GetClosestPoint", PyvtkEuclideanClusterExtraction_GetClosestPoint, METH_VARARGS,
   "GetClosestPoint(self) -> (float, float, float)\nC++: virtual double *GetClosestPoint()\n\n"},
  {"GetNumberOfExtractedClusters", PyvtkEuclideanClusterExtraction_GetNumberOfExtractedClusters, METH_VARARGS,
   "GetNumberOfExtractedClusters(self) -> int\nC++: int GetNumberOfExtractedClusters()\n\nObtain the number of connected clusters. This value is valid only\nafter filter execution.\n"},
  {"SetColorClusters", PyvtkEuclideanClusterExtraction_SetColorClusters, METH_VARARGS,
   "SetColorClusters(self, _arg:bool) -> None\nC++: virtual void SetColorClusters(bool _arg)\n\nTurn on/off the coloring of connected clusters.\n"},
  {"GetColorClusters", PyvtkEuclideanClusterExtraction_GetColorClusters, METH_VARARGS,
   "GetColorClusters(self) -> bool\nC++: virtual bool GetColorClusters()\n\n"},
  {"ColorClustersOn", PyvtkEuclideanClusterExtraction_ColorClustersOn, METH_VARARGS,
   "ColorClustersOn(self) -> None\nC++: virtual void ColorClustersOn()\n\n"},
  {"ColorClustersOff", PyvtkEuclideanClusterExtraction_ColorClustersOff, METH_VARARGS,
   "ColorClustersOff(self) -> None\nC++: virtual void ColorClustersOff()\n\n"},
  {"SetLocator", PyvtkEuclideanClusterExtraction_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkAbstractPointLocator) -> None\nC++: void SetLocator(vtkAbstractPointLocator *locator)\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient proximity searches near a\nspecified interpolation position.\n"},
  {"GetLocator", PyvtkEuclideanClusterExtraction_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkAbstractPointLocator\nC++: virtual vtkAbstractPointLocator *GetLocator()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEuclideanClusterExtraction_Doc =
  "vtkEuclideanClusterExtraction - perform segmentation based on\ngeometric proximity and optional scalar threshold\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkEuclideanClusterExtraction is a filter that extracts points that\n"
  "are in close geometric proximity, and optionally satisfies a scalar\n"
  "threshold criterion. (Points extracted in this way are referred to as\n"
  "clusters.) The filter works in one of five ways: 1) extract the\n"
  "largest cluster in the dataset; 2) extract specified cluster\n"
  "number(s); 3) extract all clusters containing specified point ids; 4)\n"
  "extract the cluster closest to a specified point; or 5) extract all\n"
  "clusters (which can be used for coloring the clusters).\n\n"
  "Note that geometric proximity is defined by setting the Radius\n"
  "instance variable. This variable defines a local sphere around each\n"
  "point; other points contained in this sphere are considered\n"
  "\"connected\" to the point. Setting this number too large will connect\n"
  "clusters that should not be; setting it too small will fragment the\n"
  "point cloud into myriad clusters. To accelerate the geometric\n"
  "proximity operations, a point locator may be specified. By default, a\n"
  "vtkStaticPointLocator is used, but any vtkAbstractPointLocator may be\n"
  "specified.\n\n"
  "The behavior of vtkEuclideanClusterExtraction can be modified by\n"
  "turning on the boolean ivar ScalarConnectivity. If this flag is on,\n"
  "the clustering algorithm is modified so that points are considered\n"
  "part of a cluster if they satisfy both the geometric proximity\n"
  "measure, and the points scalar values falls into the scalar range\n"
  "specified. This use of ScalarConnectivity is particularly useful for\n"
  "data with intensity or color information, serving as a simple \"connected\n"
  "segmentation\" algorithm. For example, by using a seed point in a\n"
  "known cluster, clustering will pull out all points \"representing\" the\n"
  "local structure.\n\n"
  "@sa\n"
  "vtkConnectivityFilter vtkPolyDataConnectivityFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEuclideanClusterExtraction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkEuclideanClusterExtraction", // tp_name
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
  PyvtkEuclideanClusterExtraction_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEuclideanClusterExtraction_StaticNew()
{
  return vtkEuclideanClusterExtraction::New();
}

PyObject *PyvtkEuclideanClusterExtraction_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEuclideanClusterExtraction_Type, PyvtkEuclideanClusterExtraction_Methods,
    "vtkEuclideanClusterExtraction",
 &PyvtkEuclideanClusterExtraction_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEuclideanClusterExtraction(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEuclideanClusterExtraction_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEuclideanClusterExtraction", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_EXTRACT_POINT_SEEDED_CLUSTERS", 1 },
        { "VTK_EXTRACT_SPECIFIED_CLUSTERS", 2 },
        { "VTK_EXTRACT_LARGEST_CLUSTER", 3 },
        { "VTK_EXTRACT_ALL_CLUSTERS", 4 },
        { "VTK_EXTRACT_CLOSEST_POINT_CLUSTER", 5 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

