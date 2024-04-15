// python wrapper for vtkFinitePlaneRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFinitePlaneRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFinitePlaneRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkFinitePlaneRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFinitePlaneRepresentation_InteractionStateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkFinitePlaneRepresentation.InteractionStateType", // tp_name
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
PyObject *PyvtkFinitePlaneRepresentation_InteractionStateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkFinitePlaneRepresentation_InteractionStateType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkFinitePlaneRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFinitePlaneRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFinitePlaneRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFinitePlaneRepresentation *tempr = vtkFinitePlaneRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFinitePlaneRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFinitePlaneRepresentation::NewInstance());

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
PyvtkFinitePlaneRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFinitePlaneRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFinitePlaneRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GetPolyData(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetV1HandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetV1HandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetV1HandleProperty() :
      op->vtkFinitePlaneRepresentation::GetV1HandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetV2HandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetV2HandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetV2HandleProperty() :
      op->vtkFinitePlaneRepresentation::GetV2HandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkFinitePlaneRepresentation::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPlaneProperty() :
      op->vtkFinitePlaneRepresentation::GetPlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetSelectedPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedPlaneProperty() :
      op->vtkFinitePlaneRepresentation::GetSelectedPlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTubing(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetTubing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetTubing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTubing() :
      op->vtkFinitePlaneRepresentation::GetTubing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_TubingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TubingOn();
    }
    else
    {
      op->vtkFinitePlaneRepresentation::TubingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_TubingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TubingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TubingOff();
    }
    else
    {
      op->vtkFinitePlaneRepresentation::TubingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetDrawPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawPlane(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetDrawPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetDrawPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawPlane() :
      op->vtkFinitePlaneRepresentation::GetDrawPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_DrawPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawPlaneOn();
    }
    else
    {
      op->vtkFinitePlaneRepresentation::DrawPlaneOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_DrawPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawPlaneOff();
    }
    else
    {
      op->vtkFinitePlaneRepresentation::DrawPlaneOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandles(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_HandlesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandlesOn();
    }
    else
    {
      op->vtkFinitePlaneRepresentation::HandlesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_HandlesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandlesOff();
    }
    else
    {
      op->vtkFinitePlaneRepresentation::HandlesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->vtkFinitePlaneRepresentation::PlaceWidget(temp0);
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
PyvtkFinitePlaneRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkFinitePlaneRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->vtkFinitePlaneRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->vtkFinitePlaneRepresentation::StartWidgetInteraction(temp0);
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
PyvtkFinitePlaneRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->vtkFinitePlaneRepresentation::WidgetInteraction(temp0);
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
PyvtkFinitePlaneRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkFinitePlaneRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->vtkFinitePlaneRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkFinitePlaneRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkFinitePlaneRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkFinitePlaneRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->vtkFinitePlaneRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkFinitePlaneRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkFinitePlaneRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFinitePlaneRepresentation_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetOrigin(temp0);
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
PyvtkFinitePlaneRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkFinitePlaneRepresentation_SetOrigin_s1(self, args);
    case 1:
      return PyvtkFinitePlaneRepresentation_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkFinitePlaneRepresentation::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFinitePlaneRepresentation_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetNormal(temp0);
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
PyvtkFinitePlaneRepresentation_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkFinitePlaneRepresentation_SetNormal_s1(self, args);
    case 1:
      return PyvtkFinitePlaneRepresentation_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkFinitePlaneRepresentation::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetV1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetV1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetV1(temp0, temp1);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetV1(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFinitePlaneRepresentation_SetV1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetV1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->SetV1(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetV1(temp0);
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
PyvtkFinitePlaneRepresentation_SetV1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFinitePlaneRepresentation_SetV1_s1(self, args);
    case 1:
      return PyvtkFinitePlaneRepresentation_SetV1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetV1");
  return nullptr;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetV1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetV1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetV1() :
      op->vtkFinitePlaneRepresentation::GetV1());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetV2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetV2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetV2(temp0, temp1);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetV2(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFinitePlaneRepresentation_SetV2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetV2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

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
      op->SetV2(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetV2(temp0);
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
PyvtkFinitePlaneRepresentation_SetV2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFinitePlaneRepresentation_SetV2_s1(self, args);
    case 1:
      return PyvtkFinitePlaneRepresentation_SetV2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetV2");
  return nullptr;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetV2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetV2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetV2() :
      op->vtkFinitePlaneRepresentation::GetV2());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_SetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationState(temp0);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::SetRepresentationState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationState() :
      op->vtkFinitePlaneRepresentation::GetRepresentationState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetNormalProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetNormalProperty() :
      op->vtkFinitePlaneRepresentation::GetNormalProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_GetSelectedNormalProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedNormalProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedNormalProperty() :
      op->vtkFinitePlaneRepresentation::GetSelectedNormalProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_TranslateOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslateOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TranslateOrigin(temp0, temp1);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::TranslateOrigin(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_MovePoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MovePoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MovePoint1(temp0, temp1);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::MovePoint1(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_MovePoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MovePoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MovePoint2(temp0, temp1);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::MovePoint2(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->Push(temp0, temp1);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::Push(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->Rotate(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkFinitePlaneRepresentation::Rotate(temp0, temp1, temp2, temp3, temp4);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFinitePlaneRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFinitePlaneRepresentation *op = static_cast<vtkFinitePlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkFinitePlaneRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFinitePlaneRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkFinitePlaneRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFinitePlaneRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFinitePlaneRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFinitePlaneRepresentation\nC++: static vtkFinitePlaneRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFinitePlaneRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFinitePlaneRepresentation\nC++: vtkFinitePlaneRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFinitePlaneRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFinitePlaneRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetPolyData", PyvtkFinitePlaneRepresentation_GetPolyData, METH_VARARGS,
   "GetPolyData(self, pd:vtkPolyData) -> None\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata that defines the plane. The polydata contains a\nsingle polygon.\n"},
  {"GetV1HandleProperty", PyvtkFinitePlaneRepresentation_GetV1HandleProperty, METH_VARARGS,
   "GetV1HandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetV1HandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles, when selected or normal, can be\nspecified.\n"},
  {"GetV2HandleProperty", PyvtkFinitePlaneRepresentation_GetV2HandleProperty, METH_VARARGS,
   "GetV2HandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetV2HandleProperty()\n\n"},
  {"GetSelectedHandleProperty", PyvtkFinitePlaneRepresentation_GetSelectedHandleProperty, METH_VARARGS,
   "GetSelectedHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedHandleProperty()\n\n"},
  {"GetPlaneProperty", PyvtkFinitePlaneRepresentation_GetPlaneProperty, METH_VARARGS,
   "GetPlaneProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetPlaneProperty()\n\nGet the plane properties. The properties of the plane when\nselected and normal can be set.\n"},
  {"GetSelectedPlaneProperty", PyvtkFinitePlaneRepresentation_GetSelectedPlaneProperty, METH_VARARGS,
   "GetSelectedPlaneProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedPlaneProperty()\n\n"},
  {"SetTubing", PyvtkFinitePlaneRepresentation_SetTubing, METH_VARARGS,
   "SetTubing(self, _arg:bool) -> None\nC++: virtual void SetTubing(bool _arg)\n\nTurn on/off tubing of the wire outline of the plane. The tube\nthickens the line by wrapping with a vtkTubeFilter.\n"},
  {"GetTubing", PyvtkFinitePlaneRepresentation_GetTubing, METH_VARARGS,
   "GetTubing(self) -> bool\nC++: virtual bool GetTubing()\n\n"},
  {"TubingOn", PyvtkFinitePlaneRepresentation_TubingOn, METH_VARARGS,
   "TubingOn(self) -> None\nC++: virtual void TubingOn()\n\n"},
  {"TubingOff", PyvtkFinitePlaneRepresentation_TubingOff, METH_VARARGS,
   "TubingOff(self) -> None\nC++: virtual void TubingOff()\n\n"},
  {"SetDrawPlane", PyvtkFinitePlaneRepresentation_SetDrawPlane, METH_VARARGS,
   "SetDrawPlane(self, plane:bool) -> None\nC++: void SetDrawPlane(bool plane)\n\nEnable/disable the drawing of the plane. In some cases the plane\ninterferes with the object that it is operating on (i.e., the\nplane interferes with the cut surface it produces producing\nz-buffer artifacts.)\n"},
  {"GetDrawPlane", PyvtkFinitePlaneRepresentation_GetDrawPlane, METH_VARARGS,
   "GetDrawPlane(self) -> bool\nC++: virtual bool GetDrawPlane()\n\n"},
  {"DrawPlaneOn", PyvtkFinitePlaneRepresentation_DrawPlaneOn, METH_VARARGS,
   "DrawPlaneOn(self) -> None\nC++: virtual void DrawPlaneOn()\n\n"},
  {"DrawPlaneOff", PyvtkFinitePlaneRepresentation_DrawPlaneOff, METH_VARARGS,
   "DrawPlaneOff(self) -> None\nC++: virtual void DrawPlaneOff()\n\n"},
  {"SetHandles", PyvtkFinitePlaneRepresentation_SetHandles, METH_VARARGS,
   "SetHandles(self, handles:bool) -> None\nC++: void SetHandles(bool handles)\n\nSwitches handles (the spheres) on or off by manipulating the\nunderlying actor visibility.\n"},
  {"HandlesOn", PyvtkFinitePlaneRepresentation_HandlesOn, METH_VARARGS,
   "HandlesOn(self) -> None\nC++: virtual void HandlesOn()\n\n"},
  {"HandlesOff", PyvtkFinitePlaneRepresentation_HandlesOff, METH_VARARGS,
   "HandlesOff(self) -> None\nC++: virtual void HandlesOff()\n\n"},
  {"PlaceWidget", PyvtkFinitePlaneRepresentation_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"BuildRepresentation", PyvtkFinitePlaneRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"ComputeInteractionState", PyvtkFinitePlaneRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"StartWidgetInteraction", PyvtkFinitePlaneRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, e:[float, float]) -> None\nC++: void StartWidgetInteraction(double e[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkFinitePlaneRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, e:[float, float]) -> None\nC++: void WidgetInteraction(double e[2]) override;\n\n"},
  {"GetBounds", PyvtkFinitePlaneRepresentation_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"ReleaseGraphicsResources", PyvtkFinitePlaneRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"RenderOpaqueGeometry", PyvtkFinitePlaneRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkFinitePlaneRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkFinitePlaneRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"SetInteractionState", PyvtkFinitePlaneRepresentation_SetInteractionState, METH_VARARGS,
   "SetInteractionState(self, _arg:int) -> None\nC++: virtual void SetInteractionState(int _arg)\n\n"},
  {"GetInteractionStateMinValue", PyvtkFinitePlaneRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   "GetInteractionStateMinValue(self) -> int\nC++: virtual int GetInteractionStateMinValue()\n\n"},
  {"GetInteractionStateMaxValue", PyvtkFinitePlaneRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   "GetInteractionStateMaxValue(self) -> int\nC++: virtual int GetInteractionStateMaxValue()\n\n"},
  {"SetOrigin", PyvtkFinitePlaneRepresentation_SetOrigin, METH_VARARGS,
   "SetOrigin(self, x:float, y:float, z:float) -> None\nC++: void SetOrigin(double x, double y, double z)\nSetOrigin(self, x:[float, float, float]) -> None\nC++: void SetOrigin(double x[3])\n\nSet/Get the origin of the plane.\n"},
  {"GetOrigin", PyvtkFinitePlaneRepresentation_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetNormal", PyvtkFinitePlaneRepresentation_SetNormal, METH_VARARGS,
   "SetNormal(self, x:float, y:float, z:float) -> None\nC++: void SetNormal(double x, double y, double z)\nSetNormal(self, n:[float, float, float]) -> None\nC++: void SetNormal(double n[3])\n\nSet/Get the normal to the plane.\n"},
  {"GetNormal", PyvtkFinitePlaneRepresentation_GetNormal, METH_VARARGS,
   "GetNormal(self) -> (float, float, float)\nC++: virtual double *GetNormal()\n\n"},
  {"SetV1", PyvtkFinitePlaneRepresentation_SetV1, METH_VARARGS,
   "SetV1(self, x:float, y:float) -> None\nC++: void SetV1(double x, double y)\nSetV1(self, x:[float, float]) -> None\nC++: void SetV1(double x[2])\n\nSet/Get the v1 vector of the plane.\n"},
  {"GetV1", PyvtkFinitePlaneRepresentation_GetV1, METH_VARARGS,
   "GetV1(self) -> (float, float)\nC++: virtual double *GetV1()\n\n"},
  {"SetV2", PyvtkFinitePlaneRepresentation_SetV2, METH_VARARGS,
   "SetV2(self, x:float, y:float) -> None\nC++: void SetV2(double x, double y)\nSetV2(self, x:[float, float]) -> None\nC++: void SetV2(double x[2])\n\nSet/Get the v2 vector of the plane.\n"},
  {"GetV2", PyvtkFinitePlaneRepresentation_GetV2, METH_VARARGS,
   "GetV2(self) -> (float, float)\nC++: virtual double *GetV2()\n\n"},
  {"SetRepresentationState", PyvtkFinitePlaneRepresentation_SetRepresentationState, METH_VARARGS,
   "SetRepresentationState(self, __a:int) -> None\nC++: virtual void SetRepresentationState(int)\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {"GetRepresentationState", PyvtkFinitePlaneRepresentation_GetRepresentationState, METH_VARARGS,
   "GetRepresentationState(self) -> int\nC++: virtual int GetRepresentationState()\n\n"},
  {"GetNormalProperty", PyvtkFinitePlaneRepresentation_GetNormalProperty, METH_VARARGS,
   "GetNormalProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetNormalProperty()\n\nGet the properties on the normal (line and cone).\n"},
  {"GetSelectedNormalProperty", PyvtkFinitePlaneRepresentation_GetSelectedNormalProperty, METH_VARARGS,
   "GetSelectedNormalProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedNormalProperty()\n\n"},
  {"TranslateOrigin", PyvtkFinitePlaneRepresentation_TranslateOrigin, METH_VARARGS,
   "TranslateOrigin(self, p1:[float, ...], p2:[float, ...]) -> None\nC++: void TranslateOrigin(double *p1, double *p2)\n\n"},
  {"MovePoint1", PyvtkFinitePlaneRepresentation_MovePoint1, METH_VARARGS,
   "MovePoint1(self, p1:[float, ...], p2:[float, ...]) -> None\nC++: void MovePoint1(double *p1, double *p2)\n\n"},
  {"MovePoint2", PyvtkFinitePlaneRepresentation_MovePoint2, METH_VARARGS,
   "MovePoint2(self, p1:[float, ...], p2:[float, ...]) -> None\nC++: void MovePoint2(double *p1, double *p2)\n\n"},
  {"Push", PyvtkFinitePlaneRepresentation_Push, METH_VARARGS,
   "Push(self, p1:[float, ...], p2:[float, ...]) -> None\nC++: void Push(double *p1, double *p2)\n\n"},
  {"Rotate", PyvtkFinitePlaneRepresentation_Rotate, METH_VARARGS,
   "Rotate(self, X:int, Y:int, p1:[float, ...], p2:[float, ...],\n    vpn:[float, ...]) -> None\nC++: void Rotate(int X, int Y, double *p1, double *p2,\n    double *vpn)\n\n"},
  {"RegisterPickers", PyvtkFinitePlaneRepresentation_RegisterPickers, METH_VARARGS,
   "RegisterPickers(self) -> None\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFinitePlaneRepresentation_Doc =
  "vtkFinitePlaneRepresentation - represent the vtkFinitePlaneWidget.\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is a concrete representation for the vtkFinitePlaneWidget.\n"
  "It represents a plane with three handles: one on two faces, plus a\n"
  "center handle. Through interaction with the widget, the plane\n"
  "representation can be arbitrarily positioned and modified in the 3D\n"
  "space.\n\n"
  "To use this representation, you normally use the PlaceWidget() method\n"
  "to position the widget at a specified region in space.\n\n"
  "@sa\n"
  "vtkFinitePlaneWidget vtkImplicitPlaneWidget2\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFinitePlaneRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkFinitePlaneRepresentation", // tp_name
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
  PyvtkFinitePlaneRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFinitePlaneRepresentation_StaticNew()
{
  return vtkFinitePlaneRepresentation::New();
}

PyObject *PyvtkFinitePlaneRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFinitePlaneRepresentation_Type, PyvtkFinitePlaneRepresentation_Methods,
    "vtkFinitePlaneRepresentation",
 &PyvtkFinitePlaneRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkFinitePlaneRepresentation_InteractionStateType_Type);
  PyVTKEnum_Add(&PyvtkFinitePlaneRepresentation_InteractionStateType_Type, "vtkFinitePlaneRepresentation.InteractionStateType");

  o = (PyObject *)&PyvtkFinitePlaneRepresentation_InteractionStateType_Type;
  if (PyDict_SetItemString(d, "InteractionStateType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkFinitePlaneRepresentation::InteractionStateType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "Outside", vtkFinitePlaneRepresentation::Outside },
        { "MoveOrigin", vtkFinitePlaneRepresentation::MoveOrigin },
        { "ModifyV1", vtkFinitePlaneRepresentation::ModifyV1 },
        { "ModifyV2", vtkFinitePlaneRepresentation::ModifyV2 },
        { "Moving", vtkFinitePlaneRepresentation::Moving },
        { "Rotating", vtkFinitePlaneRepresentation::Rotating },
        { "Pushing", vtkFinitePlaneRepresentation::Pushing },
      };

    o = PyvtkFinitePlaneRepresentation_InteractionStateType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFinitePlaneRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFinitePlaneRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFinitePlaneRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

