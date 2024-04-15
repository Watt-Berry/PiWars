// python wrapper for vtkDescriptiveStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDescriptiveStatistics.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDescriptiveStatistics(PyObject *dict); }
extern "C" { PyObject *PyvtkDescriptiveStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkStatisticsAlgorithm_ClassNew
extern "C" { PyObject *PyvtkStatisticsAlgorithm_ClassNew(); }
#define DECLARED_PyvtkStatisticsAlgorithm_ClassNew
#endif

static PyObject *
PyvtkDescriptiveStatistics_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDescriptiveStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDescriptiveStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDescriptiveStatistics *tempr = vtkDescriptiveStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDescriptiveStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDescriptiveStatistics::NewInstance());

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
PyvtkDescriptiveStatistics_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDescriptiveStatistics::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDescriptiveStatistics::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SetUnbiasedVariance(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetUnbiasedVariance."
    " (" "Please use SetSampleEstimate instead" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetUnbiasedVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnbiasedVariance(temp0);
    }
    else
    {
      op->vtkDescriptiveStatistics::SetUnbiasedVariance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_GetUnbiasedVariance(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetUnbiasedVariance."
    " (" "Please use GetSampleEstimate instead" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetUnbiasedVariance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUnbiasedVariance() :
      op->vtkDescriptiveStatistics::GetUnbiasedVariance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_UnbiasedVarianceOn(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method UnbiasedVarianceOn."
    " (" "Please use SetSampleEstimate instead" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "UnbiasedVarianceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnbiasedVarianceOn();
    }
    else
    {
      op->vtkDescriptiveStatistics::UnbiasedVarianceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_UnbiasedVarianceOff(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method UnbiasedVarianceOff."
    " (" "Please use SetSampleEstimate instead" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "UnbiasedVarianceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnbiasedVarianceOff();
    }
    else
    {
      op->vtkDescriptiveStatistics::UnbiasedVarianceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SetG1Skewness(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetG1Skewness."
    " (" "Please use SetSampleEstimate instead" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetG1Skewness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetG1Skewness(temp0);
    }
    else
    {
      op->vtkDescriptiveStatistics::SetG1Skewness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_GetG1Skewness(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetG1Skewness."
    " (" "Please use GetSampleEstimate instead" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetG1Skewness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetG1Skewness() :
      op->vtkDescriptiveStatistics::GetG1Skewness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_G1SkewnessOn(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method G1SkewnessOn."
    " (" "Please use SetSampleEstimate instead" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "G1SkewnessOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->G1SkewnessOn();
    }
    else
    {
      op->vtkDescriptiveStatistics::G1SkewnessOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_G1SkewnessOff(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method G1SkewnessOff."
    " (" "Please use SetSampleEstimate instead" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "G1SkewnessOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->G1SkewnessOff();
    }
    else
    {
      op->vtkDescriptiveStatistics::G1SkewnessOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SetG2Kurtosis(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetG2Kurtosis."
    " (" "Please use SetSampleEstimate instead" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetG2Kurtosis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetG2Kurtosis(temp0);
    }
    else
    {
      op->vtkDescriptiveStatistics::SetG2Kurtosis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_GetG2Kurtosis(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetG2Kurtosis."
    " (" "Please use GetSampleEstimate instead" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetG2Kurtosis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetG2Kurtosis() :
      op->vtkDescriptiveStatistics::GetG2Kurtosis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_G2KurtosisOn(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method G2KurtosisOn."
    " (" "Please use SetSampleEstimate instead" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "G2KurtosisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->G2KurtosisOn();
    }
    else
    {
      op->vtkDescriptiveStatistics::G2KurtosisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_G2KurtosisOff(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method G2KurtosisOff."
    " (" "Please use SetSampleEstimate instead" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "G2KurtosisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->G2KurtosisOff();
    }
    else
    {
      op->vtkDescriptiveStatistics::G2KurtosisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SetSampleEstimate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleEstimate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSampleEstimate(temp0);
    }
    else
    {
      op->vtkDescriptiveStatistics::SetSampleEstimate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_GetSampleEstimate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleEstimate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSampleEstimate() :
      op->vtkDescriptiveStatistics::GetSampleEstimate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SampleEstimateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SampleEstimateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SampleEstimateOn();
    }
    else
    {
      op->vtkDescriptiveStatistics::SampleEstimateOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SampleEstimateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SampleEstimateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SampleEstimateOff();
    }
    else
    {
      op->vtkDescriptiveStatistics::SampleEstimateOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SetSignedDeviations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSignedDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSignedDeviations(temp0);
    }
    else
    {
      op->vtkDescriptiveStatistics::SetSignedDeviations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_GetSignedDeviations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSignedDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSignedDeviations() :
      op->vtkDescriptiveStatistics::GetSignedDeviations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SignedDeviationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SignedDeviationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SignedDeviationsOn();
    }
    else
    {
      op->vtkDescriptiveStatistics::SignedDeviationsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SignedDeviationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SignedDeviationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SignedDeviationsOff();
    }
    else
    {
      op->vtkDescriptiveStatistics::SignedDeviationsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_SetGhostsToSkip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostsToSkip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGhostsToSkip(temp0);
    }
    else
    {
      op->vtkDescriptiveStatistics::SetGhostsToSkip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_GetGhostsToSkip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostsToSkip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetGhostsToSkip() :
      op->vtkDescriptiveStatistics::GetGhostsToSkip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDescriptiveStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDescriptiveStatistics *op = static_cast<vtkDescriptiveStatistics *>(vp);

  vtkDataObjectCollection *temp0 = nullptr;
  vtkMultiBlockDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectCollection") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet"))
  {
    if (ap.IsBound())
    {
      op->Aggregate(temp0, temp1);
    }
    else
    {
      op->vtkDescriptiveStatistics::Aggregate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDescriptiveStatistics_Methods[] = {
  {"IsTypeOf", PyvtkDescriptiveStatistics_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDescriptiveStatistics_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDescriptiveStatistics_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDescriptiveStatistics\nC++: static vtkDescriptiveStatistics *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDescriptiveStatistics_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDescriptiveStatistics\nC++: vtkDescriptiveStatistics *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDescriptiveStatistics_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDescriptiveStatistics_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetUnbiasedVariance", PyvtkDescriptiveStatistics_SetUnbiasedVariance, METH_VARARGS,
   "SetUnbiasedVariance(self, __a:int) -> None\nC++: virtual void SetUnbiasedVariance(vtkTypeBool)\n\n@warning THIS METHOD DOES NOTHING AND IS DEPRECATED.\n\nTo compute an unbiased variance, please set `SampleEstimate`\ninstead. When set to true, the sample variance is computed, which\nis unbiased.\n"},
  {"GetUnbiasedVariance", PyvtkDescriptiveStatistics_GetUnbiasedVariance, METH_VARARGS,
   "GetUnbiasedVariance(self) -> int\nC++: virtual vtkTypeBool GetUnbiasedVariance()\n\n"},
  {"UnbiasedVarianceOn", PyvtkDescriptiveStatistics_UnbiasedVarianceOn, METH_VARARGS,
   "UnbiasedVarianceOn(self) -> None\nC++: virtual void UnbiasedVarianceOn()\n\n"},
  {"UnbiasedVarianceOff", PyvtkDescriptiveStatistics_UnbiasedVarianceOff, METH_VARARGS,
   "UnbiasedVarianceOff(self) -> None\nC++: virtual void UnbiasedVarianceOff()\n\n"},
  {"SetG1Skewness", PyvtkDescriptiveStatistics_SetG1Skewness, METH_VARARGS,
   "SetG1Skewness(self, __a:int) -> None\nC++: virtual void SetG1Skewness(vtkTypeBool)\n\n@warning THIS METHOD DOES NOTHING AND IS DEPRECATED.\n\nSkewness estimator is picked depending on the state of\n`SampleEstimate`.\n"},
  {"GetG1Skewness", PyvtkDescriptiveStatistics_GetG1Skewness, METH_VARARGS,
   "GetG1Skewness(self) -> int\nC++: virtual vtkTypeBool GetG1Skewness()\n\n"},
  {"G1SkewnessOn", PyvtkDescriptiveStatistics_G1SkewnessOn, METH_VARARGS,
   "G1SkewnessOn(self) -> None\nC++: virtual void G1SkewnessOn()\n\n"},
  {"G1SkewnessOff", PyvtkDescriptiveStatistics_G1SkewnessOff, METH_VARARGS,
   "G1SkewnessOff(self) -> None\nC++: virtual void G1SkewnessOff()\n\n"},
  {"SetG2Kurtosis", PyvtkDescriptiveStatistics_SetG2Kurtosis, METH_VARARGS,
   "SetG2Kurtosis(self, __a:int) -> None\nC++: virtual void SetG2Kurtosis(vtkTypeBool)\n\n@warning THIS METHOD DOES NOTHING AND IS DEPRECATED.\n\nKurtosis estimator is picked depending on the state of\n`SampleEstimate`.\n"},
  {"GetG2Kurtosis", PyvtkDescriptiveStatistics_GetG2Kurtosis, METH_VARARGS,
   "GetG2Kurtosis(self) -> int\nC++: virtual vtkTypeBool GetG2Kurtosis()\n\n"},
  {"G2KurtosisOn", PyvtkDescriptiveStatistics_G2KurtosisOn, METH_VARARGS,
   "G2KurtosisOn(self) -> None\nC++: virtual void G2KurtosisOn()\n\n"},
  {"G2KurtosisOff", PyvtkDescriptiveStatistics_G2KurtosisOff, METH_VARARGS,
   "G2KurtosisOff(self) -> None\nC++: virtual void G2KurtosisOff()\n\n"},
  {"SetSampleEstimate", PyvtkDescriptiveStatistics_SetSampleEstimate, METH_VARARGS,
   "SetSampleEstimate(self, _arg:bool) -> None\nC++: virtual void SetSampleEstimate(bool _arg)\n\nGetter / Setter on `SampleEstimate`. When turned on, descriptive\nstatistics computed by this filter assume that the input data\nonly holds a sample of the whole population of study. In effect,\nthe sample variance, the sample standard deviation, the sample\nskewness and the sample kurtosis are estimated. When turned off,\nthe population variance, the population standard deviation, the\npopulation skewness and the population kurtosis are estimated\ninstead.\n\nIn short, if the input data is a full description of the\npopulation being studied, `SampleEstimate` should be turned off.\nIf the input data is a sample of the population being studied,\nthen `SampleEstimate` should be turned on. By default,\n`SampleEstimate` is turned on, as it is the most likely case.\n\nPlease see class description for a full description of the\nformulas.\n\note For large data, the difference between the population\nestimate and the sample estimate becomes thin, so this parameter\nbecomes of less worry.\n"},
  {"GetSampleEstimate", PyvtkDescriptiveStatistics_GetSampleEstimate, METH_VARARGS,
   "GetSampleEstimate(self) -> bool\nC++: virtual bool GetSampleEstimate()\n\n"},
  {"SampleEstimateOn", PyvtkDescriptiveStatistics_SampleEstimateOn, METH_VARARGS,
   "SampleEstimateOn(self) -> None\nC++: virtual void SampleEstimateOn()\n\n"},
  {"SampleEstimateOff", PyvtkDescriptiveStatistics_SampleEstimateOff, METH_VARARGS,
   "SampleEstimateOff(self) -> None\nC++: virtual void SampleEstimateOff()\n\n"},
  {"SetSignedDeviations", PyvtkDescriptiveStatistics_SetSignedDeviations, METH_VARARGS,
   "SetSignedDeviations(self, _arg:int) -> None\nC++: virtual void SetSignedDeviations(vtkTypeBool _arg)\n\nSet/get whether the deviations returned should be signed, or\nshould only have their magnitude reported. The default is that\nsigned deviations will be computed.\n"},
  {"GetSignedDeviations", PyvtkDescriptiveStatistics_GetSignedDeviations, METH_VARARGS,
   "GetSignedDeviations(self) -> int\nC++: virtual vtkTypeBool GetSignedDeviations()\n\n"},
  {"SignedDeviationsOn", PyvtkDescriptiveStatistics_SignedDeviationsOn, METH_VARARGS,
   "SignedDeviationsOn(self) -> None\nC++: virtual void SignedDeviationsOn()\n\n"},
  {"SignedDeviationsOff", PyvtkDescriptiveStatistics_SignedDeviationsOff, METH_VARARGS,
   "SignedDeviationsOff(self) -> None\nC++: virtual void SignedDeviationsOff()\n\n"},
  {"SetGhostsToSkip", PyvtkDescriptiveStatistics_SetGhostsToSkip, METH_VARARGS,
   "SetGhostsToSkip(self, _arg:int) -> None\nC++: virtual void SetGhostsToSkip(unsigned char _arg)\n\nIf there is a ghost array in the input, then ghosts matching\n`GhostsToSkip` mask will be skipped. It is set to 0xff by default\n(every ghosts types are skipped).\n\n@sa\nvtkDataSetAttributes vtkFieldData vtkPointData vtkCellData\n"},
  {"GetGhostsToSkip", PyvtkDescriptiveStatistics_GetGhostsToSkip, METH_VARARGS,
   "GetGhostsToSkip(self) -> int\nC++: virtual unsigned char GetGhostsToSkip()\n\n"},
  {"Aggregate", PyvtkDescriptiveStatistics_Aggregate, METH_VARARGS,
   "Aggregate(self, __a:vtkDataObjectCollection,\n    __b:vtkMultiBlockDataSet) -> None\nC++: void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *) override;\n\nGiven a collection of models, calculate aggregate model\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDescriptiveStatistics_Doc =
  "vtkDescriptiveStatistics - A class for univariate descriptive\nstatistics\n\n"
  "Superclass: vtkStatisticsAlgorithm\n\n"
  "Given a selection of columns of interest in an input data table, this\n"
  "class provides the following functionalities, depending on the chosen\n"
  "execution options:\n"
  "* Learn: calculate extremal values, sample mean, and M2, M3, and M4\n"
  "  aggregates (cf. P. Pebay, Formulas for robust, one-pass parallel\n"
  "  computation of covariances and Arbitrary-Order Statistical Moments,\n"
  "Sandia Report SAND2008-6212, Sep 2008,\n"
  "  http://infoserve.sandia.gov/sand_doc/2008/086212.pdf for details)\n"
  "* Derive: calculate unbiased variance estimator, standard deviation\n"
  "  estimator, two skewness estimators, and two kurtosis excess\n"
  "  estimators.\n"
  "* Assess: given an input data set, a reference value and a\n"
  "  non-negative deviation, mark each datum with corresponding relative\n"
  "deviation (1-dimensional Mahlanobis distance). If the deviation is\n"
  "  zero, then mark each datum which are equal to the reference value\n"
  "  with 0, and all others with 1. By default, the reference value and\n"
  "  the deviation are, respectively, the mean and the standard\n"
  "  deviation of the input model.\n"
  "* Test: calculate Jarque-Bera statistic and, if VTK to R interface is\n"
  "available, retrieve corresponding p-value for normality testing.\n\n"
  "Among the derived statistics, the variance, the standard deviation,\n"
  "the skewness and the kurtosis can be estimated in two ways: using the\n"
  "sample version of those statistics, or the population version.\n"
  "Specify whether a sample estimate or population estimate is done by\n"
  "setting `SampleEstimate`. By default, `SampleEstimate == true`, hence\n"
  "the sample version of the statistics is estimated, which produces\n"
  "unbiased estimators (except for the sample standard deviation). The\n"
  "sample estimate should be used for input that represent a subset of\n"
  "the whole population of study. On the other hand, when\n"
  "`SampleEstimate == false`, the population version of the statistics\n"
  "is estimated. If the input doesn't contain all the samples from the\n"
  "population of study, then a bias is induced (the variance is slightly\n"
  "bigger than it should be). One can read about Bessel's correction to\n"
  "understand better where this comes from. That being said, on very\n"
  "large data, the difference between the 2 estimation formulas becomes\n"
  "very low, so in those instances, either state of `SampleEstimate`\n"
  "should yield very similar results (see explicit formulas below).\n\n\n\n"
  " The formulas used are as follows, writing \\f( \\bar{X} \\f) the mean of \\f( X \\f) and \\f( N \\f)\n"
  " the number of samples:\n"
  " - Sample estimate:\n"
  "   \\f[\n"
  "    Var{X} = s^2 = \\frac{\\sum_{k=1}^N \\left(x_k - \\bar{x}\\right)^2 }{N - 1}\n"
  "   \\f]\n"
  "   \\f[\n"
  "    Skew{X} = \\frac{n}{(n - 1)(n - 2)}\n"
  "    \\frac{\\sum_{k=1}^N \\left(x_k - \\bar{x}\\right)^3 }{s^3}\n"
  "   \\f]\n"
  "   \\f[\n"
  "    Kurt{X} = \\frac{n(n + 1)}{(n - 1)(n - 2)(n - 3)}\n"
  "    \\frac{\\sum_{k=1}^N \\left(x_k - \\bar{x}\\right)^3 }{s^4}\n"
  "    - 3 \\frac{(n - 1)^2}{(n - 2)(n - 3)}\n"
  "   \\f]\n"
  " - Population estimate:\n"
  "   \\f[\n"
  "    Var{X} = \\sigma^2 = \\frac{\\sum_{k=1}^N \\left(x_k - \\bar{x}\\right)^2 }{N}\n"
  "   \\f]\n"
  "   \\f[\n"
  "    Skew{X} = \\frac{1}{N}\\frac{\\sum_{k=1}^N \\left(x_k - \\bar{x}\\right)^3 }{\\sigma^3}\n"
  "   \\f]\n"
  "   \\f[\n"
  "    Kurt{X} = \\frac{1}{N}\\frac{\\sum_{k=1}^N \\left(x_k - \\bar{x}\\right)^3 }{\\sigma^4} - 3\n"
  "   \\f]\n\n"
  " \\f(\\sigma\\f) is the population standard deviation, and \\f(s\\f) is the sample standard deviation.\n"
  " Note that the kurtosis is corrected so the kurtosis of a gaussian distribution should yield 0.\n\n"
  " In the instance where \\f(\\sigma = 0\\f) or \\f(s = 0\\f), the skewness and kurtosis are undefined.\n"
  " Thus they output a `NaN`. Similarly, if there are no samples, then all derived statistics\n"
  " yield a `NaN`.\n\n"
  " \n\n"
  "@par Thanks: Thanks to Philippe Pebay and David Thompson from Sandia\n"
  "National Laboratories for implementing this class. Updated by\n"
  "Philippe Pebay, Kitware SAS 2012\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDescriptiveStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersStatistics.vtkDescriptiveStatistics", // tp_name
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
  PyvtkDescriptiveStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDescriptiveStatistics_StaticNew()
{
  return vtkDescriptiveStatistics::New();
}

PyObject *PyvtkDescriptiveStatistics_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDescriptiveStatistics_Type, PyvtkDescriptiveStatistics_Methods,
    "vtkDescriptiveStatistics",
 &PyvtkDescriptiveStatistics_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkStatisticsAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDescriptiveStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDescriptiveStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDescriptiveStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

