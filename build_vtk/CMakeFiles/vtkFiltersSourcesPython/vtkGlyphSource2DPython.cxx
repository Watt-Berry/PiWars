// python wrapper for vtkGlyphSource2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGlyphSource2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGlyphSource2D(PyObject *dict); }
extern "C" { PyObject *PyvtkGlyphSource2D_ClassNew(); }


static PyObject *
PyvtkGlyphSource2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGlyphSource2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGlyphSource2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGlyphSource2D *tempr = vtkGlyphSource2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGlyphSource2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGlyphSource2D::NewInstance());

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
PyvtkGlyphSource2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGlyphSource2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGlyphSource2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

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
      op->vtkGlyphSource2D::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyphSource2D_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyphSource2D_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkGlyphSource2D_SetCenter_s1(self, args);
    case 1:
      return PyvtkGlyphSource2D_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkGlyphSource2D_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkGlyphSource2D::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScaleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleMinValue() :
      op->vtkGlyphSource2D::GetScaleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScaleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleMaxValue() :
      op->vtkGlyphSource2D::GetScaleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkGlyphSource2D::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetScale2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale2(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetScale2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScale2MinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale2MinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale2MinValue() :
      op->vtkGlyphSource2D::GetScale2MinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScale2MaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale2MaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale2MaxValue() :
      op->vtkGlyphSource2D::GetScale2MaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetScale2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale2() :
      op->vtkGlyphSource2D::GetScale2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

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
      op->vtkGlyphSource2D::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyphSource2D_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

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
      op->vtkGlyphSource2D::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGlyphSource2D_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkGlyphSource2D_SetColor_s1(self, args);
    case 1:
      return PyvtkGlyphSource2D_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkGlyphSource2D_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkGlyphSource2D::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilled(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetFilled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFilled() :
      op->vtkGlyphSource2D::GetFilled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_FilledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FilledOn();
    }
    else
    {
      op->vtkGlyphSource2D::FilledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_FilledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FilledOff();
    }
    else
    {
      op->vtkGlyphSource2D::FilledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetDash(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDash");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDash(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetDash(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetDash(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDash");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDash() :
      op->vtkGlyphSource2D::GetDash());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_DashOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DashOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DashOn();
    }
    else
    {
      op->vtkGlyphSource2D::DashOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_DashOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DashOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DashOff();
    }
    else
    {
      op->vtkGlyphSource2D::DashOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCross(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetCross(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCross() :
      op->vtkGlyphSource2D::GetCross());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_CrossOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CrossOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CrossOn();
    }
    else
    {
      op->vtkGlyphSource2D::CrossOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_CrossOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CrossOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CrossOff();
    }
    else
    {
      op->vtkGlyphSource2D::CrossOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetRotationAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationAngle(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetRotationAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetRotationAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotationAngle() :
      op->vtkGlyphSource2D::GetRotationAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkGlyphSource2D::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkGlyphSource2D::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkGlyphSource2D::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphType(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetGlyphTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphTypeMinValue() :
      op->vtkGlyphSource2D::GetGlyphTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetGlyphTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphTypeMaxValue() :
      op->vtkGlyphSource2D::GetGlyphTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphType() :
      op->vtkGlyphSource2D::GetGlyphType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToNone();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToVertex();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToVertex();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToDash(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToDash");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToDash();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToDash();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToCross();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToCross();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToThickCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToThickCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToThickCross();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToThickCross();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToTriangle();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToTriangle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToSquare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToSquare");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToSquare();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToSquare();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToCircle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToCircle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToCircle();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToCircle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToDiamond(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToDiamond");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToDiamond();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToDiamond();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToArrow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToArrow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToArrow();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToArrow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToThickArrow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToThickArrow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToThickArrow();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToThickArrow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToHookedArrow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToHookedArrow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToHookedArrow();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToHookedArrow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetGlyphTypeToEdgeArrow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToEdgeArrow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToEdgeArrow();
    }
    else
    {
      op->vtkGlyphSource2D::SetGlyphTypeToEdgeArrow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

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
      op->vtkGlyphSource2D::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkGlyphSource2D::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetTipLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTipLength(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetTipLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetTipLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTipLengthMinValue() :
      op->vtkGlyphSource2D::GetTipLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetTipLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTipLengthMaxValue() :
      op->vtkGlyphSource2D::GetTipLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetTipLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTipLength() :
      op->vtkGlyphSource2D::GetTipLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetDoublePointed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDoublePointed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDoublePointed(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetDoublePointed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetDoublePointed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoublePointed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDoublePointed() :
      op->vtkGlyphSource2D::GetDoublePointed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_DoublePointedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoublePointedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DoublePointedOn();
    }
    else
    {
      op->vtkGlyphSource2D::DoublePointedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_DoublePointedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoublePointedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DoublePointedOff();
    }
    else
    {
      op->vtkGlyphSource2D::DoublePointedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_SetPointInwards(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointInwards");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointInwards(temp0);
    }
    else
    {
      op->vtkGlyphSource2D::SetPointInwards(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_GetPointInwards(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointInwards");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPointInwards() :
      op->vtkGlyphSource2D::GetPointInwards());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_PointInwardsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointInwardsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointInwardsOn();
    }
    else
    {
      op->vtkGlyphSource2D::PointInwardsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlyphSource2D_PointInwardsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointInwardsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlyphSource2D *op = static_cast<vtkGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointInwardsOff();
    }
    else
    {
      op->vtkGlyphSource2D::PointInwardsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGlyphSource2D_Methods[] = {
  {"IsTypeOf", PyvtkGlyphSource2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGlyphSource2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGlyphSource2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGlyphSource2D\nC++: static vtkGlyphSource2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGlyphSource2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGlyphSource2D\nC++: vtkGlyphSource2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGlyphSource2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGlyphSource2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCenter", PyvtkGlyphSource2D_SetCenter, METH_VARARGS,
   "SetCenter(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCenter(double _arg1, double _arg2,\n    double _arg3)\nSetCenter(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCenter(const double _arg[3])\n\nSet the center of the glyph. By default the center is (0,0,0).\n"},
  {"GetCenter", PyvtkGlyphSource2D_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: virtual double *GetCenter()\n\n"},
  {"SetScale", PyvtkGlyphSource2D_SetScale, METH_VARARGS,
   "SetScale(self, _arg:float) -> None\nC++: virtual void SetScale(double _arg)\n\nSet the scale of the glyph. Note that the glyphs are designed to\nfit in the (1,1) rectangle.\n"},
  {"GetScaleMinValue", PyvtkGlyphSource2D_GetScaleMinValue, METH_VARARGS,
   "GetScaleMinValue(self) -> float\nC++: virtual double GetScaleMinValue()\n\n"},
  {"GetScaleMaxValue", PyvtkGlyphSource2D_GetScaleMaxValue, METH_VARARGS,
   "GetScaleMaxValue(self) -> float\nC++: virtual double GetScaleMaxValue()\n\n"},
  {"GetScale", PyvtkGlyphSource2D_GetScale, METH_VARARGS,
   "GetScale(self) -> float\nC++: virtual double GetScale()\n\n"},
  {"SetScale2", PyvtkGlyphSource2D_SetScale2, METH_VARARGS,
   "SetScale2(self, _arg:float) -> None\nC++: virtual void SetScale2(double _arg)\n\nSet the scale of optional portions of the glyph (e.g., the dash\nand cross is DashOn() and CrossOn()).\n"},
  {"GetScale2MinValue", PyvtkGlyphSource2D_GetScale2MinValue, METH_VARARGS,
   "GetScale2MinValue(self) -> float\nC++: virtual double GetScale2MinValue()\n\n"},
  {"GetScale2MaxValue", PyvtkGlyphSource2D_GetScale2MaxValue, METH_VARARGS,
   "GetScale2MaxValue(self) -> float\nC++: virtual double GetScale2MaxValue()\n\n"},
  {"GetScale2", PyvtkGlyphSource2D_GetScale2, METH_VARARGS,
   "GetScale2(self) -> float\nC++: virtual double GetScale2()\n\n"},
  {"SetColor", PyvtkGlyphSource2D_SetColor, METH_VARARGS,
   "SetColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetColor(double _arg1, double _arg2,\n    double _arg3)\nSetColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetColor(const double _arg[3])\n\nSet the color of the glyph. The default color is white.\n"},
  {"GetColor", PyvtkGlyphSource2D_GetColor, METH_VARARGS,
   "GetColor(self) -> (float, float, float)\nC++: virtual double *GetColor()\n\n"},
  {"SetFilled", PyvtkGlyphSource2D_SetFilled, METH_VARARGS,
   "SetFilled(self, _arg:int) -> None\nC++: virtual void SetFilled(vtkTypeBool _arg)\n\nSpecify whether the glyph is filled (a polygon) or not (a closed\npolygon defined by line segments). This only applies to 2D closed\nglyphs.\n"},
  {"GetFilled", PyvtkGlyphSource2D_GetFilled, METH_VARARGS,
   "GetFilled(self) -> int\nC++: virtual vtkTypeBool GetFilled()\n\n"},
  {"FilledOn", PyvtkGlyphSource2D_FilledOn, METH_VARARGS,
   "FilledOn(self) -> None\nC++: virtual void FilledOn()\n\n"},
  {"FilledOff", PyvtkGlyphSource2D_FilledOff, METH_VARARGS,
   "FilledOff(self) -> None\nC++: virtual void FilledOff()\n\n"},
  {"SetDash", PyvtkGlyphSource2D_SetDash, METH_VARARGS,
   "SetDash(self, _arg:int) -> None\nC++: virtual void SetDash(vtkTypeBool _arg)\n\nSpecify whether a short line segment is drawn through the glyph.\n(This is in addition to the glyph. If the glyph type is set to\n\"Dash\" there is no need to enable this flag.)\n"},
  {"GetDash", PyvtkGlyphSource2D_GetDash, METH_VARARGS,
   "GetDash(self) -> int\nC++: virtual vtkTypeBool GetDash()\n\n"},
  {"DashOn", PyvtkGlyphSource2D_DashOn, METH_VARARGS,
   "DashOn(self) -> None\nC++: virtual void DashOn()\n\n"},
  {"DashOff", PyvtkGlyphSource2D_DashOff, METH_VARARGS,
   "DashOff(self) -> None\nC++: virtual void DashOff()\n\n"},
  {"SetCross", PyvtkGlyphSource2D_SetCross, METH_VARARGS,
   "SetCross(self, _arg:int) -> None\nC++: virtual void SetCross(vtkTypeBool _arg)\n\nSpecify whether a cross is drawn as part of the glyph. (This is\nin addition to the glyph. If the glyph type is set to \"Cross\"\nthere is no need to enable this flag.)\n"},
  {"GetCross", PyvtkGlyphSource2D_GetCross, METH_VARARGS,
   "GetCross(self) -> int\nC++: virtual vtkTypeBool GetCross()\n\n"},
  {"CrossOn", PyvtkGlyphSource2D_CrossOn, METH_VARARGS,
   "CrossOn(self) -> None\nC++: virtual void CrossOn()\n\n"},
  {"CrossOff", PyvtkGlyphSource2D_CrossOff, METH_VARARGS,
   "CrossOff(self) -> None\nC++: virtual void CrossOff()\n\n"},
  {"SetRotationAngle", PyvtkGlyphSource2D_SetRotationAngle, METH_VARARGS,
   "SetRotationAngle(self, _arg:float) -> None\nC++: virtual void SetRotationAngle(double _arg)\n\nSpecify an angle (in degrees) to rotate the glyph around the\nz-axis. Using this ivar, it is possible to generate rotated\nglyphs (e.g., crosses, arrows, etc.)\n"},
  {"GetRotationAngle", PyvtkGlyphSource2D_GetRotationAngle, METH_VARARGS,
   "GetRotationAngle(self) -> float\nC++: virtual double GetRotationAngle()\n\n"},
  {"SetResolution", PyvtkGlyphSource2D_SetResolution, METH_VARARGS,
   "SetResolution(self, _arg:int) -> None\nC++: virtual void SetResolution(int _arg)\n\nSpecify the number of points that form the circular glyph.\n"},
  {"GetResolutionMinValue", PyvtkGlyphSource2D_GetResolutionMinValue, METH_VARARGS,
   "GetResolutionMinValue(self) -> int\nC++: virtual int GetResolutionMinValue()\n\n"},
  {"GetResolutionMaxValue", PyvtkGlyphSource2D_GetResolutionMaxValue, METH_VARARGS,
   "GetResolutionMaxValue(self) -> int\nC++: virtual int GetResolutionMaxValue()\n\n"},
  {"GetResolution", PyvtkGlyphSource2D_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual int GetResolution()\n\n"},
  {"SetGlyphType", PyvtkGlyphSource2D_SetGlyphType, METH_VARARGS,
   "SetGlyphType(self, _arg:int) -> None\nC++: virtual void SetGlyphType(int _arg)\n\nSpecify the type of glyph to generate.\n"},
  {"GetGlyphTypeMinValue", PyvtkGlyphSource2D_GetGlyphTypeMinValue, METH_VARARGS,
   "GetGlyphTypeMinValue(self) -> int\nC++: virtual int GetGlyphTypeMinValue()\n\n"},
  {"GetGlyphTypeMaxValue", PyvtkGlyphSource2D_GetGlyphTypeMaxValue, METH_VARARGS,
   "GetGlyphTypeMaxValue(self) -> int\nC++: virtual int GetGlyphTypeMaxValue()\n\n"},
  {"GetGlyphType", PyvtkGlyphSource2D_GetGlyphType, METH_VARARGS,
   "GetGlyphType(self) -> int\nC++: virtual int GetGlyphType()\n\n"},
  {"SetGlyphTypeToNone", PyvtkGlyphSource2D_SetGlyphTypeToNone, METH_VARARGS,
   "SetGlyphTypeToNone(self) -> None\nC++: void SetGlyphTypeToNone()\n\n"},
  {"SetGlyphTypeToVertex", PyvtkGlyphSource2D_SetGlyphTypeToVertex, METH_VARARGS,
   "SetGlyphTypeToVertex(self) -> None\nC++: void SetGlyphTypeToVertex()\n\n"},
  {"SetGlyphTypeToDash", PyvtkGlyphSource2D_SetGlyphTypeToDash, METH_VARARGS,
   "SetGlyphTypeToDash(self) -> None\nC++: void SetGlyphTypeToDash()\n\n"},
  {"SetGlyphTypeToCross", PyvtkGlyphSource2D_SetGlyphTypeToCross, METH_VARARGS,
   "SetGlyphTypeToCross(self) -> None\nC++: void SetGlyphTypeToCross()\n\n"},
  {"SetGlyphTypeToThickCross", PyvtkGlyphSource2D_SetGlyphTypeToThickCross, METH_VARARGS,
   "SetGlyphTypeToThickCross(self) -> None\nC++: void SetGlyphTypeToThickCross()\n\n"},
  {"SetGlyphTypeToTriangle", PyvtkGlyphSource2D_SetGlyphTypeToTriangle, METH_VARARGS,
   "SetGlyphTypeToTriangle(self) -> None\nC++: void SetGlyphTypeToTriangle()\n\n"},
  {"SetGlyphTypeToSquare", PyvtkGlyphSource2D_SetGlyphTypeToSquare, METH_VARARGS,
   "SetGlyphTypeToSquare(self) -> None\nC++: void SetGlyphTypeToSquare()\n\n"},
  {"SetGlyphTypeToCircle", PyvtkGlyphSource2D_SetGlyphTypeToCircle, METH_VARARGS,
   "SetGlyphTypeToCircle(self) -> None\nC++: void SetGlyphTypeToCircle()\n\n"},
  {"SetGlyphTypeToDiamond", PyvtkGlyphSource2D_SetGlyphTypeToDiamond, METH_VARARGS,
   "SetGlyphTypeToDiamond(self) -> None\nC++: void SetGlyphTypeToDiamond()\n\n"},
  {"SetGlyphTypeToArrow", PyvtkGlyphSource2D_SetGlyphTypeToArrow, METH_VARARGS,
   "SetGlyphTypeToArrow(self) -> None\nC++: void SetGlyphTypeToArrow()\n\n"},
  {"SetGlyphTypeToThickArrow", PyvtkGlyphSource2D_SetGlyphTypeToThickArrow, METH_VARARGS,
   "SetGlyphTypeToThickArrow(self) -> None\nC++: void SetGlyphTypeToThickArrow()\n\n"},
  {"SetGlyphTypeToHookedArrow", PyvtkGlyphSource2D_SetGlyphTypeToHookedArrow, METH_VARARGS,
   "SetGlyphTypeToHookedArrow(self) -> None\nC++: void SetGlyphTypeToHookedArrow()\n\n"},
  {"SetGlyphTypeToEdgeArrow", PyvtkGlyphSource2D_SetGlyphTypeToEdgeArrow, METH_VARARGS,
   "SetGlyphTypeToEdgeArrow(self) -> None\nC++: void SetGlyphTypeToEdgeArrow()\n\n"},
  {"SetOutputPointsPrecision", PyvtkGlyphSource2D_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkGlyphSource2D_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"SetTipLength", PyvtkGlyphSource2D_SetTipLength, METH_VARARGS,
   "SetTipLength(self, _arg:float) -> None\nC++: virtual void SetTipLength(double _arg)\n\nSet/get the length of the tip(s) for VTK_ARROW_GLYPH. If\nDoublePointed is on, the length is capped at 0.5. Default is 0.3.\n"},
  {"GetTipLengthMinValue", PyvtkGlyphSource2D_GetTipLengthMinValue, METH_VARARGS,
   "GetTipLengthMinValue(self) -> float\nC++: virtual double GetTipLengthMinValue()\n\n"},
  {"GetTipLengthMaxValue", PyvtkGlyphSource2D_GetTipLengthMaxValue, METH_VARARGS,
   "GetTipLengthMaxValue(self) -> float\nC++: virtual double GetTipLengthMaxValue()\n\n"},
  {"GetTipLength", PyvtkGlyphSource2D_GetTipLength, METH_VARARGS,
   "GetTipLength(self) -> float\nC++: virtual double GetTipLength()\n\n"},
  {"SetDoublePointed", PyvtkGlyphSource2D_SetDoublePointed, METH_VARARGS,
   "SetDoublePointed(self, _arg:bool) -> None\nC++: virtual void SetDoublePointed(bool _arg)\n\nSpecify whether the arrow glyph should have two opposite tips.\nOnly applicable for VTK_ARROW_GLYPH. Default is false.\n"},
  {"GetDoublePointed", PyvtkGlyphSource2D_GetDoublePointed, METH_VARARGS,
   "GetDoublePointed(self) -> bool\nC++: virtual bool GetDoublePointed()\n\n"},
  {"DoublePointedOn", PyvtkGlyphSource2D_DoublePointedOn, METH_VARARGS,
   "DoublePointedOn(self) -> None\nC++: virtual void DoublePointedOn()\n\n"},
  {"DoublePointedOff", PyvtkGlyphSource2D_DoublePointedOff, METH_VARARGS,
   "DoublePointedOff(self) -> None\nC++: virtual void DoublePointedOff()\n\n"},
  {"SetPointInwards", PyvtkGlyphSource2D_SetPointInwards, METH_VARARGS,
   "SetPointInwards(self, _arg:bool) -> None\nC++: virtual void SetPointInwards(bool _arg)\n\nSpecify whether the arrow glyph should have its tip(s) pointing\ninwards. Only applicable for VTK_ARROW_GLYPH. Default is false.\n"},
  {"GetPointInwards", PyvtkGlyphSource2D_GetPointInwards, METH_VARARGS,
   "GetPointInwards(self) -> bool\nC++: virtual bool GetPointInwards()\n\n"},
  {"PointInwardsOn", PyvtkGlyphSource2D_PointInwardsOn, METH_VARARGS,
   "PointInwardsOn(self) -> None\nC++: virtual void PointInwardsOn()\n\n"},
  {"PointInwardsOff", PyvtkGlyphSource2D_PointInwardsOff, METH_VARARGS,
   "PointInwardsOff(self) -> None\nC++: virtual void PointInwardsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGlyphSource2D_Doc =
  "vtkGlyphSource2D - create 2D glyphs represented by vtkPolyData\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkGlyphSource2D can generate a family of 2D glyphs each of which\n"
  "lies in the x-y plane (i.e., the z-coordinate is zero). The class is\n"
  "a helper class to be used with vtkGlyph2D and vtkXYPlotActor.\n\n"
  "To use this class, specify the glyph type to use and its attributes.\n"
  "Attributes include its position (i.e., center point), scale, color,\n"
  "and whether the symbol is filled or not (a polygon or closed line\n"
  "sequence). You can also put a short line through the glyph running\n"
  "from -x to +x (the glyph looks like it's on a line), or a cross.\n\n"
  "The simple arrow can also be double pointed and point inwards.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGlyphSource2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkGlyphSource2D", // tp_name
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
  PyvtkGlyphSource2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGlyphSource2D_StaticNew()
{
  return vtkGlyphSource2D::New();
}

PyObject *PyvtkGlyphSource2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGlyphSource2D_Type, PyvtkGlyphSource2D_Methods,
    "vtkGlyphSource2D",
 &PyvtkGlyphSource2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGlyphSource2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGlyphSource2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGlyphSource2D", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 14; c++)
  {
    static const struct { const char *name; int value; }
      constants[14] = {
        { "VTK_NO_GLYPH", 0 },
        { "VTK_VERTEX_GLYPH", 1 },
        { "VTK_DASH_GLYPH", 2 },
        { "VTK_CROSS_GLYPH", 3 },
        { "VTK_THICKCROSS_GLYPH", 4 },
        { "VTK_TRIANGLE_GLYPH", 5 },
        { "VTK_SQUARE_GLYPH", 6 },
        { "VTK_CIRCLE_GLYPH", 7 },
        { "VTK_DIAMOND_GLYPH", 8 },
        { "VTK_ARROW_GLYPH", 9 },
        { "VTK_THICKARROW_GLYPH", 10 },
        { "VTK_HOOKEDARROW_GLYPH", 11 },
        { "VTK_EDGEARROW_GLYPH", 12 },
        { "VTK_MAX_CIRCLE_RESOLUTION", 1024 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

