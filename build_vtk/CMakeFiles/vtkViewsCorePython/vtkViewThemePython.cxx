// python wrapper for vtkViewTheme
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkViewTheme.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkViewTheme(PyObject *dict); }
extern "C" { PyObject *PyvtkViewTheme_ClassNew(); }


static PyObject *
PyvtkViewTheme_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkViewTheme::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkViewTheme::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkViewTheme *tempr = vtkViewTheme::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkViewTheme *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkViewTheme::NewInstance());

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
PyvtkViewTheme_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkViewTheme::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkViewTheme::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointSize(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPointSize() :
      op->vtkViewTheme::GetPointSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineWidth(temp0);
    }
    else
    {
      op->vtkViewTheme::SetLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineWidth() :
      op->vtkViewTheme::GetLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetPointColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetPointColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPointColor(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetPointColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetPointColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPointColor");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointColor() :
      op->vtkViewTheme::GetPointColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointOpacity(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPointOpacity() :
      op->vtkViewTheme::GetPointOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointHueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointHueRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::SetPointHueRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointHueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPointHueRange(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointHueRange(temp0);
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
PyvtkViewTheme_SetPointHueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewTheme_SetPointHueRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetPointHueRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPointHueRange");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetPointHueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointHueRange() :
      op->vtkViewTheme::GetPointHueRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetPointHueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetPointHueRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::GetPointHueRange(temp0, temp1);
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
PyvtkViewTheme_GetPointHueRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetPointHueRange(temp0);
    }
    else
    {
      op->vtkViewTheme::GetPointHueRange(temp0);
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
PyvtkViewTheme_GetPointHueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetPointHueRange_s1(self, args);
    case 2:
      return PyvtkViewTheme_GetPointHueRange_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetPointHueRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPointHueRange");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_SetPointSaturationRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointSaturationRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::SetPointSaturationRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointSaturationRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPointSaturationRange(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointSaturationRange(temp0);
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
PyvtkViewTheme_SetPointSaturationRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewTheme_SetPointSaturationRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetPointSaturationRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPointSaturationRange");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetPointSaturationRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointSaturationRange() :
      op->vtkViewTheme::GetPointSaturationRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetPointSaturationRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetPointSaturationRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::GetPointSaturationRange(temp0, temp1);
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
PyvtkViewTheme_GetPointSaturationRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetPointSaturationRange(temp0);
    }
    else
    {
      op->vtkViewTheme::GetPointSaturationRange(temp0);
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
PyvtkViewTheme_GetPointSaturationRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetPointSaturationRange_s1(self, args);
    case 2:
      return PyvtkViewTheme_GetPointSaturationRange_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetPointSaturationRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPointSaturationRange");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_SetPointValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointValueRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::SetPointValueRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPointValueRange(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointValueRange(temp0);
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
PyvtkViewTheme_SetPointValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewTheme_SetPointValueRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetPointValueRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPointValueRange");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetPointValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointValueRange() :
      op->vtkViewTheme::GetPointValueRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetPointValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetPointValueRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::GetPointValueRange(temp0, temp1);
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
PyvtkViewTheme_GetPointValueRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetPointValueRange(temp0);
    }
    else
    {
      op->vtkViewTheme::GetPointValueRange(temp0);
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
PyvtkViewTheme_GetPointValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetPointValueRange_s1(self, args);
    case 2:
      return PyvtkViewTheme_GetPointValueRange_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetPointValueRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPointValueRange");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_SetPointAlphaRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointAlphaRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::SetPointAlphaRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointAlphaRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPointAlphaRange(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointAlphaRange(temp0);
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
PyvtkViewTheme_SetPointAlphaRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewTheme_SetPointAlphaRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetPointAlphaRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPointAlphaRange");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetPointAlphaRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointAlphaRange() :
      op->vtkViewTheme::GetPointAlphaRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetPointAlphaRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetPointAlphaRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::GetPointAlphaRange(temp0, temp1);
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
PyvtkViewTheme_GetPointAlphaRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetPointAlphaRange(temp0);
    }
    else
    {
      op->vtkViewTheme::GetPointAlphaRange(temp0);
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
PyvtkViewTheme_GetPointAlphaRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetPointAlphaRange_s1(self, args);
    case 2:
      return PyvtkViewTheme_GetPointAlphaRange_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetPointAlphaRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPointAlphaRange");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetPointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetPointLookupTable() :
      op->vtkViewTheme::GetPointLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetPointLookupTable(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetScalePointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalePointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalePointLookupTable(temp0);
    }
    else
    {
      op->vtkViewTheme::SetScalePointLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetScalePointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalePointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScalePointLookupTable() :
      op->vtkViewTheme::GetScalePointLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_ScalePointLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalePointLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalePointLookupTableOn();
    }
    else
    {
      op->vtkViewTheme::ScalePointLookupTableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_ScalePointLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalePointLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalePointLookupTableOff();
    }
    else
    {
      op->vtkViewTheme::ScalePointLookupTableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetCellColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetCellColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetCellColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCellColor(temp0);
    }
    else
    {
      op->vtkViewTheme::SetCellColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetCellColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetCellColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCellColor");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetCellColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCellColor() :
      op->vtkViewTheme::GetCellColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellOpacity(temp0);
    }
    else
    {
      op->vtkViewTheme::SetCellOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCellOpacity() :
      op->vtkViewTheme::GetCellOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetCellHueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellHueRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::SetCellHueRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellHueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetCellHueRange(temp0);
    }
    else
    {
      op->vtkViewTheme::SetCellHueRange(temp0);
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
PyvtkViewTheme_SetCellHueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewTheme_SetCellHueRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetCellHueRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCellHueRange");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetCellHueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCellHueRange() :
      op->vtkViewTheme::GetCellHueRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetCellHueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetCellHueRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::GetCellHueRange(temp0, temp1);
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
PyvtkViewTheme_GetCellHueRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCellHueRange(temp0);
    }
    else
    {
      op->vtkViewTheme::GetCellHueRange(temp0);
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
PyvtkViewTheme_GetCellHueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetCellHueRange_s1(self, args);
    case 2:
      return PyvtkViewTheme_GetCellHueRange_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetCellHueRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellHueRange");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_SetCellSaturationRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellSaturationRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::SetCellSaturationRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellSaturationRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetCellSaturationRange(temp0);
    }
    else
    {
      op->vtkViewTheme::SetCellSaturationRange(temp0);
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
PyvtkViewTheme_SetCellSaturationRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewTheme_SetCellSaturationRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetCellSaturationRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCellSaturationRange");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetCellSaturationRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCellSaturationRange() :
      op->vtkViewTheme::GetCellSaturationRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetCellSaturationRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetCellSaturationRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::GetCellSaturationRange(temp0, temp1);
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
PyvtkViewTheme_GetCellSaturationRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCellSaturationRange(temp0);
    }
    else
    {
      op->vtkViewTheme::GetCellSaturationRange(temp0);
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
PyvtkViewTheme_GetCellSaturationRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetCellSaturationRange_s1(self, args);
    case 2:
      return PyvtkViewTheme_GetCellSaturationRange_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetCellSaturationRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellSaturationRange");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_SetCellValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellValueRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::SetCellValueRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetCellValueRange(temp0);
    }
    else
    {
      op->vtkViewTheme::SetCellValueRange(temp0);
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
PyvtkViewTheme_SetCellValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewTheme_SetCellValueRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetCellValueRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCellValueRange");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetCellValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCellValueRange() :
      op->vtkViewTheme::GetCellValueRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetCellValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetCellValueRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::GetCellValueRange(temp0, temp1);
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
PyvtkViewTheme_GetCellValueRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCellValueRange(temp0);
    }
    else
    {
      op->vtkViewTheme::GetCellValueRange(temp0);
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
PyvtkViewTheme_GetCellValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetCellValueRange_s1(self, args);
    case 2:
      return PyvtkViewTheme_GetCellValueRange_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetCellValueRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellValueRange");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_SetCellAlphaRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellAlphaRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::SetCellAlphaRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellAlphaRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetCellAlphaRange(temp0);
    }
    else
    {
      op->vtkViewTheme::SetCellAlphaRange(temp0);
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
PyvtkViewTheme_SetCellAlphaRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkViewTheme_SetCellAlphaRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetCellAlphaRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCellAlphaRange");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetCellAlphaRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCellAlphaRange() :
      op->vtkViewTheme::GetCellAlphaRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetCellAlphaRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetCellAlphaRange(temp0, temp1);
    }
    else
    {
      op->vtkViewTheme::GetCellAlphaRange(temp0, temp1);
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
PyvtkViewTheme_GetCellAlphaRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCellAlphaRange(temp0);
    }
    else
    {
      op->vtkViewTheme::GetCellAlphaRange(temp0);
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
PyvtkViewTheme_GetCellAlphaRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetCellAlphaRange_s1(self, args);
    case 2:
      return PyvtkViewTheme_GetCellAlphaRange_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetCellAlphaRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellAlphaRange");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetCellLookupTable() :
      op->vtkViewTheme::GetCellLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetCellLookupTable(temp0);
    }
    else
    {
      op->vtkViewTheme::SetCellLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetScaleCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleCellLookupTable(temp0);
    }
    else
    {
      op->vtkViewTheme::SetScaleCellLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetScaleCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaleCellLookupTable() :
      op->vtkViewTheme::GetScaleCellLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_ScaleCellLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleCellLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleCellLookupTableOn();
    }
    else
    {
      op->vtkViewTheme::ScaleCellLookupTableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_ScaleCellLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleCellLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleCellLookupTableOff();
    }
    else
    {
      op->vtkViewTheme::ScaleCellLookupTableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetOutlineColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetOutlineColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetOutlineColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetOutlineColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutlineColor(temp0);
    }
    else
    {
      op->vtkViewTheme::SetOutlineColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetOutlineColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetOutlineColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetOutlineColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutlineColor");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetOutlineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutlineColor() :
      op->vtkViewTheme::GetOutlineColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetSelectedPointColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetSelectedPointColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetSelectedPointColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetSelectedPointColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedPointColor(temp0);
    }
    else
    {
      op->vtkViewTheme::SetSelectedPointColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetSelectedPointColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetSelectedPointColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetSelectedPointColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectedPointColor");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetSelectedPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSelectedPointColor() :
      op->vtkViewTheme::GetSelectedPointColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetSelectedPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedPointOpacity(temp0);
    }
    else
    {
      op->vtkViewTheme::SetSelectedPointOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetSelectedPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSelectedPointOpacity() :
      op->vtkViewTheme::GetSelectedPointOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetSelectedCellColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetSelectedCellColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetSelectedCellColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetSelectedCellColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedCellColor(temp0);
    }
    else
    {
      op->vtkViewTheme::SetSelectedCellColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetSelectedCellColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetSelectedCellColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetSelectedCellColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectedCellColor");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetSelectedCellColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSelectedCellColor() :
      op->vtkViewTheme::GetSelectedCellColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetSelectedCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedCellOpacity(temp0);
    }
    else
    {
      op->vtkViewTheme::SetSelectedCellOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetSelectedCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSelectedCellOpacity() :
      op->vtkViewTheme::GetSelectedCellOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetBackgroundColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetBackgroundColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundColor(temp0);
    }
    else
    {
      op->vtkViewTheme::SetBackgroundColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetBackgroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor() :
      op->vtkViewTheme::GetBackgroundColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetBackgroundColor2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetBackgroundColor2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetBackgroundColor2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetBackgroundColor2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundColor2(temp0);
    }
    else
    {
      op->vtkViewTheme::SetBackgroundColor2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetBackgroundColor2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetBackgroundColor2_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetBackgroundColor2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor2");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetBackgroundColor2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor2() :
      op->vtkViewTheme::GetBackgroundColor2());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetPointTextProperty(temp0);
    }
    else
    {
      op->vtkViewTheme::SetPointTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetPointTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetPointTextProperty() :
      op->vtkViewTheme::GetPointTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetCellTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetCellTextProperty(temp0);
    }
    else
    {
      op->vtkViewTheme::SetCellTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_GetCellTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetCellTextProperty() :
      op->vtkViewTheme::GetCellTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_SetVertexLabelColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetVertexLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetVertexLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetVertexLabelColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetVertexLabelColor(temp0);
    }
    else
    {
      op->vtkViewTheme::SetVertexLabelColor(temp0);
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
PyvtkViewTheme_SetVertexLabelColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetVertexLabelColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetVertexLabelColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVertexLabelColor");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetVertexLabelColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVertexLabelColor() :
      op->vtkViewTheme::GetVertexLabelColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetVertexLabelColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetVertexLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::GetVertexLabelColor(temp0, temp1, temp2);
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
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetVertexLabelColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetVertexLabelColor(temp0);
    }
    else
    {
      op->vtkViewTheme::GetVertexLabelColor(temp0);
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
PyvtkViewTheme_GetVertexLabelColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetVertexLabelColor_s1(self, args);
    case 3:
      return PyvtkViewTheme_GetVertexLabelColor_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetVertexLabelColor_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVertexLabelColor");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_SetEdgeLabelColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetEdgeLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::SetEdgeLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_SetEdgeLabelColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetEdgeLabelColor(temp0);
    }
    else
    {
      op->vtkViewTheme::SetEdgeLabelColor(temp0);
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
PyvtkViewTheme_SetEdgeLabelColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkViewTheme_SetEdgeLabelColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetEdgeLabelColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEdgeLabelColor");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_GetEdgeLabelColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetEdgeLabelColor() :
      op->vtkViewTheme::GetEdgeLabelColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetEdgeLabelColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetEdgeLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkViewTheme::GetEdgeLabelColor(temp0, temp1, temp2);
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
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkViewTheme_GetEdgeLabelColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetEdgeLabelColor(temp0);
    }
    else
    {
      op->vtkViewTheme::GetEdgeLabelColor(temp0);
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
PyvtkViewTheme_GetEdgeLabelColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkViewTheme_GetEdgeLabelColor_s1(self, args);
    case 3:
      return PyvtkViewTheme_GetEdgeLabelColor_s2(self, args);
    case 1:
      return PyvtkViewTheme_GetEdgeLabelColor_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetEdgeLabelColor");
  return nullptr;
}


static PyObject *
PyvtkViewTheme_CreateOceanTheme(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateOceanTheme");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkViewTheme *tempr = vtkViewTheme::CreateOceanTheme();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_CreateMellowTheme(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateMellowTheme");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkViewTheme *tempr = vtkViewTheme::CreateMellowTheme();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_CreateNeonTheme(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateNeonTheme");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkViewTheme *tempr = vtkViewTheme::CreateNeonTheme();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_LookupMatchesPointTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupMatchesPointTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    bool tempr = (ap.IsBound() ?
      op->LookupMatchesPointTheme(temp0) :
      op->vtkViewTheme::LookupMatchesPointTheme(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewTheme_LookupMatchesCellTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupMatchesCellTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    bool tempr = (ap.IsBound() ?
      op->LookupMatchesCellTheme(temp0) :
      op->vtkViewTheme::LookupMatchesCellTheme(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkViewTheme_Methods[] = {
  {"IsTypeOf", PyvtkViewTheme_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkViewTheme_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkViewTheme_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkViewTheme\nC++: static vtkViewTheme *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkViewTheme_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkViewTheme\nC++: vtkViewTheme *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkViewTheme_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkViewTheme_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPointSize", PyvtkViewTheme_SetPointSize, METH_VARARGS,
   "SetPointSize(self, _arg:float) -> None\nC++: virtual void SetPointSize(double _arg)\n\nThe size of points or vertices\n"},
  {"GetPointSize", PyvtkViewTheme_GetPointSize, METH_VARARGS,
   "GetPointSize(self) -> float\nC++: virtual double GetPointSize()\n\n"},
  {"SetLineWidth", PyvtkViewTheme_SetLineWidth, METH_VARARGS,
   "SetLineWidth(self, _arg:float) -> None\nC++: virtual void SetLineWidth(double _arg)\n\nThe width of lines or edges\n"},
  {"GetLineWidth", PyvtkViewTheme_GetLineWidth, METH_VARARGS,
   "GetLineWidth(self) -> float\nC++: virtual double GetLineWidth()\n\n"},
  {"SetPointColor", PyvtkViewTheme_SetPointColor, METH_VARARGS,
   "SetPointColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetPointColor(double _arg1, double _arg2,\n    double _arg3)\nSetPointColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetPointColor(const double _arg[3])\n\nThe color and opacity of points or vertices when not mapped\nthrough a lookup table.\n"},
  {"GetPointColor", PyvtkViewTheme_GetPointColor, METH_VARARGS,
   "GetPointColor(self) -> (float, float, float)\nC++: virtual double *GetPointColor()\n\n"},
  {"SetPointOpacity", PyvtkViewTheme_SetPointOpacity, METH_VARARGS,
   "SetPointOpacity(self, _arg:float) -> None\nC++: virtual void SetPointOpacity(double _arg)\n\n"},
  {"GetPointOpacity", PyvtkViewTheme_GetPointOpacity, METH_VARARGS,
   "GetPointOpacity(self) -> float\nC++: virtual double GetPointOpacity()\n\n"},
  {"SetPointHueRange", PyvtkViewTheme_SetPointHueRange, METH_VARARGS,
   "SetPointHueRange(self, mn:float, mx:float) -> None\nC++: virtual void SetPointHueRange(double mn, double mx)\nSetPointHueRange(self, rng:[float, float]) -> None\nC++: virtual void SetPointHueRange(double rng[2])\n\nThe ranges to use in the point lookup table. You may also do this\nby accessing the point lookup table directly with\nGetPointLookupTable() and calling these methods.\n"},
  {"GetPointHueRange", PyvtkViewTheme_GetPointHueRange, METH_VARARGS,
   "GetPointHueRange(self) -> Pointer\nC++: virtual double *GetPointHueRange()\nGetPointHueRange(self, mn:float, mx:float) -> None\nC++: virtual void GetPointHueRange(double &mn, double &mx)\nGetPointHueRange(self, rng:[float, float]) -> None\nC++: virtual void GetPointHueRange(double rng[2])\n\n"},
  {"SetPointSaturationRange", PyvtkViewTheme_SetPointSaturationRange, METH_VARARGS,
   "SetPointSaturationRange(self, mn:float, mx:float) -> None\nC++: virtual void SetPointSaturationRange(double mn, double mx)\nSetPointSaturationRange(self, rng:[float, float]) -> None\nC++: virtual void SetPointSaturationRange(double rng[2])\n\n"},
  {"GetPointSaturationRange", PyvtkViewTheme_GetPointSaturationRange, METH_VARARGS,
   "GetPointSaturationRange(self) -> Pointer\nC++: virtual double *GetPointSaturationRange()\nGetPointSaturationRange(self, mn:float, mx:float) -> None\nC++: virtual void GetPointSaturationRange(double &mn, double &mx)\nGetPointSaturationRange(self, rng:[float, float]) -> None\nC++: virtual void GetPointSaturationRange(double rng[2])\n\n"},
  {"SetPointValueRange", PyvtkViewTheme_SetPointValueRange, METH_VARARGS,
   "SetPointValueRange(self, mn:float, mx:float) -> None\nC++: virtual void SetPointValueRange(double mn, double mx)\nSetPointValueRange(self, rng:[float, float]) -> None\nC++: virtual void SetPointValueRange(double rng[2])\n\n"},
  {"GetPointValueRange", PyvtkViewTheme_GetPointValueRange, METH_VARARGS,
   "GetPointValueRange(self) -> Pointer\nC++: virtual double *GetPointValueRange()\nGetPointValueRange(self, mn:float, mx:float) -> None\nC++: virtual void GetPointValueRange(double &mn, double &mx)\nGetPointValueRange(self, rng:[float, float]) -> None\nC++: virtual void GetPointValueRange(double rng[2])\n\n"},
  {"SetPointAlphaRange", PyvtkViewTheme_SetPointAlphaRange, METH_VARARGS,
   "SetPointAlphaRange(self, mn:float, mx:float) -> None\nC++: virtual void SetPointAlphaRange(double mn, double mx)\nSetPointAlphaRange(self, rng:[float, float]) -> None\nC++: virtual void SetPointAlphaRange(double rng[2])\n\n"},
  {"GetPointAlphaRange", PyvtkViewTheme_GetPointAlphaRange, METH_VARARGS,
   "GetPointAlphaRange(self) -> Pointer\nC++: virtual double *GetPointAlphaRange()\nGetPointAlphaRange(self, mn:float, mx:float) -> None\nC++: virtual void GetPointAlphaRange(double &mn, double &mx)\nGetPointAlphaRange(self, rng:[float, float]) -> None\nC++: virtual void GetPointAlphaRange(double rng[2])\n\n"},
  {"GetPointLookupTable", PyvtkViewTheme_GetPointLookupTable, METH_VARARGS,
   "GetPointLookupTable(self) -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetPointLookupTable()\n\nSet/Get the point lookup table.\n"},
  {"SetPointLookupTable", PyvtkViewTheme_SetPointLookupTable, METH_VARARGS,
   "SetPointLookupTable(self, lut:vtkScalarsToColors) -> None\nC++: virtual void SetPointLookupTable(vtkScalarsToColors *lut)\n\n"},
  {"SetScalePointLookupTable", PyvtkViewTheme_SetScalePointLookupTable, METH_VARARGS,
   "SetScalePointLookupTable(self, _arg:bool) -> None\nC++: virtual void SetScalePointLookupTable(bool _arg)\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {"GetScalePointLookupTable", PyvtkViewTheme_GetScalePointLookupTable, METH_VARARGS,
   "GetScalePointLookupTable(self) -> bool\nC++: virtual bool GetScalePointLookupTable()\n\n"},
  {"ScalePointLookupTableOn", PyvtkViewTheme_ScalePointLookupTableOn, METH_VARARGS,
   "ScalePointLookupTableOn(self) -> None\nC++: virtual void ScalePointLookupTableOn()\n\n"},
  {"ScalePointLookupTableOff", PyvtkViewTheme_ScalePointLookupTableOff, METH_VARARGS,
   "ScalePointLookupTableOff(self) -> None\nC++: virtual void ScalePointLookupTableOff()\n\n"},
  {"SetCellColor", PyvtkViewTheme_SetCellColor, METH_VARARGS,
   "SetCellColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCellColor(double _arg1, double _arg2,\n    double _arg3)\nSetCellColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCellColor(const double _arg[3])\n\nThe color and opacity of cells or edges when not mapped through a\nlookup table.\n"},
  {"GetCellColor", PyvtkViewTheme_GetCellColor, METH_VARARGS,
   "GetCellColor(self) -> (float, float, float)\nC++: virtual double *GetCellColor()\n\n"},
  {"SetCellOpacity", PyvtkViewTheme_SetCellOpacity, METH_VARARGS,
   "SetCellOpacity(self, _arg:float) -> None\nC++: virtual void SetCellOpacity(double _arg)\n\n"},
  {"GetCellOpacity", PyvtkViewTheme_GetCellOpacity, METH_VARARGS,
   "GetCellOpacity(self) -> float\nC++: virtual double GetCellOpacity()\n\n"},
  {"SetCellHueRange", PyvtkViewTheme_SetCellHueRange, METH_VARARGS,
   "SetCellHueRange(self, mn:float, mx:float) -> None\nC++: virtual void SetCellHueRange(double mn, double mx)\nSetCellHueRange(self, rng:[float, float]) -> None\nC++: virtual void SetCellHueRange(double rng[2])\n\nThe ranges to use in the cell lookup table. You may also do this\nby accessing the cell lookup table directly with\nGetCellLookupTable() and calling these methods.\n"},
  {"GetCellHueRange", PyvtkViewTheme_GetCellHueRange, METH_VARARGS,
   "GetCellHueRange(self) -> Pointer\nC++: virtual double *GetCellHueRange()\nGetCellHueRange(self, mn:float, mx:float) -> None\nC++: virtual void GetCellHueRange(double &mn, double &mx)\nGetCellHueRange(self, rng:[float, float]) -> None\nC++: virtual void GetCellHueRange(double rng[2])\n\n"},
  {"SetCellSaturationRange", PyvtkViewTheme_SetCellSaturationRange, METH_VARARGS,
   "SetCellSaturationRange(self, mn:float, mx:float) -> None\nC++: virtual void SetCellSaturationRange(double mn, double mx)\nSetCellSaturationRange(self, rng:[float, float]) -> None\nC++: virtual void SetCellSaturationRange(double rng[2])\n\n"},
  {"GetCellSaturationRange", PyvtkViewTheme_GetCellSaturationRange, METH_VARARGS,
   "GetCellSaturationRange(self) -> Pointer\nC++: virtual double *GetCellSaturationRange()\nGetCellSaturationRange(self, mn:float, mx:float) -> None\nC++: virtual void GetCellSaturationRange(double &mn, double &mx)\nGetCellSaturationRange(self, rng:[float, float]) -> None\nC++: virtual void GetCellSaturationRange(double rng[2])\n\n"},
  {"SetCellValueRange", PyvtkViewTheme_SetCellValueRange, METH_VARARGS,
   "SetCellValueRange(self, mn:float, mx:float) -> None\nC++: virtual void SetCellValueRange(double mn, double mx)\nSetCellValueRange(self, rng:[float, float]) -> None\nC++: virtual void SetCellValueRange(double rng[2])\n\n"},
  {"GetCellValueRange", PyvtkViewTheme_GetCellValueRange, METH_VARARGS,
   "GetCellValueRange(self) -> Pointer\nC++: virtual double *GetCellValueRange()\nGetCellValueRange(self, mn:float, mx:float) -> None\nC++: virtual void GetCellValueRange(double &mn, double &mx)\nGetCellValueRange(self, rng:[float, float]) -> None\nC++: virtual void GetCellValueRange(double rng[2])\n\n"},
  {"SetCellAlphaRange", PyvtkViewTheme_SetCellAlphaRange, METH_VARARGS,
   "SetCellAlphaRange(self, mn:float, mx:float) -> None\nC++: virtual void SetCellAlphaRange(double mn, double mx)\nSetCellAlphaRange(self, rng:[float, float]) -> None\nC++: virtual void SetCellAlphaRange(double rng[2])\n\n"},
  {"GetCellAlphaRange", PyvtkViewTheme_GetCellAlphaRange, METH_VARARGS,
   "GetCellAlphaRange(self) -> Pointer\nC++: virtual double *GetCellAlphaRange()\nGetCellAlphaRange(self, mn:float, mx:float) -> None\nC++: virtual void GetCellAlphaRange(double &mn, double &mx)\nGetCellAlphaRange(self, rng:[float, float]) -> None\nC++: virtual void GetCellAlphaRange(double rng[2])\n\n"},
  {"GetCellLookupTable", PyvtkViewTheme_GetCellLookupTable, METH_VARARGS,
   "GetCellLookupTable(self) -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetCellLookupTable()\n\nSet/Get the cell lookup table.\n"},
  {"SetCellLookupTable", PyvtkViewTheme_SetCellLookupTable, METH_VARARGS,
   "SetCellLookupTable(self, lut:vtkScalarsToColors) -> None\nC++: virtual void SetCellLookupTable(vtkScalarsToColors *lut)\n\n"},
  {"SetScaleCellLookupTable", PyvtkViewTheme_SetScaleCellLookupTable, METH_VARARGS,
   "SetScaleCellLookupTable(self, _arg:bool) -> None\nC++: virtual void SetScaleCellLookupTable(bool _arg)\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {"GetScaleCellLookupTable", PyvtkViewTheme_GetScaleCellLookupTable, METH_VARARGS,
   "GetScaleCellLookupTable(self) -> bool\nC++: virtual bool GetScaleCellLookupTable()\n\n"},
  {"ScaleCellLookupTableOn", PyvtkViewTheme_ScaleCellLookupTableOn, METH_VARARGS,
   "ScaleCellLookupTableOn(self) -> None\nC++: virtual void ScaleCellLookupTableOn()\n\n"},
  {"ScaleCellLookupTableOff", PyvtkViewTheme_ScaleCellLookupTableOff, METH_VARARGS,
   "ScaleCellLookupTableOff(self) -> None\nC++: virtual void ScaleCellLookupTableOff()\n\n"},
  {"SetOutlineColor", PyvtkViewTheme_SetOutlineColor, METH_VARARGS,
   "SetOutlineColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetOutlineColor(double _arg1, double _arg2,\n    double _arg3)\nSetOutlineColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOutlineColor(const double _arg[3])\n\nThe color of any outlines in the view.\n"},
  {"GetOutlineColor", PyvtkViewTheme_GetOutlineColor, METH_VARARGS,
   "GetOutlineColor(self) -> (float, float, float)\nC++: virtual double *GetOutlineColor()\n\n"},
  {"SetSelectedPointColor", PyvtkViewTheme_SetSelectedPointColor, METH_VARARGS,
   "SetSelectedPointColor(self, _arg1:float, _arg2:float, _arg3:float)\n     -> None\nC++: virtual void SetSelectedPointColor(double _arg1,\n    double _arg2, double _arg3)\nSetSelectedPointColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetSelectedPointColor(const double _arg[3])\n\nThe color of selected points or vertices.\n"},
  {"GetSelectedPointColor", PyvtkViewTheme_GetSelectedPointColor, METH_VARARGS,
   "GetSelectedPointColor(self) -> (float, float, float)\nC++: virtual double *GetSelectedPointColor()\n\n"},
  {"SetSelectedPointOpacity", PyvtkViewTheme_SetSelectedPointOpacity, METH_VARARGS,
   "SetSelectedPointOpacity(self, _arg:float) -> None\nC++: virtual void SetSelectedPointOpacity(double _arg)\n\n"},
  {"GetSelectedPointOpacity", PyvtkViewTheme_GetSelectedPointOpacity, METH_VARARGS,
   "GetSelectedPointOpacity(self) -> float\nC++: virtual double GetSelectedPointOpacity()\n\n"},
  {"SetSelectedCellColor", PyvtkViewTheme_SetSelectedCellColor, METH_VARARGS,
   "SetSelectedCellColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetSelectedCellColor(double _arg1, double _arg2,\n     double _arg3)\nSetSelectedCellColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetSelectedCellColor(const double _arg[3])\n\nThe color of selected cells or edges.\n"},
  {"GetSelectedCellColor", PyvtkViewTheme_GetSelectedCellColor, METH_VARARGS,
   "GetSelectedCellColor(self) -> (float, float, float)\nC++: virtual double *GetSelectedCellColor()\n\n"},
  {"SetSelectedCellOpacity", PyvtkViewTheme_SetSelectedCellOpacity, METH_VARARGS,
   "SetSelectedCellOpacity(self, _arg:float) -> None\nC++: virtual void SetSelectedCellOpacity(double _arg)\n\n"},
  {"GetSelectedCellOpacity", PyvtkViewTheme_GetSelectedCellOpacity, METH_VARARGS,
   "GetSelectedCellOpacity(self) -> float\nC++: virtual double GetSelectedCellOpacity()\n\n"},
  {"SetBackgroundColor", PyvtkViewTheme_SetBackgroundColor, METH_VARARGS,
   "SetBackgroundColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetBackgroundColor(double _arg1, double _arg2,\n    double _arg3)\nSetBackgroundColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetBackgroundColor(const double _arg[3])\n\nThe view background color.\n"},
  {"GetBackgroundColor", PyvtkViewTheme_GetBackgroundColor, METH_VARARGS,
   "GetBackgroundColor(self) -> (float, float, float)\nC++: virtual double *GetBackgroundColor()\n\n"},
  {"SetBackgroundColor2", PyvtkViewTheme_SetBackgroundColor2, METH_VARARGS,
   "SetBackgroundColor2(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetBackgroundColor2(double _arg1, double _arg2,\n    double _arg3)\nSetBackgroundColor2(self, _arg:(float, float, float)) -> None\nC++: virtual void SetBackgroundColor2(const double _arg[3])\n\nThe second background color (for gradients).\n"},
  {"GetBackgroundColor2", PyvtkViewTheme_GetBackgroundColor2, METH_VARARGS,
   "GetBackgroundColor2(self) -> (float, float, float)\nC++: virtual double *GetBackgroundColor2()\n\n"},
  {"SetPointTextProperty", PyvtkViewTheme_SetPointTextProperty, METH_VARARGS,
   "SetPointTextProperty(self, tprop:vtkTextProperty) -> None\nC++: virtual void SetPointTextProperty(vtkTextProperty *tprop)\n\nThe text property to use for labeling points/vertices.\n"},
  {"GetPointTextProperty", PyvtkViewTheme_GetPointTextProperty, METH_VARARGS,
   "GetPointTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetPointTextProperty()\n\n"},
  {"SetCellTextProperty", PyvtkViewTheme_SetCellTextProperty, METH_VARARGS,
   "SetCellTextProperty(self, tprop:vtkTextProperty) -> None\nC++: virtual void SetCellTextProperty(vtkTextProperty *tprop)\n\nThe text property to use for labeling edges/cells.\n"},
  {"GetCellTextProperty", PyvtkViewTheme_GetCellTextProperty, METH_VARARGS,
   "GetCellTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetCellTextProperty()\n\n"},
  {"SetVertexLabelColor", PyvtkViewTheme_SetVertexLabelColor, METH_VARARGS,
   "SetVertexLabelColor(self, r:float, g:float, b:float) -> None\nC++: virtual void SetVertexLabelColor(double r, double g,\n    double b)\nSetVertexLabelColor(self, c:[float, float, float]) -> None\nC++: virtual void SetVertexLabelColor(double c[3])\n\nThe color to use for labeling graph vertices. This is deprecated.\nUse GetPointTextProperty()->SetColor() instead.\n"},
  {"GetVertexLabelColor", PyvtkViewTheme_GetVertexLabelColor, METH_VARARGS,
   "GetVertexLabelColor(self) -> Pointer\nC++: virtual double *GetVertexLabelColor()\nGetVertexLabelColor(self, r:float, g:float, b:float) -> None\nC++: virtual void GetVertexLabelColor(double &r, double &g,\n    double &b)\nGetVertexLabelColor(self, c:[float, float, float]) -> None\nC++: virtual void GetVertexLabelColor(double c[3])\n\n"},
  {"SetEdgeLabelColor", PyvtkViewTheme_SetEdgeLabelColor, METH_VARARGS,
   "SetEdgeLabelColor(self, r:float, g:float, b:float) -> None\nC++: virtual void SetEdgeLabelColor(double r, double g, double b)\nSetEdgeLabelColor(self, c:[float, float, float]) -> None\nC++: virtual void SetEdgeLabelColor(double c[3])\n\nThe color to use for labeling graph edges. This is deprecated.\nUse GetCellTextProperty()->SetColor() instead.\n"},
  {"GetEdgeLabelColor", PyvtkViewTheme_GetEdgeLabelColor, METH_VARARGS,
   "GetEdgeLabelColor(self) -> Pointer\nC++: virtual double *GetEdgeLabelColor()\nGetEdgeLabelColor(self, r:float, g:float, b:float) -> None\nC++: virtual void GetEdgeLabelColor(double &r, double &g,\n    double &b)\nGetEdgeLabelColor(self, c:[float, float, float]) -> None\nC++: virtual void GetEdgeLabelColor(double c[3])\n\n"},
  {"CreateOceanTheme", PyvtkViewTheme_CreateOceanTheme, METH_VARARGS,
   "CreateOceanTheme() -> vtkViewTheme\nC++: static vtkViewTheme *CreateOceanTheme()\n\nConvenience methods for creating some default view themes. The\nreturn reference is reference-counted, so you will have to call\nDelete() on the reference when you are finished with it.\n"},
  {"CreateMellowTheme", PyvtkViewTheme_CreateMellowTheme, METH_VARARGS,
   "CreateMellowTheme() -> vtkViewTheme\nC++: static vtkViewTheme *CreateMellowTheme()\n\n"},
  {"CreateNeonTheme", PyvtkViewTheme_CreateNeonTheme, METH_VARARGS,
   "CreateNeonTheme() -> vtkViewTheme\nC++: static vtkViewTheme *CreateNeonTheme()\n\n"},
  {"LookupMatchesPointTheme", PyvtkViewTheme_LookupMatchesPointTheme, METH_VARARGS,
   "LookupMatchesPointTheme(self, s2c:vtkScalarsToColors) -> bool\nC++: bool LookupMatchesPointTheme(vtkScalarsToColors *s2c)\n\nWhether a given lookup table matches the point or cell theme of\nthis theme.\n"},
  {"LookupMatchesCellTheme", PyvtkViewTheme_LookupMatchesCellTheme, METH_VARARGS,
   "LookupMatchesCellTheme(self, s2c:vtkScalarsToColors) -> bool\nC++: bool LookupMatchesCellTheme(vtkScalarsToColors *s2c)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkViewTheme_Doc =
  "vtkViewTheme - Sets theme colors for a graphical view.\n\n"
  "Superclass: vtkObject\n\n"
  "This may be set on any subclass of vtkView.  The view class will\n"
  "attempt to use the values set in the theme to customize the view. \n"
  "Views will not generally use every aspect of the theme. NOTICE: This\n"
  "class will be deprecated in favor of a more robust solution based on\n"
  "style sheets.  Do not become overly-dependent on the functionality of\n"
  "themes.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkViewTheme_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsCore.vtkViewTheme", // tp_name
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
  PyvtkViewTheme_Doc, // tp_doc
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

static vtkObjectBase *PyvtkViewTheme_StaticNew()
{
  return vtkViewTheme::New();
}

PyObject *PyvtkViewTheme_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkViewTheme_Type, PyvtkViewTheme_Methods,
    "vtkViewTheme",
 &PyvtkViewTheme_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkViewTheme(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkViewTheme_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkViewTheme", o) != 0)
  {
    Py_DECREF(o);
  }

}

