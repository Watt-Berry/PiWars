// python wrapper for vtkSliderRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSliderRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSliderRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkSliderRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSliderRepresentation_InteractionStateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkSliderRepresentation.InteractionStateType", // tp_name
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
PyObject *PyvtkSliderRepresentation_InteractionStateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSliderRepresentation_InteractionStateType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSliderRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSliderRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSliderRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSliderRepresentation *tempr = vtkSliderRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSliderRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSliderRepresentation::NewInstance());

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
PyvtkSliderRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSliderRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSliderRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0);
    }
    else
    {
      op->vtkSliderRepresentation::SetValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkSliderRepresentation::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetMinimumValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumValue(temp0);
    }
    else
    {
      op->vtkSliderRepresentation::SetMinimumValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetMinimumValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumValue() :
      op->vtkSliderRepresentation::GetMinimumValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetMaximumValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumValue(temp0);
    }
    else
    {
      op->vtkSliderRepresentation::SetMaximumValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetMaximumValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumValue() :
      op->vtkSliderRepresentation::GetMaximumValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetSliderLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliderLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliderLength(temp0);
    }
    else
    {
      op->vtkSliderRepresentation::SetSliderLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetSliderLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSliderLengthMinValue() :
      op->vtkSliderRepresentation::GetSliderLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetSliderLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSliderLengthMaxValue() :
      op->vtkSliderRepresentation::GetSliderLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetSliderLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSliderLength() :
      op->vtkSliderRepresentation::GetSliderLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetSliderWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliderWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliderWidth(temp0);
    }
    else
    {
      op->vtkSliderRepresentation::SetSliderWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetSliderWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSliderWidthMinValue() :
      op->vtkSliderRepresentation::GetSliderWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetSliderWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSliderWidthMaxValue() :
      op->vtkSliderRepresentation::GetSliderWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetSliderWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliderWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSliderWidth() :
      op->vtkSliderRepresentation::GetSliderWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetTubeWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTubeWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTubeWidth(temp0);
    }
    else
    {
      op->vtkSliderRepresentation::SetTubeWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetTubeWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubeWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTubeWidthMinValue() :
      op->vtkSliderRepresentation::GetTubeWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetTubeWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubeWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTubeWidthMaxValue() :
      op->vtkSliderRepresentation::GetTubeWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetTubeWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubeWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTubeWidth() :
      op->vtkSliderRepresentation::GetTubeWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetEndCapLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndCapLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndCapLength(temp0);
    }
    else
    {
      op->vtkSliderRepresentation::SetEndCapLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetEndCapLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndCapLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndCapLengthMinValue() :
      op->vtkSliderRepresentation::GetEndCapLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetEndCapLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndCapLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndCapLengthMaxValue() :
      op->vtkSliderRepresentation::GetEndCapLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetEndCapLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndCapLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndCapLength() :
      op->vtkSliderRepresentation::GetEndCapLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetEndCapWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndCapWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndCapWidth(temp0);
    }
    else
    {
      op->vtkSliderRepresentation::SetEndCapWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetEndCapWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndCapWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndCapWidthMinValue() :
      op->vtkSliderRepresentation::GetEndCapWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetEndCapWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndCapWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndCapWidthMaxValue() :
      op->vtkSliderRepresentation::GetEndCapWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetEndCapWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndCapWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndCapWidth() :
      op->vtkSliderRepresentation::GetEndCapWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetTitleText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleText(temp0);
    }
    else
    {
      op->vtkSliderRepresentation::SetTitleText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetTitleText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTitleText() :
      op->vtkSliderRepresentation::GetTitleText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelFormat(temp0);
    }
    else
    {
      op->vtkSliderRepresentation::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkSliderRepresentation::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetLabelHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelHeight(temp0);
    }
    else
    {
      op->vtkSliderRepresentation::SetLabelHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetLabelHeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelHeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelHeightMinValue() :
      op->vtkSliderRepresentation::GetLabelHeightMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetLabelHeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelHeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelHeightMaxValue() :
      op->vtkSliderRepresentation::GetLabelHeightMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetLabelHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelHeight() :
      op->vtkSliderRepresentation::GetLabelHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetTitleHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleHeight(temp0);
    }
    else
    {
      op->vtkSliderRepresentation::SetTitleHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetTitleHeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleHeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTitleHeightMinValue() :
      op->vtkSliderRepresentation::GetTitleHeightMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetTitleHeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleHeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTitleHeightMaxValue() :
      op->vtkSliderRepresentation::GetTitleHeightMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetTitleHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTitleHeight() :
      op->vtkSliderRepresentation::GetTitleHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_SetShowSliderLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowSliderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowSliderLabel(temp0);
    }
    else
    {
      op->vtkSliderRepresentation::SetShowSliderLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetShowSliderLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowSliderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowSliderLabel() :
      op->vtkSliderRepresentation::GetShowSliderLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_ShowSliderLabelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSliderLabelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowSliderLabelOn();
    }
    else
    {
      op->vtkSliderRepresentation::ShowSliderLabelOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_ShowSliderLabelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowSliderLabelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowSliderLabelOff();
    }
    else
    {
      op->vtkSliderRepresentation::ShowSliderLabelOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetCurrentT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCurrentT() :
      op->vtkSliderRepresentation::GetCurrentT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSliderRepresentation_GetPickedT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSliderRepresentation *op = static_cast<vtkSliderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPickedT() :
      op->vtkSliderRepresentation::GetPickedT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSliderRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkSliderRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSliderRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSliderRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSliderRepresentation\nC++: static vtkSliderRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSliderRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSliderRepresentation\nC++: vtkSliderRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSliderRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSliderRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetValue", PyvtkSliderRepresentation_SetValue, METH_VARARGS,
   "SetValue(self, value:float) -> None\nC++: void SetValue(double value)\n\nSpecify the current value for the widget. The value should lie\nbetween the minimum and maximum values.\n"},
  {"GetValue", PyvtkSliderRepresentation_GetValue, METH_VARARGS,
   "GetValue(self) -> float\nC++: virtual double GetValue()\n\n"},
  {"SetMinimumValue", PyvtkSliderRepresentation_SetMinimumValue, METH_VARARGS,
   "SetMinimumValue(self, value:float) -> None\nC++: void SetMinimumValue(double value)\n\nSet the current minimum value that the slider can take. Setting\nthe minimum value greater than the maximum value will cause the\nmaximum value to grow to (minimum value + 1).\n"},
  {"GetMinimumValue", PyvtkSliderRepresentation_GetMinimumValue, METH_VARARGS,
   "GetMinimumValue(self) -> float\nC++: virtual double GetMinimumValue()\n\n"},
  {"SetMaximumValue", PyvtkSliderRepresentation_SetMaximumValue, METH_VARARGS,
   "SetMaximumValue(self, value:float) -> None\nC++: void SetMaximumValue(double value)\n\nSet the current maximum value that the slider can take. Setting\nthe maximum value less than the minimum value will cause the\nminimum value to change to (maximum value - 1).\n"},
  {"GetMaximumValue", PyvtkSliderRepresentation_GetMaximumValue, METH_VARARGS,
   "GetMaximumValue(self) -> float\nC++: virtual double GetMaximumValue()\n\n"},
  {"SetSliderLength", PyvtkSliderRepresentation_SetSliderLength, METH_VARARGS,
   "SetSliderLength(self, _arg:float) -> None\nC++: virtual void SetSliderLength(double _arg)\n\nSpecify the length of the slider shape (in normalized display\ncoordinates [0.01,0.5]). The slider length by default is 0.05.\n"},
  {"GetSliderLengthMinValue", PyvtkSliderRepresentation_GetSliderLengthMinValue, METH_VARARGS,
   "GetSliderLengthMinValue(self) -> float\nC++: virtual double GetSliderLengthMinValue()\n\n"},
  {"GetSliderLengthMaxValue", PyvtkSliderRepresentation_GetSliderLengthMaxValue, METH_VARARGS,
   "GetSliderLengthMaxValue(self) -> float\nC++: virtual double GetSliderLengthMaxValue()\n\n"},
  {"GetSliderLength", PyvtkSliderRepresentation_GetSliderLength, METH_VARARGS,
   "GetSliderLength(self) -> float\nC++: virtual double GetSliderLength()\n\n"},
  {"SetSliderWidth", PyvtkSliderRepresentation_SetSliderWidth, METH_VARARGS,
   "SetSliderWidth(self, _arg:float) -> None\nC++: virtual void SetSliderWidth(double _arg)\n\nSet the width of the slider in the directions orthogonal to the\nslider axis. Using this it is possible to create ellipsoidal and\nhockey puck sliders (in some subclasses). By default the width is\n0.05.\n"},
  {"GetSliderWidthMinValue", PyvtkSliderRepresentation_GetSliderWidthMinValue, METH_VARARGS,
   "GetSliderWidthMinValue(self) -> float\nC++: virtual double GetSliderWidthMinValue()\n\n"},
  {"GetSliderWidthMaxValue", PyvtkSliderRepresentation_GetSliderWidthMaxValue, METH_VARARGS,
   "GetSliderWidthMaxValue(self) -> float\nC++: virtual double GetSliderWidthMaxValue()\n\n"},
  {"GetSliderWidth", PyvtkSliderRepresentation_GetSliderWidth, METH_VARARGS,
   "GetSliderWidth(self) -> float\nC++: virtual double GetSliderWidth()\n\n"},
  {"SetTubeWidth", PyvtkSliderRepresentation_SetTubeWidth, METH_VARARGS,
   "SetTubeWidth(self, _arg:float) -> None\nC++: virtual void SetTubeWidth(double _arg)\n\nSet the width of the tube (in normalized display coordinates) on\nwhich the slider moves. By default the width is 0.05.\n"},
  {"GetTubeWidthMinValue", PyvtkSliderRepresentation_GetTubeWidthMinValue, METH_VARARGS,
   "GetTubeWidthMinValue(self) -> float\nC++: virtual double GetTubeWidthMinValue()\n\n"},
  {"GetTubeWidthMaxValue", PyvtkSliderRepresentation_GetTubeWidthMaxValue, METH_VARARGS,
   "GetTubeWidthMaxValue(self) -> float\nC++: virtual double GetTubeWidthMaxValue()\n\n"},
  {"GetTubeWidth", PyvtkSliderRepresentation_GetTubeWidth, METH_VARARGS,
   "GetTubeWidth(self) -> float\nC++: virtual double GetTubeWidth()\n\n"},
  {"SetEndCapLength", PyvtkSliderRepresentation_SetEndCapLength, METH_VARARGS,
   "SetEndCapLength(self, _arg:float) -> None\nC++: virtual void SetEndCapLength(double _arg)\n\nSpecify the length of each end cap (in normalized coordinates\n[0.0,0.25]). By default the length is 0.025. If the end cap\nlength is set to 0.0, then the end cap will not display at all.\n"},
  {"GetEndCapLengthMinValue", PyvtkSliderRepresentation_GetEndCapLengthMinValue, METH_VARARGS,
   "GetEndCapLengthMinValue(self) -> float\nC++: virtual double GetEndCapLengthMinValue()\n\n"},
  {"GetEndCapLengthMaxValue", PyvtkSliderRepresentation_GetEndCapLengthMaxValue, METH_VARARGS,
   "GetEndCapLengthMaxValue(self) -> float\nC++: virtual double GetEndCapLengthMaxValue()\n\n"},
  {"GetEndCapLength", PyvtkSliderRepresentation_GetEndCapLength, METH_VARARGS,
   "GetEndCapLength(self) -> float\nC++: virtual double GetEndCapLength()\n\n"},
  {"SetEndCapWidth", PyvtkSliderRepresentation_SetEndCapWidth, METH_VARARGS,
   "SetEndCapWidth(self, _arg:float) -> None\nC++: virtual void SetEndCapWidth(double _arg)\n\nSpecify the width of each end cap (in normalized coordinates\n[0.0,0.25]). By default the width is twice the tube width.\n"},
  {"GetEndCapWidthMinValue", PyvtkSliderRepresentation_GetEndCapWidthMinValue, METH_VARARGS,
   "GetEndCapWidthMinValue(self) -> float\nC++: virtual double GetEndCapWidthMinValue()\n\n"},
  {"GetEndCapWidthMaxValue", PyvtkSliderRepresentation_GetEndCapWidthMaxValue, METH_VARARGS,
   "GetEndCapWidthMaxValue(self) -> float\nC++: virtual double GetEndCapWidthMaxValue()\n\n"},
  {"GetEndCapWidth", PyvtkSliderRepresentation_GetEndCapWidth, METH_VARARGS,
   "GetEndCapWidth(self) -> float\nC++: virtual double GetEndCapWidth()\n\n"},
  {"SetTitleText", PyvtkSliderRepresentation_SetTitleText, METH_VARARGS,
   "SetTitleText(self, __a:str) -> None\nC++: virtual void SetTitleText(const char *)\n\nSpecify the label text for this widget. If the value is not set,\nor set to the empty string \"\", then the label text is not\ndisplayed.\n"},
  {"GetTitleText", PyvtkSliderRepresentation_GetTitleText, METH_VARARGS,
   "GetTitleText(self) -> str\nC++: virtual const char *GetTitleText()\n\n"},
  {"SetLabelFormat", PyvtkSliderRepresentation_SetLabelFormat, METH_VARARGS,
   "SetLabelFormat(self, _arg:str) -> None\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the slider value.\n"},
  {"GetLabelFormat", PyvtkSliderRepresentation_GetLabelFormat, METH_VARARGS,
   "GetLabelFormat(self) -> str\nC++: virtual char *GetLabelFormat()\n\n"},
  {"SetLabelHeight", PyvtkSliderRepresentation_SetLabelHeight, METH_VARARGS,
   "SetLabelHeight(self, _arg:float) -> None\nC++: virtual void SetLabelHeight(double _arg)\n\nSpecify the relative height of the label as compared to the\nlength of the slider.\n"},
  {"GetLabelHeightMinValue", PyvtkSliderRepresentation_GetLabelHeightMinValue, METH_VARARGS,
   "GetLabelHeightMinValue(self) -> float\nC++: virtual double GetLabelHeightMinValue()\n\n"},
  {"GetLabelHeightMaxValue", PyvtkSliderRepresentation_GetLabelHeightMaxValue, METH_VARARGS,
   "GetLabelHeightMaxValue(self) -> float\nC++: virtual double GetLabelHeightMaxValue()\n\n"},
  {"GetLabelHeight", PyvtkSliderRepresentation_GetLabelHeight, METH_VARARGS,
   "GetLabelHeight(self) -> float\nC++: virtual double GetLabelHeight()\n\n"},
  {"SetTitleHeight", PyvtkSliderRepresentation_SetTitleHeight, METH_VARARGS,
   "SetTitleHeight(self, _arg:float) -> None\nC++: virtual void SetTitleHeight(double _arg)\n\nSpecify the relative height of the title as compared to the\nlength of the slider.\n"},
  {"GetTitleHeightMinValue", PyvtkSliderRepresentation_GetTitleHeightMinValue, METH_VARARGS,
   "GetTitleHeightMinValue(self) -> float\nC++: virtual double GetTitleHeightMinValue()\n\n"},
  {"GetTitleHeightMaxValue", PyvtkSliderRepresentation_GetTitleHeightMaxValue, METH_VARARGS,
   "GetTitleHeightMaxValue(self) -> float\nC++: virtual double GetTitleHeightMaxValue()\n\n"},
  {"GetTitleHeight", PyvtkSliderRepresentation_GetTitleHeight, METH_VARARGS,
   "GetTitleHeight(self) -> float\nC++: virtual double GetTitleHeight()\n\n"},
  {"SetShowSliderLabel", PyvtkSliderRepresentation_SetShowSliderLabel, METH_VARARGS,
   "SetShowSliderLabel(self, _arg:int) -> None\nC++: virtual void SetShowSliderLabel(vtkTypeBool _arg)\n\nIndicate whether the slider text label should be displayed. This\nis a number corresponding to the current Value of this widget.\n"},
  {"GetShowSliderLabel", PyvtkSliderRepresentation_GetShowSliderLabel, METH_VARARGS,
   "GetShowSliderLabel(self) -> int\nC++: virtual vtkTypeBool GetShowSliderLabel()\n\n"},
  {"ShowSliderLabelOn", PyvtkSliderRepresentation_ShowSliderLabelOn, METH_VARARGS,
   "ShowSliderLabelOn(self) -> None\nC++: virtual void ShowSliderLabelOn()\n\n"},
  {"ShowSliderLabelOff", PyvtkSliderRepresentation_ShowSliderLabelOff, METH_VARARGS,
   "ShowSliderLabelOff(self) -> None\nC++: virtual void ShowSliderLabelOff()\n\n"},
  {"GetCurrentT", PyvtkSliderRepresentation_GetCurrentT, METH_VARARGS,
   "GetCurrentT(self) -> float\nC++: virtual double GetCurrentT()\n\nMethods to interface with the vtkSliderWidget. Subclasses of this\nclass actually do something.\n"},
  {"GetPickedT", PyvtkSliderRepresentation_GetPickedT, METH_VARARGS,
   "GetPickedT(self) -> float\nC++: virtual double GetPickedT()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSliderRepresentation_Doc =
  "vtkSliderRepresentation - abstract class defines the representation\nfor a vtkSliderWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This abstract class is used to specify how the vtkSliderWidget should\n"
  "interact with representations of the vtkSliderWidget. This class may\n"
  "be subclassed so that alternative representations can be created. The\n"
  "class defines an API, and a default implementation, that the\n"
  "vtkSliderWidget interacts with to render itself in the scene.\n\n"
  "@sa\n"
  "vtkSliderWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSliderRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkSliderRepresentation", // tp_name
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
  PyvtkSliderRepresentation_Doc, // tp_doc
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

PyObject *PyvtkSliderRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSliderRepresentation_Type, PyvtkSliderRepresentation_Methods,
    "vtkSliderRepresentation",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSliderRepresentation_InteractionStateType_Type);
  PyVTKEnum_Add(&PyvtkSliderRepresentation_InteractionStateType_Type, "vtkSliderRepresentation.InteractionStateType");

  o = (PyObject *)&PyvtkSliderRepresentation_InteractionStateType_Type;
  if (PyDict_SetItemString(d, "InteractionStateType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkSliderRepresentation::InteractionStateType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "Outside", vtkSliderRepresentation::Outside },
        { "Tube", vtkSliderRepresentation::Tube },
        { "LeftCap", vtkSliderRepresentation::LeftCap },
        { "RightCap", vtkSliderRepresentation::RightCap },
        { "Slider", vtkSliderRepresentation::Slider },
      };

    o = PyvtkSliderRepresentation_InteractionStateType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSliderRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSliderRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSliderRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

