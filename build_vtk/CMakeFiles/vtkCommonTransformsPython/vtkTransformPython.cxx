// python wrapper for vtkTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTransform.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTransform(PyObject *dict); }
extern "C" { PyObject *PyvtkTransform_ClassNew(); }

#ifndef DECLARED_PyvtkLinearTransform_ClassNew
extern "C" { PyObject *PyvtkLinearTransform_ClassNew(); }
#define DECLARED_PyvtkLinearTransform_ClassNew
#endif

static PyObject *
PyvtkTransform_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransform *tempr = vtkTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransform::NewInstance());

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
PyvtkTransform_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTransform::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTransform::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_Identity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Identity();
    }
    else
    {
      op->vtkTransform::Identity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Inverse();
    }
    else
    {
      op->vtkTransform::Inverse();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_Translate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      op->Translate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTransform::Translate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform_Translate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->Translate(temp0);
    }
    else
    {
      op->vtkTransform::Translate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform_Translate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTransform_Translate_s1(self, args);
    case 1:
      return PyvtkTransform_Translate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Translate");
  return nullptr;
}


static PyObject *
PyvtkTransform_RotateWXYZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      op->RotateWXYZ(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkTransform::RotateWXYZ(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform_RotateWXYZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->RotateWXYZ(temp0, temp1);
    }
    else
    {
      op->vtkTransform::RotateWXYZ(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform_RotateWXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkTransform_RotateWXYZ_s1(self, args);
    case 2:
      return PyvtkTransform_RotateWXYZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RotateWXYZ");
  return nullptr;
}


static PyObject *
PyvtkTransform_RotateX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RotateX(temp0);
    }
    else
    {
      op->vtkTransform::RotateX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_RotateY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RotateY(temp0);
    }
    else
    {
      op->vtkTransform::RotateY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_RotateZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RotateZ(temp0);
    }
    else
    {
      op->vtkTransform::RotateZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_Scale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      op->Scale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTransform::Scale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform_Scale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->Scale(temp0);
    }
    else
    {
      op->vtkTransform::Scale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform_Scale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTransform_Scale_s1(self, args);
    case 1:
      return PyvtkTransform_Scale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Scale");
  return nullptr;
}


static PyObject *
PyvtkTransform_SetMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetMatrix(temp0);
    }
    else
    {
      op->vtkTransform::SetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform_SetMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMatrix(temp0);
    }
    else
    {
      op->vtkTransform::SetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTransform_SetMatrix_Methods[] = {
  {"SetMatrix", PyvtkTransform_SetMatrix_s1, METH_VARARGS,
   "@V *vtkMatrix4x4"},
  {"SetMatrix", PyvtkTransform_SetMatrix_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTransform_SetMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTransform_SetMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMatrix");
  return nullptr;
}


static PyObject *
PyvtkTransform_Concatenate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->Concatenate(temp0);
    }
    else
    {
      op->vtkTransform::Concatenate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform_Concatenate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->Concatenate(temp0);
    }
    else
    {
      op->vtkTransform::Concatenate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform_Concatenate_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Concatenate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  vtkLinearTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLinearTransform"))
  {
    if (ap.IsBound())
    {
      op->Concatenate(temp0);
    }
    else
    {
      op->vtkTransform::Concatenate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTransform_Concatenate_Methods[] = {
  {"Concatenate", PyvtkTransform_Concatenate_s1, METH_VARARGS,
   "@V *vtkMatrix4x4"},
  {"Concatenate", PyvtkTransform_Concatenate_s2, METH_VARARGS,
   "@P *d"},
  {"Concatenate", PyvtkTransform_Concatenate_s3, METH_VARARGS,
   "@V *vtkLinearTransform"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTransform_Concatenate(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTransform_Concatenate_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Concatenate");
  return nullptr;
}


static PyObject *
PyvtkTransform_PreMultiply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreMultiply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreMultiply();
    }
    else
    {
      op->vtkTransform::PreMultiply();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_PostMultiply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostMultiply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PostMultiply();
    }
    else
    {
      op->vtkTransform::PostMultiply();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_GetNumberOfConcatenatedTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConcatenatedTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfConcatenatedTransforms() :
      op->vtkTransform::GetNumberOfConcatenatedTransforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_GetConcatenatedTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConcatenatedTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkLinearTransform *tempr = (ap.IsBound() ?
      op->GetConcatenatedTransform(temp0) :
      op->vtkTransform::GetConcatenatedTransform(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_GetOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      op->GetOrientation(temp0);
    }
    else
    {
      op->vtkTransform::GetOrientation(temp0);
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
PyvtkTransform_GetOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkTransform::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkTransform_GetOrientation_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetOrientation");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkTransform::GetOrientation(temp0, temp1);

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
PyvtkTransform_GetOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkTransform_GetOrientation_s1(self, args);
    case 0:
      return PyvtkTransform_GetOrientation_s2(self, args);
    case 2:
      return PyvtkTransform_GetOrientation_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrientation");
  return nullptr;
}


static PyObject *
PyvtkTransform_GetOrientationWXYZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      op->GetOrientationWXYZ(temp0);
    }
    else
    {
      op->vtkTransform::GetOrientationWXYZ(temp0);
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
PyvtkTransform_GetOrientationWXYZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientationWXYZ() :
      op->vtkTransform::GetOrientationWXYZ());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkTransform_GetOrientationWXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkTransform_GetOrientationWXYZ_s1(self, args);
    case 0:
      return PyvtkTransform_GetOrientationWXYZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrientationWXYZ");
  return nullptr;
}


static PyObject *
PyvtkTransform_GetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      op->GetPosition(temp0);
    }
    else
    {
      op->vtkTransform::GetPosition(temp0);
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
PyvtkTransform_GetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkTransform::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkTransform_GetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkTransform_GetPosition_s1(self, args);
    case 0:
      return PyvtkTransform_GetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition");
  return nullptr;
}


static PyObject *
PyvtkTransform_GetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

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
      op->GetScale(temp0);
    }
    else
    {
      op->vtkTransform::GetScale(temp0);
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
PyvtkTransform_GetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkTransform::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkTransform_GetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkTransform_GetScale_s1(self, args);
    case 0:
      return PyvtkTransform_GetScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScale");
  return nullptr;
}


static PyObject *
PyvtkTransform_GetInverse_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetInverse(temp0);
    }
    else
    {
      op->vtkTransform::GetInverse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransform_GetInverse_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetInverse() :
      op->vtkTransform::GetInverse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTransform_GetInverse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkTransform_GetInverse_s1(self, args);
    case 0:
      return PyvtkTransform_GetInverse_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInverse");
  return nullptr;
}


static PyObject *
PyvtkTransform_GetTranspose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranspose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetTranspose(temp0);
    }
    else
    {
      op->vtkTransform::GetTranspose(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  vtkLinearTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLinearTransform"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkTransform::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLinearTransform *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkTransform::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_GetInverseFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInverseFlag() :
      op->vtkTransform::GetInverseFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Push();
    }
    else
    {
      op->vtkTransform::Push();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_Pop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Pop();
    }
    else
    {
      op->vtkTransform::Pop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_CircuitCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CircuitCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    int tempr = (ap.IsBound() ?
      op->CircuitCheck(temp0) :
      op->vtkTransform::CircuitCheck(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkTransform::MakeTransform());

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
PyvtkTransform_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTransform::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransform_MultiplyPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransform *op = static_cast<vtkTransform *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MultiplyPoint(temp0, temp1);
    }
    else
    {
      op->vtkTransform::MultiplyPoint(temp0, temp1);
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

static PyMethodDef PyvtkTransform_Methods[] = {
  {"IsTypeOf", PyvtkTransform_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTransform_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTransform_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTransform\nC++: static vtkTransform *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTransform_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTransform\nC++: vtkTransform *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTransform_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTransform_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Identity", PyvtkTransform_Identity, METH_VARARGS,
   "Identity(self) -> None\nC++: void Identity()\n\nSet the transformation to the identity transformation.  If the\ntransform has an Input, then the transformation will be reset so\nthat it is the same as the Input.\n"},
  {"Inverse", PyvtkTransform_Inverse, METH_VARARGS,
   "Inverse(self) -> None\nC++: void Inverse() override;\n\nInvert the transformation.  This will also set a flag so that the\ntransformation will use the inverse of its Input, if an Input has\nbeen set.\n"},
  {"Translate", PyvtkTransform_Translate, METH_VARARGS,
   "Translate(self, x:float, y:float, z:float) -> None\nC++: void Translate(double x, double y, double z)\nTranslate(self, x:(float, float, float)) -> None\nC++: void Translate(const double x[3])\n\nCreate a translation matrix and concatenate it with the current\ntransformation according to PreMultiply or PostMultiply\nsemantics.\n"},
  {"RotateWXYZ", PyvtkTransform_RotateWXYZ, METH_VARARGS,
   "RotateWXYZ(self, angle:float, x:float, y:float, z:float) -> None\nC++: void RotateWXYZ(double angle, double x, double y, double z)\nRotateWXYZ(self, angle:float, axis:(float, float, float)) -> None\nC++: void RotateWXYZ(double angle, const double axis[3])\n\nCreate a rotation matrix and concatenate it with the current\ntransformation according to PreMultiply or PostMultiply\nsemantics. The angle is in degrees, and (x,y,z) specifies the\naxis that the rotation will be performed around.\n"},
  {"RotateX", PyvtkTransform_RotateX, METH_VARARGS,
   "RotateX(self, angle:float) -> None\nC++: void RotateX(double angle)\n\nCreate a rotation matrix about the X, Y, or Z axis and\nconcatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.  The angle is expressed in\ndegrees.\n"},
  {"RotateY", PyvtkTransform_RotateY, METH_VARARGS,
   "RotateY(self, angle:float) -> None\nC++: void RotateY(double angle)\n\n"},
  {"RotateZ", PyvtkTransform_RotateZ, METH_VARARGS,
   "RotateZ(self, angle:float) -> None\nC++: void RotateZ(double angle)\n\n"},
  {"Scale", PyvtkTransform_Scale, METH_VARARGS,
   "Scale(self, x:float, y:float, z:float) -> None\nC++: void Scale(double x, double y, double z)\nScale(self, s:(float, float, float)) -> None\nC++: void Scale(const double s[3])\n\nCreate a scale matrix (i.e. set the diagonal elements to x, y, z)\nand concatenate it with the current transformation according to\nPreMultiply or PostMultiply semantics.\n"},
  {"SetMatrix", PyvtkTransform_SetMatrix, METH_VARARGS,
   "SetMatrix(self, matrix:vtkMatrix4x4) -> None\nC++: void SetMatrix(vtkMatrix4x4 *matrix)\nSetMatrix(self, elements:(float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float)) -> None\nC++: void SetMatrix(const double elements[16])\n\nSet the current matrix directly. Note: First, the current matrix\nis set to the identity, then the input matrix is concatenated.\n"},
  {"Concatenate", PyvtkTransform_Concatenate, METH_VARARGS,
   "Concatenate(self, matrix:vtkMatrix4x4) -> None\nC++: void Concatenate(vtkMatrix4x4 *matrix)\nConcatenate(self, elements:(float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float)) -> None\nC++: void Concatenate(const double elements[16])\nConcatenate(self, transform:vtkLinearTransform) -> None\nC++: void Concatenate(vtkLinearTransform *transform)\n\nConcatenates the matrix with the current transformation according\nto PreMultiply or PostMultiply semantics.\n"},
  {"PreMultiply", PyvtkTransform_PreMultiply, METH_VARARGS,
   "PreMultiply(self) -> None\nC++: void PreMultiply()\n\nSets the internal state of the transform to PreMultiply. All\nsubsequent operations will occur before those already represented\nin the current transformation.  In homogeneous matrix notation, M\n= M*A where M is the current transformation matrix and A is the\napplied matrix. The default is PreMultiply.\n"},
  {"PostMultiply", PyvtkTransform_PostMultiply, METH_VARARGS,
   "PostMultiply(self) -> None\nC++: void PostMultiply()\n\nSets the internal state of the transform to PostMultiply. All\nsubsequent operations will occur after those already represented\nin the current transformation.  In homogeneous matrix notation, M\n= A*M where M is the current transformation matrix and A is the\napplied matrix. The default is PreMultiply.\n"},
  {"GetNumberOfConcatenatedTransforms", PyvtkTransform_GetNumberOfConcatenatedTransforms, METH_VARARGS,
   "GetNumberOfConcatenatedTransforms(self) -> int\nC++: int GetNumberOfConcatenatedTransforms()\n\nGet the total number of transformations that are linked into this\none via Concatenate() operations or via SetInput().\n"},
  {"GetConcatenatedTransform", PyvtkTransform_GetConcatenatedTransform, METH_VARARGS,
   "GetConcatenatedTransform(self, i:int) -> vtkLinearTransform\nC++: vtkLinearTransform *GetConcatenatedTransform(int i)\n\nGet one of the concatenated transformations as a\nvtkAbstractTransform. These transformations are applied, in\nseries, every time the transformation of a coordinate occurs. \nThis method is provided to make it possible to decompose a\ntransformation into its constituents, for example to save a\ntransformation to a file.\n"},
  {"GetOrientation", PyvtkTransform_GetOrientation, METH_VARARGS,
   "GetOrientation(self, orient:[float, float, float]) -> None\nC++: void GetOrientation(double orient[3])\nGetOrientation(self) -> (float, float, float)\nC++: double *GetOrientation()\nGetOrientation(orient:[float, float, float], matrix:vtkMatrix4x4)\n    -> None\nC++: static void GetOrientation(double orient[3],\n    vtkMatrix4x4 *matrix)\n\nGet the x, y, z orientation angles from the transformation matrix\nas an array of three floating point values.\n"},
  {"GetOrientationWXYZ", PyvtkTransform_GetOrientationWXYZ, METH_VARARGS,
   "GetOrientationWXYZ(self, wxyz:[float, float, float, float])\n    -> None\nC++: void GetOrientationWXYZ(double wxyz[4])\nGetOrientationWXYZ(self) -> (float, float, float, float)\nC++: double *GetOrientationWXYZ()\n\nReturn the wxyz angle+axis representing the current orientation.\nThe angle is in degrees and the axis is a unit vector.\n"},
  {"GetPosition", PyvtkTransform_GetPosition, METH_VARARGS,
   "GetPosition(self, pos:[float, float, float]) -> None\nC++: void GetPosition(double pos[3])\nGetPosition(self) -> (float, float, float)\nC++: double *GetPosition()\n\nReturn the position from the current transformation matrix as an\narray of three floating point numbers. This is simply returning\nthe translation component of the 4x4 matrix.\n"},
  {"GetScale", PyvtkTransform_GetScale, METH_VARARGS,
   "GetScale(self, scale:[float, float, float]) -> None\nC++: void GetScale(double scale[3])\nGetScale(self) -> (float, float, float)\nC++: double *GetScale()\n\nReturn the scale factors of the current transformation matrix as\nan array of three float numbers.  These scale factors are not\nnecessarily about the x, y, and z axes unless unless the scale\ntransformation was applied before any rotations.\n"},
  {"GetInverse", PyvtkTransform_GetInverse, METH_VARARGS,
   "GetInverse(self, inverse:vtkMatrix4x4) -> None\nC++: void GetInverse(vtkMatrix4x4 *inverse)\nGetInverse(self) -> vtkAbstractTransform\nC++: vtkAbstractTransform *GetInverse()\n\nReturn a matrix which is the inverse of the current\ntransformation matrix.\n"},
  {"GetTranspose", PyvtkTransform_GetTranspose, METH_VARARGS,
   "GetTranspose(self, transpose:vtkMatrix4x4) -> None\nC++: void GetTranspose(vtkMatrix4x4 *transpose)\n\nReturn a matrix which is the transpose of the current\ntransformation matrix.  This is equivalent to the inverse if and\nonly if the transformation is a pure rotation with no translation\nor scale.\n"},
  {"SetInput", PyvtkTransform_SetInput, METH_VARARGS,
   "SetInput(self, input:vtkLinearTransform) -> None\nC++: void SetInput(vtkLinearTransform *input)\n\nSet the input for this transformation.  This will be used as the\nbase transformation if it is set.  This method allows you to\nbuild a transform pipeline: if the input is modified, then this\ntransformation will automatically update accordingly.  Note that\nthe InverseFlag, controlled via Inverse(), determines whether\nthis transformation will use the Input or the inverse of the\nInput.\n"},
  {"GetInput", PyvtkTransform_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkLinearTransform\nC++: vtkLinearTransform *GetInput()\n\n"},
  {"GetInverseFlag", PyvtkTransform_GetInverseFlag, METH_VARARGS,
   "GetInverseFlag(self) -> int\nC++: vtkTypeBool GetInverseFlag()\n\nGet the inverse flag of the transformation.  This controls\nwhether it is the Input or the inverse of the Input that is used\nas the base transformation.  The InverseFlag is flipped every\ntime Inverse() is called.  The InverseFlag is off when a\ntransform is first created.\n"},
  {"Push", PyvtkTransform_Push, METH_VARARGS,
   "Push(self) -> None\nC++: void Push()\n\nPushes the current transformation onto the transformation stack.\n"},
  {"Pop", PyvtkTransform_Pop, METH_VARARGS,
   "Pop(self) -> None\nC++: void Pop()\n\nDeletes the transformation on the top of the stack and sets the\ntop to the next transformation on the stack.\n"},
  {"CircuitCheck", PyvtkTransform_CircuitCheck, METH_VARARGS,
   "CircuitCheck(self, transform:vtkAbstractTransform) -> int\nC++: int CircuitCheck(vtkAbstractTransform *transform) override;\n\nCheck for self-reference.  Will return true if concatenating with\nthe specified transform, setting it to be our inverse, or setting\nit to be our input will create a circular reference. CircuitCheck\nis automatically called by SetInput(), SetInverse(), and\nConcatenate(vtkXTransform *).  Avoid using this function, it is\nexperimental.\n"},
  {"MakeTransform", PyvtkTransform_MakeTransform, METH_VARARGS,
   "MakeTransform(self) -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform() override;\n\nMake a new transform of the same type.\n"},
  {"GetMTime", PyvtkTransform_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime to account for input and concatenation.\n"},
  {"MultiplyPoint", PyvtkTransform_MultiplyPoint, METH_VARARGS,
   "MultiplyPoint(self, in_:(float, float, float, float), out:[float,\n    float, float, float]) -> None\nC++: void MultiplyPoint(const double in[4], double out[4])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTransform_Doc =
  "vtkTransform - describes linear transformations via a 4x4 matrix\n\n"
  "Superclass: vtkLinearTransform\n\n"
  "A vtkTransform can be used to describe the full range of linear (also\n"
  "known as affine) coordinate transformations in three dimensions,\n"
  "which are internally represented as a 4x4 homogeneous transformation\n"
  "matrix.  When you create a new vtkTransform, it is always initialized\n"
  "to the identity transformation.\n\n"
  "The SetInput() method allows you to set another transform, instead of\n"
  "the identity transform, to be the base transformation. There is a\n"
  "pipeline mechanism to ensure that when the input is modified, the\n"
  "current transformation will be updated accordingly. This pipeline\n"
  "mechanism is also supported by the Concatenate() method.\n\n"
  "Most of the methods for manipulating this transformation, e.g.\n"
  "Translate, Rotate, and Concatenate, can operate in either PreMultiply\n"
  "(the default) or PostMultiply mode.  In PreMultiply mode, the\n"
  "translation, concatenation, etc. will occur before any\n"
  "transformations which are represented by the current matrix.  In\n"
  "PostMultiply mode, the additional transformation will occur after any\n"
  "transformations represented by the current matrix.\n\n"
  "This class performs all of its operations in a right handed\n"
  "coordinate system with right handed rotations. Some other graphics\n"
  "libraries use left handed coordinate systems and rotations.\n"
  "@sa\n"
  "vtkPerspectiveTransform vtkGeneralTransform vtkMatrix4x4\n"
  "vtkTransformCollection vtkTransformFilter vtkTransformPolyDataFilter\n"
  "vtkImageReslice\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonTransforms.vtkTransform", // tp_name
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
  PyvtkTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransform_StaticNew()
{
  return vtkTransform::New();
}

PyObject *PyvtkTransform_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTransform_Type, PyvtkTransform_Methods,
    "vtkTransform",
 &PyvtkTransform_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkLinearTransform_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransform", o) != 0)
  {
    Py_DECREF(o);
  }

}

