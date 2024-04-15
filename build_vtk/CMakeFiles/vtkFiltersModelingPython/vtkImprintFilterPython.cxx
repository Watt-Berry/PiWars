// python wrapper for vtkImprintFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImprintFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImprintFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkImprintFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImprintFilter_MergeTolType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkImprintFilter.MergeTolType", // tp_name
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
PyObject *PyvtkImprintFilter_MergeTolType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkImprintFilter_MergeTolType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImprintFilter_SpecifiedOutput_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkImprintFilter.SpecifiedOutput", // tp_name
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
PyObject *PyvtkImprintFilter_SpecifiedOutput_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkImprintFilter_SpecifiedOutput_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImprintFilter_PointInterpolationType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkImprintFilter.PointInterpolationType", // tp_name
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
PyObject *PyvtkImprintFilter_PointInterpolationType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkImprintFilter_PointInterpolationType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImprintFilter_DebugOutput_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkImprintFilter.DebugOutput", // tp_name
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
PyObject *PyvtkImprintFilter_DebugOutput_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkImprintFilter_DebugOutput_Type, static_cast<int>(val));
}


static PyObject *
PyvtkImprintFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImprintFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImprintFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImprintFilter *tempr = vtkImprintFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImprintFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImprintFilter::NewInstance());

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
PyvtkImprintFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImprintFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImprintFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetTargetConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetTargetConnection(temp0);
    }
    else
    {
      op->vtkImprintFilter::SetTargetConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetTargetConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetTargetConnection() :
      op->vtkImprintFilter::GetTargetConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetTargetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetTargetData(temp0);
    }
    else
    {
      op->vtkImprintFilter::SetTargetData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetTarget() :
      op->vtkImprintFilter::GetTarget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetImprintConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImprintConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetImprintConnection(temp0);
    }
    else
    {
      op->vtkImprintFilter::SetImprintConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetImprintConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImprintConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetImprintConnection() :
      op->vtkImprintFilter::GetImprintConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetImprintData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImprintData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetImprintData(temp0);
    }
    else
    {
      op->vtkImprintFilter::SetImprintData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetImprint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImprint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetImprint() :
      op->vtkImprintFilter::GetImprint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  double temp0;
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
      op->vtkImprintFilter::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkImprintFilter::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkImprintFilter::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkImprintFilter::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetMergeToleranceType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeToleranceType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeToleranceType(temp0);
    }
    else
    {
      op->vtkImprintFilter::SetMergeToleranceType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetMergeToleranceTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMergeToleranceTypeMinValue() :
      op->vtkImprintFilter::GetMergeToleranceTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetMergeToleranceTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMergeToleranceTypeMaxValue() :
      op->vtkImprintFilter::GetMergeToleranceTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetMergeToleranceType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMergeToleranceType() :
      op->vtkImprintFilter::GetMergeToleranceType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetMergeToleranceTypeToAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeToleranceTypeToAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMergeToleranceTypeToAbsolute();
    }
    else
    {
      op->vtkImprintFilter::SetMergeToleranceTypeToAbsolute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetMergeToleranceTypeToRelativeToProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeToleranceTypeToRelativeToProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMergeToleranceTypeToRelativeToProjection();
    }
    else
    {
      op->vtkImprintFilter::SetMergeToleranceTypeToRelativeToProjection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetMergeToleranceTypeToMinEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeToleranceTypeToMinEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMergeToleranceTypeToMinEdge();
    }
    else
    {
      op->vtkImprintFilter::SetMergeToleranceTypeToMinEdge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeTolerance(temp0);
    }
    else
    {
      op->vtkImprintFilter::SetMergeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetMergeToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeToleranceMinValue() :
      op->vtkImprintFilter::GetMergeToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetMergeToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeToleranceMaxValue() :
      op->vtkImprintFilter::GetMergeToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeTolerance() :
      op->vtkImprintFilter::GetMergeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputType(temp0);
    }
    else
    {
      op->vtkImprintFilter::SetOutputType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetOutputTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputTypeMinValue() :
      op->vtkImprintFilter::GetOutputTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetOutputTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputTypeMaxValue() :
      op->vtkImprintFilter::GetOutputTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputType() :
      op->vtkImprintFilter::GetOutputType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetOutputTypeToTargetCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToTargetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTypeToTargetCells();
    }
    else
    {
      op->vtkImprintFilter::SetOutputTypeToTargetCells();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetOutputTypeToImprintedCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToImprintedCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTypeToImprintedCells();
    }
    else
    {
      op->vtkImprintFilter::SetOutputTypeToImprintedCells();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetOutputTypeToProjectedImprint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToProjectedImprint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTypeToProjectedImprint();
    }
    else
    {
      op->vtkImprintFilter::SetOutputTypeToProjectedImprint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetOutputTypeToImprintedRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToImprintedRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTypeToImprintedRegion();
    }
    else
    {
      op->vtkImprintFilter::SetOutputTypeToImprintedRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetOutputTypeToMergedImprint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToMergedImprint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTypeToMergedImprint();
    }
    else
    {
      op->vtkImprintFilter::SetOutputTypeToMergedImprint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetBoundaryEdgeInsertion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryEdgeInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundaryEdgeInsertion(temp0);
    }
    else
    {
      op->vtkImprintFilter::SetBoundaryEdgeInsertion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetBoundaryEdgeInsertion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryEdgeInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBoundaryEdgeInsertion() :
      op->vtkImprintFilter::GetBoundaryEdgeInsertion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_BoundaryEdgeInsertionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundaryEdgeInsertionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundaryEdgeInsertionOn();
    }
    else
    {
      op->vtkImprintFilter::BoundaryEdgeInsertionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_BoundaryEdgeInsertionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundaryEdgeInsertionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundaryEdgeInsertionOff();
    }
    else
    {
      op->vtkImprintFilter::BoundaryEdgeInsertionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetPassCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

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
      op->vtkImprintFilter::SetPassCellData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetPassCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassCellData() :
      op->vtkImprintFilter::GetPassCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_PassCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellDataOn();
    }
    else
    {
      op->vtkImprintFilter::PassCellDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_PassCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellDataOff();
    }
    else
    {
      op->vtkImprintFilter::PassCellDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

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
      op->vtkImprintFilter::SetPassPointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassPointData() :
      op->vtkImprintFilter::GetPassPointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_PassPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointDataOn();
    }
    else
    {
      op->vtkImprintFilter::PassPointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_PassPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointDataOff();
    }
    else
    {
      op->vtkImprintFilter::PassPointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetPointInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointInterpolation(temp0);
    }
    else
    {
      op->vtkImprintFilter::SetPointInterpolation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetPointInterpolationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointInterpolationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointInterpolationMinValue() :
      op->vtkImprintFilter::GetPointInterpolationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetPointInterpolationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointInterpolationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointInterpolationMaxValue() :
      op->vtkImprintFilter::GetPointInterpolationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetPointInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointInterpolation() :
      op->vtkImprintFilter::GetPointInterpolation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetPointInterpolationToTargetEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointInterpolationToTargetEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPointInterpolationToTargetEdges();
    }
    else
    {
      op->vtkImprintFilter::SetPointInterpolationToTargetEdges();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetPointInterpolationToImprintEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointInterpolationToImprintEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPointInterpolationToImprintEdges();
    }
    else
    {
      op->vtkImprintFilter::SetPointInterpolationToImprintEdges();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetTriangulateOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulateOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTriangulateOutput(temp0);
    }
    else
    {
      op->vtkImprintFilter::SetTriangulateOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetTriangulateOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulateOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTriangulateOutput() :
      op->vtkImprintFilter::GetTriangulateOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_TriangulateOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulateOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TriangulateOutputOn();
    }
    else
    {
      op->vtkImprintFilter::TriangulateOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_TriangulateOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulateOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TriangulateOutputOff();
    }
    else
    {
      op->vtkImprintFilter::TriangulateOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetDebugOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDebugOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDebugOutputType(temp0);
    }
    else
    {
      op->vtkImprintFilter::SetDebugOutputType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetDebugOutputTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDebugOutputTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDebugOutputTypeMinValue() :
      op->vtkImprintFilter::GetDebugOutputTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetDebugOutputTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDebugOutputTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDebugOutputTypeMaxValue() :
      op->vtkImprintFilter::GetDebugOutputTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetDebugOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDebugOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDebugOutputType() :
      op->vtkImprintFilter::GetDebugOutputType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetDebugOutputTypeToNoDebugOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDebugOutputTypeToNoDebugOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDebugOutputTypeToNoDebugOutput();
    }
    else
    {
      op->vtkImprintFilter::SetDebugOutputTypeToNoDebugOutput();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetDebugOutputTypeToTriangulationInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDebugOutputTypeToTriangulationInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDebugOutputTypeToTriangulationInput();
    }
    else
    {
      op->vtkImprintFilter::SetDebugOutputTypeToTriangulationInput();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetDebugOutputTypeToTriangulationOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDebugOutputTypeToTriangulationOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDebugOutputTypeToTriangulationOutput();
    }
    else
    {
      op->vtkImprintFilter::SetDebugOutputTypeToTriangulationOutput();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_SetDebugCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDebugCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDebugCellId(temp0);
    }
    else
    {
      op->vtkImprintFilter::SetDebugCellId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetDebugCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDebugCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetDebugCellId() :
      op->vtkImprintFilter::GetDebugCellId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImprintFilter_GetDebugOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDebugOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImprintFilter *op = static_cast<vtkImprintFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetDebugOutput() :
      op->vtkImprintFilter::GetDebugOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImprintFilter_Methods[] = {
  {"IsTypeOf", PyvtkImprintFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImprintFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImprintFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImprintFilter\nC++: static vtkImprintFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImprintFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImprintFilter\nC++: vtkImprintFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImprintFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImprintFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTargetConnection", PyvtkImprintFilter_SetTargetConnection, METH_VARARGS,
   "SetTargetConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetTargetConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the first vtkPolyData input connection which defines the\nsurface mesh to imprint (i.e., the target).\n"},
  {"GetTargetConnection", PyvtkImprintFilter_GetTargetConnection, METH_VARARGS,
   "GetTargetConnection(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetTargetConnection()\n\n"},
  {"SetTargetData", PyvtkImprintFilter_SetTargetData, METH_VARARGS,
   "SetTargetData(self, target:vtkDataObject) -> None\nC++: void SetTargetData(vtkDataObject *target)\n\nSpecify the first vtkPolyData input which defines the surface\nmesh to imprint (i.e., the taregt). The imprint surface is\nprovided by the second input.\n"},
  {"GetTarget", PyvtkImprintFilter_GetTarget, METH_VARARGS,
   "GetTarget(self) -> vtkDataObject\nC++: vtkDataObject *GetTarget()\n\n"},
  {"SetImprintConnection", PyvtkImprintFilter_SetImprintConnection, METH_VARARGS,
   "SetImprintConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetImprintConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the a second vtkPolyData input connection which defines\nthe surface mesh with which to imprint the target (the target is\nprovided by the first input).\n"},
  {"GetImprintConnection", PyvtkImprintFilter_GetImprintConnection, METH_VARARGS,
   "GetImprintConnection(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetImprintConnection()\n\n"},
  {"SetImprintData", PyvtkImprintFilter_SetImprintData, METH_VARARGS,
   "SetImprintData(self, imprint:vtkDataObject) -> None\nC++: void SetImprintData(vtkDataObject *imprint)\n\nSpecify the a second vtkPolyData input which defines the surface\nmesh with which to imprint the target (i.e., the first input).\n"},
  {"GetImprint", PyvtkImprintFilter_GetImprint, METH_VARARGS,
   "GetImprint(self) -> vtkDataObject\nC++: vtkDataObject *GetImprint()\n\n"},
  {"SetTolerance", PyvtkImprintFilter_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nSpecify a projection tolerance which controls how close the\nimprint surface must be to the target to successfully imprint the\nsurface. This is an absolute value.\n"},
  {"GetToleranceMinValue", PyvtkImprintFilter_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> float\nC++: virtual double GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkImprintFilter_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> float\nC++: virtual double GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkImprintFilter_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {"SetMergeToleranceType", PyvtkImprintFilter_SetMergeToleranceType, METH_VARARGS,
   "SetMergeToleranceType(self, _arg:int) -> None\nC++: virtual void SetMergeToleranceType(int _arg)\n\nSpecify a tolerance which is used to determine whether two points\nare considered coincident to one another. This is important when\nperforming intersections and projections to reduce numerical\nissues.\n"},
  {"GetMergeToleranceTypeMinValue", PyvtkImprintFilter_GetMergeToleranceTypeMinValue, METH_VARARGS,
   "GetMergeToleranceTypeMinValue(self) -> int\nC++: virtual int GetMergeToleranceTypeMinValue()\n\n"},
  {"GetMergeToleranceTypeMaxValue", PyvtkImprintFilter_GetMergeToleranceTypeMaxValue, METH_VARARGS,
   "GetMergeToleranceTypeMaxValue(self) -> int\nC++: virtual int GetMergeToleranceTypeMaxValue()\n\n"},
  {"GetMergeToleranceType", PyvtkImprintFilter_GetMergeToleranceType, METH_VARARGS,
   "GetMergeToleranceType(self) -> int\nC++: virtual int GetMergeToleranceType()\n\n"},
  {"SetMergeToleranceTypeToAbsolute", PyvtkImprintFilter_SetMergeToleranceTypeToAbsolute, METH_VARARGS,
   "SetMergeToleranceTypeToAbsolute(self) -> None\nC++: void SetMergeToleranceTypeToAbsolute()\n\n"},
  {"SetMergeToleranceTypeToRelativeToProjection", PyvtkImprintFilter_SetMergeToleranceTypeToRelativeToProjection, METH_VARARGS,
   "SetMergeToleranceTypeToRelativeToProjection(self) -> None\nC++: void SetMergeToleranceTypeToRelativeToProjection()\n\n"},
  {"SetMergeToleranceTypeToMinEdge", PyvtkImprintFilter_SetMergeToleranceTypeToMinEdge, METH_VARARGS,
   "SetMergeToleranceTypeToMinEdge(self) -> None\nC++: void SetMergeToleranceTypeToMinEdge()\n\n"},
  {"SetMergeTolerance", PyvtkImprintFilter_SetMergeTolerance, METH_VARARGS,
   "SetMergeTolerance(self, _arg:float) -> None\nC++: virtual void SetMergeTolerance(double _arg)\n\n"},
  {"GetMergeToleranceMinValue", PyvtkImprintFilter_GetMergeToleranceMinValue, METH_VARARGS,
   "GetMergeToleranceMinValue(self) -> float\nC++: virtual double GetMergeToleranceMinValue()\n\n"},
  {"GetMergeToleranceMaxValue", PyvtkImprintFilter_GetMergeToleranceMaxValue, METH_VARARGS,
   "GetMergeToleranceMaxValue(self) -> float\nC++: virtual double GetMergeToleranceMaxValue()\n\n"},
  {"GetMergeTolerance", PyvtkImprintFilter_GetMergeTolerance, METH_VARARGS,
   "GetMergeTolerance(self) -> float\nC++: virtual double GetMergeTolerance()\n\n"},
  {"SetOutputType", PyvtkImprintFilter_SetOutputType, METH_VARARGS,
   "SetOutputType(self, _arg:int) -> None\nC++: virtual void SetOutputType(int _arg)\n\nControl what is output by the filter. This can be useful for\ndebugging or to extract portions of the data. The choices are:\nTARGET_CELLS - output the target cells in contact (relative to\nthe tolerance) of the imprint mesh; IMPRINTED_CELLS - output the\ntarget's imprinted cells after intersection and triangulation\nwith the imprint mesh; PROJECTED_IMPRINT - project the imprint\nmesh onto the target mesh, modififying the imprint mesh point\ncoordinates to lie on the target mesh; IMPRINTED_REGION - extract\njust the area of contact between the target and imprint; and\nMERGED_IMPRINT - merge the target and imprint mesh after the\nimprint operation. By default, MERGED_IMPRINT is produced.\n"},
  {"GetOutputTypeMinValue", PyvtkImprintFilter_GetOutputTypeMinValue, METH_VARARGS,
   "GetOutputTypeMinValue(self) -> int\nC++: virtual int GetOutputTypeMinValue()\n\n"},
  {"GetOutputTypeMaxValue", PyvtkImprintFilter_GetOutputTypeMaxValue, METH_VARARGS,
   "GetOutputTypeMaxValue(self) -> int\nC++: virtual int GetOutputTypeMaxValue()\n\n"},
  {"GetOutputType", PyvtkImprintFilter_GetOutputType, METH_VARARGS,
   "GetOutputType(self) -> int\nC++: virtual int GetOutputType()\n\n"},
  {"SetOutputTypeToTargetCells", PyvtkImprintFilter_SetOutputTypeToTargetCells, METH_VARARGS,
   "SetOutputTypeToTargetCells(self) -> None\nC++: void SetOutputTypeToTargetCells()\n\n"},
  {"SetOutputTypeToImprintedCells", PyvtkImprintFilter_SetOutputTypeToImprintedCells, METH_VARARGS,
   "SetOutputTypeToImprintedCells(self) -> None\nC++: void SetOutputTypeToImprintedCells()\n\n"},
  {"SetOutputTypeToProjectedImprint", PyvtkImprintFilter_SetOutputTypeToProjectedImprint, METH_VARARGS,
   "SetOutputTypeToProjectedImprint(self) -> None\nC++: void SetOutputTypeToProjectedImprint()\n\n"},
  {"SetOutputTypeToImprintedRegion", PyvtkImprintFilter_SetOutputTypeToImprintedRegion, METH_VARARGS,
   "SetOutputTypeToImprintedRegion(self) -> None\nC++: void SetOutputTypeToImprintedRegion()\n\n"},
  {"SetOutputTypeToMergedImprint", PyvtkImprintFilter_SetOutputTypeToMergedImprint, METH_VARARGS,
   "SetOutputTypeToMergedImprint(self) -> None\nC++: void SetOutputTypeToMergedImprint()\n\n"},
  {"SetBoundaryEdgeInsertion", PyvtkImprintFilter_SetBoundaryEdgeInsertion, METH_VARARGS,
   "SetBoundaryEdgeInsertion(self, _arg:bool) -> None\nC++: virtual void SetBoundaryEdgeInsertion(bool _arg)\n\nIndicate whether to insert just the boundary edges of the imprint\nmesh (i.e., do not insert the interior edges). (Boundary edges\nare mesh edges used by exactly one cell.) If inserting boundary\nedges, the imprint operation is similar to a cookie cutter\noperation. By default, boundary edge insertion is off.\n"},
  {"GetBoundaryEdgeInsertion", PyvtkImprintFilter_GetBoundaryEdgeInsertion, METH_VARARGS,
   "GetBoundaryEdgeInsertion(self) -> bool\nC++: virtual bool GetBoundaryEdgeInsertion()\n\n"},
  {"BoundaryEdgeInsertionOn", PyvtkImprintFilter_BoundaryEdgeInsertionOn, METH_VARARGS,
   "BoundaryEdgeInsertionOn(self) -> None\nC++: virtual void BoundaryEdgeInsertionOn()\n\n"},
  {"BoundaryEdgeInsertionOff", PyvtkImprintFilter_BoundaryEdgeInsertionOff, METH_VARARGS,
   "BoundaryEdgeInsertionOff(self) -> None\nC++: virtual void BoundaryEdgeInsertionOff()\n\n"},
  {"SetPassCellData", PyvtkImprintFilter_SetPassCellData, METH_VARARGS,
   "SetPassCellData(self, _arg:bool) -> None\nC++: virtual void SetPassCellData(bool _arg)\n\nIndicate whether cell data from the input target is to be passed\nthrough to the output mesh. By default, PassCellData is enabled.\n"},
  {"GetPassCellData", PyvtkImprintFilter_GetPassCellData, METH_VARARGS,
   "GetPassCellData(self) -> bool\nC++: virtual bool GetPassCellData()\n\n"},
  {"PassCellDataOn", PyvtkImprintFilter_PassCellDataOn, METH_VARARGS,
   "PassCellDataOn(self) -> None\nC++: virtual void PassCellDataOn()\n\n"},
  {"PassCellDataOff", PyvtkImprintFilter_PassCellDataOff, METH_VARARGS,
   "PassCellDataOff(self) -> None\nC++: virtual void PassCellDataOff()\n\n"},
  {"SetPassPointData", PyvtkImprintFilter_SetPassPointData, METH_VARARGS,
   "SetPassPointData(self, _arg:bool) -> None\nC++: virtual void SetPassPointData(bool _arg)\n\nIndicate whether point data from the input target mesh and the\nimprint mesh are to be passed through and/or interpolated to the\noutput mesh. By default, PassPointData is enabled. Note: both the\ninput mesh points and the imprint points must have identical\npoint data. Otherwise, a set intersection operation will be\nperformed to process just the point data arrays common to both\nthe mesh point data and imprint point data.\n"},
  {"GetPassPointData", PyvtkImprintFilter_GetPassPointData, METH_VARARGS,
   "GetPassPointData(self) -> bool\nC++: virtual bool GetPassPointData()\n\n"},
  {"PassPointDataOn", PyvtkImprintFilter_PassPointDataOn, METH_VARARGS,
   "PassPointDataOn(self) -> None\nC++: virtual void PassPointDataOn()\n\n"},
  {"PassPointDataOff", PyvtkImprintFilter_PassPointDataOff, METH_VARARGS,
   "PassPointDataOff(self) -> None\nC++: virtual void PassPointDataOff()\n\n"},
  {"SetPointInterpolation", PyvtkImprintFilter_SetPointInterpolation, METH_VARARGS,
   "SetPointInterpolation(self, _arg:int) -> None\nC++: virtual void SetPointInterpolation(int _arg)\n\nIf PassPointData is on, indicate how new point data is to\ngenerated at the intersection points between the input target\nmesh edges and the imprint edges By default, PointInterpolation\nis set to USE_TARGET_EDGES.\n"},
  {"GetPointInterpolationMinValue", PyvtkImprintFilter_GetPointInterpolationMinValue, METH_VARARGS,
   "GetPointInterpolationMinValue(self) -> int\nC++: virtual int GetPointInterpolationMinValue()\n\n"},
  {"GetPointInterpolationMaxValue", PyvtkImprintFilter_GetPointInterpolationMaxValue, METH_VARARGS,
   "GetPointInterpolationMaxValue(self) -> int\nC++: virtual int GetPointInterpolationMaxValue()\n\n"},
  {"GetPointInterpolation", PyvtkImprintFilter_GetPointInterpolation, METH_VARARGS,
   "GetPointInterpolation(self) -> int\nC++: virtual int GetPointInterpolation()\n\n"},
  {"SetPointInterpolationToTargetEdges", PyvtkImprintFilter_SetPointInterpolationToTargetEdges, METH_VARARGS,
   "SetPointInterpolationToTargetEdges(self) -> None\nC++: void SetPointInterpolationToTargetEdges()\n\n"},
  {"SetPointInterpolationToImprintEdges", PyvtkImprintFilter_SetPointInterpolationToImprintEdges, METH_VARARGS,
   "SetPointInterpolationToImprintEdges(self) -> None\nC++: void SetPointInterpolationToImprintEdges()\n\n"},
  {"SetTriangulateOutput", PyvtkImprintFilter_SetTriangulateOutput, METH_VARARGS,
   "SetTriangulateOutput(self, _arg:bool) -> None\nC++: virtual void SetTriangulateOutput(bool _arg)\n\nIndicate whether the output should be triangulated. By default\n(i.e., TriangulateOutputOff) the imprint cells, if not triangles\nnor intersect target cell boundaries, will not be triangulated.\n(Cells in the transition region are always triangulated because\nthey are frequently concave.)\n"},
  {"GetTriangulateOutput", PyvtkImprintFilter_GetTriangulateOutput, METH_VARARGS,
   "GetTriangulateOutput(self) -> bool\nC++: virtual bool GetTriangulateOutput()\n\n"},
  {"TriangulateOutputOn", PyvtkImprintFilter_TriangulateOutputOn, METH_VARARGS,
   "TriangulateOutputOn(self) -> None\nC++: virtual void TriangulateOutputOn()\n\n"},
  {"TriangulateOutputOff", PyvtkImprintFilter_TriangulateOutputOff, METH_VARARGS,
   "TriangulateOutputOff(self) -> None\nC++: virtual void TriangulateOutputOff()\n\n"},
  {"SetDebugOutputType", PyvtkImprintFilter_SetDebugOutputType, METH_VARARGS,
   "SetDebugOutputType(self, _arg:int) -> None\nC++: virtual void SetDebugOutputType(int _arg)\n\nThe following methods support debugging. By default,\nNO_DEBUG_OUTPUT is produced and the second output of this filter\nis empty. If TRIANGULATION_INPUT is set, then the input points\nand edges contained by the target DebugCellId are output to the\nsecond output to this filter.  If TRIANGULATION_OUTPUT is set,\nthen the output triangulation for the specified target cellId is\nplaced in a second output to this filter.\n"},
  {"GetDebugOutputTypeMinValue", PyvtkImprintFilter_GetDebugOutputTypeMinValue, METH_VARARGS,
   "GetDebugOutputTypeMinValue(self) -> int\nC++: virtual int GetDebugOutputTypeMinValue()\n\n"},
  {"GetDebugOutputTypeMaxValue", PyvtkImprintFilter_GetDebugOutputTypeMaxValue, METH_VARARGS,
   "GetDebugOutputTypeMaxValue(self) -> int\nC++: virtual int GetDebugOutputTypeMaxValue()\n\n"},
  {"GetDebugOutputType", PyvtkImprintFilter_GetDebugOutputType, METH_VARARGS,
   "GetDebugOutputType(self) -> int\nC++: virtual int GetDebugOutputType()\n\n"},
  {"SetDebugOutputTypeToNoDebugOutput", PyvtkImprintFilter_SetDebugOutputTypeToNoDebugOutput, METH_VARARGS,
   "SetDebugOutputTypeToNoDebugOutput(self) -> None\nC++: void SetDebugOutputTypeToNoDebugOutput()\n\n"},
  {"SetDebugOutputTypeToTriangulationInput", PyvtkImprintFilter_SetDebugOutputTypeToTriangulationInput, METH_VARARGS,
   "SetDebugOutputTypeToTriangulationInput(self) -> None\nC++: void SetDebugOutputTypeToTriangulationInput()\n\n"},
  {"SetDebugOutputTypeToTriangulationOutput", PyvtkImprintFilter_SetDebugOutputTypeToTriangulationOutput, METH_VARARGS,
   "SetDebugOutputTypeToTriangulationOutput(self) -> None\nC++: void SetDebugOutputTypeToTriangulationOutput()\n\n"},
  {"SetDebugCellId", PyvtkImprintFilter_SetDebugCellId, METH_VARARGS,
   "SetDebugCellId(self, _arg:int) -> None\nC++: virtual void SetDebugCellId(vtkIdType _arg)\n\n"},
  {"GetDebugCellId", PyvtkImprintFilter_GetDebugCellId, METH_VARARGS,
   "GetDebugCellId(self) -> int\nC++: virtual vtkIdType GetDebugCellId()\n\n"},
  {"GetDebugOutput", PyvtkImprintFilter_GetDebugOutput, METH_VARARGS,
   "GetDebugOutput(self) -> vtkPolyData\nC++: vtkPolyData *GetDebugOutput()\n\nGet the output data (in the second output, if the DebugOutput !=\nNO_DEBUG_OUTPUT).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImprintFilter_Doc =
  "vtkImprintFilter - Imprint the contact surface of one object onto\nanother surface\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This filter imprints the contact surface of one vtkPolyData mesh onto\n"
  "a second, input vtkPolyData mesh. There are two inputs to the filter:\n"
  "the target, which is the surface to be imprinted, and the imprint,\n"
  "which is the object imprinting the target.\n\n"
  "A high level overview of the algorithm is as follows. 1) The target\n"
  "cells are segregated into two subsets: those that may intersect the\n"
  "imprint surface (the candidate cells determined by bounding box\n"
  "checks), and those that do not. 2) The non-candidates are sent to the\n"
  "output, the candidate intersection cells are further processed -\n"
  "eventually they will be triangulated as a result of contact with the\n"
  "imprint, with the result of the triangulation appended to the output.\n"
  "3) The imprint points are projected onto the candidate cells,\n"
  "determining a classification (on a target point, on a target edge,\n"
  "interior to a target cell, outside the target).  4) The non-outside\n"
  "imprint points are associated with one or more target cells.\n"
  "5) The imprint edges are intersected with the target cell edges,\n"
  "   producing additional points associated with the the candidate\n"
  "   cells, as well as \"fragments\" or portions of edges associated with\n"
  "the candidate target cells. 6) On a per-candidate-target-cell basis,\n"
  "   the points and edge fragments associated with that cell are used\n"
  "   to triangulate the cell.\n"
  "7) Finally, the triangulated target cells are appended to the output.\n\n"
  "Several options exist to specify how to produce an output cell data\n"
  "array that indicates whether the output cells are in the imprinted\n"
  "area. If enabled, this output vtkSignedCharArray will have a value=1\n"
  "for cells that are in the imprinted area. Otherwise, the value=0 is\n"
  "indicating the cell is not in contact with the imprinted area. The\n"
  "name of this cell data array is \"ImprintedCells\".\n\n"
  "The filter also has the option to pass through and generate point and\n"
  "cell data.  If PassCellData is enabled, then the cell data associated\n"
  "with the cropped cells, or cells passed through from the input mesh,\n"
  "are passed through to the output. If PassPointData is enabled, then\n"
  "in similar fashion the point data is passed through; however new\n"
  "points generated by intersection may have point data interpolated in\n"
  "one of two ways. First, the target mesh edges are interpolated at the\n"
  "new intersection points to generate point data, or the imprint edges\n"
  "are interpolated at the new intersection points to generate point\n"
  "data. Note: for PassPointData and point interpolation to function,\n"
  "the filter requires that the point data attributes (from the target\n"
  "mesh and imprint mesh) are exactly the same. If they are not, then a\n"
  "set intersection operation is performed that uses the point data\n"
  "arrays common to both the target and imprint meshes.\n\n"
  "Some notes:\n"
  "-- The algorithm assumes that the input target and imprint cells are\n"
  "   convex.\n"
  "-- If performing a PROJECTED_IMPRINT, the output is the imprint mesh\n"
  "   with the point coordinates modified by projecting the imprint\n"
  "   points onto the target. If the profection of an imprint point onto\n"
  "the target is unsuccessful, the imprint point coordinates are not\n"
  "   modified.\n"
  "-- If performing a MERGED_IMPRINT, the number of output points is\n"
  "   (numTargetPts + numImprintPts + numEdgeIntPts).\n"
  "-- Not all of the output points may be used, for example if an\n"
  "   imprint point is coincident (within the tolerance) of a target\n"
  "   point, the target point replaces the imprint point.\n"
  "-- Candidate cells which may reside within the bounding box of the\n"
  "   imprint but may not actually intersect the imprint will be\n"
  "   appended to the output without triangulation.\n"
  "-- Candidate cells that are intersected will be triangulated: i.e.,\n"
  "   triangles will be produced and appended to the output.\n"
  "-- Triangulation requires combining the points and edge fragments\n"
  "   associated with each target candidate cell, as well as the\n"
  "   candidate cell's defining points and edges, to produce the final\n"
  "   triangulation.\n"
  "-- Portions of the algorithm are SMP threaded. For example, steps #1\n"
  "   and #2 (candidate segregation); point projection step #3; cell\n"
  "   triangulation step #6. Future implementations may further\n"
  "   parallelize the algorithm.\n"
  "-- The algorithm produces an output cell data array that indicates\n"
  "   which output cells are in the imprinted area. This\n"
  "   vtkSignedCharArray has a value=0 for cells that were originally\n"
  "   target cells; a value=2 for output cells that are in the imprinted\n"
  "region; and a value=1 for cells that are in the transition region\n"
  "   (between target and imprinted cells). The name of this cell data\n"
  "   array is \"ImprintedCells\".\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImprintFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkImprintFilter", // tp_name
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
  PyvtkImprintFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImprintFilter_StaticNew()
{
  return vtkImprintFilter::New();
}

PyObject *PyvtkImprintFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImprintFilter_Type, PyvtkImprintFilter_Methods,
    "vtkImprintFilter",
 &PyvtkImprintFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkImprintFilter_MergeTolType_Type);
  PyVTKEnum_Add(&PyvtkImprintFilter_MergeTolType_Type, "vtkImprintFilter.MergeTolType");

  o = (PyObject *)&PyvtkImprintFilter_MergeTolType_Type;
  if (PyDict_SetItemString(d, "MergeTolType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkImprintFilter_SpecifiedOutput_Type);
  PyVTKEnum_Add(&PyvtkImprintFilter_SpecifiedOutput_Type, "vtkImprintFilter.SpecifiedOutput");

  o = (PyObject *)&PyvtkImprintFilter_SpecifiedOutput_Type;
  if (PyDict_SetItemString(d, "SpecifiedOutput", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkImprintFilter_PointInterpolationType_Type);
  PyVTKEnum_Add(&PyvtkImprintFilter_PointInterpolationType_Type, "vtkImprintFilter.PointInterpolationType");

  o = (PyObject *)&PyvtkImprintFilter_PointInterpolationType_Type;
  if (PyDict_SetItemString(d, "PointInterpolationType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkImprintFilter_DebugOutput_Type);
  PyVTKEnum_Add(&PyvtkImprintFilter_DebugOutput_Type, "vtkImprintFilter.DebugOutput");

  o = (PyObject *)&PyvtkImprintFilter_DebugOutput_Type;
  if (PyDict_SetItemString(d, "DebugOutput", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkImprintFilter::MergeTolType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "ABSOLUTE_TOLERANCE", vtkImprintFilter::ABSOLUTE_TOLERANCE },
        { "RELATIVE_TO_PROJECTION_TOLERANCE", vtkImprintFilter::RELATIVE_TO_PROJECTION_TOLERANCE },
        { "RELATIVE_TO_MIN_EDGE_LENGTH", vtkImprintFilter::RELATIVE_TO_MIN_EDGE_LENGTH },
      };

    o = PyvtkImprintFilter_MergeTolType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkImprintFilter::SpecifiedOutput cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "TARGET_CELLS", vtkImprintFilter::TARGET_CELLS },
        { "IMPRINTED_CELLS", vtkImprintFilter::IMPRINTED_CELLS },
        { "PROJECTED_IMPRINT", vtkImprintFilter::PROJECTED_IMPRINT },
        { "IMPRINTED_REGION", vtkImprintFilter::IMPRINTED_REGION },
        { "MERGED_IMPRINT", vtkImprintFilter::MERGED_IMPRINT },
      };

    o = PyvtkImprintFilter_SpecifiedOutput_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkImprintFilter::PointInterpolationType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "USE_TARGET_EDGES", vtkImprintFilter::USE_TARGET_EDGES },
        { "USE_IMPRINT_EDGES", vtkImprintFilter::USE_IMPRINT_EDGES },
      };

    o = PyvtkImprintFilter_PointInterpolationType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkImprintFilter::DebugOutput cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "NO_DEBUG_OUTPUT", vtkImprintFilter::NO_DEBUG_OUTPUT },
        { "TRIANGULATION_INPUT", vtkImprintFilter::TRIANGULATION_INPUT },
        { "TRIANGULATION_OUTPUT", vtkImprintFilter::TRIANGULATION_OUTPUT },
      };

    o = PyvtkImprintFilter_DebugOutput_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImprintFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImprintFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImprintFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

