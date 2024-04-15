// python wrapper for vtkPairwiseExtractHistogram2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPairwiseExtractHistogram2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPairwiseExtractHistogram2D(PyObject *dict); }
extern "C" { PyObject *PyvtkPairwiseExtractHistogram2D_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPairwiseExtractHistogram2D_OutputIndices_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersImaging.vtkPairwiseExtractHistogram2D.OutputIndices", // tp_name
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
PyObject *PyvtkPairwiseExtractHistogram2D_OutputIndices_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPairwiseExtractHistogram2D_OutputIndices_Type, static_cast<int>(val));
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPairwiseExtractHistogram2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPairwiseExtractHistogram2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPairwiseExtractHistogram2D *tempr = vtkPairwiseExtractHistogram2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPairwiseExtractHistogram2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPairwiseExtractHistogram2D::NewInstance());

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
PyvtkPairwiseExtractHistogram2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPairwiseExtractHistogram2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPairwiseExtractHistogram2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetNumberOfBins_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      op->vtkPairwiseExtractHistogram2D::SetNumberOfBins(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_SetNumberOfBins_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      op->vtkPairwiseExtractHistogram2D::SetNumberOfBins(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_SetNumberOfBins(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPairwiseExtractHistogram2D_SetNumberOfBins_s1(self, args);
    case 1:
      return PyvtkPairwiseExtractHistogram2D_SetNumberOfBins_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfBins");
  return nullptr;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNumberOfBins() :
      op->vtkPairwiseExtractHistogram2D::GetNumberOfBins());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetCustomColumnRangeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomColumnRangeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCustomColumnRangeIndex(temp0);
    }
    else
    {
      op->vtkPairwiseExtractHistogram2D::SetCustomColumnRangeIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetCustomColumnRangeByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomColumnRangeByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCustomColumnRangeByIndex(temp0, temp1);
    }
    else
    {
      op->vtkPairwiseExtractHistogram2D::SetCustomColumnRangeByIndex(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomColumnRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetCustomColumnRange(temp0, temp1);
    }
    else
    {
      op->vtkPairwiseExtractHistogram2D::SetCustomColumnRange(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomColumnRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
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
      op->SetCustomColumnRange(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPairwiseExtractHistogram2D::SetCustomColumnRange(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange_s1(self, args);
    case 3:
      return PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomColumnRange");
  return nullptr;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      op->vtkPairwiseExtractHistogram2D::SetScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedInt();
    }
    else
    {
      op->vtkPairwiseExtractHistogram2D::SetScalarTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedLong();
    }
    else
    {
      op->vtkPairwiseExtractHistogram2D::SetScalarTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkPairwiseExtractHistogram2D::SetScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkPairwiseExtractHistogram2D::SetScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarType() :
      op->vtkPairwiseExtractHistogram2D::GetScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumBinCount(temp0) :
      op->vtkPairwiseExtractHistogram2D::GetMaximumBinCount(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumBinCount() :
      op->vtkPairwiseExtractHistogram2D::GetMaximumBinCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount_s1(self, args);
    case 0:
      return PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMaximumBinCount");
  return nullptr;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetBinRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  long long temp1;
  long long temp2;
  const size_t size3 = 4;
  double temp3[4];
  double save3[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->GetBinRange(temp0, temp1, temp2, temp3) :
      op->vtkPairwiseExtractHistogram2D::GetBinRange(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPairwiseExtractHistogram2D_GetBinRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
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
      op->vtkPairwiseExtractHistogram2D::GetBinRange(temp0, temp1, temp2));

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
PyvtkPairwiseExtractHistogram2D_GetBinRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPairwiseExtractHistogram2D_GetBinRange_s1(self, args);
    case 3:
      return PyvtkPairwiseExtractHistogram2D_GetBinRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBinRange");
  return nullptr;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetBinWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetBinWidth(temp0, temp1);
    }
    else
    {
      op->vtkPairwiseExtractHistogram2D::GetBinWidth(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetHistogramExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistogramExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetHistogramExtents(temp0) :
      op->vtkPairwiseExtractHistogram2D::GetHistogramExtents(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetOutputHistogramImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputHistogramImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutputHistogramImage(temp0) :
      op->vtkPairwiseExtractHistogram2D::GetOutputHistogramImage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_GetHistogramFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistogramFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkExtractHistogram2D *tempr = (ap.IsBound() ?
      op->GetHistogramFilter(temp0) :
      op->vtkPairwiseExtractHistogram2D::GetHistogramFilter(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPairwiseExtractHistogram2D_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPairwiseExtractHistogram2D *op = static_cast<vtkPairwiseExtractHistogram2D *>(vp);

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
      op->vtkPairwiseExtractHistogram2D::Aggregate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPairwiseExtractHistogram2D_Methods[] = {
  {"IsTypeOf", PyvtkPairwiseExtractHistogram2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPairwiseExtractHistogram2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPairwiseExtractHistogram2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPairwiseExtractHistogram2D\nC++: static vtkPairwiseExtractHistogram2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPairwiseExtractHistogram2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPairwiseExtractHistogram2D\nC++: vtkPairwiseExtractHistogram2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPairwiseExtractHistogram2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPairwiseExtractHistogram2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfBins", PyvtkPairwiseExtractHistogram2D_SetNumberOfBins, METH_VARARGS,
   "SetNumberOfBins(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetNumberOfBins(int _arg1, int _arg2)\nSetNumberOfBins(self, _arg:(int, int)) -> None\nC++: void SetNumberOfBins(const int _arg[2])\n\nSet/get the bin dimensions of the histograms to compute\n"},
  {"GetNumberOfBins", PyvtkPairwiseExtractHistogram2D_GetNumberOfBins, METH_VARARGS,
   "GetNumberOfBins(self) -> (int, int)\nC++: virtual int *GetNumberOfBins()\n\n"},
  {"SetCustomColumnRangeIndex", PyvtkPairwiseExtractHistogram2D_SetCustomColumnRangeIndex, METH_VARARGS,
   "SetCustomColumnRangeIndex(self, _arg:int) -> None\nC++: virtual void SetCustomColumnRangeIndex(int _arg)\n\nStrange method for setting an index to be used for setting custom\ncolumn range. This was (probably) necessary to get this class to\ninteract with the ParaView client/server message passing\ninterface.\n"},
  {"SetCustomColumnRangeByIndex", PyvtkPairwiseExtractHistogram2D_SetCustomColumnRangeByIndex, METH_VARARGS,
   "SetCustomColumnRangeByIndex(self, __a:float, __b:float) -> None\nC++: void SetCustomColumnRangeByIndex(double, double)\n\n"},
  {"SetCustomColumnRange", PyvtkPairwiseExtractHistogram2D_SetCustomColumnRange, METH_VARARGS,
   "SetCustomColumnRange(self, col:int, range:[float, float]) -> None\nC++: void SetCustomColumnRange(int col, double range[2])\nSetCustomColumnRange(self, col:int, rmin:float, rmax:float)\n    -> None\nC++: void SetCustomColumnRange(int col, double rmin, double rmax)\n\nMore standard way to set the custom range for a particular\ncolumn. This makes sure that only the affected histograms know\nthat they need to be updated.\n"},
  {"SetScalarType", PyvtkPairwiseExtractHistogram2D_SetScalarType, METH_VARARGS,
   "SetScalarType(self, _arg:int) -> None\nC++: virtual void SetScalarType(int _arg)\n\nSet the scalar type for each of the computed histograms.\n"},
  {"SetScalarTypeToUnsignedInt", PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedInt, METH_VARARGS,
   "SetScalarTypeToUnsignedInt(self) -> None\nC++: void SetScalarTypeToUnsignedInt()\n\n"},
  {"SetScalarTypeToUnsignedLong", PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedLong, METH_VARARGS,
   "SetScalarTypeToUnsignedLong(self) -> None\nC++: void SetScalarTypeToUnsignedLong()\n\n"},
  {"SetScalarTypeToUnsignedShort", PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedShort, METH_VARARGS,
   "SetScalarTypeToUnsignedShort(self) -> None\nC++: void SetScalarTypeToUnsignedShort()\n\n"},
  {"SetScalarTypeToUnsignedChar", PyvtkPairwiseExtractHistogram2D_SetScalarTypeToUnsignedChar, METH_VARARGS,
   "SetScalarTypeToUnsignedChar(self) -> None\nC++: void SetScalarTypeToUnsignedChar()\n\n"},
  {"GetScalarType", PyvtkPairwiseExtractHistogram2D_GetScalarType, METH_VARARGS,
   "GetScalarType(self) -> int\nC++: virtual int GetScalarType()\n\n"},
  {"GetMaximumBinCount", PyvtkPairwiseExtractHistogram2D_GetMaximumBinCount, METH_VARARGS,
   "GetMaximumBinCount(self, idx:int) -> float\nC++: double GetMaximumBinCount(int idx)\nGetMaximumBinCount(self) -> float\nC++: double GetMaximumBinCount()\n\nGet the maximum bin count for a single histogram\n"},
  {"GetBinRange", PyvtkPairwiseExtractHistogram2D_GetBinRange, METH_VARARGS,
   "GetBinRange(self, idx:int, binX:int, binY:int, range:[float,\n    float, float, float]) -> int\nC++: int GetBinRange(int idx, vtkIdType binX, vtkIdType binY,\n    double range[4])\nGetBinRange(self, idx:int, bin:int, range:[float, float, float,\n    float]) -> int\nC++: int GetBinRange(int idx, vtkIdType bin, double range[4])\n\nCompute the range of the bin located at position (binX,binY) in\nthe 2D histogram at idx.\n"},
  {"GetBinWidth", PyvtkPairwiseExtractHistogram2D_GetBinWidth, METH_VARARGS,
   "GetBinWidth(self, idx:int, bw:[float, float]) -> None\nC++: void GetBinWidth(int idx, double bw[2])\n\nGet the width of all of the bins. Also stored in the spacing ivar\nof the histogram image output at idx.\n"},
  {"GetHistogramExtents", PyvtkPairwiseExtractHistogram2D_GetHistogramExtents, METH_VARARGS,
   "GetHistogramExtents(self, idx:int) -> Pointer\nC++: double *GetHistogramExtents(int idx)\n\nGet the histogram extents currently in use, either computed or\nset by the user for the idx'th histogram.\n"},
  {"GetOutputHistogramImage", PyvtkPairwiseExtractHistogram2D_GetOutputHistogramImage, METH_VARARGS,
   "GetOutputHistogramImage(self, idx:int) -> vtkImageData\nC++: vtkImageData *GetOutputHistogramImage(int idx)\n\nGet the vtkImageData output of the idx'th histogram filter\n"},
  {"GetHistogramFilter", PyvtkPairwiseExtractHistogram2D_GetHistogramFilter, METH_VARARGS,
   "GetHistogramFilter(self, idx:int) -> vtkExtractHistogram2D\nC++: vtkExtractHistogram2D *GetHistogramFilter(int idx)\n\nGet a pointer to the idx'th histogram filter.\n"},
  {"Aggregate", PyvtkPairwiseExtractHistogram2D_Aggregate, METH_VARARGS,
   "Aggregate(self, __a:vtkDataObjectCollection,\n    __b:vtkMultiBlockDataSet) -> None\nC++: void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *) override;\n\nGiven a collection of models, calculate aggregate model.  Not\nused\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPairwiseExtractHistogram2D_Doc =
  "vtkPairwiseExtractHistogram2D - compute a 2D histogram between\n all adjacent columns of an input vtkTable.\n\n"
  "Superclass: vtkStatisticsAlgorithm\n\n"
  "This class computes a 2D histogram between all adjacent pairs of\n"
  "columns\n"
  " of an input vtkTable. Internally it creates multiple\n"
  "vtkExtractHistogram2D\n"
  " instances (one for each pair of adjacent table columns).  It also\n"
  " manages updating histogram computations intelligently, only\n"
  "recomputing\n"
  " those histograms for whom a relevant property has been altered.\n\n\n"
  " Note that there are two different outputs from this filter.  One is\n"
  "a\n"
  " table for which each column contains a flattened 2D histogram array.\n"
  " The other is a vtkMultiBlockDataSet for which each block is a\n"
  " vtkImageData representation of the 2D histogram.\n\n"
  "@sa\n"
  " vtkExtractHistogram2D vtkPPairwiseExtractHistogram2D\n\n"
  "@par Thanks:\n"
  " Developed by David Feng and Philippe Pebay at Sandia National\n"
  "Laboratories\n"
  "----------------------------------------------------------------------\n"
  "    --------\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPairwiseExtractHistogram2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersImaging.vtkPairwiseExtractHistogram2D", // tp_name
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
  PyvtkPairwiseExtractHistogram2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPairwiseExtractHistogram2D_StaticNew()
{
  return vtkPairwiseExtractHistogram2D::New();
}

PyObject *PyvtkPairwiseExtractHistogram2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPairwiseExtractHistogram2D_Type, PyvtkPairwiseExtractHistogram2D_Methods,
    "vtkPairwiseExtractHistogram2D",
 &PyvtkPairwiseExtractHistogram2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkStatisticsAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPairwiseExtractHistogram2D_OutputIndices_Type);
  PyVTKEnum_Add(&PyvtkPairwiseExtractHistogram2D_OutputIndices_Type, "vtkPairwiseExtractHistogram2D.OutputIndices");

  o = (PyObject *)&PyvtkPairwiseExtractHistogram2D_OutputIndices_Type;
  if (PyDict_SetItemString(d, "OutputIndices", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkPairwiseExtractHistogram2D_OutputIndices_FromEnum(vtkPairwiseExtractHistogram2D::HISTOGRAM_IMAGE);
  if (o)
  {
    PyDict_SetItemString(d, "HISTOGRAM_IMAGE", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPairwiseExtractHistogram2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPairwiseExtractHistogram2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPairwiseExtractHistogram2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

