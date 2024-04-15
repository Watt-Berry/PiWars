// python wrapper for vtkIconGlyphFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkIconGlyphFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIconGlyphFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkIconGlyphFilter_ClassNew(); }


static PyObject *
PyvtkIconGlyphFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIconGlyphFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIconGlyphFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIconGlyphFilter *tempr = vtkIconGlyphFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIconGlyphFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIconGlyphFilter::NewInstance());

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
PyvtkIconGlyphFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkIconGlyphFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkIconGlyphFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetIconSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetIconSize(temp0, temp1);
    }
    else
    {
      op->vtkIconGlyphFilter::SetIconSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetIconSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetIconSize(temp0);
    }
    else
    {
      op->vtkIconGlyphFilter::SetIconSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetIconSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkIconGlyphFilter_SetIconSize_s1(self, args);
    case 1:
      return PyvtkIconGlyphFilter_SetIconSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetIconSize");
  return nullptr;
}


static PyObject *
PyvtkIconGlyphFilter_GetIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetIconSize() :
      op->vtkIconGlyphFilter::GetIconSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetIconSheetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSheetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetIconSheetSize(temp0, temp1);
    }
    else
    {
      op->vtkIconGlyphFilter::SetIconSheetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetIconSheetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSheetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetIconSheetSize(temp0);
    }
    else
    {
      op->vtkIconGlyphFilter::SetIconSheetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetIconSheetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkIconGlyphFilter_SetIconSheetSize_s1(self, args);
    case 1:
      return PyvtkIconGlyphFilter_SetIconSheetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetIconSheetSize");
  return nullptr;
}


static PyObject *
PyvtkIconGlyphFilter_GetIconSheetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconSheetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetIconSheetSize() :
      op->vtkIconGlyphFilter::GetIconSheetSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetDisplaySize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplaySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDisplaySize(temp0, temp1);
    }
    else
    {
      op->vtkIconGlyphFilter::SetDisplaySize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetDisplaySize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplaySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDisplaySize(temp0);
    }
    else
    {
      op->vtkIconGlyphFilter::SetDisplaySize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetDisplaySize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkIconGlyphFilter_SetDisplaySize_s1(self, args);
    case 1:
      return PyvtkIconGlyphFilter_SetDisplaySize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDisplaySize");
  return nullptr;
}


static PyObject *
PyvtkIconGlyphFilter_GetDisplaySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplaySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDisplaySize() :
      op->vtkIconGlyphFilter::GetDisplaySize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetUseIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseIconSize(temp0);
    }
    else
    {
      op->vtkIconGlyphFilter::SetUseIconSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_GetUseIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseIconSize() :
      op->vtkIconGlyphFilter::GetUseIconSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_UseIconSizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIconSizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseIconSizeOn();
    }
    else
    {
      op->vtkIconGlyphFilter::UseIconSizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_UseIconSizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIconSizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseIconSizeOff();
    }
    else
    {
      op->vtkIconGlyphFilter::UseIconSizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetIconScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIconScaling(temp0);
    }
    else
    {
      op->vtkIconGlyphFilter::SetIconScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_GetIconScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIconScaling() :
      op->vtkIconGlyphFilter::GetIconScaling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetIconScalingToScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconScalingToScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIconScalingToScalingOff();
    }
    else
    {
      op->vtkIconGlyphFilter::SetIconScalingToScalingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetIconScalingToScalingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconScalingToScalingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIconScalingToScalingArray();
    }
    else
    {
      op->vtkIconGlyphFilter::SetIconScalingToScalingArray();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetPassScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassScalars(temp0);
    }
    else
    {
      op->vtkIconGlyphFilter::SetPassScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_GetPassScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassScalars() :
      op->vtkIconGlyphFilter::GetPassScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_PassScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassScalarsOn();
    }
    else
    {
      op->vtkIconGlyphFilter::PassScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_PassScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassScalarsOff();
    }
    else
    {
      op->vtkIconGlyphFilter::PassScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGravity(temp0);
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_GetGravity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGravity() :
      op->vtkIconGlyphFilter::GetGravity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToTopRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToTopRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToTopRight();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToTopRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToTopCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToTopCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToTopCenter();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToTopCenter();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToTopLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToTopLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToTopLeft();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToTopLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToCenterRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToCenterRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToCenterRight();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToCenterRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToCenterCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToCenterCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToCenterCenter();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToCenterCenter();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToCenterLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToCenterLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToCenterLeft();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToCenterLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToBottomRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToBottomRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToBottomRight();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToBottomRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToBottomCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToBottomCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToBottomCenter();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToBottomCenter();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToBottomLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToBottomLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToBottomLeft();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToBottomLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0, temp1);
    }
    else
    {
      op->vtkIconGlyphFilter::SetOffset(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0);
    }
    else
    {
      op->vtkIconGlyphFilter::SetOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkIconGlyphFilter_SetOffset_s1(self, args);
    case 1:
      return PyvtkIconGlyphFilter_SetOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOffset");
  return nullptr;
}


static PyObject *
PyvtkIconGlyphFilter_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkIconGlyphFilter::GetOffset());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkIconGlyphFilter_Methods[] = {
  {"IsTypeOf", PyvtkIconGlyphFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIconGlyphFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIconGlyphFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkIconGlyphFilter\nC++: static vtkIconGlyphFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIconGlyphFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkIconGlyphFilter\nC++: vtkIconGlyphFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkIconGlyphFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkIconGlyphFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetIconSize", PyvtkIconGlyphFilter_SetIconSize, METH_VARARGS,
   "SetIconSize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetIconSize(int _arg1, int _arg2)\nSetIconSize(self, _arg:(int, int)) -> None\nC++: void SetIconSize(const int _arg[2])\n\nSpecify the Width and Height, in pixels, of an icon in the icon\nsheet.\n"},
  {"GetIconSize", PyvtkIconGlyphFilter_GetIconSize, METH_VARARGS,
   "GetIconSize(self) -> (int, int)\nC++: virtual int *GetIconSize()\n\n"},
  {"SetIconSheetSize", PyvtkIconGlyphFilter_SetIconSheetSize, METH_VARARGS,
   "SetIconSheetSize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetIconSheetSize(int _arg1, int _arg2)\nSetIconSheetSize(self, _arg:(int, int)) -> None\nC++: void SetIconSheetSize(const int _arg[2])\n\nSpecify the Width and Height, in pixels, of an icon in the icon\nsheet.\n"},
  {"GetIconSheetSize", PyvtkIconGlyphFilter_GetIconSheetSize, METH_VARARGS,
   "GetIconSheetSize(self) -> (int, int)\nC++: virtual int *GetIconSheetSize()\n\n"},
  {"SetDisplaySize", PyvtkIconGlyphFilter_SetDisplaySize, METH_VARARGS,
   "SetDisplaySize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetDisplaySize(int _arg1, int _arg2)\nSetDisplaySize(self, _arg:(int, int)) -> None\nC++: void SetDisplaySize(const int _arg[2])\n\nSpecify the Width and Height, in pixels, of the size of the icon\nwhen it is rendered. By default, the IconSize is used to set the\ndisplay size (i.e., UseIconSize is true by default). Note that\nassumes that IconScaling is disabled, or if enabled, the scale of\na particular icon is 1.\n"},
  {"GetDisplaySize", PyvtkIconGlyphFilter_GetDisplaySize, METH_VARARGS,
   "GetDisplaySize(self) -> (int, int)\nC++: virtual int *GetDisplaySize()\n\n"},
  {"SetUseIconSize", PyvtkIconGlyphFilter_SetUseIconSize, METH_VARARGS,
   "SetUseIconSize(self, _arg:bool) -> None\nC++: virtual void SetUseIconSize(bool _arg)\n\nSpecify whether the Quad generated to place the icon on will be\neither the dimensions specified by IconSize or the DisplaySize.\n"},
  {"GetUseIconSize", PyvtkIconGlyphFilter_GetUseIconSize, METH_VARARGS,
   "GetUseIconSize(self) -> bool\nC++: virtual bool GetUseIconSize()\n\n"},
  {"UseIconSizeOn", PyvtkIconGlyphFilter_UseIconSizeOn, METH_VARARGS,
   "UseIconSizeOn(self) -> None\nC++: virtual void UseIconSizeOn()\n\n"},
  {"UseIconSizeOff", PyvtkIconGlyphFilter_UseIconSizeOff, METH_VARARGS,
   "UseIconSizeOff(self) -> None\nC++: virtual void UseIconSizeOff()\n\n"},
  {"SetIconScaling", PyvtkIconGlyphFilter_SetIconScaling, METH_VARARGS,
   "SetIconScaling(self, _arg:int) -> None\nC++: virtual void SetIconScaling(int _arg)\n\nSpecify how to specify individual icons. By default, icon scaling\nis off, but if it is on, then the filter looks for an array named\n\"IconScale\" to control individual icon size.\n"},
  {"GetIconScaling", PyvtkIconGlyphFilter_GetIconScaling, METH_VARARGS,
   "GetIconScaling(self) -> int\nC++: virtual int GetIconScaling()\n\n"},
  {"SetIconScalingToScalingOff", PyvtkIconGlyphFilter_SetIconScalingToScalingOff, METH_VARARGS,
   "SetIconScalingToScalingOff(self) -> None\nC++: void SetIconScalingToScalingOff()\n\n"},
  {"SetIconScalingToScalingArray", PyvtkIconGlyphFilter_SetIconScalingToScalingArray, METH_VARARGS,
   "SetIconScalingToScalingArray(self) -> None\nC++: void SetIconScalingToScalingArray()\n\n"},
  {"SetPassScalars", PyvtkIconGlyphFilter_SetPassScalars, METH_VARARGS,
   "SetPassScalars(self, _arg:bool) -> None\nC++: virtual void SetPassScalars(bool _arg)\n\nSpecify whether to pass the scalar icon index to the output. By\ndefault this is not passed since it can affect color during the\nrendering process. Note that all other point data is passed to\nthe output regardless of the value of this flag.\n"},
  {"GetPassScalars", PyvtkIconGlyphFilter_GetPassScalars, METH_VARARGS,
   "GetPassScalars(self) -> bool\nC++: virtual bool GetPassScalars()\n\n"},
  {"PassScalarsOn", PyvtkIconGlyphFilter_PassScalarsOn, METH_VARARGS,
   "PassScalarsOn(self) -> None\nC++: virtual void PassScalarsOn()\n\n"},
  {"PassScalarsOff", PyvtkIconGlyphFilter_PassScalarsOff, METH_VARARGS,
   "PassScalarsOff(self) -> None\nC++: virtual void PassScalarsOff()\n\n"},
  {"SetGravity", PyvtkIconGlyphFilter_SetGravity, METH_VARARGS,
   "SetGravity(self, _arg:int) -> None\nC++: virtual void SetGravity(int _arg)\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {"GetGravity", PyvtkIconGlyphFilter_GetGravity, METH_VARARGS,
   "GetGravity(self) -> int\nC++: virtual int GetGravity()\n\n"},
  {"SetGravityToTopRight", PyvtkIconGlyphFilter_SetGravityToTopRight, METH_VARARGS,
   "SetGravityToTopRight(self) -> None\nC++: void SetGravityToTopRight()\n\n"},
  {"SetGravityToTopCenter", PyvtkIconGlyphFilter_SetGravityToTopCenter, METH_VARARGS,
   "SetGravityToTopCenter(self) -> None\nC++: void SetGravityToTopCenter()\n\n"},
  {"SetGravityToTopLeft", PyvtkIconGlyphFilter_SetGravityToTopLeft, METH_VARARGS,
   "SetGravityToTopLeft(self) -> None\nC++: void SetGravityToTopLeft()\n\n"},
  {"SetGravityToCenterRight", PyvtkIconGlyphFilter_SetGravityToCenterRight, METH_VARARGS,
   "SetGravityToCenterRight(self) -> None\nC++: void SetGravityToCenterRight()\n\n"},
  {"SetGravityToCenterCenter", PyvtkIconGlyphFilter_SetGravityToCenterCenter, METH_VARARGS,
   "SetGravityToCenterCenter(self) -> None\nC++: void SetGravityToCenterCenter()\n\n"},
  {"SetGravityToCenterLeft", PyvtkIconGlyphFilter_SetGravityToCenterLeft, METH_VARARGS,
   "SetGravityToCenterLeft(self) -> None\nC++: void SetGravityToCenterLeft()\n\n"},
  {"SetGravityToBottomRight", PyvtkIconGlyphFilter_SetGravityToBottomRight, METH_VARARGS,
   "SetGravityToBottomRight(self) -> None\nC++: void SetGravityToBottomRight()\n\n"},
  {"SetGravityToBottomCenter", PyvtkIconGlyphFilter_SetGravityToBottomCenter, METH_VARARGS,
   "SetGravityToBottomCenter(self) -> None\nC++: void SetGravityToBottomCenter()\n\n"},
  {"SetGravityToBottomLeft", PyvtkIconGlyphFilter_SetGravityToBottomLeft, METH_VARARGS,
   "SetGravityToBottomLeft(self) -> None\nC++: void SetGravityToBottomLeft()\n\n"},
  {"SetOffset", PyvtkIconGlyphFilter_SetOffset, METH_VARARGS,
   "SetOffset(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetOffset(int _arg1, int _arg2)\nSetOffset(self, _arg:(int, int)) -> None\nC++: void SetOffset(const int _arg[2])\n\nSpecify an offset (in pixels or display coordinates) that offsets\nthe icons from their generating points.\n"},
  {"GetOffset", PyvtkIconGlyphFilter_GetOffset, METH_VARARGS,
   "GetOffset(self) -> (int, int)\nC++: virtual int *GetOffset()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkIconGlyphFilter_Doc =
  "vtkIconGlyphFilter - Filter that generates a polydata consisting of\nquads with texture coordinates referring to a set of icons within a\nsheet of icons.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkIconGlyphFilter takes in a vtkPointSet where each point\n"
  "corresponds to the center of an icon. Scalar integer data must also\n"
  "be set to give each point an icon index. This index is a zero based\n"
  "row major index into an image that contains a grid of icons (each\n"
  "icon is the same size). You must also specify 1) the size of the icon\n"
  "in the icon sheet (in pixels), 2) the size of the icon sheet (in\n"
  "pixels), and 3) the display size of each icon (again in display\n"
  "coordinates, or pixels).\n\n"
  "Various other parameters are used to control how this data is\n"
  "combined. If UseIconSize is true then the DisplaySize is ignored. If\n"
  "PassScalars is true, then the scalar index information is passed to\n"
  "the output. Also, there is an optional IconScale array which, if\n"
  "UseIconScaling is on, will scale each icon independently.\n\n"
  "@sa\n"
  "vtkPolyDataAlgorithm vtkGlyph3D vtkGlyph2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkIconGlyphFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkIconGlyphFilter", // tp_name
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
  PyvtkIconGlyphFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIconGlyphFilter_StaticNew()
{
  return vtkIconGlyphFilter::New();
}

PyObject *PyvtkIconGlyphFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkIconGlyphFilter_Type, PyvtkIconGlyphFilter_Methods,
    "vtkIconGlyphFilter",
 &PyvtkIconGlyphFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIconGlyphFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIconGlyphFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIconGlyphFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 11; c++)
  {
    static const struct { const char *name; int value; }
      constants[11] = {
        { "VTK_ICON_GRAVITY_TOP_RIGHT", 1 },
        { "VTK_ICON_GRAVITY_TOP_CENTER", 2 },
        { "VTK_ICON_GRAVITY_TOP_LEFT", 3 },
        { "VTK_ICON_GRAVITY_CENTER_RIGHT", 4 },
        { "VTK_ICON_GRAVITY_CENTER_CENTER", 5 },
        { "VTK_ICON_GRAVITY_CENTER_LEFT", 6 },
        { "VTK_ICON_GRAVITY_BOTTOM_RIGHT", 7 },
        { "VTK_ICON_GRAVITY_BOTTOM_CENTER", 8 },
        { "VTK_ICON_GRAVITY_BOTTOM_LEFT", 9 },
        { "VTK_ICON_SCALING_OFF", 0 },
        { "VTK_ICON_SCALING_USE_SCALING_ARRAY", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

