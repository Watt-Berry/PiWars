// python wrapper for vtkMatrix4x4
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMatrix4x4(PyObject *dict); }
extern "C" { PyObject *PyvtkMatrix4x4_ClassNew(); }


static PyObject *
PyvtkMatrix4x4_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMatrix4x4::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMatrix4x4::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMatrix4x4 *tempr = vtkMatrix4x4::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMatrix4x4::NewInstance());

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
PyvtkMatrix4x4_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMatrix4x4::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMatrix4x4::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_DeepCopy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkMatrix4x4::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_DeepCopy_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DeepCopy");

  const size_t size0 = 16;
  double temp0[16];
  double save0[16];
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMatrix4x4::DeepCopy(temp0, temp1);

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
PyvtkMatrix4x4_DeepCopy_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DeepCopy");

  const size_t size0 = 16;
  double temp0[16];
  double save0[16];
  const size_t size1 = 16;
  double temp1[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMatrix4x4::DeepCopy(temp0, temp1);

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
PyvtkMatrix4x4_DeepCopy_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  const size_t size0 = 16;
  double temp0[16];
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
      op->vtkMatrix4x4::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMatrix4x4_DeepCopy_Methods[] = {
  {"DeepCopy", PyvtkMatrix4x4_DeepCopy_s1, METH_VARARGS,
   "@V *vtkMatrix4x4"},
  {"DeepCopy", PyvtkMatrix4x4_DeepCopy_s2, METH_VARARGS | METH_STATIC,
   "PV *d *vtkMatrix4x4"},
  {"DeepCopy", PyvtkMatrix4x4_DeepCopy_s3, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {"DeepCopy", PyvtkMatrix4x4_DeepCopy_s4, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix4x4_DeepCopy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_DeepCopy_Methods;
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
PyvtkMatrix4x4_Zero_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Zero");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Zero();
    }
    else
    {
      op->vtkMatrix4x4::Zero();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Zero_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Zero");

  const size_t size0 = 16;
  double temp0[16];
  double save0[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMatrix4x4::Zero(temp0);

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
PyvtkMatrix4x4_Zero(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMatrix4x4_Zero_s1(self, args);
    case 1:
      return PyvtkMatrix4x4_Zero_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Zero");
  return nullptr;
}


static PyObject *
PyvtkMatrix4x4_Identity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Identity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Identity();
    }
    else
    {
      op->vtkMatrix4x4::Identity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Identity_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Identity");

  const size_t size0 = 16;
  double temp0[16];
  double save0[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMatrix4x4::Identity(temp0);

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
PyvtkMatrix4x4_Identity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMatrix4x4_Identity_s1(self, args);
    case 1:
      return PyvtkMatrix4x4_Identity_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Identity");
  return nullptr;
}


static PyObject *
PyvtkMatrix4x4_IsIdentity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsIdentity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsIdentity() :
      op->vtkMatrix4x4::IsIdentity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_Invert_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Invert");

  vtkMatrix4x4 *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    vtkMatrix4x4::Invert(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Invert_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Invert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Invert();
    }
    else
    {
      op->vtkMatrix4x4::Invert();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Invert_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Invert");

  const size_t size0 = 16;
  double temp0[16];
  const size_t size1 = 16;
  double temp1[16];
  double save1[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMatrix4x4::Invert(temp0, temp1);

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

static PyMethodDef PyvtkMatrix4x4_Invert_Methods[] = {
  {"Invert", PyvtkMatrix4x4_Invert_s1, METH_VARARGS | METH_STATIC,
   "VV *vtkMatrix4x4 *vtkMatrix4x4"},
  {"Invert", PyvtkMatrix4x4_Invert_s3, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix4x4_Invert(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_Invert_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
    case 1:
      return PyvtkMatrix4x4_Invert_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Invert");
  return nullptr;
}


static PyObject *
PyvtkMatrix4x4_Transpose_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Transpose");

  vtkMatrix4x4 *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    vtkMatrix4x4::Transpose(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Transpose_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Transpose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Transpose();
    }
    else
    {
      op->vtkMatrix4x4::Transpose();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Transpose_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Transpose");

  const size_t size0 = 16;
  double temp0[16];
  const size_t size1 = 16;
  double temp1[16];
  double save1[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMatrix4x4::Transpose(temp0, temp1);

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

static PyMethodDef PyvtkMatrix4x4_Transpose_Methods[] = {
  {"Transpose", PyvtkMatrix4x4_Transpose_s1, METH_VARARGS | METH_STATIC,
   "VV *vtkMatrix4x4 *vtkMatrix4x4"},
  {"Transpose", PyvtkMatrix4x4_Transpose_s3, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix4x4_Transpose(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_Transpose_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
    case 1:
      return PyvtkMatrix4x4_Transpose_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Transpose");
  return nullptr;
}


static PyObject *
PyvtkMatrix4x4_MatrixFromRotation_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MatrixFromRotation");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  vtkMatrix4x4 *temp4 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkMatrix4x4"))
  {
    vtkMatrix4x4::MatrixFromRotation(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_MatrixFromRotation_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MatrixFromRotation");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  const size_t size4 = 16;
  double temp4[16];
  double save4[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    vtkMatrix4x4::MatrixFromRotation(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMatrix4x4_MatrixFromRotation_Methods[] = {
  {"MatrixFromRotation", PyvtkMatrix4x4_MatrixFromRotation_s1, METH_VARARGS | METH_STATIC,
   "ddddV *vtkMatrix4x4"},
  {"MatrixFromRotation", PyvtkMatrix4x4_MatrixFromRotation_s2, METH_VARARGS | METH_STATIC,
   "ddddP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix4x4_MatrixFromRotation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_MatrixFromRotation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MatrixFromRotation");
  return nullptr;
}


static PyObject *
PyvtkMatrix4x4_PoseToMatrix(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PoseToMatrix");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  vtkMatrix4x4 *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkMatrix4x4"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMatrix4x4::PoseToMatrix(temp0, temp1, temp2);

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
PyvtkMatrix4x4_MultiplyPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

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
      op->vtkMatrix4x4::MultiplyPoint(temp0, temp1);
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
PyvtkMatrix4x4_MultiplyPoint_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MultiplyPoint");

  const size_t size0 = 16;
  double temp0[16];
  const size_t size1 = 4;
  double temp1[4];
  const size_t size2 = 4;
  double temp2[4];
  double save2[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMatrix4x4::MultiplyPoint(temp0, temp1, temp2);

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
PyvtkMatrix4x4_MultiplyPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double *tempr = (ap.IsBound() ?
      op->MultiplyPoint(temp0) :
      op->vtkMatrix4x4::MultiplyPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkMatrix4x4_MultiplyPoint_Methods[] = {
  {"MultiplyPoint", PyvtkMatrix4x4_MultiplyPoint_s1, METH_VARARGS,
   "@PP *d *d"},
  {"MultiplyPoint", PyvtkMatrix4x4_MultiplyPoint_s2, METH_VARARGS | METH_STATIC,
   "PPP *d *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix4x4_MultiplyPoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_MultiplyPoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkMatrix4x4_MultiplyPoint_s3(self, args);
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MultiplyPoint");
  return nullptr;
}


static PyObject *
PyvtkMatrix4x4_MultiplyFloatPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyFloatPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  const size_t size0 = 4;
  float temp0[4];
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    float *tempr = (ap.IsBound() ?
      op->MultiplyFloatPoint(temp0) :
      op->vtkMatrix4x4::MultiplyFloatPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_MultiplyDoublePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyDoublePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double *tempr = (ap.IsBound() ?
      op->MultiplyDoublePoint(temp0) :
      op->vtkMatrix4x4::MultiplyDoublePoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_Multiply4x4_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Multiply4x4");

  vtkMatrix4x4 *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  vtkMatrix4x4 *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp2, "vtkMatrix4x4"))
  {
    vtkMatrix4x4::Multiply4x4(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Multiply4x4_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Multiply4x4");

  const size_t size0 = 16;
  double temp0[16];
  const size_t size1 = 16;
  double temp1[16];
  const size_t size2 = 16;
  double temp2[16];
  double save2[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMatrix4x4::Multiply4x4(temp0, temp1, temp2);

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

static PyMethodDef PyvtkMatrix4x4_Multiply4x4_Methods[] = {
  {"Multiply4x4", PyvtkMatrix4x4_Multiply4x4_s1, METH_VARARGS | METH_STATIC,
   "VVV *vtkMatrix4x4 *vtkMatrix4x4 *vtkMatrix4x4"},
  {"Multiply4x4", PyvtkMatrix4x4_Multiply4x4_s2, METH_VARARGS | METH_STATIC,
   "PPP *d *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix4x4_Multiply4x4(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_Multiply4x4_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Multiply4x4");
  return nullptr;
}


static PyObject *
PyvtkMatrix4x4_MultiplyAndTranspose4x4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MultiplyAndTranspose4x4");

  const size_t size0 = 16;
  double temp0[16];
  const size_t size1 = 16;
  double temp1[16];
  const size_t size2 = 16;
  float temp2[16];
  float save2[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMatrix4x4::MultiplyAndTranspose4x4(temp0, temp1, temp2);

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
PyvtkMatrix4x4_Adjoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Adjoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->Adjoint(temp0, temp1);
    }
    else
    {
      op->vtkMatrix4x4::Adjoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Adjoint_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Adjoint");

  const size_t size0 = 16;
  double temp0[16];
  const size_t size1 = 16;
  double temp1[16];
  double save1[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMatrix4x4::Adjoint(temp0, temp1);

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

static PyMethodDef PyvtkMatrix4x4_Adjoint_Methods[] = {
  {"Adjoint", PyvtkMatrix4x4_Adjoint_s1, METH_VARARGS,
   "@VV *vtkMatrix4x4 *vtkMatrix4x4"},
  {"Adjoint", PyvtkMatrix4x4_Adjoint_s2, METH_VARARGS | METH_STATIC,
   "PP *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMatrix4x4_Adjoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMatrix4x4_Adjoint_Methods;
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
PyvtkMatrix4x4_Determinant_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Determinant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->Determinant() :
      op->vtkMatrix4x4::Determinant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Determinant_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant");

  const size_t size0 = 16;
  double temp0[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double tempr = vtkMatrix4x4::Determinant(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMatrix4x4_Determinant(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMatrix4x4_Determinant_s1(self, args);
    case 1:
      return PyvtkMatrix4x4_Determinant_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Determinant");
  return nullptr;
}


static PyObject *
PyvtkMatrix4x4_SetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

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
      op->vtkMatrix4x4::SetElement(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_GetElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetElement(temp0, temp1) :
      op->vtkMatrix4x4::GetElement(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrix4x4_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrix4x4 *op = static_cast<vtkMatrix4x4 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetData() :
      op->vtkMatrix4x4::GetData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMatrix4x4_Methods[] = {
  {"IsTypeOf", PyvtkMatrix4x4_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMatrix4x4_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMatrix4x4_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMatrix4x4\nC++: static vtkMatrix4x4 *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMatrix4x4_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMatrix4x4_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMatrix4x4_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DeepCopy", PyvtkMatrix4x4_DeepCopy, METH_VARARGS,
   "DeepCopy(self, source:vtkMatrix4x4) -> None\nC++: void DeepCopy(const vtkMatrix4x4 *source)\nDeepCopy(destination:[float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float], source:vtkMatrix4x4) -> None\nC++: static void DeepCopy(double destination[16],\n    const vtkMatrix4x4 *source)\nDeepCopy(destination:[float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float], source:(float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float)) -> None\nC++: static void DeepCopy(double destination[16],\n    const double source[16])\nDeepCopy(self, elements:(float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float)) -> None\nC++: void DeepCopy(const double elements[16])\n\nSet the elements of the matrix to the same values as the elements\nof the given source matrix.\n"},
  {"Zero", PyvtkMatrix4x4_Zero, METH_VARARGS,
   "Zero(self) -> None\nC++: void Zero()\nZero(elements:[float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float,\n    float]) -> None\nC++: static void Zero(double elements[16])\n\nSet all of the elements to zero.\n"},
  {"Identity", PyvtkMatrix4x4_Identity, METH_VARARGS,
   "Identity(self) -> None\nC++: void Identity()\nIdentity(elements:[float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float]) -> None\nC++: static void Identity(double elements[16])\n\nSet equal to Identity matrix\n"},
  {"IsIdentity", PyvtkMatrix4x4_IsIdentity, METH_VARARGS,
   "IsIdentity(self) -> bool\nC++: bool IsIdentity()\n\nReturns true if this matrix is equal to the identity matrix.\n"},
  {"Invert", PyvtkMatrix4x4_Invert, METH_VARARGS,
   "Invert(in_:vtkMatrix4x4, out:vtkMatrix4x4) -> None\nC++: static void Invert(const vtkMatrix4x4 *in, vtkMatrix4x4 *out)\nInvert(self) -> None\nC++: void Invert()\nInvert(inElements:(float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float), outElements:[float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float]) -> None\nC++: static void Invert(const double inElements[16],\n    double outElements[16])\n\nMatrix Inversion (adapted from Richard Carling in \"Graphics\nGems,\" Academic Press, 1990).\n"},
  {"Transpose", PyvtkMatrix4x4_Transpose, METH_VARARGS,
   "Transpose(in_:vtkMatrix4x4, out:vtkMatrix4x4) -> None\nC++: static void Transpose(const vtkMatrix4x4 *in,\n    vtkMatrix4x4 *out)\nTranspose(self) -> None\nC++: void Transpose()\nTranspose(inElements:(float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float), outElements:[float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float]) -> None\nC++: static void Transpose(const double inElements[16],\n    double outElements[16])\n\nTranspose the matrix and put it into out.\n"},
  {"MatrixFromRotation", PyvtkMatrix4x4_MatrixFromRotation, METH_VARARGS,
   "MatrixFromRotation(angle:float, x:float, y:float, z:float,\n    result:vtkMatrix4x4) -> None\nC++: static void MatrixFromRotation(double angle, double x,\n    double y, double z, vtkMatrix4x4 *result)\nMatrixFromRotation(angle:float, x:float, y:float, z:float,\n    matrix:[float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float,\n    float]) -> None\nC++: static void MatrixFromRotation(double angle, double x,\n    double y, double z, double matrix[16])\n\nConstruct a matrix from a rotation\n"},
  {"PoseToMatrix", PyvtkMatrix4x4_PoseToMatrix, METH_VARARGS,
   "PoseToMatrix(pos:[float, float, float], ori:[float, float, float,\n    float], mat:vtkMatrix4x4) -> None\nC++: static void PoseToMatrix(double pos[3], double ori[4],\n    vtkMatrix4x4 *mat)\n\nGiven an orientation and position this function will fill in a\nmatrix representing the transformation from the pose to whatever\nspace the pose was defined in. For example if the position and\norientation are in world coordinates then this method would set\nthe matrix to be PoseToWorld\n"},
  {"MultiplyPoint", PyvtkMatrix4x4_MultiplyPoint, METH_VARARGS,
   "MultiplyPoint(self, in_:(float, float, float, float), out:[float,\n    float, float, float]) -> None\nC++: void MultiplyPoint(const double in[4], double out[4])\nMultiplyPoint(elements:(float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float), in_:(float, float, float, float), out:[float, float,\n    float, float]) -> None\nC++: static void MultiplyPoint(const double elements[16],\n    const double in[4], double out[4])\nMultiplyPoint(self, in_:(float, float, float, float)) -> (float,\n    float, float, float)\nC++: double *MultiplyPoint(const double in[4])\n\n"},
  {"MultiplyFloatPoint", PyvtkMatrix4x4_MultiplyFloatPoint, METH_VARARGS,
   "MultiplyFloatPoint(self, in_:(float, float, float, float)) -> (\n    float, float, float, float)\nC++: float *MultiplyFloatPoint(const float in[4])\n\n"},
  {"MultiplyDoublePoint", PyvtkMatrix4x4_MultiplyDoublePoint, METH_VARARGS,
   "MultiplyDoublePoint(self, in_:(float, float, float, float)) -> (\n    float, float, float, float)\nC++: double *MultiplyDoublePoint(const double in[4])\n\n"},
  {"Multiply4x4", PyvtkMatrix4x4_Multiply4x4, METH_VARARGS,
   "Multiply4x4(a:vtkMatrix4x4, b:vtkMatrix4x4, c:vtkMatrix4x4)\n    -> None\nC++: static void Multiply4x4(const vtkMatrix4x4 *a,\n    const vtkMatrix4x4 *b, vtkMatrix4x4 *c)\nMultiply4x4(a:(float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\n    , b:(float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float),\n    c:[float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\n    -> None\nC++: static void Multiply4x4(const double a[16],\n    const double b[16], double c[16])\n\nMultiplies matrices a and b and stores the result in c.\n"},
  {"MultiplyAndTranspose4x4", PyvtkMatrix4x4_MultiplyAndTranspose4x4, METH_VARARGS,
   "MultiplyAndTranspose4x4(a:(float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float), b:(float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float), c:[float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float,\n    float]) -> None\nC++: static void MultiplyAndTranspose4x4(const double a[16],\n    const double b[16], float c[16])\n\n"},
  {"Adjoint", PyvtkMatrix4x4_Adjoint, METH_VARARGS,
   "Adjoint(self, in_:vtkMatrix4x4, out:vtkMatrix4x4) -> None\nC++: void Adjoint(const vtkMatrix4x4 *in, vtkMatrix4x4 *out)\nAdjoint(inElements:(float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float), outElements:[float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float]) -> None\nC++: static void Adjoint(const double inElements[16],\n    double outElements[16])\n\nCompute adjoint of the matrix and put it into out.\n"},
  {"Determinant", PyvtkMatrix4x4_Determinant, METH_VARARGS,
   "Determinant(self) -> float\nC++: double Determinant()\nDeterminant(elements:(float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float)) -> float\nC++: static double Determinant(const double elements[16])\n\nCompute the determinant of the matrix and return it.\n"},
  {"SetElement", PyvtkMatrix4x4_SetElement, METH_VARARGS,
   "SetElement(self, i:int, j:int, value:float) -> None\nC++: void SetElement(int i, int j, double value)\n\nSets the element i,j in the matrix.\n"},
  {"GetElement", PyvtkMatrix4x4_GetElement, METH_VARARGS,
   "GetElement(self, i:int, j:int) -> float\nC++: double GetElement(int i, int j)\n\nReturns the element i,j from the matrix.\n"},
  {"GetData", PyvtkMatrix4x4_GetData, METH_VARARGS,
   "GetData(self) -> Pointer\nC++: double *GetData()\n\nReturns the raw double array holding the matrix.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMatrix4x4_Doc =
  "vtkMatrix4x4 - represent and manipulate 4x4 transformation matrices\n\n"
  "Superclass: vtkObject\n\n"
  "vtkMatrix4x4 is a class to represent and manipulate 4x4 matrices.\n"
  "Specifically, it is designed to work on 4x4 transformation matrices\n"
  "found in 3D rendering using homogeneous coordinates [x y z w]. Many\n"
  "of the methods take an array of 16 doubles in row-major format. Note\n"
  "that OpenGL stores matrices in column-major format, so the matrix\n"
  "contents must be transposed when they are moved between OpenGL and\n"
  "VTK.\n"
  "@sa\n"
  "vtkTransform\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMatrix4x4_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonMath.vtkMatrix4x4", // tp_name
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
  PyvtkMatrix4x4_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMatrix4x4_StaticNew()
{
  return vtkMatrix4x4::New();
}

PyObject *PyvtkMatrix4x4_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMatrix4x4_Type, PyvtkMatrix4x4_Methods,
    "vtkMatrix4x4",
 &PyvtkMatrix4x4_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMatrix4x4(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMatrix4x4_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMatrix4x4", o) != 0)
  {
    Py_DECREF(o);
  }

}

