// python wrapper for vtkCameraOrientationRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCameraOrientationRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCameraOrientationRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkCameraOrientationRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCameraOrientationRepresentation_InteractionStateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkCameraOrientationRepresentation.InteractionStateType", // tp_name
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
PyObject *PyvtkCameraOrientationRepresentation_InteractionStateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCameraOrientationRepresentation_InteractionStateType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCameraOrientationRepresentation_AnchorType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkCameraOrientationRepresentation.AnchorType", // tp_name
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
PyObject *PyvtkCameraOrientationRepresentation_AnchorType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCameraOrientationRepresentation_AnchorType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCameraOrientationRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCameraOrientationRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraOrientationRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCameraOrientationRepresentation *tempr = vtkCameraOrientationRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCameraOrientationRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraOrientationRepresentation::NewInstance());

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
PyvtkCameraOrientationRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCameraOrientationRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCameraOrientationRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_ApplyInteractionState_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  typedef vtkCameraOrientationRepresentation::InteractionStateType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkCameraOrientationRepresentation.InteractionStateType"))
  {
    if (ap.IsBound())
    {
      op->ApplyInteractionState(temp0);
    }
    else
    {
      op->vtkCameraOrientationRepresentation::ApplyInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCameraOrientationRepresentation_ApplyInteractionState_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ApplyInteractionState(temp0);
    }
    else
    {
      op->vtkCameraOrientationRepresentation::ApplyInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCameraOrientationRepresentation_ApplyInteractionState_Methods[] = {
  {"ApplyInteractionState", PyvtkCameraOrientationRepresentation_ApplyInteractionState_s1, METH_VARARGS,
   "@E vtkCameraOrientationRepresentation.InteractionStateType"},
  {"ApplyInteractionState", PyvtkCameraOrientationRepresentation_ApplyInteractionState_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCameraOrientationRepresentation_ApplyInteractionState(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCameraOrientationRepresentation_ApplyInteractionState_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ApplyInteractionState");
  return nullptr;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetInteractionStateAsEnum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateAsEnum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkCameraOrientationRepresentation::InteractionStateType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetInteractionStateAsEnum() :
      op->vtkCameraOrientationRepresentation::GetInteractionStateAsEnum());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCameraOrientationRepresentation_InteractionStateType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0, temp1);
    }
    else
    {
      op->vtkCameraOrientationRepresentation::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCameraOrientationRepresentation_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkCameraOrientationRepresentation::SetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCameraOrientationRepresentation_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCameraOrientationRepresentation_SetSize_s1(self, args);
    case 1:
      return PyvtkCameraOrientationRepresentation_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkCameraOrientationRepresentation::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_SetPadding_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0, temp1);
    }
    else
    {
      op->vtkCameraOrientationRepresentation::SetPadding(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCameraOrientationRepresentation_SetPadding_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0);
    }
    else
    {
      op->vtkCameraOrientationRepresentation::SetPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCameraOrientationRepresentation_SetPadding(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCameraOrientationRepresentation_SetPadding_s1(self, args);
    case 1:
      return PyvtkCameraOrientationRepresentation_SetPadding_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPadding");
  return nullptr;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkCameraOrientationRepresentation::GetPadding());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetAnchorPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnchorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkCameraOrientationRepresentation::AnchorType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetAnchorPosition() :
      op->vtkCameraOrientationRepresentation::GetAnchorPosition());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCameraOrientationRepresentation_AnchorType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_AnchorToLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnchorToLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnchorToLowerLeft();
    }
    else
    {
      op->vtkCameraOrientationRepresentation::AnchorToLowerLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_AnchorToUpperLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnchorToUpperLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnchorToUpperLeft();
    }
    else
    {
      op->vtkCameraOrientationRepresentation::AnchorToUpperLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_AnchorToLowerRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnchorToLowerRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnchorToLowerRight();
    }
    else
    {
      op->vtkCameraOrientationRepresentation::AnchorToLowerRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_AnchorToUpperRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnchorToUpperRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnchorToUpperRight();
    }
    else
    {
      op->vtkCameraOrientationRepresentation::AnchorToUpperRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_SetTotalLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTotalLength(temp0);
    }
    else
    {
      op->vtkCameraOrientationRepresentation::SetTotalLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetTotalLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTotalLength() :
      op->vtkCameraOrientationRepresentation::GetTotalLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_SetNormalizedHandleDia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedHandleDia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalizedHandleDia(temp0);
    }
    else
    {
      op->vtkCameraOrientationRepresentation::SetNormalizedHandleDia(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetNormalizedHandleDia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizedHandleDia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNormalizedHandleDia() :
      op->vtkCameraOrientationRepresentation::GetNormalizedHandleDia());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetAzimuth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAzimuth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAzimuth() :
      op->vtkCameraOrientationRepresentation::GetAzimuth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetBack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBack() :
      op->vtkCameraOrientationRepresentation::GetBack());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetElevation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElevation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetElevation() :
      op->vtkCameraOrientationRepresentation::GetElevation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetUp() :
      op->vtkCameraOrientationRepresentation::GetUp());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_SetShaftResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShaftResolution(temp0);
    }
    else
    {
      op->vtkCameraOrientationRepresentation::SetShaftResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetShaftResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShaftResolutionMinValue() :
      op->vtkCameraOrientationRepresentation::GetShaftResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetShaftResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShaftResolutionMaxValue() :
      op->vtkCameraOrientationRepresentation::GetShaftResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetShaftResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShaftResolution() :
      op->vtkCameraOrientationRepresentation::GetShaftResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_SetHandleCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleCircumferentialResolution(temp0);
    }
    else
    {
      op->vtkCameraOrientationRepresentation::SetHandleCircumferentialResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetHandleCircumferentialResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleCircumferentialResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleCircumferentialResolutionMinValue() :
      op->vtkCameraOrientationRepresentation::GetHandleCircumferentialResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetHandleCircumferentialResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleCircumferentialResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleCircumferentialResolutionMaxValue() :
      op->vtkCameraOrientationRepresentation::GetHandleCircumferentialResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetHandleCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleCircumferentialResolution() :
      op->vtkCameraOrientationRepresentation::GetHandleCircumferentialResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_SetContainerCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContainerCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContainerCircumferentialResolution(temp0);
    }
    else
    {
      op->vtkCameraOrientationRepresentation::SetContainerCircumferentialResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetContainerCircumferentialResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainerCircumferentialResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContainerCircumferentialResolutionMinValue() :
      op->vtkCameraOrientationRepresentation::GetContainerCircumferentialResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetContainerCircumferentialResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainerCircumferentialResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContainerCircumferentialResolutionMaxValue() :
      op->vtkCameraOrientationRepresentation::GetContainerCircumferentialResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetContainerCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainerCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContainerCircumferentialResolution() :
      op->vtkCameraOrientationRepresentation::GetContainerCircumferentialResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_SetContainerRadialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContainerRadialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContainerRadialResolution(temp0);
    }
    else
    {
      op->vtkCameraOrientationRepresentation::SetContainerRadialResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetContainerRadialResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainerRadialResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContainerRadialResolutionMinValue() :
      op->vtkCameraOrientationRepresentation::GetContainerRadialResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetContainerRadialResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainerRadialResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContainerRadialResolutionMaxValue() :
      op->vtkCameraOrientationRepresentation::GetContainerRadialResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetContainerRadialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainerRadialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContainerRadialResolution() :
      op->vtkCameraOrientationRepresentation::GetContainerRadialResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetPickedAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickedAxis() :
      op->vtkCameraOrientationRepresentation::GetPickedAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetPickedDir(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedDir");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickedDir() :
      op->vtkCameraOrientationRepresentation::GetPickedDir());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetXPlusLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXPlusLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetXPlusLabelProperty() :
      op->vtkCameraOrientationRepresentation::GetXPlusLabelProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetYPlusLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYPlusLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetYPlusLabelProperty() :
      op->vtkCameraOrientationRepresentation::GetYPlusLabelProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetZPlusLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZPlusLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetZPlusLabelProperty() :
      op->vtkCameraOrientationRepresentation::GetZPlusLabelProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetXMinusLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMinusLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetXMinusLabelProperty() :
      op->vtkCameraOrientationRepresentation::GetXMinusLabelProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetYMinusLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYMinusLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetYMinusLabelProperty() :
      op->vtkCameraOrientationRepresentation::GetYMinusLabelProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetZMinusLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZMinusLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetZMinusLabelProperty() :
      op->vtkCameraOrientationRepresentation::GetZMinusLabelProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetContainerProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainerProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetContainerProperty() :
      op->vtkCameraOrientationRepresentation::GetContainerProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_SetContainerVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContainerVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContainerVisibility(temp0);
    }
    else
    {
      op->vtkCameraOrientationRepresentation::SetContainerVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_ContainerVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainerVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ContainerVisibilityOn();
    }
    else
    {
      op->vtkCameraOrientationRepresentation::ContainerVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_ContainerVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainerVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ContainerVisibilityOff();
    }
    else
    {
      op->vtkCameraOrientationRepresentation::ContainerVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetContainerVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainerVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetContainerVisibility() :
      op->vtkCameraOrientationRepresentation::GetContainerVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

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
      op->vtkCameraOrientationRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkCameraOrientationRepresentation::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

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
      op->vtkCameraOrientationRepresentation::PlaceWidget(temp0);
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
PyvtkCameraOrientationRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkCameraOrientationRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

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
      op->vtkCameraOrientationRepresentation::StartWidgetInteraction(temp0);
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
PyvtkCameraOrientationRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

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
      op->vtkCameraOrientationRepresentation::WidgetInteraction(temp0);
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
PyvtkCameraOrientationRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

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
      op->vtkCameraOrientationRepresentation::EndWidgetInteraction(temp0);
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
PyvtkCameraOrientationRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

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
      op->vtkCameraOrientationRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkCameraOrientationRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

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
      op->vtkCameraOrientationRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCameraOrientationRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCameraOrientationRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCameraOrientationRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

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
      op->vtkCameraOrientationRepresentation::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationRepresentation_IsAnyHandleSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAnyHandleSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationRepresentation *op = static_cast<vtkCameraOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAnyHandleSelected() :
      op->vtkCameraOrientationRepresentation::IsAnyHandleSelected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCameraOrientationRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkCameraOrientationRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCameraOrientationRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCameraOrientationRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkCameraOrientationRepresentation\nC++: static vtkCameraOrientationRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCameraOrientationRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCameraOrientationRepresentation\nC++: vtkCameraOrientationRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCameraOrientationRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCameraOrientationRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ApplyInteractionState", PyvtkCameraOrientationRepresentation_ApplyInteractionState, METH_VARARGS,
   "ApplyInteractionState(self, state:InteractionStateType) -> None\nC++: void ApplyInteractionState(const InteractionStateType &state)\nApplyInteractionState(self, state:int) -> None\nC++: void ApplyInteractionState(const int &state)\n\nThe interaction state may be set from a widget (e.g.,\nvtkCameraOrientationWidget) or other object. This call updates\nthe representation to match the interaction state.\n"},
  {"GetInteractionStateAsEnum", PyvtkCameraOrientationRepresentation_GetInteractionStateAsEnum, METH_VARARGS,
   "GetInteractionStateAsEnum(self) -> InteractionStateType\nC++: InteractionStateType GetInteractionStateAsEnum() noexcept;\n\nConvenient method to get InteractionState as enum. This method\nclamps the interaction state to possible values. Hence, it does\nnot raise any exceptions.\n"},
  {"SetSize", PyvtkCameraOrientationRepresentation_SetSize, METH_VARARGS,
   "SetSize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetSize(int _arg1, int _arg2)\nSetSize(self, _arg:(int, int)) -> None\nC++: void SetSize(const int _arg[2])\n\nGet/Set the widget size in display coordinates.\n"},
  {"GetSize", PyvtkCameraOrientationRepresentation_GetSize, METH_VARARGS,
   "GetSize(self) -> (int, int)\nC++: virtual int *GetSize()\n\n"},
  {"SetPadding", PyvtkCameraOrientationRepresentation_SetPadding, METH_VARARGS,
   "SetPadding(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetPadding(int _arg1, int _arg2)\nSetPadding(self, _arg:(int, int)) -> None\nC++: void SetPadding(const int _arg[2])\n\nGet/Set the widget padding in display coordinates.\n"},
  {"GetPadding", PyvtkCameraOrientationRepresentation_GetPadding, METH_VARARGS,
   "GetPadding(self) -> (int, int)\nC++: virtual int *GetPadding()\n\n"},
  {"GetAnchorPosition", PyvtkCameraOrientationRepresentation_GetAnchorPosition, METH_VARARGS,
   "GetAnchorPosition(self) -> AnchorType\nC++: AnchorType GetAnchorPosition()\n\nGet/Set the widget anchor type\n"},
  {"AnchorToLowerLeft", PyvtkCameraOrientationRepresentation_AnchorToLowerLeft, METH_VARARGS,
   "AnchorToLowerLeft(self) -> None\nC++: void AnchorToLowerLeft()\n\n"},
  {"AnchorToUpperLeft", PyvtkCameraOrientationRepresentation_AnchorToUpperLeft, METH_VARARGS,
   "AnchorToUpperLeft(self) -> None\nC++: void AnchorToUpperLeft()\n\n"},
  {"AnchorToLowerRight", PyvtkCameraOrientationRepresentation_AnchorToLowerRight, METH_VARARGS,
   "AnchorToLowerRight(self) -> None\nC++: void AnchorToLowerRight()\n\n"},
  {"AnchorToUpperRight", PyvtkCameraOrientationRepresentation_AnchorToUpperRight, METH_VARARGS,
   "AnchorToUpperRight(self) -> None\nC++: void AnchorToUpperRight()\n\n"},
  {"SetTotalLength", PyvtkCameraOrientationRepresentation_SetTotalLength, METH_VARARGS,
   "SetTotalLength(self, _arg:float) -> None\nC++: virtual void SetTotalLength(double _arg)\n\nSet the total length of the axes in 3 dimensions. This is basis\nof normalization. Default value: 1.\n"},
  {"GetTotalLength", PyvtkCameraOrientationRepresentation_GetTotalLength, METH_VARARGS,
   "GetTotalLength(self) -> float\nC++: virtual double GetTotalLength()\n\n"},
  {"SetNormalizedHandleDia", PyvtkCameraOrientationRepresentation_SetNormalizedHandleDia, METH_VARARGS,
   "SetNormalizedHandleDia(self, _arg:float) -> None\nC++: virtual void SetNormalizedHandleDia(double _arg)\n\nSet the normalized (0-1) diameter of the Handle. Default value:\n0.4\n"},
  {"GetNormalizedHandleDia", PyvtkCameraOrientationRepresentation_GetNormalizedHandleDia, METH_VARARGS,
   "GetNormalizedHandleDia(self) -> float\nC++: virtual double GetNormalizedHandleDia()\n\n"},
  {"GetAzimuth", PyvtkCameraOrientationRepresentation_GetAzimuth, METH_VARARGS,
   "GetAzimuth(self) -> float\nC++: virtual double GetAzimuth()\n\nOrientation properties. (read only)\n"},
  {"GetBack", PyvtkCameraOrientationRepresentation_GetBack, METH_VARARGS,
   "GetBack(self) -> (float, float, float)\nC++: virtual double *GetBack()\n\n"},
  {"GetElevation", PyvtkCameraOrientationRepresentation_GetElevation, METH_VARARGS,
   "GetElevation(self) -> float\nC++: virtual double GetElevation()\n\n"},
  {"GetUp", PyvtkCameraOrientationRepresentation_GetUp, METH_VARARGS,
   "GetUp(self) -> (float, float, float)\nC++: virtual double *GetUp()\n\n"},
  {"SetShaftResolution", PyvtkCameraOrientationRepresentation_SetShaftResolution, METH_VARARGS,
   "SetShaftResolution(self, _arg:int) -> None\nC++: virtual void SetShaftResolution(int _arg)\n\nSet shaft's resolution.\n"},
  {"GetShaftResolutionMinValue", PyvtkCameraOrientationRepresentation_GetShaftResolutionMinValue, METH_VARARGS,
   "GetShaftResolutionMinValue(self) -> int\nC++: virtual int GetShaftResolutionMinValue()\n\n"},
  {"GetShaftResolutionMaxValue", PyvtkCameraOrientationRepresentation_GetShaftResolutionMaxValue, METH_VARARGS,
   "GetShaftResolutionMaxValue(self) -> int\nC++: virtual int GetShaftResolutionMaxValue()\n\n"},
  {"GetShaftResolution", PyvtkCameraOrientationRepresentation_GetShaftResolution, METH_VARARGS,
   "GetShaftResolution(self) -> int\nC++: virtual int GetShaftResolution()\n\n"},
  {"SetHandleCircumferentialResolution", PyvtkCameraOrientationRepresentation_SetHandleCircumferentialResolution, METH_VARARGS,
   "SetHandleCircumferentialResolution(self, _arg:int) -> None\nC++: virtual void SetHandleCircumferentialResolution(int _arg)\n\nSet Handle's circumferential resolution.\n"},
  {"GetHandleCircumferentialResolutionMinValue", PyvtkCameraOrientationRepresentation_GetHandleCircumferentialResolutionMinValue, METH_VARARGS,
   "GetHandleCircumferentialResolutionMinValue(self) -> int\nC++: virtual int GetHandleCircumferentialResolutionMinValue()\n\n"},
  {"GetHandleCircumferentialResolutionMaxValue", PyvtkCameraOrientationRepresentation_GetHandleCircumferentialResolutionMaxValue, METH_VARARGS,
   "GetHandleCircumferentialResolutionMaxValue(self) -> int\nC++: virtual int GetHandleCircumferentialResolutionMaxValue()\n\n"},
  {"GetHandleCircumferentialResolution", PyvtkCameraOrientationRepresentation_GetHandleCircumferentialResolution, METH_VARARGS,
   "GetHandleCircumferentialResolution(self) -> int\nC++: virtual int GetHandleCircumferentialResolution()\n\n"},
  {"SetContainerCircumferentialResolution", PyvtkCameraOrientationRepresentation_SetContainerCircumferentialResolution, METH_VARARGS,
   "SetContainerCircumferentialResolution(self, _arg:int) -> None\nC++: virtual void SetContainerCircumferentialResolution(int _arg)\n\nSet container's circumferential resolution.\n"},
  {"GetContainerCircumferentialResolutionMinValue", PyvtkCameraOrientationRepresentation_GetContainerCircumferentialResolutionMinValue, METH_VARARGS,
   "GetContainerCircumferentialResolutionMinValue(self) -> int\nC++: virtual int GetContainerCircumferentialResolutionMinValue()\n\n"},
  {"GetContainerCircumferentialResolutionMaxValue", PyvtkCameraOrientationRepresentation_GetContainerCircumferentialResolutionMaxValue, METH_VARARGS,
   "GetContainerCircumferentialResolutionMaxValue(self) -> int\nC++: virtual int GetContainerCircumferentialResolutionMaxValue()\n\n"},
  {"GetContainerCircumferentialResolution", PyvtkCameraOrientationRepresentation_GetContainerCircumferentialResolution, METH_VARARGS,
   "GetContainerCircumferentialResolution(self) -> int\nC++: virtual int GetContainerCircumferentialResolution()\n\n"},
  {"SetContainerRadialResolution", PyvtkCameraOrientationRepresentation_SetContainerRadialResolution, METH_VARARGS,
   "SetContainerRadialResolution(self, _arg:int) -> None\nC++: virtual void SetContainerRadialResolution(int _arg)\n\nSet container's radial resolution.\n"},
  {"GetContainerRadialResolutionMinValue", PyvtkCameraOrientationRepresentation_GetContainerRadialResolutionMinValue, METH_VARARGS,
   "GetContainerRadialResolutionMinValue(self) -> int\nC++: virtual int GetContainerRadialResolutionMinValue()\n\n"},
  {"GetContainerRadialResolutionMaxValue", PyvtkCameraOrientationRepresentation_GetContainerRadialResolutionMaxValue, METH_VARARGS,
   "GetContainerRadialResolutionMaxValue(self) -> int\nC++: virtual int GetContainerRadialResolutionMaxValue()\n\n"},
  {"GetContainerRadialResolution", PyvtkCameraOrientationRepresentation_GetContainerRadialResolution, METH_VARARGS,
   "GetContainerRadialResolution(self) -> int\nC++: virtual int GetContainerRadialResolution()\n\n"},
  {"GetPickedAxis", PyvtkCameraOrientationRepresentation_GetPickedAxis, METH_VARARGS,
   "GetPickedAxis(self) -> int\nC++: virtual int GetPickedAxis()\n\nGet picked axis, direction\n"},
  {"GetPickedDir", PyvtkCameraOrientationRepresentation_GetPickedDir, METH_VARARGS,
   "GetPickedDir(self) -> int\nC++: virtual int GetPickedDir()\n\n"},
  {"GetXPlusLabelProperty", PyvtkCameraOrientationRepresentation_GetXPlusLabelProperty, METH_VARARGS,
   "GetXPlusLabelProperty(self) -> vtkTextProperty\nC++: vtkTextProperty *GetXPlusLabelProperty()\n\nGet the '+' axis label properties.\n"},
  {"GetYPlusLabelProperty", PyvtkCameraOrientationRepresentation_GetYPlusLabelProperty, METH_VARARGS,
   "GetYPlusLabelProperty(self) -> vtkTextProperty\nC++: vtkTextProperty *GetYPlusLabelProperty()\n\n"},
  {"GetZPlusLabelProperty", PyvtkCameraOrientationRepresentation_GetZPlusLabelProperty, METH_VARARGS,
   "GetZPlusLabelProperty(self) -> vtkTextProperty\nC++: vtkTextProperty *GetZPlusLabelProperty()\n\n"},
  {"GetXMinusLabelProperty", PyvtkCameraOrientationRepresentation_GetXMinusLabelProperty, METH_VARARGS,
   "GetXMinusLabelProperty(self) -> vtkTextProperty\nC++: vtkTextProperty *GetXMinusLabelProperty()\n\nGet the '-' axis label properties.\n"},
  {"GetYMinusLabelProperty", PyvtkCameraOrientationRepresentation_GetYMinusLabelProperty, METH_VARARGS,
   "GetYMinusLabelProperty(self) -> vtkTextProperty\nC++: vtkTextProperty *GetYMinusLabelProperty()\n\n"},
  {"GetZMinusLabelProperty", PyvtkCameraOrientationRepresentation_GetZMinusLabelProperty, METH_VARARGS,
   "GetZMinusLabelProperty(self) -> vtkTextProperty\nC++: vtkTextProperty *GetZMinusLabelProperty()\n\n"},
  {"GetContainerProperty", PyvtkCameraOrientationRepresentation_GetContainerProperty, METH_VARARGS,
   "GetContainerProperty(self) -> vtkProperty\nC++: vtkProperty *GetContainerProperty()\n\nGet the container property.\n"},
  {"SetContainerVisibility", PyvtkCameraOrientationRepresentation_SetContainerVisibility, METH_VARARGS,
   "SetContainerVisibility(self, state:bool) -> None\nC++: void SetContainerVisibility(bool state)\n\nShow container to indicate mouse presence.\n"},
  {"ContainerVisibilityOn", PyvtkCameraOrientationRepresentation_ContainerVisibilityOn, METH_VARARGS,
   "ContainerVisibilityOn(self) -> None\nC++: virtual void ContainerVisibilityOn()\n\n"},
  {"ContainerVisibilityOff", PyvtkCameraOrientationRepresentation_ContainerVisibilityOff, METH_VARARGS,
   "ContainerVisibilityOff(self) -> None\nC++: virtual void ContainerVisibilityOff()\n\n"},
  {"GetContainerVisibility", PyvtkCameraOrientationRepresentation_GetContainerVisibility, METH_VARARGS,
   "GetContainerVisibility(self) -> bool\nC++: bool GetContainerVisibility()\n\n"},
  {"GetActors", PyvtkCameraOrientationRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"GetTransform", PyvtkCameraOrientationRepresentation_GetTransform, METH_VARARGS,
   "GetTransform(self) -> vtkTransform\nC++: vtkTransform *GetTransform()\n\nRetrieve internal transform of this widget representation.\n"},
  {"PlaceWidget", PyvtkCameraOrientationRepresentation_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, __a:[float, float, float, float, float, float])\n    -> None\nC++: void PlaceWidget(double *) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"BuildRepresentation", PyvtkCameraOrientationRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"StartWidgetInteraction", PyvtkCameraOrientationRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkCameraOrientationRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, newEventPos:[float, float]) -> None\nC++: void WidgetInteraction(double newEventPos[2]) override;\n\n"},
  {"EndWidgetInteraction", PyvtkCameraOrientationRepresentation_EndWidgetInteraction, METH_VARARGS,
   "EndWidgetInteraction(self, newEventPos:[float, float]) -> None\nC++: void EndWidgetInteraction(double newEventPos[2]) override;\n\n"},
  {"ComputeInteractionState", PyvtkCameraOrientationRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"GetBounds", PyvtkCameraOrientationRepresentation_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"ReleaseGraphicsResources", PyvtkCameraOrientationRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"RenderOpaqueGeometry", PyvtkCameraOrientationRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkCameraOrientationRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCameraOrientationRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"ShallowCopy", PyvtkCameraOrientationRepresentation_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of an axes actor. Overloads the virtual vtkProp\nmethod.\n"},
  {"IsAnyHandleSelected", PyvtkCameraOrientationRepresentation_IsAnyHandleSelected, METH_VARARGS,
   "IsAnyHandleSelected(self) -> bool\nC++: bool IsAnyHandleSelected()\n\nIs a grabber button picked.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCameraOrientationRepresentation_Doc =
  "vtkCameraOrientationRepresentation - A 3D representation for\nvtkCameraOrientationWidget.\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "Hover over the representation and drag with LMB to orbit around the\n"
  "view. Clicking on one of the axis labels will snap to that view.\n"
  "Click again on the same axis to switch to the opposite view of that\n"
  "same axis.\n\n"
  "The representation anchors itself to a corner of the renderer's\n"
  "viewport. See AnchorType.\n\n"
  "@sa\n"
  "vtkCameraOrientationWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCameraOrientationRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkCameraOrientationRepresentation", // tp_name
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
  PyvtkCameraOrientationRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCameraOrientationRepresentation_StaticNew()
{
  return vtkCameraOrientationRepresentation::New();
}

PyObject *PyvtkCameraOrientationRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCameraOrientationRepresentation_Type, PyvtkCameraOrientationRepresentation_Methods,
    "vtkCameraOrientationRepresentation",
 &PyvtkCameraOrientationRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCameraOrientationRepresentation_InteractionStateType_Type);
  // members of vtkCameraOrientationRepresentation::InteractionStateType
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkCameraOrientationRepresentation_InteractionStateType_Type.tp_dict = enumdict;

    typedef vtkCameraOrientationRepresentation::InteractionStateType cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[3] = {
      { "Outside", cxx_enum_type::Outside },
      { "Hovering", cxx_enum_type::Hovering },
      { "Rotating", cxx_enum_type::Rotating },
    };

    for (int c = 0; c < 3; c++)
    {
      enumval = PyvtkCameraOrientationRepresentation_InteractionStateType_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkCameraOrientationRepresentation_InteractionStateType_Type, "vtkCameraOrientationRepresentation.InteractionStateType");

  o = (PyObject *)&PyvtkCameraOrientationRepresentation_InteractionStateType_Type;
  if (PyDict_SetItemString(d, "InteractionStateType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkCameraOrientationRepresentation_AnchorType_Type);
  // members of vtkCameraOrientationRepresentation::AnchorType
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkCameraOrientationRepresentation_AnchorType_Type.tp_dict = enumdict;

    typedef vtkCameraOrientationRepresentation::AnchorType cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[4] = {
      { "LowerLeft", cxx_enum_type::LowerLeft },
      { "UpperLeft", cxx_enum_type::UpperLeft },
      { "LowerRight", cxx_enum_type::LowerRight },
      { "UpperRight", cxx_enum_type::UpperRight },
    };

    for (int c = 0; c < 4; c++)
    {
      enumval = PyvtkCameraOrientationRepresentation_AnchorType_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkCameraOrientationRepresentation_AnchorType_Type, "vtkCameraOrientationRepresentation.AnchorType");

  o = (PyObject *)&PyvtkCameraOrientationRepresentation_AnchorType_Type;
  if (PyDict_SetItemString(d, "AnchorType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCameraOrientationRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCameraOrientationRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCameraOrientationRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

