// python wrapper for vtkLight
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLight.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLight(PyObject *dict); }
extern "C" { PyObject *PyvtkLight_ClassNew(); }


static PyObject *
PyvtkLight_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLight::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLight::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLight *tempr = vtkLight::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLight *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLight::NewInstance());

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
PyvtkLight_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLight::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLight::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_ShallowClone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowClone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLight *tempr = (ap.IsBound() ?
      op->ShallowClone() :
      op->vtkLight::ShallowClone());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  vtkRenderer *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkLight::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetAmbientColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->SetAmbientColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLight::SetAmbientColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLight_SetAmbientColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAmbientColor(temp0);
    }
    else
    {
      op->vtkLight::SetAmbientColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLight_SetAmbientColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLight_SetAmbientColor_s1(self, args);
    case 1:
      return PyvtkLight_SetAmbientColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAmbientColor");
  return nullptr;
}


static PyObject *
PyvtkLight_GetAmbientColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAmbientColor() :
      op->vtkLight::GetAmbientColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetDiffuseColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->SetDiffuseColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLight::SetDiffuseColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLight_SetDiffuseColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDiffuseColor(temp0);
    }
    else
    {
      op->vtkLight::SetDiffuseColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLight_SetDiffuseColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLight_SetDiffuseColor_s1(self, args);
    case 1:
      return PyvtkLight_SetDiffuseColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDiffuseColor");
  return nullptr;
}


static PyObject *
PyvtkLight_GetDiffuseColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDiffuseColor() :
      op->vtkLight::GetDiffuseColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetSpecularColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->SetSpecularColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLight::SetSpecularColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLight_SetSpecularColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSpecularColor(temp0);
    }
    else
    {
      op->vtkLight::SetSpecularColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLight_SetSpecularColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLight_SetSpecularColor_s1(self, args);
    case 1:
      return PyvtkLight_SetSpecularColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpecularColor");
  return nullptr;
}


static PyObject *
PyvtkLight_GetSpecularColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSpecularColor() :
      op->vtkLight::GetSpecularColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->vtkLight::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLight_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->vtkLight::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLight_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLight_SetColor_s1(self, args);
    case 1:
      return PyvtkLight_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkLight_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLight::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLight_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkLight::SetPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLight_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLight_SetPosition_s1(self, args);
    case 1:
      return PyvtkLight_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkLight_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkLight::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetFocalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->SetFocalPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLight::SetFocalPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLight_SetFocalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetFocalPoint(temp0);
    }
    else
    {
      op->vtkLight::SetFocalPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLight_SetFocalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLight_SetFocalPoint_s1(self, args);
    case 1:
      return PyvtkLight_SetFocalPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFocalPoint");
  return nullptr;
}


static PyObject *
PyvtkLight_GetFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFocalPoint() :
      op->vtkLight::GetFocalPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntensity(temp0);
    }
    else
    {
      op->vtkLight::SetIntensity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_GetIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntensity() :
      op->vtkLight::GetIntensity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetSwitch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwitch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSwitch(temp0);
    }
    else
    {
      op->vtkLight::SetSwitch(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_GetSwitch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwitch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSwitch() :
      op->vtkLight::GetSwitch());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SwitchOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwitchOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwitchOn();
    }
    else
    {
      op->vtkLight::SwitchOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SwitchOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwitchOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwitchOff();
    }
    else
    {
      op->vtkLight::SwitchOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetPositional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPositional(temp0);
    }
    else
    {
      op->vtkLight::SetPositional(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_GetPositional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPositional() :
      op->vtkLight::GetPositional());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_PositionalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PositionalOn();
    }
    else
    {
      op->vtkLight::PositionalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_PositionalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PositionalOff();
    }
    else
    {
      op->vtkLight::PositionalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetExponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExponent(temp0);
    }
    else
    {
      op->vtkLight::SetExponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_GetExponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetExponentMinValue() :
      op->vtkLight::GetExponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_GetExponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetExponentMaxValue() :
      op->vtkLight::GetExponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_GetExponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetExponent() :
      op->vtkLight::GetExponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetConeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConeAngle(temp0);
    }
    else
    {
      op->vtkLight::SetConeAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_GetConeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConeAngle() :
      op->vtkLight::GetConeAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetAttenuationValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttenuationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->SetAttenuationValues(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLight::SetAttenuationValues(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLight_SetAttenuationValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttenuationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAttenuationValues(temp0);
    }
    else
    {
      op->vtkLight::SetAttenuationValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLight_SetAttenuationValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLight_SetAttenuationValues_s1(self, args);
    case 1:
      return PyvtkLight_SetAttenuationValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAttenuationValues");
  return nullptr;
}


static PyObject *
PyvtkLight_GetAttenuationValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttenuationValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAttenuationValues() :
      op->vtkLight::GetAttenuationValues());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetTransformMatrix(temp0);
    }
    else
    {
      op->vtkLight::SetTransformMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_GetTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetTransformMatrix() :
      op->vtkLight::GetTransformMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_GetTransformedPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->GetTransformedPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLight::GetTransformedPosition(temp0, temp1, temp2);
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
PyvtkLight_GetTransformedPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->GetTransformedPosition(temp0);
    }
    else
    {
      op->vtkLight::GetTransformedPosition(temp0);
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
PyvtkLight_GetTransformedPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTransformedPosition() :
      op->vtkLight::GetTransformedPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLight_GetTransformedPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLight_GetTransformedPosition_s1(self, args);
    case 1:
      return PyvtkLight_GetTransformedPosition_s2(self, args);
    case 0:
      return PyvtkLight_GetTransformedPosition_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTransformedPosition");
  return nullptr;
}


static PyObject *
PyvtkLight_GetTransformedFocalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->GetTransformedFocalPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLight::GetTransformedFocalPoint(temp0, temp1, temp2);
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
PyvtkLight_GetTransformedFocalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

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
      op->GetTransformedFocalPoint(temp0);
    }
    else
    {
      op->vtkLight::GetTransformedFocalPoint(temp0);
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
PyvtkLight_GetTransformedFocalPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTransformedFocalPoint() :
      op->vtkLight::GetTransformedFocalPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLight_GetTransformedFocalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLight_GetTransformedFocalPoint_s1(self, args);
    case 1:
      return PyvtkLight_GetTransformedFocalPoint_s2(self, args);
    case 0:
      return PyvtkLight_GetTransformedFocalPoint_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTransformedFocalPoint");
  return nullptr;
}


static PyObject *
PyvtkLight_TransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TransformPoint(temp0, temp1);
    }
    else
    {
      op->vtkLight::TransformPoint(temp0, temp1);
    }

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_TransformVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TransformVector(temp0, temp1);
    }
    else
    {
      op->vtkLight::TransformVector(temp0, temp1);
    }

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetDirectionAngle_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDirectionAngle(temp0, temp1);
    }
    else
    {
      op->vtkLight::SetDirectionAngle(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLight_SetDirectionAngle_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionAngle(temp0);
    }
    else
    {
      op->vtkLight::SetDirectionAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLight_SetDirectionAngle(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLight_SetDirectionAngle_s1(self, args);
    case 1:
      return PyvtkLight_SetDirectionAngle_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDirectionAngle");
  return nullptr;
}


static PyObject *
PyvtkLight_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  vtkLight *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLight"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkLight::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetLightType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLightType(temp0);
    }
    else
    {
      op->vtkLight::SetLightType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_GetLightType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLightType() :
      op->vtkLight::GetLightType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetLightTypeToHeadlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightTypeToHeadlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLightTypeToHeadlight();
    }
    else
    {
      op->vtkLight::SetLightTypeToHeadlight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetLightTypeToSceneLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightTypeToSceneLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLightTypeToSceneLight();
    }
    else
    {
      op->vtkLight::SetLightTypeToSceneLight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetLightTypeToCameraLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightTypeToCameraLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLightTypeToCameraLight();
    }
    else
    {
      op->vtkLight::SetLightTypeToCameraLight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_LightTypeIsHeadlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightTypeIsHeadlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->LightTypeIsHeadlight() :
      op->vtkLight::LightTypeIsHeadlight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_LightTypeIsSceneLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightTypeIsSceneLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->LightTypeIsSceneLight() :
      op->vtkLight::LightTypeIsSceneLight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_LightTypeIsCameraLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightTypeIsCameraLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->LightTypeIsCameraLight() :
      op->vtkLight::LightTypeIsCameraLight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetShadowAttenuation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadowAttenuation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShadowAttenuation(temp0);
    }
    else
    {
      op->vtkLight::SetShadowAttenuation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLight_GetShadowAttenuation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadowAttenuation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetShadowAttenuation() :
      op->vtkLight::GetShadowAttenuation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInformation() :
      op->vtkLight::GetInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLight_SetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLight *op = static_cast<vtkLight *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInformation(temp0);
    }
    else
    {
      op->vtkLight::SetInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLight_Methods[] = {
  {"IsTypeOf", PyvtkLight_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLight_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLight_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLight\nC++: static vtkLight *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLight_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLight\nC++: vtkLight *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLight_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLight_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ShallowClone", PyvtkLight_ShallowClone, METH_VARARGS,
   "ShallowClone(self) -> vtkLight\nC++: virtual vtkLight *ShallowClone()\n\nCreate a new light object with the same light parameters than the\ncurrent object (any ivar from the superclasses (vtkObject and\nvtkObjectBase), like reference counting, timestamp and observers\nare not copied). This is a shallow clone (TransformMatrix is\nreferenced)\n"},
  {"Render", PyvtkLight_Render, METH_VARARGS,
   "Render(self, __a:vtkRenderer, __b:int) -> None\nC++: virtual void Render(vtkRenderer *, int)\n\nAbstract interface to renderer. Each concrete subclass of\nvtkLight will load its data into the graphics system in response\nto this method invocation. The actual loading is performed by a\nvtkLightDevice subclass, which will get created automatically.\n"},
  {"SetAmbientColor", PyvtkLight_SetAmbientColor, METH_VARARGS,
   "SetAmbientColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetAmbientColor(double _arg1, double _arg2,\n    double _arg3)\nSetAmbientColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAmbientColor(const double _arg[3])\n\nSet/Get the color of the light. It is possible to set the\nambient, diffuse and specular colors separately. The SetColor()\nmethod sets the diffuse and specular colors to the same color\n(this is a feature to preserve backward compatibility.)\n"},
  {"GetAmbientColor", PyvtkLight_GetAmbientColor, METH_VARARGS,
   "GetAmbientColor(self) -> (float, float, float)\nC++: virtual double *GetAmbientColor()\n\n"},
  {"SetDiffuseColor", PyvtkLight_SetDiffuseColor, METH_VARARGS,
   "SetDiffuseColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetDiffuseColor(double _arg1, double _arg2,\n    double _arg3)\nSetDiffuseColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDiffuseColor(const double _arg[3])\n\n"},
  {"GetDiffuseColor", PyvtkLight_GetDiffuseColor, METH_VARARGS,
   "GetDiffuseColor(self) -> (float, float, float)\nC++: virtual double *GetDiffuseColor()\n\n"},
  {"SetSpecularColor", PyvtkLight_SetSpecularColor, METH_VARARGS,
   "SetSpecularColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetSpecularColor(double _arg1, double _arg2,\n    double _arg3)\nSetSpecularColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetSpecularColor(const double _arg[3])\n\n"},
  {"GetSpecularColor", PyvtkLight_GetSpecularColor, METH_VARARGS,
   "GetSpecularColor(self) -> (float, float, float)\nC++: virtual double *GetSpecularColor()\n\n"},
  {"SetColor", PyvtkLight_SetColor, METH_VARARGS,
   "SetColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetColor(double, double, double)\nSetColor(self, a:(float, float, float)) -> None\nC++: void SetColor(const double a[3])\n\n"},
  {"SetPosition", PyvtkLight_SetPosition, METH_VARARGS,
   "SetPosition(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetPosition(double _arg1, double _arg2,\n    double _arg3)\nSetPosition(self, _arg:(float, float, float)) -> None\nC++: virtual void SetPosition(const double _arg[3])\n\nSet/Get the position of the light. Note: The position of the\nlight is defined in the coordinate space indicated by its\ntransformation matrix (if it exists). Thus, to get the light's\nworld space position, use vtkGetTransformedPosition() instead of\nvtkGetPosition().\n"},
  {"GetPosition", PyvtkLight_GetPosition, METH_VARARGS,
   "GetPosition(self) -> (float, float, float)\nC++: virtual double *GetPosition()\n\n"},
  {"SetFocalPoint", PyvtkLight_SetFocalPoint, METH_VARARGS,
   "SetFocalPoint(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetFocalPoint(double _arg1, double _arg2,\n    double _arg3)\nSetFocalPoint(self, _arg:(float, float, float)) -> None\nC++: virtual void SetFocalPoint(const double _arg[3])\n\nSet/Get the point at which the light is shining. Note: The focal\npoint of the light is defined in the coordinate space indicated\nby its transformation matrix (if it exists). Thus, to get the\nlight's world space focal point, use\nvtkGetTransformedFocalPoint() instead of vtkGetFocalPoint().\n"},
  {"GetFocalPoint", PyvtkLight_GetFocalPoint, METH_VARARGS,
   "GetFocalPoint(self) -> (float, float, float)\nC++: virtual double *GetFocalPoint()\n\n"},
  {"SetIntensity", PyvtkLight_SetIntensity, METH_VARARGS,
   "SetIntensity(self, _arg:float) -> None\nC++: virtual void SetIntensity(double _arg)\n\nSet/Get the brightness of the light (from one to zero).\n"},
  {"GetIntensity", PyvtkLight_GetIntensity, METH_VARARGS,
   "GetIntensity(self) -> float\nC++: virtual double GetIntensity()\n\n"},
  {"SetSwitch", PyvtkLight_SetSwitch, METH_VARARGS,
   "SetSwitch(self, _arg:int) -> None\nC++: virtual void SetSwitch(vtkTypeBool _arg)\n\nTurn the light on or off.\n"},
  {"GetSwitch", PyvtkLight_GetSwitch, METH_VARARGS,
   "GetSwitch(self) -> int\nC++: virtual vtkTypeBool GetSwitch()\n\n"},
  {"SwitchOn", PyvtkLight_SwitchOn, METH_VARARGS,
   "SwitchOn(self) -> None\nC++: virtual void SwitchOn()\n\n"},
  {"SwitchOff", PyvtkLight_SwitchOff, METH_VARARGS,
   "SwitchOff(self) -> None\nC++: virtual void SwitchOff()\n\n"},
  {"SetPositional", PyvtkLight_SetPositional, METH_VARARGS,
   "SetPositional(self, _arg:int) -> None\nC++: virtual void SetPositional(vtkTypeBool _arg)\n\nTurn positional lighting on or off.\n"},
  {"GetPositional", PyvtkLight_GetPositional, METH_VARARGS,
   "GetPositional(self) -> int\nC++: virtual vtkTypeBool GetPositional()\n\n"},
  {"PositionalOn", PyvtkLight_PositionalOn, METH_VARARGS,
   "PositionalOn(self) -> None\nC++: virtual void PositionalOn()\n\n"},
  {"PositionalOff", PyvtkLight_PositionalOff, METH_VARARGS,
   "PositionalOff(self) -> None\nC++: virtual void PositionalOff()\n\n"},
  {"SetExponent", PyvtkLight_SetExponent, METH_VARARGS,
   "SetExponent(self, _arg:float) -> None\nC++: virtual void SetExponent(double _arg)\n\nSet/Get the exponent of the cosine used in positional lighting.\n"},
  {"GetExponentMinValue", PyvtkLight_GetExponentMinValue, METH_VARARGS,
   "GetExponentMinValue(self) -> float\nC++: virtual double GetExponentMinValue()\n\n"},
  {"GetExponentMaxValue", PyvtkLight_GetExponentMaxValue, METH_VARARGS,
   "GetExponentMaxValue(self) -> float\nC++: virtual double GetExponentMaxValue()\n\n"},
  {"GetExponent", PyvtkLight_GetExponent, METH_VARARGS,
   "GetExponent(self) -> float\nC++: virtual double GetExponent()\n\n"},
  {"SetConeAngle", PyvtkLight_SetConeAngle, METH_VARARGS,
   "SetConeAngle(self, _arg:float) -> None\nC++: virtual void SetConeAngle(double _arg)\n\nSet/Get the lighting cone angle of a positional light in degrees.\nThis is the angle between the axis of the cone and a ray along\nthe edge of the cone. A value of 90 (or more) indicates that you\nwant no spot lighting effects just a positional light.\n"},
  {"GetConeAngle", PyvtkLight_GetConeAngle, METH_VARARGS,
   "GetConeAngle(self) -> float\nC++: virtual double GetConeAngle()\n\n"},
  {"SetAttenuationValues", PyvtkLight_SetAttenuationValues, METH_VARARGS,
   "SetAttenuationValues(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetAttenuationValues(double _arg1, double _arg2,\n     double _arg3)\nSetAttenuationValues(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAttenuationValues(const double _arg[3])\n\nSet/Get the quadratic attenuation constants. They are specified\nas constant, linear, and quadratic, in that order.\n"},
  {"GetAttenuationValues", PyvtkLight_GetAttenuationValues, METH_VARARGS,
   "GetAttenuationValues(self) -> (float, float, float)\nC++: virtual double *GetAttenuationValues()\n\n"},
  {"SetTransformMatrix", PyvtkLight_SetTransformMatrix, METH_VARARGS,
   "SetTransformMatrix(self, __a:vtkMatrix4x4) -> None\nC++: virtual void SetTransformMatrix(vtkMatrix4x4 *)\n\nSet/Get the light's transformation matrix.  If a matrix is set\nfor a light, the light's parameters (position and focal point)\nare transformed by the matrix before being rendered.\n"},
  {"GetTransformMatrix", PyvtkLight_GetTransformMatrix, METH_VARARGS,
   "GetTransformMatrix(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetTransformMatrix()\n\n"},
  {"GetTransformedPosition", PyvtkLight_GetTransformedPosition, METH_VARARGS,
   "GetTransformedPosition(self, x:float, y:float, z:float) -> None\nC++: void GetTransformedPosition(double &x, double &y, double &z)\nGetTransformedPosition(self, a:[float, float, float]) -> None\nC++: void GetTransformedPosition(double a[3])\nGetTransformedPosition(self) -> (float, float, float)\nC++: double *GetTransformedPosition()\n\nGet the position of the light, modified by the transformation\nmatrix (if it exists).\n"},
  {"GetTransformedFocalPoint", PyvtkLight_GetTransformedFocalPoint, METH_VARARGS,
   "GetTransformedFocalPoint(self, x:float, y:float, z:float) -> None\nC++: void GetTransformedFocalPoint(double &x, double &y,\n    double &z)\nGetTransformedFocalPoint(self, a:[float, float, float]) -> None\nC++: void GetTransformedFocalPoint(double a[3])\nGetTransformedFocalPoint(self) -> (float, float, float)\nC++: double *GetTransformedFocalPoint()\n\nGet the focal point of the light, modified by the transformation\nmatrix (if it exists).\n"},
  {"TransformPoint", PyvtkLight_TransformPoint, METH_VARARGS,
   "TransformPoint(self, a:[float, float, float], b:[float, float,\n    float]) -> None\nC++: void TransformPoint(double a[3], double b[3])\n\nUse transform matrix to transform point (if it exists).\n"},
  {"TransformVector", PyvtkLight_TransformVector, METH_VARARGS,
   "TransformVector(self, a:[float, float, float], b:[float, float,\n    float]) -> None\nC++: void TransformVector(double a[3], double b[3])\n\nUse transform matrix to transform vector (if it exists).\n"},
  {"SetDirectionAngle", PyvtkLight_SetDirectionAngle, METH_VARARGS,
   "SetDirectionAngle(self, elevation:float, azimuth:float) -> None\nC++: void SetDirectionAngle(double elevation, double azimuth)\nSetDirectionAngle(self, ang:(float, float)) -> None\nC++: void SetDirectionAngle(const double ang[2])\n\nSet the position and focal point of a light based on elevation\nand azimuth.  The light is moved so it is shining from the given\nangle. Angles are given in degrees.  If the light is a positional\nlight, it is made directional instead.\n"},
  {"DeepCopy", PyvtkLight_DeepCopy, METH_VARARGS,
   "DeepCopy(self, light:vtkLight) -> None\nC++: void DeepCopy(vtkLight *light)\n\nPerform deep copy of this light.\n"},
  {"SetLightType", PyvtkLight_SetLightType, METH_VARARGS,
   "SetLightType(self, __a:int) -> None\nC++: virtual void SetLightType(int)\n\nSet/Get the type of the light. A SceneLight is a light located in\nthe world coordinate space.  A light is initially created as a\nscene light.\n\n* A Headlight is always located at the camera and is pointed at\n  the\n* camera's focal point.  The renderer is free to modify the\n  position and\n* focal point of the camera at any time.\n\n* A CameraLight is also attached to the camera, but is not\n  necessarily\n* located at the camera's position.  CameraLights are defined in\n  a\n* coordinate space where the camera is located at (0, 0, 1),\n  looking\n* towards (0, 0, 0) at a distance of 1, with up being (0, 1, 0).\n* CameraLight uses the transform matrix to establish this space.\n\n* Note: All SetLightType(), and SetLightTypeTo*() calls clear the\n* light's transform matrix.\n"},
  {"GetLightType", PyvtkLight_GetLightType, METH_VARARGS,
   "GetLightType(self) -> int\nC++: virtual int GetLightType()\n\n"},
  {"SetLightTypeToHeadlight", PyvtkLight_SetLightTypeToHeadlight, METH_VARARGS,
   "SetLightTypeToHeadlight(self) -> None\nC++: void SetLightTypeToHeadlight()\n\n"},
  {"SetLightTypeToSceneLight", PyvtkLight_SetLightTypeToSceneLight, METH_VARARGS,
   "SetLightTypeToSceneLight(self) -> None\nC++: void SetLightTypeToSceneLight()\n\n"},
  {"SetLightTypeToCameraLight", PyvtkLight_SetLightTypeToCameraLight, METH_VARARGS,
   "SetLightTypeToCameraLight(self) -> None\nC++: void SetLightTypeToCameraLight()\n\n"},
  {"LightTypeIsHeadlight", PyvtkLight_LightTypeIsHeadlight, METH_VARARGS,
   "LightTypeIsHeadlight(self) -> int\nC++: int LightTypeIsHeadlight()\n\nQuery the type of the light.\n"},
  {"LightTypeIsSceneLight", PyvtkLight_LightTypeIsSceneLight, METH_VARARGS,
   "LightTypeIsSceneLight(self) -> int\nC++: int LightTypeIsSceneLight()\n\n"},
  {"LightTypeIsCameraLight", PyvtkLight_LightTypeIsCameraLight, METH_VARARGS,
   "LightTypeIsCameraLight(self) -> int\nC++: int LightTypeIsCameraLight()\n\n"},
  {"SetShadowAttenuation", PyvtkLight_SetShadowAttenuation, METH_VARARGS,
   "SetShadowAttenuation(self, _arg:float) -> None\nC++: virtual void SetShadowAttenuation(float _arg)\n\nSet/Get the shadow intensity By default a light will be\ncompletely blocked when in shadow by setting this value to less\nthan 1.0 you can control how much light is attenuated when in\nshadow\n"},
  {"GetShadowAttenuation", PyvtkLight_GetShadowAttenuation, METH_VARARGS,
   "GetShadowAttenuation(self) -> float\nC++: virtual float GetShadowAttenuation()\n\n"},
  {"GetInformation", PyvtkLight_GetInformation, METH_VARARGS,
   "GetInformation(self) -> vtkInformation\nC++: virtual vtkInformation *GetInformation()\n\nSet/Get the information object associated with the light.\n"},
  {"SetInformation", PyvtkLight_SetInformation, METH_VARARGS,
   "SetInformation(self, __a:vtkInformation) -> None\nC++: virtual void SetInformation(vtkInformation *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLight_Doc =
  "vtkLight - a virtual light for 3D rendering\n\n"
  "Superclass: vtkObject\n\n"
  "vtkLight is a virtual light for 3D rendering. It provides methods to\n"
  "locate and point the light, turn it on and off, and set its\n"
  "brightness and color. In addition to the basic infinite distance\n"
  "point light source attributes, you also can specify the light\n"
  "attenuation values and cone angle. These attributes are only used if\n"
  "the light is a positional light. The default is a directional light\n"
  "(e.g. infinite point light source).\n\n"
  "Lights have a type that describes how the light should move with\n"
  "respect to the camera.  A Headlight is always located at the current\n"
  "camera position and shines on the camera's focal point.  A\n"
  "CameraLight also moves with the camera, but may not be coincident to\n"
  "it.  CameraLights are defined in a normalized coordinate space where\n"
  "the camera is located at (0, 0, 1), the camera is looking at (0, 0,\n"
  "0), and up is (0, 1, 0).  Finally, a SceneLight is part of the scene\n"
  "itself and does not move with the camera. (Renderers are responsible\n"
  "for moving the light based on its type.)\n\n"
  "Lights have a transformation matrix that describes the space in which\n"
  "they are positioned.  A light's world space position and focal point\n"
  "are defined by their local position and focal point, transformed by\n"
  "their transformation matrix (if it exists).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLight_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkLight", // tp_name
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
  PyvtkLight_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLight_StaticNew()
{
  return vtkLight::New();
}

PyObject *PyvtkLight_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLight_Type, PyvtkLight_Methods,
    "vtkLight",
 &PyvtkLight_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLight(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLight_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLight", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_LIGHT_TYPE_HEADLIGHT", 1 },
        { "VTK_LIGHT_TYPE_CAMERA_LIGHT", 2 },
        { "VTK_LIGHT_TYPE_SCENE_LIGHT", 3 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

