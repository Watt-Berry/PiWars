// python wrapper for vtkHyperStreamline
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperStreamline.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperStreamline(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperStreamline_ClassNew(); }


static PyObject *
PyvtkHyperStreamline_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperStreamline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperStreamline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperStreamline *tempr = vtkHyperStreamline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperStreamline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperStreamline::NewInstance());

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
PyvtkHyperStreamline_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperStreamline::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperStreamline::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetStartLocation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  long long temp0;
  int temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->SetStartLocation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperStreamline::SetStartLocation(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperStreamline_SetStartLocation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  long long temp0;
  int temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetStartLocation(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkHyperStreamline::SetStartLocation(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperStreamline_SetStartLocation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkHyperStreamline_SetStartLocation_s1(self, args);
    case 5:
      return PyvtkHyperStreamline_SetStartLocation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStartLocation");
  return nullptr;
}


static PyObject *
PyvtkHyperStreamline_GetStartLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    long long tempr = (ap.IsBound() ?
      op->GetStartLocation(temp0, temp1) :
      op->vtkHyperStreamline::GetStartLocation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetStartPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

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
      op->SetStartPosition(temp0);
    }
    else
    {
      op->vtkHyperStreamline::SetStartPosition(temp0);
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
PyvtkHyperStreamline_SetStartPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

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
      op->SetStartPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperStreamline::SetStartPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperStreamline_SetStartPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperStreamline_SetStartPosition_s1(self, args);
    case 3:
      return PyvtkHyperStreamline_SetStartPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStartPosition");
  return nullptr;
}


static PyObject *
PyvtkHyperStreamline_GetStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetStartPosition() :
      op->vtkHyperStreamline::GetStartPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetMaximumPropagationDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagationDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumPropagationDistance(temp0);
    }
    else
    {
      op->vtkHyperStreamline::SetMaximumPropagationDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetMaximumPropagationDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagationDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumPropagationDistanceMinValue() :
      op->vtkHyperStreamline::GetMaximumPropagationDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetMaximumPropagationDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagationDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumPropagationDistanceMaxValue() :
      op->vtkHyperStreamline::GetMaximumPropagationDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetMaximumPropagationDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagationDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumPropagationDistance() :
      op->vtkHyperStreamline::GetMaximumPropagationDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationEigenvector(temp0);
    }
    else
    {
      op->vtkHyperStreamline::SetIntegrationEigenvector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationEigenvectorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationEigenvectorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationEigenvectorMinValue() :
      op->vtkHyperStreamline::GetIntegrationEigenvectorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationEigenvectorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationEigenvectorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationEigenvectorMaxValue() :
      op->vtkHyperStreamline::GetIntegrationEigenvectorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationEigenvector() :
      op->vtkHyperStreamline::GetIntegrationEigenvector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationEigenvectorToMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationEigenvectorToMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationEigenvectorToMajor();
    }
    else
    {
      op->vtkHyperStreamline::SetIntegrationEigenvectorToMajor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationEigenvectorToMedium(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationEigenvectorToMedium");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationEigenvectorToMedium();
    }
    else
    {
      op->vtkHyperStreamline::SetIntegrationEigenvectorToMedium();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationEigenvectorToMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationEigenvectorToMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationEigenvectorToMinor();
    }
    else
    {
      op->vtkHyperStreamline::SetIntegrationEigenvectorToMinor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_IntegrateMajorEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntegrateMajorEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntegrateMajorEigenvector();
    }
    else
    {
      op->vtkHyperStreamline::IntegrateMajorEigenvector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_IntegrateMediumEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntegrateMediumEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntegrateMediumEigenvector();
    }
    else
    {
      op->vtkHyperStreamline::IntegrateMediumEigenvector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_IntegrateMinorEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntegrateMinorEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntegrateMinorEigenvector();
    }
    else
    {
      op->vtkHyperStreamline::IntegrateMinorEigenvector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationStepLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationStepLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationStepLength(temp0);
    }
    else
    {
      op->vtkHyperStreamline::SetIntegrationStepLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationStepLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationStepLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntegrationStepLengthMinValue() :
      op->vtkHyperStreamline::GetIntegrationStepLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationStepLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationStepLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntegrationStepLengthMaxValue() :
      op->vtkHyperStreamline::GetIntegrationStepLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationStepLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationStepLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntegrationStepLength() :
      op->vtkHyperStreamline::GetIntegrationStepLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetStepLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStepLength(temp0);
    }
    else
    {
      op->vtkHyperStreamline::SetStepLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetStepLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStepLengthMinValue() :
      op->vtkHyperStreamline::GetStepLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetStepLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStepLengthMaxValue() :
      op->vtkHyperStreamline::GetStepLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetStepLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStepLength() :
      op->vtkHyperStreamline::GetStepLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationDirection(temp0);
    }
    else
    {
      op->vtkHyperStreamline::SetIntegrationDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationDirectionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationDirectionMinValue() :
      op->vtkHyperStreamline::GetIntegrationDirectionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationDirectionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationDirectionMaxValue() :
      op->vtkHyperStreamline::GetIntegrationDirectionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationDirection() :
      op->vtkHyperStreamline::GetIntegrationDirection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationDirectionToForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationDirectionToForward();
    }
    else
    {
      op->vtkHyperStreamline::SetIntegrationDirectionToForward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationDirectionToBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationDirectionToBackward();
    }
    else
    {
      op->vtkHyperStreamline::SetIntegrationDirectionToBackward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetIntegrationDirectionToIntegrateBothDirections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToIntegrateBothDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationDirectionToIntegrateBothDirections();
    }
    else
    {
      op->vtkHyperStreamline::SetIntegrationDirectionToIntegrateBothDirections();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetTerminalEigenvalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminalEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTerminalEigenvalue(temp0);
    }
    else
    {
      op->vtkHyperStreamline::SetTerminalEigenvalue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetTerminalEigenvalueMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalEigenvalueMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTerminalEigenvalueMinValue() :
      op->vtkHyperStreamline::GetTerminalEigenvalueMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetTerminalEigenvalueMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalEigenvalueMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTerminalEigenvalueMaxValue() :
      op->vtkHyperStreamline::GetTerminalEigenvalueMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetTerminalEigenvalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTerminalEigenvalue() :
      op->vtkHyperStreamline::GetTerminalEigenvalue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

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
      op->vtkHyperStreamline::SetNumberOfSides(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetNumberOfSidesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSidesMinValue() :
      op->vtkHyperStreamline::GetNumberOfSidesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetNumberOfSidesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSidesMaxValue() :
      op->vtkHyperStreamline::GetNumberOfSidesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSides() :
      op->vtkHyperStreamline::GetNumberOfSides());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

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
      op->vtkHyperStreamline::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkHyperStreamline::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkHyperStreamline::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkHyperStreamline::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_SetLogScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLogScaling(temp0);
    }
    else
    {
      op->vtkHyperStreamline::SetLogScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_GetLogScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLogScaling() :
      op->vtkHyperStreamline::GetLogScaling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_LogScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogScalingOn();
    }
    else
    {
      op->vtkHyperStreamline::LogScalingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperStreamline_LogScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperStreamline *op = static_cast<vtkHyperStreamline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogScalingOff();
    }
    else
    {
      op->vtkHyperStreamline::LogScalingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperStreamline_Methods[] = {
  {"IsTypeOf", PyvtkHyperStreamline_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperStreamline_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperStreamline_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperStreamline\nC++: static vtkHyperStreamline *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperStreamline_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperStreamline\nC++: vtkHyperStreamline *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperStreamline_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperStreamline_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetStartLocation", PyvtkHyperStreamline_SetStartLocation, METH_VARARGS,
   "SetStartLocation(self, cellId:int, subId:int, pcoords:[float,\n    float, float]) -> None\nC++: void SetStartLocation(vtkIdType cellId, int subId,\n    double pcoords[3])\nSetStartLocation(self, cellId:int, subId:int, r:float, s:float,\n    t:float) -> None\nC++: void SetStartLocation(vtkIdType cellId, int subId, double r,\n    double s, double t)\n\nSpecify the start of the hyperstreamline in the cell coordinate\nsystem. That is, cellId and subId (if composite cell), and\nparametric coordinates.\n"},
  {"GetStartLocation", PyvtkHyperStreamline_GetStartLocation, METH_VARARGS,
   "GetStartLocation(self, subId:int, pcoords:[float, float, float])\n    -> int\nC++: vtkIdType GetStartLocation(int &subId, double pcoords[3])\n\nGet the starting location of the hyperstreamline in the cell\ncoordinate system. Returns the cell that the starting point is\nin.\n"},
  {"SetStartPosition", PyvtkHyperStreamline_SetStartPosition, METH_VARARGS,
   "SetStartPosition(self, x:[float, float, float]) -> None\nC++: void SetStartPosition(double x[3])\nSetStartPosition(self, x:float, y:float, z:float) -> None\nC++: void SetStartPosition(double x, double y, double z)\n\nSpecify the start of the hyperstreamline in the global coordinate\nsystem. Starting from position implies that a search must be\nperformed to find initial cell to start integration from.\n"},
  {"GetStartPosition", PyvtkHyperStreamline_GetStartPosition, METH_VARARGS,
   "GetStartPosition(self) -> (float, float, float)\nC++: double *GetStartPosition()\n\nGet the start position of the hyperstreamline in global x-y-z\ncoordinates.\n"},
  {"SetMaximumPropagationDistance", PyvtkHyperStreamline_SetMaximumPropagationDistance, METH_VARARGS,
   "SetMaximumPropagationDistance(self, _arg:float) -> None\nC++: virtual void SetMaximumPropagationDistance(double _arg)\n\nSet / get the maximum length of the hyperstreamline expressed as\nabsolute distance (i.e., arc length) value.\n"},
  {"GetMaximumPropagationDistanceMinValue", PyvtkHyperStreamline_GetMaximumPropagationDistanceMinValue, METH_VARARGS,
   "GetMaximumPropagationDistanceMinValue(self) -> float\nC++: virtual double GetMaximumPropagationDistanceMinValue()\n\n"},
  {"GetMaximumPropagationDistanceMaxValue", PyvtkHyperStreamline_GetMaximumPropagationDistanceMaxValue, METH_VARARGS,
   "GetMaximumPropagationDistanceMaxValue(self) -> float\nC++: virtual double GetMaximumPropagationDistanceMaxValue()\n\n"},
  {"GetMaximumPropagationDistance", PyvtkHyperStreamline_GetMaximumPropagationDistance, METH_VARARGS,
   "GetMaximumPropagationDistance(self) -> float\nC++: virtual double GetMaximumPropagationDistance()\n\n"},
  {"SetIntegrationEigenvector", PyvtkHyperStreamline_SetIntegrationEigenvector, METH_VARARGS,
   "SetIntegrationEigenvector(self, _arg:int) -> None\nC++: virtual void SetIntegrationEigenvector(int _arg)\n\nSet / get the eigenvector field through which to ingrate. It is\npossible to integrate using the major, medium or minor\neigenvector field.  The major eigenvector is the eigenvector\nwhose corresponding eigenvalue is closest to positive infinity.\nThe minor eigenvector is the eigenvector whose corresponding\neigenvalue is closest to negative infinity.  The medium\neigenvector is the eigenvector whose corresponding eigenvalue is\nbetween the major and minor eigenvalues.\n"},
  {"GetIntegrationEigenvectorMinValue", PyvtkHyperStreamline_GetIntegrationEigenvectorMinValue, METH_VARARGS,
   "GetIntegrationEigenvectorMinValue(self) -> int\nC++: virtual int GetIntegrationEigenvectorMinValue()\n\n"},
  {"GetIntegrationEigenvectorMaxValue", PyvtkHyperStreamline_GetIntegrationEigenvectorMaxValue, METH_VARARGS,
   "GetIntegrationEigenvectorMaxValue(self) -> int\nC++: virtual int GetIntegrationEigenvectorMaxValue()\n\n"},
  {"GetIntegrationEigenvector", PyvtkHyperStreamline_GetIntegrationEigenvector, METH_VARARGS,
   "GetIntegrationEigenvector(self) -> int\nC++: virtual int GetIntegrationEigenvector()\n\n"},
  {"SetIntegrationEigenvectorToMajor", PyvtkHyperStreamline_SetIntegrationEigenvectorToMajor, METH_VARARGS,
   "SetIntegrationEigenvectorToMajor(self) -> None\nC++: void SetIntegrationEigenvectorToMajor()\n\n"},
  {"SetIntegrationEigenvectorToMedium", PyvtkHyperStreamline_SetIntegrationEigenvectorToMedium, METH_VARARGS,
   "SetIntegrationEigenvectorToMedium(self) -> None\nC++: void SetIntegrationEigenvectorToMedium()\n\n"},
  {"SetIntegrationEigenvectorToMinor", PyvtkHyperStreamline_SetIntegrationEigenvectorToMinor, METH_VARARGS,
   "SetIntegrationEigenvectorToMinor(self) -> None\nC++: void SetIntegrationEigenvectorToMinor()\n\n"},
  {"IntegrateMajorEigenvector", PyvtkHyperStreamline_IntegrateMajorEigenvector, METH_VARARGS,
   "IntegrateMajorEigenvector(self) -> None\nC++: void IntegrateMajorEigenvector()\n\nUse the major eigenvector field as the vector field through which\nto integrate.  The major eigenvector is the eigenvector whose\ncorresponding eigenvalue is closest to positive infinity.\n"},
  {"IntegrateMediumEigenvector", PyvtkHyperStreamline_IntegrateMediumEigenvector, METH_VARARGS,
   "IntegrateMediumEigenvector(self) -> None\nC++: void IntegrateMediumEigenvector()\n\nUse the medium eigenvector field as the vector field through\nwhich to integrate. The medium eigenvector is the eigenvector\nwhose corresponding eigenvalue is between the major and minor\neigenvalues.\n"},
  {"IntegrateMinorEigenvector", PyvtkHyperStreamline_IntegrateMinorEigenvector, METH_VARARGS,
   "IntegrateMinorEigenvector(self) -> None\nC++: void IntegrateMinorEigenvector()\n\nUse the minor eigenvector field as the vector field through which\nto integrate. The minor eigenvector is the eigenvector whose\ncorresponding eigenvalue is closest to negative infinity.\n"},
  {"SetIntegrationStepLength", PyvtkHyperStreamline_SetIntegrationStepLength, METH_VARARGS,
   "SetIntegrationStepLength(self, _arg:float) -> None\nC++: virtual void SetIntegrationStepLength(double _arg)\n\nSet / get a nominal integration step size (expressed as a\nfraction of the size of each cell).\n"},
  {"GetIntegrationStepLengthMinValue", PyvtkHyperStreamline_GetIntegrationStepLengthMinValue, METH_VARARGS,
   "GetIntegrationStepLengthMinValue(self) -> float\nC++: virtual double GetIntegrationStepLengthMinValue()\n\n"},
  {"GetIntegrationStepLengthMaxValue", PyvtkHyperStreamline_GetIntegrationStepLengthMaxValue, METH_VARARGS,
   "GetIntegrationStepLengthMaxValue(self) -> float\nC++: virtual double GetIntegrationStepLengthMaxValue()\n\n"},
  {"GetIntegrationStepLength", PyvtkHyperStreamline_GetIntegrationStepLength, METH_VARARGS,
   "GetIntegrationStepLength(self) -> float\nC++: virtual double GetIntegrationStepLength()\n\n"},
  {"SetStepLength", PyvtkHyperStreamline_SetStepLength, METH_VARARGS,
   "SetStepLength(self, _arg:float) -> None\nC++: virtual void SetStepLength(double _arg)\n\nSet / get the length of a tube segment composing the\nhyperstreamline. The length is specified as a fraction of the\ndiagonal length of the input bounding box.\n"},
  {"GetStepLengthMinValue", PyvtkHyperStreamline_GetStepLengthMinValue, METH_VARARGS,
   "GetStepLengthMinValue(self) -> float\nC++: virtual double GetStepLengthMinValue()\n\n"},
  {"GetStepLengthMaxValue", PyvtkHyperStreamline_GetStepLengthMaxValue, METH_VARARGS,
   "GetStepLengthMaxValue(self) -> float\nC++: virtual double GetStepLengthMaxValue()\n\n"},
  {"GetStepLength", PyvtkHyperStreamline_GetStepLength, METH_VARARGS,
   "GetStepLength(self) -> float\nC++: virtual double GetStepLength()\n\n"},
  {"SetIntegrationDirection", PyvtkHyperStreamline_SetIntegrationDirection, METH_VARARGS,
   "SetIntegrationDirection(self, _arg:int) -> None\nC++: virtual void SetIntegrationDirection(int _arg)\n\nSpecify the direction in which to integrate the hyperstreamline.\n"},
  {"GetIntegrationDirectionMinValue", PyvtkHyperStreamline_GetIntegrationDirectionMinValue, METH_VARARGS,
   "GetIntegrationDirectionMinValue(self) -> int\nC++: virtual int GetIntegrationDirectionMinValue()\n\n"},
  {"GetIntegrationDirectionMaxValue", PyvtkHyperStreamline_GetIntegrationDirectionMaxValue, METH_VARARGS,
   "GetIntegrationDirectionMaxValue(self) -> int\nC++: virtual int GetIntegrationDirectionMaxValue()\n\n"},
  {"GetIntegrationDirection", PyvtkHyperStreamline_GetIntegrationDirection, METH_VARARGS,
   "GetIntegrationDirection(self) -> int\nC++: virtual int GetIntegrationDirection()\n\n"},
  {"SetIntegrationDirectionToForward", PyvtkHyperStreamline_SetIntegrationDirectionToForward, METH_VARARGS,
   "SetIntegrationDirectionToForward(self) -> None\nC++: void SetIntegrationDirectionToForward()\n\n"},
  {"SetIntegrationDirectionToBackward", PyvtkHyperStreamline_SetIntegrationDirectionToBackward, METH_VARARGS,
   "SetIntegrationDirectionToBackward(self) -> None\nC++: void SetIntegrationDirectionToBackward()\n\n"},
  {"SetIntegrationDirectionToIntegrateBothDirections", PyvtkHyperStreamline_SetIntegrationDirectionToIntegrateBothDirections, METH_VARARGS,
   "SetIntegrationDirectionToIntegrateBothDirections(self) -> None\nC++: void SetIntegrationDirectionToIntegrateBothDirections()\n\n"},
  {"SetTerminalEigenvalue", PyvtkHyperStreamline_SetTerminalEigenvalue, METH_VARARGS,
   "SetTerminalEigenvalue(self, _arg:float) -> None\nC++: virtual void SetTerminalEigenvalue(double _arg)\n\nSet/get terminal eigenvalue.  If major eigenvalue falls below\nthis value, hyperstreamline terminates propagation.\n"},
  {"GetTerminalEigenvalueMinValue", PyvtkHyperStreamline_GetTerminalEigenvalueMinValue, METH_VARARGS,
   "GetTerminalEigenvalueMinValue(self) -> float\nC++: virtual double GetTerminalEigenvalueMinValue()\n\n"},
  {"GetTerminalEigenvalueMaxValue", PyvtkHyperStreamline_GetTerminalEigenvalueMaxValue, METH_VARARGS,
   "GetTerminalEigenvalueMaxValue(self) -> float\nC++: virtual double GetTerminalEigenvalueMaxValue()\n\n"},
  {"GetTerminalEigenvalue", PyvtkHyperStreamline_GetTerminalEigenvalue, METH_VARARGS,
   "GetTerminalEigenvalue(self) -> float\nC++: virtual double GetTerminalEigenvalue()\n\n"},
  {"SetNumberOfSides", PyvtkHyperStreamline_SetNumberOfSides, METH_VARARGS,
   "SetNumberOfSides(self, _arg:int) -> None\nC++: virtual void SetNumberOfSides(int _arg)\n\nSet / get the number of sides for the hyperstreamlines. At a\nminimum, number of sides is 3.\n"},
  {"GetNumberOfSidesMinValue", PyvtkHyperStreamline_GetNumberOfSidesMinValue, METH_VARARGS,
   "GetNumberOfSidesMinValue(self) -> int\nC++: virtual int GetNumberOfSidesMinValue()\n\n"},
  {"GetNumberOfSidesMaxValue", PyvtkHyperStreamline_GetNumberOfSidesMaxValue, METH_VARARGS,
   "GetNumberOfSidesMaxValue(self) -> int\nC++: virtual int GetNumberOfSidesMaxValue()\n\n"},
  {"GetNumberOfSides", PyvtkHyperStreamline_GetNumberOfSides, METH_VARARGS,
   "GetNumberOfSides(self) -> int\nC++: virtual int GetNumberOfSides()\n\n"},
  {"SetRadius", PyvtkHyperStreamline_SetRadius, METH_VARARGS,
   "SetRadius(self, _arg:float) -> None\nC++: virtual void SetRadius(double _arg)\n\nSet / get the initial tube radius. This is the maximum\n\"elliptical\" radius at the beginning of the tube. Radius varies\nbased on ratio of eigenvalues.  Note that tube section is\nactually elliptical and may become a point or line in cross\nsection in some cases.\n"},
  {"GetRadiusMinValue", PyvtkHyperStreamline_GetRadiusMinValue, METH_VARARGS,
   "GetRadiusMinValue(self) -> float\nC++: virtual double GetRadiusMinValue()\n\n"},
  {"GetRadiusMaxValue", PyvtkHyperStreamline_GetRadiusMaxValue, METH_VARARGS,
   "GetRadiusMaxValue(self) -> float\nC++: virtual double GetRadiusMaxValue()\n\n"},
  {"GetRadius", PyvtkHyperStreamline_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: virtual double GetRadius()\n\n"},
  {"SetLogScaling", PyvtkHyperStreamline_SetLogScaling, METH_VARARGS,
   "SetLogScaling(self, _arg:int) -> None\nC++: virtual void SetLogScaling(vtkTypeBool _arg)\n\nTurn on/off logarithmic scaling. If scaling is on, the log base\n10 of the computed eigenvalues are used to scale the cross\nsection radii.\n"},
  {"GetLogScaling", PyvtkHyperStreamline_GetLogScaling, METH_VARARGS,
   "GetLogScaling(self) -> int\nC++: virtual vtkTypeBool GetLogScaling()\n\n"},
  {"LogScalingOn", PyvtkHyperStreamline_LogScalingOn, METH_VARARGS,
   "LogScalingOn(self) -> None\nC++: virtual void LogScalingOn()\n\n"},
  {"LogScalingOff", PyvtkHyperStreamline_LogScalingOff, METH_VARARGS,
   "LogScalingOff(self) -> None\nC++: virtual void LogScalingOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperStreamline_Doc =
  "vtkHyperStreamline - generate hyperstreamline in arbitrary dataset\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkHyperStreamline is a filter that integrates through a tensor field\n"
  "to generate a hyperstreamline. The integration is along the maximum\n"
  "eigenvector and the cross section of the hyperstreamline is defined\n"
  "by the two other eigenvectors. Thus the shape of the hyperstreamline\n"
  "is \"tube-like\", with the cross section being elliptical.\n"
  "Hyperstreamlines are used to visualize tensor fields.\n\n"
  "The starting point of a hyperstreamline can be defined in one of two\n"
  "ways. First, you may specify an initial position. This is a x-y-z\n"
  "global coordinate. The second option is to specify a starting\n"
  "location. This is cellId, subId, and cell parametric coordinates.\n\n"
  "The integration of the hyperstreamline occurs through the major\n"
  "eigenvector field. IntegrationStepLength controls the step length\n"
  "within each cell (i.e., this is the fraction of the cell length). The\n"
  "length of the hyperstreamline is controlled by\n"
  "MaximumPropagationDistance. This parameter is the length of the\n"
  "hyperstreamline in units of distance. The tube itself is composed of\n"
  "many small sub-tubes - NumberOfSides controls the number of sides in\n"
  "the tube, and StepLength controls the length of the sub-tubes.\n\n"
  "Because hyperstreamlines are often created near regions of\n"
  "singularities, it is possible to control the scaling of the tube\n"
  "cross section by using a logarithmic scale. Use LogScalingOn to turn\n"
  "this capability on. The Radius value controls the initial radius of\n"
  "the tube.\n\n"
  "@sa\n"
  "vtkTensorGlyph\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperStreamline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkHyperStreamline", // tp_name
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
  PyvtkHyperStreamline_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperStreamline_StaticNew()
{
  return vtkHyperStreamline::New();
}

PyObject *PyvtkHyperStreamline_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperStreamline_Type, PyvtkHyperStreamline_Methods,
    "vtkHyperStreamline",
 &PyvtkHyperStreamline_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperStreamline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperStreamline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperStreamline", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_INTEGRATE_FORWARD", 0 },
        { "VTK_INTEGRATE_BACKWARD", 1 },
        { "VTK_INTEGRATE_BOTH_DIRECTIONS", 2 },
        { "VTK_INTEGRATE_MAJOR_EIGENVECTOR", 0 },
        { "VTK_INTEGRATE_MEDIUM_EIGENVECTOR", 1 },
        { "VTK_INTEGRATE_MINOR_EIGENVECTOR", 2 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

