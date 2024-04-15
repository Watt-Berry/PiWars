// python wrapper for vtkPointCloudRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPointCloudRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointCloudRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkPointCloudRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointCloudRepresentation_InteractionStateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkPointCloudRepresentation.InteractionStateType", // tp_name
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
PyObject *PyvtkPointCloudRepresentation_InteractionStateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPointCloudRepresentation_InteractionStateType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointCloudRepresentation_PickingModeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkPointCloudRepresentation.PickingModeType", // tp_name
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
PyObject *PyvtkPointCloudRepresentation_PickingModeType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPointCloudRepresentation_PickingModeType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkPointCloudRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointCloudRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointCloudRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointCloudRepresentation *tempr = vtkPointCloudRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointCloudRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointCloudRepresentation::NewInstance());

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
PyvtkPointCloudRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPointCloudRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPointCloudRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_PlacePointCloud_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlacePointCloud");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  vtkActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->PlacePointCloud(temp0);
    }
    else
    {
      op->vtkPointCloudRepresentation::PlacePointCloud(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointCloudRepresentation_PlacePointCloud_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlacePointCloud");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  vtkPointSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointSet"))
  {
    if (ap.IsBound())
    {
      op->PlacePointCloud(temp0);
    }
    else
    {
      op->vtkPointCloudRepresentation::PlacePointCloud(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointCloudRepresentation_PlacePointCloud_Methods[] = {
  {"PlacePointCloud", PyvtkPointCloudRepresentation_PlacePointCloud_s1, METH_VARARGS,
   "@V *vtkActor"},
  {"PlacePointCloud", PyvtkPointCloudRepresentation_PlacePointCloud_s2, METH_VARARGS,
   "@V *vtkPointSet"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPointCloudRepresentation_PlacePointCloud(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPointCloudRepresentation_PlacePointCloud_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlacePointCloud");
  return nullptr;
}


static PyObject *
PyvtkPointCloudRepresentation_GetPointCloudActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCloudActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetPointCloudActor() :
      op->vtkPointCloudRepresentation::GetPointCloudActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetPointCloudMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCloudMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataMapper *tempr = (ap.IsBound() ?
      op->GetPointCloudMapper() :
      op->vtkPointCloudRepresentation::GetPointCloudMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointId() :
      op->vtkPointCloudRepresentation::GetPointId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetPointCoordinates_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetPointCoordinates() :
      op->vtkPointCloudRepresentation::GetPointCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointCloudRepresentation_GetPointCoordinates_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetPointCoordinates(temp0);
    }
    else
    {
      op->vtkPointCloudRepresentation::GetPointCoordinates(temp0);
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
PyvtkPointCloudRepresentation_GetPointCoordinates(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPointCloudRepresentation_GetPointCoordinates_s1(self, args);
    case 1:
      return PyvtkPointCloudRepresentation_GetPointCoordinates_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPointCoordinates");
  return nullptr;
}


static PyObject *
PyvtkPointCloudRepresentation_SetHighlighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighlighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHighlighting(temp0);
    }
    else
    {
      op->vtkPointCloudRepresentation::SetHighlighting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetHighlighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighlighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHighlighting() :
      op->vtkPointCloudRepresentation::GetHighlighting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_HighlightingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HighlightingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HighlightingOn();
    }
    else
    {
      op->vtkPointCloudRepresentation::HighlightingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_HighlightingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HighlightingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HighlightingOff();
    }
    else
    {
      op->vtkPointCloudRepresentation::HighlightingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionState(temp0);
    }
    else
    {
      op->vtkPointCloudRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkPointCloudRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkPointCloudRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPointCloudRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkPointCloudRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkPointCloudRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkPointCloudRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkPointCloudRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPointCloudRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkPointCloudRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkPointCloudRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkPointCloudRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkPointCloudRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_SetPickingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickingMode(temp0);
    }
    else
    {
      op->vtkPointCloudRepresentation::SetPickingMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetPickingModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickingModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickingModeMinValue() :
      op->vtkPointCloudRepresentation::GetPickingModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetPickingModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickingModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickingModeMaxValue() :
      op->vtkPointCloudRepresentation::GetPickingModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetPickingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickingMode() :
      op->vtkPointCloudRepresentation::GetPickingMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_SetPickingModeToHardware(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickingModeToHardware");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPickingModeToHardware();
    }
    else
    {
      op->vtkPointCloudRepresentation::SetPickingModeToHardware();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_SetPickingModeToSoftware(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickingModeToSoftware");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPickingModeToSoftware();
    }
    else
    {
      op->vtkPointCloudRepresentation::SetPickingModeToSoftware();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_SetHardwarePickingTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHardwarePickingTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHardwarePickingTolerance(temp0);
    }
    else
    {
      op->vtkPointCloudRepresentation::SetHardwarePickingTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetHardwarePickingTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHardwarePickingTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetHardwarePickingTolerance() :
      op->vtkPointCloudRepresentation::GetHardwarePickingTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_SetSoftwarePickingTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSoftwarePickingTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSoftwarePickingTolerance(temp0);
    }
    else
    {
      op->vtkPointCloudRepresentation::SetSoftwarePickingTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetSoftwarePickingToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSoftwarePickingToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSoftwarePickingToleranceMinValue() :
      op->vtkPointCloudRepresentation::GetSoftwarePickingToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetSoftwarePickingToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSoftwarePickingToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSoftwarePickingToleranceMaxValue() :
      op->vtkPointCloudRepresentation::GetSoftwarePickingToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_GetSoftwarePickingTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSoftwarePickingTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSoftwarePickingTolerance() :
      op->vtkPointCloudRepresentation::GetSoftwarePickingTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointCloudRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointCloudRepresentation *op = static_cast<vtkPointCloudRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkPointCloudRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointCloudRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPointCloudRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointCloudRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointCloudRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPointCloudRepresentation\nC++: static vtkPointCloudRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointCloudRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPointCloudRepresentation\nC++: vtkPointCloudRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPointCloudRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPointCloudRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"PlacePointCloud", PyvtkPointCloudRepresentation_PlacePointCloud, METH_VARARGS,
   "PlacePointCloud(self, a:vtkActor) -> None\nC++: void PlacePointCloud(vtkActor *a)\nPlacePointCloud(self, ps:vtkPointSet) -> None\nC++: void PlacePointCloud(vtkPointSet *ps)\n\nSpecify and place either an actor (vtkActor) or a point set\n(vtkPointSet) that represents the point cloud. If placing with an\nactor, then the actor must refer to a mapper which in turn refers\nto a vtkPointSet, with the actor being used to render the point\ncloud. If placing with a vtkPointSet, then an internal vtkActor\n(and associated vtkPointGaussianMapper) is created to render the\npoint cloud.\n"},
  {"GetPointCloudActor", PyvtkPointCloudRepresentation_GetPointCloudActor, METH_VARARGS,
   "GetPointCloudActor(self) -> vtkActor\nC++: virtual vtkActor *GetPointCloudActor()\n\nRetrieve the associated actor and mapper used to render the point\ncloud.\n"},
  {"GetPointCloudMapper", PyvtkPointCloudRepresentation_GetPointCloudMapper, METH_VARARGS,
   "GetPointCloudMapper(self) -> vtkPolyDataMapper\nC++: virtual vtkPolyDataMapper *GetPointCloudMapper()\n\n"},
  {"GetPointId", PyvtkPointCloudRepresentation_GetPointId, METH_VARARGS,
   "GetPointId(self) -> int\nC++: vtkIdType GetPointId()\n\nRetrieve the point id from the selected point. Note that this can\nbe invalid (<0) if nothing was picked.\n"},
  {"GetPointCoordinates", PyvtkPointCloudRepresentation_GetPointCoordinates, METH_VARARGS,
   "GetPointCoordinates(self) -> Pointer\nC++: const double *GetPointCoordinates()\nGetPointCoordinates(self, x:[float, float, float]) -> None\nC++: void GetPointCoordinates(double x[3])\n\nRetrieve the point coordinates of the selected point. Note that\nif the point id is invalid (<0) then the coordinates are\nundefined.\n"},
  {"SetHighlighting", PyvtkPointCloudRepresentation_SetHighlighting, METH_VARARGS,
   "SetHighlighting(self, _arg:bool) -> None\nC++: virtual void SetHighlighting(bool _arg)\n\nFlag controls whether highlighting of points occurs as the mouse\nmoves over them. This can cause extra rendering operations.\n"},
  {"GetHighlighting", PyvtkPointCloudRepresentation_GetHighlighting, METH_VARARGS,
   "GetHighlighting(self) -> bool\nC++: virtual bool GetHighlighting()\n\n"},
  {"HighlightingOn", PyvtkPointCloudRepresentation_HighlightingOn, METH_VARARGS,
   "HighlightingOn(self) -> None\nC++: virtual void HighlightingOn()\n\n"},
  {"HighlightingOff", PyvtkPointCloudRepresentation_HighlightingOff, METH_VARARGS,
   "HighlightingOff(self) -> None\nC++: virtual void HighlightingOff()\n\n"},
  {"SetInteractionState", PyvtkPointCloudRepresentation_SetInteractionState, METH_VARARGS,
   "SetInteractionState(self, _arg:int) -> None\nC++: virtual void SetInteractionState(int _arg)\n\nThe interaction state may be set from a widget (e.g.,\nPointCloudWidget) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetInteractionStateMinValue", PyvtkPointCloudRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   "GetInteractionStateMinValue(self) -> int\nC++: virtual int GetInteractionStateMinValue()\n\n"},
  {"GetInteractionStateMaxValue", PyvtkPointCloudRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   "GetInteractionStateMaxValue(self) -> int\nC++: virtual int GetInteractionStateMaxValue()\n\n"},
  {"GetBounds", PyvtkPointCloudRepresentation_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nSome methods required to satisfy the vtkWidgetRepresentation API.\n"},
  {"BuildRepresentation", PyvtkPointCloudRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"ComputeInteractionState", PyvtkPointCloudRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"GetActors", PyvtkPointCloudRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, pc:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *pc) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp (i.e., support rendering).\n"},
  {"GetActors2D", PyvtkPointCloudRepresentation_GetActors2D, METH_VARARGS,
   "GetActors2D(self, pc:vtkPropCollection) -> None\nC++: void GetActors2D(vtkPropCollection *pc) override;\n\n"},
  {"RenderOpaqueGeometry", PyvtkPointCloudRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkPointCloudRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkPointCloudRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"ReleaseGraphicsResources", PyvtkPointCloudRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOverlay", PyvtkPointCloudRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, __a:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\n"},
  {"SetPickingMode", PyvtkPointCloudRepresentation_SetPickingMode, METH_VARARGS,
   "SetPickingMode(self, _arg:int) -> None\nC++: virtual void SetPickingMode(int _arg)\n\n"},
  {"GetPickingModeMinValue", PyvtkPointCloudRepresentation_GetPickingModeMinValue, METH_VARARGS,
   "GetPickingModeMinValue(self) -> int\nC++: virtual int GetPickingModeMinValue()\n\n"},
  {"GetPickingModeMaxValue", PyvtkPointCloudRepresentation_GetPickingModeMaxValue, METH_VARARGS,
   "GetPickingModeMaxValue(self) -> int\nC++: virtual int GetPickingModeMaxValue()\n\n"},
  {"GetPickingMode", PyvtkPointCloudRepresentation_GetPickingMode, METH_VARARGS,
   "GetPickingMode(self) -> int\nC++: virtual int GetPickingMode()\n\n"},
  {"SetPickingModeToHardware", PyvtkPointCloudRepresentation_SetPickingModeToHardware, METH_VARARGS,
   "SetPickingModeToHardware(self) -> None\nC++: void SetPickingModeToHardware()\n\n"},
  {"SetPickingModeToSoftware", PyvtkPointCloudRepresentation_SetPickingModeToSoftware, METH_VARARGS,
   "SetPickingModeToSoftware(self) -> None\nC++: void SetPickingModeToSoftware()\n\n"},
  {"SetHardwarePickingTolerance", PyvtkPointCloudRepresentation_SetHardwarePickingTolerance, METH_VARARGS,
   "SetHardwarePickingTolerance(self, _arg:int) -> None\nC++: virtual void SetHardwarePickingTolerance(unsigned int _arg)\n\nThe tolerance representing the distance to a point expressed in\npixels. A tolerance of 0 selects from the pixel precisely under\nthe cursor. A tolerance of 1 results in a 3x3 pixel square under\nthe cursor (padded out by 1 in each direction); a tolerance of N\nresults in a (2N+1)**2 selection rectangle. The point in the\nselection rectangle which is closest in z-buffer to the pick\nposition is selected. Note that this can sometimes return points\nfurther away from the cursor (which can be unexpected - use the\ntolerance carefully).\n"},
  {"GetHardwarePickingTolerance", PyvtkPointCloudRepresentation_GetHardwarePickingTolerance, METH_VARARGS,
   "GetHardwarePickingTolerance(self) -> int\nC++: virtual unsigned int GetHardwarePickingTolerance()\n\n"},
  {"SetSoftwarePickingTolerance", PyvtkPointCloudRepresentation_SetSoftwarePickingTolerance, METH_VARARGS,
   "SetSoftwarePickingTolerance(self, _arg:float) -> None\nC++: virtual void SetSoftwarePickingTolerance(double _arg)\n\nThe tolerance representing the distance to a point (as a fraction\nof the bounding box of the point cloud). This specifies when the\ncursor is considered near enough to the point to highlight it.\nNote that this is a sensitive parameter - too small and it's hard\nto pick anything; too large and points close to the eye can be\npicked in preference to points further away which are closer to\nthe pick ray.\n"},
  {"GetSoftwarePickingToleranceMinValue", PyvtkPointCloudRepresentation_GetSoftwarePickingToleranceMinValue, METH_VARARGS,
   "GetSoftwarePickingToleranceMinValue(self) -> float\nC++: virtual double GetSoftwarePickingToleranceMinValue()\n\n"},
  {"GetSoftwarePickingToleranceMaxValue", PyvtkPointCloudRepresentation_GetSoftwarePickingToleranceMaxValue, METH_VARARGS,
   "GetSoftwarePickingToleranceMaxValue(self) -> float\nC++: virtual double GetSoftwarePickingToleranceMaxValue()\n\n"},
  {"GetSoftwarePickingTolerance", PyvtkPointCloudRepresentation_GetSoftwarePickingTolerance, METH_VARARGS,
   "GetSoftwarePickingTolerance(self) -> float\nC++: virtual double GetSoftwarePickingTolerance()\n\n"},
  {"RegisterPickers", PyvtkPointCloudRepresentation_RegisterPickers, METH_VARARGS,
   "RegisterPickers(self) -> None\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPointCloudRepresentation_Doc =
  "vtkPointCloudRepresentation - represent the vtkPointCloudWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class provides support for interactively querying and selecting\n"
  "points from a point cloud. It is a representation for the\n"
  "vtkPointCloudWidget.\n\n"
  "@sa\n"
  "vtkPointCloudWidget vtkHardwareSelection vtkPointPicker\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointCloudRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkPointCloudRepresentation", // tp_name
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
  PyvtkPointCloudRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointCloudRepresentation_StaticNew()
{
  return vtkPointCloudRepresentation::New();
}

PyObject *PyvtkPointCloudRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPointCloudRepresentation_Type, PyvtkPointCloudRepresentation_Methods,
    "vtkPointCloudRepresentation",
 &PyvtkPointCloudRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPointCloudRepresentation_InteractionStateType_Type);
  PyVTKEnum_Add(&PyvtkPointCloudRepresentation_InteractionStateType_Type, "vtkPointCloudRepresentation.InteractionStateType");

  o = (PyObject *)&PyvtkPointCloudRepresentation_InteractionStateType_Type;
  if (PyDict_SetItemString(d, "InteractionStateType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkPointCloudRepresentation_PickingModeType_Type);
  PyVTKEnum_Add(&PyvtkPointCloudRepresentation_PickingModeType_Type, "vtkPointCloudRepresentation.PickingModeType");

  o = (PyObject *)&PyvtkPointCloudRepresentation_PickingModeType_Type;
  if (PyDict_SetItemString(d, "PickingModeType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkPointCloudRepresentation::InteractionStateType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "Outside", vtkPointCloudRepresentation::Outside },
        { "OverOutline", vtkPointCloudRepresentation::OverOutline },
        { "Over", vtkPointCloudRepresentation::Over },
        { "Selecting", vtkPointCloudRepresentation::Selecting },
      };

    o = PyvtkPointCloudRepresentation_InteractionStateType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkPointCloudRepresentation::PickingModeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "HARDWARE_PICKING", vtkPointCloudRepresentation::HARDWARE_PICKING },
        { "SOFTWARE_PICKING", vtkPointCloudRepresentation::SOFTWARE_PICKING },
      };

    o = PyvtkPointCloudRepresentation_PickingModeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointCloudRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointCloudRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointCloudRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

