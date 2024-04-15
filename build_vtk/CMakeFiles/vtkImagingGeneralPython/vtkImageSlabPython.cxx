// python wrapper for vtkImageSlab
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageSlab.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageSlab(PyObject *dict); }
extern "C" { PyObject *PyvtkImageSlab_ClassNew(); }


static PyObject *
PyvtkImageSlab_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageSlab::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSlab::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageSlab *tempr = vtkImageSlab::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSlab *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSlab::NewInstance());

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
PyvtkImageSlab_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageSlab::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageSlab::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkImageSlab::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOrientationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMinValue() :
      op->vtkImageSlab::GetOrientationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOrientationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMaxValue() :
      op->vtkImageSlab::GetOrientationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOrientationToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToX();
    }
    else
    {
      op->vtkImageSlab::SetOrientationToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOrientationToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToY();
    }
    else
    {
      op->vtkImageSlab::SetOrientationToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOrientationToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToZ();
    }
    else
    {
      op->vtkImageSlab::SetOrientationToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkImageSlab::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetSliceRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSliceRange(temp0, temp1);
    }
    else
    {
      op->vtkImageSlab::SetSliceRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageSlab_SetSliceRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSliceRange(temp0);
    }
    else
    {
      op->vtkImageSlab::SetSliceRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageSlab_SetSliceRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageSlab_SetSliceRange_s1(self, args);
    case 1:
      return PyvtkImageSlab_SetSliceRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceRange");
  return nullptr;
}


static PyObject *
PyvtkImageSlab_GetSliceRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSliceRange() :
      op->vtkImageSlab::GetSliceRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOperation(temp0);
    }
    else
    {
      op->vtkImageSlab::SetOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOperationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationMinValue() :
      op->vtkImageSlab::GetOperationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOperationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationMaxValue() :
      op->vtkImageSlab::GetOperationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOperationToMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMin();
    }
    else
    {
      op->vtkImageSlab::SetOperationToMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOperationToMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMax();
    }
    else
    {
      op->vtkImageSlab::SetOperationToMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOperationToMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMean();
    }
    else
    {
      op->vtkImageSlab::SetOperationToMean();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOperationToSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToSum();
    }
    else
    {
      op->vtkImageSlab::SetOperationToSum();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperation() :
      op->vtkImageSlab::GetOperation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOperationAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOperationAsString() :
      op->vtkImageSlab::GetOperationAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetTrapezoidIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrapezoidIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTrapezoidIntegration(temp0);
    }
    else
    {
      op->vtkImageSlab::SetTrapezoidIntegration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_TrapezoidIntegrationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TrapezoidIntegrationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TrapezoidIntegrationOn();
    }
    else
    {
      op->vtkImageSlab::TrapezoidIntegrationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_TrapezoidIntegrationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TrapezoidIntegrationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TrapezoidIntegrationOff();
    }
    else
    {
      op->vtkImageSlab::TrapezoidIntegrationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetTrapezoidIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrapezoidIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTrapezoidIntegration() :
      op->vtkImageSlab::GetTrapezoidIntegration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetMultiSliceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultiSliceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMultiSliceOutput(temp0);
    }
    else
    {
      op->vtkImageSlab::SetMultiSliceOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_MultiSliceOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiSliceOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MultiSliceOutputOn();
    }
    else
    {
      op->vtkImageSlab::MultiSliceOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_MultiSliceOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiSliceOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MultiSliceOutputOff();
    }
    else
    {
      op->vtkImageSlab::MultiSliceOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetMultiSliceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiSliceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMultiSliceOutput() :
      op->vtkImageSlab::GetMultiSliceOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToFloat();
    }
    else
    {
      op->vtkImageSlab::SetOutputScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToDouble();
    }
    else
    {
      op->vtkImageSlab::SetOutputScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOutputScalarTypeToInputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToInputScalarType();
    }
    else
    {
      op->vtkImageSlab::SetOutputScalarTypeToInputScalarType();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkImageSlab::GetOutputScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSlab_Methods[] = {
  {"IsTypeOf", PyvtkImageSlab_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageSlab_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageSlab_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageSlab\nC++: static vtkImageSlab *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageSlab_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageSlab\nC++: vtkImageSlab *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageSlab_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageSlab_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOrientation", PyvtkImageSlab_SetOrientation, METH_VARARGS,
   "SetOrientation(self, _arg:int) -> None\nC++: virtual void SetOrientation(int _arg)\n\nSet the slice direction: zero for x, 1 for y, 2 for z. The\ndefault is the Z direction.\n"},
  {"GetOrientationMinValue", PyvtkImageSlab_GetOrientationMinValue, METH_VARARGS,
   "GetOrientationMinValue(self) -> int\nC++: virtual int GetOrientationMinValue()\n\n"},
  {"GetOrientationMaxValue", PyvtkImageSlab_GetOrientationMaxValue, METH_VARARGS,
   "GetOrientationMaxValue(self) -> int\nC++: virtual int GetOrientationMaxValue()\n\n"},
  {"SetOrientationToX", PyvtkImageSlab_SetOrientationToX, METH_VARARGS,
   "SetOrientationToX(self) -> None\nC++: void SetOrientationToX()\n\n"},
  {"SetOrientationToY", PyvtkImageSlab_SetOrientationToY, METH_VARARGS,
   "SetOrientationToY(self) -> None\nC++: void SetOrientationToY()\n\n"},
  {"SetOrientationToZ", PyvtkImageSlab_SetOrientationToZ, METH_VARARGS,
   "SetOrientationToZ(self) -> None\nC++: void SetOrientationToZ()\n\n"},
  {"GetOrientation", PyvtkImageSlab_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> int\nC++: virtual int GetOrientation()\n\n"},
  {"SetSliceRange", PyvtkImageSlab_SetSliceRange, METH_VARARGS,
   "SetSliceRange(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetSliceRange(int _arg1, int _arg2)\nSetSliceRange(self, _arg:(int, int)) -> None\nC++: void SetSliceRange(const int _arg[2])\n\nSet the range of slices to combine. The default is to project\nthrough all slices.\n"},
  {"GetSliceRange", PyvtkImageSlab_GetSliceRange, METH_VARARGS,
   "GetSliceRange(self) -> (int, int)\nC++: virtual int *GetSliceRange()\n\n"},
  {"SetOperation", PyvtkImageSlab_SetOperation, METH_VARARGS,
   "SetOperation(self, _arg:int) -> None\nC++: virtual void SetOperation(int _arg)\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {"GetOperationMinValue", PyvtkImageSlab_GetOperationMinValue, METH_VARARGS,
   "GetOperationMinValue(self) -> int\nC++: virtual int GetOperationMinValue()\n\n"},
  {"GetOperationMaxValue", PyvtkImageSlab_GetOperationMaxValue, METH_VARARGS,
   "GetOperationMaxValue(self) -> int\nC++: virtual int GetOperationMaxValue()\n\n"},
  {"SetOperationToMin", PyvtkImageSlab_SetOperationToMin, METH_VARARGS,
   "SetOperationToMin(self) -> None\nC++: void SetOperationToMin()\n\n"},
  {"SetOperationToMax", PyvtkImageSlab_SetOperationToMax, METH_VARARGS,
   "SetOperationToMax(self) -> None\nC++: void SetOperationToMax()\n\n"},
  {"SetOperationToMean", PyvtkImageSlab_SetOperationToMean, METH_VARARGS,
   "SetOperationToMean(self) -> None\nC++: void SetOperationToMean()\n\n"},
  {"SetOperationToSum", PyvtkImageSlab_SetOperationToSum, METH_VARARGS,
   "SetOperationToSum(self) -> None\nC++: void SetOperationToSum()\n\n"},
  {"GetOperation", PyvtkImageSlab_GetOperation, METH_VARARGS,
   "GetOperation(self) -> int\nC++: virtual int GetOperation()\n\n"},
  {"GetOperationAsString", PyvtkImageSlab_GetOperationAsString, METH_VARARGS,
   "GetOperationAsString(self) -> str\nC++: const char *GetOperationAsString()\n\n"},
  {"SetTrapezoidIntegration", PyvtkImageSlab_SetTrapezoidIntegration, METH_VARARGS,
   "SetTrapezoidIntegration(self, _arg:int) -> None\nC++: virtual void SetTrapezoidIntegration(vtkTypeBool _arg)\n\nUse trapezoid integration for slab computation.  This weighs the\nfirst and last slices by half when doing sum and mean, as\ncompared to the default midpoint integration that weighs all\nslices equally. It is off by default.\n"},
  {"TrapezoidIntegrationOn", PyvtkImageSlab_TrapezoidIntegrationOn, METH_VARARGS,
   "TrapezoidIntegrationOn(self) -> None\nC++: virtual void TrapezoidIntegrationOn()\n\n"},
  {"TrapezoidIntegrationOff", PyvtkImageSlab_TrapezoidIntegrationOff, METH_VARARGS,
   "TrapezoidIntegrationOff(self) -> None\nC++: virtual void TrapezoidIntegrationOff()\n\n"},
  {"GetTrapezoidIntegration", PyvtkImageSlab_GetTrapezoidIntegration, METH_VARARGS,
   "GetTrapezoidIntegration(self) -> int\nC++: virtual vtkTypeBool GetTrapezoidIntegration()\n\n"},
  {"SetMultiSliceOutput", PyvtkImageSlab_SetMultiSliceOutput, METH_VARARGS,
   "SetMultiSliceOutput(self, _arg:int) -> None\nC++: virtual void SetMultiSliceOutput(vtkTypeBool _arg)\n\nTurn on multi-slice output.  Each slice of the output will be a\nprojection through the specified range of input slices, e.g. if\nthe SliceRange is [0,3] then slice 'i' of the output will be a\nprojection through slices 'i' through '3+i' of the input. This\nflag is off by default.\n"},
  {"MultiSliceOutputOn", PyvtkImageSlab_MultiSliceOutputOn, METH_VARARGS,
   "MultiSliceOutputOn(self) -> None\nC++: virtual void MultiSliceOutputOn()\n\n"},
  {"MultiSliceOutputOff", PyvtkImageSlab_MultiSliceOutputOff, METH_VARARGS,
   "MultiSliceOutputOff(self) -> None\nC++: virtual void MultiSliceOutputOff()\n\n"},
  {"GetMultiSliceOutput", PyvtkImageSlab_GetMultiSliceOutput, METH_VARARGS,
   "GetMultiSliceOutput(self) -> int\nC++: virtual vtkTypeBool GetMultiSliceOutput()\n\n"},
  {"SetOutputScalarTypeToFloat", PyvtkImageSlab_SetOutputScalarTypeToFloat, METH_VARARGS,
   "SetOutputScalarTypeToFloat(self) -> None\nC++: void SetOutputScalarTypeToFloat()\n\nSet the output scalar type to float or double, to avoid potential\noverflow when doing a summation operation. The default is to use\nthe scalar type of the input data, and clamp the output to the\nrange of the input scalar type.\n"},
  {"SetOutputScalarTypeToDouble", PyvtkImageSlab_SetOutputScalarTypeToDouble, METH_VARARGS,
   "SetOutputScalarTypeToDouble(self) -> None\nC++: void SetOutputScalarTypeToDouble()\n\n"},
  {"SetOutputScalarTypeToInputScalarType", PyvtkImageSlab_SetOutputScalarTypeToInputScalarType, METH_VARARGS,
   "SetOutputScalarTypeToInputScalarType(self) -> None\nC++: void SetOutputScalarTypeToInputScalarType()\n\n"},
  {"GetOutputScalarType", PyvtkImageSlab_GetOutputScalarType, METH_VARARGS,
   "GetOutputScalarType(self) -> int\nC++: virtual int GetOutputScalarType()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageSlab_Doc =
  "vtkImageSlab - combine image slices to form a slab image\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageSlab will combine all of the slices of an image to create a\n"
  "single slice.  The slices can be combined with the following\n"
  "operations: averaging, summation, minimum, maximum. If you require an\n"
  "arbitrary angle of projection, you can use vtkImageReslice.@par\n"
  "Thanks: Thanks to David Gobbi for contributing this class to VTK.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageSlab_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingGeneral.vtkImageSlab", // tp_name
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
  PyvtkImageSlab_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageSlab_StaticNew()
{
  return vtkImageSlab::New();
}

PyObject *PyvtkImageSlab_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageSlab_Type, PyvtkImageSlab_Methods,
    "vtkImageSlab",
 &PyvtkImageSlab_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageSlab(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageSlab_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageSlab", o) != 0)
  {
    Py_DECREF(o);
  }

}

