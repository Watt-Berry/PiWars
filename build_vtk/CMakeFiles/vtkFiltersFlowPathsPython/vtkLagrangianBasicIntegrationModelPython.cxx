// python wrapper for vtkLagrangianBasicIntegrationModel
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLagrangianBasicIntegrationModel.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLagrangianBasicIntegrationModel(PyObject *dict); }
extern "C" { PyObject *PyvtkLagrangianBasicIntegrationModel_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLagrangianBasicIntegrationModel_SurfaceType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkLagrangianBasicIntegrationModel.SurfaceType", // tp_name
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
PyObject *PyvtkLagrangianBasicIntegrationModel_SurfaceType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkLagrangianBasicIntegrationModel_SurfaceType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLagrangianBasicIntegrationModel_VariableStep_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkLagrangianBasicIntegrationModel.VariableStep", // tp_name
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
PyObject *PyvtkLagrangianBasicIntegrationModel_VariableStep_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkLagrangianBasicIntegrationModel_VariableStep_Type, static_cast<int>(val));
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLagrangianBasicIntegrationModel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLagrangianBasicIntegrationModel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLagrangianBasicIntegrationModel *tempr = vtkLagrangianBasicIntegrationModel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLagrangianBasicIntegrationModel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLagrangianBasicIntegrationModel::NewInstance());

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
PyvtkLagrangianBasicIntegrationModel_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLagrangianBasicIntegrationModel::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLagrangianBasicIntegrationModel::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_FunctionValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

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
      op->vtkLagrangianBasicIntegrationModel::FunctionValues(temp0, temp1, temp2));

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
PyvtkLagrangianBasicIntegrationModel_FunctionValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

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
      op->vtkLagrangianBasicIntegrationModel::FunctionValues(temp0, temp1));

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
PyvtkLagrangianBasicIntegrationModel_FunctionValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLagrangianBasicIntegrationModel_FunctionValues_s1(self, args);
    case 2:
      return PyvtkLagrangianBasicIntegrationModel_FunctionValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FunctionValues");
  return nullptr;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  vtkAbstractCellLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkLagrangianBasicIntegrationModel::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetLocatorsBuilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocatorsBuilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLocatorsBuilt() :
      op->vtkLagrangianBasicIntegrationModel::GetLocatorsBuilt());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_SetLocatorsBuilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocatorsBuilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLocatorsBuilt(temp0);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::SetLocatorsBuilt(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_SetTracker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTracker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  vtkLagrangianParticleTracker *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLagrangianParticleTracker"))
  {
    if (ap.IsBound())
    {
      op->SetTracker(temp0);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::SetTracker(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_AddDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  vtkDataSet *temp0 = nullptr;
  bool temp1 = false;
  unsigned int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->AddDataSet(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::AddDataSet(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_ClearDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->ClearDataSets(temp0);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::ClearDataSets(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_SetUseInitialIntegrationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseInitialIntegrationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseInitialIntegrationTime(temp0);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::SetUseInitialIntegrationTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetUseInitialIntegrationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseInitialIntegrationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseInitialIntegrationTime() :
      op->vtkLagrangianBasicIntegrationModel::GetUseInitialIntegrationTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_UseInitialIntegrationTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInitialIntegrationTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInitialIntegrationTimeOn();
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::UseInitialIntegrationTimeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_UseInitialIntegrationTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInitialIntegrationTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInitialIntegrationTimeOff();
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::UseInitialIntegrationTimeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkLagrangianBasicIntegrationModel::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetLocatorTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocatorTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLocatorTolerance() :
      op->vtkLagrangianBasicIntegrationModel::GetLocatorTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_SetNonPlanarQuadSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonPlanarQuadSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNonPlanarQuadSupport(temp0);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::SetNonPlanarQuadSupport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetNonPlanarQuadSupport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonPlanarQuadSupport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNonPlanarQuadSupport() :
      op->vtkLagrangianBasicIntegrationModel::GetNonPlanarQuadSupport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_NonPlanarQuadSupportOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonPlanarQuadSupportOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NonPlanarQuadSupportOn();
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::NonPlanarQuadSupportOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_NonPlanarQuadSupportOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonPlanarQuadSupportOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NonPlanarQuadSupportOff();
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::NonPlanarQuadSupportOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSeedArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetSeedArrayNames() :
      op->vtkLagrangianBasicIntegrationModel::GetSeedArrayNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSeedArrayComps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedArrayComps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetSeedArrayComps() :
      op->vtkLagrangianBasicIntegrationModel::GetSeedArrayComps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSeedArrayTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedArrayTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetSeedArrayTypes() :
      op->vtkLagrangianBasicIntegrationModel::GetSeedArrayTypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetSurfaceArrayNames() :
      op->vtkLagrangianBasicIntegrationModel::GetSurfaceArrayNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceArrayTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetSurfaceArrayTypes() :
      op->vtkLagrangianBasicIntegrationModel::GetSurfaceArrayTypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayEnumValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceArrayEnumValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetSurfaceArrayEnumValues() :
      op->vtkLagrangianBasicIntegrationModel::GetSurfaceArrayEnumValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayDefaultValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceArrayDefaultValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetSurfaceArrayDefaultValues() :
      op->vtkLagrangianBasicIntegrationModel::GetSurfaceArrayDefaultValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayComps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceArrayComps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetSurfaceArrayComps() :
      op->vtkLagrangianBasicIntegrationModel::GetSurfaceArrayComps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetWeightsSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeightsSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWeightsSize() :
      op->vtkLagrangianBasicIntegrationModel::GetWeightsSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_InitializeThreadedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeThreadedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLagrangianThreadedData *tempr = (ap.IsBound() ?
      op->InitializeThreadedData() :
      op->vtkLagrangianBasicIntegrationModel::InitializeThreadedData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_FinalizeOutputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FinalizeOutputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  vtkPolyData *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->FinalizeOutputs(temp0, temp1) :
      op->vtkLagrangianBasicIntegrationModel::FinalizeOutputs(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_PreParticleInitalization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreParticleInitalization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreParticleInitalization();
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::PreParticleInitalization();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetSeedArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  int temp0;
  vtkPointData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPointData"))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetSeedArray(temp0, temp1) :
      op->vtkLagrangianBasicIntegrationModel::GetSeedArray(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_SetNumberOfTrackedUserData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTrackedUserData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfTrackedUserData(temp0);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::SetNumberOfTrackedUserData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_GetNumberOfTrackedUserData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTrackedUserData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTrackedUserData() :
      op->vtkLagrangianBasicIntegrationModel::GetNumberOfTrackedUserData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_InitializePathData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializePathData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->InitializePathData(temp0);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::InitializePathData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_InitializeInteractionData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeInteractionData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->InitializeInteractionData(temp0);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::InitializeInteractionData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianBasicIntegrationModel_InitializeParticleData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeParticleData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianBasicIntegrationModel *op = static_cast<vtkLagrangianBasicIntegrationModel *>(vp);

  vtkFieldData *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkFieldData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->InitializeParticleData(temp0, temp1);
    }
    else
    {
      op->vtkLagrangianBasicIntegrationModel::InitializeParticleData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLagrangianBasicIntegrationModel_Methods[] = {
  {"IsTypeOf", PyvtkLagrangianBasicIntegrationModel_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLagrangianBasicIntegrationModel_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLagrangianBasicIntegrationModel_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkLagrangianBasicIntegrationModel\nC++: static vtkLagrangianBasicIntegrationModel *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLagrangianBasicIntegrationModel_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLagrangianBasicIntegrationModel\nC++: vtkLagrangianBasicIntegrationModel *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLagrangianBasicIntegrationModel_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLagrangianBasicIntegrationModel_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"FunctionValues", PyvtkLagrangianBasicIntegrationModel_FunctionValues, METH_VARARGS,
   "FunctionValues(self, x:[float, ...], f:[float, ...],\n    userData:Pointer) -> int\nC++: int FunctionValues(double *x, double *f, void *userData)\n    override;\nFunctionValues(self, x:[float, ...], f:[float, ...]) -> int\nC++: virtual int FunctionValues(double *x, double *f)\n\nEvaluate integration model velocity f at position x. Look for the\ncell containing the position x in all its added datasets if found\nthis will call FunctionValues(vtkDataSet* detaSet, vtkIdType\ncellId, double* x, double* f) This method is thread safe.\n"},
  {"SetLocator", PyvtkLagrangianBasicIntegrationModel_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkAbstractCellLocator) -> None\nC++: virtual void SetLocator(vtkAbstractCellLocator *locator)\n\nSet/Get the locator used to locate cells in the datasets. Only\nthe locator class matter here, as it is used only to create\nNewInstance of it. Default is a vtkCellLocator.\n"},
  {"GetLocator", PyvtkLagrangianBasicIntegrationModel_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkAbstractCellLocator\nC++: virtual vtkAbstractCellLocator *GetLocator()\n\n"},
  {"GetLocatorsBuilt", PyvtkLagrangianBasicIntegrationModel_GetLocatorsBuilt, METH_VARARGS,
   "GetLocatorsBuilt(self) -> bool\nC++: virtual bool GetLocatorsBuilt()\n\nGet the state of the current locators\n"},
  {"SetLocatorsBuilt", PyvtkLagrangianBasicIntegrationModel_SetLocatorsBuilt, METH_VARARGS,
   "SetLocatorsBuilt(self, _arg:bool) -> None\nC++: virtual void SetLocatorsBuilt(bool _arg)\n\n"},
  {"SetTracker", PyvtkLagrangianBasicIntegrationModel_SetTracker, METH_VARARGS,
   "SetTracker(self, Tracker:vtkLagrangianParticleTracker) -> None\nC++: virtual void SetTracker(\n    vtkLagrangianParticleTracker *Tracker)\n\nSet the parent tracker.\n"},
  {"AddDataSet", PyvtkLagrangianBasicIntegrationModel_AddDataSet, METH_VARARGS,
   "AddDataSet(self, dataset:vtkDataSet, surface:bool=False,\n    surfaceFlatIndex:int=0) -> None\nC++: virtual void AddDataSet(vtkDataSet *dataset,\n    bool surface=false, unsigned int surfaceFlatIndex=0)\n\nAdd a dataset to locate cells in This create a specific locator\nfor the provided dataset using the Locator member of this class\nThe surface flag allow to manage surfaces datasets for surface\ninteraction instead of flow datasets surfaceFlatIndex, used only\nwith composite surface, in order to identify the flatIndex of the\nsurface for particle interaction\n"},
  {"ClearDataSets", PyvtkLagrangianBasicIntegrationModel_ClearDataSets, METH_VARARGS,
   "ClearDataSets(self, surface:bool=False) -> None\nC++: virtual void ClearDataSets(bool surface=false)\n\n"},
  {"SetUseInitialIntegrationTime", PyvtkLagrangianBasicIntegrationModel_SetUseInitialIntegrationTime, METH_VARARGS,
   "SetUseInitialIntegrationTime(self, _arg:bool) -> None\nC++: virtual void SetUseInitialIntegrationTime(bool _arg)\n\nSet/Get the Use of initial integration input array to process\n"},
  {"GetUseInitialIntegrationTime", PyvtkLagrangianBasicIntegrationModel_GetUseInitialIntegrationTime, METH_VARARGS,
   "GetUseInitialIntegrationTime(self) -> bool\nC++: virtual bool GetUseInitialIntegrationTime()\n\n"},
  {"UseInitialIntegrationTimeOn", PyvtkLagrangianBasicIntegrationModel_UseInitialIntegrationTimeOn, METH_VARARGS,
   "UseInitialIntegrationTimeOn(self) -> None\nC++: virtual void UseInitialIntegrationTimeOn()\n\n"},
  {"UseInitialIntegrationTimeOff", PyvtkLagrangianBasicIntegrationModel_UseInitialIntegrationTimeOff, METH_VARARGS,
   "UseInitialIntegrationTimeOff(self) -> None\nC++: virtual void UseInitialIntegrationTimeOff()\n\n"},
  {"GetTolerance", PyvtkLagrangianBasicIntegrationModel_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\nGet the tolerance to use with this model.\n"},
  {"GetLocatorTolerance", PyvtkLagrangianBasicIntegrationModel_GetLocatorTolerance, METH_VARARGS,
   "GetLocatorTolerance(self) -> float\nC++: virtual double GetLocatorTolerance()\n\nGet the specific tolerance to use with the locators.\n"},
  {"SetInputArrayToProcess", PyvtkLagrangianBasicIntegrationModel_SetInputArrayToProcess, METH_VARARGS,
   "SetInputArrayToProcess(self, idx:int, port:int, connection:int,\n    fieldAssociation:int, name:str) -> None\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, const char *name)\n\nSet a input array to process at a specific index, identified by a\nport, connection, fieldAssociation and a name. Each inherited\nclass can specify their own input array to process\n"},
  {"SetNonPlanarQuadSupport", PyvtkLagrangianBasicIntegrationModel_SetNonPlanarQuadSupport, METH_VARARGS,
   "SetNonPlanarQuadSupport(self, _arg:bool) -> None\nC++: virtual void SetNonPlanarQuadSupport(bool _arg)\n\nSet/Get Non Planar Quad Support\n"},
  {"GetNonPlanarQuadSupport", PyvtkLagrangianBasicIntegrationModel_GetNonPlanarQuadSupport, METH_VARARGS,
   "GetNonPlanarQuadSupport(self) -> bool\nC++: virtual bool GetNonPlanarQuadSupport()\n\n"},
  {"NonPlanarQuadSupportOn", PyvtkLagrangianBasicIntegrationModel_NonPlanarQuadSupportOn, METH_VARARGS,
   "NonPlanarQuadSupportOn(self) -> None\nC++: virtual void NonPlanarQuadSupportOn()\n\n"},
  {"NonPlanarQuadSupportOff", PyvtkLagrangianBasicIntegrationModel_NonPlanarQuadSupportOff, METH_VARARGS,
   "NonPlanarQuadSupportOff(self) -> None\nC++: virtual void NonPlanarQuadSupportOff()\n\n"},
  {"GetSeedArrayNames", PyvtkLagrangianBasicIntegrationModel_GetSeedArrayNames, METH_VARARGS,
   "GetSeedArrayNames(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetSeedArrayNames()\n\nGet the seed arrays expected name Used Only be the\nvtkLagrangianSeedHelper in ParaView plugins\n"},
  {"GetSeedArrayComps", PyvtkLagrangianBasicIntegrationModel_GetSeedArrayComps, METH_VARARGS,
   "GetSeedArrayComps(self) -> vtkIntArray\nC++: virtual vtkIntArray *GetSeedArrayComps()\n\nGet the seed arrays expected number of components Used Only be\nthe vtkLagrangianSeedHelper in ParaView plugins\n"},
  {"GetSeedArrayTypes", PyvtkLagrangianBasicIntegrationModel_GetSeedArrayTypes, METH_VARARGS,
   "GetSeedArrayTypes(self) -> vtkIntArray\nC++: virtual vtkIntArray *GetSeedArrayTypes()\n\nGet the seed arrays expected type Used Only be the\nvtkLagrangianSeedHelper in ParaView plugins\n"},
  {"GetSurfaceArrayNames", PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayNames, METH_VARARGS,
   "GetSurfaceArrayNames(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetSurfaceArrayNames()\n\nGet the surface arrays expected name Used Only be the\nvtkLagrangianSurfaceHelper in ParaView plugins\n"},
  {"GetSurfaceArrayTypes", PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayTypes, METH_VARARGS,
   "GetSurfaceArrayTypes(self) -> vtkIntArray\nC++: virtual vtkIntArray *GetSurfaceArrayTypes()\n\nGet the surface arrays expected type Used Only be the\nvtkLagrangianSurfaceHelper in ParaView plugins\n"},
  {"GetSurfaceArrayEnumValues", PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayEnumValues, METH_VARARGS,
   "GetSurfaceArrayEnumValues(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetSurfaceArrayEnumValues()\n\nGet the surface arrays expected values and associated enums Used\nOnly be the vtkLagrangianSurfaceHelper in ParaView plugins\n"},
  {"GetSurfaceArrayDefaultValues", PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayDefaultValues, METH_VARARGS,
   "GetSurfaceArrayDefaultValues(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetSurfaceArrayDefaultValues()\n\nGet the surface arrays default values for each leaf Used Only be\nthe vtkLagrangianSurfaceHelper in ParaView plugins\n"},
  {"GetSurfaceArrayComps", PyvtkLagrangianBasicIntegrationModel_GetSurfaceArrayComps, METH_VARARGS,
   "GetSurfaceArrayComps(self) -> vtkIntArray\nC++: virtual vtkIntArray *GetSurfaceArrayComps()\n\nGet the seed array expected number of components Used Only be the\nvtkLagrangianSurfaceHelper in ParaView plugins\n"},
  {"GetWeightsSize", PyvtkLagrangianBasicIntegrationModel_GetWeightsSize, METH_VARARGS,
   "GetWeightsSize(self) -> int\nC++: virtual int GetWeightsSize()\n\nGet the maximum weights size necessary for calling FindInLocators\nwith weights\n"},
  {"InitializeThreadedData", PyvtkLagrangianBasicIntegrationModel_InitializeThreadedData, METH_VARARGS,
   "InitializeThreadedData(self) -> vtkLagrangianThreadedData\nC++: virtual vtkLagrangianThreadedData *InitializeThreadedData()\n\nLet the model allocate and initialize a threaded data. This\nmethod is thread-safe, its reimplementation should still be\nthread-safe.\n"},
  {"FinalizeOutputs", PyvtkLagrangianBasicIntegrationModel_FinalizeOutputs, METH_VARARGS,
   "FinalizeOutputs(self, particlePathsOutput:vtkPolyData,\n    interractionOutput:vtkDataObject) -> bool\nC++: virtual bool FinalizeOutputs(\n    vtkPolyData *particlePathsOutput,\n    vtkDataObject *interractionOutput)\n\nEnable model post process on output Return true if successful,\nfalse otherwise Empty and Always return true with basic model\n"},
  {"PreParticleInitalization", PyvtkLagrangianBasicIntegrationModel_PreParticleInitalization, METH_VARARGS,
   "PreParticleInitalization(self) -> None\nC++: virtual void PreParticleInitalization()\n\nAllow for model setup prior to Particle Initalization\n"},
  {"GetSeedArray", PyvtkLagrangianBasicIntegrationModel_GetSeedArray, METH_VARARGS,
   "GetSeedArray(self, idx:int, pointData:vtkPointData)\n    -> vtkAbstractArray\nC++: virtual vtkAbstractArray *GetSeedArray(int idx,\n    vtkPointData *pointData)\n\nGet a seed array, as set in setInputArrayToProcess from the\nprovided seed point data\n"},
  {"SetNumberOfTrackedUserData", PyvtkLagrangianBasicIntegrationModel_SetNumberOfTrackedUserData, METH_VARARGS,
   "SetNumberOfTrackedUserData(self, _arg:int) -> None\nC++: virtual void SetNumberOfTrackedUserData(int _arg)\n\nSet/Get the number of tracked user data attached to the\nparticles. Tracked user data are data that are related to each\nparticle position but are not integrated like the user variables.\nThey are not saved in the particle path. Default is 0.\n"},
  {"GetNumberOfTrackedUserData", PyvtkLagrangianBasicIntegrationModel_GetNumberOfTrackedUserData, METH_VARARGS,
   "GetNumberOfTrackedUserData(self) -> int\nC++: virtual int GetNumberOfTrackedUserData()\n\n"},
  {"InitializePathData", PyvtkLagrangianBasicIntegrationModel_InitializePathData, METH_VARARGS,
   "InitializePathData(self, data:vtkFieldData) -> None\nC++: virtual void InitializePathData(vtkFieldData *data)\n\nMethod used by the LPT to initialize data insertion in the\nprovided vtkFieldData. It initializes Id, ParentID, SeedID and\nTermination. Reimplement as needed in accordance with\nInsertPathData.\n"},
  {"InitializeInteractionData", PyvtkLagrangianBasicIntegrationModel_InitializeInteractionData, METH_VARARGS,
   "InitializeInteractionData(self, data:vtkFieldData) -> None\nC++: virtual void InitializeInteractionData(vtkFieldData *data)\n\nMethod used by the LPT to initialize data insertion in the\nprovided vtkFieldData. It initializes Interaction. Reimplement as\nneeded in accordance with InsertInteractionData.\n"},
  {"InitializeParticleData", PyvtkLagrangianBasicIntegrationModel_InitializeParticleData, METH_VARARGS,
   "InitializeParticleData(self, particleData:vtkFieldData,\n    maxTuples:int=0) -> None\nC++: virtual void InitializeParticleData(\n    vtkFieldData *particleData, int maxTuples=0)\n\nMethod used by the LPT to initialize data insertion in the\nprovided vtkFieldData. It initializes StepNumber,\nParticleVelocity, IntegrationTime. Reimplement as needed in\naccordance with InsertParticleData.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLagrangianBasicIntegrationModel_Doc =
  "vtkLagrangianBasicIntegrationModel - vtkFunctionSet abstract\nimplementation to be used in the vtkLagrangianParticleTracker\nintegrator.\n\n"
  "Superclass: vtkFunctionSet\n\n"
  "This vtkFunctionSet abstract implementation is meant to be used as a\n"
  "parameter of vtkLagrangianParticleTracker. It manages multiple\n"
  "dataset locators in order to evaluate the\n"
  "vtkFunctionSet::FunctionValues method. The actual FunctionValues\n"
  "implementation should be found in the class inheriting this class.\n"
  "Input Arrays to process are expected as follows: Index 0 :\n"
  "\"SurfaceType\" array of surface input of the particle tracker\n\n"
  "Inherited classes MUST implement int FunctionValues(vtkDataSet*\n"
  "detaSet, vtkIdType cellId, double* weights,\n"
  "   double * x, double * f); to define how the integration works.\n\n"
  "Inherited classes could reimplement InteractWithSurface or other\n"
  "surface interaction methods to change the way particles interact with\n"
  "surfaces.\n\n"
  "Inherited classes could reimplement IntersectWithLine to use a\n"
  "specific algorithm to intersect particles and surface cells.\n\n"
  "Inherited classes could reimplement CheckFreeFlightTermination to set\n"
  "the way particles terminate in free flight.\n\n"
  "Inherited classes could reimplement Initialize*Data and Insert*Data\n"
  "in order to customize the output of the tracker\n\n"
  "@sa\n"
  "vtkLagrangianParticleTracker vtkLagrangianParticle\n"
  "vtkLagrangianMatidaIntegrationModel\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLagrangianBasicIntegrationModel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkLagrangianBasicIntegrationModel", // tp_name
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
  PyvtkLagrangianBasicIntegrationModel_Doc, // tp_doc
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

PyObject *PyvtkLagrangianBasicIntegrationModel_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLagrangianBasicIntegrationModel_Type, PyvtkLagrangianBasicIntegrationModel_Methods,
    "vtkLagrangianBasicIntegrationModel",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkFunctionSet");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkLagrangianBasicIntegrationModel_SurfaceType_Type);
  PyVTKEnum_Add(&PyvtkLagrangianBasicIntegrationModel_SurfaceType_Type, "vtkLagrangianBasicIntegrationModel.SurfaceType");

  o = (PyObject *)&PyvtkLagrangianBasicIntegrationModel_SurfaceType_Type;
  if (PyDict_SetItemString(d, "SurfaceType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkLagrangianBasicIntegrationModel_VariableStep_Type);
  PyVTKEnum_Add(&PyvtkLagrangianBasicIntegrationModel_VariableStep_Type, "vtkLagrangianBasicIntegrationModel.VariableStep");

  o = (PyObject *)&PyvtkLagrangianBasicIntegrationModel_VariableStep_Type;
  if (PyDict_SetItemString(d, "VariableStep", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkLagrangianBasicIntegrationModel::SurfaceType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "SURFACE_TYPE_MODEL", vtkLagrangianBasicIntegrationModel::SURFACE_TYPE_MODEL },
        { "SURFACE_TYPE_TERM", vtkLagrangianBasicIntegrationModel::SURFACE_TYPE_TERM },
        { "SURFACE_TYPE_BOUNCE", vtkLagrangianBasicIntegrationModel::SURFACE_TYPE_BOUNCE },
        { "SURFACE_TYPE_BREAK", vtkLagrangianBasicIntegrationModel::SURFACE_TYPE_BREAK },
        { "SURFACE_TYPE_PASS", vtkLagrangianBasicIntegrationModel::SURFACE_TYPE_PASS },
      };

    o = PyvtkLagrangianBasicIntegrationModel_SurfaceType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkLagrangianBasicIntegrationModel::VariableStep cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "VARIABLE_STEP_PREV", vtkLagrangianBasicIntegrationModel::VARIABLE_STEP_PREV },
        { "VARIABLE_STEP_CURRENT", vtkLagrangianBasicIntegrationModel::VARIABLE_STEP_CURRENT },
        { "VARIABLE_STEP_NEXT", vtkLagrangianBasicIntegrationModel::VARIABLE_STEP_NEXT },
      };

    o = PyvtkLagrangianBasicIntegrationModel_VariableStep_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLagrangianBasicIntegrationModel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLagrangianBasicIntegrationModel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLagrangianBasicIntegrationModel", o) != 0)
  {
    Py_DECREF(o);
  }

}

