// python wrapper for vtkMaskPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMaskPoints.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMaskPoints(PyObject *dict); }
extern "C" { PyObject *PyvtkMaskPoints_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMaskPoints_DistributionType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkMaskPoints.DistributionType", // tp_name
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
PyObject *PyvtkMaskPoints_DistributionType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMaskPoints_DistributionType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMaskPoints_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMaskPoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMaskPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMaskPoints *tempr = vtkMaskPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMaskPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMaskPoints::NewInstance());

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
PyvtkMaskPoints_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMaskPoints::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMaskPoints::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOnRatio(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetOnRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOnRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatioMinValue() :
      op->vtkMaskPoints::GetOnRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOnRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatioMaxValue() :
      op->vtkMaskPoints::GetOnRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatio() :
      op->vtkMaskPoints::GetOnRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfPoints(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetMaximumNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetMaximumNumberOfPointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPointsMinValue() :
      op->vtkMaskPoints::GetMaximumNumberOfPointsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetMaximumNumberOfPointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPointsMaxValue() :
      op->vtkMaskPoints::GetMaximumNumberOfPointsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPoints() :
      op->vtkMaskPoints::GetMaximumNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetOffsetMinValue() :
      op->vtkMaskPoints::GetOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetOffsetMaxValue() :
      op->vtkMaskPoints::GetOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkMaskPoints::GetOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRandomMode(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetRandomMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetRandomMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRandomMode() :
      op->vtkMaskPoints::GetRandomMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_RandomModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RandomModeOn();
    }
    else
    {
      op->vtkMaskPoints::RandomModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_RandomModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RandomModeOff();
    }
    else
    {
      op->vtkMaskPoints::RandomModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRandomSeed(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetRandomSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomSeed() :
      op->vtkMaskPoints::GetRandomSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetRandomModeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomModeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRandomModeType(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetRandomModeType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetRandomModeTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomModeTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomModeTypeMinValue() :
      op->vtkMaskPoints::GetRandomModeTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetRandomModeTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomModeTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomModeTypeMaxValue() :
      op->vtkMaskPoints::GetRandomModeTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetRandomModeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomModeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomModeType() :
      op->vtkMaskPoints::GetRandomModeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetProportionalMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProportionalMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProportionalMaximumNumberOfPoints(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetProportionalMaximumNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetProportionalMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProportionalMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProportionalMaximumNumberOfPoints() :
      op->vtkMaskPoints::GetProportionalMaximumNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_ProportionalMaximumNumberOfPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProportionalMaximumNumberOfPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProportionalMaximumNumberOfPointsOn();
    }
    else
    {
      op->vtkMaskPoints::ProportionalMaximumNumberOfPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_ProportionalMaximumNumberOfPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProportionalMaximumNumberOfPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProportionalMaximumNumberOfPointsOff();
    }
    else
    {
      op->vtkMaskPoints::ProportionalMaximumNumberOfPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateVertices(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetGenerateVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateVertices() :
      op->vtkMaskPoints::GetGenerateVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GenerateVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVerticesOn();
    }
    else
    {
      op->vtkMaskPoints::GenerateVerticesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GenerateVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVerticesOff();
    }
    else
    {
      op->vtkMaskPoints::GenerateVerticesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetSingleVertexPerCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleVertexPerCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSingleVertexPerCell(temp0);
    }
    else
    {
      op->vtkMaskPoints::SetSingleVertexPerCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetSingleVertexPerCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleVertexPerCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSingleVertexPerCell() :
      op->vtkMaskPoints::GetSingleVertexPerCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SingleVertexPerCellOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleVertexPerCellOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SingleVertexPerCellOn();
    }
    else
    {
      op->vtkMaskPoints::SingleVertexPerCellOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SingleVertexPerCellOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleVertexPerCellOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SingleVertexPerCellOff();
    }
    else
    {
      op->vtkMaskPoints::SingleVertexPerCellOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

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
      op->vtkMaskPoints::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPoints_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPoints *op = static_cast<vtkMaskPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkMaskPoints::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaskPoints_Methods[] = {
  {"IsTypeOf", PyvtkMaskPoints_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMaskPoints_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMaskPoints_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMaskPoints\nC++: static vtkMaskPoints *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMaskPoints_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMaskPoints\nC++: vtkMaskPoints *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMaskPoints_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMaskPoints_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOnRatio", PyvtkMaskPoints_SetOnRatio, METH_VARARGS,
   "SetOnRatio(self, _arg:int) -> None\nC++: virtual void SetOnRatio(int _arg)\n\nTurn on every nth point (strided sampling), ignored by random\nmodes.\n"},
  {"GetOnRatioMinValue", PyvtkMaskPoints_GetOnRatioMinValue, METH_VARARGS,
   "GetOnRatioMinValue(self) -> int\nC++: virtual int GetOnRatioMinValue()\n\n"},
  {"GetOnRatioMaxValue", PyvtkMaskPoints_GetOnRatioMaxValue, METH_VARARGS,
   "GetOnRatioMaxValue(self) -> int\nC++: virtual int GetOnRatioMaxValue()\n\n"},
  {"GetOnRatio", PyvtkMaskPoints_GetOnRatio, METH_VARARGS,
   "GetOnRatio(self) -> int\nC++: virtual int GetOnRatio()\n\n"},
  {"SetMaximumNumberOfPoints", PyvtkMaskPoints_SetMaximumNumberOfPoints, METH_VARARGS,
   "SetMaximumNumberOfPoints(self, _arg:int) -> None\nC++: virtual void SetMaximumNumberOfPoints(vtkIdType _arg)\n\nLimit the number of points that can be passed through (i.e., sets\nthe output sample size).\n"},
  {"GetMaximumNumberOfPointsMinValue", PyvtkMaskPoints_GetMaximumNumberOfPointsMinValue, METH_VARARGS,
   "GetMaximumNumberOfPointsMinValue(self) -> int\nC++: virtual vtkIdType GetMaximumNumberOfPointsMinValue()\n\n"},
  {"GetMaximumNumberOfPointsMaxValue", PyvtkMaskPoints_GetMaximumNumberOfPointsMaxValue, METH_VARARGS,
   "GetMaximumNumberOfPointsMaxValue(self) -> int\nC++: virtual vtkIdType GetMaximumNumberOfPointsMaxValue()\n\n"},
  {"GetMaximumNumberOfPoints", PyvtkMaskPoints_GetMaximumNumberOfPoints, METH_VARARGS,
   "GetMaximumNumberOfPoints(self) -> int\nC++: virtual vtkIdType GetMaximumNumberOfPoints()\n\n"},
  {"SetOffset", PyvtkMaskPoints_SetOffset, METH_VARARGS,
   "SetOffset(self, _arg:int) -> None\nC++: virtual void SetOffset(vtkIdType _arg)\n\nStart sampling with this point. Ignored by certain random modes.\n"},
  {"GetOffsetMinValue", PyvtkMaskPoints_GetOffsetMinValue, METH_VARARGS,
   "GetOffsetMinValue(self) -> int\nC++: virtual vtkIdType GetOffsetMinValue()\n\n"},
  {"GetOffsetMaxValue", PyvtkMaskPoints_GetOffsetMaxValue, METH_VARARGS,
   "GetOffsetMaxValue(self) -> int\nC++: virtual vtkIdType GetOffsetMaxValue()\n\n"},
  {"GetOffset", PyvtkMaskPoints_GetOffset, METH_VARARGS,
   "GetOffset(self) -> int\nC++: virtual vtkIdType GetOffset()\n\n"},
  {"SetRandomMode", PyvtkMaskPoints_SetRandomMode, METH_VARARGS,
   "SetRandomMode(self, _arg:bool) -> None\nC++: virtual void SetRandomMode(bool _arg)\n\nSpecial flag causes randomization of point selection.\n"},
  {"GetRandomMode", PyvtkMaskPoints_GetRandomMode, METH_VARARGS,
   "GetRandomMode(self) -> bool\nC++: virtual bool GetRandomMode()\n\n"},
  {"RandomModeOn", PyvtkMaskPoints_RandomModeOn, METH_VARARGS,
   "RandomModeOn(self) -> None\nC++: virtual void RandomModeOn()\n\n"},
  {"RandomModeOff", PyvtkMaskPoints_RandomModeOff, METH_VARARGS,
   "RandomModeOff(self) -> None\nC++: virtual void RandomModeOff()\n\n"},
  {"SetRandomSeed", PyvtkMaskPoints_SetRandomSeed, METH_VARARGS,
   "SetRandomSeed(self, _arg:int) -> None\nC++: virtual void SetRandomSeed(int _arg)\n\nSet/Get Seed used for generating a spatially uniform\ndistributions. default is 1.\n"},
  {"GetRandomSeed", PyvtkMaskPoints_GetRandomSeed, METH_VARARGS,
   "GetRandomSeed(self) -> int\nC++: virtual int GetRandomSeed()\n\n"},
  {"SetRandomModeType", PyvtkMaskPoints_SetRandomModeType, METH_VARARGS,
   "SetRandomModeType(self, _arg:int) -> None\nC++: virtual void SetRandomModeType(int _arg)\n\nSpecial mode selector that switches between random mode types. 0\n- randomized strides: randomly strides through the data\n(default); fairly certain that this is not a statistically random\nsample because the output depends on the order of the input and\nthe input points do not have an equal chance to appear in the\noutput (plus Vitter's incremental random algorithms are more\ncomplex than this, while not a proof it is good indication this\nisn't a statistically random sample - the closest would be\nalgorithm S) 1 - random sample: create a statistically random\nsample using Vitter's incremental algorithm D without A described\nin Vitter \"Faster Mthods for Random Sampling\", Communications of\nthe ACM Volume 27, Issue 7, 1984 (OnRatio and Offset are ignored)\nO(sample size) 2 - spatially stratified random sample: create a\nspatially stratified random sample using the first method\ndescribed in Woodring et al. \"In-situ Sampling of a Large-Scale\nParticle Simulation for Interactive Visualization and Analysis\",\nComputer Graphics Forum, 2011 (EuroVis 2011). (OnRatio and Offset\nare ignored) O(N log N) 3 - spatially uniform (bound based):\npoint randomly sampled using a point locator and random positions\ninside the bounds of the data set. 4 - spatially uniform (surface\nbased): points randomly sampled via an inverse transform on\nsurface area of each cell. Note that 3D cells are ignored. 5 -\nspatially uniform (volume based): points randomly sampled via an\ninverse transform on volume area of each cell. Note that 2D cells\nare ignored.\n"},
  {"GetRandomModeTypeMinValue", PyvtkMaskPoints_GetRandomModeTypeMinValue, METH_VARARGS,
   "GetRandomModeTypeMinValue(self) -> int\nC++: virtual int GetRandomModeTypeMinValue()\n\n"},
  {"GetRandomModeTypeMaxValue", PyvtkMaskPoints_GetRandomModeTypeMaxValue, METH_VARARGS,
   "GetRandomModeTypeMaxValue(self) -> int\nC++: virtual int GetRandomModeTypeMaxValue()\n\n"},
  {"GetRandomModeType", PyvtkMaskPoints_GetRandomModeType, METH_VARARGS,
   "GetRandomModeType(self) -> int\nC++: virtual int GetRandomModeType()\n\n"},
  {"SetProportionalMaximumNumberOfPoints", PyvtkMaskPoints_SetProportionalMaximumNumberOfPoints, METH_VARARGS,
   "SetProportionalMaximumNumberOfPoints(self, _arg:bool) -> None\nC++: virtual void SetProportionalMaximumNumberOfPoints(bool _arg)\n\nTHIS ONLY WORKS WITH THE PARALLEL IMPLEMENTATION vtkPMaskPoints\nRUNNING IN PARALLEL. NOTHING WILL CHANGE IF THIS IS NOT THE\nPARALLEL vtkPMaskPoints. Determines whether maximum number of\npoints is taken per processor (default) or if the maximum number\nof points is proportionally taken across processors (i.e., number\nof points per processor = points on a processor * maximum number\nof points / total points across all processors).  In the first\ncase, the total number of points = maximum number of points *\nnumber of processors.  In the second case, the total number of\npoints = maximum number of points.\n"},
  {"GetProportionalMaximumNumberOfPoints", PyvtkMaskPoints_GetProportionalMaximumNumberOfPoints, METH_VARARGS,
   "GetProportionalMaximumNumberOfPoints(self) -> bool\nC++: virtual bool GetProportionalMaximumNumberOfPoints()\n\n"},
  {"ProportionalMaximumNumberOfPointsOn", PyvtkMaskPoints_ProportionalMaximumNumberOfPointsOn, METH_VARARGS,
   "ProportionalMaximumNumberOfPointsOn(self) -> None\nC++: virtual void ProportionalMaximumNumberOfPointsOn()\n\n"},
  {"ProportionalMaximumNumberOfPointsOff", PyvtkMaskPoints_ProportionalMaximumNumberOfPointsOff, METH_VARARGS,
   "ProportionalMaximumNumberOfPointsOff(self) -> None\nC++: virtual void ProportionalMaximumNumberOfPointsOff()\n\n"},
  {"SetGenerateVertices", PyvtkMaskPoints_SetGenerateVertices, METH_VARARGS,
   "SetGenerateVertices(self, _arg:bool) -> None\nC++: virtual void SetGenerateVertices(bool _arg)\n\nGenerate output polydata vertices as well as points. A useful\nconvenience method because vertices are drawn (they are topology)\nwhile points are not (they are geometry). By default this method\nis off.\n"},
  {"GetGenerateVertices", PyvtkMaskPoints_GetGenerateVertices, METH_VARARGS,
   "GetGenerateVertices(self) -> bool\nC++: virtual bool GetGenerateVertices()\n\n"},
  {"GenerateVerticesOn", PyvtkMaskPoints_GenerateVerticesOn, METH_VARARGS,
   "GenerateVerticesOn(self) -> None\nC++: virtual void GenerateVerticesOn()\n\n"},
  {"GenerateVerticesOff", PyvtkMaskPoints_GenerateVerticesOff, METH_VARARGS,
   "GenerateVerticesOff(self) -> None\nC++: virtual void GenerateVerticesOff()\n\n"},
  {"SetSingleVertexPerCell", PyvtkMaskPoints_SetSingleVertexPerCell, METH_VARARGS,
   "SetSingleVertexPerCell(self, _arg:bool) -> None\nC++: virtual void SetSingleVertexPerCell(bool _arg)\n\nWhen vertex generation is enabled, by default vertices are\nproduced as multi-vertex cells (more than one per cell), if you\nwish to have a single vertex per cell, enable this flag.\n"},
  {"GetSingleVertexPerCell", PyvtkMaskPoints_GetSingleVertexPerCell, METH_VARARGS,
   "GetSingleVertexPerCell(self) -> bool\nC++: virtual bool GetSingleVertexPerCell()\n\n"},
  {"SingleVertexPerCellOn", PyvtkMaskPoints_SingleVertexPerCellOn, METH_VARARGS,
   "SingleVertexPerCellOn(self) -> None\nC++: virtual void SingleVertexPerCellOn()\n\n"},
  {"SingleVertexPerCellOff", PyvtkMaskPoints_SingleVertexPerCellOff, METH_VARARGS,
   "SingleVertexPerCellOff(self) -> None\nC++: virtual void SingleVertexPerCellOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkMaskPoints_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkMaskPoints_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMaskPoints_Doc =
  "vtkMaskPoints - selectively filter points\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkMaskPoints is a filter that passes through points and point\n"
  "attributes from input dataset. (Other geometry is not passed\n"
  "through.) It is possible to mask every nth point, and to specify an\n"
  "initial offset to begin masking from. It is possible to also generate\n"
  "different random selections (jittered strides, real random samples,\n"
  "and spatially stratified random samples) from the input data. The\n"
  "filter can also generate vertices (topological primitives) as well as\n"
  "points. This is useful because vertices are rendered while points are\n"
  "not.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMaskPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkMaskPoints", // tp_name
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
  PyvtkMaskPoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMaskPoints_StaticNew()
{
  return vtkMaskPoints::New();
}

PyObject *PyvtkMaskPoints_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMaskPoints_Type, PyvtkMaskPoints_Methods,
    "vtkMaskPoints",
 &PyvtkMaskPoints_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMaskPoints_DistributionType_Type);
  PyVTKEnum_Add(&PyvtkMaskPoints_DistributionType_Type, "vtkMaskPoints.DistributionType");

  o = (PyObject *)&PyvtkMaskPoints_DistributionType_Type;
  if (PyDict_SetItemString(d, "DistributionType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkMaskPoints::DistributionType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "RANDOMIZED_ID_STRIDES", vtkMaskPoints::RANDOMIZED_ID_STRIDES },
        { "RANDOM_SAMPLING", vtkMaskPoints::RANDOM_SAMPLING },
        { "SPATIALLY_STRATIFIED", vtkMaskPoints::SPATIALLY_STRATIFIED },
        { "UNIFORM_SPATIAL_BOUNDS", vtkMaskPoints::UNIFORM_SPATIAL_BOUNDS },
        { "UNIFORM_SPATIAL_SURFACE", vtkMaskPoints::UNIFORM_SPATIAL_SURFACE },
        { "UNIFORM_SPATIAL_VOLUME", vtkMaskPoints::UNIFORM_SPATIAL_VOLUME },
      };

    o = PyvtkMaskPoints_DistributionType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMaskPoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMaskPoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMaskPoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

