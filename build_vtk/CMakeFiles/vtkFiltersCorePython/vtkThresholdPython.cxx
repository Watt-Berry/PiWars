// python wrapper for vtkThreshold
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkThreshold.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkThreshold(PyObject *dict); }
extern "C" { PyObject *PyvtkThreshold_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkThreshold_ThresholdType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkThreshold.ThresholdType", // tp_name
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
PyObject *PyvtkThreshold_ThresholdType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkThreshold_ThresholdType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkThreshold_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkThreshold::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThreshold::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkThreshold *tempr = vtkThreshold::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkThreshold *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThreshold::NewInstance());

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
PyvtkThreshold_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkThreshold::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkThreshold::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetThresholdFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThresholdFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThresholdFunction(temp0);
    }
    else
    {
      op->vtkThreshold::SetThresholdFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetThresholdFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThresholdFunction() :
      op->vtkThreshold::GetThresholdFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUpperThreshold(temp0);
    }
    else
    {
      op->vtkThreshold::SetUpperThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLowerThreshold(temp0);
    }
    else
    {
      op->vtkThreshold::SetLowerThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUpperThreshold() :
      op->vtkThreshold::GetUpperThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowerThreshold() :
      op->vtkThreshold::GetLowerThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetAttributeMode(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetAttributeMode."
    " (" "Please use SetInputArrayToProcess instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeMode(temp0);
    }
    else
    {
      op->vtkThreshold::SetAttributeMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetAttributeMode(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetAttributeMode."
    " (" "This method is deprecated." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetAttributeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeMode() :
      op->vtkThreshold::GetAttributeMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetAttributeModeToDefault(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetAttributeModeToDefault."
    " (" "Please use SetInputArrayToProcess instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetAttributeModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeModeToDefault();
    }
    else
    {
      op->vtkThreshold::SetAttributeModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetAttributeModeToUsePointData(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetAttributeModeToUsePointData."
    " (" "Please use SetInputArrayToProcess instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetAttributeModeToUsePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeModeToUsePointData();
    }
    else
    {
      op->vtkThreshold::SetAttributeModeToUsePointData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetAttributeModeToUseCellData(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetAttributeModeToUseCellData."
    " (" "Please use SetInputArrayToProcess instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetAttributeModeToUseCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeModeToUseCellData();
    }
    else
    {
      op->vtkThreshold::SetAttributeModeToUseCellData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetAttributeModeAsString(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetAttributeModeAsString."
    " (" "This method is deprecated." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetAttributeModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeModeAsString() :
      op->vtkThreshold::GetAttributeModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetComponentMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponentMode(temp0);
    }
    else
    {
      op->vtkThreshold::SetComponentMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetComponentModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentModeMinValue() :
      op->vtkThreshold::GetComponentModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetComponentModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentModeMaxValue() :
      op->vtkThreshold::GetComponentModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetComponentMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentMode() :
      op->vtkThreshold::GetComponentMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetComponentModeToUseSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentModeToUseSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetComponentModeToUseSelected();
    }
    else
    {
      op->vtkThreshold::SetComponentModeToUseSelected();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetComponentModeToUseAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentModeToUseAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetComponentModeToUseAll();
    }
    else
    {
      op->vtkThreshold::SetComponentModeToUseAll();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetComponentModeToUseAny(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentModeToUseAny");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetComponentModeToUseAny();
    }
    else
    {
      op->vtkThreshold::SetComponentModeToUseAny();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetComponentModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetComponentModeAsString() :
      op->vtkThreshold::GetComponentModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetSelectedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedComponent(temp0);
    }
    else
    {
      op->vtkThreshold::SetSelectedComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetSelectedComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedComponentMinValue() :
      op->vtkThreshold::GetSelectedComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetSelectedComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedComponentMaxValue() :
      op->vtkThreshold::GetSelectedComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetSelectedComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedComponent() :
      op->vtkThreshold::GetSelectedComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetAllScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllScalars(temp0);
    }
    else
    {
      op->vtkThreshold::SetAllScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetAllScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllScalars() :
      op->vtkThreshold::GetAllScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_AllScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllScalarsOn();
    }
    else
    {
      op->vtkThreshold::AllScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_AllScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllScalarsOff();
    }
    else
    {
      op->vtkThreshold::AllScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetUseContinuousCellRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseContinuousCellRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseContinuousCellRange(temp0);
    }
    else
    {
      op->vtkThreshold::SetUseContinuousCellRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetUseContinuousCellRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseContinuousCellRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseContinuousCellRange() :
      op->vtkThreshold::GetUseContinuousCellRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_UseContinuousCellRangeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseContinuousCellRangeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseContinuousCellRangeOn();
    }
    else
    {
      op->vtkThreshold::UseContinuousCellRangeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_UseContinuousCellRangeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseContinuousCellRangeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseContinuousCellRangeOff();
    }
    else
    {
      op->vtkThreshold::UseContinuousCellRangeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetPointsDataTypeToDouble(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetPointsDataTypeToDouble."
    " (" "Please use SetOutputPointsPrecision instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetPointsDataTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPointsDataTypeToDouble();
    }
    else
    {
      op->vtkThreshold::SetPointsDataTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetPointsDataTypeToFloat(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetPointsDataTypeToFloat."
    " (" "Please use SetOutputPointsPrecision instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetPointsDataTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPointsDataTypeToFloat();
    }
    else
    {
      op->vtkThreshold::SetPointsDataTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetPointsDataType(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetPointsDataType."
    " (" "Please use SetOutputPointsPrecision instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetPointsDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointsDataType(temp0);
    }
    else
    {
      op->vtkThreshold::SetPointsDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetPointsDataType(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetPointsDataType."
    " (" "Please use GetOutputPointsPrecision instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetPointsDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointsDataType() :
      op->vtkThreshold::GetPointsDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetInvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInvert(temp0);
    }
    else
    {
      op->vtkThreshold::SetInvert(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetInvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInvert() :
      op->vtkThreshold::GetInvert());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_InvertOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvertOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvertOn();
    }
    else
    {
      op->vtkThreshold::InvertOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_InvertOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvertOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvertOff();
    }
    else
    {
      op->vtkThreshold::InvertOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkThreshold::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkThreshold::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_Lower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Lower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Lower(temp0) :
      op->vtkThreshold::Lower(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_Upper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Upper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Upper(temp0) :
      op->vtkThreshold::Upper(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreshold_Between(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Between");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreshold *op = static_cast<vtkThreshold *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Between(temp0) :
      op->vtkThreshold::Between(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkThreshold_Methods[] = {
  {"IsTypeOf", PyvtkThreshold_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkThreshold_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkThreshold_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkThreshold\nC++: static vtkThreshold *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkThreshold_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkThreshold\nC++: vtkThreshold *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkThreshold_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkThreshold_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetThresholdFunction", PyvtkThreshold_SetThresholdFunction, METH_VARARGS,
   "SetThresholdFunction(self, function:int) -> None\nC++: void SetThresholdFunction(int function)\n\nGet/Set the threshold method, defining which threshold bounds to\nuse. The default method is vtkThreshold::Between.\n"},
  {"GetThresholdFunction", PyvtkThreshold_GetThresholdFunction, METH_VARARGS,
   "GetThresholdFunction(self) -> int\nC++: int GetThresholdFunction()\n\n"},
  {"SetUpperThreshold", PyvtkThreshold_SetUpperThreshold, METH_VARARGS,
   "SetUpperThreshold(self, _arg:float) -> None\nC++: virtual void SetUpperThreshold(double _arg)\n\nSet/get the upper and lower thresholds. The default values are\nset to +infinity and -infinity, respectively.\n"},
  {"SetLowerThreshold", PyvtkThreshold_SetLowerThreshold, METH_VARARGS,
   "SetLowerThreshold(self, _arg:float) -> None\nC++: virtual void SetLowerThreshold(double _arg)\n\n"},
  {"GetUpperThreshold", PyvtkThreshold_GetUpperThreshold, METH_VARARGS,
   "GetUpperThreshold(self) -> float\nC++: virtual double GetUpperThreshold()\n\n"},
  {"GetLowerThreshold", PyvtkThreshold_GetLowerThreshold, METH_VARARGS,
   "GetLowerThreshold(self) -> float\nC++: virtual double GetLowerThreshold()\n\n"},
  {"SetAttributeMode", PyvtkThreshold_SetAttributeMode, METH_VARARGS,
   "SetAttributeMode(self, _arg:int) -> None\nC++: virtual void SetAttributeMode(int _arg)\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (AttributeModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (AttributeModeToUsePointData) or cell data\n(AttributeModeToUseCellData).\n"},
  {"GetAttributeMode", PyvtkThreshold_GetAttributeMode, METH_VARARGS,
   "GetAttributeMode(self) -> int\nC++: virtual int GetAttributeMode()\n\n"},
  {"SetAttributeModeToDefault", PyvtkThreshold_SetAttributeModeToDefault, METH_VARARGS,
   "SetAttributeModeToDefault(self) -> None\nC++: void SetAttributeModeToDefault()\n\n"},
  {"SetAttributeModeToUsePointData", PyvtkThreshold_SetAttributeModeToUsePointData, METH_VARARGS,
   "SetAttributeModeToUsePointData(self) -> None\nC++: void SetAttributeModeToUsePointData()\n\n"},
  {"SetAttributeModeToUseCellData", PyvtkThreshold_SetAttributeModeToUseCellData, METH_VARARGS,
   "SetAttributeModeToUseCellData(self) -> None\nC++: void SetAttributeModeToUseCellData()\n\n"},
  {"GetAttributeModeAsString", PyvtkThreshold_GetAttributeModeAsString, METH_VARARGS,
   "GetAttributeModeAsString(self) -> str\nC++: const char *GetAttributeModeAsString()\n\n"},
  {"SetComponentMode", PyvtkThreshold_SetComponentMode, METH_VARARGS,
   "SetComponentMode(self, _arg:int) -> None\nC++: virtual void SetComponentMode(int _arg)\n\nControl how the decision of in / out is made with multi-component\ndata. The choices are to use the selected component (specified in\nthe SelectedComponent ivar), or to look at all components. When\nlooking at all components, the evaluation can pass if all the\ncomponents satisfy the rule (UseAll) or if any satisfy is\n(UseAny). The default value is UseSelected.\n"},
  {"GetComponentModeMinValue", PyvtkThreshold_GetComponentModeMinValue, METH_VARARGS,
   "GetComponentModeMinValue(self) -> int\nC++: virtual int GetComponentModeMinValue()\n\n"},
  {"GetComponentModeMaxValue", PyvtkThreshold_GetComponentModeMaxValue, METH_VARARGS,
   "GetComponentModeMaxValue(self) -> int\nC++: virtual int GetComponentModeMaxValue()\n\n"},
  {"GetComponentMode", PyvtkThreshold_GetComponentMode, METH_VARARGS,
   "GetComponentMode(self) -> int\nC++: virtual int GetComponentMode()\n\n"},
  {"SetComponentModeToUseSelected", PyvtkThreshold_SetComponentModeToUseSelected, METH_VARARGS,
   "SetComponentModeToUseSelected(self) -> None\nC++: void SetComponentModeToUseSelected()\n\n"},
  {"SetComponentModeToUseAll", PyvtkThreshold_SetComponentModeToUseAll, METH_VARARGS,
   "SetComponentModeToUseAll(self) -> None\nC++: void SetComponentModeToUseAll()\n\n"},
  {"SetComponentModeToUseAny", PyvtkThreshold_SetComponentModeToUseAny, METH_VARARGS,
   "SetComponentModeToUseAny(self) -> None\nC++: void SetComponentModeToUseAny()\n\n"},
  {"GetComponentModeAsString", PyvtkThreshold_GetComponentModeAsString, METH_VARARGS,
   "GetComponentModeAsString(self) -> str\nC++: const char *GetComponentModeAsString()\n\n"},
  {"SetSelectedComponent", PyvtkThreshold_SetSelectedComponent, METH_VARARGS,
   "SetSelectedComponent(self, _arg:int) -> None\nC++: virtual void SetSelectedComponent(int _arg)\n\nWhen the component mode is UseSelected, this ivar indicated the\nselected component. The default value is 0.\n"},
  {"GetSelectedComponentMinValue", PyvtkThreshold_GetSelectedComponentMinValue, METH_VARARGS,
   "GetSelectedComponentMinValue(self) -> int\nC++: virtual int GetSelectedComponentMinValue()\n\n"},
  {"GetSelectedComponentMaxValue", PyvtkThreshold_GetSelectedComponentMaxValue, METH_VARARGS,
   "GetSelectedComponentMaxValue(self) -> int\nC++: virtual int GetSelectedComponentMaxValue()\n\n"},
  {"GetSelectedComponent", PyvtkThreshold_GetSelectedComponent, METH_VARARGS,
   "GetSelectedComponent(self) -> int\nC++: virtual int GetSelectedComponent()\n\n"},
  {"SetAllScalars", PyvtkThreshold_SetAllScalars, METH_VARARGS,
   "SetAllScalars(self, _arg:int) -> None\nC++: virtual void SetAllScalars(vtkTypeBool _arg)\n\nIf using scalars from point data, all scalars for all points in a\ncell must satisfy the threshold criterion if AllScalars is set.\nOtherwise, just a single scalar value satisfying the threshold\ncriterion enables will extract the cell.\n"},
  {"GetAllScalars", PyvtkThreshold_GetAllScalars, METH_VARARGS,
   "GetAllScalars(self) -> int\nC++: virtual vtkTypeBool GetAllScalars()\n\n"},
  {"AllScalarsOn", PyvtkThreshold_AllScalarsOn, METH_VARARGS,
   "AllScalarsOn(self) -> None\nC++: virtual void AllScalarsOn()\n\n"},
  {"AllScalarsOff", PyvtkThreshold_AllScalarsOff, METH_VARARGS,
   "AllScalarsOff(self) -> None\nC++: virtual void AllScalarsOff()\n\n"},
  {"SetUseContinuousCellRange", PyvtkThreshold_SetUseContinuousCellRange, METH_VARARGS,
   "SetUseContinuousCellRange(self, _arg:int) -> None\nC++: virtual void SetUseContinuousCellRange(vtkTypeBool _arg)\n\nIf this is on (default is off), we will use the continuous\ninterval [minimum cell scalar, maximum cell scalar] to intersect\nthe threshold bound , rather than the set of discrete scalar\nvalues from the vertices\n*WARNING*: For higher order cells, the scalar range of the cell\n    is not the same as the vertex scalar interval used here, so\n    the result will not be accurate.\n"},
  {"GetUseContinuousCellRange", PyvtkThreshold_GetUseContinuousCellRange, METH_VARARGS,
   "GetUseContinuousCellRange(self) -> int\nC++: virtual vtkTypeBool GetUseContinuousCellRange()\n\n"},
  {"UseContinuousCellRangeOn", PyvtkThreshold_UseContinuousCellRangeOn, METH_VARARGS,
   "UseContinuousCellRangeOn(self) -> None\nC++: virtual void UseContinuousCellRangeOn()\n\n"},
  {"UseContinuousCellRangeOff", PyvtkThreshold_UseContinuousCellRangeOff, METH_VARARGS,
   "UseContinuousCellRangeOff(self) -> None\nC++: virtual void UseContinuousCellRangeOff()\n\n"},
  {"SetPointsDataTypeToDouble", PyvtkThreshold_SetPointsDataTypeToDouble, METH_VARARGS,
   "SetPointsDataTypeToDouble(self) -> None\nC++: void SetPointsDataTypeToDouble()\n\nSet the data type of the output points (See the data types\ndefined in vtkType.h). The default data type is float.\n\n* These methods are deprecated. Please use the\n  SetOutputPointsPrecision()\n* and GetOutputPointsPrecision() methods instead.\n"},
  {"SetPointsDataTypeToFloat", PyvtkThreshold_SetPointsDataTypeToFloat, METH_VARARGS,
   "SetPointsDataTypeToFloat(self) -> None\nC++: void SetPointsDataTypeToFloat()\n\n"},
  {"SetPointsDataType", PyvtkThreshold_SetPointsDataType, METH_VARARGS,
   "SetPointsDataType(self, type:int) -> None\nC++: void SetPointsDataType(int type)\n\n"},
  {"GetPointsDataType", PyvtkThreshold_GetPointsDataType, METH_VARARGS,
   "GetPointsDataType(self) -> int\nC++: int GetPointsDataType()\n\n"},
  {"SetInvert", PyvtkThreshold_SetInvert, METH_VARARGS,
   "SetInvert(self, _arg:bool) -> None\nC++: virtual void SetInvert(bool _arg)\n\nInvert the threshold results. That is, cells that would have been\nin the output with this option off are excluded, while cells that\nwould have been excluded from the output are included.\n"},
  {"GetInvert", PyvtkThreshold_GetInvert, METH_VARARGS,
   "GetInvert(self) -> bool\nC++: virtual bool GetInvert()\n\n"},
  {"InvertOn", PyvtkThreshold_InvertOn, METH_VARARGS,
   "InvertOn(self) -> None\nC++: virtual void InvertOn()\n\n"},
  {"InvertOff", PyvtkThreshold_InvertOff, METH_VARARGS,
   "InvertOff(self) -> None\nC++: virtual void InvertOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkThreshold_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkThreshold_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"Lower", PyvtkThreshold_Lower, METH_VARARGS,
   "Lower(self, s:float) -> int\nC++: int Lower(double s)\n\nMethods used for thresholding. vtkThreshold::Lower returns true\nif s is lower than the lower threshold, vtkThreshold::Upper\nreturns true if s is larger than the upper threshold, and\nvtkThreshold::Between returns true if s is between the lower and\nupper thresholds.\n\n@warning These methods use threshold values that can be set with\nvtkThreshold::SetLowerThreshold and\nvtkThreshold::SetUpperThreshold. The threshold method can be set\nusing vtkThreshold::SetThresholdFunction.\n\note They are not protected members for inheritance purposes. The\naddresses of those methods are stored in one of this class\nattributes to figure out which version of the threshold to apply,\nwhich are inaccessible if protected.\n"},
  {"Upper", PyvtkThreshold_Upper, METH_VARARGS,
   "Upper(self, s:float) -> int\nC++: int Upper(double s)\n\n"},
  {"Between", PyvtkThreshold_Between, METH_VARARGS,
   "Between(self, s:float) -> int\nC++: int Between(double s)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkThreshold_Doc =
  "vtkThreshold - extracts cells where scalar value in cell satisfies\nthreshold criterion\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkThreshold is a filter that extracts cells from any dataset type\n"
  "that satisfy a threshold criterion. A cell satisfies the criterion if\n"
  "the scalar value of (every or any) point satisfies the criterion. The\n"
  "criterion can take three forms: 1) greater than a particular value;\n"
  "2) less than a particular value; or 3) between two values. The output\n"
  "of this filter is an unstructured grid.\n\n"
  "Note that scalar values are available from the point and cell\n"
  "attribute data.  By default, point data is used to obtain scalars,\n"
  "but you can control this behavior. See the AttributeMode ivar below.\n\n"
  "By default only the first scalar value is used in the decision. Use\n"
  "the ComponentMode and SelectedComponent ivars to control this\n"
  "behavior.\n\n"
  "@warning\n"
  "This class is templated. It may run slower than serial execution if\n"
  "the code is not optimized during compilation. Build in Release or\n"
  "ReleaseWithDebugInfo.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkThresholdPoints vtkThresholdTextureCoords\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkThreshold_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkThreshold", // tp_name
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
  PyvtkThreshold_Doc, // tp_doc
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

static vtkObjectBase *PyvtkThreshold_StaticNew()
{
  return vtkThreshold::New();
}

PyObject *PyvtkThreshold_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkThreshold_Type, PyvtkThreshold_Methods,
    "vtkThreshold",
 &PyvtkThreshold_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkThreshold_ThresholdType_Type);
  PyVTKEnum_Add(&PyvtkThreshold_ThresholdType_Type, "vtkThreshold.ThresholdType");

  o = (PyObject *)&PyvtkThreshold_ThresholdType_Type;
  if (PyDict_SetItemString(d, "ThresholdType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkThreshold::ThresholdType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "THRESHOLD_BETWEEN", vtkThreshold::THRESHOLD_BETWEEN },
        { "THRESHOLD_LOWER", vtkThreshold::THRESHOLD_LOWER },
        { "THRESHOLD_UPPER", vtkThreshold::THRESHOLD_UPPER },
      };

    o = PyvtkThreshold_ThresholdType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkThreshold(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkThreshold_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkThreshold", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_ATTRIBUTE_MODE_DEFAULT", 0 },
        { "VTK_ATTRIBUTE_MODE_USE_POINT_DATA", 1 },
        { "VTK_ATTRIBUTE_MODE_USE_CELL_DATA", 2 },
        { "VTK_COMPONENT_MODE_USE_SELECTED", 0 },
        { "VTK_COMPONENT_MODE_USE_ALL", 1 },
        { "VTK_COMPONENT_MODE_USE_ANY", 2 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

