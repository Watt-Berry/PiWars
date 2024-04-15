// python wrapper for vtkTemporalInterpolatedVelocityField
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTemporalInterpolatedVelocityField.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTemporalInterpolatedVelocityField(PyObject *dict); }
extern "C" { PyObject *PyvtkTemporalInterpolatedVelocityField_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTemporalInterpolatedVelocityField_IDStates_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkTemporalInterpolatedVelocityField.IDStates", // tp_name
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
PyObject *PyvtkTemporalInterpolatedVelocityField_IDStates_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkTemporalInterpolatedVelocityField_IDStates_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTemporalInterpolatedVelocityField_MeshOverTimeTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkTemporalInterpolatedVelocityField.MeshOverTimeTypes", // tp_name
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
PyObject *PyvtkTemporalInterpolatedVelocityField_MeshOverTimeTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkTemporalInterpolatedVelocityField_MeshOverTimeTypes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTemporalInterpolatedVelocityField::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTemporalInterpolatedVelocityField *tempr = vtkTemporalInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTemporalInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalInterpolatedVelocityField::NewInstance());

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
PyvtkTemporalInterpolatedVelocityField_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTemporalInterpolatedVelocityField::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTemporalInterpolatedVelocityField::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SetMeshOverTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshOverTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMeshOverTime(temp0);
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::SetMeshOverTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetMeshOverTimeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshOverTimeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMeshOverTimeMinValue() :
      op->vtkTemporalInterpolatedVelocityField::GetMeshOverTimeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetMeshOverTimeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshOverTimeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMeshOverTimeMaxValue() :
      op->vtkTemporalInterpolatedVelocityField::GetMeshOverTimeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SetMeshOverTimeToDifferent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshOverTimeToDifferent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMeshOverTimeToDifferent();
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::SetMeshOverTimeToDifferent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SetMeshOverTimeToStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshOverTimeToStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMeshOverTimeToStatic();
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::SetMeshOverTimeToStatic();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SetMeshOverTimeToLinearTransformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshOverTimeToLinearTransformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMeshOverTimeToLinearTransformation();
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::SetMeshOverTimeToLinearTransformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SetMeshOverTimeToSameTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshOverTimeToSameTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMeshOverTimeToSameTopology();
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::SetMeshOverTimeToSameTopology();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetMeshOverTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshOverTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMeshOverTime() :
      op->vtkTemporalInterpolatedVelocityField::GetMeshOverTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  vtkCompositeDataSet *temp0 = nullptr;
  vtkCompositeDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet") &&
      ap.GetVTKObject(temp1, "vtkCompositeDataSet"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1);
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::Initialize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_CopyParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  vtkTemporalInterpolatedVelocityField *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTemporalInterpolatedVelocityField"))
  {
    if (ap.IsBound())
    {
      op->CopyParameters(temp0);
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::CopyParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_FunctionValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->FunctionValues(temp0, temp1) :
      op->vtkTemporalInterpolatedVelocityField::FunctionValues(temp0, temp1));

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
PyvtkTemporalInterpolatedVelocityField_FunctionValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

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
      op->vtkTemporalInterpolatedVelocityField::FunctionValues(temp0, temp1, temp2));

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
PyvtkTemporalInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTemporalInterpolatedVelocityField_FunctionValues_s1(self, args);
    case 3:
      return PyvtkTemporalInterpolatedVelocityField_FunctionValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FunctionValues");
  return nullptr;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_FunctionValuesAtT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValuesAtT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->FunctionValuesAtT(temp0, temp1, temp2) :
      op->vtkTemporalInterpolatedVelocityField::FunctionValuesAtT(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

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
PyvtkTemporalInterpolatedVelocityField_SelectVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectVectors(temp0);
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::SelectVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_AddDataSetAtTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSetAtTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  double temp1;
  vtkDataSet *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->AddDataSetAtTime(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::AddDataSetAtTime(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SetDataSetAtTime(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetDataSetAtTime."
    " (" "Use AddDataSetAtTime and SetMeshOverTime instead" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetDataSetAtTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  int temp1;
  double temp2;
  vtkDataSet *temp3 = nullptr;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataSet") &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetDataSetAtTime(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::SetDataSetAtTime(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetCachedCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCachedCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  const size_t size0 = 2;
  long long temp0[2];
  long long save0[2];
  const size_t size1 = 2;
  int temp1[2];
  int save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetCachedCellIds(temp0, temp1) :
      op->vtkTemporalInterpolatedVelocityField::GetCachedCellIds(temp0, temp1));

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
PyvtkTemporalInterpolatedVelocityField_SetCachedCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCachedCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  const size_t size0 = 2;
  long long temp0[2];
  long long save0[2];
  const size_t size1 = 2;
  int temp1[2];
  int save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetCachedCellIds(temp0, temp1);
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::SetCachedCellIds(temp0, temp1);
    }

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_ClearCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearCache();
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::ClearCache();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_TestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

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
      op->TestPoint(temp0) :
      op->vtkTemporalInterpolatedVelocityField::TestPoint(temp0));

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
PyvtkTemporalInterpolatedVelocityField_QuickTestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "QuickTestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

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
      op->QuickTestPoint(temp0) :
      op->vtkTemporalInterpolatedVelocityField::QuickTestPoint(temp0));

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
PyvtkTemporalInterpolatedVelocityField_GetLastGoodVelocity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastGoodVelocity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLastGoodVelocity() :
      op->vtkTemporalInterpolatedVelocityField::GetLastGoodVelocity());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetCurrentWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCurrentWeight() :
      op->vtkTemporalInterpolatedVelocityField::GetCurrentWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  vtkPointData *temp0 = nullptr;
  vtkPointData *temp1 = nullptr;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPointData") &&
      ap.GetVTKObject(temp1, "vtkPointData") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->InterpolatePoint(temp0, temp1, temp2) :
      op->vtkTemporalInterpolatedVelocityField::InterpolatePoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  vtkPointData *temp1 = nullptr;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPointData") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->InterpolatePoint(temp0, temp1, temp2) :
      op->vtkTemporalInterpolatedVelocityField::InterpolatePoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_Methods[] = {
  {"InterpolatePoint", PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_s1, METH_VARARGS,
   "@VVk *vtkPointData *vtkPointData"},
  {"InterpolatePoint", PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_s2, METH_VARARGS,
   "@iVk *vtkPointData"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTemporalInterpolatedVelocityField_InterpolatePoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTemporalInterpolatedVelocityField_InterpolatePoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InterpolatePoint");
  return nullptr;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_ShowCacheResults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCacheResults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowCacheResults();
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::ShowCacheResults();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_IsStatic(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method IsStatic."
    " (" "Use GetMeshOverTime() instead." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "IsStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsStatic(temp0) :
      op->vtkTemporalInterpolatedVelocityField::IsStatic(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_AdvanceOneTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdvanceOneTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdvanceOneTimeStep();
    }
    else
    {
      op->vtkTemporalInterpolatedVelocityField::AdvanceOneTimeStep();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_SetFindCellStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFindCellStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

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
      op->vtkTemporalInterpolatedVelocityField::SetFindCellStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalInterpolatedVelocityField_GetFindCellStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFindCellStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalInterpolatedVelocityField *op = static_cast<vtkTemporalInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFindCellStrategy *tempr = (ap.IsBound() ?
      op->GetFindCellStrategy() :
      op->vtkTemporalInterpolatedVelocityField::GetFindCellStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalInterpolatedVelocityField_Methods[] = {
  {"IsTypeOf", PyvtkTemporalInterpolatedVelocityField_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTemporalInterpolatedVelocityField_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTemporalInterpolatedVelocityField_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkTemporalInterpolatedVelocityField\nC++: static vtkTemporalInterpolatedVelocityField *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTemporalInterpolatedVelocityField_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTemporalInterpolatedVelocityField\nC++: vtkTemporalInterpolatedVelocityField *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTemporalInterpolatedVelocityField_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTemporalInterpolatedVelocityField_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMeshOverTime", PyvtkTemporalInterpolatedVelocityField_SetMeshOverTime, METH_VARARGS,
   "SetMeshOverTime(self, _arg:int) -> None\nC++: virtual void SetMeshOverTime(int _arg)\n\n"},
  {"GetMeshOverTimeMinValue", PyvtkTemporalInterpolatedVelocityField_GetMeshOverTimeMinValue, METH_VARARGS,
   "GetMeshOverTimeMinValue(self) -> int\nC++: virtual int GetMeshOverTimeMinValue()\n\n"},
  {"GetMeshOverTimeMaxValue", PyvtkTemporalInterpolatedVelocityField_GetMeshOverTimeMaxValue, METH_VARARGS,
   "GetMeshOverTimeMaxValue(self) -> int\nC++: virtual int GetMeshOverTimeMaxValue()\n\n"},
  {"SetMeshOverTimeToDifferent", PyvtkTemporalInterpolatedVelocityField_SetMeshOverTimeToDifferent, METH_VARARGS,
   "SetMeshOverTimeToDifferent(self) -> None\nC++: void SetMeshOverTimeToDifferent()\n\n"},
  {"SetMeshOverTimeToStatic", PyvtkTemporalInterpolatedVelocityField_SetMeshOverTimeToStatic, METH_VARARGS,
   "SetMeshOverTimeToStatic(self) -> None\nC++: void SetMeshOverTimeToStatic()\n\n"},
  {"SetMeshOverTimeToLinearTransformation", PyvtkTemporalInterpolatedVelocityField_SetMeshOverTimeToLinearTransformation, METH_VARARGS,
   "SetMeshOverTimeToLinearTransformation(self) -> None\nC++: void SetMeshOverTimeToLinearTransformation()\n\n"},
  {"SetMeshOverTimeToSameTopology", PyvtkTemporalInterpolatedVelocityField_SetMeshOverTimeToSameTopology, METH_VARARGS,
   "SetMeshOverTimeToSameTopology(self) -> None\nC++: void SetMeshOverTimeToSameTopology()\n\n"},
  {"GetMeshOverTime", PyvtkTemporalInterpolatedVelocityField_GetMeshOverTime, METH_VARARGS,
   "GetMeshOverTime(self) -> int\nC++: virtual int GetMeshOverTime()\n\n"},
  {"Initialize", PyvtkTemporalInterpolatedVelocityField_Initialize, METH_VARARGS,
   "Initialize(self, t0:vtkCompositeDataSet, t1:vtkCompositeDataSet)\n    -> None\nC++: void Initialize(vtkCompositeDataSet *t0,\n    vtkCompositeDataSet *t1)\n\nThe Initialize() method is used to build and cache supporting\nstructures (such as locators) which are used when operating on\nthe interpolated velocity field. This method is needed mainly to\ndeal with thread safety issues; i.e., these supporting structures\nmust be built at the right time to avoid race conditions.\n"},
  {"CopyParameters", PyvtkTemporalInterpolatedVelocityField_CopyParameters, METH_VARARGS,
   "CopyParameters(self, from_:vtkTemporalInterpolatedVelocityField)\n    -> None\nC++: virtual void CopyParameters(\n    vtkTemporalInterpolatedVelocityField *from)\n\nCopy essential parameters between instances of this class. This\ngenerally is used to copy from instance prototype to another, or\nto copy interpolators between thread instances.  Sub-classes can\ncontribute to the parameter copying process via chaining.\n"},
  {"FunctionValues", PyvtkTemporalInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   "FunctionValues(self, x:[float, ...], u:[float, ...]) -> int\nC++: int FunctionValues(double *x, double *u) override;\nFunctionValues(self, x:[float, ...], f:[float, ...],\n    userData:Pointer) -> int\nC++: virtual int FunctionValues(double *x, double *f,\n    void *userData)\n\nEvaluate the velocity field, f, at (x, y, z, t). For now, t is\nignored.\n"},
  {"FunctionValuesAtT", PyvtkTemporalInterpolatedVelocityField_FunctionValuesAtT, METH_VARARGS,
   "FunctionValuesAtT(self, T:int, x:[float, ...], u:[float, ...])\n    -> int\nC++: int FunctionValuesAtT(int T, double *x, double *u)\n\n"},
  {"SelectVectors", PyvtkTemporalInterpolatedVelocityField_SelectVectors, METH_VARARGS,
   "SelectVectors(self, fieldName:str) -> None\nC++: void SelectVectors(const char *fieldName)\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this is nullptr and the filter will use the\nactive vector array.\n"},
  {"AddDataSetAtTime", PyvtkTemporalInterpolatedVelocityField_AddDataSetAtTime, METH_VARARGS,
   "AddDataSetAtTime(self, N:int, T:float, dataset:vtkDataSet) -> None\nC++: void AddDataSetAtTime(int N, double T, vtkDataSet *dataset)\n\nIn order to use this class, two sets of data must be supplied,\ncorresponding to times T1 and T2. Data is added via this\nfunction.\n"},
  {"SetDataSetAtTime", PyvtkTemporalInterpolatedVelocityField_SetDataSetAtTime, METH_VARARGS,
   "SetDataSetAtTime(self, __a:int, __b:int, __c:float,\n    __d:vtkDataSet, __e:bool) -> None\nC++: void SetDataSetAtTime(int, int, double, vtkDataSet *, bool)\n\n"},
  {"GetCachedCellIds", PyvtkTemporalInterpolatedVelocityField_GetCachedCellIds, METH_VARARGS,
   "GetCachedCellIds(self, id:[int, int], ds:[int, int]) -> bool\nC++: bool GetCachedCellIds(vtkIdType id[2], int ds[2])\n\nBetween iterations of the Particle Tracer, Id's of the Cell are\nstored and then at the start of the next particle the Ids are set\nto 'pre-fill' the cache.\n"},
  {"SetCachedCellIds", PyvtkTemporalInterpolatedVelocityField_SetCachedCellIds, METH_VARARGS,
   "SetCachedCellIds(self, id:[int, int], ds:[int, int]) -> None\nC++: void SetCachedCellIds(vtkIdType id[2], int ds[2])\n\n"},
  {"ClearCache", PyvtkTemporalInterpolatedVelocityField_ClearCache, METH_VARARGS,
   "ClearCache(self) -> None\nC++: void ClearCache()\n\nSet the last cell id to -1 so that the next search does not start\nfrom the previous cell\n"},
  {"TestPoint", PyvtkTemporalInterpolatedVelocityField_TestPoint, METH_VARARGS,
   "TestPoint(self, x:[float, ...]) -> int\nC++: int TestPoint(double *x)\n\nA utility function which evaluates the point at T1, T2 to see if\nit is inside the data at both times or only one.\n"},
  {"QuickTestPoint", PyvtkTemporalInterpolatedVelocityField_QuickTestPoint, METH_VARARGS,
   "QuickTestPoint(self, x:[float, ...]) -> int\nC++: int QuickTestPoint(double *x)\n\n"},
  {"GetLastGoodVelocity", PyvtkTemporalInterpolatedVelocityField_GetLastGoodVelocity, METH_VARARGS,
   "GetLastGoodVelocity(self) -> (float, float, float)\nC++: virtual double *GetLastGoodVelocity()\n\nIf an interpolation was successful, we can retrieve the last\ncomputed value from here. Initial value is (0.0,0.0,0.0)\n"},
  {"GetCurrentWeight", PyvtkTemporalInterpolatedVelocityField_GetCurrentWeight, METH_VARARGS,
   "GetCurrentWeight(self) -> float\nC++: virtual double GetCurrentWeight()\n\nGet the most recent weight between 0->1 from T1->T2. Initial\nvalue is 0.\n"},
  {"InterpolatePoint", PyvtkTemporalInterpolatedVelocityField_InterpolatePoint, METH_VARARGS,
   "InterpolatePoint(self, outPD1:vtkPointData, outPD2:vtkPointData,\n    outIndex:int) -> bool\nC++: bool InterpolatePoint(vtkPointData *outPD1,\n    vtkPointData *outPD2, vtkIdType outIndex)\nInterpolatePoint(self, T:int, outPD1:vtkPointData, outIndex:int)\n    -> bool\nC++: bool InterpolatePoint(int T, vtkPointData *outPD1,\n    vtkIdType outIndex)\n\n"},
  {"ShowCacheResults", PyvtkTemporalInterpolatedVelocityField_ShowCacheResults, METH_VARARGS,
   "ShowCacheResults(self) -> None\nC++: void ShowCacheResults()\n\n"},
  {"IsStatic", PyvtkTemporalInterpolatedVelocityField_IsStatic, METH_VARARGS,
   "IsStatic(self, __a:int) -> bool\nC++: bool IsStatic(int)\n\n"},
  {"AdvanceOneTimeStep", PyvtkTemporalInterpolatedVelocityField_AdvanceOneTimeStep, METH_VARARGS,
   "AdvanceOneTimeStep(self) -> None\nC++: void AdvanceOneTimeStep()\n\n"},
  {"SetFindCellStrategy", PyvtkTemporalInterpolatedVelocityField_SetFindCellStrategy, METH_VARARGS,
   "SetFindCellStrategy(self, __a:vtkFindCellStrategy) -> None\nC++: virtual void SetFindCellStrategy(vtkFindCellStrategy *)\n\nSet / get the strategy used to perform the FindCell() operation.\nThis strategy is used when operating on vtkPointSet subclasses.\nNote if the input is a composite dataset then the strategy will\nbe used to clone one strategy per leaf dataset.\n"},
  {"GetFindCellStrategy", PyvtkTemporalInterpolatedVelocityField_GetFindCellStrategy, METH_VARARGS,
   "GetFindCellStrategy(self) -> vtkFindCellStrategy\nC++: virtual vtkFindCellStrategy *GetFindCellStrategy()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTemporalInterpolatedVelocityField_Doc =
  "vtkTemporalInterpolatedVelocityField - A helper class for\ninterpolating between times during particle tracing\n\n"
  "Superclass: vtkFunctionSet\n\n"
  "vtkTemporalInterpolatedVelocityField is a general purpose helper for\n"
  "the temporal particle tracing code (vtkParticleTracerBase)\n\n"
  "It maintains two copies of vtkCompositeInterpolatedVelocityField\n"
  "internally and uses them to obtain velocity values at time T0 and T1.\n\n"
  "In fact the class does quite a bit more than this because when the\n"
  "geometry of the datasets is the same at T0 and T1, we can re-use\n"
  "cached cell Ids and weights used in the cell interpolation routines.\n"
  "Additionally, the same weights can be used when interpolating (point)\n"
  "scalar values and computing vorticity etc.\n\n"
  "@warning\n"
  "vtkTemporalInterpolatedVelocityField is not thread safe. A new\n"
  "instance should be created by each thread.\n\n"
  "@warning\n"
  "Datasets are added in lists. The list for T1 must be identical to\n"
  "that for T0 in structure/topology and dataset order, and any datasets\n"
  "marked as static, must remain so for all T - changing a dataset from\n"
  "static to dynamic between time steps will result in undefined\n"
  "behaviour (=crash probably)\n\n"
  "@sa\n"
  "vtkCompositeInterpolatedVelocityField vtkParticleTracerBase\n"
  "vtkParticleTracer vtkParticlePathFilter vtkStreaklineFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTemporalInterpolatedVelocityField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkTemporalInterpolatedVelocityField", // tp_name
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
  PyvtkTemporalInterpolatedVelocityField_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTemporalInterpolatedVelocityField_StaticNew()
{
  return vtkTemporalInterpolatedVelocityField::New();
}

PyObject *PyvtkTemporalInterpolatedVelocityField_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTemporalInterpolatedVelocityField_Type, PyvtkTemporalInterpolatedVelocityField_Methods,
    "vtkTemporalInterpolatedVelocityField",
 &PyvtkTemporalInterpolatedVelocityField_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkFunctionSet");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkTemporalInterpolatedVelocityField_IDStates_Type);
  PyVTKEnum_Add(&PyvtkTemporalInterpolatedVelocityField_IDStates_Type, "vtkTemporalInterpolatedVelocityField.IDStates");

  o = (PyObject *)&PyvtkTemporalInterpolatedVelocityField_IDStates_Type;
  if (PyDict_SetItemString(d, "IDStates", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkTemporalInterpolatedVelocityField_MeshOverTimeTypes_Type);
  PyVTKEnum_Add(&PyvtkTemporalInterpolatedVelocityField_MeshOverTimeTypes_Type, "vtkTemporalInterpolatedVelocityField.MeshOverTimeTypes");

  o = (PyObject *)&PyvtkTemporalInterpolatedVelocityField_MeshOverTimeTypes_Type;
  if (PyDict_SetItemString(d, "MeshOverTimeTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkTemporalInterpolatedVelocityField::IDStates cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "INSIDE_ALL", vtkTemporalInterpolatedVelocityField::INSIDE_ALL },
        { "OUTSIDE_ALL", vtkTemporalInterpolatedVelocityField::OUTSIDE_ALL },
        { "OUTSIDE_T0", vtkTemporalInterpolatedVelocityField::OUTSIDE_T0 },
        { "OUTSIDE_T1", vtkTemporalInterpolatedVelocityField::OUTSIDE_T1 },
      };

    o = PyvtkTemporalInterpolatedVelocityField_IDStates_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkTemporalInterpolatedVelocityField::MeshOverTimeTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "DIFFERENT", vtkTemporalInterpolatedVelocityField::DIFFERENT },
        { "STATIC", vtkTemporalInterpolatedVelocityField::STATIC },
        { "LINEAR_TRANSFORMATION", vtkTemporalInterpolatedVelocityField::LINEAR_TRANSFORMATION },
        { "SAME_TOPOLOGY", vtkTemporalInterpolatedVelocityField::SAME_TOPOLOGY },
      };

    o = PyvtkTemporalInterpolatedVelocityField_MeshOverTimeTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTemporalInterpolatedVelocityField(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTemporalInterpolatedVelocityField_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTemporalInterpolatedVelocityField", o) != 0)
  {
    Py_DECREF(o);
  }

}

