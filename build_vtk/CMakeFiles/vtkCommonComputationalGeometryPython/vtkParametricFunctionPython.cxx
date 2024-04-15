// python wrapper for vtkParametricFunction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkParametricFunction.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParametricFunction(PyObject *dict); }
extern "C" { PyObject *PyvtkParametricFunction_ClassNew(); }


static PyObject *
PyvtkParametricFunction_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParametricFunction::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParametricFunction *tempr = vtkParametricFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricFunction::NewInstance());

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
PyvtkParametricFunction_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkParametricFunction::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkParametricFunction::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetDimension();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    op->Evaluate(temp0, temp1, temp2);

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
PyvtkParametricFunction_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

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

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    double tempr = op->EvaluateScalar(temp0, temp1, temp2);

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


static PyObject *
PyvtkParametricFunction_SetMinimumU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumU(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetMinimumU(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMinimumU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumU() :
      op->vtkParametricFunction::GetMinimumU());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetMaximumU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumU(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetMaximumU(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMaximumU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumU() :
      op->vtkParametricFunction::GetMaximumU());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetMinimumV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumV(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetMinimumV(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMinimumV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumV() :
      op->vtkParametricFunction::GetMinimumV());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetMaximumV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumV(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetMaximumV(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMaximumV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumV() :
      op->vtkParametricFunction::GetMaximumV());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetMinimumW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumW(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetMinimumW(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMinimumW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumW() :
      op->vtkParametricFunction::GetMinimumW());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetMaximumW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumW(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetMaximumW(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetMaximumW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumW() :
      op->vtkParametricFunction::GetMaximumW());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetJoinU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJoinU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetJoinU(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetJoinU(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinUMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinUMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinUMinValue() :
      op->vtkParametricFunction::GetJoinUMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinUMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinUMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinUMaxValue() :
      op->vtkParametricFunction::GetJoinUMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinU() :
      op->vtkParametricFunction::GetJoinU());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinUOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinUOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JoinUOn();
    }
    else
    {
      op->vtkParametricFunction::JoinUOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinUOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinUOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JoinUOff();
    }
    else
    {
      op->vtkParametricFunction::JoinUOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetJoinV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJoinV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetJoinV(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetJoinV(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinVMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinVMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinVMinValue() :
      op->vtkParametricFunction::GetJoinVMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinVMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinVMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinVMaxValue() :
      op->vtkParametricFunction::GetJoinVMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinV() :
      op->vtkParametricFunction::GetJoinV());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinVOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinVOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JoinVOn();
    }
    else
    {
      op->vtkParametricFunction::JoinVOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinVOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinVOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JoinVOff();
    }
    else
    {
      op->vtkParametricFunction::JoinVOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetJoinW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJoinW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetJoinW(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetJoinW(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinWMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinWMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinWMinValue() :
      op->vtkParametricFunction::GetJoinWMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinWMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinWMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinWMaxValue() :
      op->vtkParametricFunction::GetJoinWMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetJoinW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJoinW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJoinW() :
      op->vtkParametricFunction::GetJoinW());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinWOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinWOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JoinWOn();
    }
    else
    {
      op->vtkParametricFunction::JoinWOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_JoinWOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JoinWOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JoinWOff();
    }
    else
    {
      op->vtkParametricFunction::JoinWOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetTwistU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwistU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTwistU(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetTwistU(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistUMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistUMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistUMinValue() :
      op->vtkParametricFunction::GetTwistUMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistUMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistUMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistUMaxValue() :
      op->vtkParametricFunction::GetTwistUMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistU() :
      op->vtkParametricFunction::GetTwistU());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistUOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistUOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwistUOn();
    }
    else
    {
      op->vtkParametricFunction::TwistUOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistUOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistUOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwistUOff();
    }
    else
    {
      op->vtkParametricFunction::TwistUOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetTwistV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwistV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTwistV(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetTwistV(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistVMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistVMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistVMinValue() :
      op->vtkParametricFunction::GetTwistVMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistVMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistVMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistVMaxValue() :
      op->vtkParametricFunction::GetTwistVMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistV() :
      op->vtkParametricFunction::GetTwistV());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistVOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistVOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwistVOn();
    }
    else
    {
      op->vtkParametricFunction::TwistVOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistVOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistVOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwistVOff();
    }
    else
    {
      op->vtkParametricFunction::TwistVOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetTwistW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwistW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTwistW(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetTwistW(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistWMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistWMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistWMinValue() :
      op->vtkParametricFunction::GetTwistWMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistWMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistWMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistWMaxValue() :
      op->vtkParametricFunction::GetTwistWMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetTwistW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwistW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwistW() :
      op->vtkParametricFunction::GetTwistW());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistWOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistWOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwistWOn();
    }
    else
    {
      op->vtkParametricFunction::TwistWOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_TwistWOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwistWOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwistWOff();
    }
    else
    {
      op->vtkParametricFunction::TwistWOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetClockwiseOrdering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClockwiseOrdering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClockwiseOrdering(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetClockwiseOrdering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetClockwiseOrderingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClockwiseOrderingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClockwiseOrderingMinValue() :
      op->vtkParametricFunction::GetClockwiseOrderingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetClockwiseOrderingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClockwiseOrderingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClockwiseOrderingMaxValue() :
      op->vtkParametricFunction::GetClockwiseOrderingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetClockwiseOrdering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClockwiseOrdering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClockwiseOrdering() :
      op->vtkParametricFunction::GetClockwiseOrdering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_ClockwiseOrderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClockwiseOrderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClockwiseOrderingOn();
    }
    else
    {
      op->vtkParametricFunction::ClockwiseOrderingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_ClockwiseOrderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClockwiseOrderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClockwiseOrderingOff();
    }
    else
    {
      op->vtkParametricFunction::ClockwiseOrderingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_SetDerivativesAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDerivativesAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDerivativesAvailable(temp0);
    }
    else
    {
      op->vtkParametricFunction::SetDerivativesAvailable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetDerivativesAvailableMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDerivativesAvailableMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDerivativesAvailableMinValue() :
      op->vtkParametricFunction::GetDerivativesAvailableMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetDerivativesAvailableMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDerivativesAvailableMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDerivativesAvailableMaxValue() :
      op->vtkParametricFunction::GetDerivativesAvailableMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_GetDerivativesAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDerivativesAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDerivativesAvailable() :
      op->vtkParametricFunction::GetDerivativesAvailable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_DerivativesAvailableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DerivativesAvailableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DerivativesAvailableOn();
    }
    else
    {
      op->vtkParametricFunction::DerivativesAvailableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunction_DerivativesAvailableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DerivativesAvailableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunction *op = static_cast<vtkParametricFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DerivativesAvailableOff();
    }
    else
    {
      op->vtkParametricFunction::DerivativesAvailableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkParametricFunction_Methods[] = {
  {"IsTypeOf", PyvtkParametricFunction_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParametricFunction_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParametricFunction_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkParametricFunction\nC++: static vtkParametricFunction *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParametricFunction_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkParametricFunction\nC++: vtkParametricFunction *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkParametricFunction_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkParametricFunction_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDimension", PyvtkParametricFunction_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: virtual int GetDimension()\n\nReturn the dimension of parametric space. Depending on the\ndimension, then the (u,v,w) parameters and associated information\n(e.g., derivates) have meaning. For example, if the dimension of\nthe function is one, then u[0] and Duvw[0...2] have meaning. This\nis a pure virtual function that must be instantiated in a derived\nclass.\n"},
  {"Evaluate", PyvtkParametricFunction_Evaluate, METH_VARARGS,
   "Evaluate(self, uvw:[float, float, float], Pt:[float, float,\n    float], Duvw:[float, float, float, float, float, float, float,\n     float, float]) -> None\nC++: virtual void Evaluate(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nPerforms the mapping $f(uvw)->(Pt,Duvw)$f. This is a pure virtual\nfunction that must be instantiated in a derived class.\n\n* uvw are the parameters, with u corresponding to uvw[0],\n* v to uvw[1] and w to uvw[2] respectively. Pt is the returned\n  Cartesian point,\n* Duvw are the derivatives of this point with respect to u, v and\nw.\n* Note that the first three values in Duvw are Du, the next three\nare Dv,\n* and the final three are Dw. Du Dv Dw are the partial\n  derivatives of the\n* function at the point Pt with respect to u, v and w\n  respectively.\n"},
  {"EvaluateScalar", PyvtkParametricFunction_EvaluateScalar, METH_VARARGS,
   "EvaluateScalar(self, uvw:[float, float, float], Pt:[float, float,\n    float], Duvw:[float, float, float, float, float, float, float,\n     float, float]) -> float\nC++: virtual double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw. This is a pure virtual function that must be instantiated\nin a derived class.\n\n* uvw are the parameters with Pt being the cartesian point,\n* Duvw are the derivatives of this point with respect to u, v,\n  and w.\n* Pt, Duvw are obtained from Evaluate().\n"},
  {"SetMinimumU", PyvtkParametricFunction_SetMinimumU, METH_VARARGS,
   "SetMinimumU(self, _arg:float) -> None\nC++: virtual void SetMinimumU(double _arg)\n\nSet/Get the minimum u-value.\n"},
  {"GetMinimumU", PyvtkParametricFunction_GetMinimumU, METH_VARARGS,
   "GetMinimumU(self) -> float\nC++: virtual double GetMinimumU()\n\n"},
  {"SetMaximumU", PyvtkParametricFunction_SetMaximumU, METH_VARARGS,
   "SetMaximumU(self, _arg:float) -> None\nC++: virtual void SetMaximumU(double _arg)\n\nSet/Get the maximum u-value.\n"},
  {"GetMaximumU", PyvtkParametricFunction_GetMaximumU, METH_VARARGS,
   "GetMaximumU(self) -> float\nC++: virtual double GetMaximumU()\n\n"},
  {"SetMinimumV", PyvtkParametricFunction_SetMinimumV, METH_VARARGS,
   "SetMinimumV(self, _arg:float) -> None\nC++: virtual void SetMinimumV(double _arg)\n\nSet/Get the minimum v-value.\n"},
  {"GetMinimumV", PyvtkParametricFunction_GetMinimumV, METH_VARARGS,
   "GetMinimumV(self) -> float\nC++: virtual double GetMinimumV()\n\n"},
  {"SetMaximumV", PyvtkParametricFunction_SetMaximumV, METH_VARARGS,
   "SetMaximumV(self, _arg:float) -> None\nC++: virtual void SetMaximumV(double _arg)\n\nSet/Get the maximum v-value.\n"},
  {"GetMaximumV", PyvtkParametricFunction_GetMaximumV, METH_VARARGS,
   "GetMaximumV(self) -> float\nC++: virtual double GetMaximumV()\n\n"},
  {"SetMinimumW", PyvtkParametricFunction_SetMinimumW, METH_VARARGS,
   "SetMinimumW(self, _arg:float) -> None\nC++: virtual void SetMinimumW(double _arg)\n\nSet/Get the minimum w-value.\n"},
  {"GetMinimumW", PyvtkParametricFunction_GetMinimumW, METH_VARARGS,
   "GetMinimumW(self) -> float\nC++: virtual double GetMinimumW()\n\n"},
  {"SetMaximumW", PyvtkParametricFunction_SetMaximumW, METH_VARARGS,
   "SetMaximumW(self, _arg:float) -> None\nC++: virtual void SetMaximumW(double _arg)\n\nSet/Get the maximum w-value.\n"},
  {"GetMaximumW", PyvtkParametricFunction_GetMaximumW, METH_VARARGS,
   "GetMaximumW(self) -> float\nC++: virtual double GetMaximumW()\n\n"},
  {"SetJoinU", PyvtkParametricFunction_SetJoinU, METH_VARARGS,
   "SetJoinU(self, _arg:int) -> None\nC++: virtual void SetJoinU(vtkTypeBool _arg)\n\nSet/Get the flag which joins the first triangle strip to the last\none.\n"},
  {"GetJoinUMinValue", PyvtkParametricFunction_GetJoinUMinValue, METH_VARARGS,
   "GetJoinUMinValue(self) -> int\nC++: virtual vtkTypeBool GetJoinUMinValue()\n\n"},
  {"GetJoinUMaxValue", PyvtkParametricFunction_GetJoinUMaxValue, METH_VARARGS,
   "GetJoinUMaxValue(self) -> int\nC++: virtual vtkTypeBool GetJoinUMaxValue()\n\n"},
  {"GetJoinU", PyvtkParametricFunction_GetJoinU, METH_VARARGS,
   "GetJoinU(self) -> int\nC++: virtual vtkTypeBool GetJoinU()\n\n"},
  {"JoinUOn", PyvtkParametricFunction_JoinUOn, METH_VARARGS,
   "JoinUOn(self) -> None\nC++: virtual void JoinUOn()\n\n"},
  {"JoinUOff", PyvtkParametricFunction_JoinUOff, METH_VARARGS,
   "JoinUOff(self) -> None\nC++: virtual void JoinUOff()\n\n"},
  {"SetJoinV", PyvtkParametricFunction_SetJoinV, METH_VARARGS,
   "SetJoinV(self, _arg:int) -> None\nC++: virtual void SetJoinV(vtkTypeBool _arg)\n\nSet/Get the flag which joins the ends of the triangle strips.\n"},
  {"GetJoinVMinValue", PyvtkParametricFunction_GetJoinVMinValue, METH_VARARGS,
   "GetJoinVMinValue(self) -> int\nC++: virtual vtkTypeBool GetJoinVMinValue()\n\n"},
  {"GetJoinVMaxValue", PyvtkParametricFunction_GetJoinVMaxValue, METH_VARARGS,
   "GetJoinVMaxValue(self) -> int\nC++: virtual vtkTypeBool GetJoinVMaxValue()\n\n"},
  {"GetJoinV", PyvtkParametricFunction_GetJoinV, METH_VARARGS,
   "GetJoinV(self) -> int\nC++: virtual vtkTypeBool GetJoinV()\n\n"},
  {"JoinVOn", PyvtkParametricFunction_JoinVOn, METH_VARARGS,
   "JoinVOn(self) -> None\nC++: virtual void JoinVOn()\n\n"},
  {"JoinVOff", PyvtkParametricFunction_JoinVOff, METH_VARARGS,
   "JoinVOff(self) -> None\nC++: virtual void JoinVOff()\n\n"},
  {"SetJoinW", PyvtkParametricFunction_SetJoinW, METH_VARARGS,
   "SetJoinW(self, _arg:int) -> None\nC++: virtual void SetJoinW(vtkTypeBool _arg)\n\nSet/Get the flag which joins the ends of the triangle strips.\n"},
  {"GetJoinWMinValue", PyvtkParametricFunction_GetJoinWMinValue, METH_VARARGS,
   "GetJoinWMinValue(self) -> int\nC++: virtual vtkTypeBool GetJoinWMinValue()\n\n"},
  {"GetJoinWMaxValue", PyvtkParametricFunction_GetJoinWMaxValue, METH_VARARGS,
   "GetJoinWMaxValue(self) -> int\nC++: virtual vtkTypeBool GetJoinWMaxValue()\n\n"},
  {"GetJoinW", PyvtkParametricFunction_GetJoinW, METH_VARARGS,
   "GetJoinW(self) -> int\nC++: virtual vtkTypeBool GetJoinW()\n\n"},
  {"JoinWOn", PyvtkParametricFunction_JoinWOn, METH_VARARGS,
   "JoinWOn(self) -> None\nC++: virtual void JoinWOn()\n\n"},
  {"JoinWOff", PyvtkParametricFunction_JoinWOff, METH_VARARGS,
   "JoinWOff(self) -> None\nC++: virtual void JoinWOff()\n\n"},
  {"SetTwistU", PyvtkParametricFunction_SetTwistU, METH_VARARGS,
   "SetTwistU(self, _arg:int) -> None\nC++: virtual void SetTwistU(vtkTypeBool _arg)\n\nSet/Get the flag which joins the first triangle strip to the last\none with a twist. JoinU must also be set if this is set. Used\nwhen building some non-orientable surfaces.\n"},
  {"GetTwistUMinValue", PyvtkParametricFunction_GetTwistUMinValue, METH_VARARGS,
   "GetTwistUMinValue(self) -> int\nC++: virtual vtkTypeBool GetTwistUMinValue()\n\n"},
  {"GetTwistUMaxValue", PyvtkParametricFunction_GetTwistUMaxValue, METH_VARARGS,
   "GetTwistUMaxValue(self) -> int\nC++: virtual vtkTypeBool GetTwistUMaxValue()\n\n"},
  {"GetTwistU", PyvtkParametricFunction_GetTwistU, METH_VARARGS,
   "GetTwistU(self) -> int\nC++: virtual vtkTypeBool GetTwistU()\n\n"},
  {"TwistUOn", PyvtkParametricFunction_TwistUOn, METH_VARARGS,
   "TwistUOn(self) -> None\nC++: virtual void TwistUOn()\n\n"},
  {"TwistUOff", PyvtkParametricFunction_TwistUOff, METH_VARARGS,
   "TwistUOff(self) -> None\nC++: virtual void TwistUOff()\n\n"},
  {"SetTwistV", PyvtkParametricFunction_SetTwistV, METH_VARARGS,
   "SetTwistV(self, _arg:int) -> None\nC++: virtual void SetTwistV(vtkTypeBool _arg)\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinV must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {"GetTwistVMinValue", PyvtkParametricFunction_GetTwistVMinValue, METH_VARARGS,
   "GetTwistVMinValue(self) -> int\nC++: virtual vtkTypeBool GetTwistVMinValue()\n\n"},
  {"GetTwistVMaxValue", PyvtkParametricFunction_GetTwistVMaxValue, METH_VARARGS,
   "GetTwistVMaxValue(self) -> int\nC++: virtual vtkTypeBool GetTwistVMaxValue()\n\n"},
  {"GetTwistV", PyvtkParametricFunction_GetTwistV, METH_VARARGS,
   "GetTwistV(self) -> int\nC++: virtual vtkTypeBool GetTwistV()\n\n"},
  {"TwistVOn", PyvtkParametricFunction_TwistVOn, METH_VARARGS,
   "TwistVOn(self) -> None\nC++: virtual void TwistVOn()\n\n"},
  {"TwistVOff", PyvtkParametricFunction_TwistVOff, METH_VARARGS,
   "TwistVOff(self) -> None\nC++: virtual void TwistVOff()\n\n"},
  {"SetTwistW", PyvtkParametricFunction_SetTwistW, METH_VARARGS,
   "SetTwistW(self, _arg:int) -> None\nC++: virtual void SetTwistW(vtkTypeBool _arg)\n\nSet/Get the flag which joins the ends of the triangle strips with\na twist. JoinW must also be set if this is set. Used when\nbuilding some non-orientable surfaces.\n"},
  {"GetTwistWMinValue", PyvtkParametricFunction_GetTwistWMinValue, METH_VARARGS,
   "GetTwistWMinValue(self) -> int\nC++: virtual vtkTypeBool GetTwistWMinValue()\n\n"},
  {"GetTwistWMaxValue", PyvtkParametricFunction_GetTwistWMaxValue, METH_VARARGS,
   "GetTwistWMaxValue(self) -> int\nC++: virtual vtkTypeBool GetTwistWMaxValue()\n\n"},
  {"GetTwistW", PyvtkParametricFunction_GetTwistW, METH_VARARGS,
   "GetTwistW(self) -> int\nC++: virtual vtkTypeBool GetTwistW()\n\n"},
  {"TwistWOn", PyvtkParametricFunction_TwistWOn, METH_VARARGS,
   "TwistWOn(self) -> None\nC++: virtual void TwistWOn()\n\n"},
  {"TwistWOff", PyvtkParametricFunction_TwistWOff, METH_VARARGS,
   "TwistWOff(self) -> None\nC++: virtual void TwistWOff()\n\n"},
  {"SetClockwiseOrdering", PyvtkParametricFunction_SetClockwiseOrdering, METH_VARARGS,
   "SetClockwiseOrdering(self, _arg:int) -> None\nC++: virtual void SetClockwiseOrdering(vtkTypeBool _arg)\n\nSet/Get the flag which determines the ordering of the vertices\nforming the triangle strips. The ordering of the points being\ninserted into the triangle strip is important because it\ndetermines the direction of the normals for the lighting. If set,\nthe ordering is clockwise, otherwise the ordering is\nanti-clockwise. Default is true (i.e. clockwise ordering).\n"},
  {"GetClockwiseOrderingMinValue", PyvtkParametricFunction_GetClockwiseOrderingMinValue, METH_VARARGS,
   "GetClockwiseOrderingMinValue(self) -> int\nC++: virtual vtkTypeBool GetClockwiseOrderingMinValue()\n\n"},
  {"GetClockwiseOrderingMaxValue", PyvtkParametricFunction_GetClockwiseOrderingMaxValue, METH_VARARGS,
   "GetClockwiseOrderingMaxValue(self) -> int\nC++: virtual vtkTypeBool GetClockwiseOrderingMaxValue()\n\n"},
  {"GetClockwiseOrdering", PyvtkParametricFunction_GetClockwiseOrdering, METH_VARARGS,
   "GetClockwiseOrdering(self) -> int\nC++: virtual vtkTypeBool GetClockwiseOrdering()\n\n"},
  {"ClockwiseOrderingOn", PyvtkParametricFunction_ClockwiseOrderingOn, METH_VARARGS,
   "ClockwiseOrderingOn(self) -> None\nC++: virtual void ClockwiseOrderingOn()\n\n"},
  {"ClockwiseOrderingOff", PyvtkParametricFunction_ClockwiseOrderingOff, METH_VARARGS,
   "ClockwiseOrderingOff(self) -> None\nC++: virtual void ClockwiseOrderingOff()\n\n"},
  {"SetDerivativesAvailable", PyvtkParametricFunction_SetDerivativesAvailable, METH_VARARGS,
   "SetDerivativesAvailable(self, _arg:int) -> None\nC++: virtual void SetDerivativesAvailable(vtkTypeBool _arg)\n\nSet/Get the flag which determines whether derivatives are\navailable from the parametric function (i.e., whether the\nEvaluate() method returns valid derivatives).\n"},
  {"GetDerivativesAvailableMinValue", PyvtkParametricFunction_GetDerivativesAvailableMinValue, METH_VARARGS,
   "GetDerivativesAvailableMinValue(self) -> int\nC++: virtual vtkTypeBool GetDerivativesAvailableMinValue()\n\n"},
  {"GetDerivativesAvailableMaxValue", PyvtkParametricFunction_GetDerivativesAvailableMaxValue, METH_VARARGS,
   "GetDerivativesAvailableMaxValue(self) -> int\nC++: virtual vtkTypeBool GetDerivativesAvailableMaxValue()\n\n"},
  {"GetDerivativesAvailable", PyvtkParametricFunction_GetDerivativesAvailable, METH_VARARGS,
   "GetDerivativesAvailable(self) -> int\nC++: virtual vtkTypeBool GetDerivativesAvailable()\n\n"},
  {"DerivativesAvailableOn", PyvtkParametricFunction_DerivativesAvailableOn, METH_VARARGS,
   "DerivativesAvailableOn(self) -> None\nC++: virtual void DerivativesAvailableOn()\n\n"},
  {"DerivativesAvailableOff", PyvtkParametricFunction_DerivativesAvailableOff, METH_VARARGS,
   "DerivativesAvailableOff(self) -> None\nC++: virtual void DerivativesAvailableOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkParametricFunction_Doc =
  "vtkParametricFunction - abstract interface for parametric functions\n\n"
  "Superclass: vtkObject\n\n"
  "vtkParametricFunction is an abstract interface for functions defined\n"
  "by parametric mapping i.e. f(u,v,w)->(x,y,z) where u_min <= u <\n"
  "u_max, v_min <= v < v_max, w_min <= w < w_max. (For notational\n"
  "convenience, we will write f(u)->x and assume that u means (u,v,w)\n"
  "and x means (x,y,z).)\n\n"
  "The interface contains the pure virtual function, Evaluate(), that\n"
  "generates a point and the derivatives at that point which are then\n"
  "used to construct the surface. A second pure virtual function,\n"
  "EvaluateScalar(), can be used to generate a scalar for the surface.\n"
  "Finally, the GetDimension() virtual function is used to differentiate\n"
  "1D, 2D, and 3D parametric functions. Since this abstract class\n"
  "defines a pure virtual API, its subclasses must implement the pure\n"
  "virtual functions GetDimension(), Evaluate() and EvaluateScalar().\n\n"
  "This class has also methods for defining a range of parametric values\n"
  "(u,v,w).\n\n"
  "@par Thanks: Andrew Maclean andrew.amaclean@gmail.com for creating\n"
  "and contributing the class.\n\n"
  "@sa\n"
  "vtkParametricFunctionSource - tessellates a parametric function\n\n"
  "@sa\n"
  "Implementations of derived classes implementing non-orentable\n"
  "surfaces: vtkParametricBoy vtkParametricCrossCap\n"
  "vtkParametricFigure8Klein vtkParametricKlein vtkParametricMobius\n"
  "vtkParametricRoman\n\n"
  "@sa\n"
  "Implementations of derived classes implementing orientable surfaces:\n"
  "vtkParametricConicSpiral vtkParametricDini vtkParametricEllipsoid\n"
  "vtkParametricEnneper vtkParametricRandomHills\n"
  "vtkParametricSuperEllipsoid vtkParametricSuperToroid\n"
  "vtkParametricTorus\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParametricFunction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonComputationalGeometry.vtkParametricFunction", // tp_name
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
  PyvtkParametricFunction_Doc, // tp_doc
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

PyObject *PyvtkParametricFunction_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkParametricFunction_Type, PyvtkParametricFunction_Methods,
    "vtkParametricFunction",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParametricFunction(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParametricFunction_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParametricFunction", o) != 0)
  {
    Py_DECREF(o);
  }

}

