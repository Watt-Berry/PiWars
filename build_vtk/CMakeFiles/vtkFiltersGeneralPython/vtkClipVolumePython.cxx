// python wrapper for vtkClipVolume
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkClipVolume.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkClipVolume(PyObject *dict); }
extern "C" { PyObject *PyvtkClipVolume_ClassNew(); }


static PyObject *
PyvtkClipVolume_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkClipVolume::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClipVolume::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkClipVolume *tempr = vtkClipVolume::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClipVolume *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClipVolume::NewInstance());

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
PyvtkClipVolume_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkClipVolume::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkClipVolume::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

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
      op->vtkClipVolume::SetValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkClipVolume::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

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
      op->vtkClipVolume::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkClipVolume::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkClipVolume::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkClipVolume::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_SetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

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
      op->vtkClipVolume::SetClipFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetClipFunction() :
      op->vtkClipVolume::GetClipFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_SetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

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
      op->vtkClipVolume::SetGenerateClipScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClipScalars() :
      op->vtkClipVolume::GetGenerateClipScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GenerateClipScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClipScalarsOn();
    }
    else
    {
      op->vtkClipVolume::GenerateClipScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GenerateClipScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClipScalarsOff();
    }
    else
    {
      op->vtkClipVolume::GenerateClipScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_SetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

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
      op->vtkClipVolume::SetGenerateClippedOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClippedOutput() :
      op->vtkClipVolume::GetGenerateClippedOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GenerateClippedOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClippedOutputOn();
    }
    else
    {
      op->vtkClipVolume::GenerateClippedOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GenerateClippedOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClippedOutputOff();
    }
    else
    {
      op->vtkClipVolume::GenerateClippedOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GetClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetClippedOutput() :
      op->vtkClipVolume::GetClippedOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_SetMixed3DCellGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMixed3DCellGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMixed3DCellGeneration(temp0);
    }
    else
    {
      op->vtkClipVolume::SetMixed3DCellGeneration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GetMixed3DCellGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMixed3DCellGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMixed3DCellGeneration() :
      op->vtkClipVolume::GetMixed3DCellGeneration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_Mixed3DCellGenerationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Mixed3DCellGenerationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Mixed3DCellGenerationOn();
    }
    else
    {
      op->vtkClipVolume::Mixed3DCellGenerationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_Mixed3DCellGenerationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Mixed3DCellGenerationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Mixed3DCellGenerationOff();
    }
    else
    {
      op->vtkClipVolume::Mixed3DCellGenerationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_SetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

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
      op->vtkClipVolume::SetMergeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GetMergeToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeToleranceMinValue() :
      op->vtkClipVolume::GetMergeToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GetMergeToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeToleranceMaxValue() :
      op->vtkClipVolume::GetMergeToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeTolerance() :
      op->vtkClipVolume::GetMergeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

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
      op->vtkClipVolume::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkClipVolume::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkClipVolume::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipVolume_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipVolume *op = static_cast<vtkClipVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkClipVolume::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkClipVolume_Methods[] = {
  {"IsTypeOf", PyvtkClipVolume_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkClipVolume_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkClipVolume_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkClipVolume\nC++: static vtkClipVolume *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkClipVolume_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkClipVolume\nC++: vtkClipVolume *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkClipVolume_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkClipVolume_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetValue", PyvtkClipVolume_SetValue, METH_VARARGS,
   "SetValue(self, _arg:float) -> None\nC++: virtual void SetValue(double _arg)\n\nSet the clipping value of the implicit function (if clipping with\nimplicit function) or scalar value (if clipping with scalars).\nThe default value is 0.0.\n"},
  {"GetValue", PyvtkClipVolume_GetValue, METH_VARARGS,
   "GetValue(self) -> float\nC++: virtual double GetValue()\n\n"},
  {"SetInsideOut", PyvtkClipVolume_SetInsideOut, METH_VARARGS,
   "SetInsideOut(self, _arg:int) -> None\nC++: virtual void SetInsideOut(vtkTypeBool _arg)\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {"GetInsideOut", PyvtkClipVolume_GetInsideOut, METH_VARARGS,
   "GetInsideOut(self) -> int\nC++: virtual vtkTypeBool GetInsideOut()\n\n"},
  {"InsideOutOn", PyvtkClipVolume_InsideOutOn, METH_VARARGS,
   "InsideOutOn(self) -> None\nC++: virtual void InsideOutOn()\n\n"},
  {"InsideOutOff", PyvtkClipVolume_InsideOutOff, METH_VARARGS,
   "InsideOutOff(self) -> None\nC++: virtual void InsideOutOff()\n\n"},
  {"SetClipFunction", PyvtkClipVolume_SetClipFunction, METH_VARARGS,
   "SetClipFunction(self, __a:vtkImplicitFunction) -> None\nC++: virtual void SetClipFunction(vtkImplicitFunction *)\n\nSpecify the implicit function with which to perform the clipping.\nIf you do not define an implicit function, then the input scalar\ndata will be used for clipping.\n"},
  {"GetClipFunction", PyvtkClipVolume_GetClipFunction, METH_VARARGS,
   "GetClipFunction(self) -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetClipFunction()\n\n"},
  {"SetGenerateClipScalars", PyvtkClipVolume_SetGenerateClipScalars, METH_VARARGS,
   "SetGenerateClipScalars(self, _arg:int) -> None\nC++: virtual void SetGenerateClipScalars(vtkTypeBool _arg)\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {"GetGenerateClipScalars", PyvtkClipVolume_GetGenerateClipScalars, METH_VARARGS,
   "GetGenerateClipScalars(self) -> int\nC++: virtual vtkTypeBool GetGenerateClipScalars()\n\n"},
  {"GenerateClipScalarsOn", PyvtkClipVolume_GenerateClipScalarsOn, METH_VARARGS,
   "GenerateClipScalarsOn(self) -> None\nC++: virtual void GenerateClipScalarsOn()\n\n"},
  {"GenerateClipScalarsOff", PyvtkClipVolume_GenerateClipScalarsOff, METH_VARARGS,
   "GenerateClipScalarsOff(self) -> None\nC++: virtual void GenerateClipScalarsOff()\n\n"},
  {"SetGenerateClippedOutput", PyvtkClipVolume_SetGenerateClippedOutput, METH_VARARGS,
   "SetGenerateClippedOutput(self, _arg:int) -> None\nC++: virtual void SetGenerateClippedOutput(vtkTypeBool _arg)\n\nControl whether a second output is generated. The second output\ncontains the unstructured grid that's been clipped away.\n"},
  {"GetGenerateClippedOutput", PyvtkClipVolume_GetGenerateClippedOutput, METH_VARARGS,
   "GetGenerateClippedOutput(self) -> int\nC++: virtual vtkTypeBool GetGenerateClippedOutput()\n\n"},
  {"GenerateClippedOutputOn", PyvtkClipVolume_GenerateClippedOutputOn, METH_VARARGS,
   "GenerateClippedOutputOn(self) -> None\nC++: virtual void GenerateClippedOutputOn()\n\n"},
  {"GenerateClippedOutputOff", PyvtkClipVolume_GenerateClippedOutputOff, METH_VARARGS,
   "GenerateClippedOutputOff(self) -> None\nC++: virtual void GenerateClippedOutputOff()\n\n"},
  {"GetClippedOutput", PyvtkClipVolume_GetClippedOutput, METH_VARARGS,
   "GetClippedOutput(self) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetClippedOutput()\n\nReturn the clipped output.\n"},
  {"SetMixed3DCellGeneration", PyvtkClipVolume_SetMixed3DCellGeneration, METH_VARARGS,
   "SetMixed3DCellGeneration(self, _arg:int) -> None\nC++: virtual void SetMixed3DCellGeneration(vtkTypeBool _arg)\n\nControl whether the filter produces a mix of 3D cell types on\noutput, or whether the output cells are all tetrahedra. By\ndefault, a mixed set of cells (e.g., tetrahedra and wedges) is\nproduced. (Note: mixed type generation is faster and less overall\ndata is generated.)\n"},
  {"GetMixed3DCellGeneration", PyvtkClipVolume_GetMixed3DCellGeneration, METH_VARARGS,
   "GetMixed3DCellGeneration(self) -> int\nC++: virtual vtkTypeBool GetMixed3DCellGeneration()\n\n"},
  {"Mixed3DCellGenerationOn", PyvtkClipVolume_Mixed3DCellGenerationOn, METH_VARARGS,
   "Mixed3DCellGenerationOn(self) -> None\nC++: virtual void Mixed3DCellGenerationOn()\n\n"},
  {"Mixed3DCellGenerationOff", PyvtkClipVolume_Mixed3DCellGenerationOff, METH_VARARGS,
   "Mixed3DCellGenerationOff(self) -> None\nC++: virtual void Mixed3DCellGenerationOff()\n\n"},
  {"SetMergeTolerance", PyvtkClipVolume_SetMergeTolerance, METH_VARARGS,
   "SetMergeTolerance(self, _arg:float) -> None\nC++: virtual void SetMergeTolerance(double _arg)\n\nSet the tolerance for merging clip intersection points that are\nnear the corners of voxels. This tolerance is used to prevent the\ngeneration of degenerate tetrahedra.\n"},
  {"GetMergeToleranceMinValue", PyvtkClipVolume_GetMergeToleranceMinValue, METH_VARARGS,
   "GetMergeToleranceMinValue(self) -> float\nC++: virtual double GetMergeToleranceMinValue()\n\n"},
  {"GetMergeToleranceMaxValue", PyvtkClipVolume_GetMergeToleranceMaxValue, METH_VARARGS,
   "GetMergeToleranceMaxValue(self) -> float\nC++: virtual double GetMergeToleranceMaxValue()\n\n"},
  {"GetMergeTolerance", PyvtkClipVolume_GetMergeTolerance, METH_VARARGS,
   "GetMergeTolerance(self) -> float\nC++: virtual double GetMergeTolerance()\n\n"},
  {"SetLocator", PyvtkClipVolume_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkIncrementalPointLocator) -> None\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / Get a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkClipVolume_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\n"},
  {"CreateDefaultLocator", PyvtkClipVolume_CreateDefaultLocator, METH_VARARGS,
   "CreateDefaultLocator(self) -> None\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {"GetMTime", PyvtkClipVolume_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the mtime also considering the locator and clip function.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkClipVolume_Doc =
  "vtkClipVolume - clip volume data with user-specified implicit\nfunction or input scalar data\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkClipVolume is a filter that clips volume data (i.e., vtkImageData)\n"
  "using either: any subclass of vtkImplicitFunction or the input scalar\n"
  "data. The clipping operation cuts through the cells of the\n"
  "dataset--converting 3D image data into a 3D unstructured\n"
  "grid--returning everything inside of the specified implicit function\n"
  "(or greater than the scalar value). During the clipping the filter\n"
  "will produce pieces of a cell. (Compare this with vtkExtractGeometry\n"
  "or vtkGeometryFilter, which produces entire, uncut cells.) The output\n"
  "of this filter is a 3D unstructured grid (e.g., tetrahedra or other\n"
  "3D cell types).\n\n"
  "To use this filter, you must decide if you will be clipping with an\n"
  "implicit function, or whether you will be using the input scalar\n"
  "data.  If you want to clip with an implicit function, you must first\n"
  "define and then set the implicit function with the SetClipFunction()\n"
  "method. Otherwise, you must make sure input scalar data is available.\n"
  "You can also specify a scalar value, which is used to decide what is\n"
  "inside and outside of the implicit function. You can also reverse the\n"
  "sense of what inside/outside is by setting the InsideOut instance\n"
  "variable. (The cutting algorithm proceeds by computing an implicit\n"
  "function value or using the input scalar data for each point in the\n"
  "dataset. This is compared to the scalar value to determine\n"
  "inside/outside.)\n\n"
  "This filter can be configured to compute a second output. The second\n"
  "output is the portion of the volume that is clipped away. Set the\n"
  "GenerateClippedData boolean on if you wish to access this output\n"
  "data.\n\n"
  "The filter will produce an unstructured grid of entirely tetrahedra\n"
  "or a mixed grid of tetrahedra and other 3D cell types (e.g., wedges).\n"
  "Control this behavior by setting the Mixed3DCellGeneration. By\n"
  "default the Mixed3DCellGeneration is on and a combination of cell\n"
  "types will be produced. Note that producing mixed cell types is a\n"
  "faster than producing only tetrahedra.\n\n"
  "@warning\n"
  "This filter is designed to function with 3D structured points.\n"
  "Clipping 2D images should be done by converting the image to\n"
  "polygonal data and using vtkClipPolyData,\n\n"
  "@sa\n"
  "vtkImplicitFunction vtkClipPolyData vtkGeometryFilter\n"
  "vtkExtractGeometry\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkClipVolume_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkClipVolume", // tp_name
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
  PyvtkClipVolume_Doc, // tp_doc
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

static vtkObjectBase *PyvtkClipVolume_StaticNew()
{
  return vtkClipVolume::New();
}

PyObject *PyvtkClipVolume_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkClipVolume_Type, PyvtkClipVolume_Methods,
    "vtkClipVolume",
 &PyvtkClipVolume_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkClipVolume(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkClipVolume_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkClipVolume", o) != 0)
  {
    Py_DECREF(o);
  }

}

