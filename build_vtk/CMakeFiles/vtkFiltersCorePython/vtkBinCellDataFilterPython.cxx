// python wrapper for vtkBinCellDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBinCellDataFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBinCellDataFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkBinCellDataFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBinCellDataFilter_CellOverlapCriterion_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkBinCellDataFilter.CellOverlapCriterion", // tp_name
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
PyObject *PyvtkBinCellDataFilter_CellOverlapCriterion_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkBinCellDataFilter_CellOverlapCriterion_Type, static_cast<int>(val));
}


static PyObject *
PyvtkBinCellDataFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBinCellDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBinCellDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBinCellDataFilter *tempr = vtkBinCellDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBinCellDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBinCellDataFilter::NewInstance());

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
PyvtkBinCellDataFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBinCellDataFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBinCellDataFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkBinCellDataFilter::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkBinCellDataFilter::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkBinCellDataFilter::GetValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBinCellDataFilter_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetValues(temp0);
    }
    else
    {
      op->vtkBinCellDataFilter::GetValues(temp0);
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
PyvtkBinCellDataFilter_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkBinCellDataFilter_GetValues_s1(self, args);
    case 1:
      return PyvtkBinCellDataFilter_GetValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return nullptr;
}


static PyObject *
PyvtkBinCellDataFilter_SetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfBins(temp0);
    }
    else
    {
      op->vtkBinCellDataFilter::SetNumberOfBins(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_GetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfBins() :
      op->vtkBinCellDataFilter::GetNumberOfBins());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

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
      op->GenerateValues(temp0, temp1);
    }
    else
    {
      op->vtkBinCellDataFilter::GenerateValues(temp0, temp1);
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
PyvtkBinCellDataFilter_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

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
      op->GenerateValues(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBinCellDataFilter::GenerateValues(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBinCellDataFilter_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBinCellDataFilter_GenerateValues_s1(self, args);
    case 3:
      return PyvtkBinCellDataFilter_GenerateValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return nullptr;
}


static PyObject *
PyvtkBinCellDataFilter_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkBinCellDataFilter::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkBinCellDataFilter::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkBinCellDataFilter::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_SetSpatialMatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpatialMatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpatialMatch(temp0);
    }
    else
    {
      op->vtkBinCellDataFilter::SetSpatialMatch(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_GetSpatialMatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpatialMatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSpatialMatch() :
      op->vtkBinCellDataFilter::GetSpatialMatch());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_SpatialMatchOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpatialMatchOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SpatialMatchOn();
    }
    else
    {
      op->vtkBinCellDataFilter::SpatialMatchOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_SpatialMatchOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpatialMatchOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SpatialMatchOff();
    }
    else
    {
      op->vtkBinCellDataFilter::SpatialMatchOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_SetStoreNumberOfNonzeroBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStoreNumberOfNonzeroBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStoreNumberOfNonzeroBins(temp0);
    }
    else
    {
      op->vtkBinCellDataFilter::SetStoreNumberOfNonzeroBins(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_StoreNumberOfNonzeroBinsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StoreNumberOfNonzeroBinsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StoreNumberOfNonzeroBinsOn();
    }
    else
    {
      op->vtkBinCellDataFilter::StoreNumberOfNonzeroBinsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_StoreNumberOfNonzeroBinsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StoreNumberOfNonzeroBinsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StoreNumberOfNonzeroBinsOff();
    }
    else
    {
      op->vtkBinCellDataFilter::StoreNumberOfNonzeroBinsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_GetStoreNumberOfNonzeroBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStoreNumberOfNonzeroBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetStoreNumberOfNonzeroBins() :
      op->vtkBinCellDataFilter::GetStoreNumberOfNonzeroBins());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_SetNumberOfNonzeroBinsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfNonzeroBinsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfNonzeroBinsArrayName(temp0);
    }
    else
    {
      op->vtkBinCellDataFilter::SetNumberOfNonzeroBinsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_GetNumberOfNonzeroBinsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNonzeroBinsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetNumberOfNonzeroBinsArrayName() :
      op->vtkBinCellDataFilter::GetNumberOfNonzeroBinsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

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
      op->vtkBinCellDataFilter::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkBinCellDataFilter::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_SetComputeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeTolerance(temp0);
    }
    else
    {
      op->vtkBinCellDataFilter::SetComputeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_ComputeToleranceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeToleranceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeToleranceOn();
    }
    else
    {
      op->vtkBinCellDataFilter::ComputeToleranceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_ComputeToleranceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeToleranceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeToleranceOff();
    }
    else
    {
      op->vtkBinCellDataFilter::ComputeToleranceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_GetComputeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeTolerance() :
      op->vtkBinCellDataFilter::GetComputeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_SetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayComponent(temp0);
    }
    else
    {
      op->vtkBinCellDataFilter::SetArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent() :
      op->vtkBinCellDataFilter::GetArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_SetCellOverlapMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellOverlapMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellOverlapMethod(temp0);
    }
    else
    {
      op->vtkBinCellDataFilter::SetCellOverlapMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_GetCellOverlapMethodMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellOverlapMethodMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellOverlapMethodMinValue() :
      op->vtkBinCellDataFilter::GetCellOverlapMethodMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_GetCellOverlapMethodMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellOverlapMethodMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellOverlapMethodMaxValue() :
      op->vtkBinCellDataFilter::GetCellOverlapMethodMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_GetCellOverlapMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellOverlapMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellOverlapMethod() :
      op->vtkBinCellDataFilter::GetCellOverlapMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_SetCellLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  vtkAbstractCellLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->SetCellLocator(temp0);
    }
    else
    {
      op->vtkBinCellDataFilter::SetCellLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinCellDataFilter_GetCellLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinCellDataFilter *op = static_cast<vtkBinCellDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLocator *tempr = (ap.IsBound() ?
      op->GetCellLocator() :
      op->vtkBinCellDataFilter::GetCellLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBinCellDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkBinCellDataFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBinCellDataFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBinCellDataFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBinCellDataFilter\nC++: static vtkBinCellDataFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBinCellDataFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBinCellDataFilter\nC++: vtkBinCellDataFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBinCellDataFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBinCellDataFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetValue", PyvtkBinCellDataFilter_SetValue, METH_VARARGS,
   "SetValue(self, i:int, value:float) -> None\nC++: void SetValue(int i, double value)\n\nMethods to set / get bin values.\n"},
  {"GetValue", PyvtkBinCellDataFilter_GetValue, METH_VARARGS,
   "GetValue(self, i:int) -> float\nC++: double GetValue(int i)\n\n"},
  {"GetValues", PyvtkBinCellDataFilter_GetValues, METH_VARARGS,
   "GetValues(self) -> Pointer\nC++: double *GetValues()\nGetValues(self, binValues:[float, ...]) -> None\nC++: void GetValues(double *binValues)\n\n"},
  {"SetNumberOfBins", PyvtkBinCellDataFilter_SetNumberOfBins, METH_VARARGS,
   "SetNumberOfBins(self, numBins:int) -> None\nC++: void SetNumberOfBins(int numBins)\n\n"},
  {"GetNumberOfBins", PyvtkBinCellDataFilter_GetNumberOfBins, METH_VARARGS,
   "GetNumberOfBins(self) -> int\nC++: vtkIdType GetNumberOfBins()\n\n"},
  {"GenerateValues", PyvtkBinCellDataFilter_GenerateValues, METH_VARARGS,
   "GenerateValues(self, numBins:int, range:[float, float]) -> None\nC++: void GenerateValues(int numBins, double range[2])\nGenerateValues(self, numBins:int, rangeStart:float,\n    rangeEnd:float) -> None\nC++: void GenerateValues(int numBins, double rangeStart,\n    double rangeEnd)\n\n"},
  {"SetSourceData", PyvtkBinCellDataFilter_SetSourceData, METH_VARARGS,
   "SetSourceData(self, source:vtkDataObject) -> None\nC++: void SetSourceData(vtkDataObject *source)\n\nSpecify the data set whose cells will be counted. The Input gives\nthe geometry (the points and cells) for the output, while the\nSource is used to determine how many source cells lie within each\ninput cell.\n"},
  {"GetSource", PyvtkBinCellDataFilter_GetSource, METH_VARARGS,
   "GetSource(self) -> vtkDataObject\nC++: vtkDataObject *GetSource()\n\n"},
  {"SetSourceConnection", PyvtkBinCellDataFilter_SetSourceConnection, METH_VARARGS,
   "SetSourceConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the data set whose cells will be counted. The Input gives\nthe geometry (the points and cells) for the output, while the\nSource is used to determine how many source cells lie within each\ninput cell.\n"},
  {"SetSpatialMatch", PyvtkBinCellDataFilter_SetSpatialMatch, METH_VARARGS,
   "SetSpatialMatch(self, _arg:int) -> None\nC++: virtual void SetSpatialMatch(vtkTypeBool _arg)\n\nThis flag is used only when a piece is requested to update.  By\ndefault the flag is off.  Because no spatial correspondence\nbetween input pieces and source pieces is known, all of the\nsource has to be requested no matter what piece of the output is\nrequested.  When there is a spatial correspondence, the\nuser/application can set this flag.  This hint allows the breakup\nof the probe operation to be much more efficient.  When piece m\nof n is requested for update by the user, then only n of m needs\nto be requested of the source.\n"},
  {"GetSpatialMatch", PyvtkBinCellDataFilter_GetSpatialMatch, METH_VARARGS,
   "GetSpatialMatch(self) -> int\nC++: virtual vtkTypeBool GetSpatialMatch()\n\n"},
  {"SpatialMatchOn", PyvtkBinCellDataFilter_SpatialMatchOn, METH_VARARGS,
   "SpatialMatchOn(self) -> None\nC++: virtual void SpatialMatchOn()\n\n"},
  {"SpatialMatchOff", PyvtkBinCellDataFilter_SpatialMatchOff, METH_VARARGS,
   "SpatialMatchOff(self) -> None\nC++: virtual void SpatialMatchOff()\n\n"},
  {"SetStoreNumberOfNonzeroBins", PyvtkBinCellDataFilter_SetStoreNumberOfNonzeroBins, METH_VARARGS,
   "SetStoreNumberOfNonzeroBins(self, _arg:bool) -> None\nC++: virtual void SetStoreNumberOfNonzeroBins(bool _arg)\n\nSet whether to store the number of nonzero bins for each cell. On\nby default.\n"},
  {"StoreNumberOfNonzeroBinsOn", PyvtkBinCellDataFilter_StoreNumberOfNonzeroBinsOn, METH_VARARGS,
   "StoreNumberOfNonzeroBinsOn(self) -> None\nC++: virtual void StoreNumberOfNonzeroBinsOn()\n\n"},
  {"StoreNumberOfNonzeroBinsOff", PyvtkBinCellDataFilter_StoreNumberOfNonzeroBinsOff, METH_VARARGS,
   "StoreNumberOfNonzeroBinsOff(self) -> None\nC++: virtual void StoreNumberOfNonzeroBinsOff()\n\n"},
  {"GetStoreNumberOfNonzeroBins", PyvtkBinCellDataFilter_GetStoreNumberOfNonzeroBins, METH_VARARGS,
   "GetStoreNumberOfNonzeroBins(self) -> bool\nC++: virtual bool GetStoreNumberOfNonzeroBins()\n\n"},
  {"SetNumberOfNonzeroBinsArrayName", PyvtkBinCellDataFilter_SetNumberOfNonzeroBinsArrayName, METH_VARARGS,
   "SetNumberOfNonzeroBinsArrayName(self, _arg:str) -> None\nC++: virtual void SetNumberOfNonzeroBinsArrayName(\n    const char *_arg)\n\nReturns the name of the id array added to the output that holds\nthe number of nonzero bins per cell. Set to \"NumberOfNonzeroBins\"\nby default.\n"},
  {"GetNumberOfNonzeroBinsArrayName", PyvtkBinCellDataFilter_GetNumberOfNonzeroBinsArrayName, METH_VARARGS,
   "GetNumberOfNonzeroBinsArrayName(self) -> str\nC++: virtual char *GetNumberOfNonzeroBinsArrayName()\n\n"},
  {"SetTolerance", PyvtkBinCellDataFilter_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nSet the tolerance used to compute whether a cell centroid in the\nsource is in a cell of the input.  This value is only used if\nComputeTolerance is off.\n"},
  {"GetTolerance", PyvtkBinCellDataFilter_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {"SetComputeTolerance", PyvtkBinCellDataFilter_SetComputeTolerance, METH_VARARGS,
   "SetComputeTolerance(self, _arg:bool) -> None\nC++: virtual void SetComputeTolerance(bool _arg)\n\nSet whether to use the Tolerance field or precompute the\ntolerance. When on, the tolerance will be computed and the field\nvalue is ignored. Off by default.\n"},
  {"ComputeToleranceOn", PyvtkBinCellDataFilter_ComputeToleranceOn, METH_VARARGS,
   "ComputeToleranceOn(self) -> None\nC++: virtual void ComputeToleranceOn()\n\n"},
  {"ComputeToleranceOff", PyvtkBinCellDataFilter_ComputeToleranceOff, METH_VARARGS,
   "ComputeToleranceOff(self) -> None\nC++: virtual void ComputeToleranceOff()\n\n"},
  {"GetComputeTolerance", PyvtkBinCellDataFilter_GetComputeTolerance, METH_VARARGS,
   "GetComputeTolerance(self) -> bool\nC++: virtual bool GetComputeTolerance()\n\n"},
  {"SetArrayComponent", PyvtkBinCellDataFilter_SetArrayComponent, METH_VARARGS,
   "SetArrayComponent(self, _arg:int) -> None\nC++: virtual void SetArrayComponent(int _arg)\n\nSet/get which component of the scalar array to bin; defaults to\n0.\n"},
  {"GetArrayComponent", PyvtkBinCellDataFilter_GetArrayComponent, METH_VARARGS,
   "GetArrayComponent(self) -> int\nC++: virtual int GetArrayComponent()\n\n"},
  {"SetCellOverlapMethod", PyvtkBinCellDataFilter_SetCellOverlapMethod, METH_VARARGS,
   "SetCellOverlapMethod(self, _arg:int) -> None\nC++: virtual void SetCellOverlapMethod(int _arg)\n\nSet whether cell overlap is determined by source cell centroid or\nby source cell points. Centroid by default.\n"},
  {"GetCellOverlapMethodMinValue", PyvtkBinCellDataFilter_GetCellOverlapMethodMinValue, METH_VARARGS,
   "GetCellOverlapMethodMinValue(self) -> int\nC++: virtual int GetCellOverlapMethodMinValue()\n\n"},
  {"GetCellOverlapMethodMaxValue", PyvtkBinCellDataFilter_GetCellOverlapMethodMaxValue, METH_VARARGS,
   "GetCellOverlapMethodMaxValue(self) -> int\nC++: virtual int GetCellOverlapMethodMaxValue()\n\n"},
  {"GetCellOverlapMethod", PyvtkBinCellDataFilter_GetCellOverlapMethod, METH_VARARGS,
   "GetCellOverlapMethod(self) -> int\nC++: virtual int GetCellOverlapMethod()\n\n"},
  {"SetCellLocator", PyvtkBinCellDataFilter_SetCellLocator, METH_VARARGS,
   "SetCellLocator(self, cellLocator:vtkAbstractCellLocator) -> None\nC++: virtual void SetCellLocator(\n    vtkAbstractCellLocator *cellLocator)\n\nSet/Get a spatial locator for speeding the search process. By\ndefault an instance of vtkStaticCellLocator is used.\n"},
  {"GetCellLocator", PyvtkBinCellDataFilter_GetCellLocator, METH_VARARGS,
   "GetCellLocator(self) -> vtkAbstractCellLocator\nC++: virtual vtkAbstractCellLocator *GetCellLocator()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBinCellDataFilter_Doc =
  "vtkBinCellDataFilter - bin source cell data into input cells.\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkBinCellDataFilter takes a source mesh containing scalar cell data,\n"
  "an input mesh and a set of bin values and bins the source mesh's\n"
  "scalar cell data into the cells of the input mesh. The resulting\n"
  "output mesh is identical to the input mesh, with an additional cell\n"
  "data field, with tuple size equal to the number of bins + 1, that\n"
  "represents a histogram of the cell data values for all of the source\n"
  "cells whose centroid lie within the input cell.\n\n"
  "This filter is useful for analyzing the efficacy of an input mesh's\n"
  "ability to represent the cell data of the source mesh.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBinCellDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkBinCellDataFilter", // tp_name
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
  PyvtkBinCellDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBinCellDataFilter_StaticNew()
{
  return vtkBinCellDataFilter::New();
}

PyObject *PyvtkBinCellDataFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBinCellDataFilter_Type, PyvtkBinCellDataFilter_Methods,
    "vtkBinCellDataFilter",
 &PyvtkBinCellDataFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkBinCellDataFilter_CellOverlapCriterion_Type);
  PyVTKEnum_Add(&PyvtkBinCellDataFilter_CellOverlapCriterion_Type, "vtkBinCellDataFilter.CellOverlapCriterion");

  o = (PyObject *)&PyvtkBinCellDataFilter_CellOverlapCriterion_Type;
  if (PyDict_SetItemString(d, "CellOverlapCriterion", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkBinCellDataFilter::CellOverlapCriterion cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "CELL_CENTROID", vtkBinCellDataFilter::CELL_CENTROID },
        { "CELL_POINTS", vtkBinCellDataFilter::CELL_POINTS },
      };

    o = PyvtkBinCellDataFilter_CellOverlapCriterion_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBinCellDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBinCellDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBinCellDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

