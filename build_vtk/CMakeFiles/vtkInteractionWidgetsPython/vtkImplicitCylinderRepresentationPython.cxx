// python wrapper for vtkImplicitCylinderRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImplicitCylinderRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitCylinderRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkImplicitCylinderRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitCylinderRepresentation_InteractionStateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkImplicitCylinderRepresentation.InteractionStateType", // tp_name
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
PyObject *PyvtkImplicitCylinderRepresentation_InteractionStateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkImplicitCylinderRepresentation_InteractionStateType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkImplicitCylinderRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitCylinderRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitCylinderRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitCylinderRepresentation *tempr = vtkImplicitCylinderRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitCylinderRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitCylinderRepresentation::NewInstance());

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
PyvtkImplicitCylinderRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImplicitCylinderRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImplicitCylinderRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitCylinderRepresentation_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetCenter(temp0);
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
PyvtkImplicitCylinderRepresentation_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitCylinderRepresentation_SetCenter_s1(self, args);
    case 1:
      return PyvtkImplicitCylinderRepresentation_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkImplicitCylinderRepresentation::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitCylinderRepresentation_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->GetCenter(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::GetCenter(temp0);
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
PyvtkImplicitCylinderRepresentation_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImplicitCylinderRepresentation_GetCenter_s1(self, args);
    case 1:
      return PyvtkImplicitCylinderRepresentation_GetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return nullptr;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->SetAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitCylinderRepresentation_SetAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->SetAxis(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetAxis(temp0);
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
PyvtkImplicitCylinderRepresentation_SetAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitCylinderRepresentation_SetAxis_s1(self, args);
    case 1:
      return PyvtkImplicitCylinderRepresentation_SetAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxis");
  return nullptr;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkImplicitCylinderRepresentation::GetAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitCylinderRepresentation_GetAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->GetAxis(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::GetAxis(temp0);
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
PyvtkImplicitCylinderRepresentation_GetAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImplicitCylinderRepresentation_GetAxis_s1(self, args);
    case 1:
      return PyvtkImplicitCylinderRepresentation_GetAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAxis");
  return nullptr;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkImplicitCylinderRepresentation::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetMinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinRadius(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetMinRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetMinRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinRadiusMinValue() :
      op->vtkImplicitCylinderRepresentation::GetMinRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetMinRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinRadiusMaxValue() :
      op->vtkImplicitCylinderRepresentation::GetMinRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetMinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinRadius() :
      op->vtkImplicitCylinderRepresentation::GetMinRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetMaxRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxRadius(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetMaxRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetMaxRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxRadiusMinValue() :
      op->vtkImplicitCylinderRepresentation::GetMaxRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetMaxRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxRadiusMaxValue() :
      op->vtkImplicitCylinderRepresentation::GetMaxRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetMaxRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxRadius() :
      op->vtkImplicitCylinderRepresentation::GetMaxRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetAlongXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlongXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlongXAxis(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetAlongXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetAlongXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlongXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlongXAxis() :
      op->vtkImplicitCylinderRepresentation::GetAlongXAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_AlongXAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongXAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongXAxisOn();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::AlongXAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_AlongXAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongXAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongXAxisOff();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::AlongXAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetAlongYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlongYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlongYAxis(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetAlongYAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetAlongYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlongYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlongYAxis() :
      op->vtkImplicitCylinderRepresentation::GetAlongYAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_AlongYAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongYAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongYAxisOn();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::AlongYAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_AlongYAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongYAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongYAxisOff();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::AlongYAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetAlongZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlongZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlongZAxis(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetAlongZAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetAlongZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlongZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlongZAxis() :
      op->vtkImplicitCylinderRepresentation::GetAlongZAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_AlongZAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongZAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongZAxisOn();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::AlongZAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_AlongZAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlongZAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlongZAxisOff();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::AlongZAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetDrawCylinder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawCylinder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawCylinder(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetDrawCylinder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetDrawCylinder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawCylinder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawCylinder() :
      op->vtkImplicitCylinderRepresentation::GetDrawCylinder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_DrawCylinderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawCylinderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawCylinderOn();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::DrawCylinderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_DrawCylinderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawCylinderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawCylinderOff();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::DrawCylinderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkImplicitCylinderRepresentation::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkImplicitCylinderRepresentation::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkImplicitCylinderRepresentation::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTubing(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetTubing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTubing() :
      op->vtkImplicitCylinderRepresentation::GetTubing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_TubingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TubingOn();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::TubingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_TubingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TubingOff();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::TubingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetOutlineTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::SetOutlineTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetOutlineTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutlineTranslation() :
      op->vtkImplicitCylinderRepresentation::GetOutlineTranslation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_OutlineTranslationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineTranslationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineTranslationOn();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::OutlineTranslationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_OutlineTranslationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineTranslationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineTranslationOff();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::OutlineTranslationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetOutsideBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutsideBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::SetOutsideBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetOutsideBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutsideBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutsideBounds() :
      op->vtkImplicitCylinderRepresentation::GetOutsideBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_OutsideBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutsideBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutsideBoundsOn();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::OutsideBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_OutsideBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutsideBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutsideBoundsOff();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::OutsideBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetWidgetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::SetWidgetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitCylinderRepresentation_SetWidgetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::SetWidgetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitCylinderRepresentation_SetWidgetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImplicitCylinderRepresentation_SetWidgetBounds_s1(self, args);
    case 1:
      return PyvtkImplicitCylinderRepresentation_SetWidgetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWidgetBounds");
  return nullptr;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetWidgetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetWidgetBounds() :
      op->vtkImplicitCylinderRepresentation::GetWidgetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetConstrainToWidgetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstrainToWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::SetConstrainToWidgetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetConstrainToWidgetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrainToWidgetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstrainToWidgetBounds() :
      op->vtkImplicitCylinderRepresentation::GetConstrainToWidgetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_ConstrainToWidgetBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainToWidgetBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConstrainToWidgetBoundsOn();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::ConstrainToWidgetBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_ConstrainToWidgetBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainToWidgetBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConstrainToWidgetBoundsOff();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::ConstrainToWidgetBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::SetScaleEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScaleEnabled() :
      op->vtkImplicitCylinderRepresentation::GetScaleEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_ScaleEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleEnabledOn();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::ScaleEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_ScaleEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleEnabledOff();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::ScaleEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetCylinder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  vtkCylinder *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCylinder"))
  {
    if (ap.IsBound())
    {
      op->GetCylinder(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::GetCylinder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePlacement();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::UpdatePlacement();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetAxisProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetAxisProperty() :
      op->vtkImplicitCylinderRepresentation::GetAxisProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetSelectedAxisProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedAxisProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedAxisProperty() :
      op->vtkImplicitCylinderRepresentation::GetSelectedAxisProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetCylinderProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetCylinderProperty() :
      op->vtkImplicitCylinderRepresentation::GetCylinderProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetSelectedCylinderProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedCylinderProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedCylinderProperty() :
      op->vtkImplicitCylinderRepresentation::GetSelectedCylinderProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetOutlineProperty() :
      op->vtkImplicitCylinderRepresentation::GetOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetSelectedOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedOutlineProperty() :
      op->vtkImplicitCylinderRepresentation::GetSelectedOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetEdgesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetEdgesProperty() :
      op->vtkImplicitCylinderRepresentation::GetEdgesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetInteractionColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::SetInteractionColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitCylinderRepresentation_SetInteractionColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::SetInteractionColor(temp0);
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
PyvtkImplicitCylinderRepresentation_SetInteractionColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitCylinderRepresentation_SetInteractionColor_s1(self, args);
    case 1:
      return PyvtkImplicitCylinderRepresentation_SetInteractionColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInteractionColor");
  return nullptr;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetHandleColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::SetHandleColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitCylinderRepresentation_SetHandleColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::SetHandleColor(temp0);
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
PyvtkImplicitCylinderRepresentation_SetHandleColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitCylinderRepresentation_SetHandleColor_s1(self, args);
    case 1:
      return PyvtkImplicitCylinderRepresentation_SetHandleColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHandleColor");
  return nullptr;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetForegroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::SetForegroundColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitCylinderRepresentation_SetForegroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::SetForegroundColor(temp0);
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
PyvtkImplicitCylinderRepresentation_SetForegroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitCylinderRepresentation_SetForegroundColor_s1(self, args);
    case 1:
      return PyvtkImplicitCylinderRepresentation_SetForegroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetForegroundColor");
  return nullptr;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetEdgeColor_s1(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetEdgeColor."
    " (" "Please use GetEdgesProperty or SetHandleColor instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  vtkLookupTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
  {
    if (ap.IsBound())
    {
      op->SetEdgeColor(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetEdgeColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitCylinderRepresentation_SetEdgeColor_s2(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetEdgeColor."
    " (" "Please use GetEdgesProperty or SetHandleColor instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->SetEdgeColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetEdgeColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitCylinderRepresentation_SetEdgeColor_s3(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetEdgeColor."
    " (" "Please use GetEdgesProperty or SetHandleColor instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->SetEdgeColor(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetEdgeColor(temp0);
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

static PyMethodDef PyvtkImplicitCylinderRepresentation_SetEdgeColor_Methods[] = {
  {"SetEdgeColor", PyvtkImplicitCylinderRepresentation_SetEdgeColor_s1, METH_VARARGS,
   "@V *vtkLookupTable"},
  {"SetEdgeColor", PyvtkImplicitCylinderRepresentation_SetEdgeColor_s3, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImplicitCylinderRepresentation_SetEdgeColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImplicitCylinderRepresentation_SetEdgeColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitCylinderRepresentation_SetEdgeColor_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEdgeColor");
  return nullptr;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::PlaceWidget(temp0);
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
PyvtkImplicitCylinderRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::StartWidgetInteraction(temp0);
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
PyvtkImplicitCylinderRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::WidgetInteraction(temp0);
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
PyvtkImplicitCylinderRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::EndWidgetInteraction(temp0);
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
PyvtkImplicitCylinderRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkImplicitCylinderRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkImplicitCylinderRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkImplicitCylinderRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkImplicitCylinderRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetBumpDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBumpDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::SetBumpDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetBumpDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBumpDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBumpDistanceMinValue() :
      op->vtkImplicitCylinderRepresentation::GetBumpDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetBumpDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBumpDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBumpDistanceMaxValue() :
      op->vtkImplicitCylinderRepresentation::GetBumpDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetBumpDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBumpDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBumpDistance() :
      op->vtkImplicitCylinderRepresentation::GetBumpDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_BumpCylinder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BumpCylinder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->BumpCylinder(temp0, temp1);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::BumpCylinder(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_PushCylinder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushCylinder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PushCylinder(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::PushCylinder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkImplicitCylinderRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkImplicitCylinderRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

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
      op->vtkImplicitCylinderRepresentation::SetRepresentationState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationState() :
      op->vtkImplicitCylinderRepresentation::GetRepresentationState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetTranslationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxis() :
      op->vtkImplicitCylinderRepresentation::GetTranslationAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetTranslationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationAxis(temp0);
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetTranslationAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetTranslationAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxisMinValue() :
      op->vtkImplicitCylinderRepresentation::GetTranslationAxisMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_GetTranslationAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxisMaxValue() :
      op->vtkImplicitCylinderRepresentation::GetTranslationAxisMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetXTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXTranslationAxisOn();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetXTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetYTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetYTranslationAxisOn();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetYTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetZTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetZTranslationAxisOn();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetZTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_SetTranslationAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationAxisOff();
    }
    else
    {
      op->vtkImplicitCylinderRepresentation::SetTranslationAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitCylinderRepresentation_IsTranslationConstrained(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTranslationConstrained");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitCylinderRepresentation *op = static_cast<vtkImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsTranslationConstrained() :
      op->vtkImplicitCylinderRepresentation::IsTranslationConstrained());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitCylinderRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkImplicitCylinderRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitCylinderRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitCylinderRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImplicitCylinderRepresentation\nC++: static vtkImplicitCylinderRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitCylinderRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImplicitCylinderRepresentation\nC++: vtkImplicitCylinderRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImplicitCylinderRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImplicitCylinderRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCenter", PyvtkImplicitCylinderRepresentation_SetCenter, METH_VARARGS,
   "SetCenter(self, x:float, y:float, z:float) -> None\nC++: void SetCenter(double x, double y, double z)\nSetCenter(self, x:[float, float, float]) -> None\nC++: void SetCenter(double x[3])\n\nGet the center of the cylinder. The center is located along the\ncylinder axis.\n"},
  {"GetCenter", PyvtkImplicitCylinderRepresentation_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: double *GetCenter()\nGetCenter(self, xyz:[float, float, float]) -> None\nC++: void GetCenter(double xyz[3])\n\n"},
  {"SetAxis", PyvtkImplicitCylinderRepresentation_SetAxis, METH_VARARGS,
   "SetAxis(self, x:float, y:float, z:float) -> None\nC++: void SetAxis(double x, double y, double z)\nSetAxis(self, a:[float, float, float]) -> None\nC++: void SetAxis(double a[3])\n\nSet/Get the axis of rotation for the cylinder. If the axis is not\nspecified as a unit vector, it will be normalized.\n"},
  {"GetAxis", PyvtkImplicitCylinderRepresentation_GetAxis, METH_VARARGS,
   "GetAxis(self) -> (float, float, float)\nC++: double *GetAxis()\nGetAxis(self, a:[float, float, float]) -> None\nC++: void GetAxis(double a[3])\n\n"},
  {"SetRadius", PyvtkImplicitCylinderRepresentation_SetRadius, METH_VARARGS,
   "SetRadius(self, r:float) -> None\nC++: void SetRadius(double r)\n\nSet/Get the radius of the cylinder. Note that if the radius is\ntoo big the cylinder will be outside of the bounding box.\n"},
  {"GetRadius", PyvtkImplicitCylinderRepresentation_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: double GetRadius()\n\n"},
  {"SetMinRadius", PyvtkImplicitCylinderRepresentation_SetMinRadius, METH_VARARGS,
   "SetMinRadius(self, _arg:float) -> None\nC++: virtual void SetMinRadius(double _arg)\n\nSet/Get the minimum and maximum radius of the cylinder. This\nhelps prevent the cylinder from \"disappearing\" during\ninteraction.  Note that the minimum and maximum radius is\nspecified as a fraction of the diagonal length of the widget\nbounding box.\n"},
  {"GetMinRadiusMinValue", PyvtkImplicitCylinderRepresentation_GetMinRadiusMinValue, METH_VARARGS,
   "GetMinRadiusMinValue(self) -> float\nC++: virtual double GetMinRadiusMinValue()\n\n"},
  {"GetMinRadiusMaxValue", PyvtkImplicitCylinderRepresentation_GetMinRadiusMaxValue, METH_VARARGS,
   "GetMinRadiusMaxValue(self) -> float\nC++: virtual double GetMinRadiusMaxValue()\n\n"},
  {"GetMinRadius", PyvtkImplicitCylinderRepresentation_GetMinRadius, METH_VARARGS,
   "GetMinRadius(self) -> float\nC++: virtual double GetMinRadius()\n\n"},
  {"SetMaxRadius", PyvtkImplicitCylinderRepresentation_SetMaxRadius, METH_VARARGS,
   "SetMaxRadius(self, _arg:float) -> None\nC++: virtual void SetMaxRadius(double _arg)\n\n"},
  {"GetMaxRadiusMinValue", PyvtkImplicitCylinderRepresentation_GetMaxRadiusMinValue, METH_VARARGS,
   "GetMaxRadiusMinValue(self) -> float\nC++: virtual double GetMaxRadiusMinValue()\n\n"},
  {"GetMaxRadiusMaxValue", PyvtkImplicitCylinderRepresentation_GetMaxRadiusMaxValue, METH_VARARGS,
   "GetMaxRadiusMaxValue(self) -> float\nC++: virtual double GetMaxRadiusMaxValue()\n\n"},
  {"GetMaxRadius", PyvtkImplicitCylinderRepresentation_GetMaxRadius, METH_VARARGS,
   "GetMaxRadius(self) -> float\nC++: virtual double GetMaxRadius()\n\n"},
  {"SetAlongXAxis", PyvtkImplicitCylinderRepresentation_SetAlongXAxis, METH_VARARGS,
   "SetAlongXAxis(self, __a:int) -> None\nC++: void SetAlongXAxis(vtkTypeBool)\n\nForce the cylinder widget to be aligned with one of the x-y-z\naxes. If one axis is set on, the other two will be set off.\nRemember that when the state changes, a ModifiedEvent is invoked.\nThis can be used to snap the cylinder to the axes if it is\noriginally not aligned.\n"},
  {"GetAlongXAxis", PyvtkImplicitCylinderRepresentation_GetAlongXAxis, METH_VARARGS,
   "GetAlongXAxis(self) -> int\nC++: virtual vtkTypeBool GetAlongXAxis()\n\n"},
  {"AlongXAxisOn", PyvtkImplicitCylinderRepresentation_AlongXAxisOn, METH_VARARGS,
   "AlongXAxisOn(self) -> None\nC++: virtual void AlongXAxisOn()\n\n"},
  {"AlongXAxisOff", PyvtkImplicitCylinderRepresentation_AlongXAxisOff, METH_VARARGS,
   "AlongXAxisOff(self) -> None\nC++: virtual void AlongXAxisOff()\n\n"},
  {"SetAlongYAxis", PyvtkImplicitCylinderRepresentation_SetAlongYAxis, METH_VARARGS,
   "SetAlongYAxis(self, __a:int) -> None\nC++: void SetAlongYAxis(vtkTypeBool)\n\n"},
  {"GetAlongYAxis", PyvtkImplicitCylinderRepresentation_GetAlongYAxis, METH_VARARGS,
   "GetAlongYAxis(self) -> int\nC++: virtual vtkTypeBool GetAlongYAxis()\n\n"},
  {"AlongYAxisOn", PyvtkImplicitCylinderRepresentation_AlongYAxisOn, METH_VARARGS,
   "AlongYAxisOn(self) -> None\nC++: virtual void AlongYAxisOn()\n\n"},
  {"AlongYAxisOff", PyvtkImplicitCylinderRepresentation_AlongYAxisOff, METH_VARARGS,
   "AlongYAxisOff(self) -> None\nC++: virtual void AlongYAxisOff()\n\n"},
  {"SetAlongZAxis", PyvtkImplicitCylinderRepresentation_SetAlongZAxis, METH_VARARGS,
   "SetAlongZAxis(self, __a:int) -> None\nC++: void SetAlongZAxis(vtkTypeBool)\n\n"},
  {"GetAlongZAxis", PyvtkImplicitCylinderRepresentation_GetAlongZAxis, METH_VARARGS,
   "GetAlongZAxis(self) -> int\nC++: virtual vtkTypeBool GetAlongZAxis()\n\n"},
  {"AlongZAxisOn", PyvtkImplicitCylinderRepresentation_AlongZAxisOn, METH_VARARGS,
   "AlongZAxisOn(self) -> None\nC++: virtual void AlongZAxisOn()\n\n"},
  {"AlongZAxisOff", PyvtkImplicitCylinderRepresentation_AlongZAxisOff, METH_VARARGS,
   "AlongZAxisOff(self) -> None\nC++: virtual void AlongZAxisOff()\n\n"},
  {"SetDrawCylinder", PyvtkImplicitCylinderRepresentation_SetDrawCylinder, METH_VARARGS,
   "SetDrawCylinder(self, drawCyl:int) -> None\nC++: void SetDrawCylinder(vtkTypeBool drawCyl)\n\nEnable/disable the drawing of the cylinder. In some cases the\ncylinder interferes with the object that it is operating on\n(e.g., the cylinder interferes with the cut surface it produces\nresulting in z-buffer artifacts.) By default it is off.\n"},
  {"GetDrawCylinder", PyvtkImplicitCylinderRepresentation_GetDrawCylinder, METH_VARARGS,
   "GetDrawCylinder(self) -> int\nC++: virtual vtkTypeBool GetDrawCylinder()\n\n"},
  {"DrawCylinderOn", PyvtkImplicitCylinderRepresentation_DrawCylinderOn, METH_VARARGS,
   "DrawCylinderOn(self) -> None\nC++: virtual void DrawCylinderOn()\n\n"},
  {"DrawCylinderOff", PyvtkImplicitCylinderRepresentation_DrawCylinderOff, METH_VARARGS,
   "DrawCylinderOff(self) -> None\nC++: virtual void DrawCylinderOff()\n\n"},
  {"SetResolution", PyvtkImplicitCylinderRepresentation_SetResolution, METH_VARARGS,
   "SetResolution(self, _arg:int) -> None\nC++: virtual void SetResolution(int _arg)\n\nSet/Get the resolution of the cylinder. This is the number of\npolygonal facets used to approximate the curved cylindrical\nsurface (for rendering purposes). An vtkCylinder is used under\nthe hood to provide an exact surface representation.\n"},
  {"GetResolutionMinValue", PyvtkImplicitCylinderRepresentation_GetResolutionMinValue, METH_VARARGS,
   "GetResolutionMinValue(self) -> int\nC++: virtual int GetResolutionMinValue()\n\n"},
  {"GetResolutionMaxValue", PyvtkImplicitCylinderRepresentation_GetResolutionMaxValue, METH_VARARGS,
   "GetResolutionMaxValue(self) -> int\nC++: virtual int GetResolutionMaxValue()\n\n"},
  {"GetResolution", PyvtkImplicitCylinderRepresentation_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual int GetResolution()\n\n"},
  {"SetTubing", PyvtkImplicitCylinderRepresentation_SetTubing, METH_VARARGS,
   "SetTubing(self, _arg:int) -> None\nC++: virtual void SetTubing(vtkTypeBool _arg)\n\nTurn on/off tubing of the wire outline of the cylinder\nintersection (against the bounding box). The tube thickens the\nline by wrapping with a vtkTubeFilter.\n"},
  {"GetTubing", PyvtkImplicitCylinderRepresentation_GetTubing, METH_VARARGS,
   "GetTubing(self) -> int\nC++: virtual vtkTypeBool GetTubing()\n\n"},
  {"TubingOn", PyvtkImplicitCylinderRepresentation_TubingOn, METH_VARARGS,
   "TubingOn(self) -> None\nC++: virtual void TubingOn()\n\n"},
  {"TubingOff", PyvtkImplicitCylinderRepresentation_TubingOff, METH_VARARGS,
   "TubingOff(self) -> None\nC++: virtual void TubingOff()\n\n"},
  {"SetOutlineTranslation", PyvtkImplicitCylinderRepresentation_SetOutlineTranslation, METH_VARARGS,
   "SetOutlineTranslation(self, _arg:int) -> None\nC++: virtual void SetOutlineTranslation(vtkTypeBool _arg)\n\nTurn on/off the ability to translate the bounding box by moving\nit with the mouse.\n"},
  {"GetOutlineTranslation", PyvtkImplicitCylinderRepresentation_GetOutlineTranslation, METH_VARARGS,
   "GetOutlineTranslation(self) -> int\nC++: virtual vtkTypeBool GetOutlineTranslation()\n\n"},
  {"OutlineTranslationOn", PyvtkImplicitCylinderRepresentation_OutlineTranslationOn, METH_VARARGS,
   "OutlineTranslationOn(self) -> None\nC++: virtual void OutlineTranslationOn()\n\n"},
  {"OutlineTranslationOff", PyvtkImplicitCylinderRepresentation_OutlineTranslationOff, METH_VARARGS,
   "OutlineTranslationOff(self) -> None\nC++: virtual void OutlineTranslationOff()\n\n"},
  {"SetOutsideBounds", PyvtkImplicitCylinderRepresentation_SetOutsideBounds, METH_VARARGS,
   "SetOutsideBounds(self, _arg:int) -> None\nC++: virtual void SetOutsideBounds(vtkTypeBool _arg)\n\nTurn on/off the ability to move the widget outside of the bounds\nspecified in the PlaceWidget() invocation.\n"},
  {"GetOutsideBounds", PyvtkImplicitCylinderRepresentation_GetOutsideBounds, METH_VARARGS,
   "GetOutsideBounds(self) -> int\nC++: virtual vtkTypeBool GetOutsideBounds()\n\n"},
  {"OutsideBoundsOn", PyvtkImplicitCylinderRepresentation_OutsideBoundsOn, METH_VARARGS,
   "OutsideBoundsOn(self) -> None\nC++: virtual void OutsideBoundsOn()\n\n"},
  {"OutsideBoundsOff", PyvtkImplicitCylinderRepresentation_OutsideBoundsOff, METH_VARARGS,
   "OutsideBoundsOff(self) -> None\nC++: virtual void OutsideBoundsOff()\n\n"},
  {"SetWidgetBounds", PyvtkImplicitCylinderRepresentation_SetWidgetBounds, METH_VARARGS,
   "SetWidgetBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetWidgetBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetWidgetBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetWidgetBounds(const double _arg[6])\n\nSet/Get the bounds of the widget representation. PlaceWidget can\nalso be used to set the bounds of the widget but it may also have\nother effects on the internal state of the representation. Use\nthis function when only the widget bounds are needs to be\nmodified.\n"},
  {"GetWidgetBounds", PyvtkImplicitCylinderRepresentation_GetWidgetBounds, METH_VARARGS,
   "GetWidgetBounds(self) -> (float, float, float, float, float,\n    float)\nC++: virtual double *GetWidgetBounds()\n\n"},
  {"SetConstrainToWidgetBounds", PyvtkImplicitCylinderRepresentation_SetConstrainToWidgetBounds, METH_VARARGS,
   "SetConstrainToWidgetBounds(self, _arg:int) -> None\nC++: virtual void SetConstrainToWidgetBounds(vtkTypeBool _arg)\n\nTurn on/off whether the cylinder should be constrained to the\nwidget bounds. If on, the center will not be allowed to move\noutside the set widget bounds and the radius will be limited by\nMinRadius and MaxRadius. This is the default behaviour. If off,\nthe center can be freely moved and the radius can be set to\narbitrary values. The widget outline will change accordingly.\n"},
  {"GetConstrainToWidgetBounds", PyvtkImplicitCylinderRepresentation_GetConstrainToWidgetBounds, METH_VARARGS,
   "GetConstrainToWidgetBounds(self) -> int\nC++: virtual vtkTypeBool GetConstrainToWidgetBounds()\n\n"},
  {"ConstrainToWidgetBoundsOn", PyvtkImplicitCylinderRepresentation_ConstrainToWidgetBoundsOn, METH_VARARGS,
   "ConstrainToWidgetBoundsOn(self) -> None\nC++: virtual void ConstrainToWidgetBoundsOn()\n\n"},
  {"ConstrainToWidgetBoundsOff", PyvtkImplicitCylinderRepresentation_ConstrainToWidgetBoundsOff, METH_VARARGS,
   "ConstrainToWidgetBoundsOff(self) -> None\nC++: virtual void ConstrainToWidgetBoundsOff()\n\n"},
  {"SetScaleEnabled", PyvtkImplicitCylinderRepresentation_SetScaleEnabled, METH_VARARGS,
   "SetScaleEnabled(self, _arg:int) -> None\nC++: virtual void SetScaleEnabled(vtkTypeBool _arg)\n\nTurn on/off the ability to scale the widget with the mouse.\n"},
  {"GetScaleEnabled", PyvtkImplicitCylinderRepresentation_GetScaleEnabled, METH_VARARGS,
   "GetScaleEnabled(self) -> int\nC++: virtual vtkTypeBool GetScaleEnabled()\n\n"},
  {"ScaleEnabledOn", PyvtkImplicitCylinderRepresentation_ScaleEnabledOn, METH_VARARGS,
   "ScaleEnabledOn(self) -> None\nC++: virtual void ScaleEnabledOn()\n\n"},
  {"ScaleEnabledOff", PyvtkImplicitCylinderRepresentation_ScaleEnabledOff, METH_VARARGS,
   "ScaleEnabledOff(self) -> None\nC++: virtual void ScaleEnabledOff()\n\n"},
  {"GetCylinder", PyvtkImplicitCylinderRepresentation_GetCylinder, METH_VARARGS,
   "GetCylinder(self, cyl:vtkCylinder) -> None\nC++: void GetCylinder(vtkCylinder *cyl)\n\nGet the implicit function for the cylinder. The user must provide\nthe instance of the class vtkCylinder. Note that vtkCylinder is a\nsubclass of vtkImplicitFunction, meaning that it can be used by a\nvariety of filters to perform clipping, cutting, and selection of\ndata.\n"},
  {"GetPolyData", PyvtkImplicitCylinderRepresentation_GetPolyData, METH_VARARGS,
   "GetPolyData(self, pd:vtkPolyData) -> None\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata that defines the cylinder. The polydata\ncontains polygons that are clipped by the bounding box.\n"},
  {"UpdatePlacement", PyvtkImplicitCylinderRepresentation_UpdatePlacement, METH_VARARGS,
   "UpdatePlacement(self) -> None\nC++: void UpdatePlacement()\n\nSatisfies the superclass API.  This will change the state of the\nwidget to match changes that have been made to the underlying\nPolyDataSource.\n"},
  {"GetAxisProperty", PyvtkImplicitCylinderRepresentation_GetAxisProperty, METH_VARARGS,
   "GetAxisProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetAxisProperty()\n\nGet the properties on the axis (line and cone).\n"},
  {"GetSelectedAxisProperty", PyvtkImplicitCylinderRepresentation_GetSelectedAxisProperty, METH_VARARGS,
   "GetSelectedAxisProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedAxisProperty()\n\n"},
  {"GetCylinderProperty", PyvtkImplicitCylinderRepresentation_GetCylinderProperty, METH_VARARGS,
   "GetCylinderProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetCylinderProperty()\n\nGet the cylinder properties. The properties of the cylinder when\nselected and unselected can be manipulated.\n"},
  {"GetSelectedCylinderProperty", PyvtkImplicitCylinderRepresentation_GetSelectedCylinderProperty, METH_VARARGS,
   "GetSelectedCylinderProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedCylinderProperty()\n\n"},
  {"GetOutlineProperty", PyvtkImplicitCylinderRepresentation_GetOutlineProperty, METH_VARARGS,
   "GetOutlineProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetOutlineProperty()\n\nGet the property of the outline.\n"},
  {"GetSelectedOutlineProperty", PyvtkImplicitCylinderRepresentation_GetSelectedOutlineProperty, METH_VARARGS,
   "GetSelectedOutlineProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedOutlineProperty()\n\n"},
  {"GetEdgesProperty", PyvtkImplicitCylinderRepresentation_GetEdgesProperty, METH_VARARGS,
   "GetEdgesProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetEdgesProperty()\n\nGet the property of the intersection edges. (This property also\napplies to the edges when tubed.)\n"},
  {"SetInteractionColor", PyvtkImplicitCylinderRepresentation_SetInteractionColor, METH_VARARGS,
   "SetInteractionColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetInteractionColor(double, double, double)\nSetInteractionColor(self, c:[float, float, float]) -> None\nC++: void SetInteractionColor(double c[3])\n\nSet the color of all the widgets handles (edges, axis, selected\ncylinder) and their color during interaction. Foreground color\napplies to the outlines and unselected cylinder.\n"},
  {"SetHandleColor", PyvtkImplicitCylinderRepresentation_SetHandleColor, METH_VARARGS,
   "SetHandleColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetHandleColor(double, double, double)\nSetHandleColor(self, c:[float, float, float]) -> None\nC++: void SetHandleColor(double c[3])\n\n"},
  {"SetForegroundColor", PyvtkImplicitCylinderRepresentation_SetForegroundColor, METH_VARARGS,
   "SetForegroundColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetForegroundColor(double, double, double)\nSetForegroundColor(self, c:[float, float, float]) -> None\nC++: void SetForegroundColor(double c[3])\n\n"},
  {"SetEdgeColor", PyvtkImplicitCylinderRepresentation_SetEdgeColor, METH_VARARGS,
   "SetEdgeColor(self, __a:vtkLookupTable) -> None\nC++: void SetEdgeColor(vtkLookupTable *)\nSetEdgeColor(self, __a:float, __b:float, __c:float) -> None\nC++: void SetEdgeColor(double, double, double)\nSetEdgeColor(self, __a:[float, float, float]) -> None\nC++: void SetEdgeColor(double[3])\n\nSet color to the edge\n"},
  {"ComputeInteractionState", PyvtkImplicitCylinderRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nMethods to interface with the vtkImplicitCylinderWidget.\n"},
  {"PlaceWidget", PyvtkImplicitCylinderRepresentation_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\n\nThe following is a suggested API for widget representations.\nThese methods define the communication between the widget and its\nrepresentation. These methods are only suggestions because\nwidgets take on so many different forms that a universal API is\nnot deemed practical. However, these methods should be\nimplemented when possible to ensure that the VTK widget hierarchy\nremains self-consistent.\n\nPlaceWidget() - given a bounding box\n(xmin,xmax,ymin,ymax,zmin,zmax), place the widget inside of it.\nThe current orientation of the widget is preserved, only scaling\nand translation is performed. StartWidgetInteraction() -\ngenerally corresponds to a initial event (e.g., mouse down) that\nstarts the interaction process with the widget.\nWidgetInteraction() - invoked when an event causes the widget to\nchange appearance. EndWidgetInteraction() - generally corresponds\nto a final event (e.g., mouse up) and completes the interaction\nsequence. ComputeInteractionState() - given (X,Y) display\ncoordinates in a renderer, with a possible flag that modifies the\ncomputation, what is the state of the widget?\nGetInteractionState() - return the current state of the widget.\nNote that the value of \"0\" typically refers to \"outside\". The\ninteraction state is strictly a function of the representation,\nand the widget/represent must agree on what they mean.\nHighlight() - turn on or off any highlights associated with the\nwidget. Highlights are generally turned on when the widget is\nselected.  Note that subclasses may ignore some of these methods\nand implement their own depending on the specifics of the widget.\n"},
  {"BuildRepresentation", PyvtkImplicitCylinderRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"StartWidgetInteraction", PyvtkImplicitCylinderRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkImplicitCylinderRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, newEventPos:[float, float]) -> None\nC++: void WidgetInteraction(double newEventPos[2]) override;\n\n"},
  {"EndWidgetInteraction", PyvtkImplicitCylinderRepresentation_EndWidgetInteraction, METH_VARARGS,
   "EndWidgetInteraction(self, newEventPos:[float, float]) -> None\nC++: void EndWidgetInteraction(double newEventPos[2]) override;\n\n"},
  {"GetBounds", PyvtkImplicitCylinderRepresentation_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods supporting the rendering process.\n"},
  {"GetActors", PyvtkImplicitCylinderRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, pc:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *pc) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"ReleaseGraphicsResources", PyvtkImplicitCylinderRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOpaqueGeometry", PyvtkImplicitCylinderRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkImplicitCylinderRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkImplicitCylinderRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"SetBumpDistance", PyvtkImplicitCylinderRepresentation_SetBumpDistance, METH_VARARGS,
   "SetBumpDistance(self, _arg:float) -> None\nC++: virtual void SetBumpDistance(double _arg)\n\nSpecify a translation distance used by the BumpCylinder() method.\nNote that the distance is normalized; it is the fraction of the\nlength of the bounding box of the wire outline.\n"},
  {"GetBumpDistanceMinValue", PyvtkImplicitCylinderRepresentation_GetBumpDistanceMinValue, METH_VARARGS,
   "GetBumpDistanceMinValue(self) -> float\nC++: virtual double GetBumpDistanceMinValue()\n\n"},
  {"GetBumpDistanceMaxValue", PyvtkImplicitCylinderRepresentation_GetBumpDistanceMaxValue, METH_VARARGS,
   "GetBumpDistanceMaxValue(self) -> float\nC++: virtual double GetBumpDistanceMaxValue()\n\n"},
  {"GetBumpDistance", PyvtkImplicitCylinderRepresentation_GetBumpDistance, METH_VARARGS,
   "GetBumpDistance(self) -> float\nC++: virtual double GetBumpDistance()\n\n"},
  {"BumpCylinder", PyvtkImplicitCylinderRepresentation_BumpCylinder, METH_VARARGS,
   "BumpCylinder(self, dir:int, factor:float) -> None\nC++: void BumpCylinder(int dir, double factor)\n\nTranslate the cylinder in the direction of the view vector by the\nspecified BumpDistance. The dir parameter controls which\ndirection the pushing occurs, either in the same direction as the\nview vector, or when negative, in the opposite direction.  The\nfactor controls what percentage of the bump is used.\n"},
  {"PushCylinder", PyvtkImplicitCylinderRepresentation_PushCylinder, METH_VARARGS,
   "PushCylinder(self, distance:float) -> None\nC++: void PushCylinder(double distance)\n\nPush the cylinder the distance specified along the view vector.\nPositive values are in the direction of the view vector; negative\nvalues are in the opposite direction. The distance value is\nexpressed in world coordinates.\n"},
  {"SetInteractionState", PyvtkImplicitCylinderRepresentation_SetInteractionState, METH_VARARGS,
   "SetInteractionState(self, _arg:int) -> None\nC++: virtual void SetInteractionState(int _arg)\n\nThe interaction state may be set from a widget (e.g.,\nvtkImplicitCylinderWidget) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetInteractionStateMinValue", PyvtkImplicitCylinderRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   "GetInteractionStateMinValue(self) -> int\nC++: virtual int GetInteractionStateMinValue()\n\n"},
  {"GetInteractionStateMaxValue", PyvtkImplicitCylinderRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   "GetInteractionStateMaxValue(self) -> int\nC++: virtual int GetInteractionStateMaxValue()\n\n"},
  {"SetRepresentationState", PyvtkImplicitCylinderRepresentation_SetRepresentationState, METH_VARARGS,
   "SetRepresentationState(self, __a:int) -> None\nC++: virtual void SetRepresentationState(int)\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {"GetRepresentationState", PyvtkImplicitCylinderRepresentation_GetRepresentationState, METH_VARARGS,
   "GetRepresentationState(self) -> int\nC++: virtual int GetRepresentationState()\n\n"},
  {"RegisterPickers", PyvtkImplicitCylinderRepresentation_RegisterPickers, METH_VARARGS,
   "RegisterPickers(self) -> None\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {"GetTranslationAxis", PyvtkImplicitCylinderRepresentation_GetTranslationAxis, METH_VARARGS,
   "GetTranslationAxis(self) -> int\nC++: virtual int GetTranslationAxis()\n\nGets/Sets the constraint axis for translations. Returns\nAxis::NONE if none.\n"},
  {"SetTranslationAxis", PyvtkImplicitCylinderRepresentation_SetTranslationAxis, METH_VARARGS,
   "SetTranslationAxis(self, _arg:int) -> None\nC++: virtual void SetTranslationAxis(int _arg)\n\n"},
  {"GetTranslationAxisMinValue", PyvtkImplicitCylinderRepresentation_GetTranslationAxisMinValue, METH_VARARGS,
   "GetTranslationAxisMinValue(self) -> int\nC++: virtual int GetTranslationAxisMinValue()\n\n"},
  {"GetTranslationAxisMaxValue", PyvtkImplicitCylinderRepresentation_GetTranslationAxisMaxValue, METH_VARARGS,
   "GetTranslationAxisMaxValue(self) -> int\nC++: virtual int GetTranslationAxisMaxValue()\n\n"},
  {"SetXTranslationAxisOn", PyvtkImplicitCylinderRepresentation_SetXTranslationAxisOn, METH_VARARGS,
   "SetXTranslationAxisOn(self) -> None\nC++: void SetXTranslationAxisOn()\n\nToggles constraint translation axis on/off.\n"},
  {"SetYTranslationAxisOn", PyvtkImplicitCylinderRepresentation_SetYTranslationAxisOn, METH_VARARGS,
   "SetYTranslationAxisOn(self) -> None\nC++: void SetYTranslationAxisOn()\n\n"},
  {"SetZTranslationAxisOn", PyvtkImplicitCylinderRepresentation_SetZTranslationAxisOn, METH_VARARGS,
   "SetZTranslationAxisOn(self) -> None\nC++: void SetZTranslationAxisOn()\n\n"},
  {"SetTranslationAxisOff", PyvtkImplicitCylinderRepresentation_SetTranslationAxisOff, METH_VARARGS,
   "SetTranslationAxisOff(self) -> None\nC++: void SetTranslationAxisOff()\n\n"},
  {"IsTranslationConstrained", PyvtkImplicitCylinderRepresentation_IsTranslationConstrained, METH_VARARGS,
   "IsTranslationConstrained(self) -> bool\nC++: bool IsTranslationConstrained()\n\nReturns true if ConstrainedAxis\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImplicitCylinderRepresentation_Doc =
  "vtkImplicitCylinderRepresentation - defining the representation for a\nvtkImplicitCylinderWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is a concrete representation for the\n"
  "vtkImplicitCylinderWidget. It represents an infinite cylinder defined\n"
  "by a radius, a center, and an axis. The cylinder is placed within its\n"
  "associated bounding box and the intersection of the cylinder with the\n"
  "bounding box is shown to visually indicate the orientation and\n"
  "position of the representation. This cylinder representation can be\n"
  "manipulated by using the vtkImplicitCylinderWidget to adjust the\n"
  "cylinder radius, axis, and/or center point. (Note that the bounding\n"
  "box is defined during invocation of the superclass' PlaceWidget()\n"
  "method.)\n\n"
  "To use this representation, you normally specify a radius, center,\n"
  "and axis. Optionally you can specify a minimum and maximum radius,\n"
  "and a resolution for the cylinder. Finally, place the widget and its\n"
  "representation in the scene using PlaceWidget().\n\n"
  "@sa\n"
  "vtkImplicitCylinderWidget vtkImplicitPlaneWidget\n"
  "vtkImplicitPlaneWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitCylinderRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkImplicitCylinderRepresentation", // tp_name
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
  PyvtkImplicitCylinderRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitCylinderRepresentation_StaticNew()
{
  return vtkImplicitCylinderRepresentation::New();
}

PyObject *PyvtkImplicitCylinderRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImplicitCylinderRepresentation_Type, PyvtkImplicitCylinderRepresentation_Methods,
    "vtkImplicitCylinderRepresentation",
 &PyvtkImplicitCylinderRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkImplicitCylinderRepresentation_InteractionStateType_Type);
  PyVTKEnum_Add(&PyvtkImplicitCylinderRepresentation_InteractionStateType_Type, "vtkImplicitCylinderRepresentation.InteractionStateType");

  o = (PyObject *)&PyvtkImplicitCylinderRepresentation_InteractionStateType_Type;
  if (PyDict_SetItemString(d, "InteractionStateType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkImplicitCylinderRepresentation::InteractionStateType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "Outside", vtkImplicitCylinderRepresentation::Outside },
        { "Moving", vtkImplicitCylinderRepresentation::Moving },
        { "MovingOutline", vtkImplicitCylinderRepresentation::MovingOutline },
        { "MovingCenter", vtkImplicitCylinderRepresentation::MovingCenter },
        { "RotatingAxis", vtkImplicitCylinderRepresentation::RotatingAxis },
        { "AdjustingRadius", vtkImplicitCylinderRepresentation::AdjustingRadius },
        { "Scaling", vtkImplicitCylinderRepresentation::Scaling },
        { "TranslatingCenter", vtkImplicitCylinderRepresentation::TranslatingCenter },
      };

    o = PyvtkImplicitCylinderRepresentation_InteractionStateType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitCylinderRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitCylinderRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitCylinderRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyLong_FromLong(2048);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MAX_CYL_RESOLUTION", o);
    Py_DECREF(o);
  }
}

