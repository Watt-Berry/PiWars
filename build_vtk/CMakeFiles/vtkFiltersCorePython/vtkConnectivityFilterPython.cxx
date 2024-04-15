// python wrapper for vtkConnectivityFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkConnectivityFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkConnectivityFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkConnectivityFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkConnectivityFilter_RegionIdAssignment_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkConnectivityFilter.RegionIdAssignment", // tp_name
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
PyObject *PyvtkConnectivityFilter_RegionIdAssignment_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkConnectivityFilter_RegionIdAssignment_Type, static_cast<int>(val));
}


static PyObject *
PyvtkConnectivityFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkConnectivityFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConnectivityFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkConnectivityFilter *tempr = vtkConnectivityFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkConnectivityFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConnectivityFilter::NewInstance());

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
PyvtkConnectivityFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkConnectivityFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkConnectivityFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

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
      op->vtkConnectivityFilter::SetScalarConnectivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetScalarConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarConnectivity() :
      op->vtkConnectivityFilter::GetScalarConnectivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_ScalarConnectivityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarConnectivityOn();
    }
    else
    {
      op->vtkConnectivityFilter::ScalarConnectivityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_ScalarConnectivityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarConnectivityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarConnectivityOff();
    }
    else
    {
      op->vtkConnectivityFilter::ScalarConnectivityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

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
      op->vtkConnectivityFilter::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConnectivityFilter_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

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
      op->vtkConnectivityFilter::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConnectivityFilter_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkConnectivityFilter_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkConnectivityFilter_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}


static PyObject *
PyvtkConnectivityFilter_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkConnectivityFilter::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

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
      op->vtkConnectivityFilter::SetExtractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetExtractionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionModeMinValue() :
      op->vtkConnectivityFilter::GetExtractionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetExtractionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionModeMaxValue() :
      op->vtkConnectivityFilter::GetExtractionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionMode() :
      op->vtkConnectivityFilter::GetExtractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToPointSeededRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToPointSeededRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToPointSeededRegions();
    }
    else
    {
      op->vtkConnectivityFilter::SetExtractionModeToPointSeededRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToCellSeededRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToCellSeededRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToCellSeededRegions();
    }
    else
    {
      op->vtkConnectivityFilter::SetExtractionModeToCellSeededRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToLargestRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToLargestRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToLargestRegion();
    }
    else
    {
      op->vtkConnectivityFilter::SetExtractionModeToLargestRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToSpecifiedRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToSpecifiedRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToSpecifiedRegions();
    }
    else
    {
      op->vtkConnectivityFilter::SetExtractionModeToSpecifiedRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToClosestPointRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToClosestPointRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToClosestPointRegion();
    }
    else
    {
      op->vtkConnectivityFilter::SetExtractionModeToClosestPointRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetExtractionModeToAllRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToAllRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToAllRegions();
    }
    else
    {
      op->vtkConnectivityFilter::SetExtractionModeToAllRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetExtractionModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetExtractionModeAsString() :
      op->vtkConnectivityFilter::GetExtractionModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_InitializeSeedList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSeedList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeSeedList();
    }
    else
    {
      op->vtkConnectivityFilter::InitializeSeedList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_AddSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  long long temp0;
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
      op->vtkConnectivityFilter::AddSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_DeleteSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  long long temp0;
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
      op->vtkConnectivityFilter::DeleteSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_InitializeSpecifiedRegionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSpecifiedRegionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeSpecifiedRegionList();
    }
    else
    {
      op->vtkConnectivityFilter::InitializeSpecifiedRegionList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_AddSpecifiedRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSpecifiedRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

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
      op->vtkConnectivityFilter::AddSpecifiedRegion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_DeleteSpecifiedRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSpecifiedRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

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
      op->vtkConnectivityFilter::DeleteSpecifiedRegion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

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
      op->vtkConnectivityFilter::SetClosestPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConnectivityFilter_SetClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

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
      op->vtkConnectivityFilter::SetClosestPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConnectivityFilter_SetClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkConnectivityFilter_SetClosestPoint_s1(self, args);
    case 1:
      return PyvtkConnectivityFilter_SetClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetClosestPoint");
  return nullptr;
}


static PyObject *
PyvtkConnectivityFilter_GetClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetClosestPoint() :
      op->vtkConnectivityFilter::GetClosestPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetNumberOfExtractedRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfExtractedRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfExtractedRegions() :
      op->vtkConnectivityFilter::GetNumberOfExtractedRegions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetColorRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

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
      op->vtkConnectivityFilter::SetColorRegions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetColorRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorRegions() :
      op->vtkConnectivityFilter::GetColorRegions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_ColorRegionsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorRegionsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorRegionsOn();
    }
    else
    {
      op->vtkConnectivityFilter::ColorRegionsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_ColorRegionsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorRegionsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorRegionsOff();
    }
    else
    {
      op->vtkConnectivityFilter::ColorRegionsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetRegionIdAssignmentMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRegionIdAssignmentMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRegionIdAssignmentMode(temp0);
    }
    else
    {
      op->vtkConnectivityFilter::SetRegionIdAssignmentMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetRegionIdAssignmentMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionIdAssignmentMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRegionIdAssignmentMode() :
      op->vtkConnectivityFilter::GetRegionIdAssignmentMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

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
      op->vtkConnectivityFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConnectivityFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConnectivityFilter *op = static_cast<vtkConnectivityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkConnectivityFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkConnectivityFilter_Methods[] = {
  {"IsTypeOf", PyvtkConnectivityFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkConnectivityFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkConnectivityFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkConnectivityFilter\nC++: static vtkConnectivityFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkConnectivityFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkConnectivityFilter\nC++: vtkConnectivityFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkConnectivityFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkConnectivityFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetScalarConnectivity", PyvtkConnectivityFilter_SetScalarConnectivity, METH_VARARGS,
   "SetScalarConnectivity(self, _arg:int) -> None\nC++: virtual void SetScalarConnectivity(vtkTypeBool _arg)\n\nTurn on/off connectivity based on scalar value. If on, cells are\nconnected only if they share points AND one of the cells scalar\nvalues falls in the scalar range specified.\n"},
  {"GetScalarConnectivity", PyvtkConnectivityFilter_GetScalarConnectivity, METH_VARARGS,
   "GetScalarConnectivity(self) -> int\nC++: virtual vtkTypeBool GetScalarConnectivity()\n\n"},
  {"ScalarConnectivityOn", PyvtkConnectivityFilter_ScalarConnectivityOn, METH_VARARGS,
   "ScalarConnectivityOn(self) -> None\nC++: virtual void ScalarConnectivityOn()\n\n"},
  {"ScalarConnectivityOff", PyvtkConnectivityFilter_ScalarConnectivityOff, METH_VARARGS,
   "ScalarConnectivityOff(self) -> None\nC++: virtual void ScalarConnectivityOff()\n\n"},
  {"SetScalarRange", PyvtkConnectivityFilter_SetScalarRange, METH_VARARGS,
   "SetScalarRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetScalarRange(double _arg1, double _arg2)\nSetScalarRange(self, _arg:(float, float)) -> None\nC++: void SetScalarRange(const double _arg[2])\n\nSet the scalar range to use to extract cells based on scalar\nconnectivity.\n"},
  {"GetScalarRange", PyvtkConnectivityFilter_GetScalarRange, METH_VARARGS,
   "GetScalarRange(self) -> (float, float)\nC++: virtual double *GetScalarRange()\n\n"},
  {"SetExtractionMode", PyvtkConnectivityFilter_SetExtractionMode, METH_VARARGS,
   "SetExtractionMode(self, _arg:int) -> None\nC++: virtual void SetExtractionMode(int _arg)\n\nControl the extraction of connected surfaces.\n"},
  {"GetExtractionModeMinValue", PyvtkConnectivityFilter_GetExtractionModeMinValue, METH_VARARGS,
   "GetExtractionModeMinValue(self) -> int\nC++: virtual int GetExtractionModeMinValue()\n\n"},
  {"GetExtractionModeMaxValue", PyvtkConnectivityFilter_GetExtractionModeMaxValue, METH_VARARGS,
   "GetExtractionModeMaxValue(self) -> int\nC++: virtual int GetExtractionModeMaxValue()\n\n"},
  {"GetExtractionMode", PyvtkConnectivityFilter_GetExtractionMode, METH_VARARGS,
   "GetExtractionMode(self) -> int\nC++: virtual int GetExtractionMode()\n\n"},
  {"SetExtractionModeToPointSeededRegions", PyvtkConnectivityFilter_SetExtractionModeToPointSeededRegions, METH_VARARGS,
   "SetExtractionModeToPointSeededRegions(self) -> None\nC++: void SetExtractionModeToPointSeededRegions()\n\n"},
  {"SetExtractionModeToCellSeededRegions", PyvtkConnectivityFilter_SetExtractionModeToCellSeededRegions, METH_VARARGS,
   "SetExtractionModeToCellSeededRegions(self) -> None\nC++: void SetExtractionModeToCellSeededRegions()\n\n"},
  {"SetExtractionModeToLargestRegion", PyvtkConnectivityFilter_SetExtractionModeToLargestRegion, METH_VARARGS,
   "SetExtractionModeToLargestRegion(self) -> None\nC++: void SetExtractionModeToLargestRegion()\n\n"},
  {"SetExtractionModeToSpecifiedRegions", PyvtkConnectivityFilter_SetExtractionModeToSpecifiedRegions, METH_VARARGS,
   "SetExtractionModeToSpecifiedRegions(self) -> None\nC++: void SetExtractionModeToSpecifiedRegions()\n\n"},
  {"SetExtractionModeToClosestPointRegion", PyvtkConnectivityFilter_SetExtractionModeToClosestPointRegion, METH_VARARGS,
   "SetExtractionModeToClosestPointRegion(self) -> None\nC++: void SetExtractionModeToClosestPointRegion()\n\n"},
  {"SetExtractionModeToAllRegions", PyvtkConnectivityFilter_SetExtractionModeToAllRegions, METH_VARARGS,
   "SetExtractionModeToAllRegions(self) -> None\nC++: void SetExtractionModeToAllRegions()\n\n"},
  {"GetExtractionModeAsString", PyvtkConnectivityFilter_GetExtractionModeAsString, METH_VARARGS,
   "GetExtractionModeAsString(self) -> str\nC++: const char *GetExtractionModeAsString()\n\n"},
  {"InitializeSeedList", PyvtkConnectivityFilter_InitializeSeedList, METH_VARARGS,
   "InitializeSeedList(self) -> None\nC++: void InitializeSeedList()\n\nInitialize list of point ids/cell ids used to seed regions.\n"},
  {"AddSeed", PyvtkConnectivityFilter_AddSeed, METH_VARARGS,
   "AddSeed(self, id:int) -> None\nC++: void AddSeed(vtkIdType id)\n\nAdd a seed id (point or cell id). Note: ids are 0-offset.\n"},
  {"DeleteSeed", PyvtkConnectivityFilter_DeleteSeed, METH_VARARGS,
   "DeleteSeed(self, id:int) -> None\nC++: void DeleteSeed(vtkIdType id)\n\nDelete a seed id (point or cell id). Note: ids are 0-offset.\n"},
  {"InitializeSpecifiedRegionList", PyvtkConnectivityFilter_InitializeSpecifiedRegionList, METH_VARARGS,
   "InitializeSpecifiedRegionList(self) -> None\nC++: void InitializeSpecifiedRegionList()\n\nInitialize list of region ids to extract.\n"},
  {"AddSpecifiedRegion", PyvtkConnectivityFilter_AddSpecifiedRegion, METH_VARARGS,
   "AddSpecifiedRegion(self, id:int) -> None\nC++: void AddSpecifiedRegion(int id)\n\nAdd a region id to extract. Note: ids are 0-offset.\n"},
  {"DeleteSpecifiedRegion", PyvtkConnectivityFilter_DeleteSpecifiedRegion, METH_VARARGS,
   "DeleteSpecifiedRegion(self, id:int) -> None\nC++: void DeleteSpecifiedRegion(int id)\n\nDelete a region id to extract. Note: ids are 0-offset.\n"},
  {"SetClosestPoint", PyvtkConnectivityFilter_SetClosestPoint, METH_VARARGS,
   "SetClosestPoint(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetClosestPoint(double _arg1, double _arg2,\n    double _arg3)\nSetClosestPoint(self, _arg:(float, float, float)) -> None\nC++: virtual void SetClosestPoint(const double _arg[3])\n\nUse to specify x-y-z point coordinates when extracting the region\nclosest to a specified point.\n"},
  {"GetClosestPoint", PyvtkConnectivityFilter_GetClosestPoint, METH_VARARGS,
   "GetClosestPoint(self) -> (float, float, float)\nC++: virtual double *GetClosestPoint()\n\n"},
  {"GetNumberOfExtractedRegions", PyvtkConnectivityFilter_GetNumberOfExtractedRegions, METH_VARARGS,
   "GetNumberOfExtractedRegions(self) -> int\nC++: int GetNumberOfExtractedRegions()\n\nObtain the number of connected regions.\n"},
  {"SetColorRegions", PyvtkConnectivityFilter_SetColorRegions, METH_VARARGS,
   "SetColorRegions(self, _arg:int) -> None\nC++: virtual void SetColorRegions(vtkTypeBool _arg)\n\nTurn on/off the coloring of connected regions.\n"},
  {"GetColorRegions", PyvtkConnectivityFilter_GetColorRegions, METH_VARARGS,
   "GetColorRegions(self) -> int\nC++: virtual vtkTypeBool GetColorRegions()\n\n"},
  {"ColorRegionsOn", PyvtkConnectivityFilter_ColorRegionsOn, METH_VARARGS,
   "ColorRegionsOn(self) -> None\nC++: virtual void ColorRegionsOn()\n\n"},
  {"ColorRegionsOff", PyvtkConnectivityFilter_ColorRegionsOff, METH_VARARGS,
   "ColorRegionsOff(self) -> None\nC++: virtual void ColorRegionsOff()\n\n"},
  {"SetRegionIdAssignmentMode", PyvtkConnectivityFilter_SetRegionIdAssignmentMode, METH_VARARGS,
   "SetRegionIdAssignmentMode(self, _arg:int) -> None\nC++: virtual void SetRegionIdAssignmentMode(int _arg)\n\n"},
  {"GetRegionIdAssignmentMode", PyvtkConnectivityFilter_GetRegionIdAssignmentMode, METH_VARARGS,
   "GetRegionIdAssignmentMode(self) -> int\nC++: virtual int GetRegionIdAssignmentMode()\n\n"},
  {"SetOutputPointsPrecision", PyvtkConnectivityFilter_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkConnectivityFilter_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkConnectivityFilter_Doc =
  "vtkConnectivityFilter - extract data based on geometric connectivity\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "vtkConnectivityFilter is a filter that extracts cells that share\n"
  "common points and/or meet other connectivity criterion. (Cells that\n"
  "share vertices and meet other connectivity criterion such as scalar\n"
  "range are known as a region.)  The filter works in one of six ways:\n"
  "1) extract the largest connected region in the dataset; 2) extract\n"
  "specified region numbers; 3) extract all regions sharing specified\n"
  "point ids; 4) extract all regions sharing specified cell ids; 5)\n"
  "extract the region closest to the specified point; or 6) extract all\n"
  "regions (used to color the data by region).\n\n"
  "vtkConnectivityFilter is generalized to handle any type of input\n"
  "dataset. If the input to this filter is a vtkPolyData, the output\n"
  "will be a vtkPolyData. For all other input types, it generates output\n"
  "data of type vtkUnstructuredGrid. Note that the only Get*Output()\n"
  "methods that will return a non-null pointer are\n"
  "GetUnstructuredGridOutput() and GetPolyDataOutput() when the output\n"
  "of the filter is a vtkUnstructuredGrid or vtkPolyData, respectively.\n\n"
  "The behavior of vtkConnectivityFilter can be modified by turning on\n"
  "the boolean ivar ScalarConnectivity. If this flag is on, the\n"
  "connectivity algorithm is modified so that cells are considered\n"
  "connected only if 1) they are geometrically connected (share a point)\n"
  "and 2) the scalar values of one of the cell's points falls in the\n"
  "scalar range specified. This use of ScalarConnectivity is\n"
  "particularly useful for volume datasets: it can be used as a simple \"connected\n"
  "segmentation\" algorithm. For example, by using a seed voxel (i.e.,\n"
  "cell) on a known anatomical structure, connectivity will pull out all\n"
  "voxels \"containing\" the anatomical structure. These voxels can then\n"
  "be contoured or processed by other visualization filters.\n\n"
  "If the extraction mode is set to all regions and ColorRegions is\n"
  "enabled, The RegionIds are assigned to each region by the order in\n"
  "which the region was processed and has no other significance with\n"
  "respect to the size of or number of cells.\n\n"
  "@sa\n"
  "vtkPolyDataConnectivityFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkConnectivityFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkConnectivityFilter", // tp_name
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
  PyvtkConnectivityFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkConnectivityFilter_StaticNew()
{
  return vtkConnectivityFilter::New();
}

PyObject *PyvtkConnectivityFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkConnectivityFilter_Type, PyvtkConnectivityFilter_Methods,
    "vtkConnectivityFilter",
 &PyvtkConnectivityFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPointSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkConnectivityFilter_RegionIdAssignment_Type);
  PyVTKEnum_Add(&PyvtkConnectivityFilter_RegionIdAssignment_Type, "vtkConnectivityFilter.RegionIdAssignment");

  o = (PyObject *)&PyvtkConnectivityFilter_RegionIdAssignment_Type;
  if (PyDict_SetItemString(d, "RegionIdAssignment", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkConnectivityFilter::RegionIdAssignment cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "UNSPECIFIED", vtkConnectivityFilter::UNSPECIFIED },
        { "CELL_COUNT_DESCENDING", vtkConnectivityFilter::CELL_COUNT_DESCENDING },
        { "CELL_COUNT_ASCENDING", vtkConnectivityFilter::CELL_COUNT_ASCENDING },
      };

    o = PyvtkConnectivityFilter_RegionIdAssignment_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkConnectivityFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkConnectivityFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkConnectivityFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_EXTRACT_POINT_SEEDED_REGIONS", 1 },
        { "VTK_EXTRACT_CELL_SEEDED_REGIONS", 2 },
        { "VTK_EXTRACT_SPECIFIED_REGIONS", 3 },
        { "VTK_EXTRACT_LARGEST_REGION", 4 },
        { "VTK_EXTRACT_ALL_REGIONS", 5 },
        { "VTK_EXTRACT_CLOSEST_POINT_REGION", 6 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

