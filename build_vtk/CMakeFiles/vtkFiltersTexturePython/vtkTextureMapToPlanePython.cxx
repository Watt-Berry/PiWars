// python wrapper for vtkTextureMapToPlane
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTextureMapToPlane.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextureMapToPlane(PyObject *dict); }
extern "C" { PyObject *PyvtkTextureMapToPlane_ClassNew(); }


static PyObject *
PyvtkTextureMapToPlane_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextureMapToPlane::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextureMapToPlane::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextureMapToPlane *tempr = vtkTextureMapToPlane::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureMapToPlane *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextureMapToPlane::NewInstance());

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
PyvtkTextureMapToPlane_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTextureMapToPlane::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTextureMapToPlane::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

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
      op->vtkTextureMapToPlane::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

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
      op->vtkTextureMapToPlane::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextureMapToPlane_SetOrigin_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkTextureMapToPlane_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkTextureMapToPlane::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

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
      op->vtkTextureMapToPlane::SetPoint1(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint1(temp0);
    }
    else
    {
      op->vtkTextureMapToPlane::SetPoint1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextureMapToPlane_SetPoint1_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}


static PyObject *
PyvtkTextureMapToPlane_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkTextureMapToPlane::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

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
      op->vtkTextureMapToPlane::SetPoint2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint2(temp0);
    }
    else
    {
      op->vtkTextureMapToPlane::SetPoint2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextureMapToPlane_SetPoint2_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}


static PyObject *
PyvtkTextureMapToPlane_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkTextureMapToPlane::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

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
      op->vtkTextureMapToPlane::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

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
      op->vtkTextureMapToPlane::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextureMapToPlane_SetNormal_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}


static PyObject *
PyvtkTextureMapToPlane_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkTextureMapToPlane::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetSRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSRange(temp0, temp1);
    }
    else
    {
      op->vtkTextureMapToPlane::SetSRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetSRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSRange(temp0);
    }
    else
    {
      op->vtkTextureMapToPlane::SetSRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetSRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTextureMapToPlane_SetSRange_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetSRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSRange");
  return nullptr;
}


static PyObject *
PyvtkTextureMapToPlane_GetSRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSRange() :
      op->vtkTextureMapToPlane::GetSRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetTRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTRange(temp0, temp1);
    }
    else
    {
      op->vtkTextureMapToPlane::SetTRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetTRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTRange(temp0);
    }
    else
    {
      op->vtkTextureMapToPlane::SetTRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToPlane_SetTRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTextureMapToPlane_SetTRange_s1(self, args);
    case 1:
      return PyvtkTextureMapToPlane_SetTRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTRange");
  return nullptr;
}


static PyObject *
PyvtkTextureMapToPlane_GetTRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTRange() :
      op->vtkTextureMapToPlane::GetTRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_SetAutomaticPlaneGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticPlaneGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticPlaneGeneration(temp0);
    }
    else
    {
      op->vtkTextureMapToPlane::SetAutomaticPlaneGeneration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_GetAutomaticPlaneGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticPlaneGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticPlaneGeneration() :
      op->vtkTextureMapToPlane::GetAutomaticPlaneGeneration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_AutomaticPlaneGenerationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticPlaneGenerationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticPlaneGenerationOn();
    }
    else
    {
      op->vtkTextureMapToPlane::AutomaticPlaneGenerationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToPlane_AutomaticPlaneGenerationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticPlaneGenerationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToPlane *op = static_cast<vtkTextureMapToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticPlaneGenerationOff();
    }
    else
    {
      op->vtkTextureMapToPlane::AutomaticPlaneGenerationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTextureMapToPlane_Methods[] = {
  {"IsTypeOf", PyvtkTextureMapToPlane_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextureMapToPlane_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextureMapToPlane_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTextureMapToPlane\nC++: static vtkTextureMapToPlane *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextureMapToPlane_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTextureMapToPlane\nC++: vtkTextureMapToPlane *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTextureMapToPlane_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTextureMapToPlane_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOrigin", PyvtkTextureMapToPlane_SetOrigin, METH_VARARGS,
   "SetOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOrigin(const double _arg[3])\n\nSpecify a point defining the origin of the plane. Used in\nconjunction with the Point1 and Point2 ivars to specify a map\nplane.\n"},
  {"GetOrigin", PyvtkTextureMapToPlane_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetPoint1", PyvtkTextureMapToPlane_SetPoint1, METH_VARARGS,
   "SetPoint1(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetPoint1(double _arg1, double _arg2,\n    double _arg3)\nSetPoint1(self, _arg:(float, float, float)) -> None\nC++: virtual void SetPoint1(const double _arg[3])\n\nSpecify a point defining the first axis of the plane.\n"},
  {"GetPoint1", PyvtkTextureMapToPlane_GetPoint1, METH_VARARGS,
   "GetPoint1(self) -> (float, float, float)\nC++: virtual double *GetPoint1()\n\n"},
  {"SetPoint2", PyvtkTextureMapToPlane_SetPoint2, METH_VARARGS,
   "SetPoint2(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetPoint2(double _arg1, double _arg2,\n    double _arg3)\nSetPoint2(self, _arg:(float, float, float)) -> None\nC++: virtual void SetPoint2(const double _arg[3])\n\nSpecify a point defining the second axis of the plane.\n"},
  {"GetPoint2", PyvtkTextureMapToPlane_GetPoint2, METH_VARARGS,
   "GetPoint2(self) -> (float, float, float)\nC++: virtual double *GetPoint2()\n\n"},
  {"SetNormal", PyvtkTextureMapToPlane_SetNormal, METH_VARARGS,
   "SetNormal(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetNormal(double _arg1, double _arg2,\n    double _arg3)\nSetNormal(self, _arg:(float, float, float)) -> None\nC++: virtual void SetNormal(const double _arg[3])\n\nSpecify plane normal. An alternative way to specify a map plane.\nUsing this method, the object will scale the resulting texture\ncoordinate between the SRange and TRange specified.\n"},
  {"GetNormal", PyvtkTextureMapToPlane_GetNormal, METH_VARARGS,
   "GetNormal(self) -> (float, float, float)\nC++: virtual double *GetNormal()\n\n"},
  {"SetSRange", PyvtkTextureMapToPlane_SetSRange, METH_VARARGS,
   "SetSRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetSRange(double _arg1, double _arg2)\nSetSRange(self, _arg:(float, float)) -> None\nC++: void SetSRange(const double _arg[2])\n\nSpecify s-coordinate range for texture s-t coordinate pair.\n"},
  {"GetSRange", PyvtkTextureMapToPlane_GetSRange, METH_VARARGS,
   "GetSRange(self) -> (float, float)\nC++: virtual double *GetSRange()\n\n"},
  {"SetTRange", PyvtkTextureMapToPlane_SetTRange, METH_VARARGS,
   "SetTRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetTRange(double _arg1, double _arg2)\nSetTRange(self, _arg:(float, float)) -> None\nC++: void SetTRange(const double _arg[2])\n\nSpecify t-coordinate range for texture s-t coordinate pair.\n"},
  {"GetTRange", PyvtkTextureMapToPlane_GetTRange, METH_VARARGS,
   "GetTRange(self) -> (float, float)\nC++: virtual double *GetTRange()\n\n"},
  {"SetAutomaticPlaneGeneration", PyvtkTextureMapToPlane_SetAutomaticPlaneGeneration, METH_VARARGS,
   "SetAutomaticPlaneGeneration(self, _arg:int) -> None\nC++: virtual void SetAutomaticPlaneGeneration(vtkTypeBool _arg)\n\nTurn on/off automatic plane generation.\n"},
  {"GetAutomaticPlaneGeneration", PyvtkTextureMapToPlane_GetAutomaticPlaneGeneration, METH_VARARGS,
   "GetAutomaticPlaneGeneration(self) -> int\nC++: virtual vtkTypeBool GetAutomaticPlaneGeneration()\n\n"},
  {"AutomaticPlaneGenerationOn", PyvtkTextureMapToPlane_AutomaticPlaneGenerationOn, METH_VARARGS,
   "AutomaticPlaneGenerationOn(self) -> None\nC++: virtual void AutomaticPlaneGenerationOn()\n\n"},
  {"AutomaticPlaneGenerationOff", PyvtkTextureMapToPlane_AutomaticPlaneGenerationOff, METH_VARARGS,
   "AutomaticPlaneGenerationOff(self) -> None\nC++: virtual void AutomaticPlaneGenerationOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTextureMapToPlane_Doc =
  "vtkTextureMapToPlane - generate texture coordinates by mapping points\nto plane\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkTextureMapToPlane is a filter that generates 2D texture\n"
  "coordinates by mapping input dataset points onto a plane. The plane\n"
  "can either be user specified or generated automatically. (A least\n"
  "squares method is used to generate the plane automatically.)\n\n"
  "There are two ways you can specify the plane. The first is to provide\n"
  "a plane normal. In this case the points are projected to a plane, and\n"
  "the points are then mapped into the user specified s-t coordinate\n"
  "range. For more control, you can specify a plane with three points:\n"
  "an origin and two points defining the two axes of the plane. (This is\n"
  "compatible with the vtkPlaneSource.) Using the second method, the\n"
  "SRange and TRange vectors are ignored, since the presumption is that\n"
  "the user does not want to scale the texture coordinates; and you can\n"
  "adjust the origin and axes points to achieve the texture coordinate\n"
  "scaling you need. Note also that using the three point method the\n"
  "axes do not have to be orthogonal.\n\n"
  "@sa\n"
  " vtkPlaneSource vtkTextureMapToCylinder vtkTextureMapToSphere\n"
  "vtkThresholdTextureCoords\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTextureMapToPlane_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersTexture.vtkTextureMapToPlane", // tp_name
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
  PyvtkTextureMapToPlane_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextureMapToPlane_StaticNew()
{
  return vtkTextureMapToPlane::New();
}

PyObject *PyvtkTextureMapToPlane_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTextureMapToPlane_Type, PyvtkTextureMapToPlane_Methods,
    "vtkTextureMapToPlane",
 &PyvtkTextureMapToPlane_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextureMapToPlane(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextureMapToPlane_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextureMapToPlane", o) != 0)
  {
    Py_DECREF(o);
  }

}

