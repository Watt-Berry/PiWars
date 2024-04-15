// python wrapper for vtkTextProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTextProperty.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextProperty(PyObject *dict); }
extern "C" { PyObject *PyvtkTextProperty_ClassNew(); }


static PyObject *
PyvtkTextProperty_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextProperty *tempr = vtkTextProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextProperty::NewInstance());

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
PyvtkTextProperty_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTextProperty::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTextProperty::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

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
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextProperty::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkTextProperty::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextProperty_SetColor_s1(self, args);
    case 1:
      return PyvtkTextProperty_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkTextProperty_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkTextProperty::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkTextProperty::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMinValue() :
      op->vtkTextProperty::GetOpacityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMaxValue() :
      op->vtkTextProperty::GetOpacityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkTextProperty::GetOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

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
      op->vtkTextProperty::SetBackgroundColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

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
      op->vtkTextProperty::SetBackgroundColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextProperty_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkTextProperty_SetBackgroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return nullptr;
}


static PyObject *
PyvtkTextProperty_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor() :
      op->vtkTextProperty::GetBackgroundColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetBackgroundOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundOpacity(temp0);
    }
    else
    {
      op->vtkTextProperty::SetBackgroundOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetBackgroundOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacityMinValue() :
      op->vtkTextProperty::GetBackgroundOpacityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetBackgroundOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacityMaxValue() :
      op->vtkTextProperty::GetBackgroundOpacityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetBackgroundOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacity() :
      op->vtkTextProperty::GetBackgroundOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetBackgroundRGBA_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetBackgroundRGBA(temp0);
    }
    else
    {
      op->vtkTextProperty::SetBackgroundRGBA(temp0);
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
PyvtkTextProperty_SetBackgroundRGBA_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundRGBA(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkTextProperty::SetBackgroundRGBA(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetBackgroundRGBA(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkTextProperty_SetBackgroundRGBA_s1(self, args);
    case 4:
      return PyvtkTextProperty_SetBackgroundRGBA_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundRGBA");
  return nullptr;
}


static PyObject *
PyvtkTextProperty_GetBackgroundRGBA_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBackgroundRGBA(temp0);
    }
    else
    {
      op->vtkTextProperty::GetBackgroundRGBA(temp0);
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
PyvtkTextProperty_GetBackgroundRGBA_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->GetBackgroundRGBA(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkTextProperty::GetBackgroundRGBA(temp0, temp1, temp2, temp3);
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
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_GetBackgroundRGBA(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkTextProperty_GetBackgroundRGBA_s1(self, args);
    case 4:
      return PyvtkTextProperty_GetBackgroundRGBA_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBackgroundRGBA");
  return nullptr;
}


static PyObject *
PyvtkTextProperty_SetFrameColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

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
      op->SetFrameColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextProperty::SetFrameColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetFrameColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetFrameColor(temp0);
    }
    else
    {
      op->vtkTextProperty::SetFrameColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetFrameColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextProperty_SetFrameColor_s1(self, args);
    case 1:
      return PyvtkTextProperty_SetFrameColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFrameColor");
  return nullptr;
}


static PyObject *
PyvtkTextProperty_GetFrameColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFrameColor() :
      op->vtkTextProperty::GetFrameColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrame(temp0);
    }
    else
    {
      op->vtkTextProperty::SetFrame(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrame() :
      op->vtkTextProperty::GetFrame());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_FrameOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrameOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FrameOn();
    }
    else
    {
      op->vtkTextProperty::FrameOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_FrameOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrameOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FrameOff();
    }
    else
    {
      op->vtkTextProperty::FrameOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFrameWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrameWidth(temp0);
    }
    else
    {
      op->vtkTextProperty::SetFrameWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFrameWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrameWidthMinValue() :
      op->vtkTextProperty::GetFrameWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFrameWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrameWidthMaxValue() :
      op->vtkTextProperty::GetFrameWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFrameWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrameWidth() :
      op->vtkTextProperty::GetFrameWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontFamilyAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFamilyAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFontFamilyAsString() :
      op->vtkTextProperty::GetFontFamilyAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_GetFontFamilyAsString_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFontFamilyAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkTextProperty::GetFontFamilyAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_GetFontFamilyAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTextProperty_GetFontFamilyAsString_s1(self, args);
    case 1:
      return PyvtkTextProperty_GetFontFamilyAsString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetFontFamilyAsString");
  return nullptr;
}


static PyObject *
PyvtkTextProperty_SetFontFamilyAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFamilyAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFontFamilyAsString(temp0);
    }
    else
    {
      op->vtkTextProperty::SetFontFamilyAsString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFontFamily(temp0);
    }
    else
    {
      op->vtkTextProperty::SetFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFontFamily() :
      op->vtkTextProperty::GetFontFamily());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontFamilyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFamilyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFontFamilyMinValue() :
      op->vtkTextProperty::GetFontFamilyMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontFamilyToArial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFamilyToArial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFontFamilyToArial();
    }
    else
    {
      op->vtkTextProperty::SetFontFamilyToArial();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontFamilyToCourier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFamilyToCourier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFontFamilyToCourier();
    }
    else
    {
      op->vtkTextProperty::SetFontFamilyToCourier();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontFamilyToTimes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFamilyToTimes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFontFamilyToTimes();
    }
    else
    {
      op->vtkTextProperty::SetFontFamilyToTimes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontFamilyFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFontFamilyFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextProperty::GetFontFamilyFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFontFile() :
      op->vtkTextProperty::GetFontFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFontFile(temp0);
    }
    else
    {
      op->vtkTextProperty::SetFontFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFontSize(temp0);
    }
    else
    {
      op->vtkTextProperty::SetFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFontSizeMinValue() :
      op->vtkTextProperty::GetFontSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFontSizeMaxValue() :
      op->vtkTextProperty::GetFontSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFontSize() :
      op->vtkTextProperty::GetFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBold(temp0);
    }
    else
    {
      op->vtkTextProperty::SetBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBold() :
      op->vtkTextProperty::GetBold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_BoldOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoldOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoldOn();
    }
    else
    {
      op->vtkTextProperty::BoldOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_BoldOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoldOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoldOff();
    }
    else
    {
      op->vtkTextProperty::BoldOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetItalic(temp0);
    }
    else
    {
      op->vtkTextProperty::SetItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetItalic() :
      op->vtkTextProperty::GetItalic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_ItalicOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ItalicOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ItalicOn();
    }
    else
    {
      op->vtkTextProperty::ItalicOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_ItalicOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ItalicOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ItalicOff();
    }
    else
    {
      op->vtkTextProperty::ItalicOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShadow(temp0);
    }
    else
    {
      op->vtkTextProperty::SetShadow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShadow() :
      op->vtkTextProperty::GetShadow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_ShadowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShadowOn();
    }
    else
    {
      op->vtkTextProperty::ShadowOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_ShadowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShadowOff();
    }
    else
    {
      op->vtkTextProperty::ShadowOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetShadowOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadowOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetShadowOffset(temp0, temp1);
    }
    else
    {
      op->vtkTextProperty::SetShadowOffset(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetShadowOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadowOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetShadowOffset(temp0);
    }
    else
    {
      op->vtkTextProperty::SetShadowOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetShadowOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTextProperty_SetShadowOffset_s1(self, args);
    case 1:
      return PyvtkTextProperty_SetShadowOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetShadowOffset");
  return nullptr;
}


static PyObject *
PyvtkTextProperty_GetShadowOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadowOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetShadowOffset() :
      op->vtkTextProperty::GetShadowOffset());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetShadowColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadowColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

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
      op->GetShadowColor(temp0);
    }
    else
    {
      op->vtkTextProperty::GetShadowColor(temp0);
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
PyvtkTextProperty_SetJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetJustification(temp0);
    }
    else
    {
      op->vtkTextProperty::SetJustification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetJustificationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJustificationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJustificationMinValue() :
      op->vtkTextProperty::GetJustificationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetJustificationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJustificationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJustificationMaxValue() :
      op->vtkTextProperty::GetJustificationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJustification() :
      op->vtkTextProperty::GetJustification());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetJustificationToLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJustificationToLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetJustificationToLeft();
    }
    else
    {
      op->vtkTextProperty::SetJustificationToLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetJustificationToCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJustificationToCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetJustificationToCentered();
    }
    else
    {
      op->vtkTextProperty::SetJustificationToCentered();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetJustificationToRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJustificationToRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetJustificationToRight();
    }
    else
    {
      op->vtkTextProperty::SetJustificationToRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetJustificationAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJustificationAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetJustificationAsString() :
      op->vtkTextProperty::GetJustificationAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetVerticalJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalJustification(temp0);
    }
    else
    {
      op->vtkTextProperty::SetVerticalJustification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetVerticalJustificationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalJustificationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalJustificationMinValue() :
      op->vtkTextProperty::GetVerticalJustificationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetVerticalJustificationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalJustificationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalJustificationMaxValue() :
      op->vtkTextProperty::GetVerticalJustificationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetVerticalJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalJustification() :
      op->vtkTextProperty::GetVerticalJustification());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetVerticalJustificationToBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalJustificationToBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalJustificationToBottom();
    }
    else
    {
      op->vtkTextProperty::SetVerticalJustificationToBottom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetVerticalJustificationToCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalJustificationToCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalJustificationToCentered();
    }
    else
    {
      op->vtkTextProperty::SetVerticalJustificationToCentered();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetVerticalJustificationToTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalJustificationToTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalJustificationToTop();
    }
    else
    {
      op->vtkTextProperty::SetVerticalJustificationToTop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetVerticalJustificationAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalJustificationAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVerticalJustificationAsString() :
      op->vtkTextProperty::GetVerticalJustificationAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetUseTightBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTightBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseTightBoundingBox(temp0);
    }
    else
    {
      op->vtkTextProperty::SetUseTightBoundingBox(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetUseTightBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTightBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseTightBoundingBox() :
      op->vtkTextProperty::GetUseTightBoundingBox());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_UseTightBoundingBoxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTightBoundingBoxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseTightBoundingBoxOn();
    }
    else
    {
      op->vtkTextProperty::UseTightBoundingBoxOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_UseTightBoundingBoxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTightBoundingBoxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseTightBoundingBoxOff();
    }
    else
    {
      op->vtkTextProperty::UseTightBoundingBoxOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkTextProperty::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkTextProperty::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetLineSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineSpacing(temp0);
    }
    else
    {
      op->vtkTextProperty::SetLineSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetLineSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineSpacing() :
      op->vtkTextProperty::GetLineSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetLineOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineOffset(temp0);
    }
    else
    {
      op->vtkTextProperty::SetLineOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetLineOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineOffset() :
      op->vtkTextProperty::GetLineOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetCellOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellOffset(temp0);
    }
    else
    {
      op->vtkTextProperty::SetCellOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetCellOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCellOffset() :
      op->vtkTextProperty::GetCellOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetInteriorLinesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteriorLinesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteriorLinesVisibility(temp0);
    }
    else
    {
      op->vtkTextProperty::SetInteriorLinesVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetInteriorLinesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteriorLinesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInteriorLinesVisibility() :
      op->vtkTextProperty::GetInteriorLinesVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetInteriorLinesWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteriorLinesWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteriorLinesWidth(temp0);
    }
    else
    {
      op->vtkTextProperty::SetInteriorLinesWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_GetInteriorLinesWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteriorLinesWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteriorLinesWidth() :
      op->vtkTextProperty::GetInteriorLinesWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_SetInteriorLinesColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteriorLinesColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

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
      op->SetInteriorLinesColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextProperty::SetInteriorLinesColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetInteriorLinesColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteriorLinesColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetInteriorLinesColor(temp0);
    }
    else
    {
      op->vtkTextProperty::SetInteriorLinesColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextProperty_SetInteriorLinesColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextProperty_SetInteriorLinesColor_s1(self, args);
    case 1:
      return PyvtkTextProperty_SetInteriorLinesColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInteriorLinesColor");
  return nullptr;
}


static PyObject *
PyvtkTextProperty_GetInteriorLinesColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteriorLinesColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetInteriorLinesColor() :
      op->vtkTextProperty::GetInteriorLinesColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextProperty_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextProperty *op = static_cast<vtkTextProperty *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkTextProperty::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTextProperty_Methods[] = {
  {"IsTypeOf", PyvtkTextProperty_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextProperty_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextProperty_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTextProperty\nC++: static vtkTextProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextProperty_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTextProperty\nC++: vtkTextProperty *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTextProperty_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTextProperty_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetColor", PyvtkTextProperty_SetColor, METH_VARARGS,
   "SetColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetColor(double _arg1, double _arg2,\n    double _arg3)\nSetColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetColor(const double _arg[3])\n\nSet the color of the text.\n"},
  {"GetColor", PyvtkTextProperty_GetColor, METH_VARARGS,
   "GetColor(self) -> (float, float, float)\nC++: virtual double *GetColor()\n\n"},
  {"SetOpacity", PyvtkTextProperty_SetOpacity, METH_VARARGS,
   "SetOpacity(self, _arg:float) -> None\nC++: virtual void SetOpacity(double _arg)\n\nSet/Get the text's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {"GetOpacityMinValue", PyvtkTextProperty_GetOpacityMinValue, METH_VARARGS,
   "GetOpacityMinValue(self) -> float\nC++: virtual double GetOpacityMinValue()\n\n"},
  {"GetOpacityMaxValue", PyvtkTextProperty_GetOpacityMaxValue, METH_VARARGS,
   "GetOpacityMaxValue(self) -> float\nC++: virtual double GetOpacityMaxValue()\n\n"},
  {"GetOpacity", PyvtkTextProperty_GetOpacity, METH_VARARGS,
   "GetOpacity(self) -> float\nC++: virtual double GetOpacity()\n\n"},
  {"SetBackgroundColor", PyvtkTextProperty_SetBackgroundColor, METH_VARARGS,
   "SetBackgroundColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetBackgroundColor(double _arg1, double _arg2,\n    double _arg3)\nSetBackgroundColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetBackgroundColor(const double _arg[3])\n\nThe background color.\n"},
  {"GetBackgroundColor", PyvtkTextProperty_GetBackgroundColor, METH_VARARGS,
   "GetBackgroundColor(self) -> (float, float, float)\nC++: virtual double *GetBackgroundColor()\n\n"},
  {"SetBackgroundOpacity", PyvtkTextProperty_SetBackgroundOpacity, METH_VARARGS,
   "SetBackgroundOpacity(self, _arg:float) -> None\nC++: virtual void SetBackgroundOpacity(double _arg)\n\nThe background opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {"GetBackgroundOpacityMinValue", PyvtkTextProperty_GetBackgroundOpacityMinValue, METH_VARARGS,
   "GetBackgroundOpacityMinValue(self) -> float\nC++: virtual double GetBackgroundOpacityMinValue()\n\n"},
  {"GetBackgroundOpacityMaxValue", PyvtkTextProperty_GetBackgroundOpacityMaxValue, METH_VARARGS,
   "GetBackgroundOpacityMaxValue(self) -> float\nC++: virtual double GetBackgroundOpacityMaxValue()\n\n"},
  {"GetBackgroundOpacity", PyvtkTextProperty_GetBackgroundOpacity, METH_VARARGS,
   "GetBackgroundOpacity(self) -> float\nC++: virtual double GetBackgroundOpacity()\n\n"},
  {"SetBackgroundRGBA", PyvtkTextProperty_SetBackgroundRGBA, METH_VARARGS,
   "SetBackgroundRGBA(self, rgba:[float, float, float, float]) -> None\nC++: void SetBackgroundRGBA(double rgba[4])\nSetBackgroundRGBA(self, r:float, g:float, b:float, a:float)\n    -> None\nC++: void SetBackgroundRGBA(double r, double g, double b,\n    double a)\n\nConvenience method to set the background color and the opacity at\nonce\n"},
  {"GetBackgroundRGBA", PyvtkTextProperty_GetBackgroundRGBA, METH_VARARGS,
   "GetBackgroundRGBA(self, rgba:[float, float, float, float]) -> None\nC++: void GetBackgroundRGBA(double rgba[4])\nGetBackgroundRGBA(self, r:float, g:float, b:float, a:float)\n    -> None\nC++: void GetBackgroundRGBA(double &r, double &g, double &b,\n    double &a)\n\nConvenience method to get the background color and the opacity at\nonce\n"},
  {"SetFrameColor", PyvtkTextProperty_SetFrameColor, METH_VARARGS,
   "SetFrameColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetFrameColor(double _arg1, double _arg2,\n    double _arg3)\nSetFrameColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetFrameColor(const double _arg[3])\n\nThe frame color.\n"},
  {"GetFrameColor", PyvtkTextProperty_GetFrameColor, METH_VARARGS,
   "GetFrameColor(self) -> (float, float, float)\nC++: virtual double *GetFrameColor()\n\n"},
  {"SetFrame", PyvtkTextProperty_SetFrame, METH_VARARGS,
   "SetFrame(self, _arg:int) -> None\nC++: virtual void SetFrame(vtkTypeBool _arg)\n\nEnable/disable text frame.\n"},
  {"GetFrame", PyvtkTextProperty_GetFrame, METH_VARARGS,
   "GetFrame(self) -> int\nC++: virtual vtkTypeBool GetFrame()\n\n"},
  {"FrameOn", PyvtkTextProperty_FrameOn, METH_VARARGS,
   "FrameOn(self) -> None\nC++: virtual void FrameOn()\n\n"},
  {"FrameOff", PyvtkTextProperty_FrameOff, METH_VARARGS,
   "FrameOff(self) -> None\nC++: virtual void FrameOff()\n\n"},
  {"SetFrameWidth", PyvtkTextProperty_SetFrameWidth, METH_VARARGS,
   "SetFrameWidth(self, _arg:int) -> None\nC++: virtual void SetFrameWidth(int _arg)\n\nSet/Get the width of the frame. The width is expressed in pixels.\nThe default is 1 pixel.\n"},
  {"GetFrameWidthMinValue", PyvtkTextProperty_GetFrameWidthMinValue, METH_VARARGS,
   "GetFrameWidthMinValue(self) -> int\nC++: virtual int GetFrameWidthMinValue()\n\n"},
  {"GetFrameWidthMaxValue", PyvtkTextProperty_GetFrameWidthMaxValue, METH_VARARGS,
   "GetFrameWidthMaxValue(self) -> int\nC++: virtual int GetFrameWidthMaxValue()\n\n"},
  {"GetFrameWidth", PyvtkTextProperty_GetFrameWidth, METH_VARARGS,
   "GetFrameWidth(self) -> int\nC++: virtual int GetFrameWidth()\n\n"},
  {"GetFontFamilyAsString", PyvtkTextProperty_GetFontFamilyAsString, METH_VARARGS,
   "GetFontFamilyAsString(self) -> str\nC++: virtual char *GetFontFamilyAsString()\nGetFontFamilyAsString(f:int) -> str\nC++: static const char *GetFontFamilyAsString(int f)\n\nSet/Get the font family. Supports legacy three font family\nsystem. If the symbolic constant VTK_FONT_FILE is returned by\nGetFontFamily(), the string returned by GetFontFile() must be an\nabsolute filepath to a local FreeType compatible font.\n"},
  {"SetFontFamilyAsString", PyvtkTextProperty_SetFontFamilyAsString, METH_VARARGS,
   "SetFontFamilyAsString(self, _arg:str) -> None\nC++: virtual void SetFontFamilyAsString(const char *_arg)\n\n"},
  {"SetFontFamily", PyvtkTextProperty_SetFontFamily, METH_VARARGS,
   "SetFontFamily(self, t:int) -> None\nC++: void SetFontFamily(int t)\n\n"},
  {"GetFontFamily", PyvtkTextProperty_GetFontFamily, METH_VARARGS,
   "GetFontFamily(self) -> int\nC++: int GetFontFamily()\n\n"},
  {"GetFontFamilyMinValue", PyvtkTextProperty_GetFontFamilyMinValue, METH_VARARGS,
   "GetFontFamilyMinValue(self) -> int\nC++: int GetFontFamilyMinValue()\n\n"},
  {"SetFontFamilyToArial", PyvtkTextProperty_SetFontFamilyToArial, METH_VARARGS,
   "SetFontFamilyToArial(self) -> None\nC++: void SetFontFamilyToArial()\n\n"},
  {"SetFontFamilyToCourier", PyvtkTextProperty_SetFontFamilyToCourier, METH_VARARGS,
   "SetFontFamilyToCourier(self) -> None\nC++: void SetFontFamilyToCourier()\n\n"},
  {"SetFontFamilyToTimes", PyvtkTextProperty_SetFontFamilyToTimes, METH_VARARGS,
   "SetFontFamilyToTimes(self) -> None\nC++: void SetFontFamilyToTimes()\n\n"},
  {"GetFontFamilyFromString", PyvtkTextProperty_GetFontFamilyFromString, METH_VARARGS,
   "GetFontFamilyFromString(f:str) -> int\nC++: static int GetFontFamilyFromString(const char *f)\n\n"},
  {"GetFontFile", PyvtkTextProperty_GetFontFile, METH_VARARGS,
   "GetFontFile(self) -> str\nC++: virtual char *GetFontFile()\n\nThe absolute filepath to a local file containing a\nfreetype-readable font if GetFontFamily() return VTK_FONT_FILE.\nThe result is undefined for other values of GetFontFamily().\n"},
  {"SetFontFile", PyvtkTextProperty_SetFontFile, METH_VARARGS,
   "SetFontFile(self, _arg:str) -> None\nC++: virtual void SetFontFile(const char *_arg)\n\n"},
  {"SetFontSize", PyvtkTextProperty_SetFontSize, METH_VARARGS,
   "SetFontSize(self, _arg:int) -> None\nC++: virtual void SetFontSize(int _arg)\n\nSet/Get the font size (in points).\n"},
  {"GetFontSizeMinValue", PyvtkTextProperty_GetFontSizeMinValue, METH_VARARGS,
   "GetFontSizeMinValue(self) -> int\nC++: virtual int GetFontSizeMinValue()\n\n"},
  {"GetFontSizeMaxValue", PyvtkTextProperty_GetFontSizeMaxValue, METH_VARARGS,
   "GetFontSizeMaxValue(self) -> int\nC++: virtual int GetFontSizeMaxValue()\n\n"},
  {"GetFontSize", PyvtkTextProperty_GetFontSize, METH_VARARGS,
   "GetFontSize(self) -> int\nC++: virtual int GetFontSize()\n\n"},
  {"SetBold", PyvtkTextProperty_SetBold, METH_VARARGS,
   "SetBold(self, _arg:int) -> None\nC++: virtual void SetBold(vtkTypeBool _arg)\n\nEnable/disable text bolding.\n"},
  {"GetBold", PyvtkTextProperty_GetBold, METH_VARARGS,
   "GetBold(self) -> int\nC++: virtual vtkTypeBool GetBold()\n\n"},
  {"BoldOn", PyvtkTextProperty_BoldOn, METH_VARARGS,
   "BoldOn(self) -> None\nC++: virtual void BoldOn()\n\n"},
  {"BoldOff", PyvtkTextProperty_BoldOff, METH_VARARGS,
   "BoldOff(self) -> None\nC++: virtual void BoldOff()\n\n"},
  {"SetItalic", PyvtkTextProperty_SetItalic, METH_VARARGS,
   "SetItalic(self, _arg:int) -> None\nC++: virtual void SetItalic(vtkTypeBool _arg)\n\nEnable/disable text italic.\n"},
  {"GetItalic", PyvtkTextProperty_GetItalic, METH_VARARGS,
   "GetItalic(self) -> int\nC++: virtual vtkTypeBool GetItalic()\n\n"},
  {"ItalicOn", PyvtkTextProperty_ItalicOn, METH_VARARGS,
   "ItalicOn(self) -> None\nC++: virtual void ItalicOn()\n\n"},
  {"ItalicOff", PyvtkTextProperty_ItalicOff, METH_VARARGS,
   "ItalicOff(self) -> None\nC++: virtual void ItalicOff()\n\n"},
  {"SetShadow", PyvtkTextProperty_SetShadow, METH_VARARGS,
   "SetShadow(self, _arg:int) -> None\nC++: virtual void SetShadow(vtkTypeBool _arg)\n\nEnable/disable text shadow.\n"},
  {"GetShadow", PyvtkTextProperty_GetShadow, METH_VARARGS,
   "GetShadow(self) -> int\nC++: virtual vtkTypeBool GetShadow()\n\n"},
  {"ShadowOn", PyvtkTextProperty_ShadowOn, METH_VARARGS,
   "ShadowOn(self) -> None\nC++: virtual void ShadowOn()\n\n"},
  {"ShadowOff", PyvtkTextProperty_ShadowOff, METH_VARARGS,
   "ShadowOff(self) -> None\nC++: virtual void ShadowOff()\n\n"},
  {"SetShadowOffset", PyvtkTextProperty_SetShadowOffset, METH_VARARGS,
   "SetShadowOffset(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetShadowOffset(int _arg1, int _arg2)\nSetShadowOffset(self, _arg:(int, int)) -> None\nC++: void SetShadowOffset(const int _arg[2])\n\nSet/Get the shadow offset, i.e. the distance from the text to its\nshadow, in the same unit as FontSize.\n"},
  {"GetShadowOffset", PyvtkTextProperty_GetShadowOffset, METH_VARARGS,
   "GetShadowOffset(self) -> (int, int)\nC++: virtual int *GetShadowOffset()\n\n"},
  {"GetShadowColor", PyvtkTextProperty_GetShadowColor, METH_VARARGS,
   "GetShadowColor(self, color:[float, float, float]) -> None\nC++: void GetShadowColor(double color[3])\n\nGet the shadow color. It is computed from the Color ivar\n"},
  {"SetJustification", PyvtkTextProperty_SetJustification, METH_VARARGS,
   "SetJustification(self, _arg:int) -> None\nC++: virtual void SetJustification(int _arg)\n\nSet/Get the horizontal justification to left (default), centered,\nor right.\n"},
  {"GetJustificationMinValue", PyvtkTextProperty_GetJustificationMinValue, METH_VARARGS,
   "GetJustificationMinValue(self) -> int\nC++: virtual int GetJustificationMinValue()\n\n"},
  {"GetJustificationMaxValue", PyvtkTextProperty_GetJustificationMaxValue, METH_VARARGS,
   "GetJustificationMaxValue(self) -> int\nC++: virtual int GetJustificationMaxValue()\n\n"},
  {"GetJustification", PyvtkTextProperty_GetJustification, METH_VARARGS,
   "GetJustification(self) -> int\nC++: virtual int GetJustification()\n\n"},
  {"SetJustificationToLeft", PyvtkTextProperty_SetJustificationToLeft, METH_VARARGS,
   "SetJustificationToLeft(self) -> None\nC++: void SetJustificationToLeft()\n\n"},
  {"SetJustificationToCentered", PyvtkTextProperty_SetJustificationToCentered, METH_VARARGS,
   "SetJustificationToCentered(self) -> None\nC++: void SetJustificationToCentered()\n\n"},
  {"SetJustificationToRight", PyvtkTextProperty_SetJustificationToRight, METH_VARARGS,
   "SetJustificationToRight(self) -> None\nC++: void SetJustificationToRight()\n\n"},
  {"GetJustificationAsString", PyvtkTextProperty_GetJustificationAsString, METH_VARARGS,
   "GetJustificationAsString(self) -> str\nC++: const char *GetJustificationAsString()\n\n"},
  {"SetVerticalJustification", PyvtkTextProperty_SetVerticalJustification, METH_VARARGS,
   "SetVerticalJustification(self, _arg:int) -> None\nC++: virtual void SetVerticalJustification(int _arg)\n\nSet/Get the vertical justification to bottom (default), middle,\nor top.\n"},
  {"GetVerticalJustificationMinValue", PyvtkTextProperty_GetVerticalJustificationMinValue, METH_VARARGS,
   "GetVerticalJustificationMinValue(self) -> int\nC++: virtual int GetVerticalJustificationMinValue()\n\n"},
  {"GetVerticalJustificationMaxValue", PyvtkTextProperty_GetVerticalJustificationMaxValue, METH_VARARGS,
   "GetVerticalJustificationMaxValue(self) -> int\nC++: virtual int GetVerticalJustificationMaxValue()\n\n"},
  {"GetVerticalJustification", PyvtkTextProperty_GetVerticalJustification, METH_VARARGS,
   "GetVerticalJustification(self) -> int\nC++: virtual int GetVerticalJustification()\n\n"},
  {"SetVerticalJustificationToBottom", PyvtkTextProperty_SetVerticalJustificationToBottom, METH_VARARGS,
   "SetVerticalJustificationToBottom(self) -> None\nC++: void SetVerticalJustificationToBottom()\n\n"},
  {"SetVerticalJustificationToCentered", PyvtkTextProperty_SetVerticalJustificationToCentered, METH_VARARGS,
   "SetVerticalJustificationToCentered(self) -> None\nC++: void SetVerticalJustificationToCentered()\n\n"},
  {"SetVerticalJustificationToTop", PyvtkTextProperty_SetVerticalJustificationToTop, METH_VARARGS,
   "SetVerticalJustificationToTop(self) -> None\nC++: void SetVerticalJustificationToTop()\n\n"},
  {"GetVerticalJustificationAsString", PyvtkTextProperty_GetVerticalJustificationAsString, METH_VARARGS,
   "GetVerticalJustificationAsString(self) -> str\nC++: const char *GetVerticalJustificationAsString()\n\n"},
  {"SetUseTightBoundingBox", PyvtkTextProperty_SetUseTightBoundingBox, METH_VARARGS,
   "SetUseTightBoundingBox(self, _arg:int) -> None\nC++: virtual void SetUseTightBoundingBox(vtkTypeBool _arg)\n\nIf this property is on, text is aligned to drawn pixels not to\nfont metrix. If the text does not include descents, the bounding\nbox will not extend below the baseline. This option can be used\nto get centered labels. It does not work well if the string\nchanges as the string position will move around.\n"},
  {"GetUseTightBoundingBox", PyvtkTextProperty_GetUseTightBoundingBox, METH_VARARGS,
   "GetUseTightBoundingBox(self) -> int\nC++: virtual vtkTypeBool GetUseTightBoundingBox()\n\n"},
  {"UseTightBoundingBoxOn", PyvtkTextProperty_UseTightBoundingBoxOn, METH_VARARGS,
   "UseTightBoundingBoxOn(self) -> None\nC++: virtual void UseTightBoundingBoxOn()\n\n"},
  {"UseTightBoundingBoxOff", PyvtkTextProperty_UseTightBoundingBoxOff, METH_VARARGS,
   "UseTightBoundingBoxOff(self) -> None\nC++: virtual void UseTightBoundingBoxOff()\n\n"},
  {"SetOrientation", PyvtkTextProperty_SetOrientation, METH_VARARGS,
   "SetOrientation(self, _arg:float) -> None\nC++: virtual void SetOrientation(double _arg)\n\nSet/Get the text's orientation (in degrees).\n"},
  {"GetOrientation", PyvtkTextProperty_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> float\nC++: virtual double GetOrientation()\n\n"},
  {"SetLineSpacing", PyvtkTextProperty_SetLineSpacing, METH_VARARGS,
   "SetLineSpacing(self, _arg:float) -> None\nC++: virtual void SetLineSpacing(double _arg)\n\nSet/Get the (extra) spacing between lines, expressed as a text\nheight multiplication factor.\n"},
  {"GetLineSpacing", PyvtkTextProperty_GetLineSpacing, METH_VARARGS,
   "GetLineSpacing(self) -> float\nC++: virtual double GetLineSpacing()\n\n"},
  {"SetLineOffset", PyvtkTextProperty_SetLineOffset, METH_VARARGS,
   "SetLineOffset(self, _arg:float) -> None\nC++: virtual void SetLineOffset(double _arg)\n\nSet/Get the vertical offset (measured in pixels).\n"},
  {"GetLineOffset", PyvtkTextProperty_GetLineOffset, METH_VARARGS,
   "GetLineOffset(self) -> float\nC++: virtual double GetLineOffset()\n\n"},
  {"SetCellOffset", PyvtkTextProperty_SetCellOffset, METH_VARARGS,
   "SetCellOffset(self, _arg:float) -> None\nC++: virtual void SetCellOffset(double _arg)\n\nSet/Get the horizontal offset between cells. Only used by\nMatplotlibMathTextUtilities\n"},
  {"GetCellOffset", PyvtkTextProperty_GetCellOffset, METH_VARARGS,
   "GetCellOffset(self) -> float\nC++: virtual double GetCellOffset()\n\n"},
  {"SetInteriorLinesVisibility", PyvtkTextProperty_SetInteriorLinesVisibility, METH_VARARGS,
   "SetInteriorLinesVisibility(self, _arg:bool) -> None\nC++: virtual void SetInteriorLinesVisibility(bool _arg)\n\nSet/Get the visibility of the interior lines between cells.\nDefault is false.\n"},
  {"GetInteriorLinesVisibility", PyvtkTextProperty_GetInteriorLinesVisibility, METH_VARARGS,
   "GetInteriorLinesVisibility(self) -> bool\nC++: virtual bool GetInteriorLinesVisibility()\n\n"},
  {"SetInteriorLinesWidth", PyvtkTextProperty_SetInteriorLinesWidth, METH_VARARGS,
   "SetInteriorLinesWidth(self, _arg:int) -> None\nC++: virtual void SetInteriorLinesWidth(int _arg)\n\nSet the width (in pixels) of the interior lines between cells.\nDefault is 1.\n"},
  {"GetInteriorLinesWidth", PyvtkTextProperty_GetInteriorLinesWidth, METH_VARARGS,
   "GetInteriorLinesWidth(self) -> int\nC++: virtual int GetInteriorLinesWidth()\n\n"},
  {"SetInteriorLinesColor", PyvtkTextProperty_SetInteriorLinesColor, METH_VARARGS,
   "SetInteriorLinesColor(self, _arg1:float, _arg2:float, _arg3:float)\n     -> None\nC++: virtual void SetInteriorLinesColor(double _arg1,\n    double _arg2, double _arg3)\nSetInteriorLinesColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetInteriorLinesColor(const double _arg[3])\n\nSet the color of the interior lines between cells. Default is\nblack (0.0, 0.0, 0.0).\n"},
  {"GetInteriorLinesColor", PyvtkTextProperty_GetInteriorLinesColor, METH_VARARGS,
   "GetInteriorLinesColor(self) -> (float, float, float)\nC++: virtual double *GetInteriorLinesColor()\n\n"},
  {"ShallowCopy", PyvtkTextProperty_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, tprop:vtkTextProperty) -> None\nC++: void ShallowCopy(vtkTextProperty *tprop)\n\nShallow copy of a text property.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTextProperty_Doc =
  "vtkTextProperty - represent text properties.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkTextProperty is an object that represents text properties. The\n"
  "primary properties that can be set are color, opacity, font size,\n"
  "font family horizontal and vertical justification, bold/italic/shadow\n"
  "styles.\n"
  "@sa\n"
  "vtkTextMapper vtkTextActor vtkLegendBoxActor vtkCaptionActor2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTextProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkTextProperty", // tp_name
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
  PyvtkTextProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextProperty_StaticNew()
{
  return vtkTextProperty::New();
}

PyObject *PyvtkTextProperty_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTextProperty_Type, PyvtkTextProperty_Methods,
    "vtkTextProperty",
 &PyvtkTextProperty_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

