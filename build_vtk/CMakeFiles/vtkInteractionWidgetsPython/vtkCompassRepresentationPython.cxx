// python wrapper for vtkCompassRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCompassRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompassRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkCompassRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkContinuousValueWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkContinuousValueWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkContinuousValueWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCompassRepresentation_InteractionStateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkCompassRepresentation.InteractionStateType", // tp_name
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
PyObject *PyvtkCompassRepresentation_InteractionStateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCompassRepresentation_InteractionStateType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCompassRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompassRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompassRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompassRepresentation *tempr = vtkCompassRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompassRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompassRepresentation::NewInstance());

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
PyvtkCompassRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCompassRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCompassRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetPoint1Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPoint1Coordinate() :
      op->vtkCompassRepresentation::GetPoint1Coordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetPoint2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPoint2Coordinate() :
      op->vtkCompassRepresentation::GetPoint2Coordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetRingProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRingProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetRingProperty() :
      op->vtkCompassRepresentation::GetRingProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkCompassRepresentation::GetSelectedProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelProperty() :
      op->vtkCompassRepresentation::GetLabelProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->PlaceWidget(temp0);
    }
    else
    {
      op->vtkCompassRepresentation::PlaceWidget(temp0);
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
PyvtkCompassRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkCompassRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      op->StartWidgetInteraction(temp0);
    }
    else
    {
      op->vtkCompassRepresentation::StartWidgetInteraction(temp0);
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
PyvtkCompassRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      op->WidgetInteraction(temp0);
    }
    else
    {
      op->vtkCompassRepresentation::WidgetInteraction(temp0);
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
PyvtkCompassRepresentation_TiltWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TiltWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      op->TiltWidgetInteraction(temp0);
    }
    else
    {
      op->vtkCompassRepresentation::TiltWidgetInteraction(temp0);
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
PyvtkCompassRepresentation_DistanceWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistanceWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      op->DistanceWidgetInteraction(temp0);
    }
    else
    {
      op->vtkCompassRepresentation::DistanceWidgetInteraction(temp0);
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
PyvtkCompassRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      op->vtkCompassRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Highlight(temp0);
    }
    else
    {
      op->vtkCompassRepresentation::Highlight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      op->vtkCompassRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

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
      op->vtkCompassRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCompassRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCompassRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_SetHeading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeading(temp0);
    }
    else
    {
      op->vtkCompassRepresentation::SetHeading(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetHeading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeading() :
      op->vtkCompassRepresentation::GetHeading());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_SetTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTilt(temp0);
    }
    else
    {
      op->vtkCompassRepresentation::SetTilt(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTilt() :
      op->vtkCompassRepresentation::GetTilt());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_SetMaximumTiltAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumTiltAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumTiltAngle(temp0);
    }
    else
    {
      op->vtkCompassRepresentation::SetMaximumTiltAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetMaximumTiltAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumTiltAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumTiltAngle() :
      op->vtkCompassRepresentation::GetMaximumTiltAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_SetMinimumTiltAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumTiltAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumTiltAngle(temp0);
    }
    else
    {
      op->vtkCompassRepresentation::SetMinimumTiltAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetMinimumTiltAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumTiltAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumTiltAngle() :
      op->vtkCompassRepresentation::GetMinimumTiltAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_UpdateTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->UpdateTilt(temp0);
    }
    else
    {
      op->vtkCompassRepresentation::UpdateTilt(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_EndTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndTilt();
    }
    else
    {
      op->vtkCompassRepresentation::EndTilt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_SetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistance(temp0);
    }
    else
    {
      op->vtkCompassRepresentation::SetDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistance() :
      op->vtkCompassRepresentation::GetDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_SetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumDistance(temp0);
    }
    else
    {
      op->vtkCompassRepresentation::SetMaximumDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistance() :
      op->vtkCompassRepresentation::GetMaximumDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_SetMinimumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumDistance(temp0);
    }
    else
    {
      op->vtkCompassRepresentation::SetMinimumDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_GetMinimumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumDistance() :
      op->vtkCompassRepresentation::GetMinimumDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_UpdateDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  double temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->UpdateDistance(temp0);
    }
    else
    {
      op->vtkCompassRepresentation::UpdateDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_EndDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndDistance();
    }
    else
    {
      op->vtkCompassRepresentation::EndDistance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassRepresentation *op = static_cast<vtkCompassRepresentation *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkCompassRepresentation::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompassRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkCompassRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompassRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompassRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCompassRepresentation\nC++: static vtkCompassRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompassRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCompassRepresentation\nC++: vtkCompassRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCompassRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCompassRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetPoint1Coordinate", PyvtkCompassRepresentation_GetPoint1Coordinate, METH_VARARGS,
   "GetPoint1Coordinate(self) -> vtkCoordinate\nC++: vtkCoordinate *GetPoint1Coordinate()\n\nPosition the first end point of the slider. Note that this point\nis an instance of vtkCoordinate, meaning that Point 1 can be\nspecified in a variety of coordinate systems, and can even be\nrelative to another point. To set the point, you'll want to get\nthe Point1Coordinate and then invoke the necessary methods to put\nit into the correct coordinate system and set the correct initial\nvalue.\n"},
  {"GetPoint2Coordinate", PyvtkCompassRepresentation_GetPoint2Coordinate, METH_VARARGS,
   "GetPoint2Coordinate(self) -> vtkCoordinate\nC++: vtkCoordinate *GetPoint2Coordinate()\n\nPosition the second end point of the slider. Note that this point\nis an instance of vtkCoordinate, meaning that Point 1 can be\nspecified in a variety of coordinate systems, and can even be\nrelative to another point. To set the point, you'll want to get\nthe Point2Coordinate and then invoke the necessary methods to put\nit into the correct coordinate system and set the correct initial\nvalue.\n"},
  {"GetRingProperty", PyvtkCompassRepresentation_GetRingProperty, METH_VARARGS,
   "GetRingProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetRingProperty()\n\nGet the slider properties. The properties of the slider when\nselected and unselected can be manipulated.\n"},
  {"GetSelectedProperty", PyvtkCompassRepresentation_GetSelectedProperty, METH_VARARGS,
   "GetSelectedProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetSelectedProperty()\n\nGet the selection property. This property is used to modify the\nappearance of selected objects (e.g., the slider).\n"},
  {"GetLabelProperty", PyvtkCompassRepresentation_GetLabelProperty, METH_VARARGS,
   "GetLabelProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelProperty()\n\nSet/Get the properties for the label and title text.\n"},
  {"PlaceWidget", PyvtkCompassRepresentation_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\n\nMethods to interface with the vtkSliderWidget. The PlaceWidget()\nmethod assumes that the parameter bounds[6] specifies the\nlocation in display space where the widget should be placed.\n"},
  {"BuildRepresentation", PyvtkCompassRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"StartWidgetInteraction", PyvtkCompassRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkCompassRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void WidgetInteraction(double eventPos[2]) override;\n\n"},
  {"TiltWidgetInteraction", PyvtkCompassRepresentation_TiltWidgetInteraction, METH_VARARGS,
   "TiltWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: virtual void TiltWidgetInteraction(double eventPos[2])\n\n"},
  {"DistanceWidgetInteraction", PyvtkCompassRepresentation_DistanceWidgetInteraction, METH_VARARGS,
   "DistanceWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: virtual void DistanceWidgetInteraction(double eventPos[2])\n\n"},
  {"ComputeInteractionState", PyvtkCompassRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"Highlight", PyvtkCompassRepresentation_Highlight, METH_VARARGS,
   "Highlight(self, __a:int) -> None\nC++: void Highlight(int) override;\n\n"},
  {"GetActors", PyvtkCompassRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, propCollection:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *propCollection) override;\n\nMethods supporting the rendering process.\n"},
  {"ReleaseGraphicsResources", PyvtkCompassRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, window:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *window) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOverlay", PyvtkCompassRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewPort:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewPort) override;\n\n"},
  {"RenderOpaqueGeometry", PyvtkCompassRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"SetHeading", PyvtkCompassRepresentation_SetHeading, METH_VARARGS,
   "SetHeading(self, heading:float) -> None\nC++: virtual void SetHeading(double heading)\n\nGet/Set the heading in degrees. The methods ensure that the\nheading is in the range [0, 360) degrees.\n"},
  {"GetHeading", PyvtkCompassRepresentation_GetHeading, METH_VARARGS,
   "GetHeading(self) -> float\nC++: virtual double GetHeading()\n\n"},
  {"SetTilt", PyvtkCompassRepresentation_SetTilt, METH_VARARGS,
   "SetTilt(self, tilt:float) -> None\nC++: virtual void SetTilt(double tilt)\n\nGet/Set the tilt in degrees. The methods ensure that the tilt is\nin the range set by SetMaximumTiltAngle() and\nSetMinimumTiltAngle().\n"},
  {"GetTilt", PyvtkCompassRepresentation_GetTilt, METH_VARARGS,
   "GetTilt(self) -> float\nC++: virtual double GetTilt()\n\n"},
  {"SetMaximumTiltAngle", PyvtkCompassRepresentation_SetMaximumTiltAngle, METH_VARARGS,
   "SetMaximumTiltAngle(self, angle:float) -> None\nC++: void SetMaximumTiltAngle(double angle)\n\nGet/Set the tilt range. These default range is [-90, 90] degrees.\n"},
  {"GetMaximumTiltAngle", PyvtkCompassRepresentation_GetMaximumTiltAngle, METH_VARARGS,
   "GetMaximumTiltAngle(self) -> float\nC++: double GetMaximumTiltAngle()\n\n"},
  {"SetMinimumTiltAngle", PyvtkCompassRepresentation_SetMinimumTiltAngle, METH_VARARGS,
   "SetMinimumTiltAngle(self, angle:float) -> None\nC++: void SetMinimumTiltAngle(double angle)\n\n"},
  {"GetMinimumTiltAngle", PyvtkCompassRepresentation_GetMinimumTiltAngle, METH_VARARGS,
   "GetMinimumTiltAngle(self) -> float\nC++: double GetMinimumTiltAngle()\n\n"},
  {"UpdateTilt", PyvtkCompassRepresentation_UpdateTilt, METH_VARARGS,
   "UpdateTilt(self, deltaTilt:float=0) -> None\nC++: virtual void UpdateTilt(double deltaTilt=0)\n\nUpdate the tilt by the given delta in degrees.\n"},
  {"EndTilt", PyvtkCompassRepresentation_EndTilt, METH_VARARGS,
   "EndTilt(self) -> None\nC++: virtual void EndTilt()\n\n"},
  {"SetDistance", PyvtkCompassRepresentation_SetDistance, METH_VARARGS,
   "SetDistance(self, distance:float) -> None\nC++: virtual void SetDistance(double distance)\n\nGet/Set the distance. These methods ensure that the distance is\nin the range set by SetMaximumDistance() and\nSetMinimumDistance().\n"},
  {"GetDistance", PyvtkCompassRepresentation_GetDistance, METH_VARARGS,
   "GetDistance(self) -> float\nC++: virtual double GetDistance()\n\n"},
  {"SetMaximumDistance", PyvtkCompassRepresentation_SetMaximumDistance, METH_VARARGS,
   "SetMaximumDistance(self, distance:float) -> None\nC++: void SetMaximumDistance(double distance)\n\nGet/Set the distance range. The default is [0.0, 2.0].\n"},
  {"GetMaximumDistance", PyvtkCompassRepresentation_GetMaximumDistance, METH_VARARGS,
   "GetMaximumDistance(self) -> float\nC++: double GetMaximumDistance()\n\n"},
  {"SetMinimumDistance", PyvtkCompassRepresentation_SetMinimumDistance, METH_VARARGS,
   "SetMinimumDistance(self, distance:float) -> None\nC++: void SetMinimumDistance(double distance)\n\n"},
  {"GetMinimumDistance", PyvtkCompassRepresentation_GetMinimumDistance, METH_VARARGS,
   "GetMinimumDistance(self) -> float\nC++: double GetMinimumDistance()\n\n"},
  {"UpdateDistance", PyvtkCompassRepresentation_UpdateDistance, METH_VARARGS,
   "UpdateDistance(self, deltaDistance:float=0) -> None\nC++: virtual void UpdateDistance(double deltaDistance=0)\n\nUpdate the distance by the given delta.\n"},
  {"EndDistance", PyvtkCompassRepresentation_EndDistance, METH_VARARGS,
   "EndDistance(self) -> None\nC++: virtual void EndDistance()\n\n"},
  {"SetRenderer", PyvtkCompassRepresentation_SetRenderer, METH_VARARGS,
   "SetRenderer(self, renderer:vtkRenderer) -> None\nC++: void SetRenderer(vtkRenderer *renderer) override;\n\nSubclasses of vtkWidgetRepresentation must implement these\nmethods. This is considered the minimum API for a widget\nrepresentation.\n\nSetRenderer() - the renderer in which the representations draws\nitself. Typically the renderer is set by the associated widget.\nUse the widget's SetCurrentRenderer() method in most cases;\notherwise there is a risk of inconsistent behavior as events and\ndrawing may be performed in different viewports.\nBuildRepresentation() - update the geometry of the widget based\non its current state.  WARNING: The renderer is NOT reference\ncounted by the representation, in order to avoid reference loops.\n Be sure that the representation lifetime does not extend beyond\nthe renderer lifetime.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCompassRepresentation_Doc =
  "vtkCompassRepresentation - provide a compass and distance, tilt\nsliders\n\n"
  "Superclass: vtkContinuousValueWidgetRepresentation\n\n"
  "This class is used to represent and render a compass to represent a\n"
  "heading, and two vertical sliders to manipulate distance and tilt.\n\n"
  "If distance or tilt sliders are not required then their Visibility\n"
  "can be set to off when subclassing it.\n\n"
  "Override the GetStatusText() method if you require a customized\n"
  "status text.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCompassRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkCompassRepresentation", // tp_name
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
  PyvtkCompassRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompassRepresentation_StaticNew()
{
  return vtkCompassRepresentation::New();
}

PyObject *PyvtkCompassRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCompassRepresentation_Type, PyvtkCompassRepresentation_Methods,
    "vtkCompassRepresentation",
 &PyvtkCompassRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkContinuousValueWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCompassRepresentation_InteractionStateType_Type);
  PyVTKEnum_Add(&PyvtkCompassRepresentation_InteractionStateType_Type, "vtkCompassRepresentation.InteractionStateType");

  o = (PyObject *)&PyvtkCompassRepresentation_InteractionStateType_Type;
  if (PyDict_SetItemString(d, "InteractionStateType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    typedef vtkCompassRepresentation::InteractionStateType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[9] = {
        { "Outside", vtkCompassRepresentation::Outside },
        { "Inside", vtkCompassRepresentation::Inside },
        { "Adjusting", vtkCompassRepresentation::Adjusting },
        { "TiltDown", vtkCompassRepresentation::TiltDown },
        { "TiltUp", vtkCompassRepresentation::TiltUp },
        { "TiltAdjusting", vtkCompassRepresentation::TiltAdjusting },
        { "DistanceOut", vtkCompassRepresentation::DistanceOut },
        { "DistanceIn", vtkCompassRepresentation::DistanceIn },
        { "DistanceAdjusting", vtkCompassRepresentation::DistanceAdjusting },
      };

    o = PyvtkCompassRepresentation_InteractionStateType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompassRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompassRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompassRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

