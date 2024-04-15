// python wrapper for vtkStreamingDemandDrivenPipeline
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStreamingDemandDrivenPipeline.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStreamingDemandDrivenPipeline(PyObject *dict); }
extern "C" { PyObject *PyvtkStreamingDemandDrivenPipeline_ClassNew(); }

#ifndef DECLARED_PyvtkDemandDrivenPipeline_ClassNew
extern "C" { PyObject *PyvtkDemandDrivenPipeline_ClassNew(); }
#define DECLARED_PyvtkDemandDrivenPipeline_ClassNew
#endif

static PyObject *
PyvtkStreamingDemandDrivenPipeline_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStreamingDemandDrivenPipeline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamingDemandDrivenPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStreamingDemandDrivenPipeline *tempr = vtkStreamingDemandDrivenPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStreamingDemandDrivenPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamingDemandDrivenPipeline::NewInstance());

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
PyvtkStreamingDemandDrivenPipeline_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStreamingDemandDrivenPipeline::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStreamingDemandDrivenPipeline::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Update() :
      op->vtkStreamingDemandDrivenPipeline::Update());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Update(temp0) :
      op->vtkStreamingDemandDrivenPipeline::Update(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_Update_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  vtkInformationVector *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformationVector"))
  {
    int tempr = (ap.IsBound() ?
      op->Update(temp0, temp1) :
      op->vtkStreamingDemandDrivenPipeline::Update(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_Update(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkStreamingDemandDrivenPipeline_Update_s1(self, args);
    case 1:
      return PyvtkStreamingDemandDrivenPipeline_Update_s2(self, args);
    case 2:
      return PyvtkStreamingDemandDrivenPipeline_Update_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return nullptr;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UpdateWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateWholeExtent() :
      op->vtkStreamingDemandDrivenPipeline::UpdateWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_PropagateUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->PropagateUpdateExtent(temp0) :
      op->vtkStreamingDemandDrivenPipeline::PropagateUpdateExtent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_PropagateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->PropagateTime(temp0) :
      op->vtkStreamingDemandDrivenPipeline::PropagateTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UpdateTimeDependentInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTimeDependentInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateTimeDependentInformation(temp0) :
      op->vtkStreamingDemandDrivenPipeline::UpdateTimeDependentInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetWholeExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetWholeExtent");

  vtkInformation *temp0 = nullptr;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = vtkStreamingDemandDrivenPipeline::SetWholeExtent(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetWholeExtent_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetWholeExtent");

  vtkInformation *temp0 = nullptr;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkStreamingDemandDrivenPipeline::GetWholeExtent(temp0, temp1);

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
PyvtkStreamingDemandDrivenPipeline_GetWholeExtent_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetWholeExtent");

  vtkInformation *temp0 = nullptr;
  size_t sizer = 6;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int *tempr = vtkStreamingDemandDrivenPipeline::GetWholeExtent(temp0);

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkStreamingDemandDrivenPipeline_GetWholeExtent_s1(self, args);
    case 1:
      return PyvtkStreamingDemandDrivenPipeline_GetWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetWholeExtent");
  return nullptr;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_SetRequestExactExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestExactExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetRequestExactExtent(temp0, temp1) :
      op->vtkStreamingDemandDrivenPipeline::SetRequestExactExtent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetRequestExactExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestExactExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingDemandDrivenPipeline *op = static_cast<vtkStreamingDemandDrivenPipeline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRequestExactExtent(temp0) :
      op->vtkStreamingDemandDrivenPipeline::GetRequestExactExtent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_REQUEST_UPDATE_EXTENT(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_UPDATE_EXTENT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationRequestKey *tempr = vtkStreamingDemandDrivenPipeline::REQUEST_UPDATE_EXTENT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_REQUEST_UPDATE_TIME(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_UPDATE_TIME");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationRequestKey *tempr = vtkStreamingDemandDrivenPipeline::REQUEST_UPDATE_TIME();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_REQUEST_TIME_DEPENDENT_INFORMATION(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "REQUEST_TIME_DEPENDENT_INFORMATION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationRequestKey *tempr = vtkStreamingDemandDrivenPipeline::REQUEST_TIME_DEPENDENT_INFORMATION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_CONTINUE_EXECUTING(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CONTINUE_EXECUTING");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkStreamingDemandDrivenPipeline::CONTINUE_EXECUTING();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_EXTENT_INITIALIZED(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_EXTENT_INITIALIZED");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkStreamingDemandDrivenPipeline::UPDATE_EXTENT_INITIALIZED();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_EXTENT(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_EXTENT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerVectorKey *tempr = vtkStreamingDemandDrivenPipeline::UPDATE_EXTENT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_PIECE_NUMBER(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_PIECE_NUMBER");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkStreamingDemandDrivenPipeline::UPDATE_PIECE_NUMBER();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_NUMBER_OF_PIECES(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_NUMBER_OF_PIECES");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkStreamingDemandDrivenPipeline::UPDATE_NUMBER_OF_PIECES();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_NUMBER_OF_GHOST_LEVELS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_NUMBER_OF_GHOST_LEVELS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkStreamingDemandDrivenPipeline::UPDATE_NUMBER_OF_GHOST_LEVELS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_COMBINED_UPDATE_EXTENT(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "COMBINED_UPDATE_EXTENT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerVectorKey *tempr = vtkStreamingDemandDrivenPipeline::COMBINED_UPDATE_EXTENT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_WHOLE_EXTENT(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "WHOLE_EXTENT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerVectorKey *tempr = vtkStreamingDemandDrivenPipeline::WHOLE_EXTENT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UNRESTRICTED_UPDATE_EXTENT(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UNRESTRICTED_UPDATE_EXTENT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkStreamingDemandDrivenPipeline::UNRESTRICTED_UPDATE_EXTENT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_EXACT_EXTENT(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "EXACT_EXTENT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkStreamingDemandDrivenPipeline::EXACT_EXTENT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_TIME_STEPS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TIME_STEPS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkStreamingDemandDrivenPipeline::TIME_STEPS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_TIME_RANGE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TIME_RANGE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkStreamingDemandDrivenPipeline::TIME_RANGE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_UPDATE_TIME_STEP(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_TIME_STEP");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleKey *tempr = vtkStreamingDemandDrivenPipeline::UPDATE_TIME_STEP();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_TIME_DEPENDENT_INFORMATION(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TIME_DEPENDENT_INFORMATION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkStreamingDemandDrivenPipeline::TIME_DEPENDENT_INFORMATION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_BOUNDS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "BOUNDS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkStreamingDemandDrivenPipeline::BOUNDS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetUpdateExtent_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUpdateExtent");

  vtkInformation *temp0 = nullptr;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkStreamingDemandDrivenPipeline::GetUpdateExtent(temp0, temp1);

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
PyvtkStreamingDemandDrivenPipeline_GetUpdateExtent_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUpdateExtent");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int *tempr = vtkStreamingDemandDrivenPipeline::GetUpdateExtent(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetUpdateExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkStreamingDemandDrivenPipeline_GetUpdateExtent_s1(self, args);
    case 1:
      return PyvtkStreamingDemandDrivenPipeline_GetUpdateExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetUpdateExtent");
  return nullptr;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetUpdatePiece(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUpdatePiece");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = vtkStreamingDemandDrivenPipeline::GetUpdatePiece(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetUpdateNumberOfPieces(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUpdateNumberOfPieces");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = vtkStreamingDemandDrivenPipeline::GetUpdateNumberOfPieces(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingDemandDrivenPipeline_GetUpdateGhostLevel(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUpdateGhostLevel");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = vtkStreamingDemandDrivenPipeline::GetUpdateGhostLevel(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStreamingDemandDrivenPipeline_Methods[] = {
  {"IsTypeOf", PyvtkStreamingDemandDrivenPipeline_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStreamingDemandDrivenPipeline_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStreamingDemandDrivenPipeline_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStreamingDemandDrivenPipeline\nC++: static vtkStreamingDemandDrivenPipeline *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStreamingDemandDrivenPipeline_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStreamingDemandDrivenPipeline\nC++: vtkStreamingDemandDrivenPipeline *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStreamingDemandDrivenPipeline_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStreamingDemandDrivenPipeline_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Update", PyvtkStreamingDemandDrivenPipeline_Update, METH_VARARGS,
   "Update(self) -> int\nC++: vtkTypeBool Update() override;\nUpdate(self, port:int) -> int\nC++: vtkTypeBool Update(int port) override;\nUpdate(self, port:int, requests:vtkInformationVector) -> int\nC++: virtual vtkTypeBool Update(int port,\n    vtkInformationVector *requests)\n\nBring the outputs up-to-date.\n"},
  {"UpdateWholeExtent", PyvtkStreamingDemandDrivenPipeline_UpdateWholeExtent, METH_VARARGS,
   "UpdateWholeExtent(self) -> int\nC++: virtual vtkTypeBool UpdateWholeExtent()\n\n"},
  {"PropagateUpdateExtent", PyvtkStreamingDemandDrivenPipeline_PropagateUpdateExtent, METH_VARARGS,
   "PropagateUpdateExtent(self, outputPort:int) -> int\nC++: int PropagateUpdateExtent(int outputPort)\n\nPropagate the update request from the given output port back\nthrough the pipeline.  Should be called only when information is\nup to date.\n"},
  {"PropagateTime", PyvtkStreamingDemandDrivenPipeline_PropagateTime, METH_VARARGS,
   "PropagateTime(self, outputPort:int) -> int\nC++: int PropagateTime(int outputPort)\n\nPropagate time through the pipeline. this is a special pass only\nnecessary if there is temporal meta data that must be updated\n"},
  {"UpdateTimeDependentInformation", PyvtkStreamingDemandDrivenPipeline_UpdateTimeDependentInformation, METH_VARARGS,
   "UpdateTimeDependentInformation(self, outputPort:int) -> int\nC++: int UpdateTimeDependentInformation(int outputPort)\n\n"},
  {"SetWholeExtent", PyvtkStreamingDemandDrivenPipeline_SetWholeExtent, METH_VARARGS,
   "SetWholeExtent(__a:vtkInformation, extent:[int, int, int, int,\n    int, int]) -> int\nC++: static int SetWholeExtent(vtkInformation *, int extent[6])\n\nSet/Get the whole extent of an output port.  The whole extent is\nmeta data for structured data sets.  It gets set by the algorithm\nduring the update information pass.\n"},
  {"GetWholeExtent", PyvtkStreamingDemandDrivenPipeline_GetWholeExtent, METH_VARARGS,
   "GetWholeExtent(__a:vtkInformation, extent:[int, int, int, int,\n    int, int]) -> None\nC++: static void GetWholeExtent(vtkInformation *, int extent[6])\nGetWholeExtent(__a:vtkInformation) -> (int, int, int, int, int,\n    int)\nC++: static int *GetWholeExtent(vtkInformation *)\n\n"},
  {"SetRequestExactExtent", PyvtkStreamingDemandDrivenPipeline_SetRequestExactExtent, METH_VARARGS,
   "SetRequestExactExtent(self, port:int, flag:int) -> int\nC++: int SetRequestExactExtent(int port, int flag)\n\nThis request flag indicates whether the requester can handle more\ndata than requested for the given port.  Right now it is used in\nvtkImageData.  Image filters can return more data than requested.\nThe consumer cannot handle this (i.e. DataSetToDataSetfilter) the\nimage will crop itself.  This functionality used to be in\nImageToStructuredPoints.\n"},
  {"GetRequestExactExtent", PyvtkStreamingDemandDrivenPipeline_GetRequestExactExtent, METH_VARARGS,
   "GetRequestExactExtent(self, port:int) -> int\nC++: int GetRequestExactExtent(int port)\n\n"},
  {"REQUEST_UPDATE_EXTENT", PyvtkStreamingDemandDrivenPipeline_REQUEST_UPDATE_EXTENT, METH_VARARGS,
   "REQUEST_UPDATE_EXTENT() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_UPDATE_EXTENT()\n\nKey defining a request to propagate the update extent\nupstream.\\ingroup InformationKeys\n"},
  {"REQUEST_UPDATE_TIME", PyvtkStreamingDemandDrivenPipeline_REQUEST_UPDATE_TIME, METH_VARARGS,
   "REQUEST_UPDATE_TIME() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_UPDATE_TIME()\n\nKey defining a request to propagate the update extent\nupstream.\\ingroup InformationKeys\n"},
  {"REQUEST_TIME_DEPENDENT_INFORMATION", PyvtkStreamingDemandDrivenPipeline_REQUEST_TIME_DEPENDENT_INFORMATION, METH_VARARGS,
   "REQUEST_TIME_DEPENDENT_INFORMATION() -> vtkInformationRequestKey\nC++: static vtkInformationRequestKey *REQUEST_TIME_DEPENDENT_INFORMATION(\n    )\n\nKey defining a request to make sure the meta information is up to\ndate.\\ingroup InformationKeys\n"},
  {"CONTINUE_EXECUTING", PyvtkStreamingDemandDrivenPipeline_CONTINUE_EXECUTING, METH_VARARGS,
   "CONTINUE_EXECUTING() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CONTINUE_EXECUTING()\n\nKey for an algorithm to store in a request to tell this executive\nto keep executing it.\\ingroup InformationKeys\n"},
  {"UPDATE_EXTENT_INITIALIZED", PyvtkStreamingDemandDrivenPipeline_UPDATE_EXTENT_INITIALIZED, METH_VARARGS,
   "UPDATE_EXTENT_INITIALIZED() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *UPDATE_EXTENT_INITIALIZED()\n\nKeys to store an update request in pipeline information.\\ingroup\nInformationKeys\n"},
  {"UPDATE_EXTENT", PyvtkStreamingDemandDrivenPipeline_UPDATE_EXTENT, METH_VARARGS,
   "UPDATE_EXTENT() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *UPDATE_EXTENT()\n\n\\ingroup InformationKeys\n"},
  {"UPDATE_PIECE_NUMBER", PyvtkStreamingDemandDrivenPipeline_UPDATE_PIECE_NUMBER, METH_VARARGS,
   "UPDATE_PIECE_NUMBER() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *UPDATE_PIECE_NUMBER()\n\n\\ingroup InformationKeys\n"},
  {"UPDATE_NUMBER_OF_PIECES", PyvtkStreamingDemandDrivenPipeline_UPDATE_NUMBER_OF_PIECES, METH_VARARGS,
   "UPDATE_NUMBER_OF_PIECES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *UPDATE_NUMBER_OF_PIECES()\n\n\\ingroup InformationKeys\n"},
  {"UPDATE_NUMBER_OF_GHOST_LEVELS", PyvtkStreamingDemandDrivenPipeline_UPDATE_NUMBER_OF_GHOST_LEVELS, METH_VARARGS,
   "UPDATE_NUMBER_OF_GHOST_LEVELS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *UPDATE_NUMBER_OF_GHOST_LEVELS(\n    )\n\n\\ingroup InformationKeys\n"},
  {"COMBINED_UPDATE_EXTENT", PyvtkStreamingDemandDrivenPipeline_COMBINED_UPDATE_EXTENT, METH_VARARGS,
   "COMBINED_UPDATE_EXTENT() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *COMBINED_UPDATE_EXTENT(\n    )\n\nKey for combining the update extents requested by all consumers,\nso that the final extent that is produced satisfies all\nconsumers.\\ingroup InformationKeys\n"},
  {"WHOLE_EXTENT", PyvtkStreamingDemandDrivenPipeline_WHOLE_EXTENT, METH_VARARGS,
   "WHOLE_EXTENT() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *WHOLE_EXTENT()\n\nKey to store the whole extent provided in pipeline\ninformation.\\ingroup InformationKeys\n"},
  {"UNRESTRICTED_UPDATE_EXTENT", PyvtkStreamingDemandDrivenPipeline_UNRESTRICTED_UPDATE_EXTENT, METH_VARARGS,
   "UNRESTRICTED_UPDATE_EXTENT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *UNRESTRICTED_UPDATE_EXTENT()\n\nThis is set if the update extent is not restricted to the whole\nextent, for sources that can generate an extent of any requested\nsize.\\ingroup InformationKeys\n"},
  {"EXACT_EXTENT", PyvtkStreamingDemandDrivenPipeline_EXACT_EXTENT, METH_VARARGS,
   "EXACT_EXTENT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *EXACT_EXTENT()\n\nKey to specify the request for exact extent in pipeline\ninformation.\\ingroup InformationKeys\n"},
  {"TIME_STEPS", PyvtkStreamingDemandDrivenPipeline_TIME_STEPS, METH_VARARGS,
   "TIME_STEPS() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *TIME_STEPS()\n\nKey to store available time steps.\\ingroup InformationKeys\n"},
  {"TIME_RANGE", PyvtkStreamingDemandDrivenPipeline_TIME_RANGE, METH_VARARGS,
   "TIME_RANGE() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *TIME_RANGE()\n\nKey to store available time range for continuous sources.\\ingroup\nInformationKeys\n"},
  {"UPDATE_TIME_STEP", PyvtkStreamingDemandDrivenPipeline_UPDATE_TIME_STEP, METH_VARARGS,
   "UPDATE_TIME_STEP() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *UPDATE_TIME_STEP()\n\nUpdate time steps requested by the pipeline.\\ingroup\nInformationKeys\n"},
  {"TIME_DEPENDENT_INFORMATION", PyvtkStreamingDemandDrivenPipeline_TIME_DEPENDENT_INFORMATION, METH_VARARGS,
   "TIME_DEPENDENT_INFORMATION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *TIME_DEPENDENT_INFORMATION()\n\nWhether there are time dependent meta information if there is,\nthe pipeline will perform two extra passes to gather the time\ndependent information\\ingroup InformationKeys\n"},
  {"BOUNDS", PyvtkStreamingDemandDrivenPipeline_BOUNDS, METH_VARARGS,
   "BOUNDS() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *BOUNDS()\n\nkey to record the bounds of a dataset.\\ingroup InformationKeys\n"},
  {"GetUpdateExtent", PyvtkStreamingDemandDrivenPipeline_GetUpdateExtent, METH_VARARGS,
   "GetUpdateExtent(__a:vtkInformation, extent:[int, int, int, int,\n    int, int]) -> None\nC++: static void GetUpdateExtent(vtkInformation *, int extent[6])\nGetUpdateExtent(__a:vtkInformation) -> Pointer\nC++: static int *GetUpdateExtent(vtkInformation *)\n\nGet/Set the update extent for output ports that use 3D extents.\n"},
  {"GetUpdatePiece", PyvtkStreamingDemandDrivenPipeline_GetUpdatePiece, METH_VARARGS,
   "GetUpdatePiece(__a:vtkInformation) -> int\nC++: static int GetUpdatePiece(vtkInformation *)\n\nSet/Get the update piece, update number of pieces, and update\nnumber of ghost levels for an output port.  Similar to update\nextent in 3D.\n"},
  {"GetUpdateNumberOfPieces", PyvtkStreamingDemandDrivenPipeline_GetUpdateNumberOfPieces, METH_VARARGS,
   "GetUpdateNumberOfPieces(__a:vtkInformation) -> int\nC++: static int GetUpdateNumberOfPieces(vtkInformation *)\n\n"},
  {"GetUpdateGhostLevel", PyvtkStreamingDemandDrivenPipeline_GetUpdateGhostLevel, METH_VARARGS,
   "GetUpdateGhostLevel(__a:vtkInformation) -> int\nC++: static int GetUpdateGhostLevel(vtkInformation *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStreamingDemandDrivenPipeline_Doc =
  "vtkStreamingDemandDrivenPipeline - Executive supporting partial\nupdates.\n\n"
  "Superclass: vtkDemandDrivenPipeline\n\n"
  "vtkStreamingDemandDrivenPipeline is an executive that supports\n"
  "updating only a portion of the data set in the pipeline.  This is the\n"
  "style of pipeline update that is provided by the old-style VTK 4.x\n"
  "pipeline.  Instead of always updating an entire data set, this\n"
  "executive supports asking for pieces or sub-extents.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStreamingDemandDrivenPipeline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkStreamingDemandDrivenPipeline", // tp_name
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
  PyvtkStreamingDemandDrivenPipeline_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStreamingDemandDrivenPipeline_StaticNew()
{
  return vtkStreamingDemandDrivenPipeline::New();
}

PyObject *PyvtkStreamingDemandDrivenPipeline_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStreamingDemandDrivenPipeline_Type, PyvtkStreamingDemandDrivenPipeline_Methods,
    "vtkStreamingDemandDrivenPipeline",
 &PyvtkStreamingDemandDrivenPipeline_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDemandDrivenPipeline_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStreamingDemandDrivenPipeline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStreamingDemandDrivenPipeline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStreamingDemandDrivenPipeline", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_UPDATE_EXTENT_COMBINE", 1 },
        { "VTK_UPDATE_EXTENT_REPLACE", 2 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

