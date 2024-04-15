// python wrapper for vtkDistributedDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDistributedDataFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDistributedDataFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkDistributedDataFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDistributedDataFilter_BoundaryModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallel.vtkDistributedDataFilter.BoundaryModes", // tp_name
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
PyObject *PyvtkDistributedDataFilter_BoundaryModes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDistributedDataFilter_BoundaryModes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkDistributedDataFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDistributedDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDistributedDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDistributedDataFilter *tempr = vtkDistributedDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDistributedDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDistributedDataFilter::NewInstance());

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
PyvtkDistributedDataFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDistributedDataFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDistributedDataFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkDistributedDataFilter::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkDistributedDataFilter::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetKdtree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKdtree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPKdTree *tempr = (ap.IsBound() ?
      op->GetKdtree() :
      op->vtkDistributedDataFilter::GetKdtree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_RetainKdtreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RetainKdtreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RetainKdtreeOn();
    }
    else
    {
      op->vtkDistributedDataFilter::RetainKdtreeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_RetainKdtreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RetainKdtreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RetainKdtreeOff();
    }
    else
    {
      op->vtkDistributedDataFilter::RetainKdtreeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetRetainKdtree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRetainKdtree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRetainKdtree() :
      op->vtkDistributedDataFilter::GetRetainKdtree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetRetainKdtree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRetainKdtree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRetainKdtree(temp0);
    }
    else
    {
      op->vtkDistributedDataFilter::SetRetainKdtree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_IncludeAllIntersectingCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeAllIntersectingCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeAllIntersectingCellsOn();
    }
    else
    {
      op->vtkDistributedDataFilter::IncludeAllIntersectingCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_IncludeAllIntersectingCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeAllIntersectingCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeAllIntersectingCellsOff();
    }
    else
    {
      op->vtkDistributedDataFilter::IncludeAllIntersectingCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetIncludeAllIntersectingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeAllIntersectingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIncludeAllIntersectingCells() :
      op->vtkDistributedDataFilter::GetIncludeAllIntersectingCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetIncludeAllIntersectingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeAllIntersectingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncludeAllIntersectingCells(temp0);
    }
    else
    {
      op->vtkDistributedDataFilter::SetIncludeAllIntersectingCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_ClipCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClipCellsOn();
    }
    else
    {
      op->vtkDistributedDataFilter::ClipCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_ClipCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClipCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClipCellsOff();
    }
    else
    {
      op->vtkDistributedDataFilter::ClipCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetClipCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClipCells() :
      op->vtkDistributedDataFilter::GetClipCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetClipCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClipCells(temp0);
    }
    else
    {
      op->vtkDistributedDataFilter::SetClipCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetBoundaryMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundaryMode(temp0);
    }
    else
    {
      op->vtkDistributedDataFilter::SetBoundaryMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetBoundaryModeToAssignToOneRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryModeToAssignToOneRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBoundaryModeToAssignToOneRegion();
    }
    else
    {
      op->vtkDistributedDataFilter::SetBoundaryModeToAssignToOneRegion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetBoundaryModeToAssignToAllIntersectingRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryModeToAssignToAllIntersectingRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBoundaryModeToAssignToAllIntersectingRegions();
    }
    else
    {
      op->vtkDistributedDataFilter::SetBoundaryModeToAssignToAllIntersectingRegions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetBoundaryModeToSplitBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryModeToSplitBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBoundaryModeToSplitBoundaryCells();
    }
    else
    {
      op->vtkDistributedDataFilter::SetBoundaryModeToSplitBoundaryCells();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetBoundaryMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundaryMode() :
      op->vtkDistributedDataFilter::GetBoundaryMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_UseMinimalMemoryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMinimalMemoryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseMinimalMemoryOn();
    }
    else
    {
      op->vtkDistributedDataFilter::UseMinimalMemoryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_UseMinimalMemoryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMinimalMemoryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseMinimalMemoryOff();
    }
    else
    {
      op->vtkDistributedDataFilter::UseMinimalMemoryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetUseMinimalMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMinimalMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseMinimalMemory() :
      op->vtkDistributedDataFilter::GetUseMinimalMemory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetUseMinimalMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMinimalMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseMinimalMemory(temp0);
    }
    else
    {
      op->vtkDistributedDataFilter::SetUseMinimalMemory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetMinimumGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinimumGhostLevel() :
      op->vtkDistributedDataFilter::GetMinimumGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetMinimumGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumGhostLevel(temp0);
    }
    else
    {
      op->vtkDistributedDataFilter::SetMinimumGhostLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_TimingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TimingOn();
    }
    else
    {
      op->vtkDistributedDataFilter::TimingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_TimingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TimingOff();
    }
    else
    {
      op->vtkDistributedDataFilter::TimingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetTiming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTiming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTiming(temp0);
    }
    else
    {
      op->vtkDistributedDataFilter::SetTiming(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetTiming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTiming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTiming() :
      op->vtkDistributedDataFilter::GetTiming());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_GetCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBSPCuts *tempr = (ap.IsBound() ?
      op->GetCuts() :
      op->vtkDistributedDataFilter::GetCuts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  vtkBSPCuts *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBSPCuts"))
  {
    if (ap.IsBound())
    {
      op->SetCuts(temp0);
    }
    else
    {
      op->vtkDistributedDataFilter::SetCuts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedDataFilter_SetUserRegionAssignments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserRegionAssignments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedDataFilter *op = static_cast<vtkDistributedDataFilter *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetUserRegionAssignments(temp0, temp1);
    }
    else
    {
      op->vtkDistributedDataFilter::SetUserRegionAssignments(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDistributedDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkDistributedDataFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDistributedDataFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDistributedDataFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDistributedDataFilter\nC++: static vtkDistributedDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDistributedDataFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDistributedDataFilter\nC++: vtkDistributedDataFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDistributedDataFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDistributedDataFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetController", PyvtkDistributedDataFilter_SetController, METH_VARARGS,
   "SetController(self, c:vtkMultiProcessController) -> None\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/Get the communicator object\n"},
  {"GetController", PyvtkDistributedDataFilter_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"GetKdtree", PyvtkDistributedDataFilter_GetKdtree, METH_VARARGS,
   "GetKdtree(self) -> vtkPKdTree\nC++: vtkPKdTree *GetKdtree()\n\nGet a pointer to the parallel k-d tree object.  Required for\nchanging default behavior for region assignment, changing default\ndepth of tree, or other tree building default parameters.  See\nvtkPKdTree and vtkKdTree for more information about these\noptions. NOTE: Changing the tree returned by this method does NOT\nchange the d3 filter. Make sure to call Modified() on the d3\nobject if you want it to re-execute.\n"},
  {"RetainKdtreeOn", PyvtkDistributedDataFilter_RetainKdtreeOn, METH_VARARGS,
   "RetainKdtreeOn(self) -> None\nC++: virtual void RetainKdtreeOn()\n\nWhen this filter executes, it creates a vtkPKdTree (K-d tree)\ndata structure in parallel which divides the total distributed\ndata set into spatial regions.  The K-d tree object also creates\ntables describing which processes have data for which regions. \nOnly then does this filter redistribute the data according to the\nregion assignment scheme.  By default, the K-d tree structure and\nit's associated tables are deleted after the filter executes.  If\nyou anticipate changing only the region assignment scheme (input\nis unchanged) and explicitly re-executing, then RetainKdTreeOn,\nand the K-d tree structure and tables will be saved.  Then, when\nyou re-execute, this filter will skip the k-d tree build phase\nand go straight to redistributing the data according to region\nassignment.  See vtkPKdTree for more information about region\nassignment.\n"},
  {"RetainKdtreeOff", PyvtkDistributedDataFilter_RetainKdtreeOff, METH_VARARGS,
   "RetainKdtreeOff(self) -> None\nC++: virtual void RetainKdtreeOff()\n\n"},
  {"GetRetainKdtree", PyvtkDistributedDataFilter_GetRetainKdtree, METH_VARARGS,
   "GetRetainKdtree(self) -> int\nC++: virtual int GetRetainKdtree()\n\n"},
  {"SetRetainKdtree", PyvtkDistributedDataFilter_SetRetainKdtree, METH_VARARGS,
   "SetRetainKdtree(self, _arg:int) -> None\nC++: virtual void SetRetainKdtree(int _arg)\n\n"},
  {"IncludeAllIntersectingCellsOn", PyvtkDistributedDataFilter_IncludeAllIntersectingCellsOn, METH_VARARGS,
   "IncludeAllIntersectingCellsOn(self) -> None\nC++: virtual void IncludeAllIntersectingCellsOn()\n\nEach cell in the data set is associated with one of the spatial\nregions of the k-d tree decomposition.  In particular, the cell\nbelongs to the region that it's centroid lies in. When the new\nvtkUnstructuredGrid is created, by default it is composed of the\ncells associated with the region(s) assigned to this process.  If\nyou also want it to contain cells that intersect these regions,\nbut have their centroid elsewhere, then set this variable on.  By\ndefault it is off.\n"},
  {"IncludeAllIntersectingCellsOff", PyvtkDistributedDataFilter_IncludeAllIntersectingCellsOff, METH_VARARGS,
   "IncludeAllIntersectingCellsOff(self) -> None\nC++: virtual void IncludeAllIntersectingCellsOff()\n\n"},
  {"GetIncludeAllIntersectingCells", PyvtkDistributedDataFilter_GetIncludeAllIntersectingCells, METH_VARARGS,
   "GetIncludeAllIntersectingCells(self) -> int\nC++: virtual int GetIncludeAllIntersectingCells()\n\n"},
  {"SetIncludeAllIntersectingCells", PyvtkDistributedDataFilter_SetIncludeAllIntersectingCells, METH_VARARGS,
   "SetIncludeAllIntersectingCells(self, _arg:int) -> None\nC++: virtual void SetIncludeAllIntersectingCells(int _arg)\n\n"},
  {"ClipCellsOn", PyvtkDistributedDataFilter_ClipCellsOn, METH_VARARGS,
   "ClipCellsOn(self) -> None\nC++: virtual void ClipCellsOn()\n\nSet this variable if you want the cells of the output\nvtkUnstructuredGrid to be clipped to the spatial region\nboundaries.  By default this is off.\n"},
  {"ClipCellsOff", PyvtkDistributedDataFilter_ClipCellsOff, METH_VARARGS,
   "ClipCellsOff(self) -> None\nC++: virtual void ClipCellsOff()\n\n"},
  {"GetClipCells", PyvtkDistributedDataFilter_GetClipCells, METH_VARARGS,
   "GetClipCells(self) -> int\nC++: virtual int GetClipCells()\n\n"},
  {"SetClipCells", PyvtkDistributedDataFilter_SetClipCells, METH_VARARGS,
   "SetClipCells(self, _arg:int) -> None\nC++: virtual void SetClipCells(int _arg)\n\n"},
  {"SetBoundaryMode", PyvtkDistributedDataFilter_SetBoundaryMode, METH_VARARGS,
   "SetBoundaryMode(self, mode:int) -> None\nC++: void SetBoundaryMode(int mode)\n\nHandling of ClipCells and IncludeAllIntersectingCells.\n"},
  {"SetBoundaryModeToAssignToOneRegion", PyvtkDistributedDataFilter_SetBoundaryModeToAssignToOneRegion, METH_VARARGS,
   "SetBoundaryModeToAssignToOneRegion(self) -> None\nC++: void SetBoundaryModeToAssignToOneRegion()\n\n"},
  {"SetBoundaryModeToAssignToAllIntersectingRegions", PyvtkDistributedDataFilter_SetBoundaryModeToAssignToAllIntersectingRegions, METH_VARARGS,
   "SetBoundaryModeToAssignToAllIntersectingRegions(self) -> None\nC++: void SetBoundaryModeToAssignToAllIntersectingRegions()\n\n"},
  {"SetBoundaryModeToSplitBoundaryCells", PyvtkDistributedDataFilter_SetBoundaryModeToSplitBoundaryCells, METH_VARARGS,
   "SetBoundaryModeToSplitBoundaryCells(self) -> None\nC++: void SetBoundaryModeToSplitBoundaryCells()\n\n"},
  {"GetBoundaryMode", PyvtkDistributedDataFilter_GetBoundaryMode, METH_VARARGS,
   "GetBoundaryMode(self) -> int\nC++: int GetBoundaryMode()\n\n"},
  {"UseMinimalMemoryOn", PyvtkDistributedDataFilter_UseMinimalMemoryOn, METH_VARARGS,
   "UseMinimalMemoryOn(self) -> None\nC++: virtual void UseMinimalMemoryOn()\n\nThis class does a great deal of all-to-all communication when\nexchanging portions of data sets and building new sub grids. By\ndefault it will do fast communication.  It can instead use\ncommunication routines that use the least possible amount of\nmemory, but these are slower.  Set this option ON to choose these\nlatter routines.\n"},
  {"UseMinimalMemoryOff", PyvtkDistributedDataFilter_UseMinimalMemoryOff, METH_VARARGS,
   "UseMinimalMemoryOff(self) -> None\nC++: virtual void UseMinimalMemoryOff()\n\n"},
  {"GetUseMinimalMemory", PyvtkDistributedDataFilter_GetUseMinimalMemory, METH_VARARGS,
   "GetUseMinimalMemory(self) -> int\nC++: virtual int GetUseMinimalMemory()\n\n"},
  {"SetUseMinimalMemory", PyvtkDistributedDataFilter_SetUseMinimalMemory, METH_VARARGS,
   "SetUseMinimalMemory(self, _arg:int) -> None\nC++: virtual void SetUseMinimalMemory(int _arg)\n\n"},
  {"GetMinimumGhostLevel", PyvtkDistributedDataFilter_GetMinimumGhostLevel, METH_VARARGS,
   "GetMinimumGhostLevel(self) -> int\nC++: virtual int GetMinimumGhostLevel()\n\nThe minimum number of ghost levels to add to each processor's\noutput. If the pipeline also requests ghost levels, the larger\nvalue will be used.\n"},
  {"SetMinimumGhostLevel", PyvtkDistributedDataFilter_SetMinimumGhostLevel, METH_VARARGS,
   "SetMinimumGhostLevel(self, _arg:int) -> None\nC++: virtual void SetMinimumGhostLevel(int _arg)\n\n"},
  {"TimingOn", PyvtkDistributedDataFilter_TimingOn, METH_VARARGS,
   "TimingOn(self) -> None\nC++: virtual void TimingOn()\n\nTurn on collection of timing data\n"},
  {"TimingOff", PyvtkDistributedDataFilter_TimingOff, METH_VARARGS,
   "TimingOff(self) -> None\nC++: virtual void TimingOff()\n\n"},
  {"SetTiming", PyvtkDistributedDataFilter_SetTiming, METH_VARARGS,
   "SetTiming(self, _arg:int) -> None\nC++: virtual void SetTiming(int _arg)\n\n"},
  {"GetTiming", PyvtkDistributedDataFilter_GetTiming, METH_VARARGS,
   "GetTiming(self) -> int\nC++: virtual int GetTiming()\n\n"},
  {"GetCuts", PyvtkDistributedDataFilter_GetCuts, METH_VARARGS,
   "GetCuts(self) -> vtkBSPCuts\nC++: vtkBSPCuts *GetCuts()\n\nYou can set the k-d tree decomposition, rather than have D3\ncompute it.  This allows you to divide a dataset using the\ndecomposition computed for another dataset.  Obtain a description\nof the k-d tree cuts this way:\n\n* vtkBSPCuts *cuts = D3Object1->GetCuts()\n\n* And set it this way:\n\n* D3Object2->SetCuts(cuts)\n"},
  {"SetCuts", PyvtkDistributedDataFilter_SetCuts, METH_VARARGS,
   "SetCuts(self, cuts:vtkBSPCuts) -> None\nC++: void SetCuts(vtkBSPCuts *cuts)\n\n"},
  {"SetUserRegionAssignments", PyvtkDistributedDataFilter_SetUserRegionAssignments, METH_VARARGS,
   "SetUserRegionAssignments(self, map:(int, ...), numRegions:int)\n    -> None\nC++: void SetUserRegionAssignments(const int *map, int numRegions)\n\nvtkBSPCuts doesn't have information about process assignments for\nthe cuts. Typically D3 filter simply reassigns the processes for\neach cut. However, that may not always work, sometimes the\nprocesses have be pre-assigned and we want to preserve that\npartitioning. In that case, one sets the region assignments\nexplicitly. Look at vtkPKdTree::AssignRegions for details about\nthe arguments. Calling SetUserRegionAssignments(nullptr, 0) will\nrevert to default behavior i.e. letting the KdTree come up with\nthe assignments.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDistributedDataFilter_Doc =
  "vtkDistributedDataFilter - Serial stand-in for parallel filter that\ndistributes data among processors\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "This filter is a serial implementation of the\n"
  "vtkPDistributedDataFilter filter with the intent that it can be used\n"
  "in non-MPI builds. This filter acts almost as a \"pass-through\" filter\n"
  "when run in serial, though when the input is a non-composite dataset,\n"
  "the output will be an vtkUnstructuredGrid to be consistent with the\n"
  "parallel filter. The combination of this filter and its parallel\n"
  "counterpart serves to unify the API for serial and parallel builds.\n\n"
  "@sa vtkPDistributedDataFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDistributedDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallel.vtkDistributedDataFilter", // tp_name
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
  PyvtkDistributedDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDistributedDataFilter_StaticNew()
{
  return vtkDistributedDataFilter::New();
}

PyObject *PyvtkDistributedDataFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDistributedDataFilter_Type, PyvtkDistributedDataFilter_Methods,
    "vtkDistributedDataFilter",
 &PyvtkDistributedDataFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDistributedDataFilter_BoundaryModes_Type);
  PyVTKEnum_Add(&PyvtkDistributedDataFilter_BoundaryModes_Type, "vtkDistributedDataFilter.BoundaryModes");

  o = (PyObject *)&PyvtkDistributedDataFilter_BoundaryModes_Type;
  if (PyDict_SetItemString(d, "BoundaryModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkDistributedDataFilter::BoundaryModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "ASSIGN_TO_ONE_REGION", vtkDistributedDataFilter::ASSIGN_TO_ONE_REGION },
        { "ASSIGN_TO_ALL_INTERSECTING_REGIONS", vtkDistributedDataFilter::ASSIGN_TO_ALL_INTERSECTING_REGIONS },
        { "SPLIT_BOUNDARY_CELLS", vtkDistributedDataFilter::SPLIT_BOUNDARY_CELLS },
      };

    o = PyvtkDistributedDataFilter_BoundaryModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDistributedDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDistributedDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDistributedDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

