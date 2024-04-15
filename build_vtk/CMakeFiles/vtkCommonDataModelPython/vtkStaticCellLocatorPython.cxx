// python wrapper for vtkStaticCellLocator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStaticCellLocator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStaticCellLocator(PyObject *dict); }
extern "C" { PyObject *PyvtkStaticCellLocator_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractCellLocator_ClassNew
extern "C" { PyObject *PyvtkAbstractCellLocator_ClassNew(); }
#define DECLARED_PyvtkAbstractCellLocator_ClassNew
#endif

static PyObject *
PyvtkStaticCellLocator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStaticCellLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStaticCellLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStaticCellLocator *tempr = vtkStaticCellLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStaticCellLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStaticCellLocator::NewInstance());

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
PyvtkStaticCellLocator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStaticCellLocator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStaticCellLocator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_SetDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->SetDivisions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkStaticCellLocator::SetDivisions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStaticCellLocator_SetDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDivisions(temp0);
    }
    else
    {
      op->vtkStaticCellLocator::SetDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStaticCellLocator_SetDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkStaticCellLocator_SetDivisions_s1(self, args);
    case 1:
      return PyvtkStaticCellLocator_SetDivisions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDivisions");
  return nullptr;
}


static PyObject *
PyvtkStaticCellLocator_GetDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDivisions() :
      op->vtkStaticCellLocator::GetDivisions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_SetMaxNumberOfBuckets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumberOfBuckets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxNumberOfBuckets(temp0);
    }
    else
    {
      op->vtkStaticCellLocator::SetMaxNumberOfBuckets(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_GetMaxNumberOfBucketsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfBucketsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaxNumberOfBucketsMinValue() :
      op->vtkStaticCellLocator::GetMaxNumberOfBucketsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_GetMaxNumberOfBucketsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfBucketsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaxNumberOfBucketsMaxValue() :
      op->vtkStaticCellLocator::GetMaxNumberOfBucketsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_GetMaxNumberOfBuckets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfBuckets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaxNumberOfBuckets() :
      op->vtkStaticCellLocator::GetMaxNumberOfBuckets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_GetLargeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLargeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLargeIds() :
      op->vtkStaticCellLocator::GetLargeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_SetUseDiagonalLengthTolerance(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetUseDiagonalLengthTolerance."
    " (" "This method is no longer used because Tolerance is also not used" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetUseDiagonalLengthTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDiagonalLengthTolerance(temp0);
    }
    else
    {
      op->vtkStaticCellLocator::SetUseDiagonalLengthTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_GetUseDiagonalLengthTolerance(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetUseDiagonalLengthTolerance."
    " (" "This method is no longer used because Tolerance is also not used" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetUseDiagonalLengthTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDiagonalLengthTolerance() :
      op->vtkStaticCellLocator::GetUseDiagonalLengthTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_UseDiagonalLengthToleranceOn(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method UseDiagonalLengthToleranceOn."
    " (" "This method is no longer used because Tolerance is also not used" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "UseDiagonalLengthToleranceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDiagonalLengthToleranceOn();
    }
    else
    {
      op->vtkStaticCellLocator::UseDiagonalLengthToleranceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_UseDiagonalLengthToleranceOff(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method UseDiagonalLengthToleranceOff."
    " (" "This method is no longer used because Tolerance is also not used" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "UseDiagonalLengthToleranceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDiagonalLengthToleranceOff();
    }
    else
    {
      op->vtkStaticCellLocator::UseDiagonalLengthToleranceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_IntersectWithLine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8));

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
PyvtkStaticCellLocator_IntersectWithLine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStaticCellLocator_IntersectWithLine_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkStaticCellLocator_IntersectWithLine_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
PyvtkStaticCellLocator_IntersectWithLine_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStaticCellLocator_IntersectWithLine_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStaticCellLocator_IntersectWithLine(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 9:
      return PyvtkStaticCellLocator_IntersectWithLine_s1(self, args);
    case 6:
      return PyvtkStaticCellLocator_IntersectWithLine_s2(self, args);
    case 7:
      return PyvtkStaticCellLocator_IntersectWithLine_s3(self, args);
    case 8:
      return PyvtkStaticCellLocator_IntersectWithLine_s4(self, args);
    case 4:
      return PyvtkStaticCellLocator_IntersectWithLine_s5(self, args);
    case 5:
      return PyvtkStaticCellLocator_IntersectWithLine_s6(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IntersectWithLine");
  return nullptr;
}


static PyObject *
PyvtkStaticCellLocator_FindClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::FindClosestPoint(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkStaticCellLocator_FindClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::FindClosestPoint(temp0, temp1, temp2, temp3, temp4);
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
PyvtkStaticCellLocator_FindClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkStaticCellLocator_FindClosestPoint_s1(self, args);
    case 5:
      return PyvtkStaticCellLocator_FindClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPoint");
  return nullptr;
}


static PyObject *
PyvtkStaticCellLocator_FindClosestPointWithinRadius_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
PyvtkStaticCellLocator_FindClosestPointWithinRadius_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkStaticCellLocator_FindClosestPointWithinRadius_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkStaticCellLocator_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 8:
      return PyvtkStaticCellLocator_FindClosestPointWithinRadius_s1(self, args);
    case 6:
      return PyvtkStaticCellLocator_FindClosestPointWithinRadius_s2(self, args);
    case 7:
      return PyvtkStaticCellLocator_FindClosestPointWithinRadius_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPointWithinRadius");
  return nullptr;
}


static PyObject *
PyvtkStaticCellLocator_FindCellsWithinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCellsWithinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::FindCellsWithinBounds(temp0, temp1);
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
PyvtkStaticCellLocator_FindCellsAlongLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCellsAlongLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::FindCellsAlongLine(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_FindCellsAlongPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCellsAlongPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::FindCellsAlongPlane(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::FindCell(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkStaticCellLocator_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::FindCell(temp0));

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
PyvtkStaticCellLocator_FindCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::FindCell(temp0, temp1, temp2, temp3, temp4));

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
PyvtkStaticCellLocator_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkStaticCellLocator_FindCell_s1(self, args);
    case 1:
      return PyvtkStaticCellLocator_FindCell_s2(self, args);
    case 5:
      return PyvtkStaticCellLocator_FindCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return nullptr;
}


static PyObject *
PyvtkStaticCellLocator_InsideCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::InsideCellBounds(temp0, temp1));

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
PyvtkStaticCellLocator_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::GenerateRepresentation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeSearchStructure();
    }
    else
    {
      op->vtkStaticCellLocator::FreeSearchStructure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildLocator();
    }
    else
    {
      op->vtkStaticCellLocator::BuildLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_ForceBuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceBuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceBuildLocator();
    }
    else
    {
      op->vtkStaticCellLocator::ForceBuildLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCellLocator_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCellLocator *op = static_cast<vtkStaticCellLocator *>(vp);

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
      op->vtkStaticCellLocator::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStaticCellLocator_Methods[] = {
  {"IsTypeOf", PyvtkStaticCellLocator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStaticCellLocator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStaticCellLocator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStaticCellLocator\nC++: static vtkStaticCellLocator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStaticCellLocator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStaticCellLocator\nC++: vtkStaticCellLocator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStaticCellLocator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStaticCellLocator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDivisions", PyvtkStaticCellLocator_SetDivisions, METH_VARARGS,
   "SetDivisions(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetDivisions(int _arg1, int _arg2, int _arg3)\nSetDivisions(self, _arg:(int, int, int)) -> None\nC++: virtual void SetDivisions(const int _arg[3])\n\nSet the number of divisions in x-y-z directions. If the Automatic\ndata member is enabled, the Divisions are set according to the\nNumberOfCellsPerNode and MaxNumberOfBuckets data members. The\nnumber of divisions must be >= 1 in each direction.\n"},
  {"GetDivisions", PyvtkStaticCellLocator_GetDivisions, METH_VARARGS,
   "GetDivisions(self) -> (int, int, int)\nC++: virtual int *GetDivisions()\n\n"},
  {"SetMaxNumberOfBuckets", PyvtkStaticCellLocator_SetMaxNumberOfBuckets, METH_VARARGS,
   "SetMaxNumberOfBuckets(self, _arg:int) -> None\nC++: virtual void SetMaxNumberOfBuckets(vtkIdType _arg)\n\nSet the maximum number of buckets in the locator. By default the\nvalue is set to VTK_INT_MAX. Note that there are significant\nperformance implications at work here. If the number of buckets\nis set very large (meaning > VTK_INT_MAX) then internal sorting\nmay be performed using 64-bit integers (which is much slower than\nusing a 32-bit int). Of course, memory requirements may\ndramatically increase as well.  It is recommended that the\ndefault value be used; but for extremely large data it may be\ndesired to create a locator with an exceptionally large number of\nbuckets. Note also that during initialization of the locator if\nthe MaxNumberOfBuckets threshold is exceeded, the Divisions are\nscaled down in such a way as not to exceed the MaxNumberOfBuckets\nproportionally to the size of the bounding box in the x-y-z\ndirections.\n"},
  {"GetMaxNumberOfBucketsMinValue", PyvtkStaticCellLocator_GetMaxNumberOfBucketsMinValue, METH_VARARGS,
   "GetMaxNumberOfBucketsMinValue(self) -> int\nC++: virtual vtkIdType GetMaxNumberOfBucketsMinValue()\n\n"},
  {"GetMaxNumberOfBucketsMaxValue", PyvtkStaticCellLocator_GetMaxNumberOfBucketsMaxValue, METH_VARARGS,
   "GetMaxNumberOfBucketsMaxValue(self) -> int\nC++: virtual vtkIdType GetMaxNumberOfBucketsMaxValue()\n\n"},
  {"GetMaxNumberOfBuckets", PyvtkStaticCellLocator_GetMaxNumberOfBuckets, METH_VARARGS,
   "GetMaxNumberOfBuckets(self) -> int\nC++: virtual vtkIdType GetMaxNumberOfBuckets()\n\n"},
  {"GetLargeIds", PyvtkStaticCellLocator_GetLargeIds, METH_VARARGS,
   "GetLargeIds(self) -> bool\nC++: bool GetLargeIds()\n\nInform the user as to whether large ids are being used. This flag\nonly has meaning after the locator has been built. Large ids are\nused when the number of binned points, or the number of bins, is\n>= the maximum number of buckets (specified by the user). Note\nthat LargeIds are only available on 64-bit architectures.\n"},
  {"SetUseDiagonalLengthTolerance", PyvtkStaticCellLocator_SetUseDiagonalLengthTolerance, METH_VARARGS,
   "SetUseDiagonalLengthTolerance(self, _arg:bool) -> None\nC++: virtual void SetUseDiagonalLengthTolerance(bool _arg)\n\nThese methods are deprecated. This flag was used in internally in\nconjunction with Tolerance, which has been removed because nobody\nwas using it, and it would lead to really slow performance if the\ndataset was small bounds-wise. Tolerance was originally\nintroduced to solve IntersectionWithLine issues the existed\nbefore. These issues have been resolved by using double tolerance\ninternally.\n\nWhen set to true, the CellBinner will multiply the locator\ntolerance by the diagonal length of the dataset to compute its\nown tolerance. When not, it uses the locator tolerance directly.\nDefault is false.\n"},
  {"GetUseDiagonalLengthTolerance", PyvtkStaticCellLocator_GetUseDiagonalLengthTolerance, METH_VARARGS,
   "GetUseDiagonalLengthTolerance(self) -> bool\nC++: virtual bool GetUseDiagonalLengthTolerance()\n\n"},
  {"UseDiagonalLengthToleranceOn", PyvtkStaticCellLocator_UseDiagonalLengthToleranceOn, METH_VARARGS,
   "UseDiagonalLengthToleranceOn(self) -> None\nC++: virtual void UseDiagonalLengthToleranceOn()\n\n"},
  {"UseDiagonalLengthToleranceOff", PyvtkStaticCellLocator_UseDiagonalLengthToleranceOff, METH_VARARGS,
   "UseDiagonalLengthToleranceOff(self) -> None\nC++: virtual void UseDiagonalLengthToleranceOff()\n\n"},
  {"IntersectWithLine", PyvtkStaticCellLocator_IntersectWithLine, METH_VARARGS,
   "IntersectWithLine(self, a0:(float, float, float), a1:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int, cellId:int,\n    cell:vtkGenericCell) -> int\nC++: int IntersectWithLine(const double a0[3], const double a1[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId, vtkIdType &cellId, vtkGenericCell *cell) override;\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, points:vtkPoints, cellIds:vtkIdList,\n     cell:vtkGenericCell) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, vtkPoints *points, vtkIdList *cellIds,\n    vtkGenericCell *cell) override;\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, double &t, double x[3],\n    double pcoords[3], int &subId)\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int, cellId:int) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, double &t, double x[3],\n    double pcoords[3], int &subId, vtkIdType &cellId)\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), points:vtkPoints, cellIds:vtkIdList) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], vtkPoints *points, vtkIdList *cellIds)\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, points:vtkPoints, cellIds:vtkIdList)\n     -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, vtkPoints *points,\n    vtkIdList *cellIds)\n\nReturn intersection point (if any) AND the cell which  ...\n [Truncated]\n"},
  {"FindClosestPoint", PyvtkStaticCellLocator_FindClosestPoint, METH_VARARGS,
   "FindClosestPoint(self, x:(float, float, float),\n    closestPoint:[float, float, float], cell:vtkGenericCell,\n    cellId:int, subId:int, dist2:float) -> None\nC++: void FindClosestPoint(const double x[3],\n    double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2) override;\nFindClosestPoint(self, x:(float, float, float),\n    closestPoint:[float, float, float], cellId:int, subId:int,\n    dist2:float) -> None\nC++: virtual void FindClosestPoint(const double x[3],\n    double closestPoint[3], vtkIdType &cellId, int &subId,\n    double &dist2)\n\nReturn the closest point and the cell which is closest to the\npoint x. The closest point is somewhere on a cell, it need not be\none of the vertices of the cell.\n\nReimplemented from vtkAbstractCellLocator to showcase that it's a\nsupported function.\n\nFor other FindClosestPoint signatures, see\nvtkAbstractCellLocator.\n"},
  {"FindClosestPointWithinRadius", PyvtkStaticCellLocator_FindClosestPointWithinRadius, METH_VARARGS,
   "FindClosestPointWithinRadius(self, x:[float, float, float],\n    radius:float, closestPoint:[float, float, float],\n    cell:vtkGenericCell, cellId:int, subId:int, dist2:float,\n    inside:int) -> int\nC++: vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2, int &inside)\n    override;\nFindClosestPointWithinRadius(self, x:[float, float, float],\n    radius:float, closestPoint:[float, float, float], cellId:int,\n    subId:int, dist2:float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkIdType &cellId,\n    int &subId, double &dist2)\nFindClosestPointWithinRadius(self, x:[float, float, float],\n    radius:float, closestPoint:[float, float, float],\n    cell:vtkGenericCell, cellId:int, subId:int, dist2:float)\n    -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2)\n\nReturn the closest point within a specified radius and the cell\nwhich is closest to the point x. The closest point is somewhere\non a cell, it need not be one of the vertices of the cell. This\nmethod returns 1 if a point is found within the specified radius.\nIf there are no cells within the specified radius, the method\nreturns 0 and the values of closestPoint, cellId, subId, and\ndist2 are undefined. If a closest point is found, inside returns\nthe return value of the EvaluatePosition call to the closest\ncell; inside(=1) or outside(=0).\n"},
  {"FindCellsWithinBounds", PyvtkStaticCellLocator_FindCellsWithinBounds, METH_VARARGS,
   "FindCellsWithinBounds(self, bbox:[float, ...], cells:vtkIdList)\n    -> None\nC++: void FindCellsWithinBounds(double *bbox, vtkIdList *cells)\n    override;\n\nReturn a list of unique cell ids inside of a given bounding box.\nThe user must provide the vtkIdList to populate.\n"},
  {"FindCellsAlongLine", PyvtkStaticCellLocator_FindCellsAlongLine, METH_VARARGS,
   "FindCellsAlongLine(self, p1:(float, float, float), p2:(float,\n    float, float), tolerance:float, cellsIds:vtkIdList) -> None\nC++: void FindCellsAlongLine(const double p1[3],\n    const double p2[3], double tolerance, vtkIdList *cellsIds)\n    override;\n\nTake the passed line segment and intersect it with the data set.\nFor each intersection with the bounds of a cell, the cellIds have\nthe relevant information added. If cellIds is nullptr pointer,\nthen no information is generated for that list.\n\nReimplemented from vtkAbstractCellLocator to showcase that it's a\nsupported function.\n"},
  {"FindCellsAlongPlane", PyvtkStaticCellLocator_FindCellsAlongPlane, METH_VARARGS,
   "FindCellsAlongPlane(self, o:(float, float, float), n:(float,\n    float, float), tolerance:float, cells:vtkIdList) -> None\nC++: void FindCellsAlongPlane(const double o[3],\n    const double n[3], double tolerance, vtkIdList *cells)\n    override;\n\nTake the passed line segment and intersect it with the data set.\nFor each intersection with the bounds of a cell, the cellIds have\nthe relevant information added sort by t. If cellIds is nullptr\npointer, then no information is generated for that list.\n"},
  {"FindCell", PyvtkStaticCellLocator_FindCell, METH_VARARGS,
   "FindCell(self, x:[float, float, float], tol2:float,\n    GenCell:vtkGenericCell, subId:int, pcoords:[float, float,\n    float], weights:[float, ...]) -> int\nC++: vtkIdType FindCell(double x[3], double tol2,\n    vtkGenericCell *GenCell, int &subId, double pcoords[3],\n    double *weights) override;\nFindCell(self, x:[float, float, float]) -> int\nC++: virtual vtkIdType FindCell(double x[3])\nFindCell(self, x:[float, float, float], tol2:float,\n    GenCell:vtkGenericCell, pcoords:[float, float, float],\n    weights:[float, ...]) -> int\nC++: virtual vtkIdType FindCell(double x[3], double tol2,\n    vtkGenericCell *GenCell, double pcoords[3], double *weights)\n\nFind the cell containing a given point. returns -1 if no cell\nfound the cell parameters are copied into the supplied variables,\na cell must be provided to store the information.\n\nFor other FindCell signatures, see vtkAbstractCellLocator.\n"},
  {"InsideCellBounds", PyvtkStaticCellLocator_InsideCellBounds, METH_VARARGS,
   "InsideCellBounds(self, x:[float, float, float], cellId:int)\n    -> bool\nC++: bool InsideCellBounds(double x[3], vtkIdType cellId)\n    override;\n\nQuickly test if a point is inside the bounds of a particular\ncell. This function should be used ONLY after the locator is\nbuilt.\n"},
  {"GenerateRepresentation", PyvtkStaticCellLocator_GenerateRepresentation, METH_VARARGS,
   "GenerateRepresentation(self, level:int, pd:vtkPolyData) -> None\nC++: void GenerateRepresentation(int level, vtkPolyData *pd)\n    override;\n\nSatisfy vtkLocator abstract interface.\n"},
  {"FreeSearchStructure", PyvtkStaticCellLocator_FreeSearchStructure, METH_VARARGS,
   "FreeSearchStructure(self) -> None\nC++: void FreeSearchStructure() override;\n\nFree the memory required for the spatial data structure.\n"},
  {"BuildLocator", PyvtkStaticCellLocator_BuildLocator, METH_VARARGS,
   "BuildLocator(self) -> None\nC++: void BuildLocator() override;\n\nBuild the locator from the input dataset. This will NOT do\nanything if UseExistingSearchStructure is on.\n"},
  {"ForceBuildLocator", PyvtkStaticCellLocator_ForceBuildLocator, METH_VARARGS,
   "ForceBuildLocator(self) -> None\nC++: void ForceBuildLocator() override;\n\nBuild the locator from the input dataset (even if\nUseExistingSearchStructure is on).\n\nThis function is not pure virtual to maintain backwards\ncompatibility.\n"},
  {"ShallowCopy", PyvtkStaticCellLocator_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, locator:vtkAbstractCellLocator) -> None\nC++: void ShallowCopy(vtkAbstractCellLocator *locator) override;\n\nShallow copy of a vtkStaticCellLocator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStaticCellLocator_Doc =
  "vtkStaticCellLocator - perform fast cell location operations\n\n"
  "Superclass: vtkAbstractCellLocator\n\n"
  "vtkStaticCellLocator is a type of vtkAbstractCellLocator that\n"
  "accelerates certain operations when performing spatial operations on\n"
  "cells. These operations include finding a point that contains a cell,\n"
  "and intersecting cells with a line.\n\n"
  "vtkStaticCellLocator is an accelerated version of vtkCellLocator. It\n"
  "is threaded (via vtkSMPTools), and supports one-time static\n"
  "construction (i.e., incremental cell insertion is not supported).\n\n"
  "@warning\n"
  "vtkStaticCellLocator utilizes the following parent class parameters:\n"
  "- Automatic                   (default true)\n"
  "- NumberOfCellsPerNode        (default 10)\n"
  "- UseExistingSearchStructure  (default false)\n\n"
  "vtkStaticCellLocator does NOT utilize the following parameters:\n"
  "- CacheCellBounds             (always cached)\n"
  "- Tolerance\n"
  "- Level\n"
  "- MaxLevel\n"
  "- RetainCellLists\n\n"
  "@warning\n"
  "This class is templated. It may run slower than serial execution if\n"
  "the code is not optimized during compilation. Build in Release or\n"
  "ReleaseWithDebugInfo.\n\n"
  "@sa\n"
  "vtkAbstractCellLocator vtkCellLocator vtkCellTreeLocator\n"
  "vtkModifiedBSPTree vtkOBBTree\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStaticCellLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkStaticCellLocator", // tp_name
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
  PyvtkStaticCellLocator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStaticCellLocator_StaticNew()
{
  return vtkStaticCellLocator::New();
}

PyObject *PyvtkStaticCellLocator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStaticCellLocator_Type, PyvtkStaticCellLocator_Methods,
    "vtkStaticCellLocator",
 &PyvtkStaticCellLocator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractCellLocator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStaticCellLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStaticCellLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStaticCellLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

