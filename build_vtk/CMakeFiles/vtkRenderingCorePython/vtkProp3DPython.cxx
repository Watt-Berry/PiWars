// python wrapper for vtkProp3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkProp3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProp3D(PyObject *dict); }
extern "C" { PyObject *PyvtkProp3D_ClassNew(); }

#ifndef DECLARED_PyvtkProp_ClassNew
extern "C" { PyObject *PyvtkProp_ClassNew(); }
#define DECLARED_PyvtkProp_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProp3D_CoordinateSystems_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkProp3D.CoordinateSystems", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkProp3D_CoordinateSystems_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkProp3D_CoordinateSystems_Type, static_cast<int>(val));
}


static PyObject *
PyvtkProp3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProp3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProp3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProp3D *tempr = vtkProp3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProp3D::NewInstance());

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
PyvtkProp3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProp3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProp3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkProp3D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->vtkProp3D::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProp3D_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkProp3D::SetPosition(temp0);
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
PyvtkProp3D_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProp3D_SetPosition_s1(self, args);
    case 1:
      return PyvtkProp3D_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkProp3D_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkProp3D::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_AddPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->AddPosition(temp0);
    }
    else
    {
      op->vtkProp3D::AddPosition(temp0);
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
PyvtkProp3D_AddPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->AddPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProp3D::AddPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProp3D_AddPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkProp3D_AddPosition_s1(self, args);
    case 3:
      return PyvtkProp3D_AddPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddPosition");
  return nullptr;
}


static PyObject *
PyvtkProp3D_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProp3D::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProp3D_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkProp3D::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProp3D_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProp3D_SetOrigin_s1(self, args);
    case 1:
      return PyvtkProp3D_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkProp3D_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkProp3D::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProp3D::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProp3D_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->SetScale(temp0);
    }
    else
    {
      op->vtkProp3D::SetScale(temp0);
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
PyvtkProp3D_SetScale_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkProp3D::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProp3D_SetScale_Methods[] = {
  {"SetScale", PyvtkProp3D_SetScale_s2, METH_VARARGS,
   "@P *d"},
  {"SetScale", PyvtkProp3D_SetScale_s3, METH_VARARGS,
   "@d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkProp3D_SetScale(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProp3D_SetScale_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProp3D_SetScale_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return nullptr;
}


static PyObject *
PyvtkProp3D_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkProp3D::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_SetUserTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkLinearTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLinearTransform"))
  {
    if (ap.IsBound())
    {
      op->SetUserTransform(temp0);
    }
    else
    {
      op->vtkProp3D::SetUserTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_GetUserTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLinearTransform *tempr = (ap.IsBound() ?
      op->GetUserTransform() :
      op->vtkProp3D::GetUserTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_SetUserMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetUserMatrix(temp0);
    }
    else
    {
      op->vtkProp3D::SetUserMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_GetUserMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetUserMatrix() :
      op->vtkProp3D::GetUserMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_GetMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetMatrix(temp0);
    }
    else
    {
      op->vtkProp3D::GetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProp3D_GetMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  const size_t size0 = 16;
  double temp0[16];
  double save0[16];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetMatrix(temp0);
    }
    else
    {
      op->vtkProp3D::GetMatrix(temp0);
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
PyvtkProp3D_GetMatrix_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetMatrix() :
      op->vtkProp3D::GetMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProp3D_GetMatrix_Methods[] = {
  {"GetMatrix", PyvtkProp3D_GetMatrix_s1, METH_VARARGS,
   "@V *vtkMatrix4x4"},
  {"GetMatrix", PyvtkProp3D_GetMatrix_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkProp3D_GetMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProp3D_GetMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkProp3D_GetMatrix_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMatrix");
  return nullptr;
}


static PyObject *
PyvtkProp3D_GetModelToWorldMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelToWorldMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetModelToWorldMatrix(temp0);
    }
    else
    {
      op->vtkProp3D::GetModelToWorldMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_SetPropertiesFromModelToWorldMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertiesFromModelToWorldMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetPropertiesFromModelToWorldMatrix(temp0);
    }
    else
    {
      op->vtkProp3D::SetPropertiesFromModelToWorldMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->vtkProp3D::GetBounds(temp0);
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
PyvtkProp3D_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    double *tempr = op->GetBounds();

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkProp3D_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkProp3D_GetBounds_s1(self, args);
    case 0:
      return PyvtkProp3D_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkProp3D_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkProp3D::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_GetXRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetXRange() :
      op->vtkProp3D::GetXRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_GetYRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetYRange() :
      op->vtkProp3D::GetYRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_GetZRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetZRange() :
      op->vtkProp3D::GetZRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLength() :
      op->vtkProp3D::GetLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_RotateX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->vtkProp3D::RotateX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_RotateY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->vtkProp3D::RotateY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_RotateZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->vtkProp3D::RotateZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_RotateWXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->vtkProp3D::RotateWXYZ(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_SetOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->SetOrientation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProp3D::SetOrientation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProp3D_SetOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkProp3D::SetOrientation(temp0);
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
PyvtkProp3D_SetOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProp3D_SetOrientation_s1(self, args);
    case 1:
      return PyvtkProp3D_SetOrientation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrientation");
  return nullptr;
}


static PyObject *
PyvtkProp3D_GetOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkProp3D::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkProp3D_GetOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->vtkProp3D::GetOrientation(temp0);
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
PyvtkProp3D_GetOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkProp3D_GetOrientation_s1(self, args);
    case 1:
      return PyvtkProp3D_GetOrientation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrientation");
  return nullptr;
}


static PyObject *
PyvtkProp3D_GetOrientationWXYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationWXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientationWXYZ() :
      op->vtkProp3D::GetOrientationWXYZ());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_AddOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->AddOrientation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProp3D::AddOrientation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProp3D_AddOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

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
      op->AddOrientation(temp0);
    }
    else
    {
      op->vtkProp3D::AddOrientation(temp0);
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
PyvtkProp3D_AddOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProp3D_AddOrientation_s1(self, args);
    case 1:
      return PyvtkProp3D_AddOrientation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddOrientation");
  return nullptr;
}


static PyObject *
PyvtkProp3D_PokeMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PokeMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->PokeMatrix(temp0);
    }
    else
    {
      op->vtkProp3D::PokeMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_InitPathTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPathTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitPathTraversal();
    }
    else
    {
      op->vtkProp3D::InitPathTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkProp3D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_GetUserTransformMatrixMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserTransformMatrixMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetUserTransformMatrixMTime() :
      op->vtkProp3D::GetUserTransformMatrixMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_ComputeMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMatrix();
    }
    else
    {
      op->vtkProp3D::ComputeMatrix();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_GetIsIdentity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsIdentity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIsIdentity() :
      op->vtkProp3D::GetIsIdentity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_SetCoordinateSystemToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToWorld();
    }
    else
    {
      op->vtkProp3D::SetCoordinateSystemToWorld();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_SetCoordinateSystemToPhysical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToPhysical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToPhysical();
    }
    else
    {
      op->vtkProp3D::SetCoordinateSystemToPhysical();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_SetCoordinateSystemToDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToDevice();
    }
    else
    {
      op->vtkProp3D::SetCoordinateSystemToDevice();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_SetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  typedef vtkProp3D::CoordinateSystems temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkProp3D.CoordinateSystems"))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystem(temp0);
    }
    else
    {
      op->vtkProp3D::SetCoordinateSystem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_GetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkProp3D::CoordinateSystems tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetCoordinateSystem() :
      op->vtkProp3D::GetCoordinateSystem());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkProp3D_CoordinateSystems_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_GetCoordinateSystemAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystemAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCoordinateSystemAsString() :
      op->vtkProp3D::GetCoordinateSystemAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_SetCoordinateSystemRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemRenderer(temp0);
    }
    else
    {
      op->vtkProp3D::SetCoordinateSystemRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_GetCoordinateSystemRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystemRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetCoordinateSystemRenderer() :
      op->vtkProp3D::GetCoordinateSystemRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_SetCoordinateSystemDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemDevice(temp0);
    }
    else
    {
      op->vtkProp3D::SetCoordinateSystemDevice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp3D_GetCoordinateSystemDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystemDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3D *op = static_cast<vtkProp3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateSystemDevice() :
      op->vtkProp3D::GetCoordinateSystemDevice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProp3D_Methods[] = {
  {"IsTypeOf", PyvtkProp3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProp3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProp3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkProp3D\nC++: static vtkProp3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProp3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProp3D\nC++: vtkProp3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProp3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProp3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ShallowCopy", PyvtkProp3D_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of this vtkProp3D.\n"},
  {"SetPosition", PyvtkProp3D_SetPosition, METH_VARARGS,
   "SetPosition(self, x:float, y:float, z:float) -> None\nC++: virtual void SetPosition(double x, double y, double z)\nSetPosition(self, pos:[float, float, float]) -> None\nC++: virtual void SetPosition(double pos[3])\n\nSet/Get/Add the position of the Prop3D in world coordinates.\n"},
  {"GetPosition", PyvtkProp3D_GetPosition, METH_VARARGS,
   "GetPosition(self) -> (float, float, float)\nC++: virtual double *GetPosition()\n\n"},
  {"AddPosition", PyvtkProp3D_AddPosition, METH_VARARGS,
   "AddPosition(self, deltaPosition:[float, float, float]) -> None\nC++: void AddPosition(double deltaPosition[3])\nAddPosition(self, deltaX:float, deltaY:float, deltaZ:float)\n    -> None\nC++: void AddPosition(double deltaX, double deltaY, double deltaZ)\n\n"},
  {"SetOrigin", PyvtkProp3D_SetOrigin, METH_VARARGS,
   "SetOrigin(self, x:float, y:float, z:float) -> None\nC++: virtual void SetOrigin(double x, double y, double z)\nSetOrigin(self, pos:(float, float, float)) -> None\nC++: virtual void SetOrigin(const double pos[3])\n\nSet/Get the origin of the Prop3D. This is the point about which\nall rotations take place.\n"},
  {"GetOrigin", PyvtkProp3D_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetScale", PyvtkProp3D_SetScale, METH_VARARGS,
   "SetScale(self, x:float, y:float, z:float) -> None\nC++: virtual void SetScale(double x, double y, double z)\nSetScale(self, scale:[float, float, float]) -> None\nC++: virtual void SetScale(double scale[3])\nSetScale(self, s:float) -> None\nC++: void SetScale(double s)\n\nSet/Get the scale of the actor. Scaling in performed\nindependently on the X, Y and Z axis. A scale of zero is illegal\nand will be replaced with one.\n"},
  {"GetScale", PyvtkProp3D_GetScale, METH_VARARGS,
   "GetScale(self) -> (float, float, float)\nC++: virtual double *GetScale()\n\n"},
  {"SetUserTransform", PyvtkProp3D_SetUserTransform, METH_VARARGS,
   "SetUserTransform(self, transform:vtkLinearTransform) -> None\nC++: void SetUserTransform(vtkLinearTransform *transform)\n\nIn addition to the instance variables such as position and\norientation, you can add an additional transformation for your\nown use.  This transformation is concatenated with the actor's\ninternal transformation, which you implicitly create through the\nuse of SetPosition(), SetOrigin() and SetOrientation().\n\nIf the internal transformation is identity (i.e. if you don't set\nthe Position, Origin, or Orientation) then the actors final\ntransformation will be the UserTransform, concatenated with the\nUserMatrix if the UserMatrix is present.\n"},
  {"GetUserTransform", PyvtkProp3D_GetUserTransform, METH_VARARGS,
   "GetUserTransform(self) -> vtkLinearTransform\nC++: virtual vtkLinearTransform *GetUserTransform()\n\n"},
  {"SetUserMatrix", PyvtkProp3D_SetUserMatrix, METH_VARARGS,
   "SetUserMatrix(self, matrix:vtkMatrix4x4) -> None\nC++: void SetUserMatrix(vtkMatrix4x4 *matrix)\n\nThe UserMatrix can be used in place of UserTransform.\n"},
  {"GetUserMatrix", PyvtkProp3D_GetUserMatrix, METH_VARARGS,
   "GetUserMatrix(self) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetUserMatrix()\n\n"},
  {"GetMatrix", PyvtkProp3D_GetMatrix, METH_VARARGS,
   "GetMatrix(self, result:vtkMatrix4x4) -> None\nC++: virtual void GetMatrix(vtkMatrix4x4 *result)\nGetMatrix(self, result:[float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float]) -> None\nC++: virtual void GetMatrix(double result[16])\nGetMatrix(self) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetMatrix() override;\n\nReturn a reference to the Prop3D's 4x4 composite matrix. Get the\nmatrix from the position, origin, scale and orientation This\nmatrix is cached, so multiple GetMatrix() calls will be\nefficient.\n"},
  {"GetModelToWorldMatrix", PyvtkProp3D_GetModelToWorldMatrix, METH_VARARGS,
   "GetModelToWorldMatrix(self, result:vtkMatrix4x4) -> None\nC++: virtual void GetModelToWorldMatrix(vtkMatrix4x4 *result)\n\nReturn a reference to the Prop3D's Model to World matrix. This\nmethod takes into account the coordinate system the prop is in.\n"},
  {"SetPropertiesFromModelToWorldMatrix", PyvtkProp3D_SetPropertiesFromModelToWorldMatrix, METH_VARARGS,
   "SetPropertiesFromModelToWorldMatrix(self,\n    modelToWorld:vtkMatrix4x4) -> None\nC++: virtual void SetPropertiesFromModelToWorldMatrix(\n    vtkMatrix4x4 *modelToWorld)\n\nSet the position, scale, orientation from a provided model to\nworld matrix. If the prop is in a coordinate system other than\nworld, then ren must be non-null\n"},
  {"GetBounds", PyvtkProp3D_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\nGetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override = 0;\n\nGet the bounds for this Prop3D as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {"GetCenter", PyvtkProp3D_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: double *GetCenter()\n\nGet the center of the bounding box in world coordinates.\n"},
  {"GetXRange", PyvtkProp3D_GetXRange, METH_VARARGS,
   "GetXRange(self) -> (float, float)\nC++: double *GetXRange()\n\nGet the Prop3D's x range in world coordinates.\n"},
  {"GetYRange", PyvtkProp3D_GetYRange, METH_VARARGS,
   "GetYRange(self) -> (float, float)\nC++: double *GetYRange()\n\nGet the Prop3D's y range in world coordinates.\n"},
  {"GetZRange", PyvtkProp3D_GetZRange, METH_VARARGS,
   "GetZRange(self) -> (float, float)\nC++: double *GetZRange()\n\nGet the Prop3D's z range in world coordinates.\n"},
  {"GetLength", PyvtkProp3D_GetLength, METH_VARARGS,
   "GetLength(self) -> float\nC++: double GetLength()\n\nGet the length of the diagonal of the bounding box.\n"},
  {"RotateX", PyvtkProp3D_RotateX, METH_VARARGS,
   "RotateX(self, __a:float) -> None\nC++: void RotateX(double)\n\nRotate the Prop3D in degrees about the X axis using the right\nhand rule. The axis is the Prop3D's X axis, which can change as\nother rotations are performed.  To rotate about the world X axis\nuse RotateWXYZ (angle, 1, 0, 0). This rotation is applied before\nall others in the current transformation matrix.\n"},
  {"RotateY", PyvtkProp3D_RotateY, METH_VARARGS,
   "RotateY(self, __a:float) -> None\nC++: void RotateY(double)\n\nRotate the Prop3D in degrees about the Y axis using the right\nhand rule. The axis is the Prop3D's Y axis, which can change as\nother rotations are performed.  To rotate about the world Y axis\nuse RotateWXYZ (angle, 0, 1, 0). This rotation is applied before\nall others in the current transformation matrix.\n"},
  {"RotateZ", PyvtkProp3D_RotateZ, METH_VARARGS,
   "RotateZ(self, __a:float) -> None\nC++: void RotateZ(double)\n\nRotate the Prop3D in degrees about the Z axis using the right\nhand rule. The axis is the Prop3D's Z axis, which can change as\nother rotations are performed.  To rotate about the world Z axis\nuse RotateWXYZ (angle, 0, 0, 1). This rotation is applied before\nall others in the current transformation matrix.\n"},
  {"RotateWXYZ", PyvtkProp3D_RotateWXYZ, METH_VARARGS,
   "RotateWXYZ(self, w:float, x:float, y:float, z:float) -> None\nC++: void RotateWXYZ(double w, double x, double y, double z)\n\nRotate the Prop3D in degrees about an arbitrary axis specified by\nthe last three arguments. The axis is specified in world\ncoordinates. To rotate an about its model axes, use RotateX,\nRotateY, RotateZ.\n"},
  {"SetOrientation", PyvtkProp3D_SetOrientation, METH_VARARGS,
   "SetOrientation(self, x:float, y:float, z:float) -> None\nC++: void SetOrientation(double x, double y, double z)\nSetOrientation(self, orientation:[float, float, float]) -> None\nC++: void SetOrientation(double orientation[3])\n\nSets the orientation of the Prop3D.  Orientation is specified as\nX,Y and Z rotations in that order, but they are performed as\nRotateZ, RotateX, and finally RotateY.\n"},
  {"GetOrientation", PyvtkProp3D_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> (float, float, float)\nC++: double *GetOrientation()\nGetOrientation(self, orentation:[float, float, float]) -> None\nC++: void GetOrientation(double orentation[3])\n\nReturns the orientation of the Prop3D as s vector of X,Y and Z\nrotation. The ordering in which these rotations must be done to\ngenerate the same matrix is RotateZ, RotateX, and finally\nRotateY. See also SetOrientation.\n"},
  {"GetOrientationWXYZ", PyvtkProp3D_GetOrientationWXYZ, METH_VARARGS,
   "GetOrientationWXYZ(self) -> (float, float, float, float)\nC++: double *GetOrientationWXYZ()\n\nReturns the WXYZ orientation of the Prop3D.\n"},
  {"AddOrientation", PyvtkProp3D_AddOrientation, METH_VARARGS,
   "AddOrientation(self, x:float, y:float, z:float) -> None\nC++: void AddOrientation(double x, double y, double z)\nAddOrientation(self, orentation:[float, float, float]) -> None\nC++: void AddOrientation(double orentation[3])\n\nAdd to the current orientation. See SetOrientation and\nGetOrientation for more details. This basically does a\nGetOrientation, adds the passed in arguments, and then calls\nSetOrientation.\n"},
  {"PokeMatrix", PyvtkProp3D_PokeMatrix, METH_VARARGS,
   "PokeMatrix(self, matrix:vtkMatrix4x4) -> None\nC++: void PokeMatrix(vtkMatrix4x4 *matrix) override;\n\nThis method modifies the vtkProp3D so that its transformation\nstate is set to the matrix specified. The method does this by\nsetting appropriate transformation-related ivars to initial\nvalues (i.e., not transformed), and placing the user-supplied\nmatrix into the UserMatrix of this vtkProp3D. If the method is\ncalled again with a NULL matrix, then the original state of the\nvtkProp3D will be restored. This method is used to support\npicking and assembly structures.\n"},
  {"InitPathTraversal", PyvtkProp3D_InitPathTraversal, METH_VARARGS,
   "InitPathTraversal(self) -> None\nC++: void InitPathTraversal() override;\n\nOverload vtkProp's method for setting up assembly paths. See the\ndocumentation for vtkProp.\n"},
  {"GetMTime", PyvtkProp3D_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the vtkProp3D's mtime\n"},
  {"GetUserTransformMatrixMTime", PyvtkProp3D_GetUserTransformMatrixMTime, METH_VARARGS,
   "GetUserTransformMatrixMTime(self) -> int\nC++: vtkMTimeType GetUserTransformMatrixMTime()\n\nGet the modified time of the user matrix or user transform.\n"},
  {"ComputeMatrix", PyvtkProp3D_ComputeMatrix, METH_VARARGS,
   "ComputeMatrix(self) -> None\nC++: virtual void ComputeMatrix()\n\nGenerate the matrix based on ivars\n"},
  {"GetIsIdentity", PyvtkProp3D_GetIsIdentity, METH_VARARGS,
   "GetIsIdentity(self) -> int\nC++: virtual vtkTypeBool GetIsIdentity()\n\nIs the matrix for this actor identity\n"},
  {"SetCoordinateSystemToWorld", PyvtkProp3D_SetCoordinateSystemToWorld, METH_VARARGS,
   "SetCoordinateSystemToWorld(self) -> None\nC++: void SetCoordinateSystemToWorld()\n\n"},
  {"SetCoordinateSystemToPhysical", PyvtkProp3D_SetCoordinateSystemToPhysical, METH_VARARGS,
   "SetCoordinateSystemToPhysical(self) -> None\nC++: void SetCoordinateSystemToPhysical()\n\n"},
  {"SetCoordinateSystemToDevice", PyvtkProp3D_SetCoordinateSystemToDevice, METH_VARARGS,
   "SetCoordinateSystemToDevice(self) -> None\nC++: void SetCoordinateSystemToDevice()\n\n"},
  {"SetCoordinateSystem", PyvtkProp3D_SetCoordinateSystem, METH_VARARGS,
   "SetCoordinateSystem(self, val:CoordinateSystems) -> None\nC++: void SetCoordinateSystem(CoordinateSystems val)\n\n"},
  {"GetCoordinateSystem", PyvtkProp3D_GetCoordinateSystem, METH_VARARGS,
   "GetCoordinateSystem(self) -> CoordinateSystems\nC++: virtual CoordinateSystems GetCoordinateSystem()\n\n"},
  {"GetCoordinateSystemAsString", PyvtkProp3D_GetCoordinateSystemAsString, METH_VARARGS,
   "GetCoordinateSystemAsString(self) -> str\nC++: const char *GetCoordinateSystemAsString()\n\n"},
  {"SetCoordinateSystemRenderer", PyvtkProp3D_SetCoordinateSystemRenderer, METH_VARARGS,
   "SetCoordinateSystemRenderer(self, ren:vtkRenderer) -> None\nC++: void SetCoordinateSystemRenderer(vtkRenderer *ren)\n\nSpecify the Renderer that the prop3d is relative to when the\ncoordinate system is set to PHYSICAL or DEVICE\n"},
  {"GetCoordinateSystemRenderer", PyvtkProp3D_GetCoordinateSystemRenderer, METH_VARARGS,
   "GetCoordinateSystemRenderer(self) -> vtkRenderer\nC++: vtkRenderer *GetCoordinateSystemRenderer()\n\n"},
  {"SetCoordinateSystemDevice", PyvtkProp3D_SetCoordinateSystemDevice, METH_VARARGS,
   "SetCoordinateSystemDevice(self, _arg:int) -> None\nC++: virtual void SetCoordinateSystemDevice(int _arg)\n\nSpecify the device to be used when the coordinate system is set\nto DEVICE. Defaults to vtkEventDataDevice::HeadMountedDisplay.\n"},
  {"GetCoordinateSystemDevice", PyvtkProp3D_GetCoordinateSystemDevice, METH_VARARGS,
   "GetCoordinateSystemDevice(self) -> int\nC++: virtual int GetCoordinateSystemDevice()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkProp3D_Doc =
  "vtkProp3D - represents an 3D object for placement in a rendered scene\n\n"
  "Superclass: vtkProp\n\n"
  "vtkProp3D is an abstract class used to represent an entity in a\n"
  "rendering scene (i.e., vtkProp3D is a vtkProp with an associated\n"
  "transformation matrix).  It handles functions related to the\n"
  "position, orientation and scaling. It combines these instance\n"
  "variables into one 4x4 transformation matrix as follows: [x y z 1] =\n"
  "[x y z 1] Translate(-origin) Scale(scale) Rot(y) Rot(x) Rot (z)\n"
  "Trans(origin) Trans(position). Both vtkActor and vtkVolume are\n"
  "specializations of class vtkProp.  The constructor defaults to:\n"
  "origin(0,0,0) position=(0,0,0) orientation=(0,0,0), no user defined\n"
  "matrix or transform, and no texture map.\n\n"
  "@sa\n"
  "vtkProp vtkActor vtkAssembly vtkVolume\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProp3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkProp3D", // tp_name
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
  PyvtkProp3D_Doc, // tp_doc
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

PyObject *PyvtkProp3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProp3D_Type, PyvtkProp3D_Methods,
    "vtkProp3D",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkProp_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkProp3D_CoordinateSystems_Type);
  PyVTKEnum_Add(&PyvtkProp3D_CoordinateSystems_Type, "vtkProp3D.CoordinateSystems");

  o = (PyObject *)&PyvtkProp3D_CoordinateSystems_Type;
  if (PyDict_SetItemString(d, "CoordinateSystems", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkProp3D::CoordinateSystems cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "WORLD", vtkProp3D::WORLD },
        { "PHYSICAL", vtkProp3D::PHYSICAL },
        { "DEVICE", vtkProp3D::DEVICE },
      };

    o = PyvtkProp3D_CoordinateSystems_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProp3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProp3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProp3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

