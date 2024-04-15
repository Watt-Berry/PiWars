// python wrapper for vtkCleanUnstructuredGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCleanUnstructuredGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCleanUnstructuredGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkCleanUnstructuredGrid_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCleanUnstructuredGrid_DataWeighingType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkCleanUnstructuredGrid.DataWeighingType", // tp_name
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
PyObject *PyvtkCleanUnstructuredGrid_DataWeighingType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCleanUnstructuredGrid_DataWeighingType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCleanUnstructuredGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCleanUnstructuredGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCleanUnstructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCleanUnstructuredGrid *tempr = vtkCleanUnstructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCleanUnstructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCleanUnstructuredGrid::NewInstance());

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
PyvtkCleanUnstructuredGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCleanUnstructuredGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCleanUnstructuredGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_SetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetToleranceIsAbsolute(temp0);
    }
    else
    {
      op->vtkCleanUnstructuredGrid::SetToleranceIsAbsolute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_ToleranceIsAbsoluteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToleranceIsAbsoluteOn();
    }
    else
    {
      op->vtkCleanUnstructuredGrid::ToleranceIsAbsoluteOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_ToleranceIsAbsoluteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToleranceIsAbsoluteOff();
    }
    else
    {
      op->vtkCleanUnstructuredGrid::ToleranceIsAbsoluteOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_GetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetToleranceIsAbsolute() :
      op->vtkCleanUnstructuredGrid::GetToleranceIsAbsolute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

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
      op->vtkCleanUnstructuredGrid::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkCleanUnstructuredGrid::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkCleanUnstructuredGrid::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkCleanUnstructuredGrid::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_SetAbsoluteTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbsoluteTolerance(temp0);
    }
    else
    {
      op->vtkCleanUnstructuredGrid::SetAbsoluteTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_GetAbsoluteToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteToleranceMinValue() :
      op->vtkCleanUnstructuredGrid::GetAbsoluteToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_GetAbsoluteToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteToleranceMaxValue() :
      op->vtkCleanUnstructuredGrid::GetAbsoluteToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_GetAbsoluteTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteTolerance() :
      op->vtkCleanUnstructuredGrid::GetAbsoluteTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkCleanUnstructuredGrid::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkCleanUnstructuredGrid::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkDataSet")))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator(temp0);
    }
    else
    {
      op->vtkCleanUnstructuredGrid::CreateDefaultLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_ReleaseLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseLocator();
    }
    else
    {
      op->vtkCleanUnstructuredGrid::ReleaseLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

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
      op->vtkCleanUnstructuredGrid::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkCleanUnstructuredGrid::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_SetRemovePointsWithoutCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemovePointsWithoutCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemovePointsWithoutCells(temp0);
    }
    else
    {
      op->vtkCleanUnstructuredGrid::SetRemovePointsWithoutCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_GetRemovePointsWithoutCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemovePointsWithoutCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemovePointsWithoutCells() :
      op->vtkCleanUnstructuredGrid::GetRemovePointsWithoutCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_RemovePointsWithoutCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePointsWithoutCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemovePointsWithoutCellsOn();
    }
    else
    {
      op->vtkCleanUnstructuredGrid::RemovePointsWithoutCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_RemovePointsWithoutCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePointsWithoutCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemovePointsWithoutCellsOff();
    }
    else
    {
      op->vtkCleanUnstructuredGrid::RemovePointsWithoutCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_GetPointDataWeighingStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataWeighingStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointDataWeighingStrategy() :
      op->vtkCleanUnstructuredGrid::GetPointDataWeighingStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_SetPointDataWeighingStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointDataWeighingStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointDataWeighingStrategy(temp0);
    }
    else
    {
      op->vtkCleanUnstructuredGrid::SetPointDataWeighingStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_GetPointDataWeighingStrategyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataWeighingStrategyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointDataWeighingStrategyMinValue() :
      op->vtkCleanUnstructuredGrid::GetPointDataWeighingStrategyMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGrid_GetPointDataWeighingStrategyMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataWeighingStrategyMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGrid *op = static_cast<vtkCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointDataWeighingStrategyMaxValue() :
      op->vtkCleanUnstructuredGrid::GetPointDataWeighingStrategyMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCleanUnstructuredGrid_Methods[] = {
  {"IsTypeOf", PyvtkCleanUnstructuredGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCleanUnstructuredGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCleanUnstructuredGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCleanUnstructuredGrid\nC++: static vtkCleanUnstructuredGrid *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCleanUnstructuredGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCleanUnstructuredGrid\nC++: vtkCleanUnstructuredGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCleanUnstructuredGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCleanUnstructuredGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetToleranceIsAbsolute", PyvtkCleanUnstructuredGrid_SetToleranceIsAbsolute, METH_VARARGS,
   "SetToleranceIsAbsolute(self, _arg:bool) -> None\nC++: virtual void SetToleranceIsAbsolute(bool _arg)\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {"ToleranceIsAbsoluteOn", PyvtkCleanUnstructuredGrid_ToleranceIsAbsoluteOn, METH_VARARGS,
   "ToleranceIsAbsoluteOn(self) -> None\nC++: virtual void ToleranceIsAbsoluteOn()\n\n"},
  {"ToleranceIsAbsoluteOff", PyvtkCleanUnstructuredGrid_ToleranceIsAbsoluteOff, METH_VARARGS,
   "ToleranceIsAbsoluteOff(self) -> None\nC++: virtual void ToleranceIsAbsoluteOff()\n\n"},
  {"GetToleranceIsAbsolute", PyvtkCleanUnstructuredGrid_GetToleranceIsAbsolute, METH_VARARGS,
   "GetToleranceIsAbsolute(self) -> bool\nC++: virtual bool GetToleranceIsAbsolute()\n\n"},
  {"SetTolerance", PyvtkCleanUnstructuredGrid_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nSpecify tolerance in terms of fraction of bounding box length.\nDefault is 0.0.\n"},
  {"GetToleranceMinValue", PyvtkCleanUnstructuredGrid_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> float\nC++: virtual double GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkCleanUnstructuredGrid_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> float\nC++: virtual double GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkCleanUnstructuredGrid_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {"SetAbsoluteTolerance", PyvtkCleanUnstructuredGrid_SetAbsoluteTolerance, METH_VARARGS,
   "SetAbsoluteTolerance(self, _arg:float) -> None\nC++: virtual void SetAbsoluteTolerance(double _arg)\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {"GetAbsoluteToleranceMinValue", PyvtkCleanUnstructuredGrid_GetAbsoluteToleranceMinValue, METH_VARARGS,
   "GetAbsoluteToleranceMinValue(self) -> float\nC++: virtual double GetAbsoluteToleranceMinValue()\n\n"},
  {"GetAbsoluteToleranceMaxValue", PyvtkCleanUnstructuredGrid_GetAbsoluteToleranceMaxValue, METH_VARARGS,
   "GetAbsoluteToleranceMaxValue(self) -> float\nC++: virtual double GetAbsoluteToleranceMaxValue()\n\n"},
  {"GetAbsoluteTolerance", PyvtkCleanUnstructuredGrid_GetAbsoluteTolerance, METH_VARARGS,
   "GetAbsoluteTolerance(self) -> float\nC++: virtual double GetAbsoluteTolerance()\n\n"},
  {"SetLocator", PyvtkCleanUnstructuredGrid_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkIncrementalPointLocator) -> None\nC++: virtual void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet/Get a spatial locator for speeding the search process. By\ndefault an instance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkCleanUnstructuredGrid_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\n"},
  {"CreateDefaultLocator", PyvtkCleanUnstructuredGrid_CreateDefaultLocator, METH_VARARGS,
   "CreateDefaultLocator(self, input:vtkDataSet=...) -> None\nC++: void CreateDefaultLocator(vtkDataSet *input=nullptr)\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {"ReleaseLocator", PyvtkCleanUnstructuredGrid_ReleaseLocator, METH_VARARGS,
   "ReleaseLocator(self) -> None\nC++: void ReleaseLocator()\n\nRelease locator\n"},
  {"SetOutputPointsPrecision", PyvtkCleanUnstructuredGrid_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkCleanUnstructuredGrid_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"SetRemovePointsWithoutCells", PyvtkCleanUnstructuredGrid_SetRemovePointsWithoutCells, METH_VARARGS,
   "SetRemovePointsWithoutCells(self, _arg:bool) -> None\nC++: virtual void SetRemovePointsWithoutCells(bool _arg)\n\nSet/Get whether to remove points that do not have any cells\nassociated with it. Default is false\n"},
  {"GetRemovePointsWithoutCells", PyvtkCleanUnstructuredGrid_GetRemovePointsWithoutCells, METH_VARARGS,
   "GetRemovePointsWithoutCells(self) -> bool\nC++: virtual bool GetRemovePointsWithoutCells()\n\n"},
  {"RemovePointsWithoutCellsOn", PyvtkCleanUnstructuredGrid_RemovePointsWithoutCellsOn, METH_VARARGS,
   "RemovePointsWithoutCellsOn(self) -> None\nC++: virtual void RemovePointsWithoutCellsOn()\n\n"},
  {"RemovePointsWithoutCellsOff", PyvtkCleanUnstructuredGrid_RemovePointsWithoutCellsOff, METH_VARARGS,
   "RemovePointsWithoutCellsOff(self) -> None\nC++: virtual void RemovePointsWithoutCellsOff()\n\n"},
  {"GetPointDataWeighingStrategy", PyvtkCleanUnstructuredGrid_GetPointDataWeighingStrategy, METH_VARARGS,
   "GetPointDataWeighingStrategy(self) -> int\nC++: virtual int GetPointDataWeighingStrategy()\n\nSet/Get the strategy used to weigh point data on merging points\n\nPossibilities:\n- FIRST_POINT (int(0), default): the point with the lowest index\n  imposes its data on to the merged point\n- AVERAGING (int(1)): a number average is performed on all the\n  duplicate points\n- SPATIAL_DENSITY (int(2)): an average by attached cell volume\n  (i.e. for every cell the point is connected to sum\n  cell_volume/number_cell_points) is performed on the point data\n"},
  {"SetPointDataWeighingStrategy", PyvtkCleanUnstructuredGrid_SetPointDataWeighingStrategy, METH_VARARGS,
   "SetPointDataWeighingStrategy(self, _arg:int) -> None\nC++: virtual void SetPointDataWeighingStrategy(int _arg)\n\n"},
  {"GetPointDataWeighingStrategyMinValue", PyvtkCleanUnstructuredGrid_GetPointDataWeighingStrategyMinValue, METH_VARARGS,
   "GetPointDataWeighingStrategyMinValue(self) -> int\nC++: virtual int GetPointDataWeighingStrategyMinValue()\n\n"},
  {"GetPointDataWeighingStrategyMaxValue", PyvtkCleanUnstructuredGrid_GetPointDataWeighingStrategyMaxValue, METH_VARARGS,
   "GetPointDataWeighingStrategyMaxValue(self) -> int\nC++: virtual int GetPointDataWeighingStrategyMaxValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCleanUnstructuredGrid_Doc =
  "vtkCleanUnstructuredGrid - merge duplicate points\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkCleanUnstructuredGrid is a filter that takes unstructured grid\n"
  "data as input and generates unstructured grid data as output.\n"
  "vtkCleanUnstructuredGrid can merge duplicate points (with coincident\n"
  "coordinates) using the vtkMergePoints object to merge points.\n\n"
  "@sa\n"
  "vtkCleanPolyData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCleanUnstructuredGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkCleanUnstructuredGrid", // tp_name
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
  PyvtkCleanUnstructuredGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCleanUnstructuredGrid_StaticNew()
{
  return vtkCleanUnstructuredGrid::New();
}

PyObject *PyvtkCleanUnstructuredGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCleanUnstructuredGrid_Type, PyvtkCleanUnstructuredGrid_Methods,
    "vtkCleanUnstructuredGrid",
 &PyvtkCleanUnstructuredGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCleanUnstructuredGrid_DataWeighingType_Type);
  PyVTKEnum_Add(&PyvtkCleanUnstructuredGrid_DataWeighingType_Type, "vtkCleanUnstructuredGrid.DataWeighingType");

  o = (PyObject *)&PyvtkCleanUnstructuredGrid_DataWeighingType_Type;
  if (PyDict_SetItemString(d, "DataWeighingType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkCleanUnstructuredGrid::DataWeighingType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "FIRST_POINT", vtkCleanUnstructuredGrid::FIRST_POINT },
        { "AVERAGING", vtkCleanUnstructuredGrid::AVERAGING },
        { "SPATIAL_DENSITY", vtkCleanUnstructuredGrid::SPATIAL_DENSITY },
        { "NUMBER_OF_WEIGHING_TYPES", vtkCleanUnstructuredGrid::NUMBER_OF_WEIGHING_TYPES },
      };

    o = PyvtkCleanUnstructuredGrid_DataWeighingType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCleanUnstructuredGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCleanUnstructuredGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCleanUnstructuredGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

