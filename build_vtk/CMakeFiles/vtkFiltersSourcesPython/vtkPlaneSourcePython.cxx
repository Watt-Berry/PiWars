// python wrapper for vtkPlaneSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPlaneSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlaneSource(PyObject *dict); }
extern "C" { PyObject *PyvtkPlaneSource_ClassNew(); }


static PyObject *
PyvtkPlaneSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlaneSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlaneSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlaneSource *tempr = vtkPlaneSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlaneSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlaneSource::NewInstance());

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
PyvtkPlaneSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPlaneSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPlaneSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_SetXResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXResolution(temp0);
    }
    else
    {
      op->vtkPlaneSource::SetXResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_GetXResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXResolution() :
      op->vtkPlaneSource::GetXResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_SetYResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYResolution(temp0);
    }
    else
    {
      op->vtkPlaneSource::SetYResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_GetYResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYResolution() :
      op->vtkPlaneSource::GetYResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0, temp1);
    }
    else
    {
      op->vtkPlaneSource::SetResolution(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetResolution(temp0, temp1);
    }
    else
    {
      op->vtkPlaneSource::GetResolution(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->vtkPlaneSource::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneSource_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->vtkPlaneSource::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneSource_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPlaneSource_SetOrigin_s1(self, args);
    case 1:
      return PyvtkPlaneSource_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkPlaneSource_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkPlaneSource::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPlaneSource::SetPoint1(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneSource_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->SetPoint1(temp0);
    }
    else
    {
      op->vtkPlaneSource::SetPoint1(temp0);
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
PyvtkPlaneSource_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPlaneSource_SetPoint1_s1(self, args);
    case 1:
      return PyvtkPlaneSource_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}


static PyObject *
PyvtkPlaneSource_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkPlaneSource::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPlaneSource::SetPoint2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneSource_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->SetPoint2(temp0);
    }
    else
    {
      op->vtkPlaneSource::SetPoint2(temp0);
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
PyvtkPlaneSource_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPlaneSource_SetPoint2_s1(self, args);
    case 1:
      return PyvtkPlaneSource_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}


static PyObject *
PyvtkPlaneSource_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkPlaneSource::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_GetAxis1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->GetAxis1(temp0);
    }
    else
    {
      op->vtkPlaneSource::GetAxis1(temp0);
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
PyvtkPlaneSource_GetAxis2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->GetAxis2(temp0);
    }
    else
    {
      op->vtkPlaneSource::GetAxis2(temp0);
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
PyvtkPlaneSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPlaneSource::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkPlaneSource::SetCenter(temp0);
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
PyvtkPlaneSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPlaneSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkPlaneSource_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkPlaneSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkPlaneSource::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->vtkPlaneSource::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlaneSource_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

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
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkPlaneSource::SetNormal(temp0);
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
PyvtkPlaneSource_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPlaneSource_SetNormal_s1(self, args);
    case 1:
      return PyvtkPlaneSource_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}


static PyObject *
PyvtkPlaneSource_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkPlaneSource::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Push(temp0);
    }
    else
    {
      op->vtkPlaneSource::Push(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->Rotate(temp0, temp1);
    }
    else
    {
      op->vtkPlaneSource::Rotate(temp0, temp1);
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
PyvtkPlaneSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkPlaneSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneSource *op = static_cast<vtkPlaneSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkPlaneSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPlaneSource_Methods[] = {
  {"IsTypeOf", PyvtkPlaneSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlaneSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlaneSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPlaneSource\nC++: static vtkPlaneSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlaneSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPlaneSource\nC++: vtkPlaneSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPlaneSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPlaneSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetXResolution", PyvtkPlaneSource_SetXResolution, METH_VARARGS,
   "SetXResolution(self, _arg:int) -> None\nC++: virtual void SetXResolution(int _arg)\n\nSpecify the resolution of the plane along the first axes.\n"},
  {"GetXResolution", PyvtkPlaneSource_GetXResolution, METH_VARARGS,
   "GetXResolution(self) -> int\nC++: virtual int GetXResolution()\n\n"},
  {"SetYResolution", PyvtkPlaneSource_SetYResolution, METH_VARARGS,
   "SetYResolution(self, _arg:int) -> None\nC++: virtual void SetYResolution(int _arg)\n\nSpecify the resolution of the plane along the second axes.\n"},
  {"GetYResolution", PyvtkPlaneSource_GetYResolution, METH_VARARGS,
   "GetYResolution(self) -> int\nC++: virtual int GetYResolution()\n\n"},
  {"SetResolution", PyvtkPlaneSource_SetResolution, METH_VARARGS,
   "SetResolution(self, xR:int, yR:int) -> None\nC++: void SetResolution(int xR, int yR)\n\nSet the number of x-y subdivisions in the plane.\n"},
  {"GetResolution", PyvtkPlaneSource_GetResolution, METH_VARARGS,
   "GetResolution(self, xR:int, yR:int) -> None\nC++: void GetResolution(int &xR, int &yR)\n\n"},
  {"SetOrigin", PyvtkPlaneSource_SetOrigin, METH_VARARGS,
   "SetOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOrigin(const double _arg[3])\n\nSpecify a point defining the origin of the plane.\n"},
  {"GetOrigin", PyvtkPlaneSource_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetPoint1", PyvtkPlaneSource_SetPoint1, METH_VARARGS,
   "SetPoint1(self, x:float, y:float, z:float) -> None\nC++: void SetPoint1(double x, double y, double z)\nSetPoint1(self, pnt:[float, float, float]) -> None\nC++: void SetPoint1(double pnt[3])\n\nSpecify a point defining the first axis of the plane.\n"},
  {"GetPoint1", PyvtkPlaneSource_GetPoint1, METH_VARARGS,
   "GetPoint1(self) -> (float, float, float)\nC++: virtual double *GetPoint1()\n\n"},
  {"SetPoint2", PyvtkPlaneSource_SetPoint2, METH_VARARGS,
   "SetPoint2(self, x:float, y:float, z:float) -> None\nC++: void SetPoint2(double x, double y, double z)\nSetPoint2(self, pnt:[float, float, float]) -> None\nC++: void SetPoint2(double pnt[3])\n\nSpecify a point defining the second axis of the plane.\n"},
  {"GetPoint2", PyvtkPlaneSource_GetPoint2, METH_VARARGS,
   "GetPoint2(self) -> (float, float, float)\nC++: virtual double *GetPoint2()\n\n"},
  {"GetAxis1", PyvtkPlaneSource_GetAxis1, METH_VARARGS,
   "GetAxis1(self, a1:[float, float, float]) -> None\nC++: void GetAxis1(double a1[3])\n\nConvenience methods to retrieve the axes of the plane; that is\naxis a1 is the vector (Point1-Origin), and axis a2 is the vector\n(Point2-Origin).\n"},
  {"GetAxis2", PyvtkPlaneSource_GetAxis2, METH_VARARGS,
   "GetAxis2(self, a2:[float, float, float]) -> None\nC++: void GetAxis2(double a2[3])\n\n"},
  {"SetCenter", PyvtkPlaneSource_SetCenter, METH_VARARGS,
   "SetCenter(self, x:float, y:float, z:float) -> None\nC++: void SetCenter(double x, double y, double z)\nSetCenter(self, center:[float, float, float]) -> None\nC++: void SetCenter(double center[3])\n\nSet/Get the center of the plane. Works in conjunction with the\nplane normal to position the plane. Don't use this method to\ndefine the plane. Instead, use it to move the plane to a new\ncenter point.\n"},
  {"GetCenter", PyvtkPlaneSource_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: virtual double *GetCenter()\n\n"},
  {"SetNormal", PyvtkPlaneSource_SetNormal, METH_VARARGS,
   "SetNormal(self, nx:float, ny:float, nz:float) -> None\nC++: void SetNormal(double nx, double ny, double nz)\nSetNormal(self, n:[float, float, float]) -> None\nC++: void SetNormal(double n[3])\n\nSet/Get the plane normal. Works in conjunction with the plane\ncenter to orient the plane. Don't use this method to define the\nplane. Instead, use it to rotate the plane around the current\ncenter point.\n"},
  {"GetNormal", PyvtkPlaneSource_GetNormal, METH_VARARGS,
   "GetNormal(self) -> (float, float, float)\nC++: virtual double *GetNormal()\n\n"},
  {"Push", PyvtkPlaneSource_Push, METH_VARARGS,
   "Push(self, distance:float) -> None\nC++: void Push(double distance)\n\nTranslate the plane in the direction of the normal by the\ndistance specified.  Negative values move the plane in the\nopposite direction.\n"},
  {"Rotate", PyvtkPlaneSource_Rotate, METH_VARARGS,
   "Rotate(self, angle:float, rotationAxis:[float, float, float])\n    -> None\nC++: void Rotate(double angle, double rotationAxis[3])\n\nRotate plane at center around a given axis If the absolute value\nof the angle is inferior to the defined EPSILON, then don't\nrotate\n"},
  {"SetOutputPointsPrecision", PyvtkPlaneSource_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkPlaneSource_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPlaneSource_Doc =
  "vtkPlaneSource - create an array of quadrilaterals located in a plane\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPlaneSource creates an m x n array of quadrilaterals arranged as a\n"
  "regular tiling in a plane. The plane is defined by specifying an\n"
  "origin point, and then two other points that, together with the\n"
  "origin, define two axes for the plane. These axes do not have to be\n"
  "orthogonal - so you can create a parallelogram. (The axes must not be\n"
  "parallel.) The resolution of the plane (i.e., number of subdivisions)\n"
  "is controlled by the ivars XResolution and YResolution.\n\n"
  "By default, the plane is centered at the origin and perpendicular to\n"
  "the z-axis, with width and height of length 1 and resolutions set to\n"
  "1.\n\n"
  "There are three convenience methods that allow you to easily move the\n"
  "plane.  The first, SetNormal(), allows you to specify the plane\n"
  "normal. The effect of this method is to rotate the plane around the\n"
  "center of the plane, aligning the plane normal with the specified\n"
  "normal. The rotation is about the axis defined by the cross product\n"
  "of the current normal with the new normal. The second, SetCenter(),\n"
  "translates the center of the plane to the specified center point. The\n"
  "third method, Push(), allows you to translate the plane along the\n"
  "plane normal by the distance specified. (Negative Push values\n"
  "translate the plane in the negative normal direction.)  Note that the\n"
  "SetNormal(), SetCenter() and Push() methods modify the Origin,\n"
  "Point1, and/or Point2 instance variables.\n\n"
  "@warning\n"
  "The normal to the plane will point in the direction of the cross\n"
  "product of the first axis (Origin->Point1) with the second\n"
  "(Origin->Point2). This also affects the normals to the generated\n"
  "polygons.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPlaneSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkPlaneSource", // tp_name
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
  PyvtkPlaneSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlaneSource_StaticNew()
{
  return vtkPlaneSource::New();
}

PyObject *PyvtkPlaneSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPlaneSource_Type, PyvtkPlaneSource_Methods,
    "vtkPlaneSource",
 &PyvtkPlaneSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlaneSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlaneSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlaneSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

