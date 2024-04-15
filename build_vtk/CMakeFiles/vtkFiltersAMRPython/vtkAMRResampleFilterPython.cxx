// python wrapper for vtkAMRResampleFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAMRResampleFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRResampleFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkAMRResampleFilter_ClassNew(); }


static PyObject *
PyvtkAMRResampleFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRResampleFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRResampleFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRResampleFilter *tempr = vtkAMRResampleFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRResampleFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRResampleFilter::NewInstance());

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
PyvtkAMRResampleFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAMRResampleFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAMRResampleFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetNumberOfSamples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSamples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRResampleFilter::SetNumberOfSamples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetNumberOfSamples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSamples(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetNumberOfSamples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetNumberOfSamples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRResampleFilter_SetNumberOfSamples_s1(self, args);
    case 1:
      return PyvtkAMRResampleFilter_SetNumberOfSamples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfSamples");
  return nullptr;
}


static PyObject *
PyvtkAMRResampleFilter_GetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNumberOfSamples() :
      op->vtkAMRResampleFilter::GetNumberOfSamples());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetTransferToNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferToNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransferToNodes(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetTransferToNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_GetTransferToNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferToNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTransferToNodes() :
      op->vtkAMRResampleFilter::GetTransferToNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetDemandDrivenMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDemandDrivenMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDemandDrivenMode(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetDemandDrivenMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_GetDemandDrivenMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDemandDrivenMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDemandDrivenMode() :
      op->vtkAMRResampleFilter::GetDemandDrivenMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPartitions(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetNumberOfPartitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_GetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPartitions() :
      op->vtkAMRResampleFilter::GetNumberOfPartitions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetMin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

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
      op->SetMin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRResampleFilter::SetMin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetMin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMin(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetMin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetMin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRResampleFilter_SetMin_s1(self, args);
    case 1:
      return PyvtkAMRResampleFilter_SetMin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMin");
  return nullptr;
}


static PyObject *
PyvtkAMRResampleFilter_GetMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMin() :
      op->vtkAMRResampleFilter::GetMin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetMax_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

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
      op->SetMax(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRResampleFilter::SetMax(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetMax_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMax(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetMax(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetMax(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRResampleFilter_SetMax_s1(self, args);
    case 1:
      return PyvtkAMRResampleFilter_SetMax_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMax");
  return nullptr;
}


static PyObject *
PyvtkAMRResampleFilter_GetMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMax() :
      op->vtkAMRResampleFilter::GetMax());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetUseBiasVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBiasVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseBiasVector(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetUseBiasVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_GetUseBiasVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBiasVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseBiasVector() :
      op->vtkAMRResampleFilter::GetUseBiasVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetBiasVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBiasVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

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
      op->SetBiasVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRResampleFilter::SetBiasVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetBiasVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBiasVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBiasVector(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetBiasVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRResampleFilter_SetBiasVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRResampleFilter_SetBiasVector_s1(self, args);
    case 1:
      return PyvtkAMRResampleFilter_SetBiasVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBiasVector");
  return nullptr;
}


static PyObject *
PyvtkAMRResampleFilter_GetBiasVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBiasVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBiasVector() :
      op->vtkAMRResampleFilter::GetBiasVector());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkAMRResampleFilter::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRResampleFilter::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkAMRResampleFilter::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRResampleFilter_FillOutputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillOutputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRResampleFilter *op = static_cast<vtkAMRResampleFilter *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillOutputPortInformation(temp0, temp1) :
      op->vtkAMRResampleFilter::FillOutputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRResampleFilter_Methods[] = {
  {"IsTypeOf", PyvtkAMRResampleFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRResampleFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRResampleFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAMRResampleFilter\nC++: static vtkAMRResampleFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRResampleFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAMRResampleFilter\nC++: vtkAMRResampleFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAMRResampleFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAMRResampleFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfSamples", PyvtkAMRResampleFilter_SetNumberOfSamples, METH_VARARGS,
   "SetNumberOfSamples(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetNumberOfSamples(int _arg1, int _arg2,\n    int _arg3)\nSetNumberOfSamples(self, _arg:(int, int, int)) -> None\nC++: virtual void SetNumberOfSamples(const int _arg[3])\n\nSet & Get macro for the number of samples (cells) in each\ndimension. Nominal value for the number of samples is 10x10x10.\n"},
  {"GetNumberOfSamples", PyvtkAMRResampleFilter_GetNumberOfSamples, METH_VARARGS,
   "GetNumberOfSamples(self) -> (int, int, int)\nC++: virtual int *GetNumberOfSamples()\n\n"},
  {"SetTransferToNodes", PyvtkAMRResampleFilter_SetTransferToNodes, METH_VARARGS,
   "SetTransferToNodes(self, _arg:int) -> None\nC++: virtual void SetTransferToNodes(vtkTypeBool _arg)\n\nSet & Get macro for the TransferToNodes flag\n"},
  {"GetTransferToNodes", PyvtkAMRResampleFilter_GetTransferToNodes, METH_VARARGS,
   "GetTransferToNodes(self) -> int\nC++: virtual vtkTypeBool GetTransferToNodes()\n\n"},
  {"SetDemandDrivenMode", PyvtkAMRResampleFilter_SetDemandDrivenMode, METH_VARARGS,
   "SetDemandDrivenMode(self, _arg:int) -> None\nC++: virtual void SetDemandDrivenMode(int _arg)\n\nSet & Get macro to allow the filter to operate in both\ndemand-driven and standard modes\n"},
  {"GetDemandDrivenMode", PyvtkAMRResampleFilter_GetDemandDrivenMode, METH_VARARGS,
   "GetDemandDrivenMode(self) -> int\nC++: virtual int GetDemandDrivenMode()\n\n"},
  {"SetNumberOfPartitions", PyvtkAMRResampleFilter_SetNumberOfPartitions, METH_VARARGS,
   "SetNumberOfPartitions(self, _arg:int) -> None\nC++: virtual void SetNumberOfPartitions(int _arg)\n\nSet & Get macro for the number of subdivisions\n"},
  {"GetNumberOfPartitions", PyvtkAMRResampleFilter_GetNumberOfPartitions, METH_VARARGS,
   "GetNumberOfPartitions(self) -> int\nC++: virtual int GetNumberOfPartitions()\n\n"},
  {"SetMin", PyvtkAMRResampleFilter_SetMin, METH_VARARGS,
   "SetMin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetMin(double _arg1, double _arg2, double _arg3)\nSetMin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetMin(const double _arg[3])\n\nSet and Get the min corner\n"},
  {"GetMin", PyvtkAMRResampleFilter_GetMin, METH_VARARGS,
   "GetMin(self) -> (float, float, float)\nC++: virtual double *GetMin()\n\n"},
  {"SetMax", PyvtkAMRResampleFilter_SetMax, METH_VARARGS,
   "SetMax(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetMax(double _arg1, double _arg2, double _arg3)\nSetMax(self, _arg:(float, float, float)) -> None\nC++: virtual void SetMax(const double _arg[3])\n\nSet and Get the max corner\n"},
  {"GetMax", PyvtkAMRResampleFilter_GetMax, METH_VARARGS,
   "GetMax(self) -> (float, float, float)\nC++: virtual double *GetMax()\n\n"},
  {"SetUseBiasVector", PyvtkAMRResampleFilter_SetUseBiasVector, METH_VARARGS,
   "SetUseBiasVector(self, _arg:bool) -> None\nC++: virtual void SetUseBiasVector(bool _arg)\n\nSet & Get macro for the number of subdivisions\n"},
  {"GetUseBiasVector", PyvtkAMRResampleFilter_GetUseBiasVector, METH_VARARGS,
   "GetUseBiasVector(self) -> bool\nC++: virtual bool GetUseBiasVector()\n\n"},
  {"SetBiasVector", PyvtkAMRResampleFilter_SetBiasVector, METH_VARARGS,
   "SetBiasVector(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetBiasVector(double _arg1, double _arg2,\n    double _arg3)\nSetBiasVector(self, _arg:(float, float, float)) -> None\nC++: virtual void SetBiasVector(const double _arg[3])\n\nSet and Get the bias vector.  If UseBiasVector is true then the\nlargest component of this vector can not have the max number of\nsamples\n"},
  {"GetBiasVector", PyvtkAMRResampleFilter_GetBiasVector, METH_VARARGS,
   "GetBiasVector(self) -> (float, float, float)\nC++: virtual double *GetBiasVector()\n\n"},
  {"SetController", PyvtkAMRResampleFilter_SetController, METH_VARARGS,
   "SetController(self, __a:vtkMultiProcessController) -> None\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet & Get macro for the multi-process controller\n"},
  {"GetController", PyvtkAMRResampleFilter_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"FillInputPortInformation", PyvtkAMRResampleFilter_FillInputPortInformation, METH_VARARGS,
   "FillInputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nFill the input port information objects for this algorithm.  This\nis invoked by the first call to GetInputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {"FillOutputPortInformation", PyvtkAMRResampleFilter_FillOutputPortInformation, METH_VARARGS,
   "FillOutputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillOutputPortInformation(int port, vtkInformation *info)\n     override;\n\nFill the output port information objects for this algorithm. This\nis invoked by the first call to GetOutputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAMRResampleFilter_Doc =
  "vtkAMRResampleFilter -  This filter is a concrete instance of\nvtkMultiBlockDataSetAlgorithm and\n provides functionality for extracting portion of the AMR dataset,\nspecified\n by a bounding box, in a uniform grid of the desired level of\nresolution.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "The resulting uniform grid is stored in a vtkMultiBlockDataSet where\n"
  "the\n"
  " number of blocks correspond to the number of processors utilized for\n"
  "the\n"
  " operation.\n\n"
  "@warning\n"
  " Data of the input AMR dataset is assumed to be cell-centered.\n\n"
  "@sa\n"
  " vtkOverlappingAMR, vtkUniformGrid\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAMRResampleFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersAMR.vtkAMRResampleFilter", // tp_name
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
  PyvtkAMRResampleFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRResampleFilter_StaticNew()
{
  return vtkAMRResampleFilter::New();
}

PyObject *PyvtkAMRResampleFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAMRResampleFilter_Type, PyvtkAMRResampleFilter_Methods,
    "vtkAMRResampleFilter",
 &PyvtkAMRResampleFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRResampleFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRResampleFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRResampleFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

