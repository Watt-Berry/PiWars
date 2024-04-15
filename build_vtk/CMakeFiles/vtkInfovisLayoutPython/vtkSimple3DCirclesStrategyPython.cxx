// python wrapper for vtkSimple3DCirclesStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSimple3DCirclesStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSimple3DCirclesStrategy(PyObject *dict); }
extern "C" { PyObject *PyvtkSimple3DCirclesStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkGraphLayoutStrategy_ClassNew
extern "C" { PyObject *PyvtkGraphLayoutStrategy_ClassNew(); }
#define DECLARED_PyvtkGraphLayoutStrategy_ClassNew
#endif

static PyObject *
PyvtkSimple3DCirclesStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSimple3DCirclesStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSimple3DCirclesStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSimple3DCirclesStrategy *tempr = vtkSimple3DCirclesStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSimple3DCirclesStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSimple3DCirclesStrategy::NewInstance());

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
PyvtkSimple3DCirclesStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSimple3DCirclesStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSimple3DCirclesStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMethod(temp0);
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::SetMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMethod() :
      op->vtkSimple3DCirclesStrategy::GetMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkSimple3DCirclesStrategy::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeight(temp0);
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::SetHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkSimple3DCirclesStrategy::GetHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSimple3DCirclesStrategy_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSimple3DCirclesStrategy_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSimple3DCirclesStrategy_SetOrigin_s1(self, args);
    case 1:
      return PyvtkSimple3DCirclesStrategy_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkSimple3DCirclesStrategy::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetDirection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::SetDirection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSimple3DCirclesStrategy_SetDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetDirection(temp0);
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::SetDirection(temp0);
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
PyvtkSimple3DCirclesStrategy_SetDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSimple3DCirclesStrategy_SetDirection_s1(self, args);
    case 1:
      return PyvtkSimple3DCirclesStrategy_SetDirection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDirection");
  return nullptr;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDirection() :
      op->vtkSimple3DCirclesStrategy::GetDirection());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetMarkedStartVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkedStartVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->SetMarkedStartVertices(temp0);
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::SetMarkedStartVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetMarkedStartVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkedStartVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetMarkedStartVertices() :
      op->vtkSimple3DCirclesStrategy::GetMarkedStartVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetMarkedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetMarkedValue(*temp0);
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::SetMarkedValue(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetMarkedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetMarkedValue() :
      op->vtkSimple3DCirclesStrategy::GetMarkedValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetForceToUseUniversalStartPointsFinder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceToUseUniversalStartPointsFinder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceToUseUniversalStartPointsFinder(temp0);
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::SetForceToUseUniversalStartPointsFinder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetForceToUseUniversalStartPointsFinder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceToUseUniversalStartPointsFinder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetForceToUseUniversalStartPointsFinder() :
      op->vtkSimple3DCirclesStrategy::GetForceToUseUniversalStartPointsFinder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_ForceToUseUniversalStartPointsFinderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceToUseUniversalStartPointsFinderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceToUseUniversalStartPointsFinderOn();
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::ForceToUseUniversalStartPointsFinderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_ForceToUseUniversalStartPointsFinderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceToUseUniversalStartPointsFinderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceToUseUniversalStartPointsFinderOff();
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::ForceToUseUniversalStartPointsFinderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetAutoHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoHeight(temp0);
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::SetAutoHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetAutoHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoHeight() :
      op->vtkSimple3DCirclesStrategy::GetAutoHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_AutoHeightOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoHeightOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoHeightOn();
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::AutoHeightOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_AutoHeightOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoHeightOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoHeightOff();
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::AutoHeightOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetMinimumRadian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumRadian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumRadian(temp0);
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::SetMinimumRadian(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetMinimumRadian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumRadian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumRadian() :
      op->vtkSimple3DCirclesStrategy::GetMinimumRadian());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetMinimumDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumDegree(temp0);
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::SetMinimumDegree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetMinimumDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumDegree() :
      op->vtkSimple3DCirclesStrategy::GetMinimumDegree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetHierarchicalLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  vtkIntArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIntArray"))
  {
    if (ap.IsBound())
    {
      op->SetHierarchicalLayers(temp0);
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::SetHierarchicalLayers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetHierarchicalLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetHierarchicalLayers() :
      op->vtkSimple3DCirclesStrategy::GetHierarchicalLayers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetHierarchicalOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SetHierarchicalOrder(temp0);
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::SetHierarchicalOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_GetHierarchicalOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetHierarchicalOrder() :
      op->vtkSimple3DCirclesStrategy::GetHierarchicalOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Layout();
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::Layout();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimple3DCirclesStrategy_SetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimple3DCirclesStrategy *op = static_cast<vtkSimple3DCirclesStrategy *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    if (ap.IsBound())
    {
      op->SetGraph(temp0);
    }
    else
    {
      op->vtkSimple3DCirclesStrategy::SetGraph(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSimple3DCirclesStrategy_Methods[] = {
  {"IsTypeOf", PyvtkSimple3DCirclesStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSimple3DCirclesStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSimple3DCirclesStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSimple3DCirclesStrategy\nC++: static vtkSimple3DCirclesStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSimple3DCirclesStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSimple3DCirclesStrategy\nC++: vtkSimple3DCirclesStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSimple3DCirclesStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSimple3DCirclesStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMethod", PyvtkSimple3DCirclesStrategy_SetMethod, METH_VARARGS,
   "SetMethod(self, _arg:int) -> None\nC++: virtual void SetMethod(int _arg)\n\nSet or get circle generating method\n(FixedRadiusMethod/FixedDistanceMethod). Default is\nFixedRadiusMethod.\n"},
  {"GetMethod", PyvtkSimple3DCirclesStrategy_GetMethod, METH_VARARGS,
   "GetMethod(self) -> int\nC++: virtual int GetMethod()\n\n"},
  {"SetRadius", PyvtkSimple3DCirclesStrategy_SetRadius, METH_VARARGS,
   "SetRadius(self, _arg:float) -> None\nC++: virtual void SetRadius(double _arg)\n\nIf Method is FixedRadiusMethod: Set or get the radius of the\ncircles. If Method is FixedDistanceMethod: Set or get the\ndistance of the points in the circle.\n"},
  {"GetRadius", PyvtkSimple3DCirclesStrategy_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: virtual double GetRadius()\n\n"},
  {"SetHeight", PyvtkSimple3DCirclesStrategy_SetHeight, METH_VARARGS,
   "SetHeight(self, _arg:float) -> None\nC++: virtual void SetHeight(double _arg)\n\nSet or get the vertical (local z) distance between the circles.\nIf AutoHeight is on, this is the minimal height between the\ncircle layers\n"},
  {"GetHeight", PyvtkSimple3DCirclesStrategy_GetHeight, METH_VARARGS,
   "GetHeight(self) -> float\nC++: virtual double GetHeight()\n\n"},
  {"SetOrigin", PyvtkSimple3DCirclesStrategy_SetOrigin, METH_VARARGS,
   "SetOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOrigin(const double _arg[3])\n\nSet or get the origin of the geometry. This is the center of the\nfirst circle. SetOrigin(x,y,z)\n"},
  {"GetOrigin", PyvtkSimple3DCirclesStrategy_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetDirection", PyvtkSimple3DCirclesStrategy_SetDirection, METH_VARARGS,
   "SetDirection(self, dx:float, dy:float, dz:float) -> None\nC++: virtual void SetDirection(double dx, double dy, double dz)\nSetDirection(self, d:[float, float, float]) -> None\nC++: virtual void SetDirection(double d[3])\n\nSet or get the normal vector of the circles plain. The height is\ngrowing in this direction. The direction must not be zero vector.\nThe default vector is (0.0,0.0,1.0)\n"},
  {"GetDirection", PyvtkSimple3DCirclesStrategy_GetDirection, METH_VARARGS,
   "GetDirection(self) -> (float, float, float)\nC++: virtual double *GetDirection()\n\n"},
  {"SetMarkedStartVertices", PyvtkSimple3DCirclesStrategy_SetMarkedStartVertices, METH_VARARGS,
   "SetMarkedStartVertices(self, _arg:vtkAbstractArray) -> None\nC++: virtual void SetMarkedStartVertices(vtkAbstractArray *_arg)\n\nSet or get initial vertices. If MarkedStartVertices is added,\nloop is accepted in the graph. (If all of the loop start vertices\nare marked in MarkedStartVertices array.) MarkedStartVertices\nsize must be equal with the number of the vertices in the graph.\nStart vertices must be marked by MarkedValue. (E.g.: if\nMarkedValue=3 and MarkedStartPoints is { 0, 3, 5, 3 }, the start\npoints ids will be {1,3}.) )\n"},
  {"GetMarkedStartVertices", PyvtkSimple3DCirclesStrategy_GetMarkedStartVertices, METH_VARARGS,
   "GetMarkedStartVertices(self) -> vtkAbstractArray\nC++: virtual vtkAbstractArray *GetMarkedStartVertices()\n\n"},
  {"SetMarkedValue", PyvtkSimple3DCirclesStrategy_SetMarkedValue, METH_VARARGS,
   "SetMarkedValue(self, _arg:vtkVariant) -> None\nC++: virtual void SetMarkedValue(vtkVariant _arg)\n\nSet or get MarkedValue. See: MarkedStartVertices.\n"},
  {"GetMarkedValue", PyvtkSimple3DCirclesStrategy_GetMarkedValue, METH_VARARGS,
   "GetMarkedValue(self) -> vtkVariant\nC++: virtual vtkVariant GetMarkedValue()\n\n"},
  {"SetForceToUseUniversalStartPointsFinder", PyvtkSimple3DCirclesStrategy_SetForceToUseUniversalStartPointsFinder, METH_VARARGS,
   "SetForceToUseUniversalStartPointsFinder(self, _arg:int) -> None\nC++: virtual void SetForceToUseUniversalStartPointsFinder(\n    vtkTypeBool _arg)\n\nSet or get ForceToUseUniversalStartPointsFinder. If\nForceToUseUniversalStartPointsFinder is true, MarkedStartVertices\nwon't be used. In this case the input graph must be\nvtkDirectedAcyclicGraph (Default: false).\n"},
  {"GetForceToUseUniversalStartPointsFinder", PyvtkSimple3DCirclesStrategy_GetForceToUseUniversalStartPointsFinder, METH_VARARGS,
   "GetForceToUseUniversalStartPointsFinder(self) -> int\nC++: virtual vtkTypeBool GetForceToUseUniversalStartPointsFinder()\n\n"},
  {"ForceToUseUniversalStartPointsFinderOn", PyvtkSimple3DCirclesStrategy_ForceToUseUniversalStartPointsFinderOn, METH_VARARGS,
   "ForceToUseUniversalStartPointsFinderOn(self) -> None\nC++: virtual void ForceToUseUniversalStartPointsFinderOn()\n\n"},
  {"ForceToUseUniversalStartPointsFinderOff", PyvtkSimple3DCirclesStrategy_ForceToUseUniversalStartPointsFinderOff, METH_VARARGS,
   "ForceToUseUniversalStartPointsFinderOff(self) -> None\nC++: virtual void ForceToUseUniversalStartPointsFinderOff()\n\n"},
  {"SetAutoHeight", PyvtkSimple3DCirclesStrategy_SetAutoHeight, METH_VARARGS,
   "SetAutoHeight(self, _arg:int) -> None\nC++: virtual void SetAutoHeight(vtkTypeBool _arg)\n\nSet or get auto height (Default: false). If AutoHeight is true,\n(r(i+1) - r(i-1))/Height will be smaller than tan(MinimumRadian).\nIf you want equal distances and parallel circles, you should turn\noff AutoHeight.\n"},
  {"GetAutoHeight", PyvtkSimple3DCirclesStrategy_GetAutoHeight, METH_VARARGS,
   "GetAutoHeight(self) -> int\nC++: virtual vtkTypeBool GetAutoHeight()\n\n"},
  {"AutoHeightOn", PyvtkSimple3DCirclesStrategy_AutoHeightOn, METH_VARARGS,
   "AutoHeightOn(self) -> None\nC++: virtual void AutoHeightOn()\n\n"},
  {"AutoHeightOff", PyvtkSimple3DCirclesStrategy_AutoHeightOff, METH_VARARGS,
   "AutoHeightOff(self) -> None\nC++: virtual void AutoHeightOff()\n\n"},
  {"SetMinimumRadian", PyvtkSimple3DCirclesStrategy_SetMinimumRadian, METH_VARARGS,
   "SetMinimumRadian(self, _arg:float) -> None\nC++: virtual void SetMinimumRadian(double _arg)\n\nSet or get minimum radian (used by auto height).\n"},
  {"GetMinimumRadian", PyvtkSimple3DCirclesStrategy_GetMinimumRadian, METH_VARARGS,
   "GetMinimumRadian(self) -> float\nC++: virtual double GetMinimumRadian()\n\n"},
  {"SetMinimumDegree", PyvtkSimple3DCirclesStrategy_SetMinimumDegree, METH_VARARGS,
   "SetMinimumDegree(self, degree:float) -> None\nC++: virtual void SetMinimumDegree(double degree)\n\nSet or get minimum degree (used by auto height). There is no\nseparated minimum degree, so minimum radian will be changed.\n"},
  {"GetMinimumDegree", PyvtkSimple3DCirclesStrategy_GetMinimumDegree, METH_VARARGS,
   "GetMinimumDegree(self) -> float\nC++: virtual double GetMinimumDegree()\n\n"},
  {"SetHierarchicalLayers", PyvtkSimple3DCirclesStrategy_SetHierarchicalLayers, METH_VARARGS,
   "SetHierarchicalLayers(self, _arg:vtkIntArray) -> None\nC++: virtual void SetHierarchicalLayers(vtkIntArray *_arg)\n\nSet or get hierarchical layers id by vertices (An usual vertex's\nlayer id is greater or equal to zero. If a vertex is standalone,\nits layer id is -2.) If no HierarchicalLayers array is defined,\nvtkSimple3DCirclesStrategy will generate it automatically\n(default).\n"},
  {"GetHierarchicalLayers", PyvtkSimple3DCirclesStrategy_GetHierarchicalLayers, METH_VARARGS,
   "GetHierarchicalLayers(self) -> vtkIntArray\nC++: virtual vtkIntArray *GetHierarchicalLayers()\n\n"},
  {"SetHierarchicalOrder", PyvtkSimple3DCirclesStrategy_SetHierarchicalOrder, METH_VARARGS,
   "SetHierarchicalOrder(self, _arg:vtkIdTypeArray) -> None\nC++: virtual void SetHierarchicalOrder(vtkIdTypeArray *_arg)\n\nSet or get hierarchical ordering of vertices (The array starts\nfrom the first vertex's id. All id must be greater or equal to\nzero!) If no HierarchicalOrder is defined,\nvtkSimple3DCirclesStrategy will generate it automatically\n(default).\n"},
  {"GetHierarchicalOrder", PyvtkSimple3DCirclesStrategy_GetHierarchicalOrder, METH_VARARGS,
   "GetHierarchicalOrder(self) -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetHierarchicalOrder()\n\n"},
  {"Layout", PyvtkSimple3DCirclesStrategy_Layout, METH_VARARGS,
   "Layout(self) -> None\nC++: void Layout() override;\n\nStandard layout method\n"},
  {"SetGraph", PyvtkSimple3DCirclesStrategy_SetGraph, METH_VARARGS,
   "SetGraph(self, graph:vtkGraph) -> None\nC++: void SetGraph(vtkGraph *graph) override;\n\nSet graph (warning: HierarchicalOrder and HierarchicalLayers will\nset to zero. These reference counts will be decreased!)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSimple3DCirclesStrategy_Doc =
  "vtkSimple3DCirclesStrategy - places vertices on circles in 3D\n\n"
  "Superclass: vtkGraphLayoutStrategy\n\n"
  "Places vertices on circles depending on the graph vertices hierarchy\n"
  "level. The source graph could be vtkDirectedAcyclicGraph or\n"
  "vtkDirectedGraph if MarkedStartPoints array was added. The algorithm\n"
  "collects the standalone points, too and take them to a separated\n"
  "circle. If method is FixedRadiusMethod, the radius of the circles\n"
  "will be equal. If method is FixedDistanceMethod, the distance between\n"
  "the points on circles will be equal.\n\n"
  "In first step initial points are searched. A point is initial, if its\n"
  "in degree equal zero and out degree is greater than zero (or marked\n"
  "by MarkedStartVertices and out degree is greater than zero).\n"
  "Independent vertices (in and out degree equal zero) are collected\n"
  "separately. In second step the hierarchical level is generated for\n"
  "every vertex. In third step the hierarchical order is generated. If a\n"
  "vertex has no hierarchical level and it is not independent, the graph\n"
  "has loop so the algorithm exit with error message. Finally the\n"
  "vertices positions are calculated by the hierarchical order and by\n"
  "the vertices hierarchy levels.\n\n"
  "@par Thanks: Ferenc Nasztanovics, naszta\n\n"
  "aszta.hu, Budapest University of Technology and Economics, Department\n"
  "of Structural Mechanics\n\n"
  "@par References: in 3D rotation was used:\n"
  "http://en.citizendium.org/wiki/Rotation_matrix\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSimple3DCirclesStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkSimple3DCirclesStrategy", // tp_name
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
  PyvtkSimple3DCirclesStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSimple3DCirclesStrategy_StaticNew()
{
  return vtkSimple3DCirclesStrategy::New();
}

PyObject *PyvtkSimple3DCirclesStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSimple3DCirclesStrategy_Type, PyvtkSimple3DCirclesStrategy_Methods,
    "vtkSimple3DCirclesStrategy",
 &PyvtkSimple3DCirclesStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGraphLayoutStrategy_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "FixedRadiusMethod", vtkSimple3DCirclesStrategy::FixedRadiusMethod },
        { "FixedDistanceMethod", vtkSimple3DCirclesStrategy::FixedDistanceMethod },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSimple3DCirclesStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSimple3DCirclesStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSimple3DCirclesStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

