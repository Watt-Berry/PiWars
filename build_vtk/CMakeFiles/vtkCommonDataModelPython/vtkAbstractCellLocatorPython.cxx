// python wrapper for vtkAbstractCellLocator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAbstractCellLocator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractCellLocator(PyObject *dict); }
extern "C" { PyObject *PyvtkAbstractCellLocator_ClassNew(); }

#ifndef DECLARED_PyvtkLocator_ClassNew
extern "C" { PyObject *PyvtkLocator_ClassNew(); }
#define DECLARED_PyvtkLocator_ClassNew
#endif

static PyObject *
PyvtkAbstractCellLocator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractCellLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractCellLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractCellLocator *tempr = vtkAbstractCellLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractCellLocator::NewInstance());

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
PyvtkAbstractCellLocator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAbstractCellLocator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAbstractCellLocator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_SetNumberOfCellsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCellsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfCellsPerNode(temp0);
    }
    else
    {
      op->vtkAbstractCellLocator::SetNumberOfCellsPerNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetNumberOfCellsPerNodeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellsPerNodeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellsPerNodeMinValue() :
      op->vtkAbstractCellLocator::GetNumberOfCellsPerNodeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetNumberOfCellsPerNodeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellsPerNodeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellsPerNodeMaxValue() :
      op->vtkAbstractCellLocator::GetNumberOfCellsPerNodeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetNumberOfCellsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellsPerNode() :
      op->vtkAbstractCellLocator::GetNumberOfCellsPerNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_SetCacheCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheCellBounds(temp0);
    }
    else
    {
      op->vtkAbstractCellLocator::SetCacheCellBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetCacheCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheCellBounds() :
      op->vtkAbstractCellLocator::GetCacheCellBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_CacheCellBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheCellBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheCellBoundsOn();
    }
    else
    {
      op->vtkAbstractCellLocator::CacheCellBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_CacheCellBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheCellBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheCellBoundsOff();
    }
    else
    {
      op->vtkAbstractCellLocator::CacheCellBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_ComputeCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeCellBounds();
    }
    else
    {
      op->vtkAbstractCellLocator::ComputeCellBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_SetRetainCellLists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRetainCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRetainCellLists(temp0);
    }
    else
    {
      op->vtkAbstractCellLocator::SetRetainCellLists(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetRetainCellLists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRetainCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRetainCellLists() :
      op->vtkAbstractCellLocator::GetRetainCellLists());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_RetainCellListsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RetainCellListsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RetainCellListsOn();
    }
    else
    {
      op->vtkAbstractCellLocator::RetainCellListsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_RetainCellListsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RetainCellListsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RetainCellListsOff();
    }
    else
    {
      op->vtkAbstractCellLocator::RetainCellListsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_SetLazyEvaluation(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetLazyEvaluation."
    " (" "This method is deprecated because it can lead to thread-safety issues" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetLazyEvaluation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLazyEvaluation(temp0);
    }
    else
    {
      op->vtkAbstractCellLocator::SetLazyEvaluation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_GetLazyEvaluation(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetLazyEvaluation."
    " (" "This method is deprecated because it can lead to thread-safety issues" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetLazyEvaluation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLazyEvaluation() :
      op->vtkAbstractCellLocator::GetLazyEvaluation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_LazyEvaluationOn(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method LazyEvaluationOn."
    " (" "This method is deprecated because it can lead to thread-safety issues" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "LazyEvaluationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LazyEvaluationOn();
    }
    else
    {
      op->vtkAbstractCellLocator::LazyEvaluationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_LazyEvaluationOff(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method LazyEvaluationOff."
    " (" "This method is deprecated because it can lead to thread-safety issues" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "LazyEvaluationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LazyEvaluationOff();
    }
    else
    {
      op->vtkAbstractCellLocator::LazyEvaluationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_IntersectWithLine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkAbstractCellLocator_IntersectWithLine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
PyvtkAbstractCellLocator_IntersectWithLine_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8));

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
PyvtkAbstractCellLocator_IntersectWithLine_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractCellLocator_IntersectWithLine_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractCellLocator_IntersectWithLine_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractCellLocator_IntersectWithLine(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 7:
      return PyvtkAbstractCellLocator_IntersectWithLine_s1(self, args);
    case 8:
      return PyvtkAbstractCellLocator_IntersectWithLine_s2(self, args);
    case 9:
      return PyvtkAbstractCellLocator_IntersectWithLine_s3(self, args);
    case 4:
      return PyvtkAbstractCellLocator_IntersectWithLine_s4(self, args);
    case 5:
      return PyvtkAbstractCellLocator_IntersectWithLine_s5(self, args);
    case 6:
      return PyvtkAbstractCellLocator_IntersectWithLine_s6(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IntersectWithLine");
  return nullptr;
}


static PyObject *
PyvtkAbstractCellLocator_FindClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::FindClosestPoint(temp0, temp1, temp2, temp3, temp4);
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
PyvtkAbstractCellLocator_FindClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::FindClosestPoint(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkAbstractCellLocator_FindClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkAbstractCellLocator_FindClosestPoint_s1(self, args);
    case 6:
      return PyvtkAbstractCellLocator_FindClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPoint");
  return nullptr;
}


static PyObject *
PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::FindClosestPointWithinRadius(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
PyvtkAbstractCellLocator_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s1(self, args);
    case 7:
      return PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s2(self, args);
    case 8:
      return PyvtkAbstractCellLocator_FindClosestPointWithinRadius_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPointWithinRadius");
  return nullptr;
}


static PyObject *
PyvtkAbstractCellLocator_FindCellsWithinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCellsWithinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::FindCellsWithinBounds(temp0, temp1);
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
PyvtkAbstractCellLocator_FindCellsAlongLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCellsAlongLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::FindCellsAlongLine(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_FindCellsAlongPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCellsAlongPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::FindCellsAlongPlane(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractCellLocator_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::FindCell(temp0));

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
PyvtkAbstractCellLocator_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::FindCell(temp0, temp1, temp2, temp3, temp4));

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
PyvtkAbstractCellLocator_FindCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::FindCell(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkAbstractCellLocator_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAbstractCellLocator_FindCell_s1(self, args);
    case 5:
      return PyvtkAbstractCellLocator_FindCell_s2(self, args);
    case 6:
      return PyvtkAbstractCellLocator_FindCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return nullptr;
}


static PyObject *
PyvtkAbstractCellLocator_InsideCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::InsideCellBounds(temp0, temp1));

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
PyvtkAbstractCellLocator_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractCellLocator *op = static_cast<vtkAbstractCellLocator *>(vp);

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
      op->vtkAbstractCellLocator::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractCellLocator_Methods[] = {
  {"IsTypeOf", PyvtkAbstractCellLocator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractCellLocator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractCellLocator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAbstractCellLocator\nC++: static vtkAbstractCellLocator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractCellLocator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAbstractCellLocator\nC++: vtkAbstractCellLocator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAbstractCellLocator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAbstractCellLocator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfCellsPerNode", PyvtkAbstractCellLocator_SetNumberOfCellsPerNode, METH_VARARGS,
   "SetNumberOfCellsPerNode(self, _arg:int) -> None\nC++: virtual void SetNumberOfCellsPerNode(int _arg)\n\nSpecify the preferred/maximum number of cells in each\nnode/bucket. Default 32. Locators generally operate by\nsubdividing space into smaller regions until the number of cells\nin each region (or node) reaches the desired level.\n"},
  {"GetNumberOfCellsPerNodeMinValue", PyvtkAbstractCellLocator_GetNumberOfCellsPerNodeMinValue, METH_VARARGS,
   "GetNumberOfCellsPerNodeMinValue(self) -> int\nC++: virtual int GetNumberOfCellsPerNodeMinValue()\n\n"},
  {"GetNumberOfCellsPerNodeMaxValue", PyvtkAbstractCellLocator_GetNumberOfCellsPerNodeMaxValue, METH_VARARGS,
   "GetNumberOfCellsPerNodeMaxValue(self) -> int\nC++: virtual int GetNumberOfCellsPerNodeMaxValue()\n\n"},
  {"GetNumberOfCellsPerNode", PyvtkAbstractCellLocator_GetNumberOfCellsPerNode, METH_VARARGS,
   "GetNumberOfCellsPerNode(self) -> int\nC++: virtual int GetNumberOfCellsPerNode()\n\n"},
  {"SetCacheCellBounds", PyvtkAbstractCellLocator_SetCacheCellBounds, METH_VARARGS,
   "SetCacheCellBounds(self, _arg:int) -> None\nC++: virtual void SetCacheCellBounds(vtkTypeBool _arg)\n\nBoolean controls whether the bounds of each cell are computed\nonly once and then saved.  Should be 10 to 20% faster if\nrepeatedly calling any of the Intersect/Find routines and the\nextra memory won't cause disk caching (48 extra bytes per cell\nare required to save the bounds).\n"},
  {"GetCacheCellBounds", PyvtkAbstractCellLocator_GetCacheCellBounds, METH_VARARGS,
   "GetCacheCellBounds(self) -> int\nC++: virtual vtkTypeBool GetCacheCellBounds()\n\n"},
  {"CacheCellBoundsOn", PyvtkAbstractCellLocator_CacheCellBoundsOn, METH_VARARGS,
   "CacheCellBoundsOn(self) -> None\nC++: virtual void CacheCellBoundsOn()\n\n"},
  {"CacheCellBoundsOff", PyvtkAbstractCellLocator_CacheCellBoundsOff, METH_VARARGS,
   "CacheCellBoundsOff(self) -> None\nC++: virtual void CacheCellBoundsOff()\n\n"},
  {"ComputeCellBounds", PyvtkAbstractCellLocator_ComputeCellBounds, METH_VARARGS,
   "ComputeCellBounds(self) -> None\nC++: void ComputeCellBounds()\n\nThis function can be used either internally or externally to\ncompute only the cached cell bounds if CacheCellBounds is on.\n"},
  {"SetRetainCellLists", PyvtkAbstractCellLocator_SetRetainCellLists, METH_VARARGS,
   "SetRetainCellLists(self, _arg:int) -> None\nC++: virtual void SetRetainCellLists(vtkTypeBool _arg)\n\nBoolean controls whether to maintain list of cells in each node.\nnot applicable to all implementations, but if the locator is\nbeing used as a geometry simplification technique, there is no\nneed to keep them.\n"},
  {"GetRetainCellLists", PyvtkAbstractCellLocator_GetRetainCellLists, METH_VARARGS,
   "GetRetainCellLists(self) -> int\nC++: virtual vtkTypeBool GetRetainCellLists()\n\n"},
  {"RetainCellListsOn", PyvtkAbstractCellLocator_RetainCellListsOn, METH_VARARGS,
   "RetainCellListsOn(self) -> None\nC++: virtual void RetainCellListsOn()\n\n"},
  {"RetainCellListsOff", PyvtkAbstractCellLocator_RetainCellListsOff, METH_VARARGS,
   "RetainCellListsOff(self) -> None\nC++: virtual void RetainCellListsOff()\n\n"},
  {"SetLazyEvaluation", PyvtkAbstractCellLocator_SetLazyEvaluation, METH_VARARGS,
   "SetLazyEvaluation(self, __a:int) -> None\nC++: virtual void SetLazyEvaluation(vtkTypeBool)\n\nMost Locators build their search structures during BuildLocator\nbut some may delay construction until it is actually needed. If\nLazyEvaluation is supported, this turns on/off the feature. if\nnot supported, it is ignored.\n"},
  {"GetLazyEvaluation", PyvtkAbstractCellLocator_GetLazyEvaluation, METH_VARARGS,
   "GetLazyEvaluation(self) -> int\nC++: virtual vtkTypeBool GetLazyEvaluation()\n\n"},
  {"LazyEvaluationOn", PyvtkAbstractCellLocator_LazyEvaluationOn, METH_VARARGS,
   "LazyEvaluationOn(self) -> None\nC++: virtual void LazyEvaluationOn()\n\n"},
  {"LazyEvaluationOff", PyvtkAbstractCellLocator_LazyEvaluationOff, METH_VARARGS,
   "LazyEvaluationOff(self) -> None\nC++: virtual void LazyEvaluationOff()\n\n"},
  {"IntersectWithLine", PyvtkAbstractCellLocator_IntersectWithLine, METH_VARARGS,
   "IntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, double &t, double x[3],\n    double pcoords[3], int &subId)\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int, cellId:int) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, double &t, double x[3],\n    double pcoords[3], int &subId, vtkIdType &cellId)\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int, cellId:int,\n    cell:vtkGenericCell) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, double &t, double x[3],\n    double pcoords[3], int &subId, vtkIdType &cellId,\n    vtkGenericCell *cell)\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), points:vtkPoints, cellIds:vtkIdList) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], vtkPoints *points, vtkIdList *cellIds)\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, points:vtkPoints, cellIds:vtkIdList)\n     -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, vtkPoints *points,\n    vtkIdList *cellIds)\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, points:vtkPoints, cellIds:vtkIdList,\n     cell:vtkGenericCell) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, vtkPoints *points,\n    vtkIdList *cellIds, vtkGenericCell *cell)\n\nReturn intersection point (if any) of finite line with  ...\n [Truncated]\n"},
  {"FindClosestPoint", PyvtkAbstractCellLocator_FindClosestPoint, METH_VARARGS,
   "FindClosestPoint(self, x:(float, float, float),\n    closestPoint:[float, float, float], cellId:int, subId:int,\n    dist2:float) -> None\nC++: virtual void FindClosestPoint(const double x[3],\n    double closestPoint[3], vtkIdType &cellId, int &subId,\n    double &dist2)\nFindClosestPoint(self, x:(float, float, float),\n    closestPoint:[float, float, float], cell:vtkGenericCell,\n    cellId:int, subId:int, dist2:float) -> None\nC++: virtual void FindClosestPoint(const double x[3],\n    double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2)\n\nReturn the closest point and the cell which is closest to the\npoint x. The closest point is somewhere on a cell, it need not be\none of the vertices of the cell.\n\nA vtkAbstractCellLocator subclass needs to implement\nFindClosestPointWithinRadius which is used internally to\nimplement FindClosestPoint.\n\nTHIS FUNCTION IS NOT THREAD SAFE.\n"},
  {"FindClosestPointWithinRadius", PyvtkAbstractCellLocator_FindClosestPointWithinRadius, METH_VARARGS,
   "FindClosestPointWithinRadius(self, x:[float, float, float],\n    radius:float, closestPoint:[float, float, float], cellId:int,\n    subId:int, dist2:float) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkIdType &cellId,\n    int &subId, double &dist2)\nFindClosestPointWithinRadius(self, x:[float, float, float],\n    radius:float, closestPoint:[float, float, float],\n    cell:vtkGenericCell, cellId:int, subId:int, dist2:float)\n    -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2)\nFindClosestPointWithinRadius(self, x:[float, float, float],\n    radius:float, closestPoint:[float, float, float],\n    cell:vtkGenericCell, cellId:int, subId:int, dist2:float,\n    inside:int) -> int\nC++: virtual vtkIdType FindClosestPointWithinRadius(double x[3],\n    double radius, double closestPoint[3], vtkGenericCell *cell,\n    vtkIdType &cellId, int &subId, double &dist2, int &inside)\n\nReturn the closest point within a specified radius and the cell\nwhich is closest to the point x. The closest point is somewhere\non a cell, it need not be one of the vertices of the cell. This\nmethod returns 1 if a point is found within the specified radius.\nIf there are no cells within the specified radius, the method\nreturns 0 and the values of closestPoint, cellId, subId, and\ndist2 are undefined.\n\nTHIS FUNCTION IS NOT THREAD SAFE.\n"},
  {"FindCellsWithinBounds", PyvtkAbstractCellLocator_FindCellsWithinBounds, METH_VARARGS,
   "FindCellsWithinBounds(self, bbox:[float, ...], cells:vtkIdList)\n    -> None\nC++: virtual void FindCellsWithinBounds(double *bbox,\n    vtkIdList *cells)\n\nReturn a list of unique cell ids inside of a given bounding box.\nThe user must provide the vtkIdList to populate.\n\nTHIS FUNCTION IS THREAD SAFE.\n"},
  {"FindCellsAlongLine", PyvtkAbstractCellLocator_FindCellsAlongLine, METH_VARARGS,
   "FindCellsAlongLine(self, p1:(float, float, float), p2:(float,\n    float, float), tolerance:float, cells:vtkIdList) -> None\nC++: virtual void FindCellsAlongLine(const double p1[3],\n    const double p2[3], double tolerance, vtkIdList *cells)\n\nTake the passed line segment and intersect it with the data set.\nFor each intersection with the bounds of a cell, the cellIds have\nthe relevant information added sort by t. If cellIds is nullptr\npointer, then no information is generated for that list.\n\nA vtkAbstractCellLocator subclass needs to implement\nIntersectWithLine that takes cells ids, which is used internally\nto implement FindCellsAlongLine.\n\nTHIS FUNCTION IS THREAD SAFE.\n"},
  {"FindCellsAlongPlane", PyvtkAbstractCellLocator_FindCellsAlongPlane, METH_VARARGS,
   "FindCellsAlongPlane(self, o:(float, float, float), n:(float,\n    float, float), tolerance:float, cells:vtkIdList) -> None\nC++: virtual void FindCellsAlongPlane(const double o[3],\n    const double n[3], double tolerance, vtkIdList *cells)\n\nGiven an unbounded plane defined by an origin o[3] and unit\nnormal n[3], return the list of unique cell ids in the buckets\ncontaining the plane. It is possible that an empty cell list is\nreturned. The user must provide the vtkIdList cell list to\npopulate. This method returns data only after the locator has\nbeen built.\n\nTHIS FUNCTION IS THREAD SAFE.\n"},
  {"FindCell", PyvtkAbstractCellLocator_FindCell, METH_VARARGS,
   "FindCell(self, x:[float, float, float]) -> int\nC++: virtual vtkIdType FindCell(double x[3])\nFindCell(self, x:[float, float, float], tol2:float,\n    GenCell:vtkGenericCell, pcoords:[float, float, float],\n    weights:[float, ...]) -> int\nC++: virtual vtkIdType FindCell(double x[3], double tol2,\n    vtkGenericCell *GenCell, double pcoords[3], double *weights)\nFindCell(self, x:[float, float, float], tol2:float,\n    GenCell:vtkGenericCell, subId:int, pcoords:[float, float,\n    float], weights:[float, ...]) -> int\nC++: virtual vtkIdType FindCell(double x[3], double tol2,\n    vtkGenericCell *GenCell, int &subId, double pcoords[3],\n    double *weights)\n\nReturns the Id of the cell containing the point, returns -1 if no\ncell found. This interface uses a tolerance of zero\n\nTHIS FUNCTION IS NOT THREAD SAFE.\n"},
  {"InsideCellBounds", PyvtkAbstractCellLocator_InsideCellBounds, METH_VARARGS,
   "InsideCellBounds(self, x:[float, float, float], cell_ID:int)\n    -> bool\nC++: virtual bool InsideCellBounds(double x[3], vtkIdType cell_ID)\n\nQuickly test if a point is inside the bounds of a particular\ncell. Some locators cache cell bounds and this function can make\nuse of fast access to the data. This function should be used ONLY\nafter the locator is built.\n"},
  {"ShallowCopy", PyvtkAbstractCellLocator_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, __a:vtkAbstractCellLocator) -> None\nC++: virtual void ShallowCopy(vtkAbstractCellLocator *)\n\nShallow copy of a vtkAbstractCellLocator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAbstractCellLocator_Doc =
  "vtkAbstractCellLocator - an abstract base class for locators which\nfind cells\n\n"
  "Superclass: vtkLocator\n\n"
  "vtkAbstractCellLocator is a spatial search object to quickly locate\n"
  "cells in 3D. vtkAbstractCellLocator supplies a basic interface which\n"
  "concrete subclasses should implement.\n\n"
  "@warning\n"
  "When deriving a class from vtkAbstractCellLocator, one should include\n"
  "the 'hidden' member functions by the following construct in the\n"
  "derived class\n"
  "  using vtkAbstractCellLocator::IntersectWithLine;\n"
  "  using vtkAbstractCellLocator::FindClosestPoint;\n"
  "  using vtkAbstractCellLocator::FindClosestPointWithinRadius;\n"
  "  using vtkAbstractCellLocator::FindCell;\n"
  " \n\n"
  "@sa\n"
  "vtkLocator vtkCellLocator vtkStaticCellLocator vtkCellTreeLocator\n"
  "vtkModifiedBSPTree vtkOBBTree\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractCellLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkAbstractCellLocator", // tp_name
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
  PyvtkAbstractCellLocator_Doc, // tp_doc
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

PyObject *PyvtkAbstractCellLocator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAbstractCellLocator_Type, PyvtkAbstractCellLocator_Methods,
    "vtkAbstractCellLocator",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkLocator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractCellLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractCellLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractCellLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

