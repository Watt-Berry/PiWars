// python wrapper for vtkBoundedPlanePointPlacer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBoundedPlanePointPlacer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBoundedPlanePointPlacer(PyObject *dict); }
extern "C" { PyObject *PyvtkBoundedPlanePointPlacer_ClassNew(); }

#ifndef DECLARED_PyvtkPointPlacer_ClassNew
extern "C" { PyObject *PyvtkPointPlacer_ClassNew(); }
#define DECLARED_PyvtkPointPlacer_ClassNew
#endif

static PyObject *
PyvtkBoundedPlanePointPlacer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBoundedPlanePointPlacer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoundedPlanePointPlacer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBoundedPlanePointPlacer *tempr = vtkBoundedPlanePointPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBoundedPlanePointPlacer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoundedPlanePointPlacer::NewInstance());

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
PyvtkBoundedPlanePointPlacer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBoundedPlanePointPlacer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBoundedPlanePointPlacer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormal(temp0);
    }
    else
    {
      op->vtkBoundedPlanePointPlacer::SetProjectionNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_GetProjectionNormalMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMinValue() :
      op->vtkBoundedPlanePointPlacer::GetProjectionNormalMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_GetProjectionNormalMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMaxValue() :
      op->vtkBoundedPlanePointPlacer::GetProjectionNormalMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_GetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormal() :
      op->vtkBoundedPlanePointPlacer::GetProjectionNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToXAxis();
    }
    else
    {
      op->vtkBoundedPlanePointPlacer::SetProjectionNormalToXAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToYAxis();
    }
    else
    {
      op->vtkBoundedPlanePointPlacer::SetProjectionNormalToYAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToZAxis();
    }
    else
    {
      op->vtkBoundedPlanePointPlacer::SetProjectionNormalToZAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionNormalToOblique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToOblique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToOblique();
    }
    else
    {
      op->vtkBoundedPlanePointPlacer::SetProjectionNormalToOblique();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetObliquePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObliquePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetObliquePlane(temp0);
    }
    else
    {
      op->vtkBoundedPlanePointPlacer::SetObliquePlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_GetObliquePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObliquePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetObliquePlane() :
      op->vtkBoundedPlanePointPlacer::GetObliquePlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionPosition(temp0);
    }
    else
    {
      op->vtkBoundedPlanePointPlacer::SetProjectionPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_GetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProjectionPosition() :
      op->vtkBoundedPlanePointPlacer::GetProjectionPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_AddBoundingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBoundingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->AddBoundingPlane(temp0);
    }
    else
    {
      op->vtkBoundedPlanePointPlacer::AddBoundingPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_RemoveBoundingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBoundingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->RemoveBoundingPlane(temp0);
    }
    else
    {
      op->vtkBoundedPlanePointPlacer::RemoveBoundingPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_RemoveAllBoundingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllBoundingPlanes();
    }
    else
    {
      op->vtkBoundedPlanePointPlacer::RemoveAllBoundingPlanes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkPlaneCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
  {
    if (ap.IsBound())
    {
      op->SetBoundingPlanes(temp0);
    }
    else
    {
      op->vtkBoundedPlanePointPlacer::SetBoundingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkPlanes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
  {
    if (ap.IsBound())
    {
      op->SetBoundingPlanes(temp0);
    }
    else
    {
      op->vtkBoundedPlanePointPlacer::SetBoundingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_Methods[] = {
  {"SetBoundingPlanes", PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_s1, METH_VARARGS,
   "@V *vtkPlaneCollection"},
  {"SetBoundingPlanes", PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_s2, METH_VARARGS,
   "@V *vtkPlanes"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBoundedPlanePointPlacer_SetBoundingPlanes(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBoundingPlanes");
  return nullptr;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_GetBoundingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlaneCollection *tempr = (ap.IsBound() ?
      op->GetBoundingPlanes() :
      op->vtkBoundedPlanePointPlacer::GetBoundingPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_ComputeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 9;
  double temp3[9];
  double save3[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ComputeWorldPosition(temp0, temp1, temp2, temp3) :
      op->vtkBoundedPlanePointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3));

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

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedPlanePointPlacer_ComputeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  const size_t size4 = 9;
  double temp4[9];
  double save4[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4) :
      op->vtkBoundedPlanePointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4));

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
PyvtkBoundedPlanePointPlacer_ComputeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkBoundedPlanePointPlacer_ComputeWorldPosition_s1(self, args);
    case 5:
      return PyvtkBoundedPlanePointPlacer_ComputeWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWorldPosition");
  return nullptr;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_ValidateWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ValidateWorldPosition(temp0) :
      op->vtkBoundedPlanePointPlacer::ValidateWorldPosition(temp0));

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
PyvtkBoundedPlanePointPlacer_ValidateWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ValidateWorldPosition(temp0, temp1) :
      op->vtkBoundedPlanePointPlacer::ValidateWorldPosition(temp0, temp1));

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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBoundedPlanePointPlacer_ValidateWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBoundedPlanePointPlacer_ValidateWorldPosition_s1(self, args);
    case 2:
      return PyvtkBoundedPlanePointPlacer_ValidateWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ValidateWorldPosition");
  return nullptr;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_UpdateWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->UpdateWorldPosition(temp0, temp1, temp2) :
      op->vtkBoundedPlanePointPlacer::UpdateWorldPosition(temp0, temp1, temp2));

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

static PyMethodDef PyvtkBoundedPlanePointPlacer_Methods[] = {
  {"IsTypeOf", PyvtkBoundedPlanePointPlacer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBoundedPlanePointPlacer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBoundedPlanePointPlacer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBoundedPlanePointPlacer\nC++: static vtkBoundedPlanePointPlacer *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBoundedPlanePointPlacer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBoundedPlanePointPlacer\nC++: vtkBoundedPlanePointPlacer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBoundedPlanePointPlacer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBoundedPlanePointPlacer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetProjectionNormal", PyvtkBoundedPlanePointPlacer_SetProjectionNormal, METH_VARARGS,
   "SetProjectionNormal(self, _arg:int) -> None\nC++: virtual void SetProjectionNormal(int _arg)\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {"GetProjectionNormalMinValue", PyvtkBoundedPlanePointPlacer_GetProjectionNormalMinValue, METH_VARARGS,
   "GetProjectionNormalMinValue(self) -> int\nC++: virtual int GetProjectionNormalMinValue()\n\n"},
  {"GetProjectionNormalMaxValue", PyvtkBoundedPlanePointPlacer_GetProjectionNormalMaxValue, METH_VARARGS,
   "GetProjectionNormalMaxValue(self) -> int\nC++: virtual int GetProjectionNormalMaxValue()\n\n"},
  {"GetProjectionNormal", PyvtkBoundedPlanePointPlacer_GetProjectionNormal, METH_VARARGS,
   "GetProjectionNormal(self) -> int\nC++: virtual int GetProjectionNormal()\n\n"},
  {"SetProjectionNormalToXAxis", PyvtkBoundedPlanePointPlacer_SetProjectionNormalToXAxis, METH_VARARGS,
   "SetProjectionNormalToXAxis(self) -> None\nC++: void SetProjectionNormalToXAxis()\n\n"},
  {"SetProjectionNormalToYAxis", PyvtkBoundedPlanePointPlacer_SetProjectionNormalToYAxis, METH_VARARGS,
   "SetProjectionNormalToYAxis(self) -> None\nC++: void SetProjectionNormalToYAxis()\n\n"},
  {"SetProjectionNormalToZAxis", PyvtkBoundedPlanePointPlacer_SetProjectionNormalToZAxis, METH_VARARGS,
   "SetProjectionNormalToZAxis(self) -> None\nC++: void SetProjectionNormalToZAxis()\n\n"},
  {"SetProjectionNormalToOblique", PyvtkBoundedPlanePointPlacer_SetProjectionNormalToOblique, METH_VARARGS,
   "SetProjectionNormalToOblique(self) -> None\nC++: void SetProjectionNormalToOblique()\n\n"},
  {"SetObliquePlane", PyvtkBoundedPlanePointPlacer_SetObliquePlane, METH_VARARGS,
   "SetObliquePlane(self, __a:vtkPlane) -> None\nC++: void SetObliquePlane(vtkPlane *)\n\nIf the ProjectionNormal is set to Oblique, then this is the\noblique plane used to constrain the handle position.\n"},
  {"GetObliquePlane", PyvtkBoundedPlanePointPlacer_GetObliquePlane, METH_VARARGS,
   "GetObliquePlane(self) -> vtkPlane\nC++: virtual vtkPlane *GetObliquePlane()\n\n"},
  {"SetProjectionPosition", PyvtkBoundedPlanePointPlacer_SetProjectionPosition, METH_VARARGS,
   "SetProjectionPosition(self, position:float) -> None\nC++: void SetProjectionPosition(double position)\n\nThe position of the bounding plane from the origin along the\nnormal. The origin and normal are defined in the oblique plane\nwhen the ProjectionNormal is oblique. For the X, Y, and Z axes\nprojection normals, the normal is the axis direction, and the\norigin is (0,0,0).\n"},
  {"GetProjectionPosition", PyvtkBoundedPlanePointPlacer_GetProjectionPosition, METH_VARARGS,
   "GetProjectionPosition(self) -> float\nC++: virtual double GetProjectionPosition()\n\n"},
  {"AddBoundingPlane", PyvtkBoundedPlanePointPlacer_AddBoundingPlane, METH_VARARGS,
   "AddBoundingPlane(self, plane:vtkPlane) -> None\nC++: void AddBoundingPlane(vtkPlane *plane)\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {"RemoveBoundingPlane", PyvtkBoundedPlanePointPlacer_RemoveBoundingPlane, METH_VARARGS,
   "RemoveBoundingPlane(self, plane:vtkPlane) -> None\nC++: void RemoveBoundingPlane(vtkPlane *plane)\n\n"},
  {"RemoveAllBoundingPlanes", PyvtkBoundedPlanePointPlacer_RemoveAllBoundingPlanes, METH_VARARGS,
   "RemoveAllBoundingPlanes(self) -> None\nC++: void RemoveAllBoundingPlanes()\n\n"},
  {"SetBoundingPlanes", PyvtkBoundedPlanePointPlacer_SetBoundingPlanes, METH_VARARGS,
   "SetBoundingPlanes(self, __a:vtkPlaneCollection) -> None\nC++: virtual void SetBoundingPlanes(vtkPlaneCollection *)\nSetBoundingPlanes(self, planes:vtkPlanes) -> None\nC++: void SetBoundingPlanes(vtkPlanes *planes)\n\n"},
  {"GetBoundingPlanes", PyvtkBoundedPlanePointPlacer_GetBoundingPlanes, METH_VARARGS,
   "GetBoundingPlanes(self) -> vtkPlaneCollection\nC++: virtual vtkPlaneCollection *GetBoundingPlanes()\n\n"},
  {"ComputeWorldPosition", PyvtkBoundedPlanePointPlacer_ComputeWorldPosition, METH_VARARGS,
   "ComputeWorldPosition(self, ren:vtkRenderer, displayPos:[float,\n    float], worldPos:[float, float, float], worldOrient:[float,\n    float, float, float, float, float, float, float, float])\n    -> int\nC++: int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double worldPos[3],\n    double worldOrient[9]) override;\nComputeWorldPosition(self, ren:vtkRenderer, displayPos:[float,\n    float], refWorldPos:[float, float, float], worldPos:[float,\n    float, float], worldOrient:[float, float, float, float, float,\n     float, float, float, float]) -> int\nC++: int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double refWorldPos[3],\n    double worldPos[3], double worldOrient[9]) override;\n\nGiven a renderer and a display position, compute the world\nposition and world orientation for this point. A plane is defined\nby a combination of the ProjectionNormal, ProjectionOrigin, and\nObliquePlane ivars. The display position is projected onto this\nplane to determine a world position, and the orientation is set\nto the normal of the plane. If the point cannot project onto the\nplane or if it falls outside the bounds imposed by the\nBoundingPlanes, then 0 is returned, otherwise 1 is returned to\nindicate a valid return position and orientation.\n"},
  {"ValidateWorldPosition", PyvtkBoundedPlanePointPlacer_ValidateWorldPosition, METH_VARARGS,
   "ValidateWorldPosition(self, worldPos:[float, float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3]) override;\nValidateWorldPosition(self, worldPos:[float, float, float],\n    worldOrient:[float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3],\n    double worldOrient[9]) override;\n\nGive a world position check if it is valid - does it lie on the\nplane and within the bounds? Returns 1 if it is valid, 0\notherwise.\n"},
  {"UpdateWorldPosition", PyvtkBoundedPlanePointPlacer_UpdateWorldPosition, METH_VARARGS,
   "UpdateWorldPosition(self, ren:vtkRenderer, worldPos:[float, float,\n     float], worldOrient:[float, float, float, float, float,\n    float, float, float, float]) -> int\nC++: int UpdateWorldPosition(vtkRenderer *ren, double worldPos[3],\n     double worldOrient[9]) override;\n\nIf the constraints on this placer are changed, then this method\nwill be called by the representation on each of its points. For\nthis placer, the world position will be converted to a display\nposition, then ComputeWorldPosition will be used to update the\npoint.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBoundedPlanePointPlacer_Doc =
  "vtkBoundedPlanePointPlacer - a placer that constrains a handle to a\nfinite plane\n\n"
  "Superclass: vtkPointPlacer\n\n"
  "vtkBoundedPlanePointPlacer is a type of point placer that constrains\n"
  "its points to a finite (i.e., bounded) plance.\n\n"
  "@sa\n"
  "vtkPointPlacer vtkHandleWidget vtkHandleRepresentation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBoundedPlanePointPlacer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkBoundedPlanePointPlacer", // tp_name
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
  PyvtkBoundedPlanePointPlacer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBoundedPlanePointPlacer_StaticNew()
{
  return vtkBoundedPlanePointPlacer::New();
}

PyObject *PyvtkBoundedPlanePointPlacer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBoundedPlanePointPlacer_Type, PyvtkBoundedPlanePointPlacer_Methods,
    "vtkBoundedPlanePointPlacer",
 &PyvtkBoundedPlanePointPlacer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPointPlacer_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "XAxis", vtkBoundedPlanePointPlacer::XAxis },
        { "YAxis", vtkBoundedPlanePointPlacer::YAxis },
        { "ZAxis", vtkBoundedPlanePointPlacer::ZAxis },
        { "Oblique", vtkBoundedPlanePointPlacer::Oblique },
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

void PyVTKAddFile_vtkBoundedPlanePointPlacer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoundedPlanePointPlacer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBoundedPlanePointPlacer", o) != 0)
  {
    Py_DECREF(o);
  }

}

