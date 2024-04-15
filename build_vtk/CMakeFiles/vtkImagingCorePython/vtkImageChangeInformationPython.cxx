// python wrapper for vtkImageChangeInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageChangeInformation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageChangeInformation(PyObject *dict); }
extern "C" { PyObject *PyvtkImageChangeInformation_ClassNew(); }


static PyObject *
PyvtkImageChangeInformation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageChangeInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageChangeInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageChangeInformation *tempr = vtkImageChangeInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageChangeInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageChangeInformation::NewInstance());

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
PyvtkImageChangeInformation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageChangeInformation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageChangeInformation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetInformationInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformationInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetInformationInputData(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetInformationInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_GetInformationInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInformationInput() :
      op->vtkImageChangeInformation::GetInformationInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetOutputExtentStart_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputExtentStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOutputExtentStart(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageChangeInformation::SetOutputExtentStart(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputExtentStart_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputExtentStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputExtentStart(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetOutputExtentStart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputExtentStart(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageChangeInformation_SetOutputExtentStart_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetOutputExtentStart_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputExtentStart");
  return nullptr;
}


static PyObject *
PyvtkImageChangeInformation_GetOutputExtentStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputExtentStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOutputExtentStart() :
      op->vtkImageChangeInformation::GetOutputExtentStart());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetOutputSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetOutputSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageChangeInformation::SetOutputSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputSpacing(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetOutputSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageChangeInformation_SetOutputSpacing_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetOutputSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputSpacing");
  return nullptr;
}


static PyObject *
PyvtkImageChangeInformation_GetOutputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutputSpacing() :
      op->vtkImageChangeInformation::GetOutputSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetOutputDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputDirection(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetOutputDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_GetOutputDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  size_t sizer = 9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutputDirection() :
      op->vtkImageChangeInformation::GetOutputDirection());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetOutputOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetOutputOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageChangeInformation::SetOutputOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputOrigin(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetOutputOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOutputOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageChangeInformation_SetOutputOrigin_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetOutputOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputOrigin");
  return nullptr;
}


static PyObject *
PyvtkImageChangeInformation_GetOutputOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutputOrigin() :
      op->vtkImageChangeInformation::GetOutputOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetCenterImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterImage(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetCenterImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_CenterImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterImageOn();
    }
    else
    {
      op->vtkImageChangeInformation::CenterImageOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_CenterImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterImageOff();
    }
    else
    {
      op->vtkImageChangeInformation::CenterImageOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_GetCenterImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCenterImage() :
      op->vtkImageChangeInformation::GetCenterImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetExtentTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetExtentTranslation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageChangeInformation::SetExtentTranslation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetExtentTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetExtentTranslation(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetExtentTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetExtentTranslation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageChangeInformation_SetExtentTranslation_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetExtentTranslation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtentTranslation");
  return nullptr;
}


static PyObject *
PyvtkImageChangeInformation_GetExtentTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtentTranslation() :
      op->vtkImageChangeInformation::GetExtentTranslation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetSpacingScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacingScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetSpacingScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageChangeInformation::SetSpacingScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetSpacingScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacingScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSpacingScale(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetSpacingScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetSpacingScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageChangeInformation_SetSpacingScale_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetSpacingScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacingScale");
  return nullptr;
}


static PyObject *
PyvtkImageChangeInformation_GetSpacingScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacingScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSpacingScale() :
      op->vtkImageChangeInformation::GetSpacingScale());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetOriginTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetOriginTranslation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageChangeInformation::SetOriginTranslation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOriginTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOriginTranslation(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetOriginTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOriginTranslation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageChangeInformation_SetOriginTranslation_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetOriginTranslation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOriginTranslation");
  return nullptr;
}


static PyObject *
PyvtkImageChangeInformation_GetOriginTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOriginTranslation() :
      op->vtkImageChangeInformation::GetOriginTranslation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageChangeInformation_SetOriginScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

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
      op->SetOriginScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageChangeInformation::SetOriginScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOriginScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOriginScale(temp0);
    }
    else
    {
      op->vtkImageChangeInformation::SetOriginScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageChangeInformation_SetOriginScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageChangeInformation_SetOriginScale_s1(self, args);
    case 1:
      return PyvtkImageChangeInformation_SetOriginScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOriginScale");
  return nullptr;
}


static PyObject *
PyvtkImageChangeInformation_GetOriginScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageChangeInformation *op = static_cast<vtkImageChangeInformation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOriginScale() :
      op->vtkImageChangeInformation::GetOriginScale());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageChangeInformation_Methods[] = {
  {"IsTypeOf", PyvtkImageChangeInformation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageChangeInformation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageChangeInformation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageChangeInformation\nC++: static vtkImageChangeInformation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageChangeInformation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageChangeInformation\nC++: vtkImageChangeInformation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageChangeInformation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageChangeInformation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInformationInputData", PyvtkImageChangeInformation_SetInformationInputData, METH_VARARGS,
   "SetInformationInputData(self, __a:vtkImageData) -> None\nC++: virtual void SetInformationInputData(vtkImageData *)\n\nCopy the information from another data set.  By default, the\ninformation is copied from the input.\n"},
  {"GetInformationInput", PyvtkImageChangeInformation_GetInformationInput, METH_VARARGS,
   "GetInformationInput(self) -> vtkImageData\nC++: virtual vtkImageData *GetInformationInput()\n\n"},
  {"SetOutputExtentStart", PyvtkImageChangeInformation_SetOutputExtentStart, METH_VARARGS,
   "SetOutputExtentStart(self, _arg1:int, _arg2:int, _arg3:int)\n    -> None\nC++: virtual void SetOutputExtentStart(int _arg1, int _arg2,\n    int _arg3)\nSetOutputExtentStart(self, _arg:(int, int, int)) -> None\nC++: virtual void SetOutputExtentStart(const int _arg[3])\n\nSpecify new starting values for the extent explicitly. These\nvalues are used as WholeExtent[0], WholeExtent[2] and\nWholeExtent[4] of the output.  The default is to the use the\nextent start of the Input, or of the InformationInput if\nInformationInput is set.\n"},
  {"GetOutputExtentStart", PyvtkImageChangeInformation_GetOutputExtentStart, METH_VARARGS,
   "GetOutputExtentStart(self) -> (int, int, int)\nC++: virtual int *GetOutputExtentStart()\n\n"},
  {"SetOutputSpacing", PyvtkImageChangeInformation_SetOutputSpacing, METH_VARARGS,
   "SetOutputSpacing(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetOutputSpacing(double _arg1, double _arg2,\n    double _arg3)\nSetOutputSpacing(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOutputSpacing(const double _arg[3])\n\nSpecify a new data spacing explicitly.  The default is to use the\nspacing of the Input, or of the InformationInput if\nInformationInput is set.\n"},
  {"GetOutputSpacing", PyvtkImageChangeInformation_GetOutputSpacing, METH_VARARGS,
   "GetOutputSpacing(self) -> (float, float, float)\nC++: virtual double *GetOutputSpacing()\n\n"},
  {"SetOutputDirection", PyvtkImageChangeInformation_SetOutputDirection, METH_VARARGS,
   "SetOutputDirection(self, data:(float, ...)) -> None\nC++: virtual void SetOutputDirection(const double data[])\n\nSpecify a new direction matrix explicitly.  The default is to use\nthe direction of the Input, or of the InformationInput if\nInformationInput is set.\n"},
  {"GetOutputDirection", PyvtkImageChangeInformation_GetOutputDirection, METH_VARARGS,
   "GetOutputDirection(self) -> (float, float, float, float, float,\n    float, float, float, float)\nC++: virtual double *GetOutputDirection()\n\n"},
  {"SetOutputOrigin", PyvtkImageChangeInformation_SetOutputOrigin, METH_VARARGS,
   "SetOutputOrigin(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetOutputOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetOutputOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOutputOrigin(const double _arg[3])\n\nSpecify a new data origin explicitly.  The default is to use the\norigin of the Input, or of the InformationInput if\nInformationInput is set.\n"},
  {"GetOutputOrigin", PyvtkImageChangeInformation_GetOutputOrigin, METH_VARARGS,
   "GetOutputOrigin(self) -> (float, float, float)\nC++: virtual double *GetOutputOrigin()\n\n"},
  {"SetCenterImage", PyvtkImageChangeInformation_SetCenterImage, METH_VARARGS,
   "SetCenterImage(self, _arg:int) -> None\nC++: virtual void SetCenterImage(vtkTypeBool _arg)\n\nSet the Origin of the output so that image coordinate (0,0,0)\nlies at the Center of the data set.  This will override\nSetOutputOrigin.  This is often a useful operation to apply\nbefore using vtkImageReslice to apply a transformation to an\nimage.\n"},
  {"CenterImageOn", PyvtkImageChangeInformation_CenterImageOn, METH_VARARGS,
   "CenterImageOn(self) -> None\nC++: virtual void CenterImageOn()\n\n"},
  {"CenterImageOff", PyvtkImageChangeInformation_CenterImageOff, METH_VARARGS,
   "CenterImageOff(self) -> None\nC++: virtual void CenterImageOff()\n\n"},
  {"GetCenterImage", PyvtkImageChangeInformation_GetCenterImage, METH_VARARGS,
   "GetCenterImage(self) -> int\nC++: virtual vtkTypeBool GetCenterImage()\n\n"},
  {"SetExtentTranslation", PyvtkImageChangeInformation_SetExtentTranslation, METH_VARARGS,
   "SetExtentTranslation(self, _arg1:int, _arg2:int, _arg3:int)\n    -> None\nC++: virtual void SetExtentTranslation(int _arg1, int _arg2,\n    int _arg3)\nSetExtentTranslation(self, _arg:(int, int, int)) -> None\nC++: virtual void SetExtentTranslation(const int _arg[3])\n\nApply a translation to the extent.\n"},
  {"GetExtentTranslation", PyvtkImageChangeInformation_GetExtentTranslation, METH_VARARGS,
   "GetExtentTranslation(self) -> (int, int, int)\nC++: virtual int *GetExtentTranslation()\n\n"},
  {"SetSpacingScale", PyvtkImageChangeInformation_SetSpacingScale, METH_VARARGS,
   "SetSpacingScale(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetSpacingScale(double _arg1, double _arg2,\n    double _arg3)\nSetSpacingScale(self, _arg:(float, float, float)) -> None\nC++: virtual void SetSpacingScale(const double _arg[3])\n\nApply a scale factor to the spacing.\n"},
  {"GetSpacingScale", PyvtkImageChangeInformation_GetSpacingScale, METH_VARARGS,
   "GetSpacingScale(self) -> (float, float, float)\nC++: virtual double *GetSpacingScale()\n\n"},
  {"SetOriginTranslation", PyvtkImageChangeInformation_SetOriginTranslation, METH_VARARGS,
   "SetOriginTranslation(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetOriginTranslation(double _arg1, double _arg2,\n     double _arg3)\nSetOriginTranslation(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOriginTranslation(const double _arg[3])\n\nApply a translation to the origin.\n"},
  {"GetOriginTranslation", PyvtkImageChangeInformation_GetOriginTranslation, METH_VARARGS,
   "GetOriginTranslation(self) -> (float, float, float)\nC++: virtual double *GetOriginTranslation()\n\n"},
  {"SetOriginScale", PyvtkImageChangeInformation_SetOriginScale, METH_VARARGS,
   "SetOriginScale(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetOriginScale(double _arg1, double _arg2,\n    double _arg3)\nSetOriginScale(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOriginScale(const double _arg[3])\n\nApply a scale to the origin.  The scale is applied before the\ntranslation.\n"},
  {"GetOriginScale", PyvtkImageChangeInformation_GetOriginScale, METH_VARARGS,
   "GetOriginScale(self) -> (float, float, float)\nC++: virtual double *GetOriginScale()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageChangeInformation_Doc =
  "vtkImageChangeInformation - modify spacing, origin and extent.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageChangeInformation  modify the spacing, origin, or extent of\n"
  "the data without changing the data itself.  The data is not resampled\n"
  "by this filter, only the information accompanying the data is\n"
  "modified.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageChangeInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkImageChangeInformation", // tp_name
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
  PyvtkImageChangeInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageChangeInformation_StaticNew()
{
  return vtkImageChangeInformation::New();
}

PyObject *PyvtkImageChangeInformation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageChangeInformation_Type, PyvtkImageChangeInformation_Methods,
    "vtkImageChangeInformation",
 &PyvtkImageChangeInformation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageChangeInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageChangeInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageChangeInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

