// python wrapper for vtkCoordinateFrameRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCoordinateFrameRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCoordinateFrameRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkCoordinateFrameRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCoordinateFrameRepresentation_InteractionStateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkCoordinateFrameRepresentation.InteractionStateType", // tp_name
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
PyObject *PyvtkCoordinateFrameRepresentation_InteractionStateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCoordinateFrameRepresentation_InteractionStateType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCoordinateFrameRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCoordinateFrameRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCoordinateFrameRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCoordinateFrameRepresentation *tempr = vtkCoordinateFrameRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinateFrameRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCoordinateFrameRepresentation::NewInstance());

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
PyvtkCoordinateFrameRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCoordinateFrameRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCoordinateFrameRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrameRepresentation_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::SetOrigin(temp0);
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
PyvtkCoordinateFrameRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCoordinateFrameRepresentation_SetOrigin_s1(self, args);
    case 1:
      return PyvtkCoordinateFrameRepresentation_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkCoordinateFrameRepresentation::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrameRepresentation_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::SetNormal(temp0);
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
PyvtkCoordinateFrameRepresentation_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCoordinateFrameRepresentation_SetNormal_s1(self, args);
    case 1:
      return PyvtkCoordinateFrameRepresentation_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetNormalToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNormalToCamera();
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::SetNormalToCamera();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetXVectorNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXVectorNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetXVectorNormal() :
      op->vtkCoordinateFrameRepresentation::GetXVectorNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetYVectorNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYVectorNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetYVectorNormal() :
      op->vtkCoordinateFrameRepresentation::GetYVectorNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetZVectorNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZVectorNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetZVectorNormal() :
      op->vtkCoordinateFrameRepresentation::GetZVectorNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->SetDirection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::SetDirection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrameRepresentation_SetDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->SetDirection(temp0);
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::SetDirection(temp0);
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
PyvtkCoordinateFrameRepresentation_SetDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCoordinateFrameRepresentation_SetDirection_s1(self, args);
    case 1:
      return PyvtkCoordinateFrameRepresentation_SetDirection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDirection");
  return nullptr;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetXAxisVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisVector(temp0);
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::SetXAxisVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrameRepresentation_SetXAxisVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->SetXAxisVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::SetXAxisVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrameRepresentation_SetXAxisVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCoordinateFrameRepresentation_SetXAxisVector_s1(self, args);
    case 3:
      return PyvtkCoordinateFrameRepresentation_SetXAxisVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXAxisVector");
  return nullptr;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetYAxisVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisVector(temp0);
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::SetYAxisVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrameRepresentation_SetYAxisVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->SetYAxisVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::SetYAxisVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrameRepresentation_SetYAxisVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCoordinateFrameRepresentation_SetYAxisVector_s1(self, args);
    case 3:
      return PyvtkCoordinateFrameRepresentation_SetYAxisVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetYAxisVector");
  return nullptr;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetZAxisVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetZAxisVector(temp0);
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::SetZAxisVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrameRepresentation_SetZAxisVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->SetZAxisVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::SetZAxisVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrameRepresentation_SetZAxisVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCoordinateFrameRepresentation_SetZAxisVector_s1(self, args);
    case 3:
      return PyvtkCoordinateFrameRepresentation_SetZAxisVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZAxisVector");
  return nullptr;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetLockNormalToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockNormalToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::SetLockNormalToCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetLockNormalToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockNormalToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLockNormalToCamera() :
      op->vtkCoordinateFrameRepresentation::GetLockNormalToCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_LockNormalToCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockNormalToCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockNormalToCameraOn();
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::LockNormalToCameraOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_LockNormalToCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockNormalToCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockNormalToCameraOff();
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::LockNormalToCameraOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetXTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXTranslationAxisOn();
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::SetXTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetYTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetYTranslationAxisOn();
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::SetYTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetZTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetZTranslationAxisOn();
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::SetZTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetTranslationAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationAxisOff();
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::SetTranslationAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_IsTranslationConstrained(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTranslationConstrained");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsTranslationConstrained() :
      op->vtkCoordinateFrameRepresentation::IsTranslationConstrained());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePlacement();
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::UpdatePlacement();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_ResetAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetAxes();
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::ResetAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetOriginProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetOriginProperty() :
      op->vtkCoordinateFrameRepresentation::GetOriginProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetSelectedOriginProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOriginProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedOriginProperty() :
      op->vtkCoordinateFrameRepresentation::GetSelectedOriginProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetXVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetXVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetSelectedXVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedXVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedXVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetSelectedXVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetLockedXVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockedXVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLockedXVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetLockedXVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetSelectedLockedXVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLockedXVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedLockedXVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetSelectedLockedXVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetUnlockedXVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnlockedXVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetUnlockedXVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetUnlockedXVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetSelectedUnlockedXVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedUnlockedXVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedUnlockedXVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetSelectedUnlockedXVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetYVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetYVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetSelectedYVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedYVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedYVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetSelectedYVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetLockedYVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockedYVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLockedYVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetLockedYVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetSelectedLockedYVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLockedYVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedLockedYVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetSelectedLockedYVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetUnlockedYVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnlockedYVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetUnlockedYVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetUnlockedYVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetSelectedUnlockedYVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedUnlockedYVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedUnlockedYVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetSelectedUnlockedYVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetZVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetZVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetSelectedZVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedZVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedZVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetSelectedZVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetLockedZVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockedZVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLockedZVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetLockedZVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetSelectedLockedZVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLockedZVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedLockedZVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetSelectedLockedZVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetUnlockedZVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnlockedZVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetUnlockedZVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetUnlockedZVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetSelectedUnlockedZVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedUnlockedZVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedUnlockedZVectorProperty() :
      op->vtkCoordinateFrameRepresentation::GetSelectedUnlockedZVectorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetPickCameraFocalInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickCameraFocalInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPickCameraFocalInfo() :
      op->vtkCoordinateFrameRepresentation::GetPickCameraFocalInfo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetPickCameraFocalInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickCameraFocalInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::SetPickCameraFocalInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_PickCameraFocalInfoOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickCameraFocalInfoOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickCameraFocalInfoOn();
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::PickCameraFocalInfoOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_PickCameraFocalInfoOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickCameraFocalInfoOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickCameraFocalInfoOff();
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::PickCameraFocalInfoOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_PickOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::PickOrigin(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_PickNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::PickNormal(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_PickDirectionPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickDirectionPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->PickDirectionPoint(temp0, temp1, temp2) :
      op->vtkCoordinateFrameRepresentation::PickDirectionPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetLockedAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockedAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLockedAxis() :
      op->vtkCoordinateFrameRepresentation::GetLockedAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetLockedAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockedAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLockedAxis(temp0);
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::SetLockedAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::PlaceWidget(temp0);
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
PyvtkCoordinateFrameRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::StartWidgetInteraction(temp0);
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
PyvtkCoordinateFrameRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::WidgetInteraction(temp0);
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
PyvtkCoordinateFrameRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::EndWidgetInteraction(temp0);
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
PyvtkCoordinateFrameRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkCoordinateFrameRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCoordinateFrameRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCoordinateFrameRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCoordinateFrameRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkCoordinateFrameRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkCoordinateFrameRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

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
      op->vtkCoordinateFrameRepresentation::SetRepresentationState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationState() :
      op->vtkCoordinateFrameRepresentation::GetRepresentationState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_SetLengthFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLengthFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLengthFactor(temp0);
    }
    else
    {
      op->vtkCoordinateFrameRepresentation::SetLengthFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetLengthFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengthFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLengthFactorMinValue() :
      op->vtkCoordinateFrameRepresentation::GetLengthFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetLengthFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengthFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLengthFactorMaxValue() :
      op->vtkCoordinateFrameRepresentation::GetLengthFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameRepresentation_GetLengthFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengthFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameRepresentation *op = static_cast<vtkCoordinateFrameRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLengthFactor() :
      op->vtkCoordinateFrameRepresentation::GetLengthFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCoordinateFrameRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkCoordinateFrameRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCoordinateFrameRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCoordinateFrameRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCoordinateFrameRepresentation\nC++: static vtkCoordinateFrameRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCoordinateFrameRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCoordinateFrameRepresentation\nC++: vtkCoordinateFrameRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCoordinateFrameRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCoordinateFrameRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOrigin", PyvtkCoordinateFrameRepresentation_SetOrigin, METH_VARARGS,
   "SetOrigin(self, x:float, y:float, z:float) -> None\nC++: void SetOrigin(double x, double y, double z)\nSetOrigin(self, x:[float, float, float]) -> None\nC++: void SetOrigin(double x[3])\n\nSet/Get the origin of the coordinate frame.\n"},
  {"GetOrigin", PyvtkCoordinateFrameRepresentation_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetNormal", PyvtkCoordinateFrameRepresentation_SetNormal, METH_VARARGS,
   "SetNormal(self, x:float, y:float, z:float) -> None\nC++: void SetNormal(double x, double y, double z)\nSetNormal(self, n:[float, float, float]) -> None\nC++: void SetNormal(double n[3])\n\nSet/Get the normal of one of the axes of the coordinate frame.\n\n1) If 1 arrow tip is constrained, the corresponding normal vector\nis set to the picked normal.\n2) Otherwise, the axis closest to the picked normal (i.e., with\n   the largest dot product) is reset to the picked normal.\n\nIn both cases, the remaining normals are re-orthogonalized using\nthe <a\nhref=\"https://en.wikipedia.org/wiki/Gram%E2%80%93Schmidt_process\">\nGram-Schmidt procedure.\n"},
  {"SetNormalToCamera", PyvtkCoordinateFrameRepresentation_SetNormalToCamera, METH_VARARGS,
   "SetNormalToCamera(self) -> None\nC++: void SetNormalToCamera()\n\n"},
  {"GetXVectorNormal", PyvtkCoordinateFrameRepresentation_GetXVectorNormal, METH_VARARGS,
   "GetXVectorNormal(self) -> (float, float, float)\nC++: virtual double *GetXVectorNormal()\n\n"},
  {"GetYVectorNormal", PyvtkCoordinateFrameRepresentation_GetYVectorNormal, METH_VARARGS,
   "GetYVectorNormal(self) -> (float, float, float)\nC++: virtual double *GetYVectorNormal()\n\n"},
  {"GetZVectorNormal", PyvtkCoordinateFrameRepresentation_GetZVectorNormal, METH_VARARGS,
   "GetZVectorNormal(self) -> (float, float, float)\nC++: virtual double *GetZVectorNormal()\n\n"},
  {"SetDirection", PyvtkCoordinateFrameRepresentation_SetDirection, METH_VARARGS,
   "SetDirection(self, x:float, y:float, z:float) -> None\nC++: void SetDirection(double x, double y, double z)\nSetDirection(self, d:[float, float, float]) -> None\nC++: void SetDirection(double d[3])\n\nSet the direction of the locked (or absent a locked axis, the\nnearest axis) to point from the frame's origin toward the given\n(x,y,z) location.\n"},
  {"SetXAxisVector", PyvtkCoordinateFrameRepresentation_SetXAxisVector, METH_VARARGS,
   "SetXAxisVector(self, v:(float, float, float)) -> None\nC++: void SetXAxisVector(const double v[3])\nSetXAxisVector(self, x:float, y:float, z:float) -> None\nC++: void SetXAxisVector(double x, double y, double z)\n\nForce an axis to be aligned with the vector v, regardless of\nwhether any axis is locked.\n\nThis will normalize v and re-orthogonalize the remaining axes\nusing the Gram-Schmidt procedure. Passing in a degenerate\n(zero-length) vector will be ignored.\n"},
  {"SetYAxisVector", PyvtkCoordinateFrameRepresentation_SetYAxisVector, METH_VARARGS,
   "SetYAxisVector(self, v:(float, float, float)) -> None\nC++: void SetYAxisVector(const double v[3])\nSetYAxisVector(self, x:float, y:float, z:float) -> None\nC++: void SetYAxisVector(double x, double y, double z)\n\n"},
  {"SetZAxisVector", PyvtkCoordinateFrameRepresentation_SetZAxisVector, METH_VARARGS,
   "SetZAxisVector(self, v:(float, float, float)) -> None\nC++: void SetZAxisVector(const double v[3])\nSetZAxisVector(self, x:float, y:float, z:float) -> None\nC++: void SetZAxisVector(double x, double y, double z)\n\n"},
  {"SetLockNormalToCamera", PyvtkCoordinateFrameRepresentation_SetLockNormalToCamera, METH_VARARGS,
   "SetLockNormalToCamera(self, __a:int) -> None\nC++: virtual void SetLockNormalToCamera(vtkTypeBool)\n\nIf enabled, and a vtkCamera is available through the renderer,\nthen LockNormalToCamera will cause the normal to follow the\ncamera's normal.\n"},
  {"GetLockNormalToCamera", PyvtkCoordinateFrameRepresentation_GetLockNormalToCamera, METH_VARARGS,
   "GetLockNormalToCamera(self) -> int\nC++: virtual vtkTypeBool GetLockNormalToCamera()\n\n"},
  {"LockNormalToCameraOn", PyvtkCoordinateFrameRepresentation_LockNormalToCameraOn, METH_VARARGS,
   "LockNormalToCameraOn(self) -> None\nC++: virtual void LockNormalToCameraOn()\n\n"},
  {"LockNormalToCameraOff", PyvtkCoordinateFrameRepresentation_LockNormalToCameraOff, METH_VARARGS,
   "LockNormalToCameraOff(self) -> None\nC++: virtual void LockNormalToCameraOff()\n\n"},
  {"SetXTranslationAxisOn", PyvtkCoordinateFrameRepresentation_SetXTranslationAxisOn, METH_VARARGS,
   "SetXTranslationAxisOn(self) -> None\nC++: void SetXTranslationAxisOn()\n\nToggles constraint translation axis on/off.\n"},
  {"SetYTranslationAxisOn", PyvtkCoordinateFrameRepresentation_SetYTranslationAxisOn, METH_VARARGS,
   "SetYTranslationAxisOn(self) -> None\nC++: void SetYTranslationAxisOn()\n\n"},
  {"SetZTranslationAxisOn", PyvtkCoordinateFrameRepresentation_SetZTranslationAxisOn, METH_VARARGS,
   "SetZTranslationAxisOn(self) -> None\nC++: void SetZTranslationAxisOn()\n\n"},
  {"SetTranslationAxisOff", PyvtkCoordinateFrameRepresentation_SetTranslationAxisOff, METH_VARARGS,
   "SetTranslationAxisOff(self) -> None\nC++: void SetTranslationAxisOff()\n\n"},
  {"IsTranslationConstrained", PyvtkCoordinateFrameRepresentation_IsTranslationConstrained, METH_VARARGS,
   "IsTranslationConstrained(self) -> bool\nC++: bool IsTranslationConstrained()\n\nReturns true if ConstrainedAxis\n"},
  {"UpdatePlacement", PyvtkCoordinateFrameRepresentation_UpdatePlacement, METH_VARARGS,
   "UpdatePlacement(self) -> None\nC++: void UpdatePlacement()\n\nSatisfies the superclass API.  This will change the state of the\nwidget to match changes that have been made to the underlying\nPolyDataSource\n"},
  {"Reset", PyvtkCoordinateFrameRepresentation_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nReset the origin (by calling update placement) and the axes (to\nbe aligned with the world coordinate X, Y, and Z axes).\n"},
  {"ResetAxes", PyvtkCoordinateFrameRepresentation_ResetAxes, METH_VARARGS,
   "ResetAxes(self) -> None\nC++: void ResetAxes()\n\nReset only the axis orientations (not the origin).\n"},
  {"GetOriginProperty", PyvtkCoordinateFrameRepresentation_GetOriginProperty, METH_VARARGS,
   "GetOriginProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetOriginProperty()\n\nGet the properties of the origin. The properties of the origin\nwhen selected and unselected can be manipulated.\n"},
  {"GetSelectedOriginProperty", PyvtkCoordinateFrameRepresentation_GetSelectedOriginProperty, METH_VARARGS,
   "GetSelectedOriginProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedOriginProperty()\n\n"},
  {"GetXVectorProperty", PyvtkCoordinateFrameRepresentation_GetXVectorProperty, METH_VARARGS,
   "GetXVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetXVectorProperty()\n\nGet the properties on the XVector. The properties of the XVector\nwhen selected and unselected can be manipulated.\n"},
  {"GetSelectedXVectorProperty", PyvtkCoordinateFrameRepresentation_GetSelectedXVectorProperty, METH_VARARGS,
   "GetSelectedXVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedXVectorProperty()\n\n"},
  {"GetLockedXVectorProperty", PyvtkCoordinateFrameRepresentation_GetLockedXVectorProperty, METH_VARARGS,
   "GetLockedXVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetLockedXVectorProperty()\n\nGet the properties on the LockedXVector. The properties of the\nLockedXVector when selected and unselected can be manipulated.\n"},
  {"GetSelectedLockedXVectorProperty", PyvtkCoordinateFrameRepresentation_GetSelectedLockedXVectorProperty, METH_VARARGS,
   "GetSelectedLockedXVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedLockedXVectorProperty()\n\n"},
  {"GetUnlockedXVectorProperty", PyvtkCoordinateFrameRepresentation_GetUnlockedXVectorProperty, METH_VARARGS,
   "GetUnlockedXVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetUnlockedXVectorProperty()\n\nGet the properties on the UnlockedXVector. The properties of the\nUnlockedXVector when selected and unselected can be manipulated.\n"},
  {"GetSelectedUnlockedXVectorProperty", PyvtkCoordinateFrameRepresentation_GetSelectedUnlockedXVectorProperty, METH_VARARGS,
   "GetSelectedUnlockedXVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedUnlockedXVectorProperty()\n\n"},
  {"GetYVectorProperty", PyvtkCoordinateFrameRepresentation_GetYVectorProperty, METH_VARARGS,
   "GetYVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetYVectorProperty()\n\nGet the properties on the YVector. The properties of the YVector\nwhen selected and unselected can be manipulated.\n"},
  {"GetSelectedYVectorProperty", PyvtkCoordinateFrameRepresentation_GetSelectedYVectorProperty, METH_VARARGS,
   "GetSelectedYVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedYVectorProperty()\n\n"},
  {"GetLockedYVectorProperty", PyvtkCoordinateFrameRepresentation_GetLockedYVectorProperty, METH_VARARGS,
   "GetLockedYVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetLockedYVectorProperty()\n\nGet the properties on the LockedYVector. The properties of the\nLockedYVector when selected and unselected can be manipulated.\n"},
  {"GetSelectedLockedYVectorProperty", PyvtkCoordinateFrameRepresentation_GetSelectedLockedYVectorProperty, METH_VARARGS,
   "GetSelectedLockedYVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedLockedYVectorProperty()\n\n"},
  {"GetUnlockedYVectorProperty", PyvtkCoordinateFrameRepresentation_GetUnlockedYVectorProperty, METH_VARARGS,
   "GetUnlockedYVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetUnlockedYVectorProperty()\n\nGet the properties on the UnlockedYVector. The properties of the\nUnlockedYVector when selected and unselected can be manipulated.\n"},
  {"GetSelectedUnlockedYVectorProperty", PyvtkCoordinateFrameRepresentation_GetSelectedUnlockedYVectorProperty, METH_VARARGS,
   "GetSelectedUnlockedYVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedUnlockedYVectorProperty()\n\n"},
  {"GetZVectorProperty", PyvtkCoordinateFrameRepresentation_GetZVectorProperty, METH_VARARGS,
   "GetZVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetZVectorProperty()\n\nGet the properties on the ZVector. The properties of the ZVector\nwhen selected and unselected can be manipulated.\n"},
  {"GetSelectedZVectorProperty", PyvtkCoordinateFrameRepresentation_GetSelectedZVectorProperty, METH_VARARGS,
   "GetSelectedZVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedZVectorProperty()\n\n"},
  {"GetLockedZVectorProperty", PyvtkCoordinateFrameRepresentation_GetLockedZVectorProperty, METH_VARARGS,
   "GetLockedZVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetLockedZVectorProperty()\n\nGet the properties on the LockedZVector. The properties of the\nLockedZVector when selected and unselected can be manipulated.\n"},
  {"GetSelectedLockedZVectorProperty", PyvtkCoordinateFrameRepresentation_GetSelectedLockedZVectorProperty, METH_VARARGS,
   "GetSelectedLockedZVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedLockedZVectorProperty()\n\n"},
  {"GetUnlockedZVectorProperty", PyvtkCoordinateFrameRepresentation_GetUnlockedZVectorProperty, METH_VARARGS,
   "GetUnlockedZVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetUnlockedZVectorProperty()\n\nGet the properties on the UnlockedZVector. The properties of the\nUnlockedZVector when selected and unselected can be manipulated.\n"},
  {"GetSelectedUnlockedZVectorProperty", PyvtkCoordinateFrameRepresentation_GetSelectedUnlockedZVectorProperty, METH_VARARGS,
   "GetSelectedUnlockedZVectorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedUnlockedZVectorProperty()\n\n"},
  {"GetPickCameraFocalInfo", PyvtkCoordinateFrameRepresentation_GetPickCameraFocalInfo, METH_VARARGS,
   "GetPickCameraFocalInfo(self) -> bool\nC++: virtual bool GetPickCameraFocalInfo()\n\nEnable/Disable picking camera focal info if no result is\navailable for PickOrigin, PickNormal and PickDirectionPoint. The\ndefault is disabled.\n"},
  {"SetPickCameraFocalInfo", PyvtkCoordinateFrameRepresentation_SetPickCameraFocalInfo, METH_VARARGS,
   "SetPickCameraFocalInfo(self, _arg:bool) -> None\nC++: virtual void SetPickCameraFocalInfo(bool _arg)\n\n"},
  {"PickCameraFocalInfoOn", PyvtkCoordinateFrameRepresentation_PickCameraFocalInfoOn, METH_VARARGS,
   "PickCameraFocalInfoOn(self) -> None\nC++: virtual void PickCameraFocalInfoOn()\n\n"},
  {"PickCameraFocalInfoOff", PyvtkCoordinateFrameRepresentation_PickCameraFocalInfoOff, METH_VARARGS,
   "PickCameraFocalInfoOff(self) -> None\nC++: virtual void PickCameraFocalInfoOff()\n\n"},
  {"PickOrigin", PyvtkCoordinateFrameRepresentation_PickOrigin, METH_VARARGS,
   "PickOrigin(self, X:int, Y:int, snapToMeshPoint:bool=False) -> bool\nC++: bool PickOrigin(int X, int Y, bool snapToMeshPoint=false)\n\nGiven the X, Y display coordinates, pick a new origin for the\ncoordinate frame from a point that is on the objects rendered by\nthe renderer.\n\nNote: if a point from a rendered object is not picked, the camera\nfocal point can optionally be set.\n"},
  {"PickNormal", PyvtkCoordinateFrameRepresentation_PickNormal, METH_VARARGS,
   "PickNormal(self, X:int, Y:int, snapToMeshPoint:bool=False) -> bool\nC++: bool PickNormal(int X, int Y, bool snapToMeshPoint=false)\n\nGiven the X, Y display coordinates, pick a new normal for the\ncoordinate frame from a point that is on the objects rendered by\nthe renderer.\n\nNote: if a normal from a rendered object is not picked, the\ncamera plane normal can optionally be set.\n"},
  {"PickDirectionPoint", PyvtkCoordinateFrameRepresentation_PickDirectionPoint, METH_VARARGS,
   "PickDirectionPoint(self, X:int, Y:int, snapToMeshPoint:bool=False)\n     -> bool\nC++: bool PickDirectionPoint(int X, int Y,\n    bool snapToMeshPoint=false)\n\nGiven the X, Y display coordinates, pick a point and using the\norigin define normal for the coordinate frame from a point that\nis on the objects rendered by the renderer.\n\nNote: if a point from a rendered object is not picked, the camera\nfocal point can optionally be set.\n"},
  {"GetLockedAxis", PyvtkCoordinateFrameRepresentation_GetLockedAxis, METH_VARARGS,
   "GetLockedAxis(self) -> int\nC++: int GetLockedAxis()\n\nGet/set which axis (if any) is locked.\n\nAt most, a single axis can be locked at a time.\n\nThe axis must be one of the following values: { -1, 0, 1, 2 }.\n-1 indicates that no axis is locked; 0 corresponds to the X axis;\n1 to Y; and 2 to Z.\n\nIn terms of mouse interactions, locking an axis prevents its\ndirection from being modified by rotation (so only rotations\nabout that axis are possible) and prevents the origin from\ntranslating along it (so all translations must be in the plane\nusing it as a normal).\n\nIn terms of picking interactions, locking an axis selects it as\nthe target axis to be modified (i.e., the locked axis will be\noverwritten with a normal vector or direction vector).\n"},
  {"SetLockedAxis", PyvtkCoordinateFrameRepresentation_SetLockedAxis, METH_VARARGS,
   "SetLockedAxis(self, axis:int) -> None\nC++: void SetLockedAxis(int axis)\n\n"},
  {"ComputeInteractionState", PyvtkCoordinateFrameRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nMethods to interface with the vtkCoordinateFrameWidget.\n"},
  {"PlaceWidget", PyvtkCoordinateFrameRepresentation_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\n\nThe following is a suggested API for widget representations.\nThese methods define the communication between the widget and its\nrepresentation. These methods are only suggestions because\nwidgets take on so many different forms that a universal API is\nnot deemed practical. However, these methods should be\nimplemented when possible to ensure that the VTK widget hierarchy\nremains self-consistent.\n\nPlaceWidget() - given a bounding box\n(xmin,xmax,ymin,ymax,zmin,zmax), place the widget inside of it.\nThe current orientation of the widget is preserved, only scaling\nand translation is performed. StartWidgetInteraction() -\ngenerally corresponds to a initial event (e.g., mouse down) that\nstarts the interaction process with the widget.\nWidgetInteraction() - invoked when an event causes the widget to\nchange appearance. EndWidgetInteraction() - generally corresponds\nto a final event (e.g., mouse up) and completes the interaction\nsequence. ComputeInteractionState() - given (X,Y) display\ncoordinates in a renderer, with a possible flag that modifies the\ncomputation, what is the state of the widget?\nGetInteractionState() - return the current state of the widget.\nNote that the value of \"0\" typically refers to \"outside\". The\ninteraction state is strictly a function of the representation,\nand the widget/represent must agree on what they mean.\nHighlight() - turn on or off any highlights associated with the\nwidget. Highlights are generally turned on when the widget is\nselected.  Note that subclasses may ignore some of these methods\nand implement their own depending on the specifics of the widget.\n"},
  {"BuildRepresentation", PyvtkCoordinateFrameRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"StartWidgetInteraction", PyvtkCoordinateFrameRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkCoordinateFrameRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, newEventPos:[float, float]) -> None\nC++: void WidgetInteraction(double newEventPos[2]) override;\n\n"},
  {"EndWidgetInteraction", PyvtkCoordinateFrameRepresentation_EndWidgetInteraction, METH_VARARGS,
   "EndWidgetInteraction(self, newEventPos:[float, float]) -> None\nC++: void EndWidgetInteraction(double newEventPos[2]) override;\n\n"},
  {"GetBounds", PyvtkCoordinateFrameRepresentation_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods supporting the rendering process.\n"},
  {"GetActors", PyvtkCoordinateFrameRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, pc:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *pc) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"ReleaseGraphicsResources", PyvtkCoordinateFrameRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOpaqueGeometry", PyvtkCoordinateFrameRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkCoordinateFrameRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCoordinateFrameRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"SetInteractionState", PyvtkCoordinateFrameRepresentation_SetInteractionState, METH_VARARGS,
   "SetInteractionState(self, _arg:int) -> None\nC++: virtual void SetInteractionState(int _arg)\n\nThe interaction state may be set from a widget (e.g.,\nvtkCoordinateFrameWidget) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetInteractionStateMinValue", PyvtkCoordinateFrameRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   "GetInteractionStateMinValue(self) -> int\nC++: virtual int GetInteractionStateMinValue()\n\n"},
  {"GetInteractionStateMaxValue", PyvtkCoordinateFrameRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   "GetInteractionStateMaxValue(self) -> int\nC++: virtual int GetInteractionStateMaxValue()\n\n"},
  {"SetRepresentationState", PyvtkCoordinateFrameRepresentation_SetRepresentationState, METH_VARARGS,
   "SetRepresentationState(self, __a:int) -> None\nC++: virtual void SetRepresentationState(int)\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {"GetRepresentationState", PyvtkCoordinateFrameRepresentation_GetRepresentationState, METH_VARARGS,
   "GetRepresentationState(self) -> int\nC++: virtual int GetRepresentationState()\n\n"},
  {"SetLengthFactor", PyvtkCoordinateFrameRepresentation_SetLengthFactor, METH_VARARGS,
   "SetLengthFactor(self, _arg:float) -> None\nC++: virtual void SetLengthFactor(double _arg)\n\nSet/get the length of the axis glyphs relative to screen size.\nThe default is 0.04.\n"},
  {"GetLengthFactorMinValue", PyvtkCoordinateFrameRepresentation_GetLengthFactorMinValue, METH_VARARGS,
   "GetLengthFactorMinValue(self) -> float\nC++: virtual double GetLengthFactorMinValue()\n\n"},
  {"GetLengthFactorMaxValue", PyvtkCoordinateFrameRepresentation_GetLengthFactorMaxValue, METH_VARARGS,
   "GetLengthFactorMaxValue(self) -> float\nC++: virtual double GetLengthFactorMaxValue()\n\n"},
  {"GetLengthFactor", PyvtkCoordinateFrameRepresentation_GetLengthFactor, METH_VARARGS,
   "GetLengthFactor(self) -> float\nC++: virtual double GetLengthFactor()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCoordinateFrameRepresentation_Doc =
  "vtkCoordinateFrameRepresentation - a class defining the\nrepresentation for a vtkCoordinateFrameWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is a concrete representation for the\n"
  "vtkCoordinateFrameWidget. It represents a coordinate frame with an\n"
  "origin, 3 axis and 3 axis lockers. Through interaction with the\n"
  "widget, the coordinate frame can be manipulated by adjusting the axis\n"
  "normals, locking them, or moving/picking the origin point.\n\n"
  "The PlaceWidget() method is also used to initially position the\n"
  "representation.\n\n"
  "@warning\n"
  "This class, and vtkCoordinateFrameWidget, are next generation VTK\n"
  "widgets.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCoordinateFrameRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkCoordinateFrameRepresentation", // tp_name
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
  PyvtkCoordinateFrameRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCoordinateFrameRepresentation_StaticNew()
{
  return vtkCoordinateFrameRepresentation::New();
}

PyObject *PyvtkCoordinateFrameRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCoordinateFrameRepresentation_Type, PyvtkCoordinateFrameRepresentation_Methods,
    "vtkCoordinateFrameRepresentation",
 &PyvtkCoordinateFrameRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCoordinateFrameRepresentation_InteractionStateType_Type);
  PyVTKEnum_Add(&PyvtkCoordinateFrameRepresentation_InteractionStateType_Type, "vtkCoordinateFrameRepresentation.InteractionStateType");

  o = (PyObject *)&PyvtkCoordinateFrameRepresentation_InteractionStateType_Type;
  if (PyDict_SetItemString(d, "InteractionStateType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    typedef vtkCoordinateFrameRepresentation::InteractionStateType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[9] = {
        { "Outside", vtkCoordinateFrameRepresentation::Outside },
        { "Moving", vtkCoordinateFrameRepresentation::Moving },
        { "MovingOrigin", vtkCoordinateFrameRepresentation::MovingOrigin },
        { "RotatingXVector", vtkCoordinateFrameRepresentation::RotatingXVector },
        { "RotatingYVector", vtkCoordinateFrameRepresentation::RotatingYVector },
        { "RotatingZVector", vtkCoordinateFrameRepresentation::RotatingZVector },
        { "ModifyingLockerXVector", vtkCoordinateFrameRepresentation::ModifyingLockerXVector },
        { "ModifyingLockerYVector", vtkCoordinateFrameRepresentation::ModifyingLockerYVector },
        { "ModifyingLockerZVector", vtkCoordinateFrameRepresentation::ModifyingLockerZVector },
      };

    o = PyvtkCoordinateFrameRepresentation_InteractionStateType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCoordinateFrameRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCoordinateFrameRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCoordinateFrameRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

