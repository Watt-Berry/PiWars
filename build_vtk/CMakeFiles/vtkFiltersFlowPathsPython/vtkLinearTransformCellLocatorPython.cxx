// python wrapper for vtkLinearTransformCellLocator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLinearTransformCellLocator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLinearTransformCellLocator(PyObject *dict); }
extern "C" { PyObject *PyvtkLinearTransformCellLocator_ClassNew(); }


static PyObject *
PyvtkLinearTransformCellLocator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLinearTransformCellLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLinearTransformCellLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLinearTransformCellLocator *tempr = vtkLinearTransformCellLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLinearTransformCellLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLinearTransformCellLocator::NewInstance());

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
PyvtkLinearTransformCellLocator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLinearTransformCellLocator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLinearTransformCellLocator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_SetCellLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  vtkAbstractCellLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->SetCellLocator(temp0);
    }
    else
    {
      op->vtkLinearTransformCellLocator::SetCellLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_GetCellLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLocator *tempr = (ap.IsBound() ?
      op->GetCellLocator() :
      op->vtkLinearTransformCellLocator::GetCellLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_SetUseAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseAllPoints(temp0);
    }
    else
    {
      op->vtkLinearTransformCellLocator::SetUseAllPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_UseAllPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAllPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseAllPointsOn();
    }
    else
    {
      op->vtkLinearTransformCellLocator::UseAllPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_UseAllPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAllPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseAllPointsOff();
    }
    else
    {
      op->vtkLinearTransformCellLocator::UseAllPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_GetUseAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseAllPoints() :
      op->vtkLinearTransformCellLocator::GetUseAllPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_GetIsLinearTransformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsLinearTransformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsLinearTransformation() :
      op->vtkLinearTransformCellLocator::GetIsLinearTransformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_IntersectWithLine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
  long long temp7;
  vtkGenericCell *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkGenericCell"))
  {
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8) :
      op->vtkLinearTransformCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(7, temp7);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransformCellLocator_IntersectWithLine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  vtkPoints *temp3 = nullptr;
  vtkIdList *temp4 = nullptr;
  vtkGenericCell *temp5 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPoints") &&
      ap.GetVTKObject(temp4, "vtkIdList") &&
      ap.GetVTKObject(temp5, "vtkGenericCell"))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkLinearTransformCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransformCellLocator_IntersectWithLine_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6))
  {
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkLinearTransformCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransformCellLocator_IntersectWithLine_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
  long long temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkLinearTransformCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(7, temp7);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransformCellLocator_IntersectWithLine_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  vtkPoints *temp2 = nullptr;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkPoints") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3) :
      op->vtkLinearTransformCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransformCellLocator_IntersectWithLine_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  vtkPoints *temp3 = nullptr;
  vtkIdList *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPoints") &&
      ap.GetVTKObject(temp4, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4) :
      op->vtkLinearTransformCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransformCellLocator_IntersectWithLine(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 9:
      return PyvtkLinearTransformCellLocator_IntersectWithLine_s1(self, args);
    case 6:
      return PyvtkLinearTransformCellLocator_IntersectWithLine_s2(self, args);
    case 7:
      return PyvtkLinearTransformCellLocator_IntersectWithLine_s3(self, args);
    case 8:
      return PyvtkLinearTransformCellLocator_IntersectWithLine_s4(self, args);
    case 4:
      return PyvtkLinearTransformCellLocator_IntersectWithLine_s5(self, args);
    case 5:
      return PyvtkLinearTransformCellLocator_IntersectWithLine_s6(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IntersectWithLine");
  return nullptr;
}


static PyObject *
PyvtkLinearTransformCellLocator_FindClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  vtkGenericCell *temp2 = nullptr;
  long long temp3;
  int temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->FindClosestPoint(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkLinearTransformCellLocator::FindClosestPoint(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransformCellLocator_FindClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  long long temp2;
  int temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->FindClosestPoint(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkLinearTransformCellLocator::FindClosestPoint(temp0, temp1, temp2, temp3, temp4);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransformCellLocator_FindClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkLinearTransformCellLocator_FindClosestPoint_s1(self, args);
    case 5:
      return PyvtkLinearTransformCellLocator_FindClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPoint");
  return nullptr;
}


static PyObject *
PyvtkLinearTransformCellLocator_FindClosestPointWithinRadius_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  vtkGenericCell *temp3 = nullptr;
  long long temp4;
  int temp5;
  double temp6;
  int temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkGenericCell") &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);

    long long tempr = (ap.IsBound() ?
      op->FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkLinearTransformCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(7, temp7);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransformCellLocator_FindClosestPointWithinRadius_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  long long temp3;
  int temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);

    long long tempr = (ap.IsBound() ?
      op->FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkLinearTransformCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransformCellLocator_FindClosestPointWithinRadius_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  vtkGenericCell *temp3 = nullptr;
  long long temp4;
  int temp5;
  double temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkGenericCell") &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);

    long long tempr = (ap.IsBound() ?
      op->FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkLinearTransformCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransformCellLocator_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 8:
      return PyvtkLinearTransformCellLocator_FindClosestPointWithinRadius_s1(self, args);
    case 6:
      return PyvtkLinearTransformCellLocator_FindClosestPointWithinRadius_s2(self, args);
    case 7:
      return PyvtkLinearTransformCellLocator_FindClosestPointWithinRadius_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPointWithinRadius");
  return nullptr;
}


static PyObject *
PyvtkLinearTransformCellLocator_FindCellsWithinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCellsWithinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->FindCellsWithinBounds(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransformCellLocator::FindCellsWithinBounds(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_FindCellsAlongLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCellsAlongLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->FindCellsAlongLine(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkLinearTransformCellLocator::FindCellsAlongLine(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_FindCellsAlongPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCellsAlongPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->FindCellsAlongPlane(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkLinearTransformCellLocator::FindCellsAlongPlane(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  vtkGenericCell *temp2 = nullptr;
  int temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    long long tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkLinearTransformCellLocator::FindCell(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransformCellLocator_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->FindCell(temp0) :
      op->vtkLinearTransformCellLocator::FindCell(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransformCellLocator_FindCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  vtkGenericCell *temp2 = nullptr;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    long long tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4) :
      op->vtkLinearTransformCellLocator::FindCell(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransformCellLocator_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkLinearTransformCellLocator_FindCell_s1(self, args);
    case 1:
      return PyvtkLinearTransformCellLocator_FindCell_s2(self, args);
    case 5:
      return PyvtkLinearTransformCellLocator_FindCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return nullptr;
}


static PyObject *
PyvtkLinearTransformCellLocator_InsideCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->InsideCellBounds(temp0, temp1) :
      op->vtkLinearTransformCellLocator::InsideCellBounds(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  int temp0;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GenerateRepresentation(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransformCellLocator::GenerateRepresentation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeSearchStructure();
    }
    else
    {
      op->vtkLinearTransformCellLocator::FreeSearchStructure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildLocator();
    }
    else
    {
      op->vtkLinearTransformCellLocator::BuildLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_ForceBuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceBuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceBuildLocator();
    }
    else
    {
      op->vtkLinearTransformCellLocator::ForceBuildLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransformCellLocator_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransformCellLocator *op = static_cast<vtkLinearTransformCellLocator *>(vp);

  vtkAbstractCellLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkLinearTransformCellLocator::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLinearTransformCellLocator_Methods[] = {
  {"IsTypeOf", PyvtkLinearTransformCellLocator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLinearTransformCellLocator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLinearTransformCellLocator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLinearTransformCellLocator\nC++: static vtkLinearTransformCellLocator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLinearTransformCellLocator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLinearTransformCellLocator\nC++: vtkLinearTransformCellLocator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLinearTransformCellLocator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLinearTransformCellLocator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCellLocator", PyvtkLinearTransformCellLocator_SetCellLocator, METH_VARARGS,
   "SetCellLocator(self, locator:vtkAbstractCellLocator) -> None\nC++: virtual void SetCellLocator(vtkAbstractCellLocator *locator)\n\nSet/Get the cell locator to be used internally.\n\nThe cell locator MUST be built before using it.\n"},
  {"GetCellLocator", PyvtkLinearTransformCellLocator_GetCellLocator, METH_VARARGS,
   "GetCellLocator(self) -> vtkAbstractCellLocator\nC++: virtual vtkAbstractCellLocator *GetCellLocator()\n\n"},
  {"SetUseAllPoints", PyvtkLinearTransformCellLocator_SetUseAllPoints, METH_VARARGS,
   "SetUseAllPoints(self, _arg:bool) -> None\nC++: virtual void SetUseAllPoints(bool _arg)\n\nUseAllPoints allows to compute the transformation using all the\npoints of the dataset (use that when you are not if it's a linear\ntransformation) or 100 sample points (or less if the dataset is\nsmaller) that are chosen every-nth.\n\nDefault is off.\n"},
  {"UseAllPointsOn", PyvtkLinearTransformCellLocator_UseAllPointsOn, METH_VARARGS,
   "UseAllPointsOn(self) -> None\nC++: virtual void UseAllPointsOn()\n\n"},
  {"UseAllPointsOff", PyvtkLinearTransformCellLocator_UseAllPointsOff, METH_VARARGS,
   "UseAllPointsOff(self) -> None\nC++: virtual void UseAllPointsOff()\n\n"},
  {"GetUseAllPoints", PyvtkLinearTransformCellLocator_GetUseAllPoints, METH_VARARGS,
   "GetUseAllPoints(self) -> bool\nC++: virtual bool GetUseAllPoints()\n\n"},
  {"GetIsLinearTransformation", PyvtkLinearTransformCellLocator_GetIsLinearTransformation, METH_VARARGS,
   "GetIsLinearTransformation(self) -> bool\nC++: virtual bool GetIsLinearTransformation()\n\nGet if the set dataset is a linear transformation of cell\nlocator's dataset. The value is inside BuildLocator().\n"},
  {"IntersectWithLine", PyvtkLinearTransformCellLocator_IntersectWithLine, METH_VARARGS,
   "IntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int, cellId:int,\n    cell:vtkGenericCell) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId, vtkIdType &cellId, vtkGenericCell *cell) override;\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, points:vtkPoints, cellIds:vtkIdList,\n     cell:vtkGenericCell) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, vtkPoints *points, vtkIdList *cellIds,\n    vtkGenericCell *cell) override;\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, double &t, double x[3],\n    double pcoords[3], int &subId)\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int, cellId:int) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, double &t, double x[3],\n    double pcoords[3], int &subId, vtkIdType &cellId)\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), points:vtkPoints, cellIds:vtkIdList) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], vtkPoints *points, vtkIdList *cellIds)\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, points:vtkPoints, cellIds:vtkIdList)\n     -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, vtkPoints *points,\n    vtkIdList *cellIds)\n\nReturn intersection point (if any) AND the cell which  ...\n [Truncated]\n"},
  {"FindClosestPoint", PyvtkLinearTransformCellLocator_FindClosestPoint, METH_VARARGS,
   "FindClosestPoint(self, x:(float, float, float),\n    closestPoint:[float, float, float], cell:vtkGenericCell,\n    cellId:int, subId:int, dist2:float) -> None\nC++: void FindClosestPoint(const double x[3],\n    double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2) override;\nFindClosestPoint(self, x:(float, float, float),\n    closestPoint:[float, float, float], cellId:int, subId:int,\n    dist2:float) -> None\nC++: virtual void FindClosestPoint(const double x[3],\n    double closestPoint[3], vtkIdType &cellId, int &subId,\n    double &dist2)\n\nReturn the closest point and the cell which is closest to the\npoint x. The closest point is somewhere on a cell, it need not be\none of the vertices of the cell.\n\nFor other FindClosestPoint signatures, see\nvtkAbstractCellLocator.\n"},
  {"FindClosestPointWithinRadius", PyvtkLinearTransformCellLocator_FindClosestPointWithinRadius, METH_VARARGS,
   "FindClosestPointWithinRadius(self, x:[float, float, float],\n    radius:float, closestPoint:[float, float, float],\n    cell:vtkGenericCell, cellId:int, subId:int, dist2:float,\n    inside:int) -> int\nC++: vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2, int &inside)\n    override;\nFindClosestPointWithinRadius(self, x:[float, float, float],\n    radius:float, closestPoint:[float, float, float], cellId:int,\n    subId:int, dist2:float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkIdType &cellId,\n    int &subId, double &dist2)\nFindClosestPointWithinRadius(self, x:[float, float, float],\n    radius:float, closestPoint:[float, float, float],\n    cell:vtkGenericCell, cellId:int, subId:int, dist2:float)\n    -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2)\n\nReturn the closest point within a specified radius and the cell\nwhich is closest to the point x. The closest point is somewhere\non a cell, it need not be one of the vertices of the cell. This\nmethod returns 1 if a point is found within the specified radius.\nIf there are no cells within the specified radius, the method\nreturns 0 and the values of closestPoint, cellId, subId, and\ndist2 are undefined. If a closest point is found, inside returns\nthe return value of the EvaluatePosition call to the closest\ncell; inside(=1) or outside(=0).\n"},
  {"FindCellsWithinBounds", PyvtkLinearTransformCellLocator_FindCellsWithinBounds, METH_VARARGS,
   "FindCellsWithinBounds(self, bbox:[float, ...], cells:vtkIdList)\n    -> None\nC++: void FindCellsWithinBounds(double *bbox, vtkIdList *cells)\n    override;\n\nReturn a list of unique cell ids inside of a given bounding box.\nThe user must provide the vtkIdList to populate.\n\nThis function does NOT work when SupportLinearTransformation is\non.\n"},
  {"FindCellsAlongLine", PyvtkLinearTransformCellLocator_FindCellsAlongLine, METH_VARARGS,
   "FindCellsAlongLine(self, p1:(float, float, float), p2:(float,\n    float, float), tolerance:float, cellsIds:vtkIdList) -> None\nC++: void FindCellsAlongLine(const double p1[3],\n    const double p2[3], double tolerance, vtkIdList *cellsIds)\n    override;\n\nTake the passed line segment and intersect it with the data set.\nFor each intersection with the bounds of a cell, the cellIds have\nthe relevant information added. If cellIds is nullptr pointer,\nthen no information is generated for that list.\n"},
  {"FindCellsAlongPlane", PyvtkLinearTransformCellLocator_FindCellsAlongPlane, METH_VARARGS,
   "FindCellsAlongPlane(self, o:(float, float, float), n:(float,\n    float, float), tolerance:float, cells:vtkIdList) -> None\nC++: void FindCellsAlongPlane(const double o[3],\n    const double n[3], double tolerance, vtkIdList *cells)\n    override;\n\nTake the passed line segment and intersect it with the data set.\nFor each intersection with the bounds of a cell, the cellIds have\nthe relevant information added sort by t. If cellIds is nullptr\npointer, then no information is generated for that list.\n"},
  {"FindCell", PyvtkLinearTransformCellLocator_FindCell, METH_VARARGS,
   "FindCell(self, x:[float, float, float], tol2:float,\n    cell:vtkGenericCell, subId:int, pcoords:[float, float, float],\n     weights:[float, ...]) -> int\nC++: vtkIdType FindCell(double x[3], double tol2,\n    vtkGenericCell *cell, int &subId, double pcoords[3],\n    double *weights) override;\nFindCell(self, x:[float, float, float]) -> int\nC++: virtual vtkIdType FindCell(double x[3])\nFindCell(self, x:[float, float, float], tol2:float,\n    GenCell:vtkGenericCell, pcoords:[float, float, float],\n    weights:[float, ...]) -> int\nC++: virtual vtkIdType FindCell(double x[3], double tol2,\n    vtkGenericCell *GenCell, double pcoords[3], double *weights)\n\nFind the cell containing a given point. returns -1 if no cell\nfound the cell parameters are copied into the supplied variables,\na cell must be provided to store the information.\n\nFor other FindCell signatures, see vtkAbstractCellLocator.\n"},
  {"InsideCellBounds", PyvtkLinearTransformCellLocator_InsideCellBounds, METH_VARARGS,
   "InsideCellBounds(self, x:[float, float, float], cellId:int)\n    -> bool\nC++: bool InsideCellBounds(double x[3], vtkIdType cellId)\n    override;\n\nQuickly test if a point is inside the bounds of a particular\ncell. This function should be used ONLY after the locator is\nbuilt.\n"},
  {"GenerateRepresentation", PyvtkLinearTransformCellLocator_GenerateRepresentation, METH_VARARGS,
   "GenerateRepresentation(self, level:int, pd:vtkPolyData) -> None\nC++: void GenerateRepresentation(int level, vtkPolyData *pd)\n    override;\n\nSatisfy vtkLocator abstract interface.\n"},
  {"FreeSearchStructure", PyvtkLinearTransformCellLocator_FreeSearchStructure, METH_VARARGS,
   "FreeSearchStructure(self) -> None\nC++: void FreeSearchStructure() override;\n\nFree the memory required for the spatial data structure.\n"},
  {"BuildLocator", PyvtkLinearTransformCellLocator_BuildLocator, METH_VARARGS,
   "BuildLocator(self) -> None\nC++: void BuildLocator() override;\n\nBuild the locator from the input dataset. This will NOT do\nanything if UseExistingSearchStructure is on.\n"},
  {"ForceBuildLocator", PyvtkLinearTransformCellLocator_ForceBuildLocator, METH_VARARGS,
   "ForceBuildLocator(self) -> None\nC++: void ForceBuildLocator() override;\n\nBuild the locator from the input dataset (even if\nUseExistingSearchStructure is on).\n\nThis function is not pure virtual to maintain backwards\ncompatibility.\n"},
  {"ShallowCopy", PyvtkLinearTransformCellLocator_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, locator:vtkAbstractCellLocator) -> None\nC++: void ShallowCopy(vtkAbstractCellLocator *locator) override;\n\nShallow copy of a vtkLinearTransformCellLocator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLinearTransformCellLocator_Doc =
  "vtkLinearTransformCellLocator - Cell locator adaptor to perform cell\nLocation on datasets that are a linear transformation of the original\ndataset.\n\n"
  "Superclass: vtkAbstractCellLocator\n\n"
  "vtkLinearTransformCellLocator is a cell locator adaptor that can\n"
  "accept any cell locator, e.g. vtkStaticCellLocator, vtkCellLocator,\n"
  "calculate the transformation matrix from the cell locator adaptor's\n"
  "dataset to the given dataset inside BuildLocator, and then use the\n"
  "cell locator and transformation to perform cell locator operations.\n"
  "The transformation matrix is computed using the\n"
  "https://en.wikipedia.org/wiki/Kabsch_algorithm. UseAllPoints allows\n"
  "you to compute the transformation using all the points of the dataset\n"
  "(use that when you are not sure if it's a linear transformation) or\n"
  "100 sample points (or less if the dataset is smaller) that are chosen\n"
  "every-nth. IsLinearTransformation validates if the dataset is a\n"
  "linear transformation of the cell locator's dataset based on the used\n"
  "points.\n\n"
  "@warning The cell locator adaptor MUST be built before using it.\n\n"
  "vtkLinearTransformCellLocator does NOT utilize ANY\n"
  "vtkLocator/vtkAbstractCellLocator parameter:\n\n"
  "@sa\n"
  "vtkAbstractCellLocator vtkCellLocator vtkStaticCellLocator\n"
  "vtkCellTreeLocator vtkModifiedBSPTree vtkOBBTree\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLinearTransformCellLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkLinearTransformCellLocator", // tp_name
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
  PyvtkLinearTransformCellLocator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLinearTransformCellLocator_StaticNew()
{
  return vtkLinearTransformCellLocator::New();
}

PyObject *PyvtkLinearTransformCellLocator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLinearTransformCellLocator_Type, PyvtkLinearTransformCellLocator_Methods,
    "vtkLinearTransformCellLocator",
 &PyvtkLinearTransformCellLocator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAbstractCellLocator");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLinearTransformCellLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLinearTransformCellLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLinearTransformCellLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

