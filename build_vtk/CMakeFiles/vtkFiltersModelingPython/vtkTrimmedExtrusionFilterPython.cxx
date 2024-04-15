// python wrapper for vtkTrimmedExtrusionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTrimmedExtrusionFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTrimmedExtrusionFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkTrimmedExtrusionFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTrimmedExtrusionFilter_ExtrusionStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkTrimmedExtrusionFilter.ExtrusionStrategy", // tp_name
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
PyObject *PyvtkTrimmedExtrusionFilter_ExtrusionStrategy_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkTrimmedExtrusionFilter_ExtrusionStrategy_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTrimmedExtrusionFilter_CappingStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkTrimmedExtrusionFilter.CappingStrategy", // tp_name
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
PyObject *PyvtkTrimmedExtrusionFilter_CappingStrategy_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkTrimmedExtrusionFilter_CappingStrategy_Type, static_cast<int>(val));
}


static PyObject *
PyvtkTrimmedExtrusionFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTrimmedExtrusionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTrimmedExtrusionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTrimmedExtrusionFilter *tempr = vtkTrimmedExtrusionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTrimmedExtrusionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTrimmedExtrusionFilter::NewInstance());

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
PyvtkTrimmedExtrusionFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTrimmedExtrusionFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTrimmedExtrusionFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_SetExtrusionDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

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
      op->SetExtrusionDirection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTrimmedExtrusionFilter::SetExtrusionDirection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTrimmedExtrusionFilter_SetExtrusionDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetExtrusionDirection(temp0);
    }
    else
    {
      op->vtkTrimmedExtrusionFilter::SetExtrusionDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTrimmedExtrusionFilter_SetExtrusionDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTrimmedExtrusionFilter_SetExtrusionDirection_s1(self, args);
    case 1:
      return PyvtkTrimmedExtrusionFilter_SetExtrusionDirection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtrusionDirection");
  return nullptr;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_GetExtrusionDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtrusionDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetExtrusionDirection() :
      op->vtkTrimmedExtrusionFilter::GetExtrusionDirection());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_SetTrimSurfaceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrimSurfaceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetTrimSurfaceData(temp0);
    }
    else
    {
      op->vtkTrimmedExtrusionFilter::SetTrimSurfaceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_SetTrimSurfaceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrimSurfaceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetTrimSurfaceConnection(temp0);
    }
    else
    {
      op->vtkTrimmedExtrusionFilter::SetTrimSurfaceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_GetTrimSurface_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrimSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetTrimSurface() :
      op->vtkTrimmedExtrusionFilter::GetTrimSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTrimmedExtrusionFilter_GetTrimSurface_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrimSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  vtkInformationVector *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVector"))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetTrimSurface(temp0) :
      op->vtkTrimmedExtrusionFilter::GetTrimSurface(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTrimmedExtrusionFilter_GetTrimSurface(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkTrimmedExtrusionFilter_GetTrimSurface_s1(self, args);
    case 1:
      return PyvtkTrimmedExtrusionFilter_GetTrimSurface_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTrimSurface");
  return nullptr;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCapping(temp0);
    }
    else
    {
      op->vtkTrimmedExtrusionFilter::SetCapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkTrimmedExtrusionFilter::GetCapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOn();
    }
    else
    {
      op->vtkTrimmedExtrusionFilter::CappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOff();
    }
    else
    {
      op->vtkTrimmedExtrusionFilter::CappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_SetExtrusionStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtrusionStrategy(temp0);
    }
    else
    {
      op->vtkTrimmedExtrusionFilter::SetExtrusionStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_GetExtrusionStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtrusionStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtrusionStrategy() :
      op->vtkTrimmedExtrusionFilter::GetExtrusionStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_SetExtrusionStrategyToBoundaryEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionStrategyToBoundaryEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtrusionStrategyToBoundaryEdges();
    }
    else
    {
      op->vtkTrimmedExtrusionFilter::SetExtrusionStrategyToBoundaryEdges();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_SetExtrusionStrategyToAllEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionStrategyToAllEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtrusionStrategyToAllEdges();
    }
    else
    {
      op->vtkTrimmedExtrusionFilter::SetExtrusionStrategyToAllEdges();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_SetCappingStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCappingStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCappingStrategy(temp0);
    }
    else
    {
      op->vtkTrimmedExtrusionFilter::SetCappingStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_GetCappingStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCappingStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCappingStrategy() :
      op->vtkTrimmedExtrusionFilter::GetCappingStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_SetCappingStrategyToIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCappingStrategyToIntersection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCappingStrategyToIntersection();
    }
    else
    {
      op->vtkTrimmedExtrusionFilter::SetCappingStrategyToIntersection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_SetCappingStrategyToMinimumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCappingStrategyToMinimumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCappingStrategyToMinimumDistance();
    }
    else
    {
      op->vtkTrimmedExtrusionFilter::SetCappingStrategyToMinimumDistance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_SetCappingStrategyToMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCappingStrategyToMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCappingStrategyToMaximumDistance();
    }
    else
    {
      op->vtkTrimmedExtrusionFilter::SetCappingStrategyToMaximumDistance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_SetCappingStrategyToAverageDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCappingStrategyToAverageDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCappingStrategyToAverageDistance();
    }
    else
    {
      op->vtkTrimmedExtrusionFilter::SetCappingStrategyToAverageDistance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

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
      op->vtkTrimmedExtrusionFilter::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTrimmedExtrusionFilter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTrimmedExtrusionFilter *op = static_cast<vtkTrimmedExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkTrimmedExtrusionFilter::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTrimmedExtrusionFilter_Methods[] = {
  {"IsTypeOf", PyvtkTrimmedExtrusionFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTrimmedExtrusionFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTrimmedExtrusionFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTrimmedExtrusionFilter\nC++: static vtkTrimmedExtrusionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTrimmedExtrusionFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTrimmedExtrusionFilter\nC++: vtkTrimmedExtrusionFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTrimmedExtrusionFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTrimmedExtrusionFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetExtrusionDirection", PyvtkTrimmedExtrusionFilter_SetExtrusionDirection, METH_VARARGS,
   "SetExtrusionDirection(self, _arg1:float, _arg2:float, _arg3:float)\n     -> None\nC++: virtual void SetExtrusionDirection(double _arg1,\n    double _arg2, double _arg3)\nSetExtrusionDirection(self, _arg:(float, float, float)) -> None\nC++: virtual void SetExtrusionDirection(const double _arg[3])\n\nSet/Get the extrusion direction.\n"},
  {"GetExtrusionDirection", PyvtkTrimmedExtrusionFilter_GetExtrusionDirection, METH_VARARGS,
   "GetExtrusionDirection(self) -> (float, float, float)\nC++: virtual double *GetExtrusionDirection()\n\n"},
  {"SetTrimSurfaceData", PyvtkTrimmedExtrusionFilter_SetTrimSurfaceData, METH_VARARGS,
   "SetTrimSurfaceData(self, pd:vtkPolyData) -> None\nC++: void SetTrimSurfaceData(vtkPolyData *pd)\n\nSpecify the surface which trims the surface.  Note that the\nmethod SetTrimSurfaceData does not connect the pipeline. The\nalgorithm will work on the input data as it is without updating\nthe producer of the data.  The method SetTrimSurfaceConnection\nconnects the pipeline.\n"},
  {"SetTrimSurfaceConnection", PyvtkTrimmedExtrusionFilter_SetTrimSurfaceConnection, METH_VARARGS,
   "SetTrimSurfaceConnection(self, algOutput:vtkAlgorithmOutput)\n    -> None\nC++: void SetTrimSurfaceConnection(vtkAlgorithmOutput *algOutput)\n\n"},
  {"GetTrimSurface", PyvtkTrimmedExtrusionFilter_GetTrimSurface, METH_VARARGS,
   "GetTrimSurface(self) -> vtkPolyData\nC++: vtkPolyData *GetTrimSurface()\nGetTrimSurface(self, sourceInfo:vtkInformationVector)\n    -> vtkPolyData\nC++: vtkPolyData *GetTrimSurface(vtkInformationVector *sourceInfo)\n\nReturn a pointer to the enclosing surface.\n"},
  {"SetCapping", PyvtkTrimmedExtrusionFilter_SetCapping, METH_VARARGS,
   "SetCapping(self, _arg:int) -> None\nC++: virtual void SetCapping(int _arg)\n\nTurn on/off the capping of the extruded skirt.\n"},
  {"GetCapping", PyvtkTrimmedExtrusionFilter_GetCapping, METH_VARARGS,
   "GetCapping(self) -> int\nC++: virtual int GetCapping()\n\n"},
  {"CappingOn", PyvtkTrimmedExtrusionFilter_CappingOn, METH_VARARGS,
   "CappingOn(self) -> None\nC++: virtual void CappingOn()\n\n"},
  {"CappingOff", PyvtkTrimmedExtrusionFilter_CappingOff, METH_VARARGS,
   "CappingOff(self) -> None\nC++: virtual void CappingOff()\n\n"},
  {"SetExtrusionStrategy", PyvtkTrimmedExtrusionFilter_SetExtrusionStrategy, METH_VARARGS,
   "SetExtrusionStrategy(self, _arg:int) -> None\nC++: virtual void SetExtrusionStrategy(int _arg)\n\nSpecify a strategy for extrusion. If the strategy is set to\n\"BOUNDARY_EDGES\" then the boundary edges of the input polygons\nand triangle strips are swept. (A boundary edge is an edge used\nby only one 2D primitive, e.g., polygon or triangle.)\nAlternatively, all edges can be swept. (This is particularly\nuseful when only sinple disconnected polygons exist in the input\nand so boundary calculation can be avoided.) By default boundary\nedges are extruded.\n"},
  {"GetExtrusionStrategy", PyvtkTrimmedExtrusionFilter_GetExtrusionStrategy, METH_VARARGS,
   "GetExtrusionStrategy(self) -> int\nC++: virtual int GetExtrusionStrategy()\n\n"},
  {"SetExtrusionStrategyToBoundaryEdges", PyvtkTrimmedExtrusionFilter_SetExtrusionStrategyToBoundaryEdges, METH_VARARGS,
   "SetExtrusionStrategyToBoundaryEdges(self) -> None\nC++: void SetExtrusionStrategyToBoundaryEdges()\n\n"},
  {"SetExtrusionStrategyToAllEdges", PyvtkTrimmedExtrusionFilter_SetExtrusionStrategyToAllEdges, METH_VARARGS,
   "SetExtrusionStrategyToAllEdges(self) -> None\nC++: void SetExtrusionStrategyToAllEdges()\n\n"},
  {"SetCappingStrategy", PyvtkTrimmedExtrusionFilter_SetCappingStrategy, METH_VARARGS,
   "SetCappingStrategy(self, _arg:int) -> None\nC++: virtual void SetCappingStrategy(int _arg)\n\nSpecify a strategy for capping. By default the points of the cap\npolygons are located where the extrusion intersects the capping\nsurface. However, to preserve planarity, or to place the capping\nsurface at the average/minimum/maximum distance of extrusion,\ndifferent strategies can be used. By default the average distance\nis used.\n\nNote if none of the extrusion rays intersect the trim surface,\nthen capping is not performed, nor is an extrusion skirt sent to\nthe output. Also note that if the capping strategy is set to\nINTERSECTION, and one of the extrusion rays of the generating\nprimitive does not intersect the trim surface, then no output\nwill be generated for that primitive. However if any other\ncapping strategy is used, capping will succeed if at least one\nextrusion ray strikes the trim surface (although missed extrusion\nray intersections will not factor into the determination of final\ncap location).\n\nFinally, note that any capping strategy other than INTERSECTION\nmay produce more points than expected because the output\nprimitives may have to be \"split apart\" to satisy the capping\nconstraint.\n"},
  {"GetCappingStrategy", PyvtkTrimmedExtrusionFilter_GetCappingStrategy, METH_VARARGS,
   "GetCappingStrategy(self) -> int\nC++: virtual int GetCappingStrategy()\n\n"},
  {"SetCappingStrategyToIntersection", PyvtkTrimmedExtrusionFilter_SetCappingStrategyToIntersection, METH_VARARGS,
   "SetCappingStrategyToIntersection(self) -> None\nC++: void SetCappingStrategyToIntersection()\n\n"},
  {"SetCappingStrategyToMinimumDistance", PyvtkTrimmedExtrusionFilter_SetCappingStrategyToMinimumDistance, METH_VARARGS,
   "SetCappingStrategyToMinimumDistance(self) -> None\nC++: void SetCappingStrategyToMinimumDistance()\n\n"},
  {"SetCappingStrategyToMaximumDistance", PyvtkTrimmedExtrusionFilter_SetCappingStrategyToMaximumDistance, METH_VARARGS,
   "SetCappingStrategyToMaximumDistance(self) -> None\nC++: void SetCappingStrategyToMaximumDistance()\n\n"},
  {"SetCappingStrategyToAverageDistance", PyvtkTrimmedExtrusionFilter_SetCappingStrategyToAverageDistance, METH_VARARGS,
   "SetCappingStrategyToAverageDistance(self) -> None\nC++: void SetCappingStrategyToAverageDistance()\n\n"},
  {"SetLocator", PyvtkTrimmedExtrusionFilter_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkAbstractCellLocator) -> None\nC++: void SetLocator(vtkAbstractCellLocator *locator)\n\nSpecify a cell locator. By default a vtkStaticCellLocator is\nused. The locator performs efficient searches to intersect cells.\n"},
  {"GetLocator", PyvtkTrimmedExtrusionFilter_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkAbstractCellLocator\nC++: virtual vtkAbstractCellLocator *GetLocator()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTrimmedExtrusionFilter_Doc =
  "vtkTrimmedExtrusionFilter - extrude polygonal data trimmed by a\nsecond input surface\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkTrimmedExtrusionFilter is a modeling filter. It takes polygonal\n"
  "data as input and generates polygonal data on output. The input\n"
  "dataset is swept along a specified direction forming a \"skirt\" from\n"
  "the boundary edges 2D primitives (i.e., edges used by only one\n"
  "polygon); and/or from vertices and lines. The extent of the sweeping\n"
  "is limited by a second input: defined where the sweep intersects a\n"
  "user-specified surface.\n\n"
  "Capping of the extrusion can be enabled. In this case the input,\n"
  "generating primitive is copied inplace as well as to the end of the\n"
  "extrusion skirt. (See warnings below on what happens if the\n"
  "intersecting sweep does not intersect, or partially intersects the\n"
  "trim surface.)\n\n"
  "Note that this filter operates in two fundamentally different modes\n"
  "based on the extrusion strategy. If the strategy is BOUNDARY_EDGES,\n"
  "then only the boundary edges of the input's 2D primitives are\n"
  "extruded (verts and lines are extruded to generate lines and quads).\n"
  "However, if the extrusions strategy is ALL_EDGES, then every edge of\n"
  "the 2D primitives is used to sweep out a quadrilateral polygon (again\n"
  "verts and lines are swept to produce lines and quads).\n\n"
  "@warning\n"
  "The extrusion direction is assumed to define an infinite line. The\n"
  "intersection with the trim surface is along a ray from the - to +\n"
  "direction, however only the first intersection is taken.\n\n"
  "@warning\n"
  "Some polygonal objects have no free edges (e.g., sphere). When swept,\n"
  "this will result in two separate surfaces if capping is on and\n"
  "BOUNDARY_EDGES enabled, or no surface if capping is off and\n"
  "BOUNDARY_EDGES is enabled.\n\n"
  "@warning\n"
  "If all the extrusion lines emanating from an extruding primitive do\n"
  "not intersect the trim surface, then no output for that primitive\n"
  "will be generated. In extreme cases, it is possible that no output\n"
  "whatsoever will be generated by the filter.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkLinearExtrusionFilter vtkRotationalExtrusionFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTrimmedExtrusionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkTrimmedExtrusionFilter", // tp_name
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
  PyvtkTrimmedExtrusionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTrimmedExtrusionFilter_StaticNew()
{
  return vtkTrimmedExtrusionFilter::New();
}

PyObject *PyvtkTrimmedExtrusionFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTrimmedExtrusionFilter_Type, PyvtkTrimmedExtrusionFilter_Methods,
    "vtkTrimmedExtrusionFilter",
 &PyvtkTrimmedExtrusionFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkTrimmedExtrusionFilter_ExtrusionStrategy_Type);
  PyVTKEnum_Add(&PyvtkTrimmedExtrusionFilter_ExtrusionStrategy_Type, "vtkTrimmedExtrusionFilter.ExtrusionStrategy");

  o = (PyObject *)&PyvtkTrimmedExtrusionFilter_ExtrusionStrategy_Type;
  if (PyDict_SetItemString(d, "ExtrusionStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkTrimmedExtrusionFilter_CappingStrategy_Type);
  PyVTKEnum_Add(&PyvtkTrimmedExtrusionFilter_CappingStrategy_Type, "vtkTrimmedExtrusionFilter.CappingStrategy");

  o = (PyObject *)&PyvtkTrimmedExtrusionFilter_CappingStrategy_Type;
  if (PyDict_SetItemString(d, "CappingStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "BOUNDARY_EDGES", vtkTrimmedExtrusionFilter::BOUNDARY_EDGES },
        { "ALL_EDGES", vtkTrimmedExtrusionFilter::ALL_EDGES },
      };

    o = PyvtkTrimmedExtrusionFilter_ExtrusionStrategy_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "INTERSECTION", vtkTrimmedExtrusionFilter::INTERSECTION },
        { "MINIMUM_DISTANCE", vtkTrimmedExtrusionFilter::MINIMUM_DISTANCE },
        { "MAXIMUM_DISTANCE", vtkTrimmedExtrusionFilter::MAXIMUM_DISTANCE },
        { "AVERAGE_DISTANCE", vtkTrimmedExtrusionFilter::AVERAGE_DISTANCE },
      };

    o = PyvtkTrimmedExtrusionFilter_CappingStrategy_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTrimmedExtrusionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTrimmedExtrusionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTrimmedExtrusionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

