// python wrapper for vtkExtractHistogram2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractHistogram2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractHistogram2D(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractHistogram2D_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractHistogram2D_OutputIndices_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersImaging.vtkExtractHistogram2D.OutputIndices", // tp_name
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
PyObject *PyvtkExtractHistogram2D_OutputIndices_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkExtractHistogram2D_OutputIndices_Type, static_cast<int>(val));
}


static PyObject *
PyvtkExtractHistogram2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractHistogram2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractHistogram2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractHistogram2D *tempr = vtkExtractHistogram2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractHistogram2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractHistogram2D::NewInstance());

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
PyvtkExtractHistogram2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractHistogram2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractHistogram2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetNumberOfBins_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfBins(temp0, temp1);
    }
    else
    {
      op->vtkExtractHistogram2D::SetNumberOfBins(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetNumberOfBins_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfBins(temp0);
    }
    else
    {
      op->vtkExtractHistogram2D::SetNumberOfBins(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetNumberOfBins(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkExtractHistogram2D_SetNumberOfBins_s1(self, args);
    case 1:
      return PyvtkExtractHistogram2D_SetNumberOfBins_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfBins");
  return nullptr;
}


static PyObject *
PyvtkExtractHistogram2D_GetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNumberOfBins() :
      op->vtkExtractHistogram2D::GetNumberOfBins());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetComponentsToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentsToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetComponentsToProcess(temp0, temp1);
    }
    else
    {
      op->vtkExtractHistogram2D::SetComponentsToProcess(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetComponentsToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentsToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetComponentsToProcess(temp0);
    }
    else
    {
      op->vtkExtractHistogram2D::SetComponentsToProcess(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetComponentsToProcess(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkExtractHistogram2D_SetComponentsToProcess_s1(self, args);
    case 1:
      return PyvtkExtractHistogram2D_SetComponentsToProcess_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetComponentsToProcess");
  return nullptr;
}


static PyObject *
PyvtkExtractHistogram2D_GetComponentsToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentsToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetComponentsToProcess() :
      op->vtkExtractHistogram2D::GetComponentsToProcess());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetCustomHistogramExtents_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetCustomHistogramExtents(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkExtractHistogram2D::SetCustomHistogramExtents(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetCustomHistogramExtents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCustomHistogramExtents(temp0);
    }
    else
    {
      op->vtkExtractHistogram2D::SetCustomHistogramExtents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_SetCustomHistogramExtents(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkExtractHistogram2D_SetCustomHistogramExtents_s1(self, args);
    case 1:
      return PyvtkExtractHistogram2D_SetCustomHistogramExtents_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomHistogramExtents");
  return nullptr;
}


static PyObject *
PyvtkExtractHistogram2D_GetCustomHistogramExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCustomHistogramExtents() :
      op->vtkExtractHistogram2D::GetCustomHistogramExtents());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetUseCustomHistogramExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCustomHistogramExtents(temp0);
    }
    else
    {
      op->vtkExtractHistogram2D::SetUseCustomHistogramExtents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetUseCustomHistogramExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCustomHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseCustomHistogramExtents() :
      op->vtkExtractHistogram2D::GetUseCustomHistogramExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_UseCustomHistogramExtentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomHistogramExtentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCustomHistogramExtentsOn();
    }
    else
    {
      op->vtkExtractHistogram2D::UseCustomHistogramExtentsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_UseCustomHistogramExtentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomHistogramExtentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCustomHistogramExtentsOff();
    }
    else
    {
      op->vtkExtractHistogram2D::UseCustomHistogramExtentsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarType(temp0);
    }
    else
    {
      op->vtkExtractHistogram2D::SetScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedInt();
    }
    else
    {
      op->vtkExtractHistogram2D::SetScalarTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedLong();
    }
    else
    {
      op->vtkExtractHistogram2D::SetScalarTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkExtractHistogram2D::SetScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkExtractHistogram2D::SetScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToFloat();
    }
    else
    {
      op->vtkExtractHistogram2D::SetScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToDouble();
    }
    else
    {
      op->vtkExtractHistogram2D::SetScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarType() :
      op->vtkExtractHistogram2D::GetScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetMaximumBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumBinCount() :
      op->vtkExtractHistogram2D::GetMaximumBinCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetBinRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  long long temp0;
  long long temp1;
  const size_t size2 = 4;
  double temp2[4];
  double save2[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetBinRange(temp0, temp1, temp2) :
      op->vtkExtractHistogram2D::GetBinRange(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExtractHistogram2D_GetBinRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  long long temp0;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetBinRange(temp0, temp1) :
      op->vtkExtractHistogram2D::GetBinRange(temp0, temp1));

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
PyvtkExtractHistogram2D_GetBinRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkExtractHistogram2D_GetBinRange_s1(self, args);
    case 2:
      return PyvtkExtractHistogram2D_GetBinRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBinRange");
  return nullptr;
}


static PyObject *
PyvtkExtractHistogram2D_GetBinWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

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
      op->GetBinWidth(temp0);
    }
    else
    {
      op->vtkExtractHistogram2D::GetBinWidth(temp0);
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
PyvtkExtractHistogram2D_GetOutputHistogramImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputHistogramImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutputHistogramImage() :
      op->vtkExtractHistogram2D::GetOutputHistogramImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetHistogramExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetHistogramExtents() :
      op->vtkExtractHistogram2D::GetHistogramExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetSwapColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSwapColumns(temp0);
    }
    else
    {
      op->vtkExtractHistogram2D::SetSwapColumns(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetSwapColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSwapColumns() :
      op->vtkExtractHistogram2D::GetSwapColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SwapColumnsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapColumnsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwapColumnsOn();
    }
    else
    {
      op->vtkExtractHistogram2D::SwapColumnsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SwapColumnsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapColumnsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwapColumnsOff();
    }
    else
    {
      op->vtkExtractHistogram2D::SwapColumnsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_SetRowMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRowMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetRowMask(temp0);
    }
    else
    {
      op->vtkExtractHistogram2D::SetRowMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_GetRowMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetRowMask() :
      op->vtkExtractHistogram2D::GetRowMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram2D_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram2D *op = static_cast<vtkExtractHistogram2D *>(vp);

  vtkDataObjectCollection *temp0 = nullptr;
  vtkMultiBlockDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectCollection") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet"))
  {
    if (ap.IsBound())
    {
      op->Aggregate(temp0, temp1);
    }
    else
    {
      op->vtkExtractHistogram2D::Aggregate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractHistogram2D_Methods[] = {
  {"IsTypeOf", PyvtkExtractHistogram2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractHistogram2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractHistogram2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractHistogram2D\nC++: static vtkExtractHistogram2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractHistogram2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractHistogram2D\nC++: vtkExtractHistogram2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractHistogram2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractHistogram2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfBins", PyvtkExtractHistogram2D_SetNumberOfBins, METH_VARARGS,
   "SetNumberOfBins(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetNumberOfBins(int _arg1, int _arg2)\nSetNumberOfBins(self, _arg:(int, int)) -> None\nC++: void SetNumberOfBins(const int _arg[2])\n\nSet/get the number of bins to be used per dimension (x,y)\n"},
  {"GetNumberOfBins", PyvtkExtractHistogram2D_GetNumberOfBins, METH_VARARGS,
   "GetNumberOfBins(self) -> (int, int)\nC++: virtual int *GetNumberOfBins()\n\n"},
  {"SetComponentsToProcess", PyvtkExtractHistogram2D_SetComponentsToProcess, METH_VARARGS,
   "SetComponentsToProcess(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetComponentsToProcess(int _arg1, int _arg2)\nSetComponentsToProcess(self, _arg:(int, int)) -> None\nC++: void SetComponentsToProcess(const int _arg[2])\n\nSet/get the components of the arrays in the two input columns to\nbe used during histogram computation.  Defaults to component 0.\n"},
  {"GetComponentsToProcess", PyvtkExtractHistogram2D_GetComponentsToProcess, METH_VARARGS,
   "GetComponentsToProcess(self) -> (int, int)\nC++: virtual int *GetComponentsToProcess()\n\n"},
  {"SetCustomHistogramExtents", PyvtkExtractHistogram2D_SetCustomHistogramExtents, METH_VARARGS,
   "SetCustomHistogramExtents(self, _arg1:float, _arg2:float,\n    _arg3:float, _arg4:float) -> None\nC++: virtual void SetCustomHistogramExtents(double _arg1,\n    double _arg2, double _arg3, double _arg4)\nSetCustomHistogramExtents(self, _arg:(float, float, float, float))\n     -> None\nC++: virtual void SetCustomHistogramExtents(const double _arg[4])\n\nSet/get a custom domain for histogram computation. \nUseCustomHistogramExtents must be called for these to actually be\nused.\n"},
  {"GetCustomHistogramExtents", PyvtkExtractHistogram2D_GetCustomHistogramExtents, METH_VARARGS,
   "GetCustomHistogramExtents(self) -> (float, float, float, float)\nC++: virtual double *GetCustomHistogramExtents()\n\n"},
  {"SetUseCustomHistogramExtents", PyvtkExtractHistogram2D_SetUseCustomHistogramExtents, METH_VARARGS,
   "SetUseCustomHistogramExtents(self, _arg:int) -> None\nC++: virtual void SetUseCustomHistogramExtents(vtkTypeBool _arg)\n\nUse the extents in CustomHistogramExtents when computing the\nhistogram, rather than the simple range of the input columns.\n"},
  {"GetUseCustomHistogramExtents", PyvtkExtractHistogram2D_GetUseCustomHistogramExtents, METH_VARARGS,
   "GetUseCustomHistogramExtents(self) -> int\nC++: virtual vtkTypeBool GetUseCustomHistogramExtents()\n\n"},
  {"UseCustomHistogramExtentsOn", PyvtkExtractHistogram2D_UseCustomHistogramExtentsOn, METH_VARARGS,
   "UseCustomHistogramExtentsOn(self) -> None\nC++: virtual void UseCustomHistogramExtentsOn()\n\n"},
  {"UseCustomHistogramExtentsOff", PyvtkExtractHistogram2D_UseCustomHistogramExtentsOff, METH_VARARGS,
   "UseCustomHistogramExtentsOff(self) -> None\nC++: virtual void UseCustomHistogramExtentsOff()\n\n"},
  {"SetScalarType", PyvtkExtractHistogram2D_SetScalarType, METH_VARARGS,
   "SetScalarType(self, _arg:int) -> None\nC++: virtual void SetScalarType(int _arg)\n\nControl the scalar type of the output histogram.  If the input is\nrelatively small, you can save space by using a smaller data\ntype.  Defaults to unsigned integer.\n"},
  {"SetScalarTypeToUnsignedInt", PyvtkExtractHistogram2D_SetScalarTypeToUnsignedInt, METH_VARARGS,
   "SetScalarTypeToUnsignedInt(self) -> None\nC++: void SetScalarTypeToUnsignedInt()\n\n"},
  {"SetScalarTypeToUnsignedLong", PyvtkExtractHistogram2D_SetScalarTypeToUnsignedLong, METH_VARARGS,
   "SetScalarTypeToUnsignedLong(self) -> None\nC++: void SetScalarTypeToUnsignedLong()\n\n"},
  {"SetScalarTypeToUnsignedShort", PyvtkExtractHistogram2D_SetScalarTypeToUnsignedShort, METH_VARARGS,
   "SetScalarTypeToUnsignedShort(self) -> None\nC++: void SetScalarTypeToUnsignedShort()\n\n"},
  {"SetScalarTypeToUnsignedChar", PyvtkExtractHistogram2D_SetScalarTypeToUnsignedChar, METH_VARARGS,
   "SetScalarTypeToUnsignedChar(self) -> None\nC++: void SetScalarTypeToUnsignedChar()\n\n"},
  {"SetScalarTypeToFloat", PyvtkExtractHistogram2D_SetScalarTypeToFloat, METH_VARARGS,
   "SetScalarTypeToFloat(self) -> None\nC++: void SetScalarTypeToFloat()\n\n"},
  {"SetScalarTypeToDouble", PyvtkExtractHistogram2D_SetScalarTypeToDouble, METH_VARARGS,
   "SetScalarTypeToDouble(self) -> None\nC++: void SetScalarTypeToDouble()\n\n"},
  {"GetScalarType", PyvtkExtractHistogram2D_GetScalarType, METH_VARARGS,
   "GetScalarType(self) -> int\nC++: virtual int GetScalarType()\n\n"},
  {"GetMaximumBinCount", PyvtkExtractHistogram2D_GetMaximumBinCount, METH_VARARGS,
   "GetMaximumBinCount(self) -> float\nC++: virtual double GetMaximumBinCount()\n\nAccess the count of the histogram bin containing the largest\nnumber of input rows.\n"},
  {"GetBinRange", PyvtkExtractHistogram2D_GetBinRange, METH_VARARGS,
   "GetBinRange(self, binX:int, binY:int, range:[float, float, float,\n    float]) -> int\nC++: int GetBinRange(vtkIdType binX, vtkIdType binY,\n    double range[4])\nGetBinRange(self, bin:int, range:[float, float, float, float])\n    -> int\nC++: int GetBinRange(vtkIdType bin, double range[4])\n\nCompute the range of the bin located at position (binX,binY) in\nthe 2D histogram.\n"},
  {"GetBinWidth", PyvtkExtractHistogram2D_GetBinWidth, METH_VARARGS,
   "GetBinWidth(self, bw:[float, float]) -> None\nC++: void GetBinWidth(double bw[2])\n\nGet the width of all of the bins. Also stored in the spacing ivar\nof the histogram image output.\n"},
  {"GetOutputHistogramImage", PyvtkExtractHistogram2D_GetOutputHistogramImage, METH_VARARGS,
   "GetOutputHistogramImage(self) -> vtkImageData\nC++: vtkImageData *GetOutputHistogramImage()\n\nGets the data object at the histogram image output port and casts\nit to a vtkImageData.\n"},
  {"GetHistogramExtents", PyvtkExtractHistogram2D_GetHistogramExtents, METH_VARARGS,
   "GetHistogramExtents(self) -> Pointer\nC++: double *GetHistogramExtents()\n\nGet the histogram extents currently in use, either computed or\nset by the user.\n"},
  {"SetSwapColumns", PyvtkExtractHistogram2D_SetSwapColumns, METH_VARARGS,
   "SetSwapColumns(self, _arg:int) -> None\nC++: virtual void SetSwapColumns(vtkTypeBool _arg)\n\n"},
  {"GetSwapColumns", PyvtkExtractHistogram2D_GetSwapColumns, METH_VARARGS,
   "GetSwapColumns(self) -> int\nC++: virtual vtkTypeBool GetSwapColumns()\n\n"},
  {"SwapColumnsOn", PyvtkExtractHistogram2D_SwapColumnsOn, METH_VARARGS,
   "SwapColumnsOn(self) -> None\nC++: virtual void SwapColumnsOn()\n\n"},
  {"SwapColumnsOff", PyvtkExtractHistogram2D_SwapColumnsOff, METH_VARARGS,
   "SwapColumnsOff(self) -> None\nC++: virtual void SwapColumnsOff()\n\n"},
  {"SetRowMask", PyvtkExtractHistogram2D_SetRowMask, METH_VARARGS,
   "SetRowMask(self, __a:vtkDataArray) -> None\nC++: virtual void SetRowMask(vtkDataArray *)\n\nGet/Set an optional mask that can ignore rows of the table\n"},
  {"GetRowMask", PyvtkExtractHistogram2D_GetRowMask, METH_VARARGS,
   "GetRowMask(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetRowMask()\n\n"},
  {"Aggregate", PyvtkExtractHistogram2D_Aggregate, METH_VARARGS,
   "Aggregate(self, __a:vtkDataObjectCollection,\n    __b:vtkMultiBlockDataSet) -> None\nC++: void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *) override;\n\nGiven a collection of models, calculate aggregate model. Not\nused.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractHistogram2D_Doc =
  "vtkExtractHistogram2D - compute a 2D histogram between two columns\n of an input vtkTable.\n\n"
  "Superclass: vtkStatisticsAlgorithm\n\n"
  "This class computes a 2D histogram between two columns of an input\n"
  " vtkTable. Just as with a 1D histogram, a 2D histogram breaks\n"
  " up the input domain into bins, and each pair of values (row in\n"
  " the table) fits into a single bin and increments a row counter\n"
  " for that bin.\n\n\n"
  " To use this class, set the input with a table and call\n"
  "AddColumnPair(nameX,nameY),\n"
  " where nameX and nameY are the names of the two columns to be used.\n\n\n"
  " In addition to the number of bins (in X and Y), the domain of\n"
  " the histogram can be customized by toggling the\n"
  "UseCustomHistogramExtents\n"
  " flag and setting the CustomHistogramExtents variable to the\n"
  " desired value.\n\n"
  "@sa\n"
  " vtkPExtractHistogram2D\n\n"
  "@par Thanks:\n"
  " Developed by David Feng and Philippe Pebay at Sandia National\n"
  "Laboratories\n"
  "----------------------------------------------------------------------\n"
  "    --------\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractHistogram2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersImaging.vtkExtractHistogram2D", // tp_name
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
  PyvtkExtractHistogram2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractHistogram2D_StaticNew()
{
  return vtkExtractHistogram2D::New();
}

PyObject *PyvtkExtractHistogram2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractHistogram2D_Type, PyvtkExtractHistogram2D_Methods,
    "vtkExtractHistogram2D",
 &PyvtkExtractHistogram2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkStatisticsAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkExtractHistogram2D_OutputIndices_Type);
  PyVTKEnum_Add(&PyvtkExtractHistogram2D_OutputIndices_Type, "vtkExtractHistogram2D.OutputIndices");

  o = (PyObject *)&PyvtkExtractHistogram2D_OutputIndices_Type;
  if (PyDict_SetItemString(d, "OutputIndices", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkExtractHistogram2D_OutputIndices_FromEnum(vtkExtractHistogram2D::HISTOGRAM_IMAGE);
  if (o)
  {
    PyDict_SetItemString(d, "HISTOGRAM_IMAGE", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractHistogram2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractHistogram2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractHistogram2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

