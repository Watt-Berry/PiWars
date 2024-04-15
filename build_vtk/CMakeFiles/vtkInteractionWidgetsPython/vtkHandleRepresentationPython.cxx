// python wrapper for vtkHandleRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHandleRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHandleRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkHandleRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHandleRepresentation_InteractionStateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkHandleRepresentation.InteractionStateType", // tp_name
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
PyObject *PyvtkHandleRepresentation_InteractionStateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkHandleRepresentation_InteractionStateType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkHandleRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHandleRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHandleRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHandleRepresentation *tempr = vtkHandleRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHandleRepresentation::NewInstance());

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
PyvtkHandleRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHandleRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHandleRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->SetDisplayPosition(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::SetDisplayPosition(temp0);
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
PyvtkHandleRepresentation_GetDisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->GetDisplayPosition(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::GetDisplayPosition(temp0);
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
PyvtkHandleRepresentation_GetDisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDisplayPosition() :
      op->vtkHandleRepresentation::GetDisplayPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkHandleRepresentation_GetDisplayPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHandleRepresentation_GetDisplayPosition_s1(self, args);
    case 0:
      return PyvtkHandleRepresentation_GetDisplayPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDisplayPosition");
  return nullptr;
}


static PyObject *
PyvtkHandleRepresentation_SetWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->SetWorldPosition(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::SetWorldPosition(temp0);
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
PyvtkHandleRepresentation_GetWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->GetWorldPosition(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::GetWorldPosition(temp0);
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
PyvtkHandleRepresentation_GetWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetWorldPosition() :
      op->vtkHandleRepresentation::GetWorldPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkHandleRepresentation_GetWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHandleRepresentation_GetWorldPosition_s1(self, args);
    case 0:
      return PyvtkHandleRepresentation_GetWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetWorldPosition");
  return nullptr;
}


static PyObject *
PyvtkHandleRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkHandleRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkHandleRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkHandleRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetActiveRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveRepresentation(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::SetActiveRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetActiveRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveRepresentation() :
      op->vtkHandleRepresentation::GetActiveRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ActiveRepresentationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActiveRepresentationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ActiveRepresentationOn();
    }
    else
    {
      op->vtkHandleRepresentation::ActiveRepresentationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ActiveRepresentationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActiveRepresentationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ActiveRepresentationOff();
    }
    else
    {
      op->vtkHandleRepresentation::ActiveRepresentationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->vtkHandleRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkHandleRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkHandleRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetConstrained(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstrained");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConstrained(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::SetConstrained(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetConstrained(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrained");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstrained() :
      op->vtkHandleRepresentation::GetConstrained());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ConstrainedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConstrainedOn();
    }
    else
    {
      op->vtkHandleRepresentation::ConstrainedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_ConstrainedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstrainedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConstrainedOff();
    }
    else
    {
      op->vtkHandleRepresentation::ConstrainedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_CheckConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->CheckConstraint(temp0, temp1) :
      op->vtkHandleRepresentation::CheckConstraint(temp0, temp1));

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


static PyObject *
PyvtkHandleRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->vtkHandleRepresentation::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkHandleRepresentation::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  vtkPointPlacer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointPlacer"))
  {
    if (ap.IsBound())
    {
      op->SetPointPlacer(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::SetPointPlacer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointPlacer *tempr = (ap.IsBound() ?
      op->GetPointPlacer() :
      op->vtkHandleRepresentation::GetPointPlacer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetTranslationVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetTranslationVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHandleRepresentation::GetTranslationVector(temp0, temp1, temp2);
    }

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
PyvtkHandleRepresentation_Translate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->Translate(temp0, temp1);
    }
    else
    {
      op->vtkHandleRepresentation::Translate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHandleRepresentation_Translate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
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
      op->vtkHandleRepresentation::Translate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHandleRepresentation_Translate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkHandleRepresentation_Translate_s1(self, args);
    case 1:
      return PyvtkHandleRepresentation_Translate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Translate");
  return nullptr;
}


static PyObject *
PyvtkHandleRepresentation_GetTranslationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxis() :
      op->vtkHandleRepresentation::GetTranslationAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetTranslationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->vtkHandleRepresentation::SetTranslationAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetTranslationAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxisMinValue() :
      op->vtkHandleRepresentation::GetTranslationAxisMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetTranslationAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxisMaxValue() :
      op->vtkHandleRepresentation::GetTranslationAxisMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetXTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXTranslationAxisOn();
    }
    else
    {
      op->vtkHandleRepresentation::SetXTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetYTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetYTranslationAxisOn();
    }
    else
    {
      op->vtkHandleRepresentation::SetYTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetZTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetZTranslationAxisOn();
    }
    else
    {
      op->vtkHandleRepresentation::SetZTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetCustomTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCustomTranslationAxisOn();
    }
    else
    {
      op->vtkHandleRepresentation::SetCustomTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetTranslationAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationAxisOff();
    }
    else
    {
      op->vtkHandleRepresentation::SetTranslationAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_GetCustomTranslationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomTranslationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCustomTranslationAxis() :
      op->vtkHandleRepresentation::GetCustomTranslationAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleRepresentation_SetCustomTranslationAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomTranslationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

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
      op->SetCustomTranslationAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHandleRepresentation::SetCustomTranslationAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHandleRepresentation_SetCustomTranslationAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomTranslationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCustomTranslationAxis(temp0);
    }
    else
    {
      op->vtkHandleRepresentation::SetCustomTranslationAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHandleRepresentation_SetCustomTranslationAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkHandleRepresentation_SetCustomTranslationAxis_s1(self, args);
    case 1:
      return PyvtkHandleRepresentation_SetCustomTranslationAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomTranslationAxis");
  return nullptr;
}


static PyObject *
PyvtkHandleRepresentation_IsTranslationConstrained(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTranslationConstrained");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleRepresentation *op = static_cast<vtkHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsTranslationConstrained() :
      op->vtkHandleRepresentation::IsTranslationConstrained());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHandleRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkHandleRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHandleRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHandleRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHandleRepresentation\nC++: static vtkHandleRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHandleRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHandleRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHandleRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDisplayPosition", PyvtkHandleRepresentation_SetDisplayPosition, METH_VARARGS,
   "SetDisplayPosition(self, pos:[float, float, float]) -> None\nC++: virtual void SetDisplayPosition(double pos[3])\n\nHandles usually have their coordinates set in display coordinates\n(generally by an associated widget) and internally maintain the\nposition in world coordinates. (Using world coordinates insures\nthat handles are rendered in the right position when the camera\nview changes.) These methods are often subclassed because special\nconstraint operations can be used to control the actual\npositioning.\n"},
  {"GetDisplayPosition", PyvtkHandleRepresentation_GetDisplayPosition, METH_VARARGS,
   "GetDisplayPosition(self, pos:[float, float, float]) -> None\nC++: virtual void GetDisplayPosition(double pos[3])\nGetDisplayPosition(self) -> (float, float, float)\nC++: virtual double *GetDisplayPosition()\n\n"},
  {"SetWorldPosition", PyvtkHandleRepresentation_SetWorldPosition, METH_VARARGS,
   "SetWorldPosition(self, pos:[float, float, float]) -> None\nC++: virtual void SetWorldPosition(double pos[3])\n\n"},
  {"GetWorldPosition", PyvtkHandleRepresentation_GetWorldPosition, METH_VARARGS,
   "GetWorldPosition(self, pos:[float, float, float]) -> None\nC++: virtual void GetWorldPosition(double pos[3])\nGetWorldPosition(self) -> (float, float, float)\nC++: virtual double *GetWorldPosition()\n\n"},
  {"SetTolerance", PyvtkHandleRepresentation_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:int) -> None\nC++: virtual void SetTolerance(int _arg)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the widget to be\nactive.\n"},
  {"GetToleranceMinValue", PyvtkHandleRepresentation_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> int\nC++: virtual int GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkHandleRepresentation_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> int\nC++: virtual int GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkHandleRepresentation_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> int\nC++: virtual int GetTolerance()\n\n"},
  {"SetActiveRepresentation", PyvtkHandleRepresentation_SetActiveRepresentation, METH_VARARGS,
   "SetActiveRepresentation(self, _arg:int) -> None\nC++: virtual void SetActiveRepresentation(vtkTypeBool _arg)\n\nFlag controls whether the widget becomes visible when the mouse\npointer moves close to it (i.e., the widget becomes active). By\ndefault, ActiveRepresentation is off and the representation is\nalways visible.\n"},
  {"GetActiveRepresentation", PyvtkHandleRepresentation_GetActiveRepresentation, METH_VARARGS,
   "GetActiveRepresentation(self) -> int\nC++: virtual vtkTypeBool GetActiveRepresentation()\n\n"},
  {"ActiveRepresentationOn", PyvtkHandleRepresentation_ActiveRepresentationOn, METH_VARARGS,
   "ActiveRepresentationOn(self) -> None\nC++: virtual void ActiveRepresentationOn()\n\n"},
  {"ActiveRepresentationOff", PyvtkHandleRepresentation_ActiveRepresentationOff, METH_VARARGS,
   "ActiveRepresentationOff(self) -> None\nC++: virtual void ActiveRepresentationOff()\n\n"},
  {"SetInteractionState", PyvtkHandleRepresentation_SetInteractionState, METH_VARARGS,
   "SetInteractionState(self, _arg:int) -> None\nC++: virtual void SetInteractionState(int _arg)\n\nThe interaction state may be set from a widget (e.g.,\nHandleWidget) or other object. This controls how the interaction\nwith the widget proceeds. Normally this method is used as part of\na handshaking processwith the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetInteractionStateMinValue", PyvtkHandleRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   "GetInteractionStateMinValue(self) -> int\nC++: virtual int GetInteractionStateMinValue()\n\n"},
  {"GetInteractionStateMaxValue", PyvtkHandleRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   "GetInteractionStateMaxValue(self) -> int\nC++: virtual int GetInteractionStateMaxValue()\n\n"},
  {"SetConstrained", PyvtkHandleRepresentation_SetConstrained, METH_VARARGS,
   "SetConstrained(self, _arg:int) -> None\nC++: virtual void SetConstrained(vtkTypeBool _arg)\n\nSpecify whether any motions (such as scale, translate, etc.) are\nconstrained in some way (along an axis, etc.) Widgets can use\nthis to control the resulting motion.\n"},
  {"GetConstrained", PyvtkHandleRepresentation_GetConstrained, METH_VARARGS,
   "GetConstrained(self) -> int\nC++: virtual vtkTypeBool GetConstrained()\n\n"},
  {"ConstrainedOn", PyvtkHandleRepresentation_ConstrainedOn, METH_VARARGS,
   "ConstrainedOn(self) -> None\nC++: virtual void ConstrainedOn()\n\n"},
  {"ConstrainedOff", PyvtkHandleRepresentation_ConstrainedOff, METH_VARARGS,
   "ConstrainedOff(self) -> None\nC++: virtual void ConstrainedOff()\n\n"},
  {"CheckConstraint", PyvtkHandleRepresentation_CheckConstraint, METH_VARARGS,
   "CheckConstraint(self, renderer:vtkRenderer, pos:[float, float])\n    -> int\nC++: virtual int CheckConstraint(vtkRenderer *renderer,\n    double pos[2])\n\nMethod has to be overridden in the subclasses which has\nconstraints on placing the handle (Ex.\nvtkConstrainedPointHandleRepresentation). It should return 1 if\nthe position is within the constraint, else it should return\n0. By default it returns 1.\n"},
  {"ShallowCopy", PyvtkHandleRepresentation_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"DeepCopy", PyvtkHandleRepresentation_DeepCopy, METH_VARARGS,
   "DeepCopy(self, prop:vtkProp) -> None\nC++: virtual void DeepCopy(vtkProp *prop)\n\n"},
  {"SetRenderer", PyvtkHandleRepresentation_SetRenderer, METH_VARARGS,
   "SetRenderer(self, ren:vtkRenderer) -> None\nC++: void SetRenderer(vtkRenderer *ren) override;\n\nSubclasses of vtkWidgetRepresentation must implement these\nmethods. This is considered the minimum API for a widget\nrepresentation.\n\nSetRenderer() - the renderer in which the representations draws\nitself. Typically the renderer is set by the associated widget.\nUse the widget's SetCurrentRenderer() method in most cases;\notherwise there is a risk of inconsistent behavior as events and\ndrawing may be performed in different viewports.\nBuildRepresentation() - update the geometry of the widget based\non its current state.  WARNING: The renderer is NOT reference\ncounted by the representation, in order to avoid reference loops.\n Be sure that the representation lifetime does not extend beyond\nthe renderer lifetime.\n"},
  {"GetMTime", PyvtkHandleRepresentation_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverload the superclasses' GetMTime() because the internal\nvtkCoordinates are used to keep the state of the representation.\n"},
  {"SetPointPlacer", PyvtkHandleRepresentation_SetPointPlacer, METH_VARARGS,
   "SetPointPlacer(self, __a:vtkPointPlacer) -> None\nC++: virtual void SetPointPlacer(vtkPointPlacer *)\n\nSet/Get the point placer. Point placers can be used to dictate\nconstraints on the placement of handles. As an example, see\nvtkBoundedPlanePointPlacer (constrains the placement of handles\nto a set of bounded planes) vtkFocalPlanePointPlacer (constrains\nplacement on the focal plane) etc. The default point placer is\nvtkPointPlacer (which does not apply any constraints, so the\nhandles are free to move anywhere).\n"},
  {"GetPointPlacer", PyvtkHandleRepresentation_GetPointPlacer, METH_VARARGS,
   "GetPointPlacer(self) -> vtkPointPlacer\nC++: virtual vtkPointPlacer *GetPointPlacer()\n\n"},
  {"GetTranslationVector", PyvtkHandleRepresentation_GetTranslationVector, METH_VARARGS,
   "GetTranslationVector(self, p1:(float, ...), p2:(float, ...),\n    v:[float, ...]) -> None\nC++: virtual void GetTranslationVector(const double *p1,\n    const double *p2, double *v)\n\nGets the translation vector\n"},
  {"Translate", PyvtkHandleRepresentation_Translate, METH_VARARGS,
   "Translate(self, p1:(float, ...), p2:(float, ...)) -> None\nC++: virtual void Translate(const double *p1, const double *p2)\nTranslate(self, v:(float, ...)) -> None\nC++: virtual void Translate(const double *v)\n\nTranslates world position by vector p1p2 projected on the\nconstraint axis if any.\n"},
  {"GetTranslationAxis", PyvtkHandleRepresentation_GetTranslationAxis, METH_VARARGS,
   "GetTranslationAxis(self) -> int\nC++: virtual int GetTranslationAxis()\n\nGets/Sets the constraint axis for translations. Returns\nAxis::NONE if none.\n"},
  {"SetTranslationAxis", PyvtkHandleRepresentation_SetTranslationAxis, METH_VARARGS,
   "SetTranslationAxis(self, _arg:int) -> None\nC++: virtual void SetTranslationAxis(int _arg)\n\n"},
  {"GetTranslationAxisMinValue", PyvtkHandleRepresentation_GetTranslationAxisMinValue, METH_VARARGS,
   "GetTranslationAxisMinValue(self) -> int\nC++: virtual int GetTranslationAxisMinValue()\n\n"},
  {"GetTranslationAxisMaxValue", PyvtkHandleRepresentation_GetTranslationAxisMaxValue, METH_VARARGS,
   "GetTranslationAxisMaxValue(self) -> int\nC++: virtual int GetTranslationAxisMaxValue()\n\n"},
  {"SetXTranslationAxisOn", PyvtkHandleRepresentation_SetXTranslationAxisOn, METH_VARARGS,
   "SetXTranslationAxisOn(self) -> None\nC++: void SetXTranslationAxisOn()\n\nToggles constraint translation axis on/off.\n"},
  {"SetYTranslationAxisOn", PyvtkHandleRepresentation_SetYTranslationAxisOn, METH_VARARGS,
   "SetYTranslationAxisOn(self) -> None\nC++: void SetYTranslationAxisOn()\n\n"},
  {"SetZTranslationAxisOn", PyvtkHandleRepresentation_SetZTranslationAxisOn, METH_VARARGS,
   "SetZTranslationAxisOn(self) -> None\nC++: void SetZTranslationAxisOn()\n\n"},
  {"SetCustomTranslationAxisOn", PyvtkHandleRepresentation_SetCustomTranslationAxisOn, METH_VARARGS,
   "SetCustomTranslationAxisOn(self) -> None\nC++: void SetCustomTranslationAxisOn()\n\n"},
  {"SetTranslationAxisOff", PyvtkHandleRepresentation_SetTranslationAxisOff, METH_VARARGS,
   "SetTranslationAxisOff(self) -> None\nC++: void SetTranslationAxisOff()\n\n"},
  {"GetCustomTranslationAxis", PyvtkHandleRepresentation_GetCustomTranslationAxis, METH_VARARGS,
   "GetCustomTranslationAxis(self) -> (float, float, float)\nC++: virtual double *GetCustomTranslationAxis()\n\nGet/Set the translation axis used when\nvtkHandleRepresentation::TranslationAxis is set to Axis::Custom.\n\n@see SetCustomTranslationAxisOn\n"},
  {"SetCustomTranslationAxis", PyvtkHandleRepresentation_SetCustomTranslationAxis, METH_VARARGS,
   "SetCustomTranslationAxis(self, _arg1:float, _arg2:float,\n    _arg3:float) -> None\nC++: virtual void SetCustomTranslationAxis(double _arg1,\n    double _arg2, double _arg3)\nSetCustomTranslationAxis(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCustomTranslationAxis(const double _arg[3])\n\n"},
  {"IsTranslationConstrained", PyvtkHandleRepresentation_IsTranslationConstrained, METH_VARARGS,
   "IsTranslationConstrained(self) -> bool\nC++: bool IsTranslationConstrained()\n\nReturns true if ConstrainedAxis\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHandleRepresentation_Doc =
  "vtkHandleRepresentation - abstract class for representing widget\nhandles\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class defines an API for widget handle representations. These\n"
  "representations interact with vtkHandleWidget. Various\n"
  "representations can be used depending on the nature of the handle.\n"
  "The basic functionality of the handle representation is to maintain a\n"
  "position. The position is represented via a vtkCoordinate, meaning\n"
  "that the position can be easily obtained in a variety of coordinate\n"
  "systems.\n\n"
  "Optional features for this representation include an active mode (the\n"
  "widget appears only when the mouse pointer is close to it). The\n"
  "active distance is expressed in pixels and represents a circle in\n"
  "display space.\n\n"
  "The class may be subclassed so that alternative representations can\n"
  "be created.  The class defines an API and a default implementation\n"
  "that the vtkHandleWidget interacts with to render itself in the\n"
  "scene.\n\n"
  "@warning\n"
  "The separation of the widget event handling and representation\n"
  "enables users and developers to create new appearances for the\n"
  "widget. It also facilitates parallel processing, where the client\n"
  "application handles events, and remote representations of the widget\n"
  "are slaves to the client (and do not handle events).\n\n"
  "@sa\n"
  "vtkRectilinearWipeWidget vtkWidgetRepresentation vtkAbstractWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHandleRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkHandleRepresentation", // tp_name
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
  PyvtkHandleRepresentation_Doc, // tp_doc
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

PyObject *PyvtkHandleRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHandleRepresentation_Type, PyvtkHandleRepresentation_Methods,
    "vtkHandleRepresentation",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkHandleRepresentation_InteractionStateType_Type);
  PyVTKEnum_Add(&PyvtkHandleRepresentation_InteractionStateType_Type, "vtkHandleRepresentation.InteractionStateType");

  o = (PyObject *)&PyvtkHandleRepresentation_InteractionStateType_Type;
  if (PyDict_SetItemString(d, "InteractionStateType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkHandleRepresentation::InteractionStateType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "Outside", vtkHandleRepresentation::Outside },
        { "Nearby", vtkHandleRepresentation::Nearby },
        { "Selecting", vtkHandleRepresentation::Selecting },
        { "Translating", vtkHandleRepresentation::Translating },
        { "Scaling", vtkHandleRepresentation::Scaling },
      };

    o = PyvtkHandleRepresentation_InteractionStateType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHandleRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHandleRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHandleRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

