// python wrapper for vtkImageConvolve
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageConvolve.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageConvolve(PyObject *dict); }
extern "C" { PyObject *PyvtkImageConvolve_ClassNew(); }


static PyObject *
PyvtkImageConvolve_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageConvolve::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageConvolve::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageConvolve *tempr = vtkImageConvolve::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageConvolve *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageConvolve::NewInstance());

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
PyvtkImageConvolve_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageConvolve::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageConvolve::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_GetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetKernelSize() :
      op->vtkImageConvolve::GetKernelSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_SetKernel3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 9;
  double temp0[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetKernel3x3(temp0);
    }
    else
    {
      op->vtkImageConvolve::SetKernel3x3(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_SetKernel5x5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel5x5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 25;
  double temp0[25];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetKernel5x5(temp0);
    }
    else
    {
      op->vtkImageConvolve::SetKernel5x5(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_SetKernel7x7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel7x7");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 49;
  double temp0[49];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetKernel7x7(temp0);
    }
    else
    {
      op->vtkImageConvolve::SetKernel7x7(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_GetKernel3x3_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  size_t sizer = 9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetKernel3x3() :
      op->vtkImageConvolve::GetKernel3x3());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageConvolve_GetKernel3x3_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 9;
  double temp0[9];
  double save0[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetKernel3x3(temp0);
    }
    else
    {
      op->vtkImageConvolve::GetKernel3x3(temp0);
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
PyvtkImageConvolve_GetKernel3x3(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageConvolve_GetKernel3x3_s1(self, args);
    case 1:
      return PyvtkImageConvolve_GetKernel3x3_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetKernel3x3");
  return nullptr;
}


static PyObject *
PyvtkImageConvolve_GetKernel5x5_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel5x5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  size_t sizer = 25;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetKernel5x5() :
      op->vtkImageConvolve::GetKernel5x5());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageConvolve_GetKernel5x5_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel5x5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 25;
  double temp0[25];
  double save0[25];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetKernel5x5(temp0);
    }
    else
    {
      op->vtkImageConvolve::GetKernel5x5(temp0);
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
PyvtkImageConvolve_GetKernel5x5(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageConvolve_GetKernel5x5_s1(self, args);
    case 1:
      return PyvtkImageConvolve_GetKernel5x5_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetKernel5x5");
  return nullptr;
}


static PyObject *
PyvtkImageConvolve_GetKernel7x7_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel7x7");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  size_t sizer = 49;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetKernel7x7() :
      op->vtkImageConvolve::GetKernel7x7());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageConvolve_GetKernel7x7_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel7x7");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 49;
  double temp0[49];
  double save0[49];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetKernel7x7(temp0);
    }
    else
    {
      op->vtkImageConvolve::GetKernel7x7(temp0);
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
PyvtkImageConvolve_GetKernel7x7(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageConvolve_GetKernel7x7_s1(self, args);
    case 1:
      return PyvtkImageConvolve_GetKernel7x7_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetKernel7x7");
  return nullptr;
}


static PyObject *
PyvtkImageConvolve_SetKernel3x3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel3x3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 27;
  double temp0[27];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetKernel3x3x3(temp0);
    }
    else
    {
      op->vtkImageConvolve::SetKernel3x3x3(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_SetKernel5x5x5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel5x5x5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 125;
  double temp0[125];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetKernel5x5x5(temp0);
    }
    else
    {
      op->vtkImageConvolve::SetKernel5x5x5(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_SetKernel7x7x7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel7x7x7");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 343;
  double temp0[343];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetKernel7x7x7(temp0);
    }
    else
    {
      op->vtkImageConvolve::SetKernel7x7x7(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_GetKernel3x3x3_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel3x3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  size_t sizer = 27;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetKernel3x3x3() :
      op->vtkImageConvolve::GetKernel3x3x3());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageConvolve_GetKernel3x3x3_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel3x3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 27;
  double temp0[27];
  double save0[27];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetKernel3x3x3(temp0);
    }
    else
    {
      op->vtkImageConvolve::GetKernel3x3x3(temp0);
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
PyvtkImageConvolve_GetKernel3x3x3(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageConvolve_GetKernel3x3x3_s1(self, args);
    case 1:
      return PyvtkImageConvolve_GetKernel3x3x3_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetKernel3x3x3");
  return nullptr;
}


static PyObject *
PyvtkImageConvolve_GetKernel5x5x5_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel5x5x5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  size_t sizer = 125;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetKernel5x5x5() :
      op->vtkImageConvolve::GetKernel5x5x5());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageConvolve_GetKernel5x5x5_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel5x5x5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 125;
  double temp0[125];
  double save0[125];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetKernel5x5x5(temp0);
    }
    else
    {
      op->vtkImageConvolve::GetKernel5x5x5(temp0);
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
PyvtkImageConvolve_GetKernel5x5x5(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageConvolve_GetKernel5x5x5_s1(self, args);
    case 1:
      return PyvtkImageConvolve_GetKernel5x5x5_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetKernel5x5x5");
  return nullptr;
}


static PyObject *
PyvtkImageConvolve_GetKernel7x7x7_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel7x7x7");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t sizer = 343;
    double *tempr = (ap.IsBound() ?
      op->GetKernel7x7x7() :
      op->vtkImageConvolve::GetKernel7x7x7());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageConvolve_GetKernel7x7x7_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel7x7x7");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 343;
  double temp0[343];
  double save0[343];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetKernel7x7x7(temp0);
    }
    else
    {
      op->vtkImageConvolve::GetKernel7x7x7(temp0);
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
PyvtkImageConvolve_GetKernel7x7x7(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageConvolve_GetKernel7x7x7_s1(self, args);
    case 1:
      return PyvtkImageConvolve_GetKernel7x7x7_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetKernel7x7x7");
  return nullptr;
}

static PyMethodDef PyvtkImageConvolve_Methods[] = {
  {"IsTypeOf", PyvtkImageConvolve_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageConvolve_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageConvolve_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageConvolve\nC++: static vtkImageConvolve *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageConvolve_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageConvolve\nC++: vtkImageConvolve *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageConvolve_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageConvolve_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetKernelSize", PyvtkImageConvolve_GetKernelSize, METH_VARARGS,
   "GetKernelSize(self) -> (int, int, int)\nC++: virtual int *GetKernelSize()\n\nGet the kernel size\n"},
  {"SetKernel3x3", PyvtkImageConvolve_SetKernel3x3, METH_VARARGS,
   "SetKernel3x3(self, kernel:(float, float, float, float, float,\n    float, float, float, float)) -> None\nC++: void SetKernel3x3(const double kernel[9])\n\nSet the kernel to be a given 3x3 or 5x5 or 7x7 kernel.\n"},
  {"SetKernel5x5", PyvtkImageConvolve_SetKernel5x5, METH_VARARGS,
   "SetKernel5x5(self, kernel:(float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float)) -> None\nC++: void SetKernel5x5(const double kernel[25])\n\n"},
  {"SetKernel7x7", PyvtkImageConvolve_SetKernel7x7, METH_VARARGS,
   "SetKernel7x7(self, kernel:(float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float)) -> None\nC++: void SetKernel7x7(const double kernel[49])\n\n"},
  {"GetKernel3x3", PyvtkImageConvolve_GetKernel3x3, METH_VARARGS,
   "GetKernel3x3(self) -> (float, float, float, float, float, float,\n    float, float, float)\nC++: double *GetKernel3x3()\nGetKernel3x3(self, kernel:[float, float, float, float, float,\n    float, float, float, float]) -> None\nC++: void GetKernel3x3(double kernel[9])\n\nReturn an array that contains the kernel.\n"},
  {"GetKernel5x5", PyvtkImageConvolve_GetKernel5x5, METH_VARARGS,
   "GetKernel5x5(self) -> (float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float)\nC++: double *GetKernel5x5()\nGetKernel5x5(self, kernel:[float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float]) -> None\nC++: void GetKernel5x5(double kernel[25])\n\n"},
  {"GetKernel7x7", PyvtkImageConvolve_GetKernel7x7, METH_VARARGS,
   "GetKernel7x7(self) -> (float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\nC++: double *GetKernel7x7()\nGetKernel7x7(self, kernel:[float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float]) -> None\nC++: void GetKernel7x7(double kernel[49])\n\n"},
  {"SetKernel3x3x3", PyvtkImageConvolve_SetKernel3x3x3, METH_VARARGS,
   "SetKernel3x3x3(self, kernel:(float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float)) -> None\nC++: void SetKernel3x3x3(const double kernel[27])\n\nSet the kernel to be a 3x3x3 or 5x5x5 or 7x7x7 kernel.\n"},
  {"SetKernel5x5x5", PyvtkImageConvolve_SetKernel5x5x5, METH_VARARGS,
   "SetKernel5x5x5(self, kernel:(float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float)) -> None\nC++: void SetKernel5x5x5(const double kernel[125])\n\n"},
  {"SetKernel7x7x7", PyvtkImageConvolve_SetKernel7x7x7, METH_VARARGS,
   "\n\n"},
  {"GetKernel3x3x3", PyvtkImageConvolve_GetKernel3x3x3, METH_VARARGS,
   "GetKernel3x3x3(self) -> (float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float)\nC++: double *GetKernel3x3x3()\nGetKernel3x3x3(self, kernel:[float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float]) -> None\nC++: void GetKernel3x3x3(double kernel[27])\n\nReturn an array that contains the kernel\n"},
  {"GetKernel5x5x5", PyvtkImageConvolve_GetKernel5x5x5, METH_VARARGS,
   "GetKernel5x5x5(self) -> (float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\nC++: double *GetKernel5x5x5()\n\n"},
  {"GetKernel7x7x7", PyvtkImageConvolve_GetKernel7x7x7, METH_VARARGS,
   "GetKernel7x7x7(self) -> (float, ...)\nC++: double *GetKernel7x7x7()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageConvolve_Doc =
  "vtkImageConvolve - Convolution of an image with a kernel.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageConvolve convolves the image with a 3D NxNxN kernel or a 2D\n"
  "NxN kernel.  The output image is cropped to the same size as the\n"
  "input.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageConvolve_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingGeneral.vtkImageConvolve", // tp_name
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
  PyvtkImageConvolve_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageConvolve_StaticNew()
{
  return vtkImageConvolve::New();
}

PyObject *PyvtkImageConvolve_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageConvolve_Type, PyvtkImageConvolve_Methods,
    "vtkImageConvolve",
 &PyvtkImageConvolve_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageConvolve(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageConvolve_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageConvolve", o) != 0)
  {
    Py_DECREF(o);
  }

}

