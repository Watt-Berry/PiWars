// python wrapper for vtkParametricRandomHills
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkParametricRandomHills.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParametricRandomHills(PyObject *dict); }
extern "C" { PyObject *PyvtkParametricRandomHills_ClassNew(); }

#ifndef DECLARED_PyvtkParametricFunction_ClassNew
extern "C" { PyObject *PyvtkParametricFunction_ClassNew(); }
#define DECLARED_PyvtkParametricFunction_ClassNew
#endif

static PyObject *
PyvtkParametricRandomHills_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParametricRandomHills::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricRandomHills::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParametricRandomHills *tempr = vtkParametricRandomHills::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricRandomHills *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricRandomHills::NewInstance());

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
PyvtkParametricRandomHills_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkParametricRandomHills::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkParametricRandomHills::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkParametricRandomHills::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetNumberOfHills(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHills");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfHills(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetNumberOfHills(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetNumberOfHills(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHills");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfHills() :
      op->vtkParametricRandomHills::GetNumberOfHills());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetHillXVariance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHillXVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHillXVariance(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetHillXVariance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetHillXVariance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHillXVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHillXVariance() :
      op->vtkParametricRandomHills::GetHillXVariance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetHillYVariance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHillYVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHillYVariance(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetHillYVariance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetHillYVariance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHillYVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHillYVariance() :
      op->vtkParametricRandomHills::GetHillYVariance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetHillAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHillAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHillAmplitude(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetHillAmplitude(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetHillAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHillAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHillAmplitude() :
      op->vtkParametricRandomHills::GetHillAmplitude());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRandomSeed(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetRandomSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomSeed() :
      op->vtkParametricRandomHills::GetRandomSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetAllowRandomGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowRandomGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowRandomGeneration(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetAllowRandomGeneration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetAllowRandomGenerationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowRandomGenerationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllowRandomGenerationMinValue() :
      op->vtkParametricRandomHills::GetAllowRandomGenerationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetAllowRandomGenerationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowRandomGenerationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllowRandomGenerationMaxValue() :
      op->vtkParametricRandomHills::GetAllowRandomGenerationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetAllowRandomGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowRandomGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllowRandomGeneration() :
      op->vtkParametricRandomHills::GetAllowRandomGeneration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_AllowRandomGenerationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowRandomGenerationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowRandomGenerationOn();
    }
    else
    {
      op->vtkParametricRandomHills::AllowRandomGenerationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_AllowRandomGenerationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowRandomGenerationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowRandomGenerationOff();
    }
    else
    {
      op->vtkParametricRandomHills::AllowRandomGenerationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetXVarianceScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXVarianceScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXVarianceScaleFactor(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetXVarianceScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetXVarianceScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXVarianceScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXVarianceScaleFactor() :
      op->vtkParametricRandomHills::GetXVarianceScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetYVarianceScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYVarianceScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYVarianceScaleFactor(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetYVarianceScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetYVarianceScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYVarianceScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetYVarianceScaleFactor() :
      op->vtkParametricRandomHills::GetYVarianceScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_SetAmplitudeScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmplitudeScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAmplitudeScaleFactor(temp0);
    }
    else
    {
      op->vtkParametricRandomHills::SetAmplitudeScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_GetAmplitudeScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmplitudeScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmplitudeScaleFactor() :
      op->vtkParametricRandomHills::GetAmplitudeScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->Evaluate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkParametricRandomHills::Evaluate(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricRandomHills_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricRandomHills *op = static_cast<vtkParametricRandomHills *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    double tempr = (ap.IsBound() ?
      op->EvaluateScalar(temp0, temp1, temp2) :
      op->vtkParametricRandomHills::EvaluateScalar(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkParametricRandomHills_Methods[] = {
  {"IsTypeOf", PyvtkParametricRandomHills_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParametricRandomHills_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParametricRandomHills_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkParametricRandomHills\nC++: static vtkParametricRandomHills *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParametricRandomHills_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkParametricRandomHills\nC++: vtkParametricRandomHills *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkParametricRandomHills_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkParametricRandomHills_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDimension", PyvtkParametricRandomHills_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: int GetDimension() override;\n\nReturn the parametric dimension of the class.\n"},
  {"SetNumberOfHills", PyvtkParametricRandomHills_SetNumberOfHills, METH_VARARGS,
   "SetNumberOfHills(self, _arg:int) -> None\nC++: virtual void SetNumberOfHills(int _arg)\n\nSet/Get the number of hills. Default is 30.\n"},
  {"GetNumberOfHills", PyvtkParametricRandomHills_GetNumberOfHills, METH_VARARGS,
   "GetNumberOfHills(self) -> int\nC++: virtual int GetNumberOfHills()\n\n"},
  {"SetHillXVariance", PyvtkParametricRandomHills_SetHillXVariance, METH_VARARGS,
   "SetHillXVariance(self, _arg:float) -> None\nC++: virtual void SetHillXVariance(double _arg)\n\nSet/Get the hill variance in the x-direction. Default is 2.5.\n"},
  {"GetHillXVariance", PyvtkParametricRandomHills_GetHillXVariance, METH_VARARGS,
   "GetHillXVariance(self) -> float\nC++: virtual double GetHillXVariance()\n\n"},
  {"SetHillYVariance", PyvtkParametricRandomHills_SetHillYVariance, METH_VARARGS,
   "SetHillYVariance(self, _arg:float) -> None\nC++: virtual void SetHillYVariance(double _arg)\n\nSet/Get the hill variance in the y-direction. Default is 2.5.\n"},
  {"GetHillYVariance", PyvtkParametricRandomHills_GetHillYVariance, METH_VARARGS,
   "GetHillYVariance(self) -> float\nC++: virtual double GetHillYVariance()\n\n"},
  {"SetHillAmplitude", PyvtkParametricRandomHills_SetHillAmplitude, METH_VARARGS,
   "SetHillAmplitude(self, _arg:float) -> None\nC++: virtual void SetHillAmplitude(double _arg)\n\nSet/Get the hill amplitude (height). Default is 2.\n"},
  {"GetHillAmplitude", PyvtkParametricRandomHills_GetHillAmplitude, METH_VARARGS,
   "GetHillAmplitude(self) -> float\nC++: virtual double GetHillAmplitude()\n\n"},
  {"SetRandomSeed", PyvtkParametricRandomHills_SetRandomSeed, METH_VARARGS,
   "SetRandomSeed(self, _arg:int) -> None\nC++: virtual void SetRandomSeed(int _arg)\n\nSet/Get the Seed for the random number generator, a value of 1\nwill initialize the random number generator, a negative value\nwill initialize it with the system time. Default is 1.\n"},
  {"GetRandomSeed", PyvtkParametricRandomHills_GetRandomSeed, METH_VARARGS,
   "GetRandomSeed(self) -> int\nC++: virtual int GetRandomSeed()\n\n"},
  {"SetAllowRandomGeneration", PyvtkParametricRandomHills_SetAllowRandomGeneration, METH_VARARGS,
   "SetAllowRandomGeneration(self, _arg:int) -> None\nC++: virtual void SetAllowRandomGeneration(vtkTypeBool _arg)\n\nSet/Get the random generation flag. A value of 0 will disable the\ngeneration of random hills on the surface allowing a reproducible\nnumber of identically shaped hills to be generated. If zero, then\nthe number of hills used will be the nearest perfect square less\nthan or equal to the number of hills. For example, selecting 30\nhills will result in a 5 X 5 array of hills being generated. Thus\na square array of hills will be generated.\n\n* Any other value means that the hills will be placed randomly on\nthe\n* surface.\n* Default is 1.\n"},
  {"GetAllowRandomGenerationMinValue", PyvtkParametricRandomHills_GetAllowRandomGenerationMinValue, METH_VARARGS,
   "GetAllowRandomGenerationMinValue(self) -> int\nC++: virtual vtkTypeBool GetAllowRandomGenerationMinValue()\n\n"},
  {"GetAllowRandomGenerationMaxValue", PyvtkParametricRandomHills_GetAllowRandomGenerationMaxValue, METH_VARARGS,
   "GetAllowRandomGenerationMaxValue(self) -> int\nC++: virtual vtkTypeBool GetAllowRandomGenerationMaxValue()\n\n"},
  {"GetAllowRandomGeneration", PyvtkParametricRandomHills_GetAllowRandomGeneration, METH_VARARGS,
   "GetAllowRandomGeneration(self) -> int\nC++: virtual vtkTypeBool GetAllowRandomGeneration()\n\n"},
  {"AllowRandomGenerationOn", PyvtkParametricRandomHills_AllowRandomGenerationOn, METH_VARARGS,
   "AllowRandomGenerationOn(self) -> None\nC++: virtual void AllowRandomGenerationOn()\n\n"},
  {"AllowRandomGenerationOff", PyvtkParametricRandomHills_AllowRandomGenerationOff, METH_VARARGS,
   "AllowRandomGenerationOff(self) -> None\nC++: virtual void AllowRandomGenerationOff()\n\n"},
  {"SetXVarianceScaleFactor", PyvtkParametricRandomHills_SetXVarianceScaleFactor, METH_VARARGS,
   "SetXVarianceScaleFactor(self, _arg:float) -> None\nC++: virtual void SetXVarianceScaleFactor(double _arg)\n\nSet/Get the scaling factor for the variance in the x-direction.\nDefault is 1/3.\n"},
  {"GetXVarianceScaleFactor", PyvtkParametricRandomHills_GetXVarianceScaleFactor, METH_VARARGS,
   "GetXVarianceScaleFactor(self) -> float\nC++: virtual double GetXVarianceScaleFactor()\n\n"},
  {"SetYVarianceScaleFactor", PyvtkParametricRandomHills_SetYVarianceScaleFactor, METH_VARARGS,
   "SetYVarianceScaleFactor(self, _arg:float) -> None\nC++: virtual void SetYVarianceScaleFactor(double _arg)\n\nSet/Get the scaling factor for the variance in the y-direction.\nDefault is 1/3.\n"},
  {"GetYVarianceScaleFactor", PyvtkParametricRandomHills_GetYVarianceScaleFactor, METH_VARARGS,
   "GetYVarianceScaleFactor(self) -> float\nC++: virtual double GetYVarianceScaleFactor()\n\n"},
  {"SetAmplitudeScaleFactor", PyvtkParametricRandomHills_SetAmplitudeScaleFactor, METH_VARARGS,
   "SetAmplitudeScaleFactor(self, _arg:float) -> None\nC++: virtual void SetAmplitudeScaleFactor(double _arg)\n\nSet/Get the scaling factor for the amplitude. Default is 1/3.\n"},
  {"GetAmplitudeScaleFactor", PyvtkParametricRandomHills_GetAmplitudeScaleFactor, METH_VARARGS,
   "GetAmplitudeScaleFactor(self) -> float\nC++: virtual double GetAmplitudeScaleFactor()\n\n"},
  {"Evaluate", PyvtkParametricRandomHills_Evaluate, METH_VARARGS,
   "Evaluate(self, uvw:[float, float, float], Pt:[float, float,\n    float], Duvw:[float, float, float, float, float, float, float,\n     float, float]) -> None\nC++: void Evaluate(double uvw[3], double Pt[3], double Duvw[9])\n    override;\n\nConstruct a terrain consisting of hills on a surface.\n\n* This function performs the mapping $f(u,v) \\rightarrow (x,y,x)\n  $, returning it\n* as Pt. It also returns the partial derivatives Du and Dv.\n* $Pt = (x, y, z), Du = (dx/du, dy/du, dz/du), Dv = (dx/dv,\n  dy/dv, dz/dv) $ .\n* Then the normal is $N = Du X Dv $ .\n"},
  {"EvaluateScalar", PyvtkParametricRandomHills_EvaluateScalar, METH_VARARGS,
   "EvaluateScalar(self, uvw:[float, float, float], Pt:[float, float,\n    float], Duvw:[float, float, float, float, float, float, float,\n     float, float]) -> float\nC++: double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9]) override;\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw.\n\n* uvw are the parameters with Pt being the Cartesian point,\n* Duvw are the derivatives of this point with respect to u, v and\nw.\n* Pt, Duvw are obtained from Evaluate().\n\n* This function is only called if the ScalarMode has the value\n* vtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED\n\n* If the user does not need to calculate a scalar, then the\n* instantiated function should return zero.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkParametricRandomHills_Doc =
  "vtkParametricRandomHills - Generate a surface covered with randomly\nplaced hills.\n\n"
  "Superclass: vtkParametricFunction\n\n"
  "vtkParametricRandomHills generates a surface covered with randomly\n"
  "placed hills. Hills will vary in shape and height since the presence\n"
  "of nearby hills will contribute to the shape and height of a given\n"
  "hill. An option is provided for placing hills on a regular grid on\n"
  "the surface. In this case the hills will all have the same shape and\n"
  "height.\n\n"
  "For further information about this surface, please consult the\n"
  "technical description \"Parametric surfaces\" in\n"
  "http://www.vtk.org/publications in the \"VTK Technical Documents\"\n"
  "section in the VTk.org web pages.\n\n"
  "@par Thanks: Andrew Maclean andrew.amaclean@gmail.com for creating\n"
  "and contributing the class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParametricRandomHills_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonComputationalGeometry.vtkParametricRandomHills", // tp_name
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
  PyvtkParametricRandomHills_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParametricRandomHills_StaticNew()
{
  return vtkParametricRandomHills::New();
}

PyObject *PyvtkParametricRandomHills_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkParametricRandomHills_Type, PyvtkParametricRandomHills_Methods,
    "vtkParametricRandomHills",
 &PyvtkParametricRandomHills_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkParametricFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParametricRandomHills(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParametricRandomHills_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParametricRandomHills", o) != 0)
  {
    Py_DECREF(o);
  }

}

