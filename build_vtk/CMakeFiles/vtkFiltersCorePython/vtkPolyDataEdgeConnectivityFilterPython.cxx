// python wrapper for vtkPolyDataEdgeConnectivityFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPolyDataEdgeConnectivityFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataEdgeConnectivityFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkPolyDataEdgeConnectivityFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolyDataEdgeConnectivityFilter_RegionGrowingType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkPolyDataEdgeConnectivityFilter.RegionGrowingType", // tp_name
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
PyObject *PyvtkPolyDataEdgeConnectivityFilter_RegionGrowingType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPolyDataEdgeConnectivityFilter_RegionGrowingType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataEdgeConnectivityFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataEdgeConnectivityFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataEdgeConnectivityFilter *tempr = vtkPolyDataEdgeConnectivityFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataEdgeConnectivityFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataEdgeConnectivityFilter::NewInstance());

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
PyvtkPolyDataEdgeConnectivityFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolyDataEdgeConnectivityFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolyDataEdgeConnectivityFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionMode(temp0);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetExtractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetExtractionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionModeMinValue() :
      op->vtkPolyDataEdgeConnectivityFilter::GetExtractionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetExtractionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionModeMaxValue() :
      op->vtkPolyDataEdgeConnectivityFilter::GetExtractionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionMode() :
      op->vtkPolyDataEdgeConnectivityFilter::GetExtractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetExtractionModeToPointSeededRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToPointSeededRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToPointSeededRegions();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetExtractionModeToPointSeededRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetExtractionModeToCellSeededRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToCellSeededRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToCellSeededRegions();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetExtractionModeToCellSeededRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetExtractionModeToLargestRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToLargestRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToLargestRegion();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetExtractionModeToLargestRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetExtractionModeToSpecifiedRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToSpecifiedRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToSpecifiedRegions();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetExtractionModeToSpecifiedRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetExtractionModeToClosestPointRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToClosestPointRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToClosestPointRegion();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetExtractionModeToClosestPointRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetExtractionModeToLargeRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToLargeRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToLargeRegions();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetExtractionModeToLargeRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetExtractionModeToAllRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToAllRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToAllRegions();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetExtractionModeToAllRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetExtractionModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetExtractionModeAsString() :
      op->vtkPolyDataEdgeConnectivityFilter::GetExtractionModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetBarrierEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBarrierEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBarrierEdges(temp0);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetBarrierEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetBarrierEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarrierEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBarrierEdges() :
      op->vtkPolyDataEdgeConnectivityFilter::GetBarrierEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_BarrierEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BarrierEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BarrierEdgesOn();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::BarrierEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_BarrierEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BarrierEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BarrierEdgesOff();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::BarrierEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

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
      op->vtkPolyDataEdgeConnectivityFilter::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkPolyDataEdgeConnectivityFilter::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetBarrierEdgeLength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBarrierEdgeLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBarrierEdgeLength(temp0, temp1);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetBarrierEdgeLength(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetBarrierEdgeLength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBarrierEdgeLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBarrierEdgeLength(temp0);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetBarrierEdgeLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetBarrierEdgeLength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolyDataEdgeConnectivityFilter_SetBarrierEdgeLength_s1(self, args);
    case 1:
      return PyvtkPolyDataEdgeConnectivityFilter_SetBarrierEdgeLength_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBarrierEdgeLength");
  return nullptr;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetBarrierEdgeLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarrierEdgeLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBarrierEdgeLength() :
      op->vtkPolyDataEdgeConnectivityFilter::GetBarrierEdgeLength());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarConnectivity(temp0);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetScalarConnectivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarConnectivity() :
      op->vtkPolyDataEdgeConnectivityFilter::GetScalarConnectivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_ScalarConnectivityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarConnectivityOn();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::ScalarConnectivityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_ScalarConnectivityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarConnectivityOff();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::ScalarConnectivityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0, temp1);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolyDataEdgeConnectivityFilter_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkPolyDataEdgeConnectivityFilter_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkPolyDataEdgeConnectivityFilter::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetRegionSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetRegionSizes() :
      op->vtkPolyDataEdgeConnectivityFilter::GetRegionSizes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_InitializeSeedList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSeedList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeSeedList();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::InitializeSeedList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_AddSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddSeed(temp0);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::AddSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_DeleteSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteSeed(temp0);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::DeleteSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_InitializeSpecifiedRegionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSpecifiedRegionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeSpecifiedRegionList();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::InitializeSpecifiedRegionList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_AddSpecifiedRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSpecifiedRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddSpecifiedRegion(temp0);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::AddSpecifiedRegion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_DeleteSpecifiedRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSpecifiedRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteSpecifiedRegion(temp0);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::DeleteSpecifiedRegion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetNumberOfSpecifiedRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSpecifiedRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSpecifiedRegions() :
      op->vtkPolyDataEdgeConnectivityFilter::GetNumberOfSpecifiedRegions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

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
      op->SetClosestPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetClosestPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetClosestPoint(temp0);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetClosestPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolyDataEdgeConnectivityFilter_SetClosestPoint_s1(self, args);
    case 1:
      return PyvtkPolyDataEdgeConnectivityFilter_SetClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetClosestPoint");
  return nullptr;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetClosestPoint() :
      op->vtkPolyDataEdgeConnectivityFilter::GetClosestPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetRegionGrowing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRegionGrowing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRegionGrowing(temp0);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetRegionGrowing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetRegionGrowingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionGrowingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRegionGrowingMinValue() :
      op->vtkPolyDataEdgeConnectivityFilter::GetRegionGrowingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetRegionGrowingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionGrowingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRegionGrowingMaxValue() :
      op->vtkPolyDataEdgeConnectivityFilter::GetRegionGrowingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetRegionGrowing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionGrowing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRegionGrowing() :
      op->vtkPolyDataEdgeConnectivityFilter::GetRegionGrowing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetRegionGrowingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRegionGrowingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRegionGrowingOff();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetRegionGrowingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GrowLargeRegionsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GrowLargeRegionsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GrowLargeRegionsOff();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::GrowLargeRegionsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GrowSmallRegionsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GrowSmallRegionsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GrowSmallRegionsOff();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::GrowSmallRegionsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetRegionGrowingToLargeRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRegionGrowingToLargeRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRegionGrowingToLargeRegions();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetRegionGrowingToLargeRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GrowLargeRegionsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GrowLargeRegionsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GrowLargeRegionsOn();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::GrowLargeRegionsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetRegionGrowingToSmallRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRegionGrowingToSmallRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRegionGrowingToSmallRegions();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetRegionGrowingToSmallRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GrowSmallRegionsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GrowSmallRegionsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GrowSmallRegionsOn();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::GrowSmallRegionsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetLargeRegionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLargeRegionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLargeRegionThreshold(temp0);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetLargeRegionThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetLargeRegionThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLargeRegionThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLargeRegionThresholdMinValue() :
      op->vtkPolyDataEdgeConnectivityFilter::GetLargeRegionThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetLargeRegionThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLargeRegionThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLargeRegionThresholdMaxValue() :
      op->vtkPolyDataEdgeConnectivityFilter::GetLargeRegionThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetLargeRegionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLargeRegionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLargeRegionThreshold() :
      op->vtkPolyDataEdgeConnectivityFilter::GetLargeRegionThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetNumberOfExtractedRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfExtractedRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfExtractedRegions() :
      op->vtkPolyDataEdgeConnectivityFilter::GetNumberOfExtractedRegions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetTotalArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTotalArea() :
      op->vtkPolyDataEdgeConnectivityFilter::GetTotalArea());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetColorRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorRegions(temp0);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetColorRegions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetColorRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorRegions() :
      op->vtkPolyDataEdgeConnectivityFilter::GetColorRegions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_ColorRegionsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorRegionsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorRegionsOn();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::ColorRegionsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_ColorRegionsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorRegionsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorRegionsOff();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::ColorRegionsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetCellRegionAreas(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellRegionAreas");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellRegionAreas(temp0);
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::SetCellRegionAreas(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetCellRegionAreas(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellRegionAreas");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellRegionAreas() :
      op->vtkPolyDataEdgeConnectivityFilter::GetCellRegionAreas());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_CellRegionAreasOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellRegionAreasOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellRegionAreasOn();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::CellRegionAreasOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_CellRegionAreasOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellRegionAreasOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellRegionAreasOff();
    }
    else
    {
      op->vtkPolyDataEdgeConnectivityFilter::CellRegionAreasOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

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
      op->vtkPolyDataEdgeConnectivityFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataEdgeConnectivityFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataEdgeConnectivityFilter *op = static_cast<vtkPolyDataEdgeConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkPolyDataEdgeConnectivityFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataEdgeConnectivityFilter_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataEdgeConnectivityFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyDataEdgeConnectivityFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyDataEdgeConnectivityFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPolyDataEdgeConnectivityFilter\nC++: static vtkPolyDataEdgeConnectivityFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyDataEdgeConnectivityFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolyDataEdgeConnectivityFilter\nC++: vtkPolyDataEdgeConnectivityFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolyDataEdgeConnectivityFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolyDataEdgeConnectivityFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetExtractionMode", PyvtkPolyDataEdgeConnectivityFilter_SetExtractionMode, METH_VARARGS,
   "SetExtractionMode(self, _arg:int) -> None\nC++: virtual void SetExtractionMode(int _arg)\n\nControl the extraction of connected surfaces.\n"},
  {"GetExtractionModeMinValue", PyvtkPolyDataEdgeConnectivityFilter_GetExtractionModeMinValue, METH_VARARGS,
   "GetExtractionModeMinValue(self) -> int\nC++: virtual int GetExtractionModeMinValue()\n\n"},
  {"GetExtractionModeMaxValue", PyvtkPolyDataEdgeConnectivityFilter_GetExtractionModeMaxValue, METH_VARARGS,
   "GetExtractionModeMaxValue(self) -> int\nC++: virtual int GetExtractionModeMaxValue()\n\n"},
  {"GetExtractionMode", PyvtkPolyDataEdgeConnectivityFilter_GetExtractionMode, METH_VARARGS,
   "GetExtractionMode(self) -> int\nC++: virtual int GetExtractionMode()\n\n"},
  {"SetExtractionModeToPointSeededRegions", PyvtkPolyDataEdgeConnectivityFilter_SetExtractionModeToPointSeededRegions, METH_VARARGS,
   "SetExtractionModeToPointSeededRegions(self) -> None\nC++: void SetExtractionModeToPointSeededRegions()\n\n"},
  {"SetExtractionModeToCellSeededRegions", PyvtkPolyDataEdgeConnectivityFilter_SetExtractionModeToCellSeededRegions, METH_VARARGS,
   "SetExtractionModeToCellSeededRegions(self) -> None\nC++: void SetExtractionModeToCellSeededRegions()\n\n"},
  {"SetExtractionModeToLargestRegion", PyvtkPolyDataEdgeConnectivityFilter_SetExtractionModeToLargestRegion, METH_VARARGS,
   "SetExtractionModeToLargestRegion(self) -> None\nC++: void SetExtractionModeToLargestRegion()\n\n"},
  {"SetExtractionModeToSpecifiedRegions", PyvtkPolyDataEdgeConnectivityFilter_SetExtractionModeToSpecifiedRegions, METH_VARARGS,
   "SetExtractionModeToSpecifiedRegions(self) -> None\nC++: void SetExtractionModeToSpecifiedRegions()\n\n"},
  {"SetExtractionModeToClosestPointRegion", PyvtkPolyDataEdgeConnectivityFilter_SetExtractionModeToClosestPointRegion, METH_VARARGS,
   "SetExtractionModeToClosestPointRegion(self) -> None\nC++: void SetExtractionModeToClosestPointRegion()\n\n"},
  {"SetExtractionModeToLargeRegions", PyvtkPolyDataEdgeConnectivityFilter_SetExtractionModeToLargeRegions, METH_VARARGS,
   "SetExtractionModeToLargeRegions(self) -> None\nC++: void SetExtractionModeToLargeRegions()\n\n"},
  {"SetExtractionModeToAllRegions", PyvtkPolyDataEdgeConnectivityFilter_SetExtractionModeToAllRegions, METH_VARARGS,
   "SetExtractionModeToAllRegions(self) -> None\nC++: void SetExtractionModeToAllRegions()\n\n"},
  {"GetExtractionModeAsString", PyvtkPolyDataEdgeConnectivityFilter_GetExtractionModeAsString, METH_VARARGS,
   "GetExtractionModeAsString(self) -> str\nC++: const char *GetExtractionModeAsString()\n\n"},
  {"SetBarrierEdges", PyvtkPolyDataEdgeConnectivityFilter_SetBarrierEdges, METH_VARARGS,
   "SetBarrierEdges(self, _arg:int) -> None\nC++: virtual void SetBarrierEdges(vtkTypeBool _arg)\n\nControl connectivity traversal based on barrier edges. If\nenabled, then either the length of edges, or a explicit\nspecification of barrier edges, is used to control what are\nconsidered connected edge neighbors.\n"},
  {"GetBarrierEdges", PyvtkPolyDataEdgeConnectivityFilter_GetBarrierEdges, METH_VARARGS,
   "GetBarrierEdges(self) -> int\nC++: virtual vtkTypeBool GetBarrierEdges()\n\n"},
  {"BarrierEdgesOn", PyvtkPolyDataEdgeConnectivityFilter_BarrierEdgesOn, METH_VARARGS,
   "BarrierEdgesOn(self) -> None\nC++: virtual void BarrierEdgesOn()\n\n"},
  {"BarrierEdgesOff", PyvtkPolyDataEdgeConnectivityFilter_BarrierEdgesOff, METH_VARARGS,
   "BarrierEdgesOff(self) -> None\nC++: virtual void BarrierEdgesOff()\n\n"},
  {"SetSourceData", PyvtkPolyDataEdgeConnectivityFilter_SetSourceData, METH_VARARGS,
   "SetSourceData(self, __a:vtkPolyData) -> None\nC++: void SetSourceData(vtkPolyData *)\n\nSpecify the source vtkPolyData object used to specify barrier\nedges (this is an optional connection.) If specified, the\nconnected traversal cannot traverse across the edges indicated as\nthey are defined as barrier edges. Also note that the data member\nBarrierEdges must be enabled.\n"},
  {"SetSourceConnection", PyvtkPolyDataEdgeConnectivityFilter_SetSourceConnection, METH_VARARGS,
   "SetSourceConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\n"},
  {"GetSource", PyvtkPolyDataEdgeConnectivityFilter_GetSource, METH_VARARGS,
   "GetSource(self) -> vtkPolyData\nC++: vtkPolyData *GetSource()\n\n"},
  {"SetBarrierEdgeLength", PyvtkPolyDataEdgeConnectivityFilter_SetBarrierEdgeLength, METH_VARARGS,
   "SetBarrierEdgeLength(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetBarrierEdgeLength(double _arg1, double _arg2)\nSetBarrierEdgeLength(self, _arg:(float, float)) -> None\nC++: void SetBarrierEdgeLength(const double _arg[2])\n\nEdges E of length edgeLen\n(BarrierEdgeLength[0]<=edgeLen<=BarrierEdgeLength[1]) define\nbarrier edges. If edgeLen falls within this range, then polygon\ncells on either side of the edge E are not neighbors, since the\nedge is a barrier edge. Note that a range of\n[VTK_DOUBLE_MAX,VTK_DOUBLE_MAX] (which is the default range)\nimplies that all edges are not barrier edges (based on edge\nlength).\n"},
  {"GetBarrierEdgeLength", PyvtkPolyDataEdgeConnectivityFilter_GetBarrierEdgeLength, METH_VARARGS,
   "GetBarrierEdgeLength(self) -> (float, float)\nC++: virtual double *GetBarrierEdgeLength()\n\n"},
  {"SetScalarConnectivity", PyvtkPolyDataEdgeConnectivityFilter_SetScalarConnectivity, METH_VARARGS,
   "SetScalarConnectivity(self, _arg:int) -> None\nC++: virtual void SetScalarConnectivity(vtkTypeBool _arg)\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share a non-barrier edge AND and cell's\nscalar value falls within the scalar range specified.\n"},
  {"GetScalarConnectivity", PyvtkPolyDataEdgeConnectivityFilter_GetScalarConnectivity, METH_VARARGS,
   "GetScalarConnectivity(self) -> int\nC++: virtual vtkTypeBool GetScalarConnectivity()\n\n"},
  {"ScalarConnectivityOn", PyvtkPolyDataEdgeConnectivityFilter_ScalarConnectivityOn, METH_VARARGS,
   "ScalarConnectivityOn(self) -> None\nC++: virtual void ScalarConnectivityOn()\n\n"},
  {"ScalarConnectivityOff", PyvtkPolyDataEdgeConnectivityFilter_ScalarConnectivityOff, METH_VARARGS,
   "ScalarConnectivityOff(self) -> None\nC++: virtual void ScalarConnectivityOff()\n\n"},
  {"SetScalarRange", PyvtkPolyDataEdgeConnectivityFilter_SetScalarRange, METH_VARARGS,
   "SetScalarRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetScalarRange(double _arg1, double _arg2)\nSetScalarRange(self, _arg:(float, float)) -> None\nC++: void SetScalarRange(const double _arg[2])\n\nSet the scalar range to extract cells based on scalar\nconnectivity.\n"},
  {"GetScalarRange", PyvtkPolyDataEdgeConnectivityFilter_GetScalarRange, METH_VARARGS,
   "GetScalarRange(self) -> (float, float)\nC++: virtual double *GetScalarRange()\n\n"},
  {"GetRegionSizes", PyvtkPolyDataEdgeConnectivityFilter_GetRegionSizes, METH_VARARGS,
   "GetRegionSizes(self) -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetRegionSizes()\n\nObtain the array containing the region sizes of the extracted\nregions.\n"},
  {"InitializeSeedList", PyvtkPolyDataEdgeConnectivityFilter_InitializeSeedList, METH_VARARGS,
   "InitializeSeedList(self) -> None\nC++: void InitializeSeedList()\n\nInitialize list of point ids/cell ids used to seed regions.\n"},
  {"AddSeed", PyvtkPolyDataEdgeConnectivityFilter_AddSeed, METH_VARARGS,
   "AddSeed(self, id:int) -> None\nC++: void AddSeed(int id)\n\nAdd a seed id (point or cell id). Note: ids are 0-offset.\n"},
  {"DeleteSeed", PyvtkPolyDataEdgeConnectivityFilter_DeleteSeed, METH_VARARGS,
   "DeleteSeed(self, id:int) -> None\nC++: void DeleteSeed(int id)\n\nDelete a seed id (point or cell id). Note: ids are 0-offset.\n"},
  {"InitializeSpecifiedRegionList", PyvtkPolyDataEdgeConnectivityFilter_InitializeSpecifiedRegionList, METH_VARARGS,
   "InitializeSpecifiedRegionList(self) -> None\nC++: void InitializeSpecifiedRegionList()\n\nInitialize list of region ids to extract.\n"},
  {"AddSpecifiedRegion", PyvtkPolyDataEdgeConnectivityFilter_AddSpecifiedRegion, METH_VARARGS,
   "AddSpecifiedRegion(self, id:int) -> None\nC++: void AddSpecifiedRegion(int id)\n\nAdd a region id to extract. Note: ids are 0-offset.\n"},
  {"DeleteSpecifiedRegion", PyvtkPolyDataEdgeConnectivityFilter_DeleteSpecifiedRegion, METH_VARARGS,
   "DeleteSpecifiedRegion(self, id:int) -> None\nC++: void DeleteSpecifiedRegion(int id)\n\nDelete a region id to extract. Note: ids are 0-offset.\n"},
  {"GetNumberOfSpecifiedRegions", PyvtkPolyDataEdgeConnectivityFilter_GetNumberOfSpecifiedRegions, METH_VARARGS,
   "GetNumberOfSpecifiedRegions(self) -> int\nC++: int GetNumberOfSpecifiedRegions()\n\nGet number of specified regions.\n"},
  {"SetClosestPoint", PyvtkPolyDataEdgeConnectivityFilter_SetClosestPoint, METH_VARARGS,
   "SetClosestPoint(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetClosestPoint(double _arg1, double _arg2,\n    double _arg3)\nSetClosestPoint(self, _arg:(float, float, float)) -> None\nC++: virtual void SetClosestPoint(const double _arg[3])\n\nUse to specify x-y-z point coordinates when extracting the region\nclosest to a specified point.\n"},
  {"GetClosestPoint", PyvtkPolyDataEdgeConnectivityFilter_GetClosestPoint, METH_VARARGS,
   "GetClosestPoint(self) -> (float, float, float)\nC++: virtual double *GetClosestPoint()\n\n"},
  {"SetRegionGrowing", PyvtkPolyDataEdgeConnectivityFilter_SetRegionGrowing, METH_VARARGS,
   "SetRegionGrowing(self, _arg:int) -> None\nC++: virtual void SetRegionGrowing(int _arg)\n\nSpecify a strategy for region growing. Regions growing is a\npostprocessing step which assimilates small regions into larger\nregions; i.e., region growing is an additional step as part of a\nsegmentation workflow. By default, region growing is off. If\ngrowing large regions is enabled, then smaller regions are\nassimilated into larger regions. If growing small regions is\nenabled, then small regions are combined to form larger regions.\nNote that the definition of a large region is a region that\nexceeds the large region threshold.\n"},
  {"GetRegionGrowingMinValue", PyvtkPolyDataEdgeConnectivityFilter_GetRegionGrowingMinValue, METH_VARARGS,
   "GetRegionGrowingMinValue(self) -> int\nC++: virtual int GetRegionGrowingMinValue()\n\n"},
  {"GetRegionGrowingMaxValue", PyvtkPolyDataEdgeConnectivityFilter_GetRegionGrowingMaxValue, METH_VARARGS,
   "GetRegionGrowingMaxValue(self) -> int\nC++: virtual int GetRegionGrowingMaxValue()\n\n"},
  {"GetRegionGrowing", PyvtkPolyDataEdgeConnectivityFilter_GetRegionGrowing, METH_VARARGS,
   "GetRegionGrowing(self) -> int\nC++: virtual int GetRegionGrowing()\n\n"},
  {"SetRegionGrowingOff", PyvtkPolyDataEdgeConnectivityFilter_SetRegionGrowingOff, METH_VARARGS,
   "SetRegionGrowingOff(self) -> None\nC++: void SetRegionGrowingOff()\n\n"},
  {"GrowLargeRegionsOff", PyvtkPolyDataEdgeConnectivityFilter_GrowLargeRegionsOff, METH_VARARGS,
   "GrowLargeRegionsOff(self) -> None\nC++: void GrowLargeRegionsOff()\n\n"},
  {"GrowSmallRegionsOff", PyvtkPolyDataEdgeConnectivityFilter_GrowSmallRegionsOff, METH_VARARGS,
   "GrowSmallRegionsOff(self) -> None\nC++: void GrowSmallRegionsOff()\n\n"},
  {"SetRegionGrowingToLargeRegions", PyvtkPolyDataEdgeConnectivityFilter_SetRegionGrowingToLargeRegions, METH_VARARGS,
   "SetRegionGrowingToLargeRegions(self) -> None\nC++: void SetRegionGrowingToLargeRegions()\n\n"},
  {"GrowLargeRegionsOn", PyvtkPolyDataEdgeConnectivityFilter_GrowLargeRegionsOn, METH_VARARGS,
   "GrowLargeRegionsOn(self) -> None\nC++: void GrowLargeRegionsOn()\n\n"},
  {"SetRegionGrowingToSmallRegions", PyvtkPolyDataEdgeConnectivityFilter_SetRegionGrowingToSmallRegions, METH_VARARGS,
   "SetRegionGrowingToSmallRegions(self) -> None\nC++: void SetRegionGrowingToSmallRegions()\n\n"},
  {"GrowSmallRegionsOn", PyvtkPolyDataEdgeConnectivityFilter_GrowSmallRegionsOn, METH_VARARGS,
   "GrowSmallRegionsOn(self) -> None\nC++: void GrowSmallRegionsOn()\n\n"},
  {"SetLargeRegionThreshold", PyvtkPolyDataEdgeConnectivityFilter_SetLargeRegionThreshold, METH_VARARGS,
   "SetLargeRegionThreshold(self, _arg:float) -> None\nC++: virtual void SetLargeRegionThreshold(double _arg)\n\nDefine what a large region is by specifying the fraction of total\ninput mesh area a region must be in order to be considered large.\nSo for example, if the LargeRegionThreshold is 0.10, then if the\nsummed surface area of all the cells composing a region is\ngreater than or equal to 10%, the region is considered large. By\ndefault, the LargeRegionThreshold is 0.05.\n"},
  {"GetLargeRegionThresholdMinValue", PyvtkPolyDataEdgeConnectivityFilter_GetLargeRegionThresholdMinValue, METH_VARARGS,
   "GetLargeRegionThresholdMinValue(self) -> float\nC++: virtual double GetLargeRegionThresholdMinValue()\n\n"},
  {"GetLargeRegionThresholdMaxValue", PyvtkPolyDataEdgeConnectivityFilter_GetLargeRegionThresholdMaxValue, METH_VARARGS,
   "GetLargeRegionThresholdMaxValue(self) -> float\nC++: virtual double GetLargeRegionThresholdMaxValue()\n\n"},
  {"GetLargeRegionThreshold", PyvtkPolyDataEdgeConnectivityFilter_GetLargeRegionThreshold, METH_VARARGS,
   "GetLargeRegionThreshold(self) -> float\nC++: virtual double GetLargeRegionThreshold()\n\n"},
  {"GetNumberOfExtractedRegions", PyvtkPolyDataEdgeConnectivityFilter_GetNumberOfExtractedRegions, METH_VARARGS,
   "GetNumberOfExtractedRegions(self) -> int\nC++: int GetNumberOfExtractedRegions()\n\nObtain the number of connected regions found. This returns valid\ninformation only after the filter has successfully executed.\n"},
  {"GetTotalArea", PyvtkPolyDataEdgeConnectivityFilter_GetTotalArea, METH_VARARGS,
   "GetTotalArea(self) -> float\nC++: double GetTotalArea()\n\nObtain the total area of all regions combined.\n"},
  {"SetColorRegions", PyvtkPolyDataEdgeConnectivityFilter_SetColorRegions, METH_VARARGS,
   "SetColorRegions(self, _arg:int) -> None\nC++: virtual void SetColorRegions(vtkTypeBool _arg)\n\nTurn on/off the coloring of edge-connected regions. If enabled,\nthen a array named \"RegionId\" is added to the output cell data.\nThe array contains, for each cell, the id with which the cell is\nassociated.\n"},
  {"GetColorRegions", PyvtkPolyDataEdgeConnectivityFilter_GetColorRegions, METH_VARARGS,
   "GetColorRegions(self) -> int\nC++: virtual vtkTypeBool GetColorRegions()\n\n"},
  {"ColorRegionsOn", PyvtkPolyDataEdgeConnectivityFilter_ColorRegionsOn, METH_VARARGS,
   "ColorRegionsOn(self) -> None\nC++: virtual void ColorRegionsOn()\n\n"},
  {"ColorRegionsOff", PyvtkPolyDataEdgeConnectivityFilter_ColorRegionsOff, METH_VARARGS,
   "ColorRegionsOff(self) -> None\nC++: virtual void ColorRegionsOff()\n\n"},
  {"SetCellRegionAreas", PyvtkPolyDataEdgeConnectivityFilter_SetCellRegionAreas, METH_VARARGS,
   "SetCellRegionAreas(self, _arg:int) -> None\nC++: virtual void SetCellRegionAreas(vtkTypeBool _arg)\n\nTurn on/off the creation of a cell array that, for each cell,\ncontains the area of the region to which the cell is associated.\nIf enabled, then an array named \"CellRegionArea\" is added to the\noutput cell data.\n"},
  {"GetCellRegionAreas", PyvtkPolyDataEdgeConnectivityFilter_GetCellRegionAreas, METH_VARARGS,
   "GetCellRegionAreas(self) -> int\nC++: virtual vtkTypeBool GetCellRegionAreas()\n\n"},
  {"CellRegionAreasOn", PyvtkPolyDataEdgeConnectivityFilter_CellRegionAreasOn, METH_VARARGS,
   "CellRegionAreasOn(self) -> None\nC++: virtual void CellRegionAreasOn()\n\n"},
  {"CellRegionAreasOff", PyvtkPolyDataEdgeConnectivityFilter_CellRegionAreasOff, METH_VARARGS,
   "CellRegionAreasOff(self) -> None\nC++: virtual void CellRegionAreasOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkPolyDataEdgeConnectivityFilter_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkPolyDataEdgeConnectivityFilter_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPolyDataEdgeConnectivityFilter_Doc =
  "vtkPolyDataEdgeConnectivityFilter - segment polygonal mesh based on\nshared edge connectivity\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPolyDataEdgeConnectivityFilter is a filter to segment cells that\n"
  "share common edges (i.e., are edge connected), given certain\n"
  "conditions on edge connectivity. These conditions are 1) the shared\n"
  "edge is not a barrier edge, and 2) the edge neighbor satisfies\n"
  "conditions on scalar values.  Specification of both #1 and #2 are\n"
  "optional; in which case all polygons in a region that share edges are\n"
  "connected. Barrier edges are either defined by providing an optional\n"
  "second polydata input (which contains a list of lines defining the\n"
  "barrier edges), or a condition on edge length. The conditions on edge\n"
  "length specify whether edges within a range of edge lengths are\n"
  "considered barrier edges.  All connected polygonal cells satisfying\n"
  "these conditions form a region. Typically the filter segments\n"
  "multiple regions; however the user can specify which region(s) are to\n"
  "be extracted and output.\n\n"
  "The filter works in one of seven ways: 1) extract the largest (in\n"
  "terms of total surface area) edge-connected region in the dataset; 2)\n"
  "extract specified regions; 3) extract all regions containing\n"
  "user-specified point ids; 4) extract all regions containing\n"
  "user-specified cell ids; 5) extract the region closest to a\n"
  "user-specified point; 6) extract all edge-connected regions (used to\n"
  "color regions, i.e., create segmentation labeling); or 7) extract\n"
  "\"large\" regions, that is all regions considered large in terms of\n"
  "their surface area relative to the total input polydata surface area.\n\n"
  "Barrier edges add a unique twist to the filter. By using them, it is\n"
  "possible to segment out portions of a mesh with very small, very\n"
  "large, or in between polygon-sized features.\n\n"
  "Due to the nature of edge connectivity, the filter only operates on\n"
  "polygons. Vertices, lines, and triangle strips are ignored (and not\n"
  "passed through to the output). Point and cell attribute data are\n"
  "copied to the output; however, an additional, optional array named\n"
  "\"RegionId\" may be added to the output cell attribute data by enabling\n"
  "ColorRegions.\n\n"
  "@warning\n"
  "If more than one output region is produced, regions are sorted based\n"
  "on their surface area. Thus region# 0 is the largest, followed by the\n"
  "next largest and so on.\n\n"
  "@warning\n"
  "To be clear: if scalar connectivity is enabled, this filter segments\n"
  "data based on *cell* attribute data based on edge-connected meshes.\n"
  "The similar vtkPolyDataConnectivityFilter segments based on point\n"
  "attribute data and point-connected meshes.\n\n"
  "@warning\n"
  "A second, optional vtkPolyData (the Source) may be specified which\n"
  "contains edges (i.e., vtkPolyData::Lines) that specify barries to\n"
  "edge connectivity. That is, two polygons who share an edge are not\n"
  "connected if the shared edge exists in the Source vtkPolyData. This\n"
  "feature can be used with other filters such as vtkDelaunay2D (and its\n"
  "constraint edges) to create segmented regions.\n\n"
  "@warning\n"
  "Note that mesh regions attached at just a point are not considered\n"
  "connected. Thus such point-connected meshes will be segmented into\n"
  "different regions. This differs from vtkPolyDataConnectivityFilter\n"
  "which segments produces point-connected regions.\n\n"
  "@sa\n"
  "vtkPolyDataConnectivityFilter vtkConnectivityFilter vtkDelaunay2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolyDataEdgeConnectivityFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkPolyDataEdgeConnectivityFilter", // tp_name
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
  PyvtkPolyDataEdgeConnectivityFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyDataEdgeConnectivityFilter_StaticNew()
{
  return vtkPolyDataEdgeConnectivityFilter::New();
}

PyObject *PyvtkPolyDataEdgeConnectivityFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolyDataEdgeConnectivityFilter_Type, PyvtkPolyDataEdgeConnectivityFilter_Methods,
    "vtkPolyDataEdgeConnectivityFilter",
 &PyvtkPolyDataEdgeConnectivityFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPolyDataEdgeConnectivityFilter_RegionGrowingType_Type);
  PyVTKEnum_Add(&PyvtkPolyDataEdgeConnectivityFilter_RegionGrowingType_Type, "vtkPolyDataEdgeConnectivityFilter.RegionGrowingType");

  o = (PyObject *)&PyvtkPolyDataEdgeConnectivityFilter_RegionGrowingType_Type;
  if (PyDict_SetItemString(d, "RegionGrowingType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkPolyDataEdgeConnectivityFilter::RegionGrowingType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "RegionGrowingOff", vtkPolyDataEdgeConnectivityFilter::RegionGrowingOff },
        { "LargeRegions", vtkPolyDataEdgeConnectivityFilter::LargeRegions },
        { "SmallRegions", vtkPolyDataEdgeConnectivityFilter::SmallRegions },
      };

    o = PyvtkPolyDataEdgeConnectivityFilter_RegionGrowingType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyDataEdgeConnectivityFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataEdgeConnectivityFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataEdgeConnectivityFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "VTK_EXTRACT_POINT_SEEDED_REGIONS", 1 },
        { "VTK_EXTRACT_CELL_SEEDED_REGIONS", 2 },
        { "VTK_EXTRACT_SPECIFIED_REGIONS", 3 },
        { "VTK_EXTRACT_LARGEST_REGION", 4 },
        { "VTK_EXTRACT_ALL_REGIONS", 5 },
        { "VTK_EXTRACT_CLOSEST_POINT_REGION", 6 },
        { "VTK_EXTRACT_LARGE_REGIONS", 7 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

