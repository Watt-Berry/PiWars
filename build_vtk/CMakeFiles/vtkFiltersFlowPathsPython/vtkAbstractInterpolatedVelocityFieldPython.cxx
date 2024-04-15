// python wrapper for vtkAbstractInterpolatedVelocityField
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAbstractInterpolatedVelocityField.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractInterpolatedVelocityField(PyObject *dict); }
extern "C" { PyObject *PyvtkAbstractInterpolatedVelocityField_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractInterpolatedVelocityField_VelocityFieldInitializationState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkAbstractInterpolatedVelocityField.VelocityFieldInitializationState", // tp_name
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
PyObject *PyvtkAbstractInterpolatedVelocityField_VelocityFieldInitializationState_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAbstractInterpolatedVelocityField_VelocityFieldInitializationState_Type, static_cast<int>(val));
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractInterpolatedVelocityField::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractInterpolatedVelocityField *tempr = vtkAbstractInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractInterpolatedVelocityField::NewInstance());

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
PyvtkAbstractInterpolatedVelocityField_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAbstractInterpolatedVelocityField::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAbstractInterpolatedVelocityField::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  vtkCompositeDataSet *temp0 = nullptr;
  int temp1 = vtkAbstractInterpolatedVelocityField::INITIALIZE_ALL_DATASETS;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetInitializationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitializationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInitializationState() :
      op->vtkAbstractInterpolatedVelocityField::GetInitializationState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCaching(temp0);
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::SetCaching(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCaching() :
      op->vtkAbstractInterpolatedVelocityField::GetCaching());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetCacheHit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheHit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheHit() :
      op->vtkAbstractInterpolatedVelocityField::GetCacheHit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetCacheMiss(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMiss");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheMiss() :
      op->vtkAbstractInterpolatedVelocityField::GetCacheMiss());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetLastDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetLastDataSet() :
      op->vtkAbstractInterpolatedVelocityField::GetLastDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetLastCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetLastCellId() :
      op->vtkAbstractInterpolatedVelocityField::GetLastCellId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetLastCellId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastCellId(temp0);
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::SetLastCellId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetLastCellId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  long long temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetLastCellId(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetLastCellId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAbstractInterpolatedVelocityField_SetLastCellId_s1(self, args);
    case 2:
      return PyvtkAbstractInterpolatedVelocityField_SetLastCellId_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLastCellId");
  return nullptr;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetVectorsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVectorsSelection() :
      op->vtkAbstractInterpolatedVelocityField::GetVectorsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetVectorsType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorsType() :
      op->vtkAbstractInterpolatedVelocityField::GetVectorsType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SelectVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SelectVectors(temp0, temp1);
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::SelectVectors(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetNormalizeVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalizeVector(temp0);
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::SetNormalizeVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetNormalizeVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNormalizeVector() :
      op->vtkAbstractInterpolatedVelocityField::GetNormalizeVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetForceSurfaceTangentVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceSurfaceTangentVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceSurfaceTangentVector(temp0);
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::SetForceSurfaceTangentVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetForceSurfaceTangentVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceSurfaceTangentVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceSurfaceTangentVector() :
      op->vtkAbstractInterpolatedVelocityField::GetForceSurfaceTangentVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetSurfaceDataset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceDataset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceDataset(temp0);
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::SetSurfaceDataset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetSurfaceDataset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceDataset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSurfaceDataset() :
      op->vtkAbstractInterpolatedVelocityField::GetSurfaceDataset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_CopyParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  vtkAbstractInterpolatedVelocityField *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractInterpolatedVelocityField"))
  {
    if (ap.IsBound())
    {
      op->CopyParameters(temp0);
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::CopyParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_FunctionValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = op->FunctionValues(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

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
PyvtkAbstractInterpolatedVelocityField_FunctionValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->FunctionValues(temp0, temp1, temp2) :
      op->vtkAbstractInterpolatedVelocityField::FunctionValues(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

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

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  return result;
}

static PyObject *
PyvtkAbstractInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAbstractInterpolatedVelocityField_FunctionValues_s1(self, args);
    case 3:
      return PyvtkAbstractInterpolatedVelocityField_FunctionValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FunctionValues");
  return nullptr;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_ClearLastCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLastCellId();
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::ClearLastCellId();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetLastWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetLastWeights(temp0) :
      op->vtkAbstractInterpolatedVelocityField::GetLastWeights(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetLastLocalCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastLocalCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetLastLocalCoordinates(temp0) :
      op->vtkAbstractInterpolatedVelocityField::GetLastLocalCoordinates(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_SetFindCellStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFindCellStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  vtkFindCellStrategy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFindCellStrategy"))
  {
    if (ap.IsBound())
    {
      op->SetFindCellStrategy(temp0);
    }
    else
    {
      op->vtkAbstractInterpolatedVelocityField::SetFindCellStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInterpolatedVelocityField_GetFindCellStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFindCellStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInterpolatedVelocityField *op = static_cast<vtkAbstractInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFindCellStrategy *tempr = (ap.IsBound() ?
      op->GetFindCellStrategy() :
      op->vtkAbstractInterpolatedVelocityField::GetFindCellStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractInterpolatedVelocityField_Methods[] = {
  {"IsTypeOf", PyvtkAbstractInterpolatedVelocityField_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractInterpolatedVelocityField_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractInterpolatedVelocityField_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkAbstractInterpolatedVelocityField\nC++: static vtkAbstractInterpolatedVelocityField *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractInterpolatedVelocityField_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAbstractInterpolatedVelocityField\nC++: vtkAbstractInterpolatedVelocityField *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAbstractInterpolatedVelocityField_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAbstractInterpolatedVelocityField_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkAbstractInterpolatedVelocityField_Initialize, METH_VARARGS,
   "Initialize(self, compDS:vtkCompositeDataSet, initStrategy:int=...)\n     -> None\nC++: virtual void Initialize(vtkCompositeDataSet *compDS,\n    int initStrategy=INITIALIZE_ALL_DATASETS)\n\nThe Initialize() method is used to build and cache supporting\nstructures (such as locators) which are used when operating on\nthe interpolated velocity field. This method is needed mainly to\ndeal with thread safety issues; i.e., these supporting structures\nmust be built at the right time to avoid race conditions.\nCurrently this method is used by vtkStreamTracer (and related\nclasses) which process composite datasets (in the future other\ndataset types may be supported). Also, a initialization strategy\ncan be specified which controls how the initialization process\nfunctions (this is a API placeholder for the future). Note that\nsome subclasses may override the initialize method (via\nSelfInitialize()) because they have special methods of setting up\nthe interpolated velocity field.\n"},
  {"GetInitializationState", PyvtkAbstractInterpolatedVelocityField_GetInitializationState, METH_VARARGS,
   "GetInitializationState(self) -> int\nC++: virtual int GetInitializationState()\n\n"},
  {"SetCaching", PyvtkAbstractInterpolatedVelocityField_SetCaching, METH_VARARGS,
   "SetCaching(self, _arg:bool) -> None\nC++: virtual void SetCaching(bool _arg)\n\nSet/Get the caching flag. If this flag is turned ON, there are\ntwo levels of caching for when the strategy is CLOSEST_POINT and\none level of caching when the strategy is CELL_LOCATOR. Otherwise\na global cell location is always invoked for evaluating the\nfunction values at any point.\n"},
  {"GetCaching", PyvtkAbstractInterpolatedVelocityField_GetCaching, METH_VARARGS,
   "GetCaching(self) -> bool\nC++: virtual bool GetCaching()\n\n"},
  {"GetCacheHit", PyvtkAbstractInterpolatedVelocityField_GetCacheHit, METH_VARARGS,
   "GetCacheHit(self) -> int\nC++: virtual int GetCacheHit()\n\nGet the caching statistics. CacheHit refers to the number of\nlevel #0 cache hits while CacheMiss is the number of level #0\ncache misses.\n"},
  {"GetCacheMiss", PyvtkAbstractInterpolatedVelocityField_GetCacheMiss, METH_VARARGS,
   "GetCacheMiss(self) -> int\nC++: virtual int GetCacheMiss()\n\n"},
  {"GetLastDataSet", PyvtkAbstractInterpolatedVelocityField_GetLastDataSet, METH_VARARGS,
   "GetLastDataSet(self) -> vtkDataSet\nC++: virtual vtkDataSet *GetLastDataSet()\n\n"},
  {"GetLastCellId", PyvtkAbstractInterpolatedVelocityField_GetLastCellId, METH_VARARGS,
   "GetLastCellId(self) -> int\nC++: virtual vtkIdType GetLastCellId()\n\nGet/Set the id of the cell cached from last evaluation.\n"},
  {"SetLastCellId", PyvtkAbstractInterpolatedVelocityField_SetLastCellId, METH_VARARGS,
   "SetLastCellId(self, c:int) -> None\nC++: virtual void SetLastCellId(vtkIdType c)\nSetLastCellId(self, c:int, dataindex:int) -> None\nC++: virtual void SetLastCellId(vtkIdType c, int dataindex)\n\n"},
  {"GetVectorsSelection", PyvtkAbstractInterpolatedVelocityField_GetVectorsSelection, METH_VARARGS,
   "GetVectorsSelection(self) -> str\nC++: virtual char *GetVectorsSelection()\n\nGet/Set the name of a specified vector array. By default it is\nnullptr, with the active vector array for use.\n"},
  {"GetVectorsType", PyvtkAbstractInterpolatedVelocityField_GetVectorsType, METH_VARARGS,
   "GetVectorsType(self) -> int\nC++: virtual int GetVectorsType()\n\n"},
  {"SelectVectors", PyvtkAbstractInterpolatedVelocityField_SelectVectors, METH_VARARGS,
   "SelectVectors(self, fieldAssociation:int, fieldName:str) -> None\nC++: void SelectVectors(int fieldAssociation,\n    const char *fieldName)\n\nthe association type (see vtkDataObject::FieldAssociations) and\nthe name of the velocity data field\n"},
  {"SetNormalizeVector", PyvtkAbstractInterpolatedVelocityField_SetNormalizeVector, METH_VARARGS,
   "SetNormalizeVector(self, _arg:bool) -> None\nC++: virtual void SetNormalizeVector(bool _arg)\n\nSet/Get the flag indicating vector post-normalization (following\nvector interpolation). Vector post-normalization is required to\navoid the 'curve-overshooting' problem (caused by high velocity\nmagnitude) that occurs when Cell-Length is used as the step size\nunit (particularly the Minimum step size unit). Furthermore, it\nis required by RK45 to achieve, as expected, high numerical\naccuracy (or high smoothness of flow lines) through adaptive step\nsizing. Note this operation is performed (when NormalizeVector\nTRUE) right after vector interpolation such that the differing\namount of contribution of each node (of a cell) to the resulting\ndirection of the interpolated vector, due to the possibly\nsignificantly-differing velocity magnitude values at the nodes\n(which is the case with large cells), can be reflected as is.\nAlso note that this flag needs to be turned to FALSE after\nvtkInitialValueProblemSolver:: ComputeNextStep() as subsequent\noperations, e.g., vorticity computation, may need non-normalized\nvectors.\n"},
  {"GetNormalizeVector", PyvtkAbstractInterpolatedVelocityField_GetNormalizeVector, METH_VARARGS,
   "GetNormalizeVector(self) -> bool\nC++: virtual bool GetNormalizeVector()\n\n"},
  {"SetForceSurfaceTangentVector", PyvtkAbstractInterpolatedVelocityField_SetForceSurfaceTangentVector, METH_VARARGS,
   "SetForceSurfaceTangentVector(self, _arg:bool) -> None\nC++: virtual void SetForceSurfaceTangentVector(bool _arg)\n\nIf set to true, the first three point of the cell will be used to\ncompute a normal to the cell, this normal will then be removed\nfrom the vorticity so the resulting vector in tangent to the\ncell.\n"},
  {"GetForceSurfaceTangentVector", PyvtkAbstractInterpolatedVelocityField_GetForceSurfaceTangentVector, METH_VARARGS,
   "GetForceSurfaceTangentVector(self) -> bool\nC++: virtual bool GetForceSurfaceTangentVector()\n\n"},
  {"SetSurfaceDataset", PyvtkAbstractInterpolatedVelocityField_SetSurfaceDataset, METH_VARARGS,
   "SetSurfaceDataset(self, _arg:bool) -> None\nC++: virtual void SetSurfaceDataset(bool _arg)\n\nIf set to true, cell within tolerance factor will always be\nfound, except for edges.\n"},
  {"GetSurfaceDataset", PyvtkAbstractInterpolatedVelocityField_GetSurfaceDataset, METH_VARARGS,
   "GetSurfaceDataset(self) -> bool\nC++: virtual bool GetSurfaceDataset()\n\n"},
  {"CopyParameters", PyvtkAbstractInterpolatedVelocityField_CopyParameters, METH_VARARGS,
   "CopyParameters(self, from_:vtkAbstractInterpolatedVelocityField)\n    -> None\nC++: virtual void CopyParameters(\n    vtkAbstractInterpolatedVelocityField *from)\n\nCopy essential parameters between instances of this class. This\ngenerally is used to copy from instance prototype to another, or\nto copy interpolators between thread instances.  Sub-classes can\ncontribute to the parameter copying process via chaining.\n"},
  {"FunctionValues", PyvtkAbstractInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   "FunctionValues(self, x:[float, ...], f:[float, ...]) -> int\nC++: int FunctionValues(double *x, double *f) override = 0;\nFunctionValues(self, x:[float, ...], f:[float, ...],\n    userData:Pointer) -> int\nC++: virtual int FunctionValues(double *x, double *f,\n    void *userData)\n\nEvaluate the velocity field f at point (x, y, z).\n"},
  {"ClearLastCellId", PyvtkAbstractInterpolatedVelocityField_ClearLastCellId, METH_VARARGS,
   "ClearLastCellId(self) -> None\nC++: void ClearLastCellId()\n\nSet the last cell id to -1 to incur a global cell search for the\nnext point.\n"},
  {"GetLastWeights", PyvtkAbstractInterpolatedVelocityField_GetLastWeights, METH_VARARGS,
   "GetLastWeights(self, w:[float, ...]) -> int\nC++: int GetLastWeights(double *w)\n\nGet the interpolation weights cached from last evaluation. Return\n1 if the cached cell is valid and 0 otherwise.\n"},
  {"GetLastLocalCoordinates", PyvtkAbstractInterpolatedVelocityField_GetLastLocalCoordinates, METH_VARARGS,
   "GetLastLocalCoordinates(self, pcoords:[float, float, float])\n    -> int\nC++: int GetLastLocalCoordinates(double pcoords[3])\n\n"},
  {"SetFindCellStrategy", PyvtkAbstractInterpolatedVelocityField_SetFindCellStrategy, METH_VARARGS,
   "SetFindCellStrategy(self, __a:vtkFindCellStrategy) -> None\nC++: virtual void SetFindCellStrategy(vtkFindCellStrategy *)\n\nSet / get the strategy used to perform the FindCell() operation.\nThis strategy is used when operating on vtkPointSet subclasses.\nNote if the input is a composite dataset then the strategy will\nbe used to clone one strategy per leaf dataset.\n"},
  {"GetFindCellStrategy", PyvtkAbstractInterpolatedVelocityField_GetFindCellStrategy, METH_VARARGS,
   "GetFindCellStrategy(self) -> vtkFindCellStrategy\nC++: virtual vtkFindCellStrategy *GetFindCellStrategy()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAbstractInterpolatedVelocityField_Doc =
  "vtkAbstractInterpolatedVelocityField - An abstract class for\n obtaining the interpolated velocity values at a point\n\n"
  "Superclass: vtkFunctionSet\n\n"
  "vtkAbstractInterpolatedVelocityField acts as a continuous velocity\n"
  "field\n"
  " by performing cell interpolation on the underlying vtkDataSet (or in\n"
  "the\n"
  " case of vtkCompositeInterpolatedVelocityField,\n"
  " vtkCompositeDataSets). This is an abstract sub-class of\n"
  "vtkFunctionSet,\n"
  " NumberOfIndependentVariables = 4 (x,y,z,t) and NumberOfFunctions = 3\n"
  " (u,v,w). With a brute-force scheme, every time an evaluation is\n"
  " performed, the target cell containing point (x,y,z) needs to be\n"
  "found by\n"
  " calling FindCell(); however vtkAbstractInterpolatedVelocityField\n"
  "uses\n"
  " locators to accelerate this operation via an instance of\n"
  " vtkFindCellStrategy. Even with the use of locators, the cost of the\n"
  "find\n"
  " cell operation can be large, hence this class performs local caching\n"
  "to\n"
  " reduce the number of invocations of FindCell(). As a result, this\n"
  "class\n"
  " is not thread safe as it contains local state (such as the cache\n"
  " information). Writing a threaded operations requires separate\n"
  "instances of\n"
  " vtkAbstractInterpolatedVelocityField for each thread.\n\n\n"
  " For vtkCompositeInterpolatedVelocityField with CLOSEST_POINT\n"
  "strategy,\n"
  " level #0 begins with intra-cell caching.\n"
  " Specifically if the previous cell is valid and the next point is\n"
  "still in\n"
  " it ( i.e., vtkCell::EvaluatePosition() returns 1, coupled with newly\n"
  "created\n"
  " parametric coordinates & weights ), the function values can be\n"
  "interpolated\n"
  " and only vtkCell::EvaluatePosition() is invoked. If this fails, then\n"
  "level #1\n"
  " follows by inter-cell search for the target cell that contains the\n"
  "next point.\n"
  " By an inter-cell search, the previous cell provides an important\n"
  "clue or serves\n"
  " as an immediate neighbor to aid in locating the target cell via\n"
  "vtkPointSet::\n"
  " FindCell(). If this still fails, a global cell location / search is\n"
  "invoked via\n"
  " vtkFindCellStrategy. Finally, if this operation fails, the\n"
  "streamline is\n"
  " considered terminated.\n\n\n"
  " Note the particular find cell strategy employed can affect the\n"
  "behavior\n"
  " of this class. If the strategy involved using a point locator (e.g.,\n"
  " vtkStaticPointLocator or vtkPointLocator via vtkClosestPointStrategy\n"
  "or\n"
  " vtkClosestNPointsStrategy) the performance of the class improves to\n"
  "the\n"
  " detriment of robustness. Using a cell locator (e.g.,\n"
  "vtkStaticCellLocator\n"
  " or vtkCellLocator via vtkCellLocatorStrategy) improves robustness at\n"
  "some\n"
  " cost to performance. Originally, these different behaviors (i.e.,\n"
  "using\n"
  " different locators) was codified into different subclasses of\n"
  " vtkAbstractInterpolatedVelocityField.\n\n\n"
  " Note that topologically structured classes such as vtkImageData and\n"
  " vtkRectilinearGrid are able to provide fast robust cell location.\n"
  "Hence\n"
  " the specified find cell strategy is only applicable to subclasses of\n"
  " vtkPointSet (such as vtkUnstructuredGrid).\n\n"
  "@warning\n"
  " vtkAbstractInterpolatedVelocityField is not thread safe. A new\n"
  "instance\n"
  " should be created by each thread.\n\n"
  "@sa\n"
  " vtkCompositeInterpolatedVelocityField\n"
  "vtkAMRInterpolatedVelocityField\n"
  " vtkGenericInterpolatedVelocityField\n"
  "vtkCachingInterpolatedVelocityField\n"
  " vtkTemporalInterpolatedVelocityField vtkFunctionSet vtkStreamTracer\n"
  " vtkFindCellStrategy\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractInterpolatedVelocityField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkAbstractInterpolatedVelocityField", // tp_name
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
  PyvtkAbstractInterpolatedVelocityField_Doc, // tp_doc
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

PyObject *PyvtkAbstractInterpolatedVelocityField_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAbstractInterpolatedVelocityField_Type, PyvtkAbstractInterpolatedVelocityField_Methods,
    "vtkAbstractInterpolatedVelocityField",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkFunctionSet");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAbstractInterpolatedVelocityField_VelocityFieldInitializationState_Type);
  PyVTKEnum_Add(&PyvtkAbstractInterpolatedVelocityField_VelocityFieldInitializationState_Type, "vtkAbstractInterpolatedVelocityField.VelocityFieldInitializationState");

  o = (PyObject *)&PyvtkAbstractInterpolatedVelocityField_VelocityFieldInitializationState_Type;
  if (PyDict_SetItemString(d, "VelocityFieldInitializationState", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkAbstractInterpolatedVelocityField::VelocityFieldInitializationState cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "NOT_INITIALIZED", vtkAbstractInterpolatedVelocityField::NOT_INITIALIZED },
        { "INITIALIZE_ALL_DATASETS", vtkAbstractInterpolatedVelocityField::INITIALIZE_ALL_DATASETS },
        { "SELF_INITIALIZE", vtkAbstractInterpolatedVelocityField::SELF_INITIALIZE },
      };

    o = PyvtkAbstractInterpolatedVelocityField_VelocityFieldInitializationState_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractInterpolatedVelocityField(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractInterpolatedVelocityField_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractInterpolatedVelocityField", o) != 0)
  {
    Py_DECREF(o);
  }

}

