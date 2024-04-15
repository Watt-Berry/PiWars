// python wrapper for vtkByteSwap
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkByteSwap.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkByteSwap(PyObject *dict); }
extern "C" { PyObject *PyvtkByteSwap_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkByteSwap_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkByteSwap::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkByteSwap_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkByteSwap *op = static_cast<vtkByteSwap *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkByteSwap::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkByteSwap_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkByteSwap *tempr = vtkByteSwap::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkByteSwap_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkByteSwap *op = static_cast<vtkByteSwap *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkByteSwap *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkByteSwap::NewInstance());

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
PyvtkByteSwap_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkByteSwap::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkByteSwap_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkByteSwap *op = static_cast<vtkByteSwap *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkByteSwap::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkByteSwap_SwapLE_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapLE");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapLE(temp0);

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
PyvtkByteSwap_SwapLE_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapLE");

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapLE(temp0);

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
PyvtkByteSwap_SwapLE_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapLE");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapLE(temp0);

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
PyvtkByteSwap_SwapLE_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapLE");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(2*size0);
  long *temp0 = store0.Data();
  long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapLE(temp0);

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
PyvtkByteSwap_SwapLE_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapLE");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapLE(temp0);

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

static PyMethodDef PyvtkByteSwap_SwapLE_Methods[] = {
  {"SwapLE", PyvtkByteSwap_SwapLE_s1, METH_VARARGS | METH_STATIC,
   "P *d"},
  {"SwapLE", PyvtkByteSwap_SwapLE_s2, METH_VARARGS | METH_STATIC,
   "z"},
  {"SwapLE", PyvtkByteSwap_SwapLE_s3, METH_VARARGS | METH_STATIC,
   "P *i"},
  {"SwapLE", PyvtkByteSwap_SwapLE_s4, METH_VARARGS | METH_STATIC,
   "P *l"},
  {"SwapLE", PyvtkByteSwap_SwapLE_s5, METH_VARARGS | METH_STATIC,
   "P *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkByteSwap_SwapLE(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkByteSwap_SwapLE_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SwapLE");
  return nullptr;
}


static PyObject *
PyvtkByteSwap_SwapBE_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapBE");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapBE(temp0);

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
PyvtkByteSwap_SwapBE_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapBE");

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapBE(temp0);

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
PyvtkByteSwap_SwapBE_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapBE");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapBE(temp0);

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
PyvtkByteSwap_SwapBE_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapBE");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(2*size0);
  long *temp0 = store0.Data();
  long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapBE(temp0);

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
PyvtkByteSwap_SwapBE_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapBE");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapBE(temp0);

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

static PyMethodDef PyvtkByteSwap_SwapBE_Methods[] = {
  {"SwapBE", PyvtkByteSwap_SwapBE_s1, METH_VARARGS | METH_STATIC,
   "P *d"},
  {"SwapBE", PyvtkByteSwap_SwapBE_s2, METH_VARARGS | METH_STATIC,
   "z"},
  {"SwapBE", PyvtkByteSwap_SwapBE_s3, METH_VARARGS | METH_STATIC,
   "P *i"},
  {"SwapBE", PyvtkByteSwap_SwapBE_s4, METH_VARARGS | METH_STATIC,
   "P *l"},
  {"SwapBE", PyvtkByteSwap_SwapBE_s5, METH_VARARGS | METH_STATIC,
   "P *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkByteSwap_SwapBE(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkByteSwap_SwapBE_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SwapBE");
  return nullptr;
}


static PyObject *
PyvtkByteSwap_SwapLERange_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapLERange");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapLERange(temp0, temp1);

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
PyvtkByteSwap_SwapLERange_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapLERange");

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapLERange(temp0, temp1);

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
PyvtkByteSwap_SwapLERange_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapLERange");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapLERange(temp0, temp1);

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
PyvtkByteSwap_SwapLERange_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapLERange");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(2*size0);
  long *temp0 = store0.Data();
  long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapLERange(temp0, temp1);

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
PyvtkByteSwap_SwapLERange_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapLERange");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapLERange(temp0, temp1);

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

static PyMethodDef PyvtkByteSwap_SwapLERange_Methods[] = {
  {"SwapLERange", PyvtkByteSwap_SwapLERange_s1, METH_VARARGS | METH_STATIC,
   "PK *d"},
  {"SwapLERange", PyvtkByteSwap_SwapLERange_s2, METH_VARARGS | METH_STATIC,
   "zK"},
  {"SwapLERange", PyvtkByteSwap_SwapLERange_s3, METH_VARARGS | METH_STATIC,
   "PK *i"},
  {"SwapLERange", PyvtkByteSwap_SwapLERange_s4, METH_VARARGS | METH_STATIC,
   "PK *l"},
  {"SwapLERange", PyvtkByteSwap_SwapLERange_s5, METH_VARARGS | METH_STATIC,
   "PK *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkByteSwap_SwapLERange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkByteSwap_SwapLERange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SwapLERange");
  return nullptr;
}


static PyObject *
PyvtkByteSwap_SwapBERange_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapBERange");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapBERange(temp0, temp1);

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
PyvtkByteSwap_SwapBERange_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapBERange");

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapBERange(temp0, temp1);

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
PyvtkByteSwap_SwapBERange_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapBERange");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapBERange(temp0, temp1);

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
PyvtkByteSwap_SwapBERange_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapBERange");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(2*size0);
  long *temp0 = store0.Data();
  long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapBERange(temp0, temp1);

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
PyvtkByteSwap_SwapBERange_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapBERange");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkByteSwap::SwapBERange(temp0, temp1);

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

static PyMethodDef PyvtkByteSwap_SwapBERange_Methods[] = {
  {"SwapBERange", PyvtkByteSwap_SwapBERange_s1, METH_VARARGS | METH_STATIC,
   "PK *d"},
  {"SwapBERange", PyvtkByteSwap_SwapBERange_s2, METH_VARARGS | METH_STATIC,
   "zK"},
  {"SwapBERange", PyvtkByteSwap_SwapBERange_s3, METH_VARARGS | METH_STATIC,
   "PK *i"},
  {"SwapBERange", PyvtkByteSwap_SwapBERange_s4, METH_VARARGS | METH_STATIC,
   "PK *l"},
  {"SwapBERange", PyvtkByteSwap_SwapBERange_s5, METH_VARARGS | METH_STATIC,
   "PK *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkByteSwap_SwapBERange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkByteSwap_SwapBERange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SwapBERange");
  return nullptr;
}


static PyObject *
PyvtkByteSwap_Swap2LE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap2LE");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    vtkByteSwap::Swap2LE(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkByteSwap_Swap4LE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap4LE");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    vtkByteSwap::Swap4LE(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkByteSwap_Swap8LE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap8LE");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    vtkByteSwap::Swap8LE(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkByteSwap_Swap2LERange(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap2LERange");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    vtkByteSwap::Swap2LERange(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkByteSwap_Swap4LERange(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap4LERange");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    vtkByteSwap::Swap4LERange(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkByteSwap_Swap8LERange(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap8LERange");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    vtkByteSwap::Swap8LERange(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkByteSwap_Swap2BE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap2BE");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    vtkByteSwap::Swap2BE(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkByteSwap_Swap4BE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap4BE");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    vtkByteSwap::Swap4BE(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkByteSwap_Swap8BE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap8BE");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    vtkByteSwap::Swap8BE(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkByteSwap_Swap2BERange(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap2BERange");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    vtkByteSwap::Swap2BERange(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkByteSwap_Swap4BERange(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap4BERange");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    vtkByteSwap::Swap4BERange(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkByteSwap_Swap8BERange(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap8BERange");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    vtkByteSwap::Swap8BERange(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkByteSwap_SwapVoidRange(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapVoidRange");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  size_t temp1;
  size_t temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkByteSwap::SwapVoidRange(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}

static PyMethodDef PyvtkByteSwap_Methods[] = {
  {"IsTypeOf", PyvtkByteSwap_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkByteSwap_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkByteSwap_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkByteSwap\nC++: static vtkByteSwap *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkByteSwap_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkByteSwap\nC++: vtkByteSwap *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkByteSwap_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkByteSwap_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SwapLE", PyvtkByteSwap_SwapLE, METH_VARARGS,
   "SwapLE(p:[float, ...]) -> None\nC++: static void SwapLE(double *p)\nSwapLE(p:str) -> None\nC++: static void SwapLE(char *p)\nSwapLE(p:[int, ...]) -> None\nC++: static void SwapLE(int *p)\nSwapLE(p:[int, ...]) -> None\nC++: static void SwapLE(long *p)\nSwapLE(p:[int, ...]) -> None\nC++: static void SwapLE(long long *p)\n\n"},
  {"SwapBE", PyvtkByteSwap_SwapBE, METH_VARARGS,
   "SwapBE(p:[float, ...]) -> None\nC++: static void SwapBE(double *p)\nSwapBE(p:str) -> None\nC++: static void SwapBE(char *p)\nSwapBE(p:[int, ...]) -> None\nC++: static void SwapBE(int *p)\nSwapBE(p:[int, ...]) -> None\nC++: static void SwapBE(long *p)\nSwapBE(p:[int, ...]) -> None\nC++: static void SwapBE(long long *p)\n\n"},
  {"SwapLERange", PyvtkByteSwap_SwapLERange, METH_VARARGS,
   "SwapLERange(p:[float, ...], num:int) -> None\nC++: static void SwapLERange(double *p, size_t num)\nSwapLERange(p:str, num:int) -> None\nC++: static void SwapLERange(char *p, size_t num)\nSwapLERange(p:[int, ...], num:int) -> None\nC++: static void SwapLERange(int *p, size_t num)\nSwapLERange(p:[int, ...], num:int) -> None\nC++: static void SwapLERange(long *p, size_t num)\nSwapLERange(p:[int, ...], num:int) -> None\nC++: static void SwapLERange(long long *p, size_t num)\n\n"},
  {"SwapBERange", PyvtkByteSwap_SwapBERange, METH_VARARGS,
   "SwapBERange(p:[float, ...], num:int) -> None\nC++: static void SwapBERange(double *p, size_t num)\nSwapBERange(p:str, num:int) -> None\nC++: static void SwapBERange(char *p, size_t num)\nSwapBERange(p:[int, ...], num:int) -> None\nC++: static void SwapBERange(int *p, size_t num)\nSwapBERange(p:[int, ...], num:int) -> None\nC++: static void SwapBERange(long *p, size_t num)\nSwapBERange(p:[int, ...], num:int) -> None\nC++: static void SwapBERange(long long *p, size_t num)\n\n"},
  {"Swap2LE", PyvtkByteSwap_Swap2LE, METH_VARARGS,
   "Swap2LE(p:Pointer) -> None\nC++: static void Swap2LE(void *p)\n\nSwap 2, 4, or 8 bytes for storage as Little Endian.\n"},
  {"Swap4LE", PyvtkByteSwap_Swap4LE, METH_VARARGS,
   "Swap4LE(p:Pointer) -> None\nC++: static void Swap4LE(void *p)\n\n"},
  {"Swap8LE", PyvtkByteSwap_Swap8LE, METH_VARARGS,
   "Swap8LE(p:Pointer) -> None\nC++: static void Swap8LE(void *p)\n\n"},
  {"Swap2LERange", PyvtkByteSwap_Swap2LERange, METH_VARARGS,
   "Swap2LERange(p:Pointer, num:int) -> None\nC++: static void Swap2LERange(void *p, size_t num)\n\nSwap a block of 2-, 4-, or 8-byte segments for storage as Little\nEndian.\n"},
  {"Swap4LERange", PyvtkByteSwap_Swap4LERange, METH_VARARGS,
   "Swap4LERange(p:Pointer, num:int) -> None\nC++: static void Swap4LERange(void *p, size_t num)\n\n"},
  {"Swap8LERange", PyvtkByteSwap_Swap8LERange, METH_VARARGS,
   "Swap8LERange(p:Pointer, num:int) -> None\nC++: static void Swap8LERange(void *p, size_t num)\n\n"},
  {"Swap2BE", PyvtkByteSwap_Swap2BE, METH_VARARGS,
   "Swap2BE(p:Pointer) -> None\nC++: static void Swap2BE(void *p)\n\nSwap 2, 4, or 8 bytes for storage as Big Endian.\n"},
  {"Swap4BE", PyvtkByteSwap_Swap4BE, METH_VARARGS,
   "Swap4BE(p:Pointer) -> None\nC++: static void Swap4BE(void *p)\n\n"},
  {"Swap8BE", PyvtkByteSwap_Swap8BE, METH_VARARGS,
   "Swap8BE(p:Pointer) -> None\nC++: static void Swap8BE(void *p)\n\n"},
  {"Swap2BERange", PyvtkByteSwap_Swap2BERange, METH_VARARGS,
   "Swap2BERange(p:Pointer, num:int) -> None\nC++: static void Swap2BERange(void *p, size_t num)\n\nSwap a block of 2-, 4-, or 8-byte segments for storage as Big\nEndian.\n"},
  {"Swap4BERange", PyvtkByteSwap_Swap4BERange, METH_VARARGS,
   "Swap4BERange(p:Pointer, num:int) -> None\nC++: static void Swap4BERange(void *p, size_t num)\n\n"},
  {"Swap8BERange", PyvtkByteSwap_Swap8BERange, METH_VARARGS,
   "Swap8BERange(p:Pointer, num:int) -> None\nC++: static void Swap8BERange(void *p, size_t num)\n\n"},
  {"SwapVoidRange", PyvtkByteSwap_SwapVoidRange, METH_VARARGS,
   "SwapVoidRange(buffer:Pointer, numWords:int, wordSize:int) -> None\nC++: static void SwapVoidRange(void *buffer, size_t numWords,\n    size_t wordSize)\n\nSwaps the bytes of a buffer.  Uses an arbitrary word size, but\nassumes the word size is divisible by two.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkByteSwap_Doc =
  "vtkByteSwap - perform machine dependent byte swapping\n\n"
  "Superclass: vtkObject\n\n"
  "vtkByteSwap is used by other classes to perform machine dependent\n"
  "byte swapping. Byte swapping is often used when reading or writing\n"
  "binary files.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkByteSwap_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkByteSwap", // tp_name
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
  PyvtkByteSwap_Doc, // tp_doc
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

static vtkObjectBase *PyvtkByteSwap_StaticNew()
{
  return vtkByteSwap::New();
}

PyObject *PyvtkByteSwap_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkByteSwap_Type, PyvtkByteSwap_Methods,
    "vtkByteSwap",
 &PyvtkByteSwap_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkByteSwap(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkByteSwap_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkByteSwap", o) != 0)
  {
    Py_DECREF(o);
  }

}

