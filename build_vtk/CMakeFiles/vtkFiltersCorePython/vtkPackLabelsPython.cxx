// python wrapper for vtkPackLabels
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPackLabels.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPackLabels(PyObject *dict); }
extern "C" { PyObject *PyvtkPackLabels_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPackLabels_SortBy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkPackLabels.SortBy", // tp_name
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
PyObject *PyvtkPackLabels_SortBy_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPackLabels_SortBy_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPackLabels_DefaultScalarType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkPackLabels.DefaultScalarType", // tp_name
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
PyObject *PyvtkPackLabels_DefaultScalarType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPackLabels_DefaultScalarType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkPackLabels_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPackLabels::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPackLabels::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPackLabels *tempr = vtkPackLabels::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPackLabels *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPackLabels::NewInstance());

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
PyvtkPackLabels_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPackLabels::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPackLabels::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_GetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetLabels() :
      op->vtkPackLabels::GetLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfLabels() :
      op->vtkPackLabels::GetNumberOfLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_GetLabelsCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelsCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetLabelsCount() :
      op->vtkPackLabels::GetLabelsCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_SetSortBy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortBy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSortBy(temp0);
    }
    else
    {
      op->vtkPackLabels::SetSortBy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_GetSortByMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortByMinValue() :
      op->vtkPackLabels::GetSortByMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_GetSortByMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortByMaxValue() :
      op->vtkPackLabels::GetSortByMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_GetSortBy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortBy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortBy() :
      op->vtkPackLabels::GetSortBy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_SortByLabelValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SortByLabelValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SortByLabelValue();
    }
    else
    {
      op->vtkPackLabels::SortByLabelValue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_SortByLabelCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SortByLabelCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SortByLabelCount();
    }
    else
    {
      op->vtkPackLabels::SortByLabelCount();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarType(temp0);
    }
    else
    {
      op->vtkPackLabels::SetOutputScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkPackLabels::GetOutputScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_SetOutputScalarTypeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToDefault();
    }
    else
    {
      op->vtkPackLabels::SetOutputScalarTypeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_SetOutputScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkPackLabels::SetOutputScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_SetOutputScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkPackLabels::SetOutputScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_SetOutputScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedInt();
    }
    else
    {
      op->vtkPackLabels::SetOutputScalarTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_SetOutputScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedLong();
    }
    else
    {
      op->vtkPackLabels::SetOutputScalarTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_SetBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundValue(temp0);
    }
    else
    {
      op->vtkPackLabels::SetBackgroundValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_GetBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetBackgroundValue() :
      op->vtkPackLabels::GetBackgroundValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_SetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassPointData(temp0);
    }
    else
    {
      op->vtkPackLabels::SetPassPointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_GetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassPointData() :
      op->vtkPackLabels::GetPassPointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_PassPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointDataOn();
    }
    else
    {
      op->vtkPackLabels::PassPointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_PassPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointDataOff();
    }
    else
    {
      op->vtkPackLabels::PassPointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_SetPassCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassCellData(temp0);
    }
    else
    {
      op->vtkPackLabels::SetPassCellData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_GetPassCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassCellData() :
      op->vtkPackLabels::GetPassCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_PassCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellDataOn();
    }
    else
    {
      op->vtkPackLabels::PassCellDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_PassCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellDataOff();
    }
    else
    {
      op->vtkPackLabels::PassCellDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_SetPassFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassFieldData(temp0);
    }
    else
    {
      op->vtkPackLabels::SetPassFieldData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_GetPassFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassFieldData() :
      op->vtkPackLabels::GetPassFieldData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_PassFieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassFieldDataOn();
    }
    else
    {
      op->vtkPackLabels::PassFieldDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPackLabels_PassFieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPackLabels *op = static_cast<vtkPackLabels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassFieldDataOff();
    }
    else
    {
      op->vtkPackLabels::PassFieldDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPackLabels_Methods[] = {
  {"IsTypeOf", PyvtkPackLabels_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPackLabels_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPackLabels_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPackLabels\nC++: static vtkPackLabels *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPackLabels_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPackLabels\nC++: vtkPackLabels *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPackLabels_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPackLabels_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetLabels", PyvtkPackLabels_GetLabels, METH_VARARGS,
   "GetLabels(self) -> vtkDataArray\nC++: vtkDataArray *GetLabels()\n\nReturn the number of and list of labels found in the input label\nmap. The methods return a vtkDataArray with the same data type as\nthe input scalar type. By default, the labels are sorted in\nascending order based on the input data (label) values (i.e.,\nSortByLabelValue). However, if SortByLabelCount is specified,\nthen the labels are sorted in descending order based on their\nfrequency of occurrence (i.e., their counts).\n"},
  {"GetNumberOfLabels", PyvtkPackLabels_GetNumberOfLabels, METH_VARARGS,
   "GetNumberOfLabels(self) -> int\nC++: vtkIdType GetNumberOfLabels()\n\n"},
  {"GetLabelsCount", PyvtkPackLabels_GetLabelsCount, METH_VARARGS,
   "GetLabelsCount(self) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetLabelsCount()\n\nReturn the frequency of occurence (i.e., the count) of each label\nreturned in the LabelsArray. The methods returns a vtkIdTypeArray\nthat is implicitly ordered consistent with the LabelsArray (i.e.,\nLabelsCount[i] gives the frequency count for LabelsArray[i]).\nNote that if SortByLabelCount is set, then the labels array and\nlabels count are sorted in descending order based on the\nfrequency of occurrence of labels. If SortByLabelValue is set,\nthen the labels array and label counts are sorted in ascending\norder based on input label values. Also note that the size of the\nLabelsCount array is identical to the size of the LabelsCount\narray.\n"},
  {"SetSortBy", PyvtkPackLabels_SetSortBy, METH_VARARGS,
   "SetSortBy(self, _arg:int) -> None\nC++: virtual void SetSortBy(int _arg)\n\nIndicate whether to sort the output labels by their input scalars\nlabel value (SortByLabelValue), or to sort by the frequency of\noccurence of the label values(SortByLabelCount). By default,\nsorting is performed by label value.  Note that typically the\nbackground label has the highest frequency of occurence, with a\nlabel value == 0 (but this is not a guarantee).\n"},
  {"GetSortByMinValue", PyvtkPackLabels_GetSortByMinValue, METH_VARARGS,
   "GetSortByMinValue(self) -> int\nC++: virtual int GetSortByMinValue()\n\n"},
  {"GetSortByMaxValue", PyvtkPackLabels_GetSortByMaxValue, METH_VARARGS,
   "GetSortByMaxValue(self) -> int\nC++: virtual int GetSortByMaxValue()\n\n"},
  {"GetSortBy", PyvtkPackLabels_GetSortBy, METH_VARARGS,
   "GetSortBy(self) -> int\nC++: virtual int GetSortBy()\n\n"},
  {"SortByLabelValue", PyvtkPackLabels_SortByLabelValue, METH_VARARGS,
   "SortByLabelValue(self) -> None\nC++: void SortByLabelValue()\n\n"},
  {"SortByLabelCount", PyvtkPackLabels_SortByLabelCount, METH_VARARGS,
   "SortByLabelCount(self) -> None\nC++: void SortByLabelCount()\n\n"},
  {"SetOutputScalarType", PyvtkPackLabels_SetOutputScalarType, METH_VARARGS,
   "SetOutputScalarType(self, _arg:int) -> None\nC++: virtual void SetOutputScalarType(int _arg)\n\n"},
  {"GetOutputScalarType", PyvtkPackLabels_GetOutputScalarType, METH_VARARGS,
   "GetOutputScalarType(self) -> int\nC++: virtual int GetOutputScalarType()\n\n"},
  {"SetOutputScalarTypeToDefault", PyvtkPackLabels_SetOutputScalarTypeToDefault, METH_VARARGS,
   "SetOutputScalarTypeToDefault(self) -> None\nC++: void SetOutputScalarTypeToDefault()\n\n"},
  {"SetOutputScalarTypeToUnsignedChar", PyvtkPackLabels_SetOutputScalarTypeToUnsignedChar, METH_VARARGS,
   "SetOutputScalarTypeToUnsignedChar(self) -> None\nC++: void SetOutputScalarTypeToUnsignedChar()\n\n"},
  {"SetOutputScalarTypeToUnsignedShort", PyvtkPackLabels_SetOutputScalarTypeToUnsignedShort, METH_VARARGS,
   "SetOutputScalarTypeToUnsignedShort(self) -> None\nC++: void SetOutputScalarTypeToUnsignedShort()\n\n"},
  {"SetOutputScalarTypeToUnsignedInt", PyvtkPackLabels_SetOutputScalarTypeToUnsignedInt, METH_VARARGS,
   "SetOutputScalarTypeToUnsignedInt(self) -> None\nC++: void SetOutputScalarTypeToUnsignedInt()\n\n"},
  {"SetOutputScalarTypeToUnsignedLong", PyvtkPackLabels_SetOutputScalarTypeToUnsignedLong, METH_VARARGS,
   "SetOutputScalarTypeToUnsignedLong(self) -> None\nC++: void SetOutputScalarTypeToUnsignedLong()\n\n"},
  {"SetBackgroundValue", PyvtkPackLabels_SetBackgroundValue, METH_VARARGS,
   "SetBackgroundValue(self, _arg:int) -> None\nC++: virtual void SetBackgroundValue(unsigned long _arg)\n\nSpecify a background label value. This value is used when the ith\nlabel is i >= N where N is the number of labels that the\nOutputScalarType can represent. So for example, when trying to\npack 500 labels into an unsigned char output scalar type, all i\nlabels i>=256 would be set to this background value. By default\nthe BackgroundValue == 0.\n"},
  {"GetBackgroundValue", PyvtkPackLabels_GetBackgroundValue, METH_VARARGS,
   "GetBackgroundValue(self) -> int\nC++: virtual unsigned long GetBackgroundValue()\n\n"},
  {"SetPassPointData", PyvtkPackLabels_SetPassPointData, METH_VARARGS,
   "SetPassPointData(self, _arg:bool) -> None\nC++: virtual void SetPassPointData(bool _arg)\n\nIndicate whether to pass point data, cell data, and/or field data\nthrough to the output. This can be useful to limit the data being\nprocessed down a pipeline, including writing output files. By\ndefault, point data and cell data is passed from input to output.\n"},
  {"GetPassPointData", PyvtkPackLabels_GetPassPointData, METH_VARARGS,
   "GetPassPointData(self) -> bool\nC++: virtual bool GetPassPointData()\n\n"},
  {"PassPointDataOn", PyvtkPackLabels_PassPointDataOn, METH_VARARGS,
   "PassPointDataOn(self) -> None\nC++: virtual void PassPointDataOn()\n\n"},
  {"PassPointDataOff", PyvtkPackLabels_PassPointDataOff, METH_VARARGS,
   "PassPointDataOff(self) -> None\nC++: virtual void PassPointDataOff()\n\n"},
  {"SetPassCellData", PyvtkPackLabels_SetPassCellData, METH_VARARGS,
   "SetPassCellData(self, _arg:bool) -> None\nC++: virtual void SetPassCellData(bool _arg)\n\n"},
  {"GetPassCellData", PyvtkPackLabels_GetPassCellData, METH_VARARGS,
   "GetPassCellData(self) -> bool\nC++: virtual bool GetPassCellData()\n\n"},
  {"PassCellDataOn", PyvtkPackLabels_PassCellDataOn, METH_VARARGS,
   "PassCellDataOn(self) -> None\nC++: virtual void PassCellDataOn()\n\n"},
  {"PassCellDataOff", PyvtkPackLabels_PassCellDataOff, METH_VARARGS,
   "PassCellDataOff(self) -> None\nC++: virtual void PassCellDataOff()\n\n"},
  {"SetPassFieldData", PyvtkPackLabels_SetPassFieldData, METH_VARARGS,
   "SetPassFieldData(self, _arg:bool) -> None\nC++: virtual void SetPassFieldData(bool _arg)\n\n"},
  {"GetPassFieldData", PyvtkPackLabels_GetPassFieldData, METH_VARARGS,
   "GetPassFieldData(self) -> bool\nC++: virtual bool GetPassFieldData()\n\n"},
  {"PassFieldDataOn", PyvtkPackLabels_PassFieldDataOn, METH_VARARGS,
   "PassFieldDataOn(self) -> None\nC++: virtual void PassFieldDataOn()\n\n"},
  {"PassFieldDataOff", PyvtkPackLabels_PassFieldDataOff, METH_VARARGS,
   "PassFieldDataOff(self) -> None\nC++: virtual void PassFieldDataOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPackLabels_Doc =
  "vtkPackLabels - renumber segmentation labels into contiguous runs of\n(potentially) smaller type\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkPackLabels is a filter that renumbers a set of segmentation labels\n"
  "into a contiguous sequence of label values. The input segmentation\n"
  "labels are represented by a scalar array of arbitrary type, and the\n"
  "labels may be non-contiguous (i.e., there may be \"gaps\" in the labels\n"
  "used to annotate structured in the segmentation). After execution,\n"
  "the output of this filter consists of (by default) an output of the\n"
  "same dataset type as the input; however the labels are renumbered so\n"
  "that they are contiguous (starting with value==0,\n"
  "[0,NumberOfLabels)). After filter execution, an array of labels\n"
  "present in the input can be retrieved (named \"PackedLabels\"), listed\n"
  "in ascending order, this is useful in various filters such as\n"
  "discrete isocontouring filters which require iso/label-values (e.g.,\n"
  "vtkSurfaceNets3D).\n\n"
  "Note that this filter mostly works on input dataset types of\n"
  "vtkImageData (segmentation maps are commonly used in medical\n"
  "computing). However, because this filter operates on scalar point or\n"
  "cell data independent of dataset type, it has been generalized to\n"
  "work on any dataset type.\n\n"
  "The filter also converts the input data from one type to another. By\n"
  "default, the output labels are of an unsigned integral type large\n"
  "enough to represent the N packed label values. It is also possible to\n"
  "explicitly specify the type of the output annotation/label image.\n"
  "This conversion capability often reduces the size of the output\n"
  "image, and can be used is useful when an algorithm performs better,\n"
  "or requires, a certain type of input data. Note however, that manual\n"
  "specification can be dangerous: trying to pack a large number of\n"
  "labels into a manually specified reduced precision label values may\n"
  "result in setting some label values to the BackgroundValue.\n\n"
  "Finally, in advanced usage, it is possible to control how sorting of\n"
  "the output labels is performed. By default, the labels are assorted\n"
  "based on their associated input label values (SortByLabelValue).\n"
  "However, it is possible to arrange the labels based on their\n"
  "frequency of use (SortByLabelCount). Sorting is useful for gathering\n"
  "data statistics, or to extract and display the segmented objects that\n"
  "are the \"largest\" in the dataset.\n\n"
  "@sa\n"
  "vtkSurfaceNets3D vtkSurfaceNets2D vtkDiscreteFlyingEdges3D\n"
  "vtkDiscreteMarchingCubes\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPackLabels_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkPackLabels", // tp_name
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
  PyvtkPackLabels_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPackLabels_StaticNew()
{
  return vtkPackLabels::New();
}

PyObject *PyvtkPackLabels_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPackLabels_Type, PyvtkPackLabels_Methods,
    "vtkPackLabels",
 &PyvtkPackLabels_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPackLabels_SortBy_Type);
  PyVTKEnum_Add(&PyvtkPackLabels_SortBy_Type, "vtkPackLabels.SortBy");

  o = (PyObject *)&PyvtkPackLabels_SortBy_Type;
  if (PyDict_SetItemString(d, "SortBy", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkPackLabels_DefaultScalarType_Type);
  PyVTKEnum_Add(&PyvtkPackLabels_DefaultScalarType_Type, "vtkPackLabels.DefaultScalarType");

  o = (PyObject *)&PyvtkPackLabels_DefaultScalarType_Type;
  if (PyDict_SetItemString(d, "DefaultScalarType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "SORT_BY_LABEL_VALUE", vtkPackLabels::SORT_BY_LABEL_VALUE },
        { "SORT_BY_LABEL_COUNT", vtkPackLabels::SORT_BY_LABEL_COUNT },
      };

    o = PyvtkPackLabels_SortBy_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyvtkPackLabels_DefaultScalarType_FromEnum(vtkPackLabels::VTK_DEFAULT_TYPE);
  if (o)
  {
    PyDict_SetItemString(d, "VTK_DEFAULT_TYPE", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPackLabels(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPackLabels_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPackLabels", o) != 0)
  {
    Py_DECREF(o);
  }

}

