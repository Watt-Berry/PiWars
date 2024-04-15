// python wrapper for vtkTableBasedClipDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTableBasedClipDataSet.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTableBasedClipDataSet(PyObject *dict); }
extern "C" { PyObject *PyvtkTableBasedClipDataSet_ClassNew(); }


static PyObject *
PyvtkTableBasedClipDataSet_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTableBasedClipDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableBasedClipDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTableBasedClipDataSet *tempr = vtkTableBasedClipDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTableBasedClipDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableBasedClipDataSet::NewInstance());

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
PyvtkTableBasedClipDataSet_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTableBasedClipDataSet::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTableBasedClipDataSet::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTableBasedClipDataSet::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

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
      op->vtkTableBasedClipDataSet::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkTableBasedClipDataSet::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkTableBasedClipDataSet::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkTableBasedClipDataSet::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkTableBasedClipDataSet::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetUseValueAsOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseValueAsOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseValueAsOffset(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetUseValueAsOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetUseValueAsOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseValueAsOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseValueAsOffset() :
      op->vtkTableBasedClipDataSet::GetUseValueAsOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_UseValueAsOffsetOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseValueAsOffsetOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseValueAsOffsetOn();
    }
    else
    {
      op->vtkTableBasedClipDataSet::UseValueAsOffsetOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_UseValueAsOffsetOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseValueAsOffsetOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseValueAsOffsetOff();
    }
    else
    {
      op->vtkTableBasedClipDataSet::UseValueAsOffsetOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetClipFunction(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetClipFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetClipFunction() :
      op->vtkTableBasedClipDataSet::GetClipFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateClipScalars(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetGenerateClipScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClipScalars() :
      op->vtkTableBasedClipDataSet::GetGenerateClipScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GenerateClipScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClipScalarsOn();
    }
    else
    {
      op->vtkTableBasedClipDataSet::GenerateClipScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GenerateClipScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClipScalarsOff();
    }
    else
    {
      op->vtkTableBasedClipDataSet::GenerateClipScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeTolerance(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetMergeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetMergeToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeToleranceMinValue() :
      op->vtkTableBasedClipDataSet::GetMergeToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetMergeToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeToleranceMaxValue() :
      op->vtkTableBasedClipDataSet::GetMergeToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeTolerance() :
      op->vtkTableBasedClipDataSet::GetMergeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateClippedOutput(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetGenerateClippedOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClippedOutput() :
      op->vtkTableBasedClipDataSet::GetGenerateClippedOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GenerateClippedOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClippedOutputOn();
    }
    else
    {
      op->vtkTableBasedClipDataSet::GenerateClippedOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GenerateClippedOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClippedOutputOff();
    }
    else
    {
      op->vtkTableBasedClipDataSet::GenerateClippedOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetClippedOutput() :
      op->vtkTableBasedClipDataSet::GetClippedOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkTableBasedClipDataSet::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkTableBasedClipDataSet::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkTableBasedClipDataSet::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetBatchSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBatchSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  unsigned int temp0;
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
      op->vtkTableBasedClipDataSet::SetBatchSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetBatchSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBatchSizeMinValue() :
      op->vtkTableBasedClipDataSet::GetBatchSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetBatchSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBatchSizeMaxValue() :
      op->vtkTableBasedClipDataSet::GetBatchSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetBatchSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBatchSize() :
      op->vtkTableBasedClipDataSet::GetBatchSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkTableBasedClipDataSet::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableBasedClipDataSet_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableBasedClipDataSet *op = static_cast<vtkTableBasedClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkTableBasedClipDataSet::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTableBasedClipDataSet_Methods[] = {
  {"IsTypeOf", PyvtkTableBasedClipDataSet_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTableBasedClipDataSet_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTableBasedClipDataSet_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTableBasedClipDataSet\nC++: static vtkTableBasedClipDataSet *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTableBasedClipDataSet_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTableBasedClipDataSet\nC++: vtkTableBasedClipDataSet *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTableBasedClipDataSet_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTableBasedClipDataSet_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkTableBasedClipDataSet_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime for which the clip function are considered.\n"},
  {"SetInsideOut", PyvtkTableBasedClipDataSet_SetInsideOut, METH_VARARGS,
   "SetInsideOut(self, _arg:int) -> None\nC++: virtual void SetInsideOut(vtkTypeBool _arg)\n\nSet/Get the InsideOut flag. With this flag off, a vertex is\nconsidered inside (the implicit function or the isosurface) if\nthe (function or scalar) value is greater than IVAR Value. With\nthis flag on, a vertex is considered inside (the implicit\nfunction or the isosurface) if the (function or scalar) value is\nless than or equal to IVAR Value. This flag is off by default.\n"},
  {"GetInsideOut", PyvtkTableBasedClipDataSet_GetInsideOut, METH_VARARGS,
   "GetInsideOut(self) -> int\nC++: virtual vtkTypeBool GetInsideOut()\n\n"},
  {"InsideOutOn", PyvtkTableBasedClipDataSet_InsideOutOn, METH_VARARGS,
   "InsideOutOn(self) -> None\nC++: virtual void InsideOutOn()\n\n"},
  {"InsideOutOff", PyvtkTableBasedClipDataSet_InsideOutOff, METH_VARARGS,
   "InsideOutOff(self) -> None\nC++: virtual void InsideOutOff()\n\n"},
  {"SetValue", PyvtkTableBasedClipDataSet_SetValue, METH_VARARGS,
   "SetValue(self, _arg:float) -> None\nC++: virtual void SetValue(double _arg)\n\nSet/Get the clipping value of the implicit function (if an\nimplicit function is applied) or scalar data array (if a scalar\ndata array is used), with 0.0 as the default value. This value is\nignored if flag UseValueAsOffset is true AND a clip function is\ndefined.\n"},
  {"GetValue", PyvtkTableBasedClipDataSet_GetValue, METH_VARARGS,
   "GetValue(self) -> float\nC++: virtual double GetValue()\n\n"},
  {"SetUseValueAsOffset", PyvtkTableBasedClipDataSet_SetUseValueAsOffset, METH_VARARGS,
   "SetUseValueAsOffset(self, _arg:bool) -> None\nC++: virtual void SetUseValueAsOffset(bool _arg)\n\nSet/Get flag UseValueAsOffset, with true as the default value.\nWith this flag on, IVAR Value is used as an offset parameter to\nthe implicit function. Value is used only when clipping using a\nscalar array.\n"},
  {"GetUseValueAsOffset", PyvtkTableBasedClipDataSet_GetUseValueAsOffset, METH_VARARGS,
   "GetUseValueAsOffset(self) -> bool\nC++: virtual bool GetUseValueAsOffset()\n\n"},
  {"UseValueAsOffsetOn", PyvtkTableBasedClipDataSet_UseValueAsOffsetOn, METH_VARARGS,
   "UseValueAsOffsetOn(self) -> None\nC++: virtual void UseValueAsOffsetOn()\n\n"},
  {"UseValueAsOffsetOff", PyvtkTableBasedClipDataSet_UseValueAsOffsetOff, METH_VARARGS,
   "UseValueAsOffsetOff(self) -> None\nC++: virtual void UseValueAsOffsetOff()\n\n"},
  {"SetClipFunction", PyvtkTableBasedClipDataSet_SetClipFunction, METH_VARARGS,
   "SetClipFunction(self, __a:vtkImplicitFunction) -> None\nC++: virtual void SetClipFunction(vtkImplicitFunction *)\n\nSet/Get the implicit function with which to perform the clipping\noperation. Unless an implicit function is defined, the specified\ninput scalar data will be used for clipping.\n"},
  {"GetClipFunction", PyvtkTableBasedClipDataSet_GetClipFunction, METH_VARARGS,
   "GetClipFunction(self) -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetClipFunction()\n\n"},
  {"SetGenerateClipScalars", PyvtkTableBasedClipDataSet_SetGenerateClipScalars, METH_VARARGS,
   "SetGenerateClipScalars(self, _arg:int) -> None\nC++: virtual void SetGenerateClipScalars(vtkTypeBool _arg)\n\nSet/Get flag GenerateClipScalars, with 0 as the default value.\nWith this flag on, the scalar point data values obtained by\nevaluating the implicit function will be exported to the output.\nNote that this flag requiries that an implicit function be\nprovided.\n"},
  {"GetGenerateClipScalars", PyvtkTableBasedClipDataSet_GetGenerateClipScalars, METH_VARARGS,
   "GetGenerateClipScalars(self) -> int\nC++: virtual vtkTypeBool GetGenerateClipScalars()\n\n"},
  {"GenerateClipScalarsOn", PyvtkTableBasedClipDataSet_GenerateClipScalarsOn, METH_VARARGS,
   "GenerateClipScalarsOn(self) -> None\nC++: virtual void GenerateClipScalarsOn()\n\n"},
  {"GenerateClipScalarsOff", PyvtkTableBasedClipDataSet_GenerateClipScalarsOff, METH_VARARGS,
   "GenerateClipScalarsOff(self) -> None\nC++: virtual void GenerateClipScalarsOff()\n\n"},
  {"SetMergeTolerance", PyvtkTableBasedClipDataSet_SetMergeTolerance, METH_VARARGS,
   "SetMergeTolerance(self, _arg:float) -> None\nC++: virtual void SetMergeTolerance(double _arg)\n\nSet/Get the tolerance used for merging duplicate points near the\nclipping intersection cells. This tolerance may prevent the\ngeneration of degenerate primitives. Note that only 3D cells\nactually use this IVAR when vtkClipDataSet is invoked as last\nresort.\n"},
  {"GetMergeToleranceMinValue", PyvtkTableBasedClipDataSet_GetMergeToleranceMinValue, METH_VARARGS,
   "GetMergeToleranceMinValue(self) -> float\nC++: virtual double GetMergeToleranceMinValue()\n\n"},
  {"GetMergeToleranceMaxValue", PyvtkTableBasedClipDataSet_GetMergeToleranceMaxValue, METH_VARARGS,
   "GetMergeToleranceMaxValue(self) -> float\nC++: virtual double GetMergeToleranceMaxValue()\n\n"},
  {"GetMergeTolerance", PyvtkTableBasedClipDataSet_GetMergeTolerance, METH_VARARGS,
   "GetMergeTolerance(self) -> float\nC++: virtual double GetMergeTolerance()\n\n"},
  {"SetGenerateClippedOutput", PyvtkTableBasedClipDataSet_SetGenerateClippedOutput, METH_VARARGS,
   "SetGenerateClippedOutput(self, _arg:int) -> None\nC++: virtual void SetGenerateClippedOutput(vtkTypeBool _arg)\n\nSet/Get whether a second output is generated. The second output\ncontains the polygonal data that is clipped away by the\niso-surface.\n"},
  {"GetGenerateClippedOutput", PyvtkTableBasedClipDataSet_GetGenerateClippedOutput, METH_VARARGS,
   "GetGenerateClippedOutput(self) -> int\nC++: virtual vtkTypeBool GetGenerateClippedOutput()\n\n"},
  {"GenerateClippedOutputOn", PyvtkTableBasedClipDataSet_GenerateClippedOutputOn, METH_VARARGS,
   "GenerateClippedOutputOn(self) -> None\nC++: virtual void GenerateClippedOutputOn()\n\n"},
  {"GenerateClippedOutputOff", PyvtkTableBasedClipDataSet_GenerateClippedOutputOff, METH_VARARGS,
   "GenerateClippedOutputOff(self) -> None\nC++: virtual void GenerateClippedOutputOff()\n\n"},
  {"GetClippedOutput", PyvtkTableBasedClipDataSet_GetClippedOutput, METH_VARARGS,
   "GetClippedOutput(self) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetClippedOutput()\n\nReturn the clipped output.\n"},
  {"SetOutputPointsPrecision", PyvtkTableBasedClipDataSet_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMinValue", PyvtkTableBasedClipDataSet_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   "GetOutputPointsPrecisionMinValue(self) -> int\nC++: virtual int GetOutputPointsPrecisionMinValue()\n\n"},
  {"GetOutputPointsPrecisionMaxValue", PyvtkTableBasedClipDataSet_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   "GetOutputPointsPrecisionMaxValue(self) -> int\nC++: virtual int GetOutputPointsPrecisionMaxValue()\n\n"},
  {"GetOutputPointsPrecision", PyvtkTableBasedClipDataSet_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"SetBatchSize", PyvtkTableBasedClipDataSet_SetBatchSize, METH_VARARGS,
   "SetBatchSize(self, _arg:int) -> None\nC++: virtual void SetBatchSize(unsigned int _arg)\n\nSpecify the number of input cells in a batch, where a batch\ndefines a subset of the input cells operated on during threaded\nexecution. Generally this is only used for debugging or\nperformance studies (since batch size affects the thread\nworkload).\n\nDefault is 1000.\n"},
  {"GetBatchSizeMinValue", PyvtkTableBasedClipDataSet_GetBatchSizeMinValue, METH_VARARGS,
   "GetBatchSizeMinValue(self) -> int\nC++: virtual unsigned int GetBatchSizeMinValue()\n\n"},
  {"GetBatchSizeMaxValue", PyvtkTableBasedClipDataSet_GetBatchSizeMaxValue, METH_VARARGS,
   "GetBatchSizeMaxValue(self) -> int\nC++: virtual unsigned int GetBatchSizeMaxValue()\n\n"},
  {"GetBatchSize", PyvtkTableBasedClipDataSet_GetBatchSize, METH_VARARGS,
   "GetBatchSize(self) -> int\nC++: virtual unsigned int GetBatchSize()\n\n"},
  {"SetLocator", PyvtkTableBasedClipDataSet_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkIncrementalPointLocator) -> None\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. Forwarded to\nvtkClipDataSet.\n"},
  {"GetLocator", PyvtkTableBasedClipDataSet_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTableBasedClipDataSet_Doc =
  "vtkTableBasedClipDataSet - Clip any dataset with a user-specified\n implicit function or an input scalar point data array.\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkTableBasedClipDataSet is a filter that clips any type of dataset\n"
  "using\n"
  " either any subclass of vtkImplicitFunction or an input scalar point\n"
  "data\n"
  " array. Clipping means that it actually \"cuts\" through the cells of\n"
  "the\n"
  " dataset, returning everything outside the specified implicit\n"
  "function (or\n"
  " greater than the scalar value) including \"pieces\" of a cell (Note to\n"
  "compare\n"
  " this with vtkExtractGeometry, which pulls out entire, uncut cells).\n"
  "The\n"
  " output of this filter is a vtkUnstructuredGrid data.\n\n\n"
  " To use this filter, you need to decide whether an implicit function\n"
  "or an\n"
  " input scalar point data array is used for clipping. For the former\n"
  "case,\n"
  "1) define an implicit function\n"
  "2) provide it to this filter via SetClipFunction() If a clipping\n"
  "   function is not specified, or GenerateClipScalars is off( the\n"
  "   default), the input scalar point data array is then employed for\n"
  "   clipping.\n\n\n"
  " You can also specify a scalar (iso-)value, which is used to decide\n"
  "what is\n"
  " inside and outside the implicit function. You can also reverse the\n"
  "sense of\n"
  " what inside/outside is by setting IVAR InsideOut. The clipping\n"
  "algorithm\n"
  " proceeds by computing an implicit function value or using the input\n"
  "scalar\n"
  " point data value for each point in the dataset. This is compared\n"
  "against the\n"
  " scalar (iso-)value to determine the inside/outside status.\n\n\n"
  " Although this filter sometimes (but rarely) may resort to the\n"
  "sibling class\n"
  " vtkClipDataSet for handling some special grids (such as cylinders or\n"
  "cones\n"
  " with capping faces in the form of a vtkPolyData), it itself is able\n"
  "to deal\n"
  " with most grids. It is worth mentioning that\n"
  "vtkTableBasedClipDataSet is\n"
  " capable of addressing the artifacts that may occur with\n"
  "vtkClipDataSet due\n"
  " to the possibly inconsistent triangulation modes between neighboring\n"
  "cells.\n"
  " In addition, the former is much faster than the latter. Furthermore,\n"
  "the\n"
  " former produces less cells (with ratio usually being 5~6) than by\n"
  "the latter\n"
  " in the output. In other words, this filter retains the original\n"
  "cells (i.e.,\n"
  " without triangulation / tetrahedralization) wherever possible. All\n"
  "these\n"
  " advantages are gained by adopting the unique clipping and\n"
  "triangulation tables\n"
  " proposed by VisIt.\n\n"
  "@warning\n"
  " vtkTableBasedClipDataSet makes use of a hash table (that is provided\n"
  "by class\n"
  " maintained by internal class vtkTableBasedClipperDataSetFromVolume)\n"
  "to achieve\n"
  " rapid removal of duplicate points. The hash-based mechanism simply\n"
  "compares the\n"
  " point Ids, without considering the actual inter-point distance\n"
  "(vtkClipDataSet\n"
  " adopts vtkMergePoints that though considers the inter-point distance\n"
  "for robust\n"
  " points merging ). As a result, some duplicate points may be present\n"
  "in the output.\n"
  " This problem occurs when some boundary (cut-through cells) happen to\n"
  "have faces\n"
  " EXACTLY aligned with the clipping plane (such as Plane, Box, or\n"
  "other implicit\n"
  " functions with planar shapes). The occurrence (though very rare) of\n"
  "duplicate\n"
  " points produces degenerate cells, which can be fixed by\n"
  "post-processing the\n"
  " output with a filter like vtkCleanGrid.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@par Thanks:\n"
  " This filter was adapted from the VisIt clipper (vtkVisItClipper).\n\n"
  "@sa\n"
  " vtkClipDataSet vtkClipVolume vtkClipPolyData vtkCutter\n"
  "vtkImplicitFunction\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTableBasedClipDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkTableBasedClipDataSet", // tp_name
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
  PyvtkTableBasedClipDataSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTableBasedClipDataSet_StaticNew()
{
  return vtkTableBasedClipDataSet::New();
}

PyObject *PyvtkTableBasedClipDataSet_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTableBasedClipDataSet_Type, PyvtkTableBasedClipDataSet_Methods,
    "vtkTableBasedClipDataSet",
 &PyvtkTableBasedClipDataSet_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTableBasedClipDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTableBasedClipDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTableBasedClipDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

