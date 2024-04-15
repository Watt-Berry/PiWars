// python wrapper for vtkDisplaySizedImplicitPlaneRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDisplaySizedImplicitPlaneRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDisplaySizedImplicitPlaneRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkDisplaySizedImplicitPlaneRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDisplaySizedImplicitPlaneRepresentation_InteractionStateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkDisplaySizedImplicitPlaneRepresentation.InteractionStateType", // tp_name
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
PyObject *PyvtkDisplaySizedImplicitPlaneRepresentation_InteractionStateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDisplaySizedImplicitPlaneRepresentation_InteractionStateType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDisplaySizedImplicitPlaneRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDisplaySizedImplicitPlaneRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDisplaySizedImplicitPlaneRepresentation *tempr = vtkDisplaySizedImplicitPlaneRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDisplaySizedImplicitPlaneRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::NewInstance());

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
PyvtkDisplaySizedImplicitPlaneRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDisplaySizedImplicitPlaneRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetOrigin(temp0);
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
PyvtkDisplaySizedImplicitPlaneRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_SetOrigin_s1(self, args);
    case 1:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->GetOrigin(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetOrigin(temp0);
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
PyvtkDisplaySizedImplicitPlaneRepresentation_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_GetOrigin_s1(self, args);
    case 1:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_GetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return nullptr;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetNormal(temp0);
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
PyvtkDisplaySizedImplicitPlaneRepresentation_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_SetNormal_s1(self, args);
    case 1:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetNormalToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNormalToCamera();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetNormalToCamera();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->GetNormal(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetNormal(temp0);
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
PyvtkDisplaySizedImplicitPlaneRepresentation_GetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_GetNormal_s1(self, args);
    case 1:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_GetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNormal");
  return nullptr;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalToXAxis(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetNormalToXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalToXAxis() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetNormalToXAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_NormalToXAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToXAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToXAxisOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::NormalToXAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_NormalToXAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToXAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToXAxisOff();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::NormalToXAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalToYAxis(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetNormalToYAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalToYAxis() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetNormalToYAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_NormalToYAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToYAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToYAxisOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::NormalToYAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_NormalToYAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToYAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToYAxisOff();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::NormalToYAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalToZAxis(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetNormalToZAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalToZAxis() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetNormalToZAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_NormalToZAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToZAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToZAxisOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::NormalToZAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_NormalToZAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalToZAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalToZAxisOff();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::NormalToZAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetLockNormalToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockNormalToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLockNormalToCamera(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetLockNormalToCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetLockNormalToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockNormalToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLockNormalToCamera() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetLockNormalToCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_LockNormalToCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockNormalToCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockNormalToCameraOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::LockNormalToCameraOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_LockNormalToCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockNormalToCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockNormalToCameraOff();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::LockNormalToCameraOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetRadiusMultiplier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusMultiplier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadiusMultiplier(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetRadiusMultiplier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetRadiusMultiplierMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMultiplierMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMultiplierMinValue() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetRadiusMultiplierMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetRadiusMultiplierMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMultiplierMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMultiplierMaxValue() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetRadiusMultiplierMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetRadiusMultiplier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMultiplier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMultiplier() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetRadiusMultiplier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetDrawPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawPlane(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetDrawPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetDrawPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawPlane() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetDrawPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_DrawPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawPlaneOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::DrawPlaneOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_DrawPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawPlaneOff();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::DrawPlaneOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetDrawOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawOutline(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetDrawOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetDrawOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawOutline() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetDrawOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_DrawOutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawOutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawOutlineOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::DrawOutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_DrawOutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawOutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawOutlineOff();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::DrawOutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetDrawIntersectionEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawIntersectionEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawIntersectionEdges(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetDrawIntersectionEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetDrawIntersectionEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawIntersectionEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawIntersectionEdges() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetDrawIntersectionEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_DrawIntersectionEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawIntersectionEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawIntersectionEdgesOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::DrawIntersectionEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_DrawIntersectionEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawIntersectionEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawIntersectionEdgesOff();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::DrawIntersectionEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetOutlineTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutlineTranslation(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetOutlineTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetOutlineTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutlineTranslation() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetOutlineTranslation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_OutlineTranslationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineTranslationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineTranslationOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::OutlineTranslationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_OutlineTranslationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineTranslationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineTranslationOff();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::OutlineTranslationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetOutsideBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutsideBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutsideBounds(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetOutsideBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetOutsideBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutsideBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutsideBounds() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetOutsideBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_OutsideBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutsideBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutsideBoundsOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::OutsideBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_OutsideBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutsideBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutsideBoundsOff();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::OutsideBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetXTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXTranslationAxisOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetXTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetYTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetYTranslationAxisOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetYTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetZTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetZTranslationAxisOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetZTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetTranslationAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationAxisOff();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetTranslationAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_IsTranslationConstrained(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTranslationConstrained");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsTranslationConstrained() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::IsTranslationConstrained());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetWidgetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->SetWidgetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetWidgetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetWidgetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWidgetBounds(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetWidgetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetWidgetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_SetWidgetBounds_s1(self, args);
    case 1:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_SetWidgetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWidgetBounds");
  return nullptr;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetWidgetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetWidgetBounds() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetWidgetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetConstrainToWidgetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstrainToWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConstrainToWidgetBounds(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetConstrainToWidgetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetConstrainToWidgetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrainToWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstrainToWidgetBounds() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetConstrainToWidgetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_ConstrainToWidgetBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainToWidgetBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConstrainToWidgetBoundsOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::ConstrainToWidgetBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_ConstrainToWidgetBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainToWidgetBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConstrainToWidgetBoundsOff();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::ConstrainToWidgetBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetConstrainMaximumSizeToWidgetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstrainMaximumSizeToWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConstrainMaximumSizeToWidgetBounds(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetConstrainMaximumSizeToWidgetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetConstrainMaximumSizeToWidgetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrainMaximumSizeToWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstrainMaximumSizeToWidgetBounds() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetConstrainMaximumSizeToWidgetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_ConstrainMaximumSizeToWidgetBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainMaximumSizeToWidgetBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConstrainMaximumSizeToWidgetBoundsOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::ConstrainMaximumSizeToWidgetBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_ConstrainMaximumSizeToWidgetBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainMaximumSizeToWidgetBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConstrainMaximumSizeToWidgetBoundsOff();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::ConstrainMaximumSizeToWidgetBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleEnabled(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetScaleEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScaleEnabled() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetScaleEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_ScaleEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleEnabledOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::ScaleEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_ScaleEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleEnabledOff();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::ScaleEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GetPolyData(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetPolyDataAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->GetPolyDataAlgorithm() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetPolyDataAlgorithm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->GetPlane(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePlacement();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::UpdatePlacement();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetNormalProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetNormalProperty() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetNormalProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetSelectedNormalProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedNormalProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedNormalProperty() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetSelectedNormalProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetSphereProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSphereProperty() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetSphereProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetSelectedSphereProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedSphereProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedSphereProperty() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetSelectedSphereProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPlaneProperty() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetPlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetSelectedPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedPlaneProperty() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetSelectedPlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetOutlineProperty() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetSelectedOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedOutlineProperty() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetSelectedOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetEdgesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetEdgesProperty() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetEdgesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetSelectedEdgesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedEdgesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedEdgesProperty() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetSelectedEdgesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetIntersectionEdgesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersectionEdgesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetIntersectionEdgesProperty() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetIntersectionEdgesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetInteractionColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->SetInteractionColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetInteractionColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetInteractionColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->SetInteractionColor(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetInteractionColor(temp0);
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
PyvtkDisplaySizedImplicitPlaneRepresentation_SetInteractionColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_SetInteractionColor_s1(self, args);
    case 1:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_SetInteractionColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInteractionColor");
  return nullptr;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetHandleColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->SetHandleColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetHandleColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetHandleColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->SetHandleColor(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetHandleColor(temp0);
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
PyvtkDisplaySizedImplicitPlaneRepresentation_SetHandleColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_SetHandleColor_s1(self, args);
    case 1:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_SetHandleColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHandleColor");
  return nullptr;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetForegroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->SetForegroundColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetForegroundColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetForegroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->SetForegroundColor(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetForegroundColor(temp0);
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
PyvtkDisplaySizedImplicitPlaneRepresentation_SetForegroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_SetForegroundColor_s1(self, args);
    case 1:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_SetForegroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetForegroundColor");
  return nullptr;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetSelectedWidgetColor_s1(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetSelectedWidgetColor."
    " (" "Please use SetInteractionColor instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetSelectedWidgetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->SetSelectedWidgetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetSelectedWidgetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetSelectedWidgetColor_s2(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetSelectedWidgetColor."
    " (" "Please use SetInteractionColor instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetSelectedWidgetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->SetSelectedWidgetColor(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetSelectedWidgetColor(temp0);
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
PyvtkDisplaySizedImplicitPlaneRepresentation_SetSelectedWidgetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_SetSelectedWidgetColor_s1(self, args);
    case 1:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_SetSelectedWidgetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectedWidgetColor");
  return nullptr;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetUnselectedWidgetColor_s1(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetUnselectedWidgetColor."
    " (" "Please use SetHandleColor instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetUnselectedWidgetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->SetUnselectedWidgetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetUnselectedWidgetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetUnselectedWidgetColor_s2(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetUnselectedWidgetColor."
    " (" "Please use SetHandleColor instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetUnselectedWidgetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->SetUnselectedWidgetColor(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetUnselectedWidgetColor(temp0);
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
PyvtkDisplaySizedImplicitPlaneRepresentation_SetUnselectedWidgetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_SetUnselectedWidgetColor_s1(self, args);
    case 1:
      return PyvtkDisplaySizedImplicitPlaneRepresentation_SetUnselectedWidgetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUnselectedWidgetColor");
  return nullptr;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetBumpDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBumpDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBumpDistance(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetBumpDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetBumpDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBumpDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBumpDistanceMinValue() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetBumpDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetBumpDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBumpDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBumpDistanceMaxValue() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetBumpDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetBumpDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBumpDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBumpDistance() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetBumpDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_BumpPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BumpPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->BumpPlane(temp0, temp1);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::BumpPlane(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_PushPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PushPlane(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::PushPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetPickCameraFocalInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickCameraFocalInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPickCameraFocalInfo() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetPickCameraFocalInfo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetPickCameraFocalInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickCameraFocalInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickCameraFocalInfo(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetPickCameraFocalInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_PickCameraFocalInfoOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickCameraFocalInfoOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickCameraFocalInfoOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::PickCameraFocalInfoOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_PickCameraFocalInfoOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickCameraFocalInfoOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickCameraFocalInfoOff();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::PickCameraFocalInfoOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_PickOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  int temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = (ap.IsBound() ?
      op->PickOrigin(temp0, temp1, temp2) :
      op->vtkDisplaySizedImplicitPlaneRepresentation::PickOrigin(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_PickNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  int temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = (ap.IsBound() ?
      op->PickNormal(temp0, temp1, temp2) :
      op->vtkDisplaySizedImplicitPlaneRepresentation::PickNormal(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkDisplaySizedImplicitPlaneRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

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
      op->PlaceWidget(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::PlaceWidget(temp0);
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
PyvtkDisplaySizedImplicitPlaneRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->StartWidgetInteraction(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::StartWidgetInteraction(temp0);
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
PyvtkDisplaySizedImplicitPlaneRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->WidgetInteraction(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::WidgetInteraction(temp0);
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
PyvtkDisplaySizedImplicitPlaneRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->EndWidgetInteraction(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::EndWidgetInteraction(temp0);
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
PyvtkDisplaySizedImplicitPlaneRepresentation_StartComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->StartComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::StartComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_ComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->ComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::ComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_ComputeComplexInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeComplexInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  int temp4 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeComplexInteractionState(temp0, temp1, temp2, temp3, temp4) :
      op->vtkDisplaySizedImplicitPlaneRepresentation::ComputeComplexInteractionState(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_EndComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->EndComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::EndComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkDisplaySizedImplicitPlaneRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkDisplaySizedImplicitPlaneRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionState(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationState(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetRepresentationState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationState() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetRepresentationState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetUnderlyingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnderlyingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetUnderlyingPlane() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetUnderlyingPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetSnapToAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapToAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSnapToAxes() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetSnapToAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetSnapToAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapToAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSnapToAxes(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetSnapToAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SnapToAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SnapToAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SnapToAxesOn();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SnapToAxesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SnapToAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SnapToAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SnapToAxesOff();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SnapToAxesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_GetAlwaysSnapToNearestAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlwaysSnapToNearestAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAlwaysSnapToNearestAxis() :
      op->vtkDisplaySizedImplicitPlaneRepresentation::GetAlwaysSnapToNearestAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneRepresentation_SetAlwaysSnapToNearestAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlwaysSnapToNearestAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneRepresentation *op = static_cast<vtkDisplaySizedImplicitPlaneRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlwaysSnapToNearestAxis(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneRepresentation::SetAlwaysSnapToNearestAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDisplaySizedImplicitPlaneRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkDisplaySizedImplicitPlaneRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDisplaySizedImplicitPlaneRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDisplaySizedImplicitPlaneRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkDisplaySizedImplicitPlaneRepresentation\nC++: static vtkDisplaySizedImplicitPlaneRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDisplaySizedImplicitPlaneRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDisplaySizedImplicitPlaneRepresentation\nC++: vtkDisplaySizedImplicitPlaneRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDisplaySizedImplicitPlaneRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDisplaySizedImplicitPlaneRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOrigin", PyvtkDisplaySizedImplicitPlaneRepresentation_SetOrigin, METH_VARARGS,
   "SetOrigin(self, x:float, y:float, z:float) -> None\nC++: void SetOrigin(double x, double y, double z)\nSetOrigin(self, x:[float, float, float]) -> None\nC++: void SetOrigin(double x[3])\n\nSet/Get the origin of the plane.\n"},
  {"GetOrigin", PyvtkDisplaySizedImplicitPlaneRepresentation_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: double *GetOrigin()\nGetOrigin(self, xyz:[float, float, float]) -> None\nC++: void GetOrigin(double xyz[3])\n\n"},
  {"SetNormal", PyvtkDisplaySizedImplicitPlaneRepresentation_SetNormal, METH_VARARGS,
   "SetNormal(self, x:float, y:float, z:float) -> None\nC++: void SetNormal(double x, double y, double z)\nSetNormal(self, n:[float, float, float]) -> None\nC++: void SetNormal(double n[3])\n\nSet/Get the normal to the plane.\n"},
  {"SetNormalToCamera", PyvtkDisplaySizedImplicitPlaneRepresentation_SetNormalToCamera, METH_VARARGS,
   "SetNormalToCamera(self) -> None\nC++: void SetNormalToCamera()\n\n"},
  {"GetNormal", PyvtkDisplaySizedImplicitPlaneRepresentation_GetNormal, METH_VARARGS,
   "GetNormal(self) -> (float, float, float)\nC++: double *GetNormal()\nGetNormal(self, xyz:[float, float, float]) -> None\nC++: void GetNormal(double xyz[3])\n\n"},
  {"SetNormalToXAxis", PyvtkDisplaySizedImplicitPlaneRepresentation_SetNormalToXAxis, METH_VARARGS,
   "SetNormalToXAxis(self, __a:int) -> None\nC++: void SetNormalToXAxis(vtkTypeBool)\n\nForce the plane widget to be aligned with one of the x-y-z axes.\nIf one axis is set on, the other two will be set off. Remember\nthat when the state changes, a ModifiedEvent is invoked. This can\nbe used to snap the plane to the axes if it is originally not\naligned.\n"},
  {"GetNormalToXAxis", PyvtkDisplaySizedImplicitPlaneRepresentation_GetNormalToXAxis, METH_VARARGS,
   "GetNormalToXAxis(self) -> int\nC++: virtual vtkTypeBool GetNormalToXAxis()\n\n"},
  {"NormalToXAxisOn", PyvtkDisplaySizedImplicitPlaneRepresentation_NormalToXAxisOn, METH_VARARGS,
   "NormalToXAxisOn(self) -> None\nC++: virtual void NormalToXAxisOn()\n\n"},
  {"NormalToXAxisOff", PyvtkDisplaySizedImplicitPlaneRepresentation_NormalToXAxisOff, METH_VARARGS,
   "NormalToXAxisOff(self) -> None\nC++: virtual void NormalToXAxisOff()\n\n"},
  {"SetNormalToYAxis", PyvtkDisplaySizedImplicitPlaneRepresentation_SetNormalToYAxis, METH_VARARGS,
   "SetNormalToYAxis(self, __a:int) -> None\nC++: void SetNormalToYAxis(vtkTypeBool)\n\n"},
  {"GetNormalToYAxis", PyvtkDisplaySizedImplicitPlaneRepresentation_GetNormalToYAxis, METH_VARARGS,
   "GetNormalToYAxis(self) -> int\nC++: virtual vtkTypeBool GetNormalToYAxis()\n\n"},
  {"NormalToYAxisOn", PyvtkDisplaySizedImplicitPlaneRepresentation_NormalToYAxisOn, METH_VARARGS,
   "NormalToYAxisOn(self) -> None\nC++: virtual void NormalToYAxisOn()\n\n"},
  {"NormalToYAxisOff", PyvtkDisplaySizedImplicitPlaneRepresentation_NormalToYAxisOff, METH_VARARGS,
   "NormalToYAxisOff(self) -> None\nC++: virtual void NormalToYAxisOff()\n\n"},
  {"SetNormalToZAxis", PyvtkDisplaySizedImplicitPlaneRepresentation_SetNormalToZAxis, METH_VARARGS,
   "SetNormalToZAxis(self, __a:int) -> None\nC++: void SetNormalToZAxis(vtkTypeBool)\n\n"},
  {"GetNormalToZAxis", PyvtkDisplaySizedImplicitPlaneRepresentation_GetNormalToZAxis, METH_VARARGS,
   "GetNormalToZAxis(self) -> int\nC++: virtual vtkTypeBool GetNormalToZAxis()\n\n"},
  {"NormalToZAxisOn", PyvtkDisplaySizedImplicitPlaneRepresentation_NormalToZAxisOn, METH_VARARGS,
   "NormalToZAxisOn(self) -> None\nC++: virtual void NormalToZAxisOn()\n\n"},
  {"NormalToZAxisOff", PyvtkDisplaySizedImplicitPlaneRepresentation_NormalToZAxisOff, METH_VARARGS,
   "NormalToZAxisOff(self) -> None\nC++: virtual void NormalToZAxisOff()\n\n"},
  {"SetLockNormalToCamera", PyvtkDisplaySizedImplicitPlaneRepresentation_SetLockNormalToCamera, METH_VARARGS,
   "SetLockNormalToCamera(self, __a:int) -> None\nC++: virtual void SetLockNormalToCamera(vtkTypeBool)\n\nIf enabled, and a vtkCamera is available through the renderer,\nthen LockNormalToCamera will cause the normal to follow the\ncamera's normal.\n"},
  {"GetLockNormalToCamera", PyvtkDisplaySizedImplicitPlaneRepresentation_GetLockNormalToCamera, METH_VARARGS,
   "GetLockNormalToCamera(self) -> int\nC++: virtual vtkTypeBool GetLockNormalToCamera()\n\n"},
  {"LockNormalToCameraOn", PyvtkDisplaySizedImplicitPlaneRepresentation_LockNormalToCameraOn, METH_VARARGS,
   "LockNormalToCameraOn(self) -> None\nC++: virtual void LockNormalToCameraOn()\n\n"},
  {"LockNormalToCameraOff", PyvtkDisplaySizedImplicitPlaneRepresentation_LockNormalToCameraOff, METH_VARARGS,
   "LockNormalToCameraOff(self) -> None\nC++: virtual void LockNormalToCameraOff()\n\n"},
  {"SetRadiusMultiplier", PyvtkDisplaySizedImplicitPlaneRepresentation_SetRadiusMultiplier, METH_VARARGS,
   "SetRadiusMultiplier(self, radiusMultiplier:float) -> None\nC++: virtual void SetRadiusMultiplier(double radiusMultiplier)\n\nSet/Get the Radius Multiplier value. Default is 1.0.\n"},
  {"GetRadiusMultiplierMinValue", PyvtkDisplaySizedImplicitPlaneRepresentation_GetRadiusMultiplierMinValue, METH_VARARGS,
   "GetRadiusMultiplierMinValue(self) -> float\nC++: virtual double GetRadiusMultiplierMinValue()\n\n"},
  {"GetRadiusMultiplierMaxValue", PyvtkDisplaySizedImplicitPlaneRepresentation_GetRadiusMultiplierMaxValue, METH_VARARGS,
   "GetRadiusMultiplierMaxValue(self) -> float\nC++: virtual double GetRadiusMultiplierMaxValue()\n\n"},
  {"GetRadiusMultiplier", PyvtkDisplaySizedImplicitPlaneRepresentation_GetRadiusMultiplier, METH_VARARGS,
   "GetRadiusMultiplier(self) -> float\nC++: virtual double GetRadiusMultiplier()\n\n"},
  {"SetDrawPlane", PyvtkDisplaySizedImplicitPlaneRepresentation_SetDrawPlane, METH_VARARGS,
   "SetDrawPlane(self, plane:int) -> None\nC++: void SetDrawPlane(vtkTypeBool plane)\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {"GetDrawPlane", PyvtkDisplaySizedImplicitPlaneRepresentation_GetDrawPlane, METH_VARARGS,
   "GetDrawPlane(self) -> int\nC++: virtual vtkTypeBool GetDrawPlane()\n\n"},
  {"DrawPlaneOn", PyvtkDisplaySizedImplicitPlaneRepresentation_DrawPlaneOn, METH_VARARGS,
   "DrawPlaneOn(self) -> None\nC++: virtual void DrawPlaneOn()\n\n"},
  {"DrawPlaneOff", PyvtkDisplaySizedImplicitPlaneRepresentation_DrawPlaneOff, METH_VARARGS,
   "DrawPlaneOff(self) -> None\nC++: virtual void DrawPlaneOff()\n\n"},
  {"SetDrawOutline", PyvtkDisplaySizedImplicitPlaneRepresentation_SetDrawOutline, METH_VARARGS,
   "SetDrawOutline(self, outline:int) -> None\nC++: void SetDrawOutline(vtkTypeBool outline)\n\nEnable/disable the drawing of the outline. Default is off.\n"},
  {"GetDrawOutline", PyvtkDisplaySizedImplicitPlaneRepresentation_GetDrawOutline, METH_VARARGS,
   "GetDrawOutline(self) -> int\nC++: virtual vtkTypeBool GetDrawOutline()\n\n"},
  {"DrawOutlineOn", PyvtkDisplaySizedImplicitPlaneRepresentation_DrawOutlineOn, METH_VARARGS,
   "DrawOutlineOn(self) -> None\nC++: virtual void DrawOutlineOn()\n\n"},
  {"DrawOutlineOff", PyvtkDisplaySizedImplicitPlaneRepresentation_DrawOutlineOff, METH_VARARGS,
   "DrawOutlineOff(self) -> None\nC++: virtual void DrawOutlineOff()\n\n"},
  {"SetDrawIntersectionEdges", PyvtkDisplaySizedImplicitPlaneRepresentation_SetDrawIntersectionEdges, METH_VARARGS,
   "SetDrawIntersectionEdges(self, intersectionEdges:int) -> None\nC++: void SetDrawIntersectionEdges(vtkTypeBool intersectionEdges)\n\nEnable/disable the drawing of the intersection edges. Default is\noff.\n\nNote: drawing the intersection edges requires DrawOutline to be\non.\n"},
  {"GetDrawIntersectionEdges", PyvtkDisplaySizedImplicitPlaneRepresentation_GetDrawIntersectionEdges, METH_VARARGS,
   "GetDrawIntersectionEdges(self) -> int\nC++: virtual vtkTypeBool GetDrawIntersectionEdges()\n\n"},
  {"DrawIntersectionEdgesOn", PyvtkDisplaySizedImplicitPlaneRepresentation_DrawIntersectionEdgesOn, METH_VARARGS,
   "DrawIntersectionEdgesOn(self) -> None\nC++: virtual void DrawIntersectionEdgesOn()\n\n"},
  {"DrawIntersectionEdgesOff", PyvtkDisplaySizedImplicitPlaneRepresentation_DrawIntersectionEdgesOff, METH_VARARGS,
   "DrawIntersectionEdgesOff(self) -> None\nC++: virtual void DrawIntersectionEdgesOff()\n\n"},
  {"SetOutlineTranslation", PyvtkDisplaySizedImplicitPlaneRepresentation_SetOutlineTranslation, METH_VARARGS,
   "SetOutlineTranslation(self, _arg:int) -> None\nC++: virtual void SetOutlineTranslation(vtkTypeBool _arg)\n\nTurn on/off the ability to translate the bounding box by grabbing\nit with the left mouse button. Default is off.\n"},
  {"GetOutlineTranslation", PyvtkDisplaySizedImplicitPlaneRepresentation_GetOutlineTranslation, METH_VARARGS,
   "GetOutlineTranslation(self) -> int\nC++: virtual vtkTypeBool GetOutlineTranslation()\n\n"},
  {"OutlineTranslationOn", PyvtkDisplaySizedImplicitPlaneRepresentation_OutlineTranslationOn, METH_VARARGS,
   "OutlineTranslationOn(self) -> None\nC++: virtual void OutlineTranslationOn()\n\n"},
  {"OutlineTranslationOff", PyvtkDisplaySizedImplicitPlaneRepresentation_OutlineTranslationOff, METH_VARARGS,
   "OutlineTranslationOff(self) -> None\nC++: virtual void OutlineTranslationOff()\n\n"},
  {"SetOutsideBounds", PyvtkDisplaySizedImplicitPlaneRepresentation_SetOutsideBounds, METH_VARARGS,
   "SetOutsideBounds(self, _arg:int) -> None\nC++: virtual void SetOutsideBounds(vtkTypeBool _arg)\n\nTurn on/off the ability to move the widget outside of the bounds\nspecified in the initial PlaceWidget() invocation.\n"},
  {"GetOutsideBounds", PyvtkDisplaySizedImplicitPlaneRepresentation_GetOutsideBounds, METH_VARARGS,
   "GetOutsideBounds(self) -> int\nC++: virtual vtkTypeBool GetOutsideBounds()\n\n"},
  {"OutsideBoundsOn", PyvtkDisplaySizedImplicitPlaneRepresentation_OutsideBoundsOn, METH_VARARGS,
   "OutsideBoundsOn(self) -> None\nC++: virtual void OutsideBoundsOn()\n\n"},
  {"OutsideBoundsOff", PyvtkDisplaySizedImplicitPlaneRepresentation_OutsideBoundsOff, METH_VARARGS,
   "OutsideBoundsOff(self) -> None\nC++: virtual void OutsideBoundsOff()\n\n"},
  {"SetXTranslationAxisOn", PyvtkDisplaySizedImplicitPlaneRepresentation_SetXTranslationAxisOn, METH_VARARGS,
   "SetXTranslationAxisOn(self) -> None\nC++: void SetXTranslationAxisOn()\n\nToggles constraint translation axis on/off.\n"},
  {"SetYTranslationAxisOn", PyvtkDisplaySizedImplicitPlaneRepresentation_SetYTranslationAxisOn, METH_VARARGS,
   "SetYTranslationAxisOn(self) -> None\nC++: void SetYTranslationAxisOn()\n\n"},
  {"SetZTranslationAxisOn", PyvtkDisplaySizedImplicitPlaneRepresentation_SetZTranslationAxisOn, METH_VARARGS,
   "SetZTranslationAxisOn(self) -> None\nC++: void SetZTranslationAxisOn()\n\n"},
  {"SetTranslationAxisOff", PyvtkDisplaySizedImplicitPlaneRepresentation_SetTranslationAxisOff, METH_VARARGS,
   "SetTranslationAxisOff(self) -> None\nC++: void SetTranslationAxisOff()\n\n"},
  {"IsTranslationConstrained", PyvtkDisplaySizedImplicitPlaneRepresentation_IsTranslationConstrained, METH_VARARGS,
   "IsTranslationConstrained(self) -> bool\nC++: bool IsTranslationConstrained()\n\nReturns true if ConstrainedAxis\n"},
  {"SetWidgetBounds", PyvtkDisplaySizedImplicitPlaneRepresentation_SetWidgetBounds, METH_VARARGS,
   "SetWidgetBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetWidgetBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetWidgetBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetWidgetBounds(const double _arg[6])\n\nSet/Get the bounds of the widget representation. PlaceWidget can\nalso be used to set the bounds of the widget but it may also have\nother effects on the internal state of the representation. Use\nthis function when only the widget bounds need to be modified.\n"},
  {"GetWidgetBounds", PyvtkDisplaySizedImplicitPlaneRepresentation_GetWidgetBounds, METH_VARARGS,
   "GetWidgetBounds(self) -> (float, float, float, float, float,\n    float)\nC++: virtual double *GetWidgetBounds()\n\n"},
  {"SetConstrainToWidgetBounds", PyvtkDisplaySizedImplicitPlaneRepresentation_SetConstrainToWidgetBounds, METH_VARARGS,
   "SetConstrainToWidgetBounds(self, _arg:int) -> None\nC++: virtual void SetConstrainToWidgetBounds(vtkTypeBool _arg)\n\nTurn on/off whether the plane should be constrained to the widget\nbounds. If on, the origin will not be allowed to move outside the\nset widget bounds. The default behaviour is off. If off, the\norigin can be freely moved and the widget outline will change\naccordingly.\n"},
  {"GetConstrainToWidgetBounds", PyvtkDisplaySizedImplicitPlaneRepresentation_GetConstrainToWidgetBounds, METH_VARARGS,
   "GetConstrainToWidgetBounds(self) -> int\nC++: virtual vtkTypeBool GetConstrainToWidgetBounds()\n\n"},
  {"ConstrainToWidgetBoundsOn", PyvtkDisplaySizedImplicitPlaneRepresentation_ConstrainToWidgetBoundsOn, METH_VARARGS,
   "ConstrainToWidgetBoundsOn(self) -> None\nC++: virtual void ConstrainToWidgetBoundsOn()\n\n"},
  {"ConstrainToWidgetBoundsOff", PyvtkDisplaySizedImplicitPlaneRepresentation_ConstrainToWidgetBoundsOff, METH_VARARGS,
   "ConstrainToWidgetBoundsOff(self) -> None\nC++: virtual void ConstrainToWidgetBoundsOff()\n\n"},
  {"SetConstrainMaximumSizeToWidgetBounds", PyvtkDisplaySizedImplicitPlaneRepresentation_SetConstrainMaximumSizeToWidgetBounds, METH_VARARGS,
   "SetConstrainMaximumSizeToWidgetBounds(self, _arg:int) -> None\nC++: virtual void SetConstrainMaximumSizeToWidgetBounds(\n    vtkTypeBool _arg)\n\nTurn on/off whether the maximum widget size should be constrained\nto the widget bounds. If on, the radius of the disk plane and\nplane normal arrow will not be allowed to be larger than the half\ndiagonal of the bounding box formed by the widget bounds. If off,\nthe radius of the disk plane and plane normal arrow can be\narbitrary big The default behaviour is off.\n"},
  {"GetConstrainMaximumSizeToWidgetBounds", PyvtkDisplaySizedImplicitPlaneRepresentation_GetConstrainMaximumSizeToWidgetBounds, METH_VARARGS,
   "GetConstrainMaximumSizeToWidgetBounds(self) -> int\nC++: virtual vtkTypeBool GetConstrainMaximumSizeToWidgetBounds()\n\n"},
  {"ConstrainMaximumSizeToWidgetBoundsOn", PyvtkDisplaySizedImplicitPlaneRepresentation_ConstrainMaximumSizeToWidgetBoundsOn, METH_VARARGS,
   "ConstrainMaximumSizeToWidgetBoundsOn(self) -> None\nC++: virtual void ConstrainMaximumSizeToWidgetBoundsOn()\n\n"},
  {"ConstrainMaximumSizeToWidgetBoundsOff", PyvtkDisplaySizedImplicitPlaneRepresentation_ConstrainMaximumSizeToWidgetBoundsOff, METH_VARARGS,
   "ConstrainMaximumSizeToWidgetBoundsOff(self) -> None\nC++: virtual void ConstrainMaximumSizeToWidgetBoundsOff()\n\n"},
  {"SetScaleEnabled", PyvtkDisplaySizedImplicitPlaneRepresentation_SetScaleEnabled, METH_VARARGS,
   "SetScaleEnabled(self, _arg:int) -> None\nC++: virtual void SetScaleEnabled(vtkTypeBool _arg)\n\nTurn on/off the ability to scale the widget with the mouse.\n"},
  {"GetScaleEnabled", PyvtkDisplaySizedImplicitPlaneRepresentation_GetScaleEnabled, METH_VARARGS,
   "GetScaleEnabled(self) -> int\nC++: virtual vtkTypeBool GetScaleEnabled()\n\n"},
  {"ScaleEnabledOn", PyvtkDisplaySizedImplicitPlaneRepresentation_ScaleEnabledOn, METH_VARARGS,
   "ScaleEnabledOn(self) -> None\nC++: virtual void ScaleEnabledOn()\n\n"},
  {"ScaleEnabledOff", PyvtkDisplaySizedImplicitPlaneRepresentation_ScaleEnabledOff, METH_VARARGS,
   "ScaleEnabledOff(self) -> None\nC++: virtual void ScaleEnabledOff()\n\n"},
  {"GetPolyData", PyvtkDisplaySizedImplicitPlaneRepresentation_GetPolyData, METH_VARARGS,
   "GetPolyData(self, pd:vtkPolyData) -> None\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata that defines the plane. The polydata contains a\nsingle polygon that is clipped by the bounding box.\n"},
  {"GetPolyDataAlgorithm", PyvtkDisplaySizedImplicitPlaneRepresentation_GetPolyDataAlgorithm, METH_VARARGS,
   "GetPolyDataAlgorithm(self) -> vtkPolyDataAlgorithm\nC++: vtkPolyDataAlgorithm *GetPolyDataAlgorithm()\n\nSatisfies superclass API.  This returns a pointer to the\nunderlying PolyData (which represents the plane).\n"},
  {"GetPlane", PyvtkDisplaySizedImplicitPlaneRepresentation_GetPlane, METH_VARARGS,
   "GetPlane(self, plane:vtkPlane) -> None\nC++: void GetPlane(vtkPlane *plane)\n\nGet the implicit function for the plane by copying the origin and\nnormal of the cut plane into the provided vtkPlane. The user must\nprovide the instance of the class vtkPlane. Note that vtkPlane is\na subclass of vtkImplicitFunction, meaning that it can be used by\na variety of filters to perform clipping, cutting, and selection\nof data.\n"},
  {"SetPlane", PyvtkDisplaySizedImplicitPlaneRepresentation_SetPlane, METH_VARARGS,
   "SetPlane(self, plane:vtkPlane) -> None\nC++: void SetPlane(vtkPlane *plane)\n\nAlternative way to define the cutting plane. The normal and\norigin of the plane provided is copied into the internal instance\nof the class cutting vtkPlane.\n"},
  {"UpdatePlacement", PyvtkDisplaySizedImplicitPlaneRepresentation_UpdatePlacement, METH_VARARGS,
   "UpdatePlacement(self) -> None\nC++: void UpdatePlacement()\n\nSatisfies the superclass API.  This will change the state of the\nwidget to match changes that have been made to the underlying\nPolyDataSource\n"},
  {"GetNormalProperty", PyvtkDisplaySizedImplicitPlaneRepresentation_GetNormalProperty, METH_VARARGS,
   "GetNormalProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetNormalProperty()\n\nGet the properties on the normal (line and cone). The properties\nof the normal when selected and unselected can be manipulated.\n"},
  {"GetSelectedNormalProperty", PyvtkDisplaySizedImplicitPlaneRepresentation_GetSelectedNormalProperty, METH_VARARGS,
   "GetSelectedNormalProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedNormalProperty()\n\n"},
  {"GetSphereProperty", PyvtkDisplaySizedImplicitPlaneRepresentation_GetSphereProperty, METH_VARARGS,
   "GetSphereProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSphereProperty()\n\nGet the properties on the sphere. The properties of the sphere\nwhen selected and unselected can be manipulated.\n"},
  {"GetSelectedSphereProperty", PyvtkDisplaySizedImplicitPlaneRepresentation_GetSelectedSphereProperty, METH_VARARGS,
   "GetSelectedSphereProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedSphereProperty()\n\n"},
  {"GetPlaneProperty", PyvtkDisplaySizedImplicitPlaneRepresentation_GetPlaneProperty, METH_VARARGS,
   "GetPlaneProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetPlaneProperty()\n\nGet the plane properties. The properties of the plane when\nselected and unselected can be manipulated.\n"},
  {"GetSelectedPlaneProperty", PyvtkDisplaySizedImplicitPlaneRepresentation_GetSelectedPlaneProperty, METH_VARARGS,
   "GetSelectedPlaneProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedPlaneProperty()\n\n"},
  {"GetOutlineProperty", PyvtkDisplaySizedImplicitPlaneRepresentation_GetOutlineProperty, METH_VARARGS,
   "GetOutlineProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetOutlineProperty()\n\nGet the property of the outline.\n"},
  {"GetSelectedOutlineProperty", PyvtkDisplaySizedImplicitPlaneRepresentation_GetSelectedOutlineProperty, METH_VARARGS,
   "GetSelectedOutlineProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedOutlineProperty()\n\n"},
  {"GetEdgesProperty", PyvtkDisplaySizedImplicitPlaneRepresentation_GetEdgesProperty, METH_VARARGS,
   "GetEdgesProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetEdgesProperty()\n\nGet the property of the disk edges. The properties of the edges\nwhen selected and unselected can be manipulated.\n"},
  {"GetSelectedEdgesProperty", PyvtkDisplaySizedImplicitPlaneRepresentation_GetSelectedEdgesProperty, METH_VARARGS,
   "GetSelectedEdgesProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedEdgesProperty()\n\n"},
  {"GetIntersectionEdgesProperty", PyvtkDisplaySizedImplicitPlaneRepresentation_GetIntersectionEdgesProperty, METH_VARARGS,
   "GetIntersectionEdgesProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetIntersectionEdgesProperty()\n\nGet the property of the intersection edges of the plane with the\noutline.\n"},
  {"SetInteractionColor", PyvtkDisplaySizedImplicitPlaneRepresentation_SetInteractionColor, METH_VARARGS,
   "SetInteractionColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetInteractionColor(double, double, double)\nSetInteractionColor(self, c:[float, float, float]) -> None\nC++: void SetInteractionColor(double c[3])\n\nSet the color of all the widget's handles (edges, cone1, cone2,\nline, sphere, selected plane) and their color during interaction.\nForeground color applies to the outlines and unselected plane.\n"},
  {"SetHandleColor", PyvtkDisplaySizedImplicitPlaneRepresentation_SetHandleColor, METH_VARARGS,
   "SetHandleColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetHandleColor(double, double, double)\nSetHandleColor(self, c:[float, float, float]) -> None\nC++: void SetHandleColor(double c[3])\n\n"},
  {"SetForegroundColor", PyvtkDisplaySizedImplicitPlaneRepresentation_SetForegroundColor, METH_VARARGS,
   "SetForegroundColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetForegroundColor(double, double, double)\nSetForegroundColor(self, c:[float, float, float]) -> None\nC++: void SetForegroundColor(double c[3])\n\n"},
  {"SetSelectedWidgetColor", PyvtkDisplaySizedImplicitPlaneRepresentation_SetSelectedWidgetColor, METH_VARARGS,
   "SetSelectedWidgetColor(self, a:float, b:float, c:float) -> None\nC++: void SetSelectedWidgetColor(double a, double b, double c)\nSetSelectedWidgetColor(self, c:[float, float, float]) -> None\nC++: void SetSelectedWidgetColor(double c[3])\n\n"},
  {"SetUnselectedWidgetColor", PyvtkDisplaySizedImplicitPlaneRepresentation_SetUnselectedWidgetColor, METH_VARARGS,
   "SetUnselectedWidgetColor(self, a:float, b:float, c:float) -> None\nC++: void SetUnselectedWidgetColor(double a, double b, double c)\nSetUnselectedWidgetColor(self, c:[float, float, float]) -> None\nC++: void SetUnselectedWidgetColor(double c[3])\n\n"},
  {"SetBumpDistance", PyvtkDisplaySizedImplicitPlaneRepresentation_SetBumpDistance, METH_VARARGS,
   "SetBumpDistance(self, _arg:float) -> None\nC++: virtual void SetBumpDistance(double _arg)\n\nSpecify a translation distance used by the BumpPlane() method.\nNote that the distance is normalized; it is the fraction of the\nlength of the bounding box of the wire outline.\n"},
  {"GetBumpDistanceMinValue", PyvtkDisplaySizedImplicitPlaneRepresentation_GetBumpDistanceMinValue, METH_VARARGS,
   "GetBumpDistanceMinValue(self) -> float\nC++: virtual double GetBumpDistanceMinValue()\n\n"},
  {"GetBumpDistanceMaxValue", PyvtkDisplaySizedImplicitPlaneRepresentation_GetBumpDistanceMaxValue, METH_VARARGS,
   "GetBumpDistanceMaxValue(self) -> float\nC++: virtual double GetBumpDistanceMaxValue()\n\n"},
  {"GetBumpDistance", PyvtkDisplaySizedImplicitPlaneRepresentation_GetBumpDistance, METH_VARARGS,
   "GetBumpDistance(self) -> float\nC++: virtual double GetBumpDistance()\n\n"},
  {"BumpPlane", PyvtkDisplaySizedImplicitPlaneRepresentation_BumpPlane, METH_VARARGS,
   "BumpPlane(self, dir:int, factor:float) -> None\nC++: void BumpPlane(int dir, double factor)\n\nTranslate the plane in the direction of the normal by the\nspecified BumpDistance.  The dir parameter controls which\ndirection the pushing occurs, either in the same direction as the\nnormal, or when negative, in the opposite direction. The factor\ncontrols whether what percentage of the bump is used.\n"},
  {"PushPlane", PyvtkDisplaySizedImplicitPlaneRepresentation_PushPlane, METH_VARARGS,
   "PushPlane(self, distance:float) -> None\nC++: void PushPlane(double distance)\n\nPush the plane the distance specified along the normal. Positive\nvalues are in the direction of the normal; negative values are in\nthe opposite direction of the normal. The distance value is\nexpressed in world coordinates.\n"},
  {"GetPickCameraFocalInfo", PyvtkDisplaySizedImplicitPlaneRepresentation_GetPickCameraFocalInfo, METH_VARARGS,
   "GetPickCameraFocalInfo(self) -> bool\nC++: virtual bool GetPickCameraFocalInfo()\n\nEnable/Disable picking camera focal info if no result is\navailable for PickOrigin and PickNormal. The default is disabled.\n"},
  {"SetPickCameraFocalInfo", PyvtkDisplaySizedImplicitPlaneRepresentation_SetPickCameraFocalInfo, METH_VARARGS,
   "SetPickCameraFocalInfo(self, _arg:bool) -> None\nC++: virtual void SetPickCameraFocalInfo(bool _arg)\n\n"},
  {"PickCameraFocalInfoOn", PyvtkDisplaySizedImplicitPlaneRepresentation_PickCameraFocalInfoOn, METH_VARARGS,
   "PickCameraFocalInfoOn(self) -> None\nC++: virtual void PickCameraFocalInfoOn()\n\n"},
  {"PickCameraFocalInfoOff", PyvtkDisplaySizedImplicitPlaneRepresentation_PickCameraFocalInfoOff, METH_VARARGS,
   "PickCameraFocalInfoOff(self) -> None\nC++: virtual void PickCameraFocalInfoOff()\n\n"},
  {"PickOrigin", PyvtkDisplaySizedImplicitPlaneRepresentation_PickOrigin, METH_VARARGS,
   "PickOrigin(self, X:int, Y:int, snapToMeshPoint:bool=False) -> bool\nC++: bool PickOrigin(int X, int Y, bool snapToMeshPoint=false)\n\nGiven the X, Y display coordinates, pick a new origin for the\nplane from a point that is on the objects rendered by the\nrenderer.\n\nNote: if a point from a rendered object is not picked, the camera\nfocal point can optionally be set.\n"},
  {"PickNormal", PyvtkDisplaySizedImplicitPlaneRepresentation_PickNormal, METH_VARARGS,
   "PickNormal(self, X:int, Y:int, snapToMeshPoint:bool=False) -> bool\nC++: bool PickNormal(int X, int Y, bool snapToMeshPoint=false)\n\nGiven the X, Y display coordinates, pick a new normal for the\nplane from a point that is on the objects rendered by the\nrenderer.\n\nNote: if a normal from a rendered object is not picked, the\ncamera plane normal can optionally be set.\n"},
  {"ComputeInteractionState", PyvtkDisplaySizedImplicitPlaneRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nMethods to interface with the vtkDisplaySizedImplicitPlaneWidget.\n"},
  {"PlaceWidget", PyvtkDisplaySizedImplicitPlaneRepresentation_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\n\nThe following is a suggested API for widget representations.\nThese methods define the communication between the widget and its\nrepresentation. These methods are only suggestions because\nwidgets take on so many different forms that a universal API is\nnot deemed practical. However, these methods should be\nimplemented when possible to ensure that the VTK widget hierarchy\nremains self-consistent.\n\nPlaceWidget() - given a bounding box\n(xmin,xmax,ymin,ymax,zmin,zmax), place the widget inside of it.\nThe current orientation of the widget is preserved, only scaling\nand translation is performed. StartWidgetInteraction() -\ngenerally corresponds to a initial event (e.g., mouse down) that\nstarts the interaction process with the widget.\nWidgetInteraction() - invoked when an event causes the widget to\nchange appearance. EndWidgetInteraction() - generally corresponds\nto a final event (e.g., mouse up) and completes the interaction\nsequence. ComputeInteractionState() - given (X,Y) display\ncoordinates in a renderer, with a possible flag that modifies the\ncomputation, what is the state of the widget?\nGetInteractionState() - return the current state of the widget.\nNote that the value of \"0\" typically refers to \"outside\". The\ninteraction state is strictly a function of the representation,\nand the widget/represent must agree on what they mean.\nHighlight() - turn on or off any highlights associated with the\nwidget. Highlights are generally turned on when the widget is\nselected.  Note that subclasses may ignore some of these methods\nand implement their own depending on the specifics of the widget.\n"},
  {"BuildRepresentation", PyvtkDisplaySizedImplicitPlaneRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"StartWidgetInteraction", PyvtkDisplaySizedImplicitPlaneRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkDisplaySizedImplicitPlaneRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, newEventPos:[float, float]) -> None\nC++: void WidgetInteraction(double newEventPos[2]) override;\n\n"},
  {"EndWidgetInteraction", PyvtkDisplaySizedImplicitPlaneRepresentation_EndWidgetInteraction, METH_VARARGS,
   "EndWidgetInteraction(self, newEventPos:[float, float]) -> None\nC++: void EndWidgetInteraction(double newEventPos[2]) override;\n\n"},
  {"StartComplexInteraction", PyvtkDisplaySizedImplicitPlaneRepresentation_StartComplexInteraction, METH_VARARGS,
   "StartComplexInteraction(self, iren:vtkRenderWindowInteractor,\n    widget:vtkAbstractWidget, event:int, calldata:Pointer) -> None\nC++: void StartComplexInteraction(vtkRenderWindowInteractor *iren,\n     vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\n"},
  {"ComplexInteraction", PyvtkDisplaySizedImplicitPlaneRepresentation_ComplexInteraction, METH_VARARGS,
   "ComplexInteraction(self, iren:vtkRenderWindowInteractor,\n    widget:vtkAbstractWidget, event:int, calldata:Pointer) -> None\nC++: void ComplexInteraction(vtkRenderWindowInteractor *iren,\n    vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\n"},
  {"ComputeComplexInteractionState", PyvtkDisplaySizedImplicitPlaneRepresentation_ComputeComplexInteractionState, METH_VARARGS,
   "ComputeComplexInteractionState(self,\n    iren:vtkRenderWindowInteractor, widget:vtkAbstractWidget,\n    event:int, calldata:Pointer, modify:int=0) -> int\nC++: int ComputeComplexInteractionState(\n    vtkRenderWindowInteractor *iren, vtkAbstractWidget *widget,\n    unsigned long event, void *calldata, int modify=0) override;\n\n"},
  {"EndComplexInteraction", PyvtkDisplaySizedImplicitPlaneRepresentation_EndComplexInteraction, METH_VARARGS,
   "EndComplexInteraction(self, iren:vtkRenderWindowInteractor,\n    widget:vtkAbstractWidget, event:int, calldata:Pointer) -> None\nC++: void EndComplexInteraction(vtkRenderWindowInteractor *iren,\n    vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\n"},
  {"GetBounds", PyvtkDisplaySizedImplicitPlaneRepresentation_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods supporting the rendering process.\n"},
  {"GetActors", PyvtkDisplaySizedImplicitPlaneRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, pc:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *pc) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"ReleaseGraphicsResources", PyvtkDisplaySizedImplicitPlaneRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOpaqueGeometry", PyvtkDisplaySizedImplicitPlaneRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkDisplaySizedImplicitPlaneRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkDisplaySizedImplicitPlaneRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"SetInteractionState", PyvtkDisplaySizedImplicitPlaneRepresentation_SetInteractionState, METH_VARARGS,
   "SetInteractionState(self, _arg:int) -> None\nC++: virtual void SetInteractionState(int _arg)\n\nThe interaction state may be set from a widget (e.g.,\nvtkDisplaySizedImplicitPlaneWidget) or other object. This\ncontrols how the interaction with the widget proceeds. Normally\nthis method is used as part of a handshaking process with the\nwidget: First ComputeInteractionState() is invoked that returns a\nstate based on geometric considerations (i.e., cursor near a\nwidget feature), then based on events, the widget may modify this\nfurther.\n"},
  {"GetInteractionStateMinValue", PyvtkDisplaySizedImplicitPlaneRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   "GetInteractionStateMinValue(self) -> int\nC++: virtual int GetInteractionStateMinValue()\n\n"},
  {"GetInteractionStateMaxValue", PyvtkDisplaySizedImplicitPlaneRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   "GetInteractionStateMaxValue(self) -> int\nC++: virtual int GetInteractionStateMaxValue()\n\n"},
  {"SetRepresentationState", PyvtkDisplaySizedImplicitPlaneRepresentation_SetRepresentationState, METH_VARARGS,
   "SetRepresentationState(self, __a:int) -> None\nC++: virtual void SetRepresentationState(int)\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {"GetRepresentationState", PyvtkDisplaySizedImplicitPlaneRepresentation_GetRepresentationState, METH_VARARGS,
   "GetRepresentationState(self) -> int\nC++: virtual int GetRepresentationState()\n\n"},
  {"GetUnderlyingPlane", PyvtkDisplaySizedImplicitPlaneRepresentation_GetUnderlyingPlane, METH_VARARGS,
   "GetUnderlyingPlane(self) -> vtkPlane\nC++: vtkPlane *GetUnderlyingPlane()\n\n"},
  {"GetSnapToAxes", PyvtkDisplaySizedImplicitPlaneRepresentation_GetSnapToAxes, METH_VARARGS,
   "GetSnapToAxes(self) -> bool\nC++: virtual bool GetSnapToAxes()\n\nFor complex events should we snap orientations to be aligned with\nthe x y z axes.\n"},
  {"SetSnapToAxes", PyvtkDisplaySizedImplicitPlaneRepresentation_SetSnapToAxes, METH_VARARGS,
   "SetSnapToAxes(self, _arg:bool) -> None\nC++: virtual void SetSnapToAxes(bool _arg)\n\n"},
  {"SnapToAxesOn", PyvtkDisplaySizedImplicitPlaneRepresentation_SnapToAxesOn, METH_VARARGS,
   "SnapToAxesOn(self) -> None\nC++: virtual void SnapToAxesOn()\n\n"},
  {"SnapToAxesOff", PyvtkDisplaySizedImplicitPlaneRepresentation_SnapToAxesOff, METH_VARARGS,
   "SnapToAxesOff(self) -> None\nC++: virtual void SnapToAxesOff()\n\n"},
  {"GetAlwaysSnapToNearestAxis", PyvtkDisplaySizedImplicitPlaneRepresentation_GetAlwaysSnapToNearestAxis, METH_VARARGS,
   "GetAlwaysSnapToNearestAxis(self) -> bool\nC++: virtual bool GetAlwaysSnapToNearestAxis()\n\nForces the plane's normal to be aligned with x, y or z axis. The\nalignment happens when calling SetNormal. It defers with\nSnapToAxes from it is always applicable, and SnapToAxes only\nsnaps when the angle difference exceeds 16 degrees in complex\ninteractions.\n"},
  {"SetAlwaysSnapToNearestAxis", PyvtkDisplaySizedImplicitPlaneRepresentation_SetAlwaysSnapToNearestAxis, METH_VARARGS,
   "SetAlwaysSnapToNearestAxis(self, snap:bool) -> None\nC++: virtual void SetAlwaysSnapToNearestAxis(bool snap)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDisplaySizedImplicitPlaneRepresentation_Doc =
  "vtkDisplaySizedImplicitPlaneRepresentation - a class defining the\nrepresentation for a vtkDisplaySizedImplicitPlaneWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is a concrete representation for the\n"
  "vtkDisplaySizedImplicitPlaneWidget. It represents an display sized\n"
  "disk plane defined by a normal and point. Through interaction with\n"
  "the widget, the plane can be manipulated by adjusting the plane\n"
  "normal, disk radius or moving/picking the origin point.\n\n"
  "To use this representation, you normally define a (plane) origin and\n"
  "(plane) normal. The PlaceWidget() method is also used to initially\n"
  "position the representation.\n\n"
  "@warning\n"
  "This class, and vtkDisplaySizedImplicitPlaneWidget, are next\n"
  "generation VTK widgets.\n\n"
  "@sa\n"
  "vtkDisplaySizedImplicitPlaneWidget vtkImplicitPlaneWidget2\n"
  "vtkImplicitPlaneWidget vtkImplicitImageRepresentation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDisplaySizedImplicitPlaneRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkDisplaySizedImplicitPlaneRepresentation", // tp_name
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
  PyvtkDisplaySizedImplicitPlaneRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDisplaySizedImplicitPlaneRepresentation_StaticNew()
{
  return vtkDisplaySizedImplicitPlaneRepresentation::New();
}

PyObject *PyvtkDisplaySizedImplicitPlaneRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDisplaySizedImplicitPlaneRepresentation_Type, PyvtkDisplaySizedImplicitPlaneRepresentation_Methods,
    "vtkDisplaySizedImplicitPlaneRepresentation",
 &PyvtkDisplaySizedImplicitPlaneRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDisplaySizedImplicitPlaneRepresentation_InteractionStateType_Type);
  PyVTKEnum_Add(&PyvtkDisplaySizedImplicitPlaneRepresentation_InteractionStateType_Type, "vtkDisplaySizedImplicitPlaneRepresentation.InteractionStateType");

  o = (PyObject *)&PyvtkDisplaySizedImplicitPlaneRepresentation_InteractionStateType_Type;
  if (PyDict_SetItemString(d, "InteractionStateType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkDisplaySizedImplicitPlaneRepresentation::InteractionStateType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "Outside", vtkDisplaySizedImplicitPlaneRepresentation::Outside },
        { "Moving", vtkDisplaySizedImplicitPlaneRepresentation::Moving },
        { "MovingOutline", vtkDisplaySizedImplicitPlaneRepresentation::MovingOutline },
        { "MovingOrigin", vtkDisplaySizedImplicitPlaneRepresentation::MovingOrigin },
        { "Rotating", vtkDisplaySizedImplicitPlaneRepresentation::Rotating },
        { "Pushing", vtkDisplaySizedImplicitPlaneRepresentation::Pushing },
        { "ResizeDiskRadius", vtkDisplaySizedImplicitPlaneRepresentation::ResizeDiskRadius },
        { "Scaling", vtkDisplaySizedImplicitPlaneRepresentation::Scaling },
      };

    o = PyvtkDisplaySizedImplicitPlaneRepresentation_InteractionStateType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDisplaySizedImplicitPlaneRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDisplaySizedImplicitPlaneRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDisplaySizedImplicitPlaneRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

