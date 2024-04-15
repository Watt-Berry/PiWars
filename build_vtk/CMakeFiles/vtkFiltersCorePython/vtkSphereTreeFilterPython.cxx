// python wrapper for vtkSphereTreeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSphereTreeFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSphereTreeFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkSphereTreeFilter_ClassNew(); }


static PyObject *
PyvtkSphereTreeFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSphereTreeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSphereTreeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSphereTreeFilter *tempr = vtkSphereTreeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSphereTreeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSphereTreeFilter::NewInstance());

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
PyvtkSphereTreeFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSphereTreeFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSphereTreeFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetSphereTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSphereTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  vtkSphereTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSphereTree"))
  {
    if (ap.IsBound())
    {
      op->SetSphereTree(temp0);
    }
    else
    {
      op->vtkSphereTreeFilter::SetSphereTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetSphereTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSphereTree *tempr = (ap.IsBound() ?
      op->GetSphereTree() :
      op->vtkSphereTreeFilter::GetSphereTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionMode(temp0);
    }
    else
    {
      op->vtkSphereTreeFilter::SetExtractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionMode() :
      op->vtkSphereTreeFilter::GetExtractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetExtractionModeToLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToLevels();
    }
    else
    {
      op->vtkSphereTreeFilter::SetExtractionModeToLevels();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetExtractionModeToPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToPoint();
    }
    else
    {
      op->vtkSphereTreeFilter::SetExtractionModeToPoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetExtractionModeToLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToLine();
    }
    else
    {
      op->vtkSphereTreeFilter::SetExtractionModeToLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetExtractionModeToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToPlane();
    }
    else
    {
      op->vtkSphereTreeFilter::SetExtractionModeToPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetExtractionModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetExtractionModeAsString() :
      op->vtkSphereTreeFilter::GetExtractionModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetTreeHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTreeHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTreeHierarchy(temp0);
    }
    else
    {
      op->vtkSphereTreeFilter::SetTreeHierarchy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetTreeHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTreeHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTreeHierarchy() :
      op->vtkSphereTreeFilter::GetTreeHierarchy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_TreeHierarchyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TreeHierarchyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TreeHierarchyOn();
    }
    else
    {
      op->vtkSphereTreeFilter::TreeHierarchyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_TreeHierarchyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TreeHierarchyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TreeHierarchyOff();
    }
    else
    {
      op->vtkSphereTreeFilter::TreeHierarchyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevel(temp0);
    }
    else
    {
      op->vtkSphereTreeFilter::SetLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLevelMinValue() :
      op->vtkSphereTreeFilter::GetLevelMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLevelMaxValue() :
      op->vtkSphereTreeFilter::GetLevelMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkSphereTreeFilter::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

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
      op->SetPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSphereTreeFilter::SetPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTreeFilter_SetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint(temp0);
    }
    else
    {
      op->vtkSphereTreeFilter::SetPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTreeFilter_SetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSphereTreeFilter_SetPoint_s1(self, args);
    case 1:
      return PyvtkSphereTreeFilter_SetPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint");
  return nullptr;
}


static PyObject *
PyvtkSphereTreeFilter_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint() :
      op->vtkSphereTreeFilter::GetPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetRay_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

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
      op->SetRay(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSphereTreeFilter::SetRay(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTreeFilter_SetRay_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRay(temp0);
    }
    else
    {
      op->vtkSphereTreeFilter::SetRay(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTreeFilter_SetRay(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSphereTreeFilter_SetRay_s1(self, args);
    case 1:
      return PyvtkSphereTreeFilter_SetRay_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRay");
  return nullptr;
}


static PyObject *
PyvtkSphereTreeFilter_GetRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRay() :
      op->vtkSphereTreeFilter::GetRay());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSphereTreeFilter::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTreeFilter_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkSphereTreeFilter::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTreeFilter_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSphereTreeFilter_SetNormal_s1(self, args);
    case 1:
      return PyvtkSphereTreeFilter_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}


static PyObject *
PyvtkSphereTreeFilter_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkSphereTreeFilter::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSphereTreeFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSphereTreeFilter_Methods[] = {
  {"IsTypeOf", PyvtkSphereTreeFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSphereTreeFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSphereTreeFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSphereTreeFilter\nC++: static vtkSphereTreeFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSphereTreeFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSphereTreeFilter\nC++: vtkSphereTreeFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSphereTreeFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSphereTreeFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSphereTree", PyvtkSphereTreeFilter_SetSphereTree, METH_VARARGS,
   "SetSphereTree(self, __a:vtkSphereTree) -> None\nC++: virtual void SetSphereTree(vtkSphereTree *)\n\nSpecify and retrieve the sphere tree.\n"},
  {"GetSphereTree", PyvtkSphereTreeFilter_GetSphereTree, METH_VARARGS,
   "GetSphereTree(self) -> vtkSphereTree\nC++: virtual vtkSphereTree *GetSphereTree()\n\n"},
  {"SetExtractionMode", PyvtkSphereTreeFilter_SetExtractionMode, METH_VARARGS,
   "SetExtractionMode(self, _arg:int) -> None\nC++: virtual void SetExtractionMode(int _arg)\n\nSpecify what information this filter is to extract from the\nsphere tree. Options include: spheres that make up one or more\nlevels; spheres that intersect a specified plane; spheres that\nintersect a specified line; and spheres that intersect a\nspecified point. What is extracted are sphere centers, a radius,\nand an optional level. By default the specified levels are\nextracted.\n"},
  {"GetExtractionMode", PyvtkSphereTreeFilter_GetExtractionMode, METH_VARARGS,
   "GetExtractionMode(self) -> int\nC++: virtual int GetExtractionMode()\n\n"},
  {"SetExtractionModeToLevels", PyvtkSphereTreeFilter_SetExtractionModeToLevels, METH_VARARGS,
   "SetExtractionModeToLevels(self) -> None\nC++: void SetExtractionModeToLevels()\n\n"},
  {"SetExtractionModeToPoint", PyvtkSphereTreeFilter_SetExtractionModeToPoint, METH_VARARGS,
   "SetExtractionModeToPoint(self) -> None\nC++: void SetExtractionModeToPoint()\n\n"},
  {"SetExtractionModeToLine", PyvtkSphereTreeFilter_SetExtractionModeToLine, METH_VARARGS,
   "SetExtractionModeToLine(self) -> None\nC++: void SetExtractionModeToLine()\n\n"},
  {"SetExtractionModeToPlane", PyvtkSphereTreeFilter_SetExtractionModeToPlane, METH_VARARGS,
   "SetExtractionModeToPlane(self) -> None\nC++: void SetExtractionModeToPlane()\n\n"},
  {"GetExtractionModeAsString", PyvtkSphereTreeFilter_GetExtractionModeAsString, METH_VARARGS,
   "GetExtractionModeAsString(self) -> str\nC++: const char *GetExtractionModeAsString()\n\n"},
  {"SetTreeHierarchy", PyvtkSphereTreeFilter_SetTreeHierarchy, METH_VARARGS,
   "SetTreeHierarchy(self, _arg:bool) -> None\nC++: virtual void SetTreeHierarchy(bool _arg)\n\nEnable or disable the building and generation of the sphere tree\nhierarchy. The hierarchy represents different levels in the tree\nand enables rapid traversal of the tree.\n"},
  {"GetTreeHierarchy", PyvtkSphereTreeFilter_GetTreeHierarchy, METH_VARARGS,
   "GetTreeHierarchy(self) -> bool\nC++: virtual bool GetTreeHierarchy()\n\n"},
  {"TreeHierarchyOn", PyvtkSphereTreeFilter_TreeHierarchyOn, METH_VARARGS,
   "TreeHierarchyOn(self) -> None\nC++: virtual void TreeHierarchyOn()\n\n"},
  {"TreeHierarchyOff", PyvtkSphereTreeFilter_TreeHierarchyOff, METH_VARARGS,
   "TreeHierarchyOff(self) -> None\nC++: virtual void TreeHierarchyOff()\n\n"},
  {"SetLevel", PyvtkSphereTreeFilter_SetLevel, METH_VARARGS,
   "SetLevel(self, _arg:int) -> None\nC++: virtual void SetLevel(int _arg)\n\nSpecify the level of the tree to extract (used when\nExtractionMode is set to Levels). A value of (-1) means all\nlevels. Note that level 0 is the root of the sphere tree. By\ndefault all levels are extracted. Note that if TreeHierarchy is\noff, then it is only possible to extract leaf spheres (i.e.,\nspheres for each cell of the associated dataset).\n"},
  {"GetLevelMinValue", PyvtkSphereTreeFilter_GetLevelMinValue, METH_VARARGS,
   "GetLevelMinValue(self) -> int\nC++: virtual int GetLevelMinValue()\n\n"},
  {"GetLevelMaxValue", PyvtkSphereTreeFilter_GetLevelMaxValue, METH_VARARGS,
   "GetLevelMaxValue(self) -> int\nC++: virtual int GetLevelMaxValue()\n\n"},
  {"GetLevel", PyvtkSphereTreeFilter_GetLevel, METH_VARARGS,
   "GetLevel(self) -> int\nC++: virtual int GetLevel()\n\n"},
  {"SetPoint", PyvtkSphereTreeFilter_SetPoint, METH_VARARGS,
   "SetPoint(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetPoint(double _arg1, double _arg2,\n    double _arg3)\nSetPoint(self, _arg:(float, float, float)) -> None\nC++: virtual void SetPoint(const double _arg[3])\n\nSpecify a point used to extract one or more leaf spheres. This\nmethod is used when extracting spheres using a point, line, or\nplane.\n"},
  {"GetPoint", PyvtkSphereTreeFilter_GetPoint, METH_VARARGS,
   "GetPoint(self) -> (float, float, float)\nC++: virtual double *GetPoint()\n\n"},
  {"SetRay", PyvtkSphereTreeFilter_SetRay, METH_VARARGS,
   "SetRay(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetRay(double _arg1, double _arg2, double _arg3)\nSetRay(self, _arg:(float, float, float)) -> None\nC++: virtual void SetRay(const double _arg[3])\n\nSpecify a line used to extract spheres (used when ExtractionMode\nis set to Line). The Ray plus Point define an infinite line. The\nray is a vector defining the direction of the line.\n"},
  {"GetRay", PyvtkSphereTreeFilter_GetRay, METH_VARARGS,
   "GetRay(self) -> (float, float, float)\nC++: virtual double *GetRay()\n\n"},
  {"SetNormal", PyvtkSphereTreeFilter_SetNormal, METH_VARARGS,
   "SetNormal(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetNormal(double _arg1, double _arg2,\n    double _arg3)\nSetNormal(self, _arg:(float, float, float)) -> None\nC++: virtual void SetNormal(const double _arg[3])\n\nSpecify a plane used to extract spheres (used when ExtractionMode\nis set to Plane). The plane Normal plus Point define an infinite\nplane.\n"},
  {"GetNormal", PyvtkSphereTreeFilter_GetNormal, METH_VARARGS,
   "GetNormal(self) -> (float, float, float)\nC++: virtual double *GetNormal()\n\n"},
  {"GetMTime", PyvtkSphereTreeFilter_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nModified GetMTime because the sphere tree may have changed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSphereTreeFilter_Doc =
  "vtkSphereTreeFilter - represent a sphere tree as vtkPolyData\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSphereTreeFilter is a filter that produces a vtkPolyData\n"
  "representation of a sphere tree (vtkSphereTree). Basically it\n"
  "generates a point, a scalar radius, and tree level number for the\n"
  "cell spheres and/or the different levels in the tree hierarchy\n"
  "(assuming that the hierarchy is built). The output can be glyphed\n"
  "using a filter like vtkGlyph3D to actually visualize the sphere tree.\n"
  "The primary use of this class is for visualization of sphere trees,\n"
  "and debugging the construction and use of sphere trees.\n\n"
  "Additional capabilities include production of candidate spheres based\n"
  "on geometric queries. For example, queries based on a point, infinite\n"
  "line, and infinite plane are possible.\n\n"
  "Note that this class may create a sphere tree, and then build it, for\n"
  "the input dataset to this filter (if no sphere tree is provided). If\n"
  "the user specifies a sphere tree, then the specified sphere tree is\n"
  "used. Thus the input to the filter is optional. Consequently this\n"
  "filter can act like a source, or as a filter in a pipeline.\n\n"
  "@sa\n"
  "vtkSphereTree vtkPlaneCutter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSphereTreeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkSphereTreeFilter", // tp_name
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
  PyvtkSphereTreeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSphereTreeFilter_StaticNew()
{
  return vtkSphereTreeFilter::New();
}

PyObject *PyvtkSphereTreeFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSphereTreeFilter_Type, PyvtkSphereTreeFilter_Methods,
    "vtkSphereTreeFilter",
 &PyvtkSphereTreeFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSphereTreeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSphereTreeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSphereTreeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_SPHERE_TREE_LEVELS", 0 },
        { "VTK_SPHERE_TREE_POINT", 1 },
        { "VTK_SPHERE_TREE_LINE", 2 },
        { "VTK_SPHERE_TREE_PLANE", 3 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

