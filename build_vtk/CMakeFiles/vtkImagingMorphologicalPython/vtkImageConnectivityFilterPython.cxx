// python wrapper for vtkImageConnectivityFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageConnectivityFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageConnectivityFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkImageConnectivityFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageConnectivityFilter_LabelModeEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingMorphological.vtkImageConnectivityFilter.LabelModeEnum", // tp_name
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
PyObject *PyvtkImageConnectivityFilter_LabelModeEnum_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkImageConnectivityFilter_LabelModeEnum_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageConnectivityFilter_ExtractionModeEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingMorphological.vtkImageConnectivityFilter.ExtractionModeEnum", // tp_name
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
PyObject *PyvtkImageConnectivityFilter_ExtractionModeEnum_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkImageConnectivityFilter_ExtractionModeEnum_Type, static_cast<int>(val));
}


static PyObject *
PyvtkImageConnectivityFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageConnectivityFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageConnectivityFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageConnectivityFilter *tempr = vtkImageConnectivityFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageConnectivityFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageConnectivityFilter::NewInstance());

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
PyvtkImageConnectivityFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageConnectivityFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageConnectivityFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetSeedConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeedConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSeedConnection(temp0);
    }
    else
    {
      op->vtkImageConnectivityFilter::SetSeedConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetSeedConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetSeedConnection() :
      op->vtkImageConnectivityFilter::GetSeedConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetSeedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetSeedData(temp0);
    }
    else
    {
      op->vtkImageConnectivityFilter::SetSeedData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetStencilConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetStencilConnection(temp0);
    }
    else
    {
      op->vtkImageConnectivityFilter::SetStencilConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetStencilConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencilConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetStencilConnection() :
      op->vtkImageConnectivityFilter::GetStencilConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetStencilData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
  {
    if (ap.IsBound())
    {
      op->SetStencilData(temp0);
    }
    else
    {
      op->vtkImageConnectivityFilter::SetStencilData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetLabelScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkImageConnectivityFilter::SetLabelScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetLabelScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelScalarTypeToShort();
    }
    else
    {
      op->vtkImageConnectivityFilter::SetLabelScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetLabelScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkImageConnectivityFilter::SetLabelScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetLabelScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelScalarTypeToInt();
    }
    else
    {
      op->vtkImageConnectivityFilter::SetLabelScalarTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetLabelScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLabelScalarTypeAsString() :
      op->vtkImageConnectivityFilter::GetLabelScalarTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetLabelScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelScalarType(temp0);
    }
    else
    {
      op->vtkImageConnectivityFilter::SetLabelScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetLabelScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelScalarType() :
      op->vtkImageConnectivityFilter::GetLabelScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetLabelModeToSeedScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToSeedScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToSeedScalar();
    }
    else
    {
      op->vtkImageConnectivityFilter::SetLabelModeToSeedScalar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetLabelModeToConstantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToConstantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToConstantValue();
    }
    else
    {
      op->vtkImageConnectivityFilter::SetLabelModeToConstantValue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetLabelModeToSizeRank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToSizeRank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToSizeRank();
    }
    else
    {
      op->vtkImageConnectivityFilter::SetLabelModeToSizeRank();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetLabelModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLabelModeAsString() :
      op->vtkImageConnectivityFilter::GetLabelModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelMode(temp0);
    }
    else
    {
      op->vtkImageConnectivityFilter::SetLabelMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelMode() :
      op->vtkImageConnectivityFilter::GetLabelMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetExtractionModeToSeededRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToSeededRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToSeededRegions();
    }
    else
    {
      op->vtkImageConnectivityFilter::SetExtractionModeToSeededRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetExtractionModeToAllRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToAllRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToAllRegions();
    }
    else
    {
      op->vtkImageConnectivityFilter::SetExtractionModeToAllRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetExtractionModeToLargestRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToLargestRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToLargestRegion();
    }
    else
    {
      op->vtkImageConnectivityFilter::SetExtractionModeToLargestRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetExtractionModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetExtractionModeAsString() :
      op->vtkImageConnectivityFilter::GetExtractionModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionMode(temp0);
    }
    else
    {
      op->vtkImageConnectivityFilter::SetExtractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionMode() :
      op->vtkImageConnectivityFilter::GetExtractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetLabelConstantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelConstantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelConstantValue(temp0);
    }
    else
    {
      op->vtkImageConnectivityFilter::SetLabelConstantValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetLabelConstantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelConstantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelConstantValue() :
      op->vtkImageConnectivityFilter::GetLabelConstantValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetNumberOfExtractedRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfExtractedRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfExtractedRegions() :
      op->vtkImageConnectivityFilter::GetNumberOfExtractedRegions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetExtractedRegionLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractedRegionLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetExtractedRegionLabels() :
      op->vtkImageConnectivityFilter::GetExtractedRegionLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetExtractedRegionSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractedRegionSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetExtractedRegionSizes() :
      op->vtkImageConnectivityFilter::GetExtractedRegionSizes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetExtractedRegionSeedIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractedRegionSeedIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetExtractedRegionSeedIds() :
      op->vtkImageConnectivityFilter::GetExtractedRegionSeedIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetExtractedRegionExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractedRegionExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetExtractedRegionExtents() :
      op->vtkImageConnectivityFilter::GetExtractedRegionExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetGenerateRegionExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateRegionExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateRegionExtents(temp0);
    }
    else
    {
      op->vtkImageConnectivityFilter::SetGenerateRegionExtents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GenerateRegionExtentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRegionExtentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateRegionExtentsOn();
    }
    else
    {
      op->vtkImageConnectivityFilter::GenerateRegionExtentsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GenerateRegionExtentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRegionExtentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateRegionExtentsOff();
    }
    else
    {
      op->vtkImageConnectivityFilter::GenerateRegionExtentsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetGenerateRegionExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateRegionExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateRegionExtents() :
      op->vtkImageConnectivityFilter::GetGenerateRegionExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetSizeRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSizeRange(temp0, temp1);
    }
    else
    {
      op->vtkImageConnectivityFilter::SetSizeRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageConnectivityFilter_SetSizeRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  const size_t size0 = 2;
  long long temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSizeRange(temp0);
    }
    else
    {
      op->vtkImageConnectivityFilter::SetSizeRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageConnectivityFilter_SetSizeRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageConnectivityFilter_SetSizeRange_s1(self, args);
    case 1:
      return PyvtkImageConnectivityFilter_SetSizeRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSizeRange");
  return nullptr;
}


static PyObject *
PyvtkImageConnectivityFilter_GetSizeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long *tempr = (ap.IsBound() ?
      op->GetSizeRange() :
      op->vtkImageConnectivityFilter::GetSizeRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0, temp1);
    }
    else
    {
      op->vtkImageConnectivityFilter::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageConnectivityFilter_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0);
    }
    else
    {
      op->vtkImageConnectivityFilter::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageConnectivityFilter_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageConnectivityFilter_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkImageConnectivityFilter_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}


static PyObject *
PyvtkImageConnectivityFilter_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkImageConnectivityFilter::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_SetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveComponent(temp0);
    }
    else
    {
      op->vtkImageConnectivityFilter::SetActiveComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConnectivityFilter_GetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConnectivityFilter *op = static_cast<vtkImageConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponent() :
      op->vtkImageConnectivityFilter::GetActiveComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageConnectivityFilter_Methods[] = {
  {"IsTypeOf", PyvtkImageConnectivityFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageConnectivityFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageConnectivityFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageConnectivityFilter\nC++: static vtkImageConnectivityFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageConnectivityFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageConnectivityFilter\nC++: vtkImageConnectivityFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageConnectivityFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageConnectivityFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSeedConnection", PyvtkImageConnectivityFilter_SetSeedConnection, METH_VARARGS,
   "SetSeedConnection(self, port:vtkAlgorithmOutput) -> None\nC++: void SetSeedConnection(vtkAlgorithmOutput *port)\n\nThe input for seed locations (input port 1). Each point in the\nsupplied data set will be used as a seed, unless the data set has\nscalars, in which case only the points with scalar values that\nare not equal to zero will be used as seeds.\n"},
  {"GetSeedConnection", PyvtkImageConnectivityFilter_GetSeedConnection, METH_VARARGS,
   "GetSeedConnection(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetSeedConnection()\n\n"},
  {"SetSeedData", PyvtkImageConnectivityFilter_SetSeedData, METH_VARARGS,
   "SetSeedData(self, data:vtkDataSet) -> None\nC++: void SetSeedData(vtkDataSet *data)\n\n"},
  {"SetStencilConnection", PyvtkImageConnectivityFilter_SetStencilConnection, METH_VARARGS,
   "SetStencilConnection(self, port:vtkAlgorithmOutput) -> None\nC++: void SetStencilConnection(vtkAlgorithmOutput *port)\n\nThe input for a stencil (input port 2). The output labels will be\nrestricted to the region inside the stencil, as if no input\nvoxels existed outside the stencil.  This allows you to apply\nthis filter within an arbitrary region of interest.\n"},
  {"GetStencilConnection", PyvtkImageConnectivityFilter_GetStencilConnection, METH_VARARGS,
   "GetStencilConnection(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetStencilConnection()\n\n"},
  {"SetStencilData", PyvtkImageConnectivityFilter_SetStencilData, METH_VARARGS,
   "SetStencilData(self, data:vtkImageStencilData) -> None\nC++: void SetStencilData(vtkImageStencilData *data)\n\n"},
  {"SetLabelScalarTypeToUnsignedChar", PyvtkImageConnectivityFilter_SetLabelScalarTypeToUnsignedChar, METH_VARARGS,
   "SetLabelScalarTypeToUnsignedChar(self) -> None\nC++: void SetLabelScalarTypeToUnsignedChar()\n\nSet the scalar type for the output label image. This should be\none of UnsignedChar, Short, UnsignedShort, or Int depending on\nhow many labels are expected.  The default is UnsignedChar, which\nallows for 255 label values.  If the total number of regions is\ngreater than the maximum label value N, then only the largest N\nregions will be kept and the rest will be discarded.\n"},
  {"SetLabelScalarTypeToShort", PyvtkImageConnectivityFilter_SetLabelScalarTypeToShort, METH_VARARGS,
   "SetLabelScalarTypeToShort(self) -> None\nC++: void SetLabelScalarTypeToShort()\n\n"},
  {"SetLabelScalarTypeToUnsignedShort", PyvtkImageConnectivityFilter_SetLabelScalarTypeToUnsignedShort, METH_VARARGS,
   "SetLabelScalarTypeToUnsignedShort(self) -> None\nC++: void SetLabelScalarTypeToUnsignedShort()\n\n"},
  {"SetLabelScalarTypeToInt", PyvtkImageConnectivityFilter_SetLabelScalarTypeToInt, METH_VARARGS,
   "SetLabelScalarTypeToInt(self) -> None\nC++: void SetLabelScalarTypeToInt()\n\n"},
  {"GetLabelScalarTypeAsString", PyvtkImageConnectivityFilter_GetLabelScalarTypeAsString, METH_VARARGS,
   "GetLabelScalarTypeAsString(self) -> str\nC++: const char *GetLabelScalarTypeAsString()\n\n"},
  {"SetLabelScalarType", PyvtkImageConnectivityFilter_SetLabelScalarType, METH_VARARGS,
   "SetLabelScalarType(self, _arg:int) -> None\nC++: virtual void SetLabelScalarType(int _arg)\n\n"},
  {"GetLabelScalarType", PyvtkImageConnectivityFilter_GetLabelScalarType, METH_VARARGS,
   "GetLabelScalarType(self) -> int\nC++: virtual int GetLabelScalarType()\n\n"},
  {"SetLabelModeToSeedScalar", PyvtkImageConnectivityFilter_SetLabelModeToSeedScalar, METH_VARARGS,
   "SetLabelModeToSeedScalar(self) -> None\nC++: void SetLabelModeToSeedScalar()\n\nSet the mode for applying labels to the output. Labeling by\nSeedScalar uses the scalars from the seeds as labels, if present,\nor the regions will be labeled consecutively starting at 1, if\nthe seeds have no scalars. Labeling by SizeRank means that the\nlargest region is labeled 1 and other regions are labeled\nconsecutively in order of decreasing size (if there is a tie,\nthen the seed point ID is used as a tiebreaker).  Finally,\nConstant means that all regions will have the value of\nSetLabelConstantValue().  The default is to label using the seed\nscalars, if present, or to label consecutively, if no seed\nscalars are present.\n"},
  {"SetLabelModeToConstantValue", PyvtkImageConnectivityFilter_SetLabelModeToConstantValue, METH_VARARGS,
   "SetLabelModeToConstantValue(self) -> None\nC++: void SetLabelModeToConstantValue()\n\n"},
  {"SetLabelModeToSizeRank", PyvtkImageConnectivityFilter_SetLabelModeToSizeRank, METH_VARARGS,
   "SetLabelModeToSizeRank(self) -> None\nC++: void SetLabelModeToSizeRank()\n\n"},
  {"GetLabelModeAsString", PyvtkImageConnectivityFilter_GetLabelModeAsString, METH_VARARGS,
   "GetLabelModeAsString(self) -> str\nC++: const char *GetLabelModeAsString()\n\n"},
  {"SetLabelMode", PyvtkImageConnectivityFilter_SetLabelMode, METH_VARARGS,
   "SetLabelMode(self, _arg:int) -> None\nC++: virtual void SetLabelMode(int _arg)\n\n"},
  {"GetLabelMode", PyvtkImageConnectivityFilter_GetLabelMode, METH_VARARGS,
   "GetLabelMode(self) -> int\nC++: virtual int GetLabelMode()\n\n"},
  {"SetExtractionModeToSeededRegions", PyvtkImageConnectivityFilter_SetExtractionModeToSeededRegions, METH_VARARGS,
   "SetExtractionModeToSeededRegions(self) -> None\nC++: void SetExtractionModeToSeededRegions()\n\nSet which regions to output from this filter. This can be all the\nregions, just the seeded regions, or the largest region (which\nwill be the largest seeded region, if there are seeds). The\ndefault is to output all the seeded regions, if there are seeds,\nor to output all the regions, if there are no seeds.\n"},
  {"SetExtractionModeToAllRegions", PyvtkImageConnectivityFilter_SetExtractionModeToAllRegions, METH_VARARGS,
   "SetExtractionModeToAllRegions(self) -> None\nC++: void SetExtractionModeToAllRegions()\n\n"},
  {"SetExtractionModeToLargestRegion", PyvtkImageConnectivityFilter_SetExtractionModeToLargestRegion, METH_VARARGS,
   "SetExtractionModeToLargestRegion(self) -> None\nC++: void SetExtractionModeToLargestRegion()\n\n"},
  {"GetExtractionModeAsString", PyvtkImageConnectivityFilter_GetExtractionModeAsString, METH_VARARGS,
   "GetExtractionModeAsString(self) -> str\nC++: const char *GetExtractionModeAsString()\n\n"},
  {"SetExtractionMode", PyvtkImageConnectivityFilter_SetExtractionMode, METH_VARARGS,
   "SetExtractionMode(self, _arg:int) -> None\nC++: virtual void SetExtractionMode(int _arg)\n\n"},
  {"GetExtractionMode", PyvtkImageConnectivityFilter_GetExtractionMode, METH_VARARGS,
   "GetExtractionMode(self) -> int\nC++: virtual int GetExtractionMode()\n\n"},
  {"SetLabelConstantValue", PyvtkImageConnectivityFilter_SetLabelConstantValue, METH_VARARGS,
   "SetLabelConstantValue(self, _arg:int) -> None\nC++: virtual void SetLabelConstantValue(int _arg)\n\nThe label used when LabelMode is ConstantValue. The default value\nis 255.\n"},
  {"GetLabelConstantValue", PyvtkImageConnectivityFilter_GetLabelConstantValue, METH_VARARGS,
   "GetLabelConstantValue(self) -> int\nC++: virtual int GetLabelConstantValue()\n\n"},
  {"GetNumberOfExtractedRegions", PyvtkImageConnectivityFilter_GetNumberOfExtractedRegions, METH_VARARGS,
   "GetNumberOfExtractedRegions(self) -> int\nC++: vtkIdType GetNumberOfExtractedRegions()\n\nGet the number of extracted regions.\n"},
  {"GetExtractedRegionLabels", PyvtkImageConnectivityFilter_GetExtractedRegionLabels, METH_VARARGS,
   "GetExtractedRegionLabels(self) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetExtractedRegionLabels()\n\nGet the label used for each extracted region.\n"},
  {"GetExtractedRegionSizes", PyvtkImageConnectivityFilter_GetExtractedRegionSizes, METH_VARARGS,
   "GetExtractedRegionSizes(self) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetExtractedRegionSizes()\n\nGet the size of each extracted region, as a voxel count.\n"},
  {"GetExtractedRegionSeedIds", PyvtkImageConnectivityFilter_GetExtractedRegionSeedIds, METH_VARARGS,
   "GetExtractedRegionSeedIds(self) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetExtractedRegionSeedIds()\n\nGet the PointId of the seed for each region. If no seed was used,\nthe PointId will be -1.\n"},
  {"GetExtractedRegionExtents", PyvtkImageConnectivityFilter_GetExtractedRegionExtents, METH_VARARGS,
   "GetExtractedRegionExtents(self) -> vtkIntArray\nC++: vtkIntArray *GetExtractedRegionExtents()\n\nGet the extent (a 6-tuples) for each output region. This is only\nvalid if GenerateRegionExtentsOn() was called before the filter\nwas executed.\n"},
  {"SetGenerateRegionExtents", PyvtkImageConnectivityFilter_SetGenerateRegionExtents, METH_VARARGS,
   "SetGenerateRegionExtents(self, _arg:int) -> None\nC++: virtual void SetGenerateRegionExtents(vtkTypeBool _arg)\n\nTurn this on to request creation of the ExtractedRegionExtents\narray.\n"},
  {"GenerateRegionExtentsOn", PyvtkImageConnectivityFilter_GenerateRegionExtentsOn, METH_VARARGS,
   "GenerateRegionExtentsOn(self) -> None\nC++: virtual void GenerateRegionExtentsOn()\n\n"},
  {"GenerateRegionExtentsOff", PyvtkImageConnectivityFilter_GenerateRegionExtentsOff, METH_VARARGS,
   "GenerateRegionExtentsOff(self) -> None\nC++: virtual void GenerateRegionExtentsOff()\n\n"},
  {"GetGenerateRegionExtents", PyvtkImageConnectivityFilter_GetGenerateRegionExtents, METH_VARARGS,
   "GetGenerateRegionExtents(self) -> int\nC++: virtual vtkTypeBool GetGenerateRegionExtents()\n\n"},
  {"SetSizeRange", PyvtkImageConnectivityFilter_SetSizeRange, METH_VARARGS,
   "SetSizeRange(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetSizeRange(vtkIdType _arg1, vtkIdType _arg2)\nSetSizeRange(self, _arg:(int, int)) -> None\nC++: void SetSizeRange(const vtkIdType _arg[2])\n\nSet the size range for the extracted regions. Only regions that\nhave sizes within the specified range will be present in the\noutput.  The default range is (1, VTK_ID_MAX).\n"},
  {"GetSizeRange", PyvtkImageConnectivityFilter_GetSizeRange, METH_VARARGS,
   "GetSizeRange(self) -> (int, int)\nC++: virtual vtkIdType *GetSizeRange()\n\n"},
  {"SetScalarRange", PyvtkImageConnectivityFilter_SetScalarRange, METH_VARARGS,
   "SetScalarRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetScalarRange(double _arg1, double _arg2)\nSetScalarRange(self, _arg:(float, float)) -> None\nC++: void SetScalarRange(const double _arg[2])\n\nSet the scalar range used to define potential regions. Only\nvoxels with values that are within this range will be considered\nfor region membership.  This is an inclusive range, meaning that\nthe upper and lower limits are considered to be within the range.\n The default range goes from 0.5 to VTK_DOUBLE_MAX.\n"},
  {"GetScalarRange", PyvtkImageConnectivityFilter_GetScalarRange, METH_VARARGS,
   "GetScalarRange(self) -> (float, float)\nC++: virtual double *GetScalarRange()\n\n"},
  {"SetActiveComponent", PyvtkImageConnectivityFilter_SetActiveComponent, METH_VARARGS,
   "SetActiveComponent(self, _arg:int) -> None\nC++: virtual void SetActiveComponent(int _arg)\n\nFor multi-component input images, select which component to use.\n"},
  {"GetActiveComponent", PyvtkImageConnectivityFilter_GetActiveComponent, METH_VARARGS,
   "GetActiveComponent(self) -> int\nC++: virtual int GetActiveComponent()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageConnectivityFilter_Doc =
  "vtkImageConnectivityFilter - Label an image by connectivity\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageConnectivityFilter will identify connected regions within an\n"
  "image and label them.  Only points with scalar values within a\n"
  "prescribed range are considered for inclusion, by default this range\n"
  "includes all scalar values with a value greater than zero.  Points\n"
  "within the prescribed scalar range are considered to be connected if\n"
  "a path exists between the points that does not traverse any points\n"
  "that are not within the prescribed scalar range. Adjacency of points\n"
  "is governed by 4-connectivity for 2D images, and 6-connectivity for\n"
  "3D images.\n\n"
  "The output of this filter is a label image.  By default, each region\n"
  "is assigned a different label, where the labels are integer values\n"
  "starting at a value of 1.  The SetLabelMode() method can be used to\n"
  "change the way that labels are assigned.  Labels can be assigned by\n"
  "providing input seed points for each region to be labelled, or they\n"
  "can be assigned by ranking the regions by size.\n\n"
  "If a set of seeds is provided with the SetSeedData() method, then the\n"
  "default behavior is to only output the regions that are connected to\n"
  "the seeds, and if the seeds have scalars, then these scalars will be\n"
  "used to label the regions.  Seeds with a scalar value equal to zero\n"
  "are ignored.  See the documentation for the SetExtractionMode()\n"
  "method for details on how to control which regions will labeled.\n\n"
  "Regions can be selected by size with the SetSizeRange() method, which\n"
  "can be useful for identifying objects of a certain size, e.g. for\n"
  "rejecting small regions that are likely to be noise. It is also\n"
  "possible to label only the largest region and ignore all others, with\n"
  "SetExtractionModeToLargestRegion().\n\n"
  "In addition to the labels, the following additional information is\n"
  "provided: the number of regions identified, the size of each region,\n"
  "a list of all label values used, and the seed for each region (if\n"
  "seeds were used).  Optionally, this filter can also compute the\n"
  "extent of each region if GenerateRegionExtentsOn() is called.  These\n"
  "extents can be useful for cropping the output of the filter.\n\n"
  "@sa\n"
  "vtkConnectivityFilter, vtkPolyDataConnectivityFilter,\n"
  "vtkmImageConnectivity\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageConnectivityFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingMorphological.vtkImageConnectivityFilter", // tp_name
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
  PyvtkImageConnectivityFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageConnectivityFilter_StaticNew()
{
  return vtkImageConnectivityFilter::New();
}

PyObject *PyvtkImageConnectivityFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageConnectivityFilter_Type, PyvtkImageConnectivityFilter_Methods,
    "vtkImageConnectivityFilter",
 &PyvtkImageConnectivityFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkImageConnectivityFilter_LabelModeEnum_Type);
  PyVTKEnum_Add(&PyvtkImageConnectivityFilter_LabelModeEnum_Type, "vtkImageConnectivityFilter.LabelModeEnum");

  o = (PyObject *)&PyvtkImageConnectivityFilter_LabelModeEnum_Type;
  if (PyDict_SetItemString(d, "LabelModeEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkImageConnectivityFilter_ExtractionModeEnum_Type);
  PyVTKEnum_Add(&PyvtkImageConnectivityFilter_ExtractionModeEnum_Type, "vtkImageConnectivityFilter.ExtractionModeEnum");

  o = (PyObject *)&PyvtkImageConnectivityFilter_ExtractionModeEnum_Type;
  if (PyDict_SetItemString(d, "ExtractionModeEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkImageConnectivityFilter::LabelModeEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "SeedScalar", vtkImageConnectivityFilter::SeedScalar },
        { "ConstantValue", vtkImageConnectivityFilter::ConstantValue },
        { "SizeRank", vtkImageConnectivityFilter::SizeRank },
      };

    o = PyvtkImageConnectivityFilter_LabelModeEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkImageConnectivityFilter::ExtractionModeEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "SeededRegions", vtkImageConnectivityFilter::SeededRegions },
        { "AllRegions", vtkImageConnectivityFilter::AllRegions },
        { "LargestRegion", vtkImageConnectivityFilter::LargestRegion },
      };

    o = PyvtkImageConnectivityFilter_ExtractionModeEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageConnectivityFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageConnectivityFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageConnectivityFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

