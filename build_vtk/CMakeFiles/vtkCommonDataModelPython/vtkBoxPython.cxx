// python wrapper for vtkBox
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBox.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBox(PyObject *dict); }
extern "C" { PyObject *PyvtkBox_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static PyObject *
PyvtkBox_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBox::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBox_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBox::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBox_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBox *tempr = vtkBox::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBox_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBox *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBox::NewInstance());

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
PyvtkBox_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBox::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBox_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBox::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBox_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0) :
      op->vtkBox::EvaluateFunction(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBox_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->EvaluateFunction(temp0, temp1);
    }
    else
    {
      op->vtkBox::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBox_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0, temp1, temp2) :
      op->vtkBox::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBox_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBox_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkBox_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkBox_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}


static PyObject *
PyvtkBox_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

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
      op->EvaluateGradient(temp0, temp1);
    }
    else
    {
      op->vtkBox::EvaluateGradient(temp0, temp1);
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
PyvtkBox_SetXMin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

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
      op->SetXMin(temp0);
    }
    else
    {
      op->vtkBox::SetXMin(temp0);
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
PyvtkBox_SetXMin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

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
      op->SetXMin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBox::SetXMin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBox_SetXMin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBox_SetXMin_s1(self, args);
    case 3:
      return PyvtkBox_SetXMin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXMin");
  return nullptr;
}


static PyObject *
PyvtkBox_GetXMin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

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
      op->GetXMin(temp0);
    }
    else
    {
      op->vtkBox::GetXMin(temp0);
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
PyvtkBox_GetXMin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

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
      op->GetXMin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBox::GetXMin(temp0, temp1, temp2);
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
PyvtkBox_GetXMin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBox_GetXMin_s1(self, args);
    case 3:
      return PyvtkBox_GetXMin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetXMin");
  return nullptr;
}


static PyObject *
PyvtkBox_SetXMax_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

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
      op->SetXMax(temp0);
    }
    else
    {
      op->vtkBox::SetXMax(temp0);
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
PyvtkBox_SetXMax_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

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
      op->SetXMax(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBox::SetXMax(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBox_SetXMax(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBox_SetXMax_s1(self, args);
    case 3:
      return PyvtkBox_SetXMax_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXMax");
  return nullptr;
}


static PyObject *
PyvtkBox_GetXMax_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

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
      op->GetXMax(temp0);
    }
    else
    {
      op->vtkBox::GetXMax(temp0);
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
PyvtkBox_GetXMax_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

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
      op->GetXMax(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBox::GetXMax(temp0, temp1, temp2);
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
PyvtkBox_GetXMax(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBox_GetXMax_s1(self, args);
    case 3:
      return PyvtkBox_GetXMax_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetXMax");
  return nullptr;
}


static PyObject *
PyvtkBox_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkBox::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBox_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkBox::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBox_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkBox_SetBounds_s1(self, args);
    case 1:
      return PyvtkBox_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}


static PyObject *
PyvtkBox_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkBox::GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
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
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBox_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkBox::GetBounds(temp0);
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
PyvtkBox_GetBounds_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkBox::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkBox_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkBox_GetBounds_s1(self, args);
    case 1:
      return PyvtkBox_GetBounds_s2(self, args);
    case 0:
      return PyvtkBox_GetBounds_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkBox_AddBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBox *op = static_cast<vtkBox *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->AddBounds(temp0);
    }
    else
    {
      op->vtkBox::AddBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBox_IntersectBox(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IntersectBox");

  const size_t size0 = 6;
  double temp0[6];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  double temp4;
  double temp5 = 0.0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5, 6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    char tempr = vtkBox::IntersectBox(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBox_IntersectWithLine(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IntersectWithLine");

  const size_t size0 = 6;
  double temp0[6];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double temp3;
  double temp4;
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  const size_t size6 = 3;
  double temp6[3];
  double save6[3];
  int temp7;
  int temp8;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(9) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
  {
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp6, save6, size6);

    int tempr = vtkBox::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(7, temp7);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(8, temp8);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBox_IntersectWithInfiniteLine(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IntersectWithInfiniteLine");

  const size_t size0 = 6;
  double temp0[6];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double temp3;
  double temp4;
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  const size_t size6 = 3;
  double temp6[3];
  double save6[3];
  int temp7;
  int temp8;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(9) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
  {
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp6, save6, size6);

    bool tempr = vtkBox::IntersectWithInfiniteLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(7, temp7);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(8, temp8);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBox_IntersectWithPlane_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IntersectWithPlane");

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = vtkBox::IntersectWithPlane(temp0, temp1, temp2);

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

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBox_IntersectWithPlane_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IntersectWithPlane");

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 18;
  double temp3[18];
  double save3[18];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = vtkBox::IntersectWithPlane(temp0, temp1, temp2, temp3);

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

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBox_IntersectWithPlane(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkBox_IntersectWithPlane_s1(self, args);
    case 4:
      return PyvtkBox_IntersectWithPlane_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IntersectWithPlane");
  return nullptr;
}


static PyObject *
PyvtkBox_IsBoxInFrustum(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsBoxInFrustum");

  const size_t size0 = 24;
  double temp0[24];
  double save0[24];
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = vtkBox::IsBoxInFrustum(temp0, temp1);

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBox_Methods[] = {
  {"IsTypeOf", PyvtkBox_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBox_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBox_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBox\nC++: static vtkBox *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBox_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBox\nC++: vtkBox *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBox_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBox_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"EvaluateFunction", PyvtkBox_EvaluateFunction, METH_VARARGS,
   "EvaluateFunction(self, x:[float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nEvaluateFunction(self, input:vtkDataArray, output:vtkDataArray)\n    -> None\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nEvaluateFunction(self, x:float, y:float, z:float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate function at position x-y-z and return value.  You should\ngenerally not call this method directly, you should use\nFunctionValue() instead.  This method must be implemented by any\nderived class.\n"},
  {"EvaluateGradient", PyvtkBox_EvaluateGradient, METH_VARARGS,
   "EvaluateGradient(self, x:[float, float, float], n:[float, float,\n    float]) -> None\nC++: void EvaluateGradient(double x[3], double n[3]) override;\n\nEvaluate the gradient of the box.\n"},
  {"SetXMin", PyvtkBox_SetXMin, METH_VARARGS,
   "SetXMin(self, p:[float, float, float]) -> None\nC++: void SetXMin(double p[3])\nSetXMin(self, x:float, y:float, z:float) -> None\nC++: void SetXMin(double x, double y, double z)\n\nSet / get the bounding box using various methods.\n"},
  {"GetXMin", PyvtkBox_GetXMin, METH_VARARGS,
   "GetXMin(self, p:[float, float, float]) -> None\nC++: void GetXMin(double p[3])\nGetXMin(self, x:float, y:float, z:float) -> None\nC++: void GetXMin(double &x, double &y, double &z)\n\n"},
  {"SetXMax", PyvtkBox_SetXMax, METH_VARARGS,
   "SetXMax(self, p:[float, float, float]) -> None\nC++: void SetXMax(double p[3])\nSetXMax(self, x:float, y:float, z:float) -> None\nC++: void SetXMax(double x, double y, double z)\n\n"},
  {"GetXMax", PyvtkBox_GetXMax, METH_VARARGS,
   "GetXMax(self, p:[float, float, float]) -> None\nC++: void GetXMax(double p[3])\nGetXMax(self, x:float, y:float, z:float) -> None\nC++: void GetXMax(double &x, double &y, double &z)\n\n"},
  {"SetBounds", PyvtkBox_SetBounds, METH_VARARGS,
   "SetBounds(self, xMin:float, xMax:float, yMin:float, yMax:float,\n    zMin:float, zMax:float) -> None\nC++: void SetBounds(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\nSetBounds(self, bounds:(float, float, float, float, float, float))\n     -> None\nC++: void SetBounds(const double bounds[6])\n\n"},
  {"GetBounds", PyvtkBox_GetBounds, METH_VARARGS,
   "GetBounds(self, xMin:float, xMax:float, yMin:float, yMax:float,\n    zMin:float, zMax:float) -> None\nC++: void GetBounds(double &xMin, double &xMax, double &yMin,\n    double &yMax, double &zMin, double &zMax)\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\nGetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\n"},
  {"AddBounds", PyvtkBox_AddBounds, METH_VARARGS,
   "AddBounds(self, bounds:(float, float, float, float, float, float))\n     -> None\nC++: void AddBounds(const double bounds[6])\n\nA special method that allows union set operation on bounding\nboxes. Start with a SetBounds(). Subsequent AddBounds() methods\nare union set operations on the original bounds. Retrieve the\nfinal bounds with a GetBounds() method.\n"},
  {"IntersectBox", PyvtkBox_IntersectBox, METH_VARARGS,
   "IntersectBox(bounds:(float, float, float, float, float, float),\n    origin:(float, float, float), dir:(float, float, float),\n    coord:[float, float, float], t:float, tolerance:float=0.0)\n    -> str\nC++: static char IntersectBox(const double bounds[6],\n    const double origin[3], const double dir[3], double coord[3],\n    double &t, double tolerance=0.0)\n\nBounding box intersection with line modified from Graphics Gems\nVol I. The method returns a non-zero value if the bounding box is\nhit. Origin[3] starts the ray, dir[3] is the vector components of\nthe ray in the x-y-z directions, coord[3] is the location of hit,\nand t is the parametric coordinate along line. (Notes: the\nintersection ray dir[3] is NOT normalized.  Valid intersections\nwill only occur between 0<=t<=1.)\n"},
  {"IntersectWithLine", PyvtkBox_IntersectWithLine, METH_VARARGS,
   "IntersectWithLine(bounds:(float, float, float, float, float,\n    float), p1:(float, float, float), p2:(float, float, float),\n    t1:float, t2:float, x1:[float, float, float], x2:[float,\n    float, float], plane1:int, plane2:int) -> int\nC++: static int IntersectWithLine(const double bounds[6],\n    const double p1[3], const double p2[3], double &t1,\n    double &t2, double x1[3], double x2[3], int &plane1,\n    int &plane2)\n\nIntersect a line with the box.  Give the endpoints of the line in\np1 and p2.  The parameteric distances from p1 to the entry and\nexit points are returned in t1 and t2, where t1 and t2 are\nclamped to the range [0,1].  The entry and exit planes are\nreturned in plane1 and plane2 where integers (0, 1, 2, 3, 4, 5)\nstand for the (xmin, xmax, ymin, ymax, zmin, zmax) planes\nrespectively, and a value of -1 means that no intersection\noccurred.  The actual intersection coordinates are stored in x1\nand x2, which can be set to nullptr of you do not need them to be\nreturned.  The function return value will be zero if the line is\nwholly outside of the box.\n"},
  {"IntersectWithInfiniteLine", PyvtkBox_IntersectWithInfiniteLine, METH_VARARGS,
   "IntersectWithInfiniteLine(bounds:(float, float, float, float,\n    float, float), p1:(float, float, float), p2:(float, float,\n    float), t1:float, t2:float, x1:[float, float, float],\n    x2:[float, float, float], plane1:int, plane2:int) -> bool\nC++: static bool IntersectWithInfiniteLine(const double bounds[6],\n     const double p1[3], const double p2[3], double &t1,\n    double &t2, double x1[3], double x2[3], int &plane1,\n    int &plane2)\n\nSame method as vtkBox::IntersectWithLine, except that t1 and t2\ncan be outside of [0,1]. t1 is the distance of x1 to p1 in\nparametric coordinates, and t2 is the distance of x2 to p1 in\nparametric coordinates as well. In vtkBox::IntersectWithInLine,\nit is assumed that [p1,p2] is a segment, here, it is assumed that\nit is a line with no ends. t1 <= t2, which means that x1 is\nalways \"before\" x2 on the line parameterized by [p1,p2]. x1 and\nx2 can be set to nullptr without crash.\n"},
  {"IntersectWithPlane", PyvtkBox_IntersectWithPlane, METH_VARARGS,
   "IntersectWithPlane(bounds:[float, float, float, float, float,\n    float], origin:[float, float, float], normal:[float, float,\n    float]) -> int\nC++: static vtkTypeBool IntersectWithPlane(double bounds[6],\n    double origin[3], double normal[3])\nIntersectWithPlane(bounds:[float, float, float, float, float,\n    float], origin:[float, float, float], normal:[float, float,\n    float], xout:[float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float]) -> int\nC++: static vtkTypeBool IntersectWithPlane(double bounds[6],\n    double origin[3], double normal[3], double xout[18])\n\nPlane intersection with the box. The plane is infinite in extent\nand defined by an origin and normal. The function indicates\nwhether the plane intersects, not the particulars of intersection\npoints and such. The function returns non-zero if the plane and\nbox intersect; zero otherwise.\n"},
  {"IsBoxInFrustum", PyvtkBox_IsBoxInFrustum, METH_VARARGS,
   "IsBoxInFrustum(planes:[float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float], bounds:[float, float, float, float, float, float])\n    -> int\nC++: static vtkTypeBool IsBoxInFrustum(double planes[24],\n    double bounds[6])\n\nIs a box in a frustum. Returns true if the box is in the frustum\neven partially. The frustum is defined as 6 planes. This method\nis not exact may and return true for cases where there is no\nintersection. It should never return false when there is an\nintersection though.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBox_Doc =
  "vtkBox - implicit function for a bounding box\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "vtkBox computes the implicit function and/or gradient for a\n"
  "axis-aligned bounding box. (The superclasses transform can be used to\n"
  "modify this orientation.) Each side of the box is orthogonal to all\n"
  "other sides meeting along shared edges and all faces are orthogonal\n"
  "to the x-y-z coordinate axes.  (If you wish to orient this box\n"
  "differently, recall that the superclass vtkImplicitFunction supports\n"
  "a transformation matrix.) vtkBox is a concrete implementation of\n"
  "vtkImplicitFunction.\n\n"
  "@sa\n"
  "vtkCubeSource vtkImplicitFunction vtkBoundingBox\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBox_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkBox", // tp_name
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
  PyvtkBox_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBox_StaticNew()
{
  return vtkBox::New();
}

PyObject *PyvtkBox_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBox_Type, PyvtkBox_Methods,
    "vtkBox",
 &PyvtkBox_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImplicitFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBox(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBox_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBox", o) != 0)
  {
    Py_DECREF(o);
  }

}

