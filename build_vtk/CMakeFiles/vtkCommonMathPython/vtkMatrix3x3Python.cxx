// python wrapper for vtkMatrix3x3
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMatrix3x3.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMatrix3x3(PyObject *dict); }
extern "C" { PyObject *PyvtkMatrix3x3_ClassNew(); }


static PyObject *
PyvtkMatrix3x3_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMatrix3x3::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix3x3_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMatrix3x3::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix3x3_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMatrix3x3 *tempr = vtkMatrix3x3::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix3x3_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix3x3 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMatrix3x3::NewInstance());

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
PyvtkMatrix3x3_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMatrix3x3::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix3x3_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMatrix3x3::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix3x3_DeepCopy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkMatrix3x3::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_DeepCopy_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DeepCopy");

  const size_t size0 = 9;
  double temp0[9];
  double save0[9];
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMatrix3x3::DeepCopy(temp0, temp1);

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
PyvtkMatrix3x3_DeepCopy_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DeepCopy");

  const size_t size0 = 9;
  double temp0[9];
  double save0[9];
  const size_t size1 = 9;
  double temp1[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMatrix3x3::DeepCopy(temp0, temp1);

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
PyvtkMatrix3x3_DeepCopy_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  const size_t size0 = 9;
  double temp0[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkMatrix3x3::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMatrix3x3_DeepCopy_Methods[] = {
  {"DeepCopy", PyvtkMatrix3x3_DeepCopy_s1, METH_VARARGS,
   "@V *vtkMatrix3x3"},
  {"DeepCopy", PyvtkMatrix3x3_DeepCopy_s2, METH_VARARGS | METH_STATIC,
   "PV *d *vtkMatrix3x3"},
  {"DeepCopy", PyvtkMatrix3x3_DeepCopy_s3, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {"DeepCopy", PyvtkMatrix3x3_DeepCopy_s4, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix3x3_DeepCopy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix3x3_DeepCopy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DeepCopy");
  return nullptr;
}


static PyObject *
PyvtkMatrix3x3_Zero_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Zero");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Zero();
    }
    else
    {
      op->vtkMatrix3x3::Zero();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Zero_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Zero");

  const size_t size0 = 9;
  double temp0[9];
  double save0[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMatrix3x3::Zero(temp0);

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
PyvtkMatrix3x3_Zero(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMatrix3x3_Zero_s1(self, args);
    case 1:
      return PyvtkMatrix3x3_Zero_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Zero");
  return nullptr;
}


static PyObject *
PyvtkMatrix3x3_Identity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Identity();
    }
    else
    {
      op->vtkMatrix3x3::Identity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Identity_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Identity");

  const size_t size0 = 9;
  double temp0[9];
  double save0[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMatrix3x3::Identity(temp0);

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
PyvtkMatrix3x3_Identity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMatrix3x3_Identity_s1(self, args);
    case 1:
      return PyvtkMatrix3x3_Identity_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Identity");
  return nullptr;
}


static PyObject *
PyvtkMatrix3x3_Invert_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Invert");

  vtkMatrix3x3 *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    vtkMatrix3x3::Invert(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Invert_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Invert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Invert();
    }
    else
    {
      op->vtkMatrix3x3::Invert();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Invert_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Invert");

  const size_t size0 = 9;
  double temp0[9];
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMatrix3x3::Invert(temp0, temp1);

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

static PyMethodDef PyvtkMatrix3x3_Invert_Methods[] = {
  {"Invert", PyvtkMatrix3x3_Invert_s1, METH_VARARGS | METH_STATIC,
   "VV *vtkMatrix3x3 *vtkMatrix3x3"},
  {"Invert", PyvtkMatrix3x3_Invert_s3, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix3x3_Invert(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix3x3_Invert_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
    case 1:
      return PyvtkMatrix3x3_Invert_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Invert");
  return nullptr;
}


static PyObject *
PyvtkMatrix3x3_Transpose_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Transpose");

  vtkMatrix3x3 *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    vtkMatrix3x3::Transpose(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Transpose_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Transpose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Transpose();
    }
    else
    {
      op->vtkMatrix3x3::Transpose();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Transpose_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Transpose");

  const size_t size0 = 9;
  double temp0[9];
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMatrix3x3::Transpose(temp0, temp1);

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

static PyMethodDef PyvtkMatrix3x3_Transpose_Methods[] = {
  {"Transpose", PyvtkMatrix3x3_Transpose_s1, METH_VARARGS | METH_STATIC,
   "VV *vtkMatrix3x3 *vtkMatrix3x3"},
  {"Transpose", PyvtkMatrix3x3_Transpose_s3, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix3x3_Transpose(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix3x3_Transpose_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
    case 1:
      return PyvtkMatrix3x3_Transpose_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Transpose");
  return nullptr;
}


static PyObject *
PyvtkMatrix3x3_MultiplyPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

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
      op->MultiplyPoint(temp0, temp1);
    }
    else
    {
      op->vtkMatrix3x3::MultiplyPoint(temp0, temp1);
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
PyvtkMatrix3x3_MultiplyPoint_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MultiplyPoint");

  const size_t size0 = 9;
  double temp0[9];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMatrix3x3::MultiplyPoint(temp0, temp1, temp2);

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
PyvtkMatrix3x3_MultiplyPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMatrix3x3_MultiplyPoint_s1(self, args);
    case 3:
      return PyvtkMatrix3x3_MultiplyPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MultiplyPoint");
  return nullptr;
}


static PyObject *
PyvtkMatrix3x3_Multiply3x3_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Multiply3x3");

  vtkMatrix3x3 *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  vtkMatrix3x3 *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp2, "vtkMatrix3x3"))
  {
    vtkMatrix3x3::Multiply3x3(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Multiply3x3_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Multiply3x3");

  const size_t size0 = 9;
  double temp0[9];
  const size_t size1 = 9;
  double temp1[9];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMatrix3x3::Multiply3x3(temp0, temp1, temp2);

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

static PyMethodDef PyvtkMatrix3x3_Multiply3x3_Methods[] = {
  {"Multiply3x3", PyvtkMatrix3x3_Multiply3x3_s1, METH_VARARGS | METH_STATIC,
   "VVV *vtkMatrix3x3 *vtkMatrix3x3 *vtkMatrix3x3"},
  {"Multiply3x3", PyvtkMatrix3x3_Multiply3x3_s2, METH_VARARGS | METH_STATIC,
   "PPP *d *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix3x3_Multiply3x3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix3x3_Multiply3x3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Multiply3x3");
  return nullptr;
}


static PyObject *
PyvtkMatrix3x3_Adjoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Adjoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->Adjoint(temp0, temp1);
    }
    else
    {
      op->vtkMatrix3x3::Adjoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Adjoint_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Adjoint");

  const size_t size0 = 9;
  double temp0[9];
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMatrix3x3::Adjoint(temp0, temp1);

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

static PyMethodDef PyvtkMatrix3x3_Adjoint_Methods[] = {
  {"Adjoint", PyvtkMatrix3x3_Adjoint_s1, METH_VARARGS,
   "@VV *vtkMatrix3x3 *vtkMatrix3x3"},
  {"Adjoint", PyvtkMatrix3x3_Adjoint_s2, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix3x3_Adjoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix3x3_Adjoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Adjoint");
  return nullptr;
}


static PyObject *
PyvtkMatrix3x3_Determinant_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Determinant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->Determinant() :
      op->vtkMatrix3x3::Determinant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Determinant_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant");

  const size_t size0 = 9;
  double temp0[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double tempr = vtkMatrix3x3::Determinant(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix3x3_Determinant(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMatrix3x3_Determinant_s1(self, args);
    case 1:
      return PyvtkMatrix3x3_Determinant_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Determinant");
  return nullptr;
}


static PyObject *
PyvtkMatrix3x3_SetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  int temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetElement(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMatrix3x3::SetElement(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix3x3_GetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetElement(temp0, temp1) :
      op->vtkMatrix3x3::GetElement(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix3x3_IsIdentity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsIdentity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsIdentity() :
      op->vtkMatrix3x3::IsIdentity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix3x3_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix3x3 *op = static_cast<vtkMatrix3x3 *>(vp);

  size_t sizer = 9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetData() :
      op->vtkMatrix3x3::GetData());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkMatrix3x3_Methods[] = {
  {"IsTypeOf", PyvtkMatrix3x3_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMatrix3x3_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMatrix3x3_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMatrix3x3\nC++: static vtkMatrix3x3 *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMatrix3x3_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMatrix3x3\nC++: vtkMatrix3x3 *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMatrix3x3_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMatrix3x3_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DeepCopy", PyvtkMatrix3x3_DeepCopy, METH_VARARGS,
   "DeepCopy(self, source:vtkMatrix3x3) -> None\nC++: void DeepCopy(vtkMatrix3x3 *source)\nDeepCopy(elements:[float, float, float, float, float, float,\n    float, float, float], source:vtkMatrix3x3) -> None\nC++: static void DeepCopy(double elements[9],\n    vtkMatrix3x3 *source)\nDeepCopy(elements:[float, float, float, float, float, float,\n    float, float, float], newElements:(float, float, float, float,\n     float, float, float, float, float)) -> None\nC++: static void DeepCopy(double elements[9],\n    const double newElements[9])\nDeepCopy(self, elements:(float, float, float, float, float, float,\n     float, float, float)) -> None\nC++: void DeepCopy(const double elements[9])\n\nSet the elements of the matrix to the same values as the elements\nof the source Matrix.\n"},
  {"Zero", PyvtkMatrix3x3_Zero, METH_VARARGS,
   "Zero(self) -> None\nC++: void Zero()\nZero(elements:[float, float, float, float, float, float, float,\n    float, float]) -> None\nC++: static void Zero(double elements[9])\n\nSet all of the elements to zero.\n"},
  {"Identity", PyvtkMatrix3x3_Identity, METH_VARARGS,
   "Identity(self) -> None\nC++: void Identity()\nIdentity(elements:[float, float, float, float, float, float,\n    float, float, float]) -> None\nC++: static void Identity(double elements[9])\n\nSet equal to Identity matrix\n"},
  {"Invert", PyvtkMatrix3x3_Invert, METH_VARARGS,
   "Invert(in_:vtkMatrix3x3, out:vtkMatrix3x3) -> None\nC++: static void Invert(vtkMatrix3x3 *in, vtkMatrix3x3 *out)\nInvert(self) -> None\nC++: void Invert()\nInvert(inElements:(float, float, float, float, float, float,\n    float, float, float), outElements:[float, float, float, float,\n     float, float, float, float, float]) -> None\nC++: static void Invert(const double inElements[9],\n    double outElements[9])\n\nMatrix Inversion (adapted from Richard Carling in \"Graphics\nGems,\" Academic Press, 1990).\n"},
  {"Transpose", PyvtkMatrix3x3_Transpose, METH_VARARGS,
   "Transpose(in_:vtkMatrix3x3, out:vtkMatrix3x3) -> None\nC++: static void Transpose(vtkMatrix3x3 *in, vtkMatrix3x3 *out)\nTranspose(self) -> None\nC++: void Transpose()\nTranspose(inElements:(float, float, float, float, float, float,\n    float, float, float), outElements:[float, float, float, float,\n     float, float, float, float, float]) -> None\nC++: static void Transpose(const double inElements[9],\n    double outElements[9])\n\nTranspose the matrix and put it into out.\n"},
  {"MultiplyPoint", PyvtkMatrix3x3_MultiplyPoint, METH_VARARGS,
   "MultiplyPoint(self, in_:(float, float, float), out:[float, float,\n    float]) -> None\nC++: void MultiplyPoint(const double in[3], double out[3])\nMultiplyPoint(elements:(float, float, float, float, float, float,\n    float, float, float), in_:(float, float, float), out:[float,\n    float, float]) -> None\nC++: static void MultiplyPoint(const double elements[9],\n    const double in[3], double out[3])\n\n"},
  {"Multiply3x3", PyvtkMatrix3x3_Multiply3x3, METH_VARARGS,
   "Multiply3x3(a:vtkMatrix3x3, b:vtkMatrix3x3, c:vtkMatrix3x3)\n    -> None\nC++: static void Multiply3x3(vtkMatrix3x3 *a, vtkMatrix3x3 *b,\n    vtkMatrix3x3 *c)\nMultiply3x3(a:(float, float, float, float, float, float, float,\n    float, float), b:(float, float, float, float, float, float,\n    float, float, float), c:[float, float, float, float, float,\n    float, float, float, float]) -> None\nC++: static void Multiply3x3(const double a[9], const double b[9],\n     double c[9])\n\nMultiplies matrices a and b and stores the result in c (c=a*b).\n"},
  {"Adjoint", PyvtkMatrix3x3_Adjoint, METH_VARARGS,
   "Adjoint(self, in_:vtkMatrix3x3, out:vtkMatrix3x3) -> None\nC++: void Adjoint(vtkMatrix3x3 *in, vtkMatrix3x3 *out)\nAdjoint(inElements:(float, float, float, float, float, float,\n    float, float, float), outElements:[float, float, float, float,\n     float, float, float, float, float]) -> None\nC++: static void Adjoint(const double inElements[9],\n    double outElements[9])\n\nCompute adjoint of the matrix and put it into out.\n"},
  {"Determinant", PyvtkMatrix3x3_Determinant, METH_VARARGS,
   "Determinant(self) -> float\nC++: double Determinant()\nDeterminant(elements:(float, float, float, float, float, float,\n    float, float, float)) -> float\nC++: static double Determinant(const double elements[9])\n\nCompute the determinant of the matrix and return it.\n"},
  {"SetElement", PyvtkMatrix3x3_SetElement, METH_VARARGS,
   "SetElement(self, i:int, j:int, value:float) -> None\nC++: void SetElement(int i, int j, double value)\n\nSets the element i,j in the matrix.\n"},
  {"GetElement", PyvtkMatrix3x3_GetElement, METH_VARARGS,
   "GetElement(self, i:int, j:int) -> float\nC++: double GetElement(int i, int j)\n\nReturns the element i,j from the matrix.\n"},
  {"IsIdentity", PyvtkMatrix3x3_IsIdentity, METH_VARARGS,
   "IsIdentity(self) -> bool\nC++: bool IsIdentity()\n\n"},
  {"GetData", PyvtkMatrix3x3_GetData, METH_VARARGS,
   "GetData(self) -> (float, float, float, float, float, float, float,\n     float, float)\nC++: double *GetData()\n\nReturn a pointer to the first element of the matrix (double[9]).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMatrix3x3_Doc =
  "vtkMatrix3x3 - represent and manipulate 3x3 transformation matrices\n\n"
  "Superclass: vtkObject\n\n"
  "vtkMatrix3x3 is a class to represent and manipulate 3x3 matrices.\n"
  "Specifically, it is designed to work on 3x3 transformation matrices\n"
  "found in 2D rendering using homogeneous coordinates [x y w].\n\n"
  "@sa\n"
  "vtkTransform2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMatrix3x3_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonMath.vtkMatrix3x3", // tp_name
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
  PyvtkMatrix3x3_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMatrix3x3_StaticNew()
{
  return vtkMatrix3x3::New();
}

PyObject *PyvtkMatrix3x3_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMatrix3x3_Type, PyvtkMatrix3x3_Methods,
    "vtkMatrix3x3",
 &PyvtkMatrix3x3_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMatrix3x3(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMatrix3x3_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMatrix3x3", o) != 0)
  {
    Py_DECREF(o);
  }

}

