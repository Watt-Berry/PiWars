// python wrapper for vtkLinearTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLinearTransform.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLinearTransform(PyObject *dict); }
extern "C" { PyObject *PyvtkLinearTransform_ClassNew(); }

#ifndef DECLARED_PyvtkHomogeneousTransform_ClassNew
extern "C" { PyObject *PyvtkHomogeneousTransform_ClassNew(); }
#define DECLARED_PyvtkHomogeneousTransform_ClassNew
#endif

static PyObject *
PyvtkLinearTransform_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLinearTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLinearTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransform_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLinearTransform *tempr = vtkLinearTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLinearTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLinearTransform::NewInstance());

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
PyvtkLinearTransform_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLinearTransform::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransform_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLinearTransform::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransform_TransformNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TransformNormal(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransform::TransformNormal(temp0, temp1);
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
PyvtkLinearTransform_TransformNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformNormal(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformNormal(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformNormal_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformNormal(temp0) :
      op->vtkLinearTransform::TransformNormal(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLinearTransform_TransformNormal_s1(self, args);
    case 3:
      return PyvtkLinearTransform_TransformNormal_s2(self, args);
    case 1:
      return PyvtkLinearTransform_TransformNormal_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformNormal");
  return nullptr;
}


static PyObject *
PyvtkLinearTransform_TransformFloatNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  float temp0;
  float temp1;
  float temp2;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    float *tempr = (ap.IsBound() ?
      op->TransformFloatNormal(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformFloatNormal(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformFloatNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    float *tempr = (ap.IsBound() ?
      op->TransformFloatNormal(temp0) :
      op->vtkLinearTransform::TransformFloatNormal(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformFloatNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLinearTransform_TransformFloatNormal_s1(self, args);
    case 1:
      return PyvtkLinearTransform_TransformFloatNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformFloatNormal");
  return nullptr;
}


static PyObject *
PyvtkLinearTransform_TransformDoubleNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoubleNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformDoubleNormal(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformDoubleNormal(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformDoubleNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoubleNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformDoubleNormal(temp0) :
      op->vtkLinearTransform::TransformDoubleNormal(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformDoubleNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLinearTransform_TransformDoubleNormal_s1(self, args);
    case 1:
      return PyvtkLinearTransform_TransformDoubleNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformDoubleNormal");
  return nullptr;
}


static PyObject *
PyvtkLinearTransform_TransformVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformVector(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformVector(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformVector(temp0) :
      op->vtkLinearTransform::TransformVector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformVector_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TransformVector(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransform::TransformVector(temp0, temp1);
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
PyvtkLinearTransform_TransformVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLinearTransform_TransformVector_s1(self, args);
    case 1:
      return PyvtkLinearTransform_TransformVector_s2(self, args);
    case 2:
      return PyvtkLinearTransform_TransformVector_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformVector");
  return nullptr;
}


static PyObject *
PyvtkLinearTransform_TransformFloatVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  float temp0;
  float temp1;
  float temp2;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    float *tempr = (ap.IsBound() ?
      op->TransformFloatVector(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformFloatVector(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformFloatVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFloatVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    float *tempr = (ap.IsBound() ?
      op->TransformFloatVector(temp0) :
      op->vtkLinearTransform::TransformFloatVector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformFloatVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLinearTransform_TransformFloatVector_s1(self, args);
    case 1:
      return PyvtkLinearTransform_TransformFloatVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformFloatVector");
  return nullptr;
}


static PyObject *
PyvtkLinearTransform_TransformDoubleVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoubleVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  double temp0;
  double temp1;
  double temp2;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformDoubleVector(temp0, temp1, temp2) :
      op->vtkLinearTransform::TransformDoubleVector(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformDoubleVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformDoubleVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double *tempr = (ap.IsBound() ?
      op->TransformDoubleVector(temp0) :
      op->vtkLinearTransform::TransformDoubleVector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLinearTransform_TransformDoubleVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLinearTransform_TransformDoubleVector_s1(self, args);
    case 1:
      return PyvtkLinearTransform_TransformDoubleVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformDoubleVector");
  return nullptr;
}


static PyObject *
PyvtkLinearTransform_TransformPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  vtkPoints *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->TransformPoints(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransform::TransformPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransform_TransformNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->TransformNormals(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransform::TransformNormals(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransform_TransformVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->TransformVectors(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransform::TransformVectors(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransform_GetLinearInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinearInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLinearTransform *tempr = (ap.IsBound() ?
      op->GetLinearInverse() :
      op->vtkLinearTransform::GetLinearInverse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InternalTransformPoint(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransform::InternalTransformPoint(temp0, temp1);
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
PyvtkLinearTransform_InternalTransformNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InternalTransformNormal(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransform::InternalTransformNormal(temp0, temp1);
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
PyvtkLinearTransform_InternalTransformVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InternalTransformVector(temp0, temp1);
    }
    else
    {
      op->vtkLinearTransform::InternalTransformVector(temp0, temp1);
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
PyvtkLinearTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearTransform *op = static_cast<vtkLinearTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  static size_t size2[2] = { 3, 3 };
  double temp2[3][3];
  double save2[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(*temp2, *save2, size2[0]*size2[1]);

    if (ap.IsBound())
    {
      op->InternalTransformDerivative(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLinearTransform::InternalTransformDerivative(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(2, *temp2, 2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLinearTransform_Methods[] = {
  {"IsTypeOf", PyvtkLinearTransform_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLinearTransform_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLinearTransform_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLinearTransform\nC++: static vtkLinearTransform *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLinearTransform_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLinearTransform\nC++: vtkLinearTransform *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLinearTransform_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLinearTransform_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"TransformNormal", PyvtkLinearTransform_TransformNormal, METH_VARARGS,
   "TransformNormal(self, in_:(float, float, float), out:[float,\n    float, float]) -> None\nC++: void TransformNormal(const double in[3], double out[3])\nTransformNormal(self, x:float, y:float, z:float) -> (float, float,\n     float)\nC++: double *TransformNormal(double x, double y, double z)\nTransformNormal(self, normal:(float, float, float)) -> (float,\n    float, float)\nC++: double *TransformNormal(const double normal[3])\n\nApply the transformation to a double-precision normal. You can\nuse the same array to store both the input and output.\n"},
  {"TransformFloatNormal", PyvtkLinearTransform_TransformFloatNormal, METH_VARARGS,
   "TransformFloatNormal(self, x:float, y:float, z:float) -> (float,\n    float, float)\nC++: float *TransformFloatNormal(float x, float y, float z)\nTransformFloatNormal(self, normal:(float, float, float)) -> (\n    float, float, float)\nC++: float *TransformFloatNormal(const float normal[3])\n\nApply the transformation to an (x,y,z) normal. Use this if you\nare programming in python or Java.\n"},
  {"TransformDoubleNormal", PyvtkLinearTransform_TransformDoubleNormal, METH_VARARGS,
   "TransformDoubleNormal(self, x:float, y:float, z:float) -> (float,\n    float, float)\nC++: double *TransformDoubleNormal(double x, double y, double z)\nTransformDoubleNormal(self, normal:(float, float, float)) -> (\n    float, float, float)\nC++: double *TransformDoubleNormal(const double normal[3])\n\nApply the transformation to a double-precision (x,y,z) normal.\nUse this if you are programming in python or Java.\n"},
  {"TransformVector", PyvtkLinearTransform_TransformVector, METH_VARARGS,
   "TransformVector(self, x:float, y:float, z:float) -> (float, float,\n     float)\nC++: double *TransformVector(double x, double y, double z)\nTransformVector(self, normal:(float, float, float)) -> (float,\n    float, float)\nC++: double *TransformVector(const double normal[3])\nTransformVector(self, in_:(float, float, float), out:[float,\n    float, float]) -> None\nC++: void TransformVector(const double in[3], double out[3])\n\nSynonymous with TransformDoubleVector(x,y,z). Use this if you are\nprogramming in python or Java.\n"},
  {"TransformFloatVector", PyvtkLinearTransform_TransformFloatVector, METH_VARARGS,
   "TransformFloatVector(self, x:float, y:float, z:float) -> (float,\n    float, float)\nC++: float *TransformFloatVector(float x, float y, float z)\nTransformFloatVector(self, vec:(float, float, float)) -> (float,\n    float, float)\nC++: float *TransformFloatVector(const float vec[3])\n\nApply the transformation to an (x,y,z) vector. Use this if you\nare programming in python or Java.\n"},
  {"TransformDoubleVector", PyvtkLinearTransform_TransformDoubleVector, METH_VARARGS,
   "TransformDoubleVector(self, x:float, y:float, z:float) -> (float,\n    float, float)\nC++: double *TransformDoubleVector(double x, double y, double z)\nTransformDoubleVector(self, vec:(float, float, float)) -> (float,\n    float, float)\nC++: double *TransformDoubleVector(const double vec[3])\n\nApply the transformation to a double-precision (x,y,z) vector.\nUse this if you are programming in python or Java.\n"},
  {"TransformPoints", PyvtkLinearTransform_TransformPoints, METH_VARARGS,
   "TransformPoints(self, inPts:vtkPoints, outPts:vtkPoints) -> None\nC++: void TransformPoints(vtkPoints *inPts, vtkPoints *outPts)\n    override;\n\nApply the transformation to a series of points, and append the\nresults to outPts.\n"},
  {"TransformNormals", PyvtkLinearTransform_TransformNormals, METH_VARARGS,
   "TransformNormals(self, inNms:vtkDataArray, outNms:vtkDataArray)\n    -> None\nC++: virtual void TransformNormals(vtkDataArray *inNms,\n    vtkDataArray *outNms)\n\nApply the transformation to a series of normals, and append the\nresults to outNms.\n"},
  {"TransformVectors", PyvtkLinearTransform_TransformVectors, METH_VARARGS,
   "TransformVectors(self, inVrs:vtkDataArray, outVrs:vtkDataArray)\n    -> None\nC++: virtual void TransformVectors(vtkDataArray *inVrs,\n    vtkDataArray *outVrs)\n\nApply the transformation to a series of vectors, and append the\nresults to outVrs.\n"},
  {"GetLinearInverse", PyvtkLinearTransform_GetLinearInverse, METH_VARARGS,
   "GetLinearInverse(self) -> vtkLinearTransform\nC++: vtkLinearTransform *GetLinearInverse()\n\nJust like GetInverse, but it includes a typecast to\nvtkLinearTransform.\n"},
  {"InternalTransformPoint", PyvtkLinearTransform_InternalTransformPoint, METH_VARARGS,
   "InternalTransformPoint(self, in_:(float, float, float),\n    out:[float, float, float]) -> None\nC++: void InternalTransformPoint(const double in[3],\n    double out[3]) override;\n\n"},
  {"InternalTransformNormal", PyvtkLinearTransform_InternalTransformNormal, METH_VARARGS,
   "InternalTransformNormal(self, in_:(float, float, float),\n    out:[float, float, float]) -> None\nC++: virtual void InternalTransformNormal(const double in[3],\n    double out[3])\n\n"},
  {"InternalTransformVector", PyvtkLinearTransform_InternalTransformVector, METH_VARARGS,
   "InternalTransformVector(self, in_:(float, float, float),\n    out:[float, float, float]) -> None\nC++: virtual void InternalTransformVector(const double in[3],\n    double out[3])\n\n"},
  {"InternalTransformDerivative", PyvtkLinearTransform_InternalTransformDerivative, METH_VARARGS,
   "InternalTransformDerivative(self, in_:(float, float, float),\n    out:[float, float, float], derivative:[[float, float, float],\n    [float, float, float], [float, float, float]]) -> None\nC++: void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3]) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLinearTransform_Doc =
  "vtkLinearTransform - abstract superclass for linear transformations\n\n"
  "Superclass: vtkHomogeneousTransform\n\n"
  "vtkLinearTransform provides a generic interface for linear (affine or\n"
  "12 degree-of-freedom) geometric transformations.\n\n"
  "@warning\n"
  "Portions of this class (i.e., when transforming arrays of points\n"
  "and/or associated attributes such as normals and vectors) has been\n"
  "threaded with vtkSMPTools. Using TBB or other non-sequential type\n"
  "(set in the CMake variable VTK_SMP_IMPLEMENTATION_TYPE) may improve\n"
  "performance significantly.\n\n"
  "@sa\n"
  "vtkTransform vtkIdentityTransform\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLinearTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonTransforms.vtkLinearTransform", // tp_name
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
  PyvtkLinearTransform_Doc, // tp_doc
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

PyObject *PyvtkLinearTransform_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLinearTransform_Type, PyvtkLinearTransform_Methods,
    "vtkLinearTransform",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkHomogeneousTransform_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLinearTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLinearTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLinearTransform", o) != 0)
  {
    Py_DECREF(o);
  }

}

