// python wrapper for vtkConstrainedSmoothingFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkConstrainedSmoothingFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkConstrainedSmoothingFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkConstrainedSmoothingFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkConstrainedSmoothingFilter_ConstraintStrategyType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkConstrainedSmoothingFilter.ConstraintStrategyType", // tp_name
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
PyObject *PyvtkConstrainedSmoothingFilter_ConstraintStrategyType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkConstrainedSmoothingFilter_ConstraintStrategyType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkConstrainedSmoothingFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkConstrainedSmoothingFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConstrainedSmoothingFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkConstrainedSmoothingFilter *tempr = vtkConstrainedSmoothingFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkConstrainedSmoothingFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConstrainedSmoothingFilter::NewInstance());

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
PyvtkConstrainedSmoothingFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkConstrainedSmoothingFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkConstrainedSmoothingFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_SetConvergence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvergence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvergence(temp0);
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::SetConvergence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetConvergenceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvergenceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConvergenceMinValue() :
      op->vtkConstrainedSmoothingFilter::GetConvergenceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetConvergenceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvergenceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConvergenceMaxValue() :
      op->vtkConstrainedSmoothingFilter::GetConvergenceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetConvergence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvergence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConvergence() :
      op->vtkConstrainedSmoothingFilter::GetConvergence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfIterations(temp0);
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::SetNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterationsMinValue() :
      op->vtkConstrainedSmoothingFilter::GetNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterationsMaxValue() :
      op->vtkConstrainedSmoothingFilter::GetNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterations() :
      op->vtkConstrainedSmoothingFilter::GetNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_SetRelaxationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelaxationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRelaxationFactor(temp0);
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::SetRelaxationFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetRelaxationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelaxationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelaxationFactor() :
      op->vtkConstrainedSmoothingFilter::GetRelaxationFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_SetConstraintStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConstraintStrategy(temp0);
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::SetConstraintStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetConstraintStrategyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstraintStrategyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstraintStrategyMinValue() :
      op->vtkConstrainedSmoothingFilter::GetConstraintStrategyMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetConstraintStrategyMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstraintStrategyMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstraintStrategyMaxValue() :
      op->vtkConstrainedSmoothingFilter::GetConstraintStrategyMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetConstraintStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstraintStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstraintStrategy() :
      op->vtkConstrainedSmoothingFilter::GetConstraintStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_SetConstraintStrategyToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintStrategyToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetConstraintStrategyToDefault();
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::SetConstraintStrategyToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_SetConstraintStrategyToConstraintDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintStrategyToConstraintDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetConstraintStrategyToConstraintDistance();
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::SetConstraintStrategyToConstraintDistance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_SetConstraintStrategyToConstraintBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintStrategyToConstraintBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetConstraintStrategyToConstraintBox();
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::SetConstraintStrategyToConstraintBox();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_SetConstraintStrategyToConstraintArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintStrategyToConstraintArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetConstraintStrategyToConstraintArray();
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::SetConstraintStrategyToConstraintArray();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_SetConstraintDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConstraintDistance(temp0);
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::SetConstraintDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetConstraintDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstraintDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConstraintDistanceMinValue() :
      op->vtkConstrainedSmoothingFilter::GetConstraintDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetConstraintDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstraintDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConstraintDistanceMaxValue() :
      op->vtkConstrainedSmoothingFilter::GetConstraintDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetConstraintDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstraintDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConstraintDistance() :
      op->vtkConstrainedSmoothingFilter::GetConstraintDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_SetConstraintBox_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  double temp0;
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
      op->SetConstraintBox(temp0, temp1, temp2);
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::SetConstraintBox(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConstrainedSmoothingFilter_SetConstraintBox_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetConstraintBox(temp0);
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::SetConstraintBox(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConstrainedSmoothingFilter_SetConstraintBox(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkConstrainedSmoothingFilter_SetConstraintBox_s1(self, args);
    case 1:
      return PyvtkConstrainedSmoothingFilter_SetConstraintBox_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetConstraintBox");
  return nullptr;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetConstraintBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstraintBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetConstraintBox() :
      op->vtkConstrainedSmoothingFilter::GetConstraintBox());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_SetSmoothingStencils(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothingStencils");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->SetSmoothingStencils(temp0);
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::SetSmoothingStencils(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetSmoothingStencils(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothingStencils");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetSmoothingStencils() :
      op->vtkConstrainedSmoothingFilter::GetSmoothingStencils());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_SetGenerateErrorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateErrorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateErrorScalars(temp0);
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::SetGenerateErrorScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetGenerateErrorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateErrorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateErrorScalars() :
      op->vtkConstrainedSmoothingFilter::GetGenerateErrorScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GenerateErrorScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorScalarsOn();
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::GenerateErrorScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GenerateErrorScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorScalarsOff();
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::GenerateErrorScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_SetGenerateErrorVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateErrorVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateErrorVectors(temp0);
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::SetGenerateErrorVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetGenerateErrorVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateErrorVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateErrorVectors() :
      op->vtkConstrainedSmoothingFilter::GetGenerateErrorVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GenerateErrorVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorVectorsOn();
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::GenerateErrorVectorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GenerateErrorVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorVectorsOff();
    }
    else
    {
      op->vtkConstrainedSmoothingFilter::GenerateErrorVectorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

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
      op->vtkConstrainedSmoothingFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedSmoothingFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedSmoothingFilter *op = static_cast<vtkConstrainedSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkConstrainedSmoothingFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkConstrainedSmoothingFilter_Methods[] = {
  {"IsTypeOf", PyvtkConstrainedSmoothingFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkConstrainedSmoothingFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkConstrainedSmoothingFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkConstrainedSmoothingFilter\nC++: static vtkConstrainedSmoothingFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkConstrainedSmoothingFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkConstrainedSmoothingFilter\nC++: vtkConstrainedSmoothingFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkConstrainedSmoothingFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkConstrainedSmoothingFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetConvergence", PyvtkConstrainedSmoothingFilter_SetConvergence, METH_VARARGS,
   "SetConvergence(self, _arg:float) -> None\nC++: virtual void SetConvergence(double _arg)\n\nSpecify a convergence criterion for the iteration process.\nSmaller numbers result in more smoothing iterations. Convergence\noccurs when, for the current iteration, the maximum distance any\npoint moves is less than or equal to Convergence. The default\nvalue is 0.\n"},
  {"GetConvergenceMinValue", PyvtkConstrainedSmoothingFilter_GetConvergenceMinValue, METH_VARARGS,
   "GetConvergenceMinValue(self) -> float\nC++: virtual double GetConvergenceMinValue()\n\n"},
  {"GetConvergenceMaxValue", PyvtkConstrainedSmoothingFilter_GetConvergenceMaxValue, METH_VARARGS,
   "GetConvergenceMaxValue(self) -> float\nC++: virtual double GetConvergenceMaxValue()\n\n"},
  {"GetConvergence", PyvtkConstrainedSmoothingFilter_GetConvergence, METH_VARARGS,
   "GetConvergence(self) -> float\nC++: virtual double GetConvergence()\n\n"},
  {"SetNumberOfIterations", PyvtkConstrainedSmoothingFilter_SetNumberOfIterations, METH_VARARGS,
   "SetNumberOfIterations(self, _arg:int) -> None\nC++: virtual void SetNumberOfIterations(int _arg)\n\nSpecify the maximum number of iterations for smoothing. The\nnumber of iterations may be less if the smoothing process\nconverges. The default value is 10.\n"},
  {"GetNumberOfIterationsMinValue", PyvtkConstrainedSmoothingFilter_GetNumberOfIterationsMinValue, METH_VARARGS,
   "GetNumberOfIterationsMinValue(self) -> int\nC++: virtual int GetNumberOfIterationsMinValue()\n\n"},
  {"GetNumberOfIterationsMaxValue", PyvtkConstrainedSmoothingFilter_GetNumberOfIterationsMaxValue, METH_VARARGS,
   "GetNumberOfIterationsMaxValue(self) -> int\nC++: virtual int GetNumberOfIterationsMaxValue()\n\n"},
  {"GetNumberOfIterations", PyvtkConstrainedSmoothingFilter_GetNumberOfIterations, METH_VARARGS,
   "GetNumberOfIterations(self) -> int\nC++: virtual int GetNumberOfIterations()\n\n"},
  {"SetRelaxationFactor", PyvtkConstrainedSmoothingFilter_SetRelaxationFactor, METH_VARARGS,
   "SetRelaxationFactor(self, _arg:float) -> None\nC++: virtual void SetRelaxationFactor(double _arg)\n\nSpecify the relaxation factor for smoothing. As in all iterative\nmethods, the stability of the process is sensitive to this\nparameter. In general, small relaxation factors and large numbers\nof iterations are more stable than larger relaxation factors and\nsmaller numbers of iterations. The default value is 0.01.\n"},
  {"GetRelaxationFactor", PyvtkConstrainedSmoothingFilter_GetRelaxationFactor, METH_VARARGS,
   "GetRelaxationFactor(self) -> float\nC++: virtual double GetRelaxationFactor()\n\n"},
  {"SetConstraintStrategy", PyvtkConstrainedSmoothingFilter_SetConstraintStrategy, METH_VARARGS,
   "SetConstraintStrategy(self, _arg:int) -> None\nC++: virtual void SetConstraintStrategy(int _arg)\n\nIndicate how to apply constraints. By default, a constraint array\ntakes precedence over the filter's constraint distance or\nconstraint box, but if not available then the constraint distance\nis used. If a CONSTRAINT_ARRAY strategy is specified, and no\nconstraint array is available from the point data, then the\npoints are unconstrained. If the strategy is set to\nCONSTRAINT_DISTANCE, then a constraint sphere defined by\nConstraintDistance is used; while setting the strategy to\nCONSTRAINT_BOX an axis-aligned x-y-z box is used to constrain\npoint motion (using constraint distance is slightly faster than\nusing a constraint box). Note that is also possible to turn off\nconstraints completely by simply specifying a very large\nconstraint distance. The default constraint strategy is DEFAULT.\n"},
  {"GetConstraintStrategyMinValue", PyvtkConstrainedSmoothingFilter_GetConstraintStrategyMinValue, METH_VARARGS,
   "GetConstraintStrategyMinValue(self) -> int\nC++: virtual int GetConstraintStrategyMinValue()\n\n"},
  {"GetConstraintStrategyMaxValue", PyvtkConstrainedSmoothingFilter_GetConstraintStrategyMaxValue, METH_VARARGS,
   "GetConstraintStrategyMaxValue(self) -> int\nC++: virtual int GetConstraintStrategyMaxValue()\n\n"},
  {"GetConstraintStrategy", PyvtkConstrainedSmoothingFilter_GetConstraintStrategy, METH_VARARGS,
   "GetConstraintStrategy(self) -> int\nC++: virtual int GetConstraintStrategy()\n\n"},
  {"SetConstraintStrategyToDefault", PyvtkConstrainedSmoothingFilter_SetConstraintStrategyToDefault, METH_VARARGS,
   "SetConstraintStrategyToDefault(self) -> None\nC++: void SetConstraintStrategyToDefault()\n\n"},
  {"SetConstraintStrategyToConstraintDistance", PyvtkConstrainedSmoothingFilter_SetConstraintStrategyToConstraintDistance, METH_VARARGS,
   "SetConstraintStrategyToConstraintDistance(self) -> None\nC++: void SetConstraintStrategyToConstraintDistance()\n\n"},
  {"SetConstraintStrategyToConstraintBox", PyvtkConstrainedSmoothingFilter_SetConstraintStrategyToConstraintBox, METH_VARARGS,
   "SetConstraintStrategyToConstraintBox(self) -> None\nC++: void SetConstraintStrategyToConstraintBox()\n\n"},
  {"SetConstraintStrategyToConstraintArray", PyvtkConstrainedSmoothingFilter_SetConstraintStrategyToConstraintArray, METH_VARARGS,
   "SetConstraintStrategyToConstraintArray(self) -> None\nC++: void SetConstraintStrategyToConstraintArray()\n\n"},
  {"SetConstraintDistance", PyvtkConstrainedSmoothingFilter_SetConstraintDistance, METH_VARARGS,
   "SetConstraintDistance(self, _arg:float) -> None\nC++: virtual void SetConstraintDistance(double _arg)\n\nSpecify a constraint distance for point motion (this defines a a\nlocal constraint sphere which is placed around each point to\nrestrict its motion). By default, if a point data array\nconstraint distance (named \"SmoothingConstraints\") is provided in\nthe input point data, then the array takes precedence. By\ndefault, the constraint distance is 0.001. Setting the constraint\nstrategy to CONSTRAINT_DISTANCE forces the box to be used.\n"},
  {"GetConstraintDistanceMinValue", PyvtkConstrainedSmoothingFilter_GetConstraintDistanceMinValue, METH_VARARGS,
   "GetConstraintDistanceMinValue(self) -> float\nC++: virtual double GetConstraintDistanceMinValue()\n\n"},
  {"GetConstraintDistanceMaxValue", PyvtkConstrainedSmoothingFilter_GetConstraintDistanceMaxValue, METH_VARARGS,
   "GetConstraintDistanceMaxValue(self) -> float\nC++: virtual double GetConstraintDistanceMaxValue()\n\n"},
  {"GetConstraintDistance", PyvtkConstrainedSmoothingFilter_GetConstraintDistance, METH_VARARGS,
   "GetConstraintDistance(self) -> float\nC++: virtual double GetConstraintDistance()\n\n"},
  {"SetConstraintBox", PyvtkConstrainedSmoothingFilter_SetConstraintBox, METH_VARARGS,
   "SetConstraintBox(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetConstraintBox(double _arg1, double _arg2,\n    double _arg3)\nSetConstraintBox(self, _arg:(float, float, float)) -> None\nC++: virtual void SetConstraintBox(const double _arg[3])\n\nSpecify a constraint box for point motion. By default, if a point\ndata array constraint distance (named \"SmoothingConstraints\") is\nprovided in the input point data, then the array takes\nprecedence. By default, the constraint box is (1,1,1). Setting\nthe constraint strategy to CONSTRAINT_BOX forces the box to be\nused.\n"},
  {"GetConstraintBox", PyvtkConstrainedSmoothingFilter_GetConstraintBox, METH_VARARGS,
   "GetConstraintBox(self) -> (float, float, float)\nC++: virtual double *GetConstraintBox()\n\n"},
  {"SetSmoothingStencils", PyvtkConstrainedSmoothingFilter_SetSmoothingStencils, METH_VARARGS,
   "SetSmoothingStencils(self, _arg:vtkCellArray) -> None\nC++: virtual void SetSmoothingStencils(vtkCellArray *_arg)\n\nSet / get the point smoothing stencils. Here we are repurposing a\ncell array to define stencils. Basically what's happening is that\neach point is treated a \"cell\" connected to a list of point ids\n(i.e., the \"stencil\") that defines the smoothing edge\nconnections. By default, no smoothing stencils are defined.\n"},
  {"GetSmoothingStencils", PyvtkConstrainedSmoothingFilter_GetSmoothingStencils, METH_VARARGS,
   "GetSmoothingStencils(self) -> vtkCellArray\nC++: virtual vtkCellArray *GetSmoothingStencils()\n\n"},
  {"SetGenerateErrorScalars", PyvtkConstrainedSmoothingFilter_SetGenerateErrorScalars, METH_VARARGS,
   "SetGenerateErrorScalars(self, _arg:bool) -> None\nC++: virtual void SetGenerateErrorScalars(bool _arg)\n\nTurn on/off the generation of scalar distance values. By default,\nthe generation of error scalars is disabled.\n"},
  {"GetGenerateErrorScalars", PyvtkConstrainedSmoothingFilter_GetGenerateErrorScalars, METH_VARARGS,
   "GetGenerateErrorScalars(self) -> bool\nC++: virtual bool GetGenerateErrorScalars()\n\n"},
  {"GenerateErrorScalarsOn", PyvtkConstrainedSmoothingFilter_GenerateErrorScalarsOn, METH_VARARGS,
   "GenerateErrorScalarsOn(self) -> None\nC++: virtual void GenerateErrorScalarsOn()\n\n"},
  {"GenerateErrorScalarsOff", PyvtkConstrainedSmoothingFilter_GenerateErrorScalarsOff, METH_VARARGS,
   "GenerateErrorScalarsOff(self) -> None\nC++: virtual void GenerateErrorScalarsOff()\n\n"},
  {"SetGenerateErrorVectors", PyvtkConstrainedSmoothingFilter_SetGenerateErrorVectors, METH_VARARGS,
   "SetGenerateErrorVectors(self, _arg:bool) -> None\nC++: virtual void SetGenerateErrorVectors(bool _arg)\n\nTurn on/off the generation of error vectors. By default, the\ngeneration of error vectors is disabled.\n"},
  {"GetGenerateErrorVectors", PyvtkConstrainedSmoothingFilter_GetGenerateErrorVectors, METH_VARARGS,
   "GetGenerateErrorVectors(self) -> bool\nC++: virtual bool GetGenerateErrorVectors()\n\n"},
  {"GenerateErrorVectorsOn", PyvtkConstrainedSmoothingFilter_GenerateErrorVectorsOn, METH_VARARGS,
   "GenerateErrorVectorsOn(self) -> None\nC++: virtual void GenerateErrorVectorsOn()\n\n"},
  {"GenerateErrorVectorsOff", PyvtkConstrainedSmoothingFilter_GenerateErrorVectorsOff, METH_VARARGS,
   "GenerateErrorVectorsOff(self) -> None\nC++: virtual void GenerateErrorVectorsOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkConstrainedSmoothingFilter_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkConstrainedSmoothingFilter_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkConstrainedSmoothingFilter_Doc =
  "vtkConstrainedSmoothingFilter - adjust point positions using\nconstrained smoothing\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "vtkConstrainedSmoothingFilter is a filter that adjusts point\n"
  "coordinates using a modified Laplacian smoothing approach. The effect\n"
  "is to \"relax\" or \"smooth\" the mesh, making the cells better shaped\n"
  "and the points more evenly distributed. Note that this filter\n"
  "operates on any vtkPointSet and derived classes. Cell topology is\n"
  "never modified; note however if the constraints are too lax, cells\n"
  "may self-intersect or otherwise be deformed in unfavorable ways.\n\n"
  "A central concept of this filter is the point smoothing stencil. A\n"
  "smoothing stencil for a point pi is the list of points pj which\n"
  "connect to pi via an edge. To smooth the point pi, pi is moved\n"
  "towards the average position of pj multiplied by the relaxation\n"
  "factor, and limited by the constraint distance. This process is\n"
  "repeated either until convergence occurs, or the maximum number of\n"
  "iterations is reached. Note that smoothing stencils may be specified;\n"
  "or if not provided, the stencils are computed from the input cells\n"
  "connected edges (using vtkExtractEdges with UseAllPoints enabled).\n\n"
  "To constrain the motion of the points, either set the filter's\n"
  "constraint distance or constraint box, or provide an input point data\n"
  "array (of type vtkDoubleArray) named \"SmoothingConstraints.\" The\n"
  "filter's constraint distance (or constraint box if selected) defines\n"
  "a local sphere (or box) centered on each point to restrict point\n"
  "motion and is applied to all points; whereas the smoothing data array\n"
  "may have different constraint values per point. If provided by the\n"
  "user, by default the smoothing data array takes precedence over the\n"
  "filter's constraint distance and constraint box.\n\n"
  "@warning\n"
  "The smoothing process reduces high frequency information in the\n"
  "geometry of the mesh. With excessive smoothing important details may\n"
  "be lost, and the surface may shrink towards the centroid. The\n"
  "constraints on point movement help significantly in preventing\n"
  "shrinkage from happening.\n\n"
  "@warning\n"
  "This filter is used internally by the filters vtkSurfaceNets2D and\n"
  "vtkSurfaceNets3D. vtkConstrainedSmoothingFilter is used by these\n"
  "filters to smooth the extracted surface net, with the constraint\n"
  "distance and constraint box set in relation to a volume voxel.\n\n"
  "@sa\n"
  "vtkWindowedSincPolyDataFilter vtkSmoothPolyDataFilter\n"
  "vtkAttributeSmoothingFilter vtkExtractEdges vtkSurfaceNets2D\n"
  "vtkSurfaceNets3D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkConstrainedSmoothingFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkConstrainedSmoothingFilter", // tp_name
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
  PyvtkConstrainedSmoothingFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkConstrainedSmoothingFilter_StaticNew()
{
  return vtkConstrainedSmoothingFilter::New();
}

PyObject *PyvtkConstrainedSmoothingFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkConstrainedSmoothingFilter_Type, PyvtkConstrainedSmoothingFilter_Methods,
    "vtkConstrainedSmoothingFilter",
 &PyvtkConstrainedSmoothingFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPointSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkConstrainedSmoothingFilter_ConstraintStrategyType_Type);
  PyVTKEnum_Add(&PyvtkConstrainedSmoothingFilter_ConstraintStrategyType_Type, "vtkConstrainedSmoothingFilter.ConstraintStrategyType");

  o = (PyObject *)&PyvtkConstrainedSmoothingFilter_ConstraintStrategyType_Type;
  if (PyDict_SetItemString(d, "ConstraintStrategyType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkConstrainedSmoothingFilter::ConstraintStrategyType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "DEFAULT", vtkConstrainedSmoothingFilter::DEFAULT },
        { "CONSTRAINT_DISTANCE", vtkConstrainedSmoothingFilter::CONSTRAINT_DISTANCE },
        { "CONSTRAINT_BOX", vtkConstrainedSmoothingFilter::CONSTRAINT_BOX },
        { "CONSTRAINT_ARRAY", vtkConstrainedSmoothingFilter::CONSTRAINT_ARRAY },
      };

    o = PyvtkConstrainedSmoothingFilter_ConstraintStrategyType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkConstrainedSmoothingFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkConstrainedSmoothingFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkConstrainedSmoothingFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

