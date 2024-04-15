// python wrapper for vtkFitToHeightMapFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFitToHeightMapFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFitToHeightMapFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkFitToHeightMapFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFitToHeightMapFilter_FittingStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkFitToHeightMapFilter.FittingStrategy", // tp_name
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
PyObject *PyvtkFitToHeightMapFilter_FittingStrategy_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkFitToHeightMapFilter_FittingStrategy_Type, static_cast<int>(val));
}


static PyObject *
PyvtkFitToHeightMapFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFitToHeightMapFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFitToHeightMapFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFitToHeightMapFilter *tempr = vtkFitToHeightMapFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFitToHeightMapFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFitToHeightMapFilter::NewInstance());

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
PyvtkFitToHeightMapFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFitToHeightMapFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFitToHeightMapFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_SetHeightMapData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeightMapData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetHeightMapData(temp0);
    }
    else
    {
      op->vtkFitToHeightMapFilter::SetHeightMapData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_SetHeightMapConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeightMapConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetHeightMapConnection(temp0);
    }
    else
    {
      op->vtkFitToHeightMapFilter::SetHeightMapConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_GetHeightMap_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetHeightMap() :
      op->vtkFitToHeightMapFilter::GetHeightMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFitToHeightMapFilter_GetHeightMap_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  vtkInformationVector *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVector"))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetHeightMap(temp0) :
      op->vtkFitToHeightMapFilter::GetHeightMap(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFitToHeightMapFilter_GetHeightMap(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkFitToHeightMapFilter_GetHeightMap_s1(self, args);
    case 1:
      return PyvtkFitToHeightMapFilter_GetHeightMap_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetHeightMap");
  return nullptr;
}


static PyObject *
PyvtkFitToHeightMapFilter_SetFittingStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFittingStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFittingStrategy(temp0);
    }
    else
    {
      op->vtkFitToHeightMapFilter::SetFittingStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_GetFittingStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFittingStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFittingStrategy() :
      op->vtkFitToHeightMapFilter::GetFittingStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_SetFittingStrategyToPointProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFittingStrategyToPointProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFittingStrategyToPointProjection();
    }
    else
    {
      op->vtkFitToHeightMapFilter::SetFittingStrategyToPointProjection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_SetFittingStrategyToPointMinimumHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFittingStrategyToPointMinimumHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFittingStrategyToPointMinimumHeight();
    }
    else
    {
      op->vtkFitToHeightMapFilter::SetFittingStrategyToPointMinimumHeight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_SetFittingStrategyToPointMaximumHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFittingStrategyToPointMaximumHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFittingStrategyToPointMaximumHeight();
    }
    else
    {
      op->vtkFitToHeightMapFilter::SetFittingStrategyToPointMaximumHeight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_SetFittingStrategyToAverageHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFittingStrategyToAverageHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFittingStrategyToAverageHeight();
    }
    else
    {
      op->vtkFitToHeightMapFilter::SetFittingStrategyToAverageHeight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_SetFittingStrategyToCellMinimumHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFittingStrategyToCellMinimumHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFittingStrategyToCellMinimumHeight();
    }
    else
    {
      op->vtkFitToHeightMapFilter::SetFittingStrategyToCellMinimumHeight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_SetFittingStrategyToCellMaximumHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFittingStrategyToCellMaximumHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFittingStrategyToCellMaximumHeight();
    }
    else
    {
      op->vtkFitToHeightMapFilter::SetFittingStrategyToCellMaximumHeight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_SetFittingStrategyToCellAverageHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFittingStrategyToCellAverageHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFittingStrategyToCellAverageHeight();
    }
    else
    {
      op->vtkFitToHeightMapFilter::SetFittingStrategyToCellAverageHeight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_SetUseHeightMapOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseHeightMapOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseHeightMapOffset(temp0);
    }
    else
    {
      op->vtkFitToHeightMapFilter::SetUseHeightMapOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_GetUseHeightMapOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseHeightMapOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseHeightMapOffset() :
      op->vtkFitToHeightMapFilter::GetUseHeightMapOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_UseHeightMapOffsetOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHeightMapOffsetOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseHeightMapOffsetOn();
    }
    else
    {
      op->vtkFitToHeightMapFilter::UseHeightMapOffsetOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFitToHeightMapFilter_UseHeightMapOffsetOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHeightMapOffsetOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitToHeightMapFilter *op = static_cast<vtkFitToHeightMapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseHeightMapOffsetOff();
    }
    else
    {
      op->vtkFitToHeightMapFilter::UseHeightMapOffsetOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFitToHeightMapFilter_Methods[] = {
  {"IsTypeOf", PyvtkFitToHeightMapFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFitToHeightMapFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFitToHeightMapFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFitToHeightMapFilter\nC++: static vtkFitToHeightMapFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFitToHeightMapFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFitToHeightMapFilter\nC++: vtkFitToHeightMapFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFitToHeightMapFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFitToHeightMapFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetHeightMapData", PyvtkFitToHeightMapFilter_SetHeightMapData, METH_VARARGS,
   "SetHeightMapData(self, idata:vtkImageData) -> None\nC++: void SetHeightMapData(vtkImageData *idata)\n\nSet the height map for the filter.  Note that this method does\nnot connect the pipeline. The algorithm will work on the input\ndata as it is without updating the producer of the data.  See\nSetHeightMapConnection() for connecting the pipeline.\n"},
  {"SetHeightMapConnection", PyvtkFitToHeightMapFilter_SetHeightMapConnection, METH_VARARGS,
   "SetHeightMapConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetHeightMapConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the pipeline connection to the height map.\n"},
  {"GetHeightMap", PyvtkFitToHeightMapFilter_GetHeightMap, METH_VARARGS,
   "GetHeightMap(self) -> vtkImageData\nC++: vtkImageData *GetHeightMap()\nGetHeightMap(self, sourceInfo:vtkInformationVector)\n    -> vtkImageData\nC++: vtkImageData *GetHeightMap(vtkInformationVector *sourceInfo)\n\nGet a pointer to the height map.\n"},
  {"SetFittingStrategy", PyvtkFitToHeightMapFilter_SetFittingStrategy, METH_VARARGS,
   "SetFittingStrategy(self, _arg:int) -> None\nC++: virtual void SetFittingStrategy(int _arg)\n\nSpecify a strategy for fitting, or projecting, the polydata to\nthe height field.  By default the points of the polydata are\nprojected onto the height field (POINT_PROJECTION).  However, to\npreserve planarity, or to fit the polydata cells at the\naverage/minimum/maximum height to the height field, different\nstrategies can be used (i.e., placing the cells). The point-based\nstrategies (e.g, POINT_MINIMUM_HEIGHT) set the cell at the\nminimum height of the cell's points (and so on). The cell-based\nstrategies (e.g., CELL_MINIMUM_HEIGHT) sample the interior of the\ncell and place the cell at the minimum height (and so on) of the\ncell's sampled interior points.\n"},
  {"GetFittingStrategy", PyvtkFitToHeightMapFilter_GetFittingStrategy, METH_VARARGS,
   "GetFittingStrategy(self) -> int\nC++: virtual int GetFittingStrategy()\n\n"},
  {"SetFittingStrategyToPointProjection", PyvtkFitToHeightMapFilter_SetFittingStrategyToPointProjection, METH_VARARGS,
   "SetFittingStrategyToPointProjection(self) -> None\nC++: void SetFittingStrategyToPointProjection()\n\n"},
  {"SetFittingStrategyToPointMinimumHeight", PyvtkFitToHeightMapFilter_SetFittingStrategyToPointMinimumHeight, METH_VARARGS,
   "SetFittingStrategyToPointMinimumHeight(self) -> None\nC++: void SetFittingStrategyToPointMinimumHeight()\n\n"},
  {"SetFittingStrategyToPointMaximumHeight", PyvtkFitToHeightMapFilter_SetFittingStrategyToPointMaximumHeight, METH_VARARGS,
   "SetFittingStrategyToPointMaximumHeight(self) -> None\nC++: void SetFittingStrategyToPointMaximumHeight()\n\n"},
  {"SetFittingStrategyToAverageHeight", PyvtkFitToHeightMapFilter_SetFittingStrategyToAverageHeight, METH_VARARGS,
   "SetFittingStrategyToAverageHeight(self) -> None\nC++: void SetFittingStrategyToAverageHeight()\n\n"},
  {"SetFittingStrategyToCellMinimumHeight", PyvtkFitToHeightMapFilter_SetFittingStrategyToCellMinimumHeight, METH_VARARGS,
   "SetFittingStrategyToCellMinimumHeight(self) -> None\nC++: void SetFittingStrategyToCellMinimumHeight()\n\n"},
  {"SetFittingStrategyToCellMaximumHeight", PyvtkFitToHeightMapFilter_SetFittingStrategyToCellMaximumHeight, METH_VARARGS,
   "SetFittingStrategyToCellMaximumHeight(self) -> None\nC++: void SetFittingStrategyToCellMaximumHeight()\n\n"},
  {"SetFittingStrategyToCellAverageHeight", PyvtkFitToHeightMapFilter_SetFittingStrategyToCellAverageHeight, METH_VARARGS,
   "SetFittingStrategyToCellAverageHeight(self) -> None\nC++: void SetFittingStrategyToCellAverageHeight()\n\n"},
  {"SetUseHeightMapOffset", PyvtkFitToHeightMapFilter_SetUseHeightMapOffset, METH_VARARGS,
   "SetUseHeightMapOffset(self, _arg:int) -> None\nC++: virtual void SetUseHeightMapOffset(vtkTypeBool _arg)\n\nIndicate whether the z-offset from the image height map should be\nadded to the final result. Some height map images are offset in\nz-coordinate which is independent of the height map values. By\ndefault this value is true.\n"},
  {"GetUseHeightMapOffset", PyvtkFitToHeightMapFilter_GetUseHeightMapOffset, METH_VARARGS,
   "GetUseHeightMapOffset(self) -> int\nC++: virtual vtkTypeBool GetUseHeightMapOffset()\n\n"},
  {"UseHeightMapOffsetOn", PyvtkFitToHeightMapFilter_UseHeightMapOffsetOn, METH_VARARGS,
   "UseHeightMapOffsetOn(self) -> None\nC++: virtual void UseHeightMapOffsetOn()\n\n"},
  {"UseHeightMapOffsetOff", PyvtkFitToHeightMapFilter_UseHeightMapOffsetOff, METH_VARARGS,
   "UseHeightMapOffsetOff(self) -> None\nC++: virtual void UseHeightMapOffsetOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFitToHeightMapFilter_Doc =
  "vtkFitToHeightMapFilter - adjust polydata to fit image height map\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkFitToHeightMapFilter \"drapes\" or \"covers\" a height map image by\n"
  "determining new point coordinates of an input polydata by projecting\n"
  "(in the z-direction) onto the height map. Different projection\n"
  "approaches can be used including projecting points, or averaging /\n"
  "taking the minimum / taking the maximum of the cell's points or\n"
  "sampled interior points.  The filter passes the input to the output,\n"
  "however new new point coordinates are generated, and point normals\n"
  "are not passed through. Note that the draping supports verts, lines,\n"
  "polygons, and triangle strips.\n\n"
  "@warning\n"
  "Since new point coordinates are generated, planar polygons may become\n"
  "non-planar. To guarantee planarity, use a triangle mesh as input.\n"
  "Also note that strategies based on averaging across a cell, or the\n"
  "points of a cell, set the z-value for all of the cell's points to the\n"
  "same value. However, as currently written, depending on the order in\n"
  "which cells are processed, the last z-value set is the final value\n"
  "(since points may be shared by multiple cells). Thus the filter works\n"
  "best with triangle meshes, or if cells are topologically disconnected\n"
  "(i.e., points are only used by one cell - use vtkShrinkFilter to\n"
  "topologically disconnect the cells in a mesh).\n\n"
  "@warning\n"
  "The point normals are not passed through to the output as the\n"
  "projection process may distort the projected polydata surface.\n\n"
  "@warning\n"
  "The interior cell sampling is currently carried out by triangulating\n"
  "the cells, and then taking the centroid of each resulting triangle.\n"
  "Thus the number of samples for each cell is (number of cell points -\n"
  "2). Future implementations may use a different sampling strategy.\n\n"
  "@warning\n"
  "Points outside of the height map image are clamped to the boundary of\n"
  "the height map. This may produce unexpected behavior in some cases.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkTrimmedExtrusionFilter vtkShrinkFilter vtkShrinkPolyData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFitToHeightMapFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkFitToHeightMapFilter", // tp_name
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
  PyvtkFitToHeightMapFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFitToHeightMapFilter_StaticNew()
{
  return vtkFitToHeightMapFilter::New();
}

PyObject *PyvtkFitToHeightMapFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFitToHeightMapFilter_Type, PyvtkFitToHeightMapFilter_Methods,
    "vtkFitToHeightMapFilter",
 &PyvtkFitToHeightMapFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkFitToHeightMapFilter_FittingStrategy_Type);
  PyVTKEnum_Add(&PyvtkFitToHeightMapFilter_FittingStrategy_Type, "vtkFitToHeightMapFilter.FittingStrategy");

  o = (PyObject *)&PyvtkFitToHeightMapFilter_FittingStrategy_Type;
  if (PyDict_SetItemString(d, "FittingStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "POINT_PROJECTION", vtkFitToHeightMapFilter::POINT_PROJECTION },
        { "POINT_MINIMUM_HEIGHT", vtkFitToHeightMapFilter::POINT_MINIMUM_HEIGHT },
        { "POINT_MAXIMUM_HEIGHT", vtkFitToHeightMapFilter::POINT_MAXIMUM_HEIGHT },
        { "POINT_AVERAGE_HEIGHT", vtkFitToHeightMapFilter::POINT_AVERAGE_HEIGHT },
        { "CELL_MINIMUM_HEIGHT", vtkFitToHeightMapFilter::CELL_MINIMUM_HEIGHT },
        { "CELL_MAXIMUM_HEIGHT", vtkFitToHeightMapFilter::CELL_MAXIMUM_HEIGHT },
        { "CELL_AVERAGE_HEIGHT", vtkFitToHeightMapFilter::CELL_AVERAGE_HEIGHT },
      };

    o = PyvtkFitToHeightMapFilter_FittingStrategy_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFitToHeightMapFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFitToHeightMapFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFitToHeightMapFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

