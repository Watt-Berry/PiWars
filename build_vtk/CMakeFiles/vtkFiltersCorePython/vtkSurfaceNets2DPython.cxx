// python wrapper for vtkSurfaceNets2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSurfaceNets2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSurfaceNets2D(PyObject *dict); }
extern "C" { PyObject *PyvtkSurfaceNets2D_ClassNew(); }


static PyObject *
PyvtkSurfaceNets2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSurfaceNets2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSurfaceNets2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSurfaceNets2D *tempr = vtkSurfaceNets2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSurfaceNets2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSurfaceNets2D::NewInstance());

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
PyvtkSurfaceNets2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSurfaceNets2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSurfaceNets2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSurfaceNets2D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSurfaceNets2D::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_SetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLabel(temp0, temp1);
    }
    else
    {
      op->vtkSurfaceNets2D::SetLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSurfaceNets2D::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_GetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabel(temp0) :
      op->vtkSurfaceNets2D::GetLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkSurfaceNets2D::GetValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSurfaceNets2D_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetValues(temp0);
    }
    else
    {
      op->vtkSurfaceNets2D::GetValues(temp0);
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
PyvtkSurfaceNets2D_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSurfaceNets2D_GetValues_s1(self, args);
    case 1:
      return PyvtkSurfaceNets2D_GetValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return nullptr;
}


static PyObject *
PyvtkSurfaceNets2D_GetLabels_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLabels() :
      op->vtkSurfaceNets2D::GetLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSurfaceNets2D_GetLabels_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetLabels(temp0);
    }
    else
    {
      op->vtkSurfaceNets2D::GetLabels(temp0);
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
PyvtkSurfaceNets2D_GetLabels(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSurfaceNets2D_GetLabels_s1(self, args);
    case 1:
      return PyvtkSurfaceNets2D_GetLabels_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLabels");
  return nullptr;
}


static PyObject *
PyvtkSurfaceNets2D_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLabels(temp0);
    }
    else
    {
      op->vtkSurfaceNets2D::SetNumberOfLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfContours(temp0);
    }
    else
    {
      op->vtkSurfaceNets2D::SetNumberOfContours(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfLabels() :
      op->vtkSurfaceNets2D::GetNumberOfLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkSurfaceNets2D::GetNumberOfContours());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_GenerateLabels_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GenerateLabels(temp0, temp1);
    }
    else
    {
      op->vtkSurfaceNets2D::GenerateLabels(temp0, temp1);
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
PyvtkSurfaceNets2D_GenerateLabels_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  int temp0;
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
      op->GenerateLabels(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSurfaceNets2D::GenerateLabels(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSurfaceNets2D_GenerateLabels(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSurfaceNets2D_GenerateLabels_s1(self, args);
    case 3:
      return PyvtkSurfaceNets2D_GenerateLabels_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateLabels");
  return nullptr;
}


static PyObject *
PyvtkSurfaceNets2D_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GenerateValues(temp0, temp1);
    }
    else
    {
      op->vtkSurfaceNets2D::GenerateValues(temp0, temp1);
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
PyvtkSurfaceNets2D_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  int temp0;
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
      op->GenerateValues(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSurfaceNets2D::GenerateValues(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSurfaceNets2D_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSurfaceNets2D_GenerateValues_s1(self, args);
    case 3:
      return PyvtkSurfaceNets2D_GenerateValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return nullptr;
}


static PyObject *
PyvtkSurfaceNets2D_SetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeScalars(temp0);
    }
    else
    {
      op->vtkSurfaceNets2D::SetComputeScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_GetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeScalars() :
      op->vtkSurfaceNets2D::GetComputeScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_ComputeScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarsOn();
    }
    else
    {
      op->vtkSurfaceNets2D::ComputeScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_ComputeScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarsOff();
    }
    else
    {
      op->vtkSurfaceNets2D::ComputeScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_SetBackgroundLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundLabel(temp0);
    }
    else
    {
      op->vtkSurfaceNets2D::SetBackgroundLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_GetBackgroundLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundLabel() :
      op->vtkSurfaceNets2D::GetBackgroundLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_SetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayComponent(temp0);
    }
    else
    {
      op->vtkSurfaceNets2D::SetArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent() :
      op->vtkSurfaceNets2D::GetArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_SetSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothing(temp0);
    }
    else
    {
      op->vtkSurfaceNets2D::SetSmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_GetSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSmoothing() :
      op->vtkSurfaceNets2D::GetSmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_SmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SmoothingOn();
    }
    else
    {
      op->vtkSurfaceNets2D::SmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_SmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SmoothingOff();
    }
    else
    {
      op->vtkSurfaceNets2D::SmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_GetSmoother(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoother");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkConstrainedSmoothingFilter *tempr = (ap.IsBound() ?
      op->GetSmoother() :
      op->vtkSurfaceNets2D::GetSmoother());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_SetDataCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataCaching(temp0);
    }
    else
    {
      op->vtkSurfaceNets2D::SetDataCaching(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_GetDataCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDataCaching() :
      op->vtkSurfaceNets2D::GetDataCaching());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_DataCachingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataCachingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DataCachingOn();
    }
    else
    {
      op->vtkSurfaceNets2D::DataCachingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets2D_DataCachingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataCachingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets2D *op = static_cast<vtkSurfaceNets2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DataCachingOff();
    }
    else
    {
      op->vtkSurfaceNets2D::DataCachingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSurfaceNets2D_Methods[] = {
  {"IsTypeOf", PyvtkSurfaceNets2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSurfaceNets2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSurfaceNets2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSurfaceNets2D\nC++: static vtkSurfaceNets2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSurfaceNets2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSurfaceNets2D\nC++: vtkSurfaceNets2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSurfaceNets2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSurfaceNets2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkSurfaceNets2D_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time is also a function of the label values and the\nsmoothing filter.\n"},
  {"SetValue", PyvtkSurfaceNets2D_SetValue, METH_VARARGS,
   "SetValue(self, i:int, value:float) -> None\nC++: void SetValue(int i, double value)\n\nSet a particular label value at label number i. The index i\nranges between 0 <= i <NumberOfLabels. (Note: while labels values\nare expressed as doubles, the underlying scalar data may be a\ndifferent type. During execution the label values are cast to the\ntype of the scalar data.) Note the use of \"Value\" and \"Label\"\nwhen specifying regions to extract. The use of \"Value\" is\ncontinuous with other VTK continuous-scalar field isocontouring\nalgorithms; however the term \"Label\" is more consistent with\nlabel maps.\n"},
  {"SetLabel", PyvtkSurfaceNets2D_SetLabel, METH_VARARGS,
   "SetLabel(self, i:int, value:float) -> None\nC++: void SetLabel(int i, double value)\n\n"},
  {"GetValue", PyvtkSurfaceNets2D_GetValue, METH_VARARGS,
   "GetValue(self, i:int) -> float\nC++: double GetValue(int i)\n\nGet the ith label value.\n"},
  {"GetLabel", PyvtkSurfaceNets2D_GetLabel, METH_VARARGS,
   "GetLabel(self, i:int) -> float\nC++: double GetLabel(int i)\n\n"},
  {"GetValues", PyvtkSurfaceNets2D_GetValues, METH_VARARGS,
   "GetValues(self) -> Pointer\nC++: double *GetValues()\nGetValues(self, contourValues:[float, ...]) -> None\nC++: void GetValues(double *contourValues)\n\nGet a pointer to an array of labels. There will be\nGetNumberOfLabels() values in the list.\n"},
  {"GetLabels", PyvtkSurfaceNets2D_GetLabels, METH_VARARGS,
   "GetLabels(self) -> Pointer\nC++: double *GetLabels()\nGetLabels(self, contourValues:[float, ...]) -> None\nC++: void GetLabels(double *contourValues)\n\n"},
  {"SetNumberOfLabels", PyvtkSurfaceNets2D_SetNumberOfLabels, METH_VARARGS,
   "SetNumberOfLabels(self, number:int) -> None\nC++: void SetNumberOfLabels(int number)\n\nSet the number of labels to place into the list. You only really\nneed to use this method to reduce list size. The method\nSetValue() will automatically increase list size as needed. Note\nthat for consistency with other isocountoring-related algorithms,\nsome methods use \"Labels\" and \"Contours\" interchangeably.\n"},
  {"SetNumberOfContours", PyvtkSurfaceNets2D_SetNumberOfContours, METH_VARARGS,
   "SetNumberOfContours(self, number:int) -> None\nC++: void SetNumberOfContours(int number)\n\n"},
  {"GetNumberOfLabels", PyvtkSurfaceNets2D_GetNumberOfLabels, METH_VARARGS,
   "GetNumberOfLabels(self) -> int\nC++: vtkIdType GetNumberOfLabels()\n\nGet the number of labels in the list of label values.\n"},
  {"GetNumberOfContours", PyvtkSurfaceNets2D_GetNumberOfContours, METH_VARARGS,
   "GetNumberOfContours(self) -> int\nC++: vtkIdType GetNumberOfContours()\n\n"},
  {"GenerateLabels", PyvtkSurfaceNets2D_GenerateLabels, METH_VARARGS,
   "GenerateLabels(self, numLabels:int, range:[float, float]) -> None\nC++: void GenerateLabels(int numLabels, double range[2])\nGenerateLabels(self, numLabels:int, rangeStart:float,\n    rangeEnd:float) -> None\nC++: void GenerateLabels(int numLabels, double rangeStart,\n    double rangeEnd)\n\nGenerate numLabels equally spaced labels between the specified\nrange. The labels will include the min/max range values.\n"},
  {"GenerateValues", PyvtkSurfaceNets2D_GenerateValues, METH_VARARGS,
   "GenerateValues(self, numContours:int, range:[float, float])\n    -> None\nC++: void GenerateValues(int numContours, double range[2])\nGenerateValues(self, numContours:int, rangeStart:float,\n    rangeEnd:float) -> None\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\n"},
  {"SetComputeScalars", PyvtkSurfaceNets2D_SetComputeScalars, METH_VARARGS,
   "SetComputeScalars(self, _arg:bool) -> None\nC++: virtual void SetComputeScalars(bool _arg)\n\nEnable/disable an option to generate cell scalars in the output.\nThe cell scalars are a two-tuple that indicates which labels\n(i.e., segmented regions) are on either side of each (line) cell\n(l0,l1) with l0<l1.  If an object is one-sided (meaning the\nbackground is on one side of the line) then l1=(OutsideLabel).\nThe name of the output cell scalars is \"BoundaryLabels\". By\ndefault this flag is on.\n"},
  {"GetComputeScalars", PyvtkSurfaceNets2D_GetComputeScalars, METH_VARARGS,
   "GetComputeScalars(self) -> bool\nC++: virtual bool GetComputeScalars()\n\n"},
  {"ComputeScalarsOn", PyvtkSurfaceNets2D_ComputeScalarsOn, METH_VARARGS,
   "ComputeScalarsOn(self) -> None\nC++: virtual void ComputeScalarsOn()\n\n"},
  {"ComputeScalarsOff", PyvtkSurfaceNets2D_ComputeScalarsOff, METH_VARARGS,
   "ComputeScalarsOff(self) -> None\nC++: virtual void ComputeScalarsOff()\n\n"},
  {"SetBackgroundLabel", PyvtkSurfaceNets2D_SetBackgroundLabel, METH_VARARGS,
   "SetBackgroundLabel(self, _arg:float) -> None\nC++: virtual void SetBackgroundLabel(double _arg)\n\nIf computing cell scalars, specify the label to use when\nreferencing a labeled region outside any of the specified regions\n(i.e., when referencing the background region). By default this\nvalue is zero. Be very careful of the value being used here, it\nshould not overlap an extracted label value, and because it is\nthe same type as the input image scalars, make sure the value can\nbe properly represented (i.e., if the input scalars are an\nunsigned type, then BackgroundLabel should not be negative).\n"},
  {"GetBackgroundLabel", PyvtkSurfaceNets2D_GetBackgroundLabel, METH_VARARGS,
   "GetBackgroundLabel(self) -> float\nC++: virtual double GetBackgroundLabel()\n\n"},
  {"SetArrayComponent", PyvtkSurfaceNets2D_SetArrayComponent, METH_VARARGS,
   "SetArrayComponent(self, _arg:int) -> None\nC++: virtual void SetArrayComponent(int _arg)\n\nSet/get which component of a input multi-component scalar array\nto contour with; defaults to component 0.\n"},
  {"GetArrayComponent", PyvtkSurfaceNets2D_GetArrayComponent, METH_VARARGS,
   "GetArrayComponent(self) -> int\nC++: virtual int GetArrayComponent()\n\n"},
  {"SetSmoothing", PyvtkSurfaceNets2D_SetSmoothing, METH_VARARGS,
   "SetSmoothing(self, _arg:bool) -> None\nC++: virtual void SetSmoothing(bool _arg)\n\nIndicate whether smoothing should be enabled. By default, after\nthe isoline is extracted, smoothing occurs using the built-in\nsmoother. To disable smoothing, invoke SmoothingOff().\n"},
  {"GetSmoothing", PyvtkSurfaceNets2D_GetSmoothing, METH_VARARGS,
   "GetSmoothing(self) -> bool\nC++: virtual bool GetSmoothing()\n\n"},
  {"SmoothingOn", PyvtkSurfaceNets2D_SmoothingOn, METH_VARARGS,
   "SmoothingOn(self) -> None\nC++: virtual void SmoothingOn()\n\n"},
  {"SmoothingOff", PyvtkSurfaceNets2D_SmoothingOff, METH_VARARGS,
   "SmoothingOff(self) -> None\nC++: virtual void SmoothingOff()\n\n"},
  {"GetSmoother", PyvtkSurfaceNets2D_GetSmoother, METH_VARARGS,
   "GetSmoother(self) -> vtkConstrainedSmoothingFilter\nC++: virtual vtkConstrainedSmoothingFilter *GetSmoother()\n\nGet the instance of vtkConstrainedSmoothingFilter used to smooth\nthe extracted surface net. To control smoothing, access this\ninstance and specify its parameters such as number of smoothing\niterations and constraint distance. If you wish to disable\nsmoothing, set SmoothingOff().\n"},
  {"SetDataCaching", PyvtkSurfaceNets2D_SetDataCaching, METH_VARARGS,
   "SetDataCaching(self, _arg:bool) -> None\nC++: virtual void SetDataCaching(bool _arg)\n\nEnable caching of intermediate data. A common workflow using this\nfilter requires extracting object boundaries, and then repeatedly\nrerunning the smoothing process with different parameters. To\nimprove performance by avoiding repeated extraction of the\nboundary, the filter can cache intermediate data prior to the\nsmoothing process. In this way, the boundary is only extracted\nonce, and as long as only the internal constrained smoothing\nfilter is modified, then boundary extraction will not be\nreexecuted. By default this is enabled.\n"},
  {"GetDataCaching", PyvtkSurfaceNets2D_GetDataCaching, METH_VARARGS,
   "GetDataCaching(self) -> bool\nC++: virtual bool GetDataCaching()\n\n"},
  {"DataCachingOn", PyvtkSurfaceNets2D_DataCachingOn, METH_VARARGS,
   "DataCachingOn(self) -> None\nC++: virtual void DataCachingOn()\n\n"},
  {"DataCachingOff", PyvtkSurfaceNets2D_DataCachingOff, METH_VARARGS,
   "DataCachingOff(self) -> None\nC++: virtual void DataCachingOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSurfaceNets2D_Doc =
  "vtkSurfaceNets2D - generate smoothed constours from segmented 2D\nimage data (i.e., \"label maps\")\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSurfaceNets2D creates boundary/isocontour lines from a label map\n"
  "(e.g., a segmented image) using a threaded, 2D version of the\n"
  "multiple regions/labels surface nets algorithm. The input is a 2D\n"
  "image where each pixel is labeled (integer labels are preferred to\n"
  "real values), and the output data is polygonal data separating\n"
  "labeled regions via line segments. (Note that on output each region\n"
  "[corresponding to a different segmented object] will share\n"
  "points/edges on a common boundary, i.e., two objects next to each\n"
  "other will share the boundary that separates them.)\n\n"
  "While this filter is similar to a contouring operation, classic\n"
  "contouring methods assume a continuous scalar field. In comparison,\n"
  "label maps are not continuous in scalar function value, meaning that\n"
  "usual data interpolation (e.g., along edges) is not possible.\n"
  "Instead, when the edge endpoint pixels are labeled in differing\n"
  "regions, the edge is split and transected by a line segment that\n"
  "connects the center points of the squares on either side of the edge.\n"
  "Later, using a energy minimization smoothing process, these split\n"
  "edges will be adjusted to produce a smoother result. (Constraints on\n"
  "smoothing displacements may be specified to prevent excessive\n"
  "shrinkage and/or object distortion.)\n\n"
  "The smoothing process is controlled by setting a convergence measure,\n"
  "the number of smoothing iterations, the step size, and the allowed\n"
  "(constraint) distance that points may move.  These can be adjusted to\n"
  "provide the desired result. This class provides a method to access an\n"
  "internal instance of vtkConstrainedSmoothingFilter, through which\n"
  "these smoothing parameters may be specified, and which actually\n"
  "performs the smoothing operation. (Note: it is possible to skip the\n"
  "smoothing process altogether by disabling smoothing (e.g., invoking\n"
  "SmoothingOff()) or setting the number of smoothing iterations to\n"
  "zero. This can be useful when using a different smoothing filter like\n"
  "vtkWindowedSincPolyDataFilter; or if an unsmoothed, aliased output is\n"
  "desired. The reason the smoothing is built in to this filter is to\n"
  "remain faithful to the published literature describing the surface\n"
  "nets algorithm.)\n\n"
  "The SurfaceNets algorithm was first proposed by Sarah Frisken.  Two\n"
  "important papers include the description of surface nets for binary\n"
  "objects (i.e., extracting just one segmented object from a volume)\n"
  "and multi-label (multiple object extraction).\n\n"
  "S. Frisken (Gibson), \342\200\234Constrained Elastic SurfaceNets: Generating\n"
  "Smooth Surfaces from Binary Segmented Data\342\200\235, Proc. MICCAI, 1998,\n"
  "pp. 888-898.\n\n"
  "S. Frisken, \342\200\234SurfaceNets for Multi-Label Segmentations with\n"
  "Preservation of Sharp Boundaries\342\200\235, J. Computer Graphics Techniques,\n"
  "2022.\n\n"
  "Note that one nice feature of this filter is that algorithm execution\n"
  "occurs only once no matter the number of object labels / contour\n"
  "values. In many contouring-like algorithms, each separate contour\n"
  "value requires an additional algorithm execution with a new contour\n"
  "value. So in this filter large numbers of contour values do not\n"
  "significantly affect overall speed. The user can specify which\n"
  "objects (i.e., labels) are to be output to the filter. (Unspecified\n"
  "labels are treated as background and not output.)\n\n"
  "The filter can optionally output a two-component, cell data array\n"
  "indicating the labels/regions on either side of the line segments\n"
  "composing the output vtkPolyData. This can be used for advanced\n"
  "operations like extracting shared/contacting boundaries between two\n"
  "objects. The name of this cell data array is \"BoundaryLabels\".\n\n"
  "Implementation note: For performance reasons, this filter is\n"
  "internally implemented quite differently than described in the\n"
  "literature.  The main difference is that concepts from the Flying\n"
  "Edges parallel isocontouring algorithm are used. Namely, parallel,\n"
  "edge-by-edge processing is used to define cell cases, generate\n"
  "smoothing stencils, and produce points and output lines. The\n"
  "smoothing process is also threaded using a double-buffering approach.\n\n"
  "@warning\n"
  "This filter is specialized to 2D images.\n\n"
  "@warning\n"
  "Subtle differences in the output may result when the number of\n"
  "objects / labels changes. This is because the smoothing operation\n"
  "operates on all of the boundaries simultaneously. If the boundaries\n"
  "change due to a difference in the number of regions / labels, then\n"
  "the smoothing operation can produce different results.\n\n"
  "@warning\n"
  "The filters vtkDiscreteMarchingCubes, vtkDiscreteFlyingEdges2D,\n"
  "vtkDiscreteFlyingEdges3D, and vtkDiscreteFlyingEdgesClipper2D also\n"
  "perform isocontour extraction. However these filters produce output\n"
  "that may not share common boundary cells, and may produce \"gaps\"\n"
  "between segmented regions. For example, vtkDiscreteMarchingCubes will\n"
  "share points between adjacent regions, but not triangle cells (which\n"
  "will be coincident). Also, no center point is inserted into voxels,\n"
  "meaning that intermittent gaps may form between regions.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@warning\n"
  "See also vtkPackLabels which is a utility class for renumbering the\n"
  "labels found in the input segmentation mask to contiguous forms of\n"
  "smaller type.\n\n"
  "@sa\n"
  "vtkSurfaceNets3D vtkDiscreteFlyingEdges2D\n"
  "vtkDiscreteFlyingEdgesClipper2D vtkConstrainedSmoothingFilter\n"
  "vtkFlyingEdges2D vtkFlyingEdges3D vtkWindowedSincPolyDataFilter\n"
  "vtkPackLabels\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSurfaceNets2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkSurfaceNets2D", // tp_name
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
  PyvtkSurfaceNets2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSurfaceNets2D_StaticNew()
{
  return vtkSurfaceNets2D::New();
}

PyObject *PyvtkSurfaceNets2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSurfaceNets2D_Type, PyvtkSurfaceNets2D_Methods,
    "vtkSurfaceNets2D",
 &PyvtkSurfaceNets2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSurfaceNets2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSurfaceNets2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSurfaceNets2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

