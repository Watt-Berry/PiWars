// python wrapper for vtkTubeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTubeFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTubeFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkTubeFilter_ClassNew(); }


static PyObject *
PyvtkTubeFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTubeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTubeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTubeFilter *tempr = vtkTubeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTubeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTubeFilter::NewInstance());

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
PyvtkTubeFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTubeFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTubeFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      op->vtkTubeFilter::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkTubeFilter::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkTubeFilter::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkTubeFilter::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetVaryRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVaryRadius(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetVaryRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetVaryRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVaryRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVaryRadiusMinValue() :
      op->vtkTubeFilter::GetVaryRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetVaryRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVaryRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVaryRadiusMaxValue() :
      op->vtkTubeFilter::GetVaryRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetVaryRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVaryRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVaryRadius() :
      op->vtkTubeFilter::GetVaryRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetVaryRadiusToVaryRadiusOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryRadiusToVaryRadiusOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVaryRadiusToVaryRadiusOff();
    }
    else
    {
      op->vtkTubeFilter::SetVaryRadiusToVaryRadiusOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryRadiusToVaryRadiusByScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVaryRadiusToVaryRadiusByScalar();
    }
    else
    {
      op->vtkTubeFilter::SetVaryRadiusToVaryRadiusByScalar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryRadiusToVaryRadiusByVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVaryRadiusToVaryRadiusByVector();
    }
    else
    {
      op->vtkTubeFilter::SetVaryRadiusToVaryRadiusByVector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByVectorNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryRadiusToVaryRadiusByVectorNorm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVaryRadiusToVaryRadiusByVectorNorm();
    }
    else
    {
      op->vtkTubeFilter::SetVaryRadiusToVaryRadiusByVectorNorm();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByAbsoluteScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVaryRadiusToVaryRadiusByAbsoluteScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVaryRadiusToVaryRadiusByAbsoluteScalar();
    }
    else
    {
      op->vtkTubeFilter::SetVaryRadiusToVaryRadiusByAbsoluteScalar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetVaryRadiusAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVaryRadiusAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVaryRadiusAsString() :
      op->vtkTubeFilter::GetVaryRadiusAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSides(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetNumberOfSides(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetNumberOfSidesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSidesMinValue() :
      op->vtkTubeFilter::GetNumberOfSidesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetNumberOfSidesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSidesMaxValue() :
      op->vtkTubeFilter::GetNumberOfSidesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSides() :
      op->vtkTubeFilter::GetNumberOfSides());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetRadiusFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadiusFactor(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetRadiusFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetRadiusFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusFactor() :
      op->vtkTubeFilter::GetRadiusFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetDefaultNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      op->SetDefaultNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTubeFilter::SetDefaultNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTubeFilter_SetDefaultNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultNormal(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetDefaultNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTubeFilter_SetDefaultNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTubeFilter_SetDefaultNormal_s1(self, args);
    case 1:
      return PyvtkTubeFilter_SetDefaultNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDefaultNormal");
  return nullptr;
}


static PyObject *
PyvtkTubeFilter_GetDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDefaultNormal() :
      op->vtkTubeFilter::GetDefaultNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDefaultNormal(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetUseDefaultNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetUseDefaultNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDefaultNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseDefaultNormal() :
      op->vtkTubeFilter::GetUseDefaultNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_UseDefaultNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDefaultNormalOn();
    }
    else
    {
      op->vtkTubeFilter::UseDefaultNormalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_UseDefaultNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDefaultNormalOff();
    }
    else
    {
      op->vtkTubeFilter::UseDefaultNormalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetSidesShareVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSidesShareVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSidesShareVertices(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetSidesShareVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetSidesShareVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSidesShareVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSidesShareVertices() :
      op->vtkTubeFilter::GetSidesShareVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SidesShareVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SidesShareVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SidesShareVerticesOn();
    }
    else
    {
      op->vtkTubeFilter::SidesShareVerticesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SidesShareVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SidesShareVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SidesShareVerticesOff();
    }
    else
    {
      op->vtkTubeFilter::SidesShareVerticesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCapping(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetCapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkTubeFilter::GetCapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOn();
    }
    else
    {
      op->vtkTubeFilter::CappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOff();
    }
    else
    {
      op->vtkTubeFilter::CappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOnRatio(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetOnRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOnRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatioMinValue() :
      op->vtkTubeFilter::GetOnRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOnRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatioMaxValue() :
      op->vtkTubeFilter::GetOnRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatio() :
      op->vtkTubeFilter::GetOnRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOffsetMinValue() :
      op->vtkTubeFilter::GetOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOffsetMaxValue() :
      op->vtkTubeFilter::GetOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkTubeFilter::GetOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoords(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetGenerateTCoords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetGenerateTCoordsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsMinValue() :
      op->vtkTubeFilter::GetGenerateTCoordsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetGenerateTCoordsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsMaxValue() :
      op->vtkTubeFilter::GetGenerateTCoordsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoords() :
      op->vtkTubeFilter::GetGenerateTCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetGenerateTCoordsToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToOff();
    }
    else
    {
      op->vtkTubeFilter::SetGenerateTCoordsToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetGenerateTCoordsToNormalizedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToNormalizedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToNormalizedLength();
    }
    else
    {
      op->vtkTubeFilter::SetGenerateTCoordsToNormalizedLength();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetGenerateTCoordsToUseLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToUseLength();
    }
    else
    {
      op->vtkTubeFilter::SetGenerateTCoordsToUseLength();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetGenerateTCoordsToUseScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToUseScalars();
    }
    else
    {
      op->vtkTubeFilter::SetGenerateTCoordsToUseScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetGenerateTCoordsAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsAsString() :
      op->vtkTubeFilter::GetGenerateTCoordsAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureLength(temp0);
    }
    else
    {
      op->vtkTubeFilter::SetTextureLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetTextureLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureLengthMinValue() :
      op->vtkTubeFilter::GetTextureLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetTextureLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureLengthMaxValue() :
      op->vtkTubeFilter::GetTextureLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureLength() :
      op->vtkTubeFilter::GetTextureLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

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
      op->vtkTubeFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTubeFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTubeFilter *op = static_cast<vtkTubeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkTubeFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTubeFilter_Methods[] = {
  {"IsTypeOf", PyvtkTubeFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTubeFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTubeFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTubeFilter\nC++: static vtkTubeFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTubeFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTubeFilter\nC++: vtkTubeFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTubeFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTubeFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRadius", PyvtkTubeFilter_SetRadius, METH_VARARGS,
   "SetRadius(self, _arg:float) -> None\nC++: virtual void SetRadius(double _arg)\n\nSet the minimum tube radius (minimum because the tube radius may\nvary).\n"},
  {"GetRadiusMinValue", PyvtkTubeFilter_GetRadiusMinValue, METH_VARARGS,
   "GetRadiusMinValue(self) -> float\nC++: virtual double GetRadiusMinValue()\n\n"},
  {"GetRadiusMaxValue", PyvtkTubeFilter_GetRadiusMaxValue, METH_VARARGS,
   "GetRadiusMaxValue(self) -> float\nC++: virtual double GetRadiusMaxValue()\n\n"},
  {"GetRadius", PyvtkTubeFilter_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: virtual double GetRadius()\n\n"},
  {"SetVaryRadius", PyvtkTubeFilter_SetVaryRadius, METH_VARARGS,
   "SetVaryRadius(self, _arg:int) -> None\nC++: virtual void SetVaryRadius(int _arg)\n\nTurn on/off the variation of tube radius with scalar value.\n"},
  {"GetVaryRadiusMinValue", PyvtkTubeFilter_GetVaryRadiusMinValue, METH_VARARGS,
   "GetVaryRadiusMinValue(self) -> int\nC++: virtual int GetVaryRadiusMinValue()\n\n"},
  {"GetVaryRadiusMaxValue", PyvtkTubeFilter_GetVaryRadiusMaxValue, METH_VARARGS,
   "GetVaryRadiusMaxValue(self) -> int\nC++: virtual int GetVaryRadiusMaxValue()\n\n"},
  {"GetVaryRadius", PyvtkTubeFilter_GetVaryRadius, METH_VARARGS,
   "GetVaryRadius(self) -> int\nC++: virtual int GetVaryRadius()\n\n"},
  {"SetVaryRadiusToVaryRadiusOff", PyvtkTubeFilter_SetVaryRadiusToVaryRadiusOff, METH_VARARGS,
   "SetVaryRadiusToVaryRadiusOff(self) -> None\nC++: void SetVaryRadiusToVaryRadiusOff()\n\n"},
  {"SetVaryRadiusToVaryRadiusByScalar", PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByScalar, METH_VARARGS,
   "SetVaryRadiusToVaryRadiusByScalar(self) -> None\nC++: void SetVaryRadiusToVaryRadiusByScalar()\n\n"},
  {"SetVaryRadiusToVaryRadiusByVector", PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByVector, METH_VARARGS,
   "SetVaryRadiusToVaryRadiusByVector(self) -> None\nC++: void SetVaryRadiusToVaryRadiusByVector()\n\n"},
  {"SetVaryRadiusToVaryRadiusByVectorNorm", PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByVectorNorm, METH_VARARGS,
   "SetVaryRadiusToVaryRadiusByVectorNorm(self) -> None\nC++: void SetVaryRadiusToVaryRadiusByVectorNorm()\n\n"},
  {"SetVaryRadiusToVaryRadiusByAbsoluteScalar", PyvtkTubeFilter_SetVaryRadiusToVaryRadiusByAbsoluteScalar, METH_VARARGS,
   "SetVaryRadiusToVaryRadiusByAbsoluteScalar(self) -> None\nC++: void SetVaryRadiusToVaryRadiusByAbsoluteScalar()\n\n"},
  {"GetVaryRadiusAsString", PyvtkTubeFilter_GetVaryRadiusAsString, METH_VARARGS,
   "GetVaryRadiusAsString(self) -> str\nC++: const char *GetVaryRadiusAsString()\n\n"},
  {"SetNumberOfSides", PyvtkTubeFilter_SetNumberOfSides, METH_VARARGS,
   "SetNumberOfSides(self, _arg:int) -> None\nC++: virtual void SetNumberOfSides(int _arg)\n\nSet the number of sides for the tube. At a minimum, number of\nsides is 3.\n"},
  {"GetNumberOfSidesMinValue", PyvtkTubeFilter_GetNumberOfSidesMinValue, METH_VARARGS,
   "GetNumberOfSidesMinValue(self) -> int\nC++: virtual int GetNumberOfSidesMinValue()\n\n"},
  {"GetNumberOfSidesMaxValue", PyvtkTubeFilter_GetNumberOfSidesMaxValue, METH_VARARGS,
   "GetNumberOfSidesMaxValue(self) -> int\nC++: virtual int GetNumberOfSidesMaxValue()\n\n"},
  {"GetNumberOfSides", PyvtkTubeFilter_GetNumberOfSides, METH_VARARGS,
   "GetNumberOfSides(self) -> int\nC++: virtual int GetNumberOfSides()\n\n"},
  {"SetRadiusFactor", PyvtkTubeFilter_SetRadiusFactor, METH_VARARGS,
   "SetRadiusFactor(self, _arg:float) -> None\nC++: virtual void SetRadiusFactor(double _arg)\n\nSet the maximum tube radius in terms of a multiple of the minimum\nradius.\n"},
  {"GetRadiusFactor", PyvtkTubeFilter_GetRadiusFactor, METH_VARARGS,
   "GetRadiusFactor(self) -> float\nC++: virtual double GetRadiusFactor()\n\n"},
  {"SetDefaultNormal", PyvtkTubeFilter_SetDefaultNormal, METH_VARARGS,
   "SetDefaultNormal(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetDefaultNormal(double _arg1, double _arg2,\n    double _arg3)\nSetDefaultNormal(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDefaultNormal(const double _arg[3])\n\nSet the default normal to use if no normals are supplied, and the\nDefaultNormalOn is set.\n"},
  {"GetDefaultNormal", PyvtkTubeFilter_GetDefaultNormal, METH_VARARGS,
   "GetDefaultNormal(self) -> (float, float, float)\nC++: virtual double *GetDefaultNormal()\n\n"},
  {"SetUseDefaultNormal", PyvtkTubeFilter_SetUseDefaultNormal, METH_VARARGS,
   "SetUseDefaultNormal(self, _arg:int) -> None\nC++: virtual void SetUseDefaultNormal(vtkTypeBool _arg)\n\nSet a boolean to control whether to use default normals.\nDefaultNormalOn is set.\n"},
  {"GetUseDefaultNormal", PyvtkTubeFilter_GetUseDefaultNormal, METH_VARARGS,
   "GetUseDefaultNormal(self) -> int\nC++: virtual vtkTypeBool GetUseDefaultNormal()\n\n"},
  {"UseDefaultNormalOn", PyvtkTubeFilter_UseDefaultNormalOn, METH_VARARGS,
   "UseDefaultNormalOn(self) -> None\nC++: virtual void UseDefaultNormalOn()\n\n"},
  {"UseDefaultNormalOff", PyvtkTubeFilter_UseDefaultNormalOff, METH_VARARGS,
   "UseDefaultNormalOff(self) -> None\nC++: virtual void UseDefaultNormalOff()\n\n"},
  {"SetSidesShareVertices", PyvtkTubeFilter_SetSidesShareVertices, METH_VARARGS,
   "SetSidesShareVertices(self, _arg:int) -> None\nC++: virtual void SetSidesShareVertices(vtkTypeBool _arg)\n\nSet a boolean to control whether tube sides should share\nvertices. This creates independent strips, with constant normals\nso the tube is always faceted in appearance.\n"},
  {"GetSidesShareVertices", PyvtkTubeFilter_GetSidesShareVertices, METH_VARARGS,
   "GetSidesShareVertices(self) -> int\nC++: virtual vtkTypeBool GetSidesShareVertices()\n\n"},
  {"SidesShareVerticesOn", PyvtkTubeFilter_SidesShareVerticesOn, METH_VARARGS,
   "SidesShareVerticesOn(self) -> None\nC++: virtual void SidesShareVerticesOn()\n\n"},
  {"SidesShareVerticesOff", PyvtkTubeFilter_SidesShareVerticesOff, METH_VARARGS,
   "SidesShareVerticesOff(self) -> None\nC++: virtual void SidesShareVerticesOff()\n\n"},
  {"SetCapping", PyvtkTubeFilter_SetCapping, METH_VARARGS,
   "SetCapping(self, _arg:int) -> None\nC++: virtual void SetCapping(vtkTypeBool _arg)\n\nTurn on/off whether to cap the ends with polygons. Initial value\nis off.\n"},
  {"GetCapping", PyvtkTubeFilter_GetCapping, METH_VARARGS,
   "GetCapping(self) -> int\nC++: virtual vtkTypeBool GetCapping()\n\n"},
  {"CappingOn", PyvtkTubeFilter_CappingOn, METH_VARARGS,
   "CappingOn(self) -> None\nC++: virtual void CappingOn()\n\n"},
  {"CappingOff", PyvtkTubeFilter_CappingOff, METH_VARARGS,
   "CappingOff(self) -> None\nC++: virtual void CappingOff()\n\n"},
  {"SetOnRatio", PyvtkTubeFilter_SetOnRatio, METH_VARARGS,
   "SetOnRatio(self, _arg:int) -> None\nC++: virtual void SetOnRatio(int _arg)\n\nControl the striping of the tubes. If OnRatio is greater than 1,\nthen every nth tube side is turned on, beginning with the Offset\nside.\n"},
  {"GetOnRatioMinValue", PyvtkTubeFilter_GetOnRatioMinValue, METH_VARARGS,
   "GetOnRatioMinValue(self) -> int\nC++: virtual int GetOnRatioMinValue()\n\n"},
  {"GetOnRatioMaxValue", PyvtkTubeFilter_GetOnRatioMaxValue, METH_VARARGS,
   "GetOnRatioMaxValue(self) -> int\nC++: virtual int GetOnRatioMaxValue()\n\n"},
  {"GetOnRatio", PyvtkTubeFilter_GetOnRatio, METH_VARARGS,
   "GetOnRatio(self) -> int\nC++: virtual int GetOnRatio()\n\n"},
  {"SetOffset", PyvtkTubeFilter_SetOffset, METH_VARARGS,
   "SetOffset(self, _arg:int) -> None\nC++: virtual void SetOffset(int _arg)\n\nControl the striping of the tubes. The offset sets the first tube\nside that is visible. Offset is generally used with OnRatio to\ncreate nifty striping effects.\n"},
  {"GetOffsetMinValue", PyvtkTubeFilter_GetOffsetMinValue, METH_VARARGS,
   "GetOffsetMinValue(self) -> int\nC++: virtual int GetOffsetMinValue()\n\n"},
  {"GetOffsetMaxValue", PyvtkTubeFilter_GetOffsetMaxValue, METH_VARARGS,
   "GetOffsetMaxValue(self) -> int\nC++: virtual int GetOffsetMaxValue()\n\n"},
  {"GetOffset", PyvtkTubeFilter_GetOffset, METH_VARARGS,
   "GetOffset(self) -> int\nC++: virtual int GetOffset()\n\n"},
  {"SetGenerateTCoords", PyvtkTubeFilter_SetGenerateTCoords, METH_VARARGS,
   "SetGenerateTCoords(self, _arg:int) -> None\nC++: virtual void SetGenerateTCoords(int _arg)\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the tube with length textures, etc. If you\nuse scalars to create the texture, the scalars are assumed to be\nmonotonically increasing (or decreasing).\n"},
  {"GetGenerateTCoordsMinValue", PyvtkTubeFilter_GetGenerateTCoordsMinValue, METH_VARARGS,
   "GetGenerateTCoordsMinValue(self) -> int\nC++: virtual int GetGenerateTCoordsMinValue()\n\n"},
  {"GetGenerateTCoordsMaxValue", PyvtkTubeFilter_GetGenerateTCoordsMaxValue, METH_VARARGS,
   "GetGenerateTCoordsMaxValue(self) -> int\nC++: virtual int GetGenerateTCoordsMaxValue()\n\n"},
  {"GetGenerateTCoords", PyvtkTubeFilter_GetGenerateTCoords, METH_VARARGS,
   "GetGenerateTCoords(self) -> int\nC++: virtual int GetGenerateTCoords()\n\n"},
  {"SetGenerateTCoordsToOff", PyvtkTubeFilter_SetGenerateTCoordsToOff, METH_VARARGS,
   "SetGenerateTCoordsToOff(self) -> None\nC++: void SetGenerateTCoordsToOff()\n\n"},
  {"SetGenerateTCoordsToNormalizedLength", PyvtkTubeFilter_SetGenerateTCoordsToNormalizedLength, METH_VARARGS,
   "SetGenerateTCoordsToNormalizedLength(self) -> None\nC++: void SetGenerateTCoordsToNormalizedLength()\n\n"},
  {"SetGenerateTCoordsToUseLength", PyvtkTubeFilter_SetGenerateTCoordsToUseLength, METH_VARARGS,
   "SetGenerateTCoordsToUseLength(self) -> None\nC++: void SetGenerateTCoordsToUseLength()\n\n"},
  {"SetGenerateTCoordsToUseScalars", PyvtkTubeFilter_SetGenerateTCoordsToUseScalars, METH_VARARGS,
   "SetGenerateTCoordsToUseScalars(self) -> None\nC++: void SetGenerateTCoordsToUseScalars()\n\n"},
  {"GetGenerateTCoordsAsString", PyvtkTubeFilter_GetGenerateTCoordsAsString, METH_VARARGS,
   "GetGenerateTCoordsAsString(self) -> str\nC++: const char *GetGenerateTCoordsAsString()\n\n"},
  {"SetTextureLength", PyvtkTubeFilter_SetTextureLength, METH_VARARGS,
   "SetTextureLength(self, _arg:float) -> None\nC++: virtual void SetTextureLength(double _arg)\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {"GetTextureLengthMinValue", PyvtkTubeFilter_GetTextureLengthMinValue, METH_VARARGS,
   "GetTextureLengthMinValue(self) -> float\nC++: virtual double GetTextureLengthMinValue()\n\n"},
  {"GetTextureLengthMaxValue", PyvtkTubeFilter_GetTextureLengthMaxValue, METH_VARARGS,
   "GetTextureLengthMaxValue(self) -> float\nC++: virtual double GetTextureLengthMaxValue()\n\n"},
  {"GetTextureLength", PyvtkTubeFilter_GetTextureLength, METH_VARARGS,
   "GetTextureLength(self) -> float\nC++: virtual double GetTextureLength()\n\n"},
  {"SetOutputPointsPrecision", PyvtkTubeFilter_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkTubeFilter_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTubeFilter_Doc =
  "vtkTubeFilter - filter that generates tubes around lines\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkTubeFilter is a filter that generates a tube around each input\n"
  "line. The tubes are made up of triangle strips and rotate around the\n"
  "tube with the rotation of the line normals. (If no normals are\n"
  "present, they are computed automatically.) The radius of the tube can\n"
  "be set to vary with scalar or vector value. If the radius varies with\n"
  "scalar value the radius is linearly adjusted. If the radius varies by\n"
  "vector, a mass flux preserving variation is used. If the radius\n"
  "varies by vector norm, the radius is linearly adjusted to its norm.\n"
  "The number of sides for the tube also can be specified. You can also\n"
  "specify which of the sides are visible. This is useful for generating\n"
  "interesting striping effects. Other options include the ability to\n"
  "cap the tube and generate texture coordinates. Texture coordinates\n"
  "can be used with an associated texture map to create interesting\n"
  "effects such as marking the tube with stripes corresponding to length\n"
  "or time.\n\n"
  "This filter is typically used to create thick or dramatic lines.\n"
  "Another common use is to combine this filter with vtkStreamTracer to\n"
  "generate streamtubes.\n\n"
  "@warning\n"
  "The number of tube sides must be greater than 3. If you wish to use\n"
  "fewer sides (i.e., a ribbon), use vtkRibbonFilter.\n\n"
  "@warning\n"
  "The input line must not have duplicate points, or normals at points\n"
  "that are parallel to the incoming/outgoing line segments. (Duplicate\n"
  "points can be removed with vtkCleanPolyData.) If a line does not meet\n"
  "this criteria, then that line is not tubed.\n\n"
  "@sa\n"
  "vtkRibbonFilter vtkStreamTracer vtkTubeBender\n\n"
  "@par Thanks: Michael Finch for absolute scalar radius\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTubeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkTubeFilter", // tp_name
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
  PyvtkTubeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTubeFilter_StaticNew()
{
  return vtkTubeFilter::New();
}

PyObject *PyvtkTubeFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTubeFilter_Type, PyvtkTubeFilter_Methods,
    "vtkTubeFilter",
 &PyvtkTubeFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTubeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTubeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTubeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "VTK_VARY_RADIUS_OFF", 0 },
        { "VTK_VARY_RADIUS_BY_SCALAR", 1 },
        { "VTK_VARY_RADIUS_BY_VECTOR", 2 },
        { "VTK_VARY_RADIUS_BY_ABSOLUTE_SCALAR", 3 },
        { "VTK_VARY_RADIUS_BY_VECTOR_NORM", 4 },
        { "VTK_TCOORDS_OFF", 0 },
        { "VTK_TCOORDS_FROM_NORMALIZED_LENGTH", 1 },
        { "VTK_TCOORDS_FROM_LENGTH", 2 },
        { "VTK_TCOORDS_FROM_SCALARS", 3 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

