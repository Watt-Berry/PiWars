// python wrapper for vtkPlotRangeHandlesItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPlotRangeHandlesItem.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlotRangeHandlesItem(PyObject *dict); }
extern "C" { PyObject *PyvtkPlotRangeHandlesItem_ClassNew(); }

#ifndef DECLARED_PyvtkPlot_ClassNew
extern "C" { PyObject *PyvtkPlot_ClassNew(); }
#define DECLARED_PyvtkPlot_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPlotRangeHandlesItem_Handle_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkPlotRangeHandlesItem.Handle", // tp_name
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
PyObject *PyvtkPlotRangeHandlesItem_Handle_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPlotRangeHandlesItem_Handle_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPlotRangeHandlesItem_Orientation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkPlotRangeHandlesItem.Orientation", // tp_name
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
PyObject *PyvtkPlotRangeHandlesItem_Orientation_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPlotRangeHandlesItem_Orientation_Type, static_cast<int>(val));
}


static PyObject *
PyvtkPlotRangeHandlesItem_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlotRangeHandlesItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotRangeHandlesItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlotRangeHandlesItem *tempr = vtkPlotRangeHandlesItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlotRangeHandlesItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotRangeHandlesItem::NewInstance());

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
PyvtkPlotRangeHandlesItem_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPlotRangeHandlesItem::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPlotRangeHandlesItem::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotRangeHandlesItem::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkPlotRangeHandlesItem::GetBounds(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_GetHandlesRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlesRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetHandlesRange(temp0);
    }
    else
    {
      op->vtkPlotRangeHandlesItem::GetHandlesRange(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_SetHandleWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleWidth(temp0);
    }
    else
    {
      op->vtkPlotRangeHandlesItem::SetHandleWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_GetHandleWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetHandleWidth() :
      op->vtkPlotRangeHandlesItem::GetHandleWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_SetHandleOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleOrientation(temp0);
    }
    else
    {
      op->vtkPlotRangeHandlesItem::SetHandleOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_GetHandleOrientationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleOrientationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleOrientationMinValue() :
      op->vtkPlotRangeHandlesItem::GetHandleOrientationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_GetHandleOrientationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleOrientationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleOrientationMaxValue() :
      op->vtkPlotRangeHandlesItem::GetHandleOrientationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_GetHandleOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleOrientation() :
      op->vtkPlotRangeHandlesItem::GetHandleOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_SetHandleOrientationToVertical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleOrientationToVertical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHandleOrientationToVertical();
    }
    else
    {
      op->vtkPlotRangeHandlesItem::SetHandleOrientationToVertical();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_SetHandleOrientationToHorizontal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleOrientationToHorizontal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHandleOrientationToHorizontal();
    }
    else
    {
      op->vtkPlotRangeHandlesItem::SetHandleOrientationToHorizontal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetExtent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPlotRangeHandlesItem::SetExtent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotRangeHandlesItem_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetExtent(temp0);
    }
    else
    {
      op->vtkPlotRangeHandlesItem::SetExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotRangeHandlesItem_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPlotRangeHandlesItem_SetExtent_s1(self, args);
    case 1:
      return PyvtkPlotRangeHandlesItem_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}


static PyObject *
PyvtkPlotRangeHandlesItem_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkPlotRangeHandlesItem::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_SetExtentToAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentToAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtentToAxisRange(temp0);
    }
    else
    {
      op->vtkPlotRangeHandlesItem::SetExtentToAxisRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_GetExtentToAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentToAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentToAxisRange() :
      op->vtkPlotRangeHandlesItem::GetExtentToAxisRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_ExtentToAxisRangeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentToAxisRangeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtentToAxisRangeOn();
    }
    else
    {
      op->vtkPlotRangeHandlesItem::ExtentToAxisRangeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_ExtentToAxisRangeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentToAxisRangeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtentToAxisRangeOff();
    }
    else
    {
      op->vtkPlotRangeHandlesItem::ExtentToAxisRangeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_SetSynchronizeRangeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSynchronizeRangeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSynchronizeRangeHandles(temp0);
    }
    else
    {
      op->vtkPlotRangeHandlesItem::SetSynchronizeRangeHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_GetSynchronizeRangeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSynchronizeRangeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSynchronizeRangeHandles() :
      op->vtkPlotRangeHandlesItem::GetSynchronizeRangeHandles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_SynchronizeRangeHandlesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeRangeHandlesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SynchronizeRangeHandlesOn();
    }
    else
    {
      op->vtkPlotRangeHandlesItem::SynchronizeRangeHandlesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_SynchronizeRangeHandlesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronizeRangeHandlesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SynchronizeRangeHandlesOff();
    }
    else
    {
      op->vtkPlotRangeHandlesItem::SynchronizeRangeHandlesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_SetLockTooltipToMouse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockTooltipToMouse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLockTooltipToMouse(temp0);
    }
    else
    {
      op->vtkPlotRangeHandlesItem::SetLockTooltipToMouse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_GetLockTooltipToMouse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockTooltipToMouse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLockTooltipToMouse() :
      op->vtkPlotRangeHandlesItem::GetLockTooltipToMouse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_LockTooltipToMouseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockTooltipToMouseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockTooltipToMouseOn();
    }
    else
    {
      op->vtkPlotRangeHandlesItem::LockTooltipToMouseOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_LockTooltipToMouseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockTooltipToMouseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockTooltipToMouseOff();
    }
    else
    {
      op->vtkPlotRangeHandlesItem::LockTooltipToMouseOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_GetHighlightBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighlightBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetHighlightBrush() :
      op->vtkPlotRangeHandlesItem::GetHighlightBrush());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotRangeHandlesItem_ComputeHandlesDrawRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeHandlesDrawRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotRangeHandlesItem *op = static_cast<vtkPlotRangeHandlesItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeHandlesDrawRange();
    }
    else
    {
      op->vtkPlotRangeHandlesItem::ComputeHandlesDrawRange();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlotRangeHandlesItem_Methods[] = {
  {"IsTypeOf", PyvtkPlotRangeHandlesItem_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlotRangeHandlesItem_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlotRangeHandlesItem_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPlotRangeHandlesItem\nC++: static vtkPlotRangeHandlesItem *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlotRangeHandlesItem_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPlotRangeHandlesItem\nC++: vtkPlotRangeHandlesItem *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPlotRangeHandlesItem_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPlotRangeHandlesItem_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Paint", PyvtkPlotRangeHandlesItem_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint both handles and the range if a handle is active or hovered\n"},
  {"GetBounds", PyvtkPlotRangeHandlesItem_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float]) -> None\nC++: void GetBounds(double bounds[4]) override;\n\nRecover the bounds of the item\n"},
  {"GetHandlesRange", PyvtkPlotRangeHandlesItem_GetHandlesRange, METH_VARARGS,
   "GetHandlesRange(self, range:[float, float]) -> None\nC++: virtual void GetHandlesRange(double range[2])\n\nRecover the range currently set by the handles Use this method by\nobserving EndInteractionEvent\n"},
  {"SetHandleWidth", PyvtkPlotRangeHandlesItem_SetHandleWidth, METH_VARARGS,
   "SetHandleWidth(self, _arg:float) -> None\nC++: virtual void SetHandleWidth(float _arg)\n\nSet/Get the handles width in pixels. Default is 2.\n"},
  {"GetHandleWidth", PyvtkPlotRangeHandlesItem_GetHandleWidth, METH_VARARGS,
   "GetHandleWidth(self) -> float\nC++: virtual float GetHandleWidth()\n\n"},
  {"SetHandleOrientation", PyvtkPlotRangeHandlesItem_SetHandleOrientation, METH_VARARGS,
   "SetHandleOrientation(self, _arg:int) -> None\nC++: virtual void SetHandleOrientation(int _arg)\n\nSet/Get the handles orientation in the plot.\n"},
  {"GetHandleOrientationMinValue", PyvtkPlotRangeHandlesItem_GetHandleOrientationMinValue, METH_VARARGS,
   "GetHandleOrientationMinValue(self) -> int\nC++: virtual int GetHandleOrientationMinValue()\n\n"},
  {"GetHandleOrientationMaxValue", PyvtkPlotRangeHandlesItem_GetHandleOrientationMaxValue, METH_VARARGS,
   "GetHandleOrientationMaxValue(self) -> int\nC++: virtual int GetHandleOrientationMaxValue()\n\n"},
  {"GetHandleOrientation", PyvtkPlotRangeHandlesItem_GetHandleOrientation, METH_VARARGS,
   "GetHandleOrientation(self) -> int\nC++: virtual int GetHandleOrientation()\n\n"},
  {"SetHandleOrientationToVertical", PyvtkPlotRangeHandlesItem_SetHandleOrientationToVertical, METH_VARARGS,
   "SetHandleOrientationToVertical(self) -> None\nC++: void SetHandleOrientationToVertical()\n\n"},
  {"SetHandleOrientationToHorizontal", PyvtkPlotRangeHandlesItem_SetHandleOrientationToHorizontal, METH_VARARGS,
   "SetHandleOrientationToHorizontal(self) -> None\nC++: void SetHandleOrientationToHorizontal()\n\n"},
  {"SetExtent", PyvtkPlotRangeHandlesItem_SetExtent, METH_VARARGS,
   "SetExtent(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float) -> None\nC++: virtual void SetExtent(double _arg1, double _arg2,\n    double _arg3, double _arg4)\nSetExtent(self, _arg:(float, float, float, float)) -> None\nC++: virtual void SetExtent(const double _arg[4])\n\nSet/Get the extent of the handles in data space (axis unscaled\nrange). The first two parameters define the left and right\nhandles positions on the axis. The last two parameters define the\nlength of handles along the opposite axis. Default values are set\nto (0, 1, 0, 1). When using ExtentToAxisRangeOn(), the last two\nparameters don't have any effect and handles span the axis range.\n"},
  {"GetExtent", PyvtkPlotRangeHandlesItem_GetExtent, METH_VARARGS,
   "GetExtent(self) -> (float, float, float, float)\nC++: virtual double *GetExtent()\n\n"},
  {"SetExtentToAxisRange", PyvtkPlotRangeHandlesItem_SetExtentToAxisRange, METH_VARARGS,
   "SetExtentToAxisRange(self, _arg:int) -> None\nC++: virtual void SetExtentToAxisRange(vtkTypeBool _arg)\n\nSet/Get whether handles span the range of the axis. Default is\nOn.\n"},
  {"GetExtentToAxisRange", PyvtkPlotRangeHandlesItem_GetExtentToAxisRange, METH_VARARGS,
   "GetExtentToAxisRange(self) -> int\nC++: virtual vtkTypeBool GetExtentToAxisRange()\n\n"},
  {"ExtentToAxisRangeOn", PyvtkPlotRangeHandlesItem_ExtentToAxisRangeOn, METH_VARARGS,
   "ExtentToAxisRangeOn(self) -> None\nC++: virtual void ExtentToAxisRangeOn()\n\n"},
  {"ExtentToAxisRangeOff", PyvtkPlotRangeHandlesItem_ExtentToAxisRangeOff, METH_VARARGS,
   "ExtentToAxisRangeOff(self) -> None\nC++: virtual void ExtentToAxisRangeOff()\n\n"},
  {"SetSynchronizeRangeHandles", PyvtkPlotRangeHandlesItem_SetSynchronizeRangeHandles, METH_VARARGS,
   "SetSynchronizeRangeHandles(self, _arg:int) -> None\nC++: virtual void SetSynchronizeRangeHandles(vtkTypeBool _arg)\n\nSet/Get whether handles move together when one of them is update.\nDefault is Off.\n"},
  {"GetSynchronizeRangeHandles", PyvtkPlotRangeHandlesItem_GetSynchronizeRangeHandles, METH_VARARGS,
   "GetSynchronizeRangeHandles(self) -> int\nC++: virtual vtkTypeBool GetSynchronizeRangeHandles()\n\n"},
  {"SynchronizeRangeHandlesOn", PyvtkPlotRangeHandlesItem_SynchronizeRangeHandlesOn, METH_VARARGS,
   "SynchronizeRangeHandlesOn(self) -> None\nC++: virtual void SynchronizeRangeHandlesOn()\n\n"},
  {"SynchronizeRangeHandlesOff", PyvtkPlotRangeHandlesItem_SynchronizeRangeHandlesOff, METH_VARARGS,
   "SynchronizeRangeHandlesOff(self) -> None\nC++: virtual void SynchronizeRangeHandlesOff()\n\n"},
  {"SetLockTooltipToMouse", PyvtkPlotRangeHandlesItem_SetLockTooltipToMouse, METH_VARARGS,
   "SetLockTooltipToMouse(self, _arg:int) -> None\nC++: virtual void SetLockTooltipToMouse(vtkTypeBool _arg)\n\nIf On, the range tooltip is always rendered using mouse position,\notherwise it is placed at the center of the x axis Default is On.\n"},
  {"GetLockTooltipToMouse", PyvtkPlotRangeHandlesItem_GetLockTooltipToMouse, METH_VARARGS,
   "GetLockTooltipToMouse(self) -> int\nC++: virtual vtkTypeBool GetLockTooltipToMouse()\n\n"},
  {"LockTooltipToMouseOn", PyvtkPlotRangeHandlesItem_LockTooltipToMouseOn, METH_VARARGS,
   "LockTooltipToMouseOn(self) -> None\nC++: virtual void LockTooltipToMouseOn()\n\n"},
  {"LockTooltipToMouseOff", PyvtkPlotRangeHandlesItem_LockTooltipToMouseOff, METH_VARARGS,
   "LockTooltipToMouseOff(self) -> None\nC++: virtual void LockTooltipToMouseOff()\n\n"},
  {"GetHighlightBrush", PyvtkPlotRangeHandlesItem_GetHighlightBrush, METH_VARARGS,
   "GetHighlightBrush(self) -> vtkBrush\nC++: virtual vtkBrush *GetHighlightBrush()\n\nReturn the brush used to paint handles being hovered\n"},
  {"ComputeHandlesDrawRange", PyvtkPlotRangeHandlesItem_ComputeHandlesDrawRange, METH_VARARGS,
   "ComputeHandlesDrawRange(self) -> None\nC++: virtual void ComputeHandlesDrawRange()\n\nCompute the handles draw range by using the handle width and the\ntransfer function\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPlotRangeHandlesItem_Doc =
  "vtkPlotRangeHandlesItem - item to show and control a range on vtkAxis\n\n"
  "Superclass: vtkPlot\n\n"
  "vtkPlotRangeHandlesItem provides range handles painting and\n"
  "management for a provided extent. Handles can be moved by clicking on\n"
  "them. The range is shown when hovering or moving the handles. It\n"
  "emits a StartInteractionEvent when starting to interact with a\n"
  "handle, an InteractionEvent when interacting with a handle and an\n"
  "EndInteractionEvent when releasing a handle. It emits a\n"
  "LeftMouseButtonDoubleClickEvent when double clicked. Options can be\n"
  "used to change the appearance or behavior of handles:\n"
  "- SynchronizeHandlesRange: When enabled, moving the minimum handle\n"
  "  triggers the modification of the whole range, resulting in the\n"
  "  maximum handle being moved too. Disabled by default.\n"
  "- Orientation: Choose between horizontal (Y axis) or vertical (X\n"
  "  axis) handles. Default is vertical.\n"
  "- ExtentToAxis: When enabled, the height of handles span the range of\n"
  "the opposite axis. If disabled, the height of handles is defined by\n"
  "  the provided extent. Enabled by default.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPlotRangeHandlesItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkPlotRangeHandlesItem", // tp_name
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
  PyvtkPlotRangeHandlesItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlotRangeHandlesItem_StaticNew()
{
  return vtkPlotRangeHandlesItem::New();
}

PyObject *PyvtkPlotRangeHandlesItem_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPlotRangeHandlesItem_Type, PyvtkPlotRangeHandlesItem_Methods,
    "vtkPlotRangeHandlesItem",
 &PyvtkPlotRangeHandlesItem_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPlot_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPlotRangeHandlesItem_Handle_Type);
  PyVTKEnum_Add(&PyvtkPlotRangeHandlesItem_Handle_Type, "vtkPlotRangeHandlesItem.Handle");

  o = (PyObject *)&PyvtkPlotRangeHandlesItem_Handle_Type;
  if (PyDict_SetItemString(d, "Handle", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkPlotRangeHandlesItem_Orientation_Type);
  PyVTKEnum_Add(&PyvtkPlotRangeHandlesItem_Orientation_Type, "vtkPlotRangeHandlesItem.Orientation");

  o = (PyObject *)&PyvtkPlotRangeHandlesItem_Orientation_Type;
  if (PyDict_SetItemString(d, "Orientation", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkPlotRangeHandlesItem::Handle cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "NO_HANDLE", vtkPlotRangeHandlesItem::NO_HANDLE },
        { "LEFT_HANDLE", vtkPlotRangeHandlesItem::LEFT_HANDLE },
        { "RIGHT_HANDLE", vtkPlotRangeHandlesItem::RIGHT_HANDLE },
      };

    o = PyvtkPlotRangeHandlesItem_Handle_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkPlotRangeHandlesItem::Orientation cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "VERTICAL", vtkPlotRangeHandlesItem::VERTICAL },
        { "HORIZONTAL", vtkPlotRangeHandlesItem::HORIZONTAL },
      };

    o = PyvtkPlotRangeHandlesItem_Orientation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlotRangeHandlesItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlotRangeHandlesItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlotRangeHandlesItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

