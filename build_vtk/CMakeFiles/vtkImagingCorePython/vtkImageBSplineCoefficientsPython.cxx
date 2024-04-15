// python wrapper for vtkImageBSplineCoefficients
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAbstractImageInterpolator.h"
#include "vtkImageBSplineCoefficients.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageBSplineCoefficients(PyObject *dict); }
extern "C" { PyObject *PyvtkImageBSplineCoefficients_ClassNew(); }


static PyObject *
PyvtkImageBSplineCoefficients_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageBSplineCoefficients::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageBSplineCoefficients::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageBSplineCoefficients *tempr = vtkImageBSplineCoefficients::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageBSplineCoefficients *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageBSplineCoefficients::NewInstance());

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
PyvtkImageBSplineCoefficients_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageBSplineCoefficients::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageBSplineCoefficients::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetSplineDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplineDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSplineDegree(temp0);
    }
    else
    {
      op->vtkImageBSplineCoefficients::SetSplineDegree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetSplineDegreeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineDegreeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplineDegreeMinValue() :
      op->vtkImageBSplineCoefficients::GetSplineDegreeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetSplineDegreeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineDegreeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplineDegreeMaxValue() :
      op->vtkImageBSplineCoefficients::GetSplineDegreeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetSplineDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplineDegree() :
      op->vtkImageBSplineCoefficients::GetSplineDegree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetBorderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  vtkImageBorderMode temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkImageBorderMode"))
  {
    if (ap.IsBound())
    {
      op->SetBorderMode(temp0);
    }
    else
    {
      op->vtkImageBSplineCoefficients::SetBorderMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetBorderModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageBorderMode tempr = (ap.IsBound() ?
      op->GetBorderModeMinValue() :
      op->vtkImageBSplineCoefficients::GetBorderModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkImageBorderMode");
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetBorderModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageBorderMode tempr = (ap.IsBound() ?
      op->GetBorderModeMaxValue() :
      op->vtkImageBSplineCoefficients::GetBorderModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkImageBorderMode");
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetBorderModeToClamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToClamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBorderModeToClamp();
    }
    else
    {
      op->vtkImageBSplineCoefficients::SetBorderModeToClamp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetBorderModeToRepeat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToRepeat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBorderModeToRepeat();
    }
    else
    {
      op->vtkImageBSplineCoefficients::SetBorderModeToRepeat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetBorderModeToMirror(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderModeToMirror");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBorderModeToMirror();
    }
    else
    {
      op->vtkImageBSplineCoefficients::SetBorderModeToMirror();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetBorderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageBorderMode tempr = (ap.IsBound() ?
      op->GetBorderMode() :
      op->vtkImageBSplineCoefficients::GetBorderMode());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkImageBorderMode");
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetBorderModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBorderModeAsString() :
      op->vtkImageBSplineCoefficients::GetBorderModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarType(temp0);
    }
    else
    {
      op->vtkImageBSplineCoefficients::SetOutputScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetOutputScalarTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarTypeMinValue() :
      op->vtkImageBSplineCoefficients::GetOutputScalarTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetOutputScalarTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarTypeMaxValue() :
      op->vtkImageBSplineCoefficients::GetOutputScalarTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkImageBSplineCoefficients::GetOutputScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToFloat();
    }
    else
    {
      op->vtkImageBSplineCoefficients::SetOutputScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToDouble();
    }
    else
    {
      op->vtkImageBSplineCoefficients::SetOutputScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetOutputScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOutputScalarTypeAsString() :
      op->vtkImageBSplineCoefficients::GetOutputScalarTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_SetBypass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBypass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBypass(temp0);
    }
    else
    {
      op->vtkImageBSplineCoefficients::SetBypass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_BypassOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BypassOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BypassOn();
    }
    else
    {
      op->vtkImageBSplineCoefficients::BypassOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_BypassOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BypassOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BypassOff();
    }
    else
    {
      op->vtkImageBSplineCoefficients::BypassOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_GetBypass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBypass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBypass() :
      op->vtkImageBSplineCoefficients::GetBypass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_CheckBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = (ap.IsBound() ?
      op->CheckBounds(temp0) :
      op->vtkImageBSplineCoefficients::CheckBounds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBSplineCoefficients_Evaluate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->Evaluate(temp0, temp1);
    }
    else
    {
      op->vtkImageBSplineCoefficients::Evaluate(temp0, temp1);
    }

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
PyvtkImageBSplineCoefficients_Evaluate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = (ap.IsBound() ?
      op->Evaluate(temp0, temp1, temp2) :
      op->vtkImageBSplineCoefficients::Evaluate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageBSplineCoefficients_Evaluate_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBSplineCoefficients *op = static_cast<vtkImageBSplineCoefficients *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double tempr = (ap.IsBound() ?
      op->Evaluate(temp0) :
      op->vtkImageBSplineCoefficients::Evaluate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageBSplineCoefficients_Evaluate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageBSplineCoefficients_Evaluate_s1(self, args);
    case 3:
      return PyvtkImageBSplineCoefficients_Evaluate_s2(self, args);
    case 1:
      return PyvtkImageBSplineCoefficients_Evaluate_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Evaluate");
  return nullptr;
}

static PyMethodDef PyvtkImageBSplineCoefficients_Methods[] = {
  {"IsTypeOf", PyvtkImageBSplineCoefficients_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageBSplineCoefficients_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageBSplineCoefficients_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageBSplineCoefficients\nC++: static vtkImageBSplineCoefficients *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageBSplineCoefficients_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageBSplineCoefficients\nC++: vtkImageBSplineCoefficients *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageBSplineCoefficients_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageBSplineCoefficients_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSplineDegree", PyvtkImageBSplineCoefficients_SetSplineDegree, METH_VARARGS,
   "SetSplineDegree(self, _arg:int) -> None\nC++: virtual void SetSplineDegree(int _arg)\n\nSet the degree of the spline polynomial.  The default value is 3,\nand the maximum is 9.\n"},
  {"GetSplineDegreeMinValue", PyvtkImageBSplineCoefficients_GetSplineDegreeMinValue, METH_VARARGS,
   "GetSplineDegreeMinValue(self) -> int\nC++: virtual int GetSplineDegreeMinValue()\n\n"},
  {"GetSplineDegreeMaxValue", PyvtkImageBSplineCoefficients_GetSplineDegreeMaxValue, METH_VARARGS,
   "GetSplineDegreeMaxValue(self) -> int\nC++: virtual int GetSplineDegreeMaxValue()\n\n"},
  {"GetSplineDegree", PyvtkImageBSplineCoefficients_GetSplineDegree, METH_VARARGS,
   "GetSplineDegree(self) -> int\nC++: virtual int GetSplineDegree()\n\n"},
  {"SetBorderMode", PyvtkImageBSplineCoefficients_SetBorderMode, METH_VARARGS,
   "SetBorderMode(self, _arg:vtkImageBorderMode) -> None\nC++: virtual void SetBorderMode(vtkImageBorderMode _arg)\n\nSet the border mode.  The filter that is used to create the\ncoefficients must repeat the image somehow to make a\ntheoretically infinite input.  The default is to clamp values\nthat are off the edge of the image, to the value at the closest\npoint on the edge. The other ways of virtually extending the\nimage are to produce mirrored copies, which results in optimal\nsmoothness at the boundary, or to repeat the image, which results\nin a cyclic or periodic spline.\n"},
  {"GetBorderModeMinValue", PyvtkImageBSplineCoefficients_GetBorderModeMinValue, METH_VARARGS,
   "GetBorderModeMinValue(self) -> vtkImageBorderMode\nC++: virtual vtkImageBorderMode GetBorderModeMinValue()\n\n"},
  {"GetBorderModeMaxValue", PyvtkImageBSplineCoefficients_GetBorderModeMaxValue, METH_VARARGS,
   "GetBorderModeMaxValue(self) -> vtkImageBorderMode\nC++: virtual vtkImageBorderMode GetBorderModeMaxValue()\n\n"},
  {"SetBorderModeToClamp", PyvtkImageBSplineCoefficients_SetBorderModeToClamp, METH_VARARGS,
   "SetBorderModeToClamp(self) -> None\nC++: void SetBorderModeToClamp()\n\n"},
  {"SetBorderModeToRepeat", PyvtkImageBSplineCoefficients_SetBorderModeToRepeat, METH_VARARGS,
   "SetBorderModeToRepeat(self) -> None\nC++: void SetBorderModeToRepeat()\n\n"},
  {"SetBorderModeToMirror", PyvtkImageBSplineCoefficients_SetBorderModeToMirror, METH_VARARGS,
   "SetBorderModeToMirror(self) -> None\nC++: void SetBorderModeToMirror()\n\n"},
  {"GetBorderMode", PyvtkImageBSplineCoefficients_GetBorderMode, METH_VARARGS,
   "GetBorderMode(self) -> vtkImageBorderMode\nC++: virtual vtkImageBorderMode GetBorderMode()\n\n"},
  {"GetBorderModeAsString", PyvtkImageBSplineCoefficients_GetBorderModeAsString, METH_VARARGS,
   "GetBorderModeAsString(self) -> str\nC++: const char *GetBorderModeAsString()\n\n"},
  {"SetOutputScalarType", PyvtkImageBSplineCoefficients_SetOutputScalarType, METH_VARARGS,
   "SetOutputScalarType(self, _arg:int) -> None\nC++: virtual void SetOutputScalarType(int _arg)\n\nSet the scalar type of the output.  Default is float.\nFloating-point output is used to avoid overflow, since the range\nof the output values is larger than the input values.\n"},
  {"GetOutputScalarTypeMinValue", PyvtkImageBSplineCoefficients_GetOutputScalarTypeMinValue, METH_VARARGS,
   "GetOutputScalarTypeMinValue(self) -> int\nC++: virtual int GetOutputScalarTypeMinValue()\n\n"},
  {"GetOutputScalarTypeMaxValue", PyvtkImageBSplineCoefficients_GetOutputScalarTypeMaxValue, METH_VARARGS,
   "GetOutputScalarTypeMaxValue(self) -> int\nC++: virtual int GetOutputScalarTypeMaxValue()\n\n"},
  {"GetOutputScalarType", PyvtkImageBSplineCoefficients_GetOutputScalarType, METH_VARARGS,
   "GetOutputScalarType(self) -> int\nC++: virtual int GetOutputScalarType()\n\n"},
  {"SetOutputScalarTypeToFloat", PyvtkImageBSplineCoefficients_SetOutputScalarTypeToFloat, METH_VARARGS,
   "SetOutputScalarTypeToFloat(self) -> None\nC++: void SetOutputScalarTypeToFloat()\n\n"},
  {"SetOutputScalarTypeToDouble", PyvtkImageBSplineCoefficients_SetOutputScalarTypeToDouble, METH_VARARGS,
   "SetOutputScalarTypeToDouble(self) -> None\nC++: void SetOutputScalarTypeToDouble()\n\n"},
  {"GetOutputScalarTypeAsString", PyvtkImageBSplineCoefficients_GetOutputScalarTypeAsString, METH_VARARGS,
   "GetOutputScalarTypeAsString(self) -> str\nC++: const char *GetOutputScalarTypeAsString()\n\n"},
  {"SetBypass", PyvtkImageBSplineCoefficients_SetBypass, METH_VARARGS,
   "SetBypass(self, _arg:int) -> None\nC++: virtual void SetBypass(vtkTypeBool _arg)\n\nBypass the filter, do not do any processing.  If this is on, then\nthe output data will reference the input data directly, and the\noutput type will be the same as the input type.  This is useful a\ndownstream filter sometimes uses b-spline interpolation and\nsometimes uses other forms of interpolation.\n"},
  {"BypassOn", PyvtkImageBSplineCoefficients_BypassOn, METH_VARARGS,
   "BypassOn(self) -> None\nC++: virtual void BypassOn()\n\n"},
  {"BypassOff", PyvtkImageBSplineCoefficients_BypassOff, METH_VARARGS,
   "BypassOff(self) -> None\nC++: virtual void BypassOff()\n\n"},
  {"GetBypass", PyvtkImageBSplineCoefficients_GetBypass, METH_VARARGS,
   "GetBypass(self) -> int\nC++: virtual vtkTypeBool GetBypass()\n\n"},
  {"CheckBounds", PyvtkImageBSplineCoefficients_CheckBounds, METH_VARARGS,
   "CheckBounds(self, point:(float, float, float)) -> int\nC++: int CheckBounds(const double point[3])\n\nCheck a point against the image bounds.  Return 0 if out of\nbounds, and 1 if inside bounds.  Calling Evaluate on a point\noutside the bounds will not generate an error, but the value\nreturned will depend on the BorderMode.\n"},
  {"Evaluate", PyvtkImageBSplineCoefficients_Evaluate, METH_VARARGS,
   "Evaluate(self, point:(float, float, float), value:[float, ...])\n    -> None\nC++: void Evaluate(const double point[3], double *value)\nEvaluate(self, x:float, y:float, z:float) -> float\nC++: double Evaluate(double x, double y, double z)\nEvaluate(self, point:(float, float, float)) -> float\nC++: double Evaluate(const double point[3])\n\nInterpolate a value from the image.  You must call Update()\nbefore calling this method for the first time.  The first\nsignature can return multiple components, while the second\nsignature is for use on single-component images.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageBSplineCoefficients_Doc =
  "vtkImageBSplineCoefficients - convert image to b-spline knots\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageBSplineCoefficients prepares an image for b-spline\n"
  "interpolation by converting the image values into b-spline knot\n"
  "coefficients.  It is a necessary pre-filtering step before applying\n"
  "b-spline interpolation with vtkImageReslice.\n\n"
  "This class is based on code provided by Philippe Thevenaz of EPFL,\n"
  "Lausanne, Switzerland.  Please acknowledge his contribution by citing\n"
  "the following paper: [1] P. Thevenaz, T. Blu, M. Unser, \"Interpolation\n"
  "Revisited,\"\n"
  "    IEEE Transactions on Medical Imaging 19(7):739-758, 2000.\n\n"
  "The clamped boundary condition (which is the default) is taken from\n"
  "code presented in the following paper: [2] D. Ruijters, P. Thevenaz,\n"
  "    \"GPU Prefilter for Accurate Cubic B-spline Interpolation,\"\n"
  "    The Computer Journal, doi: 10.1093/comjnl/bxq086, 2010.\n\n"
  "@par Thanks: This class was written by David Gobbi at the Seaman\n"
  "Family MR Research Centre, Foothills Medical Centre, Calgary,\n"
  "Alberta. DG Gobbi and YP Starreveld, \"Uniform B-Splines for the VTK Imaging\n"
  "Pipeline,\" VTK Journal, 2011, http://hdl.handle.net/10380/3252\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageBSplineCoefficients_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkImageBSplineCoefficients", // tp_name
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
  PyvtkImageBSplineCoefficients_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageBSplineCoefficients_StaticNew()
{
  return vtkImageBSplineCoefficients::New();
}

PyObject *PyvtkImageBSplineCoefficients_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageBSplineCoefficients_Type, PyvtkImageBSplineCoefficients_Methods,
    "vtkImageBSplineCoefficients",
 &PyvtkImageBSplineCoefficients_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageBSplineCoefficients(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageBSplineCoefficients_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageBSplineCoefficients", o) != 0)
  {
    Py_DECREF(o);
  }

}

