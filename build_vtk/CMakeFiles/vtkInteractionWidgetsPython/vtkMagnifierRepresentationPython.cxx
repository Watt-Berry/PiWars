// python wrapper for vtkMagnifierRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMagnifierRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMagnifierRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkMagnifierRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMagnifierRepresentation_InteractionStateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkMagnifierRepresentation.InteractionStateType", // tp_name
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
PyObject *PyvtkMagnifierRepresentation_InteractionStateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMagnifierRepresentation_InteractionStateType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMagnifierRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMagnifierRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMagnifierRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMagnifierRepresentation *tempr = vtkMagnifierRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMagnifierRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMagnifierRepresentation::NewInstance());

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
PyvtkMagnifierRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMagnifierRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMagnifierRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

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
      op->vtkMagnifierRepresentation::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_SetMagnificationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMagnificationFactor(temp0);
    }
    else
    {
      op->vtkMagnifierRepresentation::SetMagnificationFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_GetMagnificationFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMagnificationFactorMinValue() :
      op->vtkMagnifierRepresentation::GetMagnificationFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_GetMagnificationFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMagnificationFactorMaxValue() :
      op->vtkMagnifierRepresentation::GetMagnificationFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_GetMagnificationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMagnificationFactor() :
      op->vtkMagnifierRepresentation::GetMagnificationFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_AddViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->AddViewProp(temp0);
    }
    else
    {
      op->vtkMagnifierRepresentation::AddViewProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_GetViewProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPropCollection *tempr = (ap.IsBound() ?
      op->GetViewProps() :
      op->vtkMagnifierRepresentation::GetViewProps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_HasViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    int tempr = (ap.IsBound() ?
      op->HasViewProp(temp0) :
      op->vtkMagnifierRepresentation::HasViewProp(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_RemoveViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->RemoveViewProp(temp0);
    }
    else
    {
      op->vtkMagnifierRepresentation::RemoveViewProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_RemoveAllViewProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllViewProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllViewProps();
    }
    else
    {
      op->vtkMagnifierRepresentation::RemoveAllViewProps();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0, temp1);
    }
    else
    {
      op->vtkMagnifierRepresentation::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMagnifierRepresentation_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkMagnifierRepresentation::SetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMagnifierRepresentation_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMagnifierRepresentation_SetSize_s1(self, args);
    case 1:
      return PyvtkMagnifierRepresentation_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}


static PyObject *
PyvtkMagnifierRepresentation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkMagnifierRepresentation::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_SetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorder(temp0);
    }
    else
    {
      op->vtkMagnifierRepresentation::SetBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_GetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBorder() :
      op->vtkMagnifierRepresentation::GetBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_BorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderOn();
    }
    else
    {
      op->vtkMagnifierRepresentation::BorderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_BorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderOff();
    }
    else
    {
      op->vtkMagnifierRepresentation::BorderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_GetBorderProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetBorderProperty() :
      op->vtkMagnifierRepresentation::GetBorderProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkMagnifierRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

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
      op->vtkMagnifierRepresentation::WidgetInteraction(temp0);
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
PyvtkMagnifierRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

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
      op->vtkMagnifierRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkMagnifierRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkMagnifierRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_GetMagnificationRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetMagnificationRenderer() :
      op->vtkMagnifierRepresentation::GetMagnificationRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

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
      op->vtkMagnifierRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkMagnifierRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkMagnifierRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkMagnifierRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkMagnifierRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierRepresentation_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierRepresentation *op = static_cast<vtkMagnifierRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkMagnifierRepresentation::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMagnifierRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkMagnifierRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMagnifierRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMagnifierRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMagnifierRepresentation\nC++: static vtkMagnifierRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMagnifierRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMagnifierRepresentation\nC++: vtkMagnifierRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMagnifierRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMagnifierRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRenderer", PyvtkMagnifierRepresentation_SetRenderer, METH_VARARGS,
   "SetRenderer(self, ren:vtkRenderer) -> None\nC++: void SetRenderer(vtkRenderer *ren) override;\n\nSpecify the renderer viewport in which to place the magnifier.\n"},
  {"SetMagnificationFactor", PyvtkMagnifierRepresentation_SetMagnificationFactor, METH_VARARGS,
   "SetMagnificationFactor(self, _arg:float) -> None\nC++: virtual void SetMagnificationFactor(double _arg)\n\nMethods to control the magnification factor. The magnification\nfactor is relative to the associated renderer's camera. The bump\nmethod enables small increments of magnification to be applied.\nIf the bump is positive, it increases the magnification; if\nnegative it decreases the magnification.\n"},
  {"GetMagnificationFactorMinValue", PyvtkMagnifierRepresentation_GetMagnificationFactorMinValue, METH_VARARGS,
   "GetMagnificationFactorMinValue(self) -> float\nC++: virtual double GetMagnificationFactorMinValue()\n\n"},
  {"GetMagnificationFactorMaxValue", PyvtkMagnifierRepresentation_GetMagnificationFactorMaxValue, METH_VARARGS,
   "GetMagnificationFactorMaxValue(self) -> float\nC++: virtual double GetMagnificationFactorMaxValue()\n\n"},
  {"GetMagnificationFactor", PyvtkMagnifierRepresentation_GetMagnificationFactor, METH_VARARGS,
   "GetMagnificationFactor(self) -> float\nC++: virtual double GetMagnificationFactor()\n\n"},
  {"AddViewProp", PyvtkMagnifierRepresentation_AddViewProp, METH_VARARGS,
   "AddViewProp(self, __a:vtkProp) -> None\nC++: void AddViewProp(vtkProp *)\n\nOptionally specify and maintain the list of view props (e.g.,\nactors, volumes, etc).  By default, if nothing is specified, then\nthe view props from the associated renderer are used. Note, by\nusing view props different than that of the associated renderer,\nit is possible to create special effects and/or remove props from\nwhat is shown in the magnifier.\n"},
  {"GetViewProps", PyvtkMagnifierRepresentation_GetViewProps, METH_VARARGS,
   "GetViewProps(self) -> vtkPropCollection\nC++: vtkPropCollection *GetViewProps()\n\n"},
  {"HasViewProp", PyvtkMagnifierRepresentation_HasViewProp, METH_VARARGS,
   "HasViewProp(self, __a:vtkProp) -> int\nC++: int HasViewProp(vtkProp *)\n\n"},
  {"RemoveViewProp", PyvtkMagnifierRepresentation_RemoveViewProp, METH_VARARGS,
   "RemoveViewProp(self, __a:vtkProp) -> None\nC++: void RemoveViewProp(vtkProp *)\n\n"},
  {"RemoveAllViewProps", PyvtkMagnifierRepresentation_RemoveAllViewProps, METH_VARARGS,
   "RemoveAllViewProps(self) -> None\nC++: void RemoveAllViewProps()\n\n"},
  {"SetSize", PyvtkMagnifierRepresentation_SetSize, METH_VARARGS,
   "SetSize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetSize(int _arg1, int _arg2)\nSetSize(self, _arg:(int, int)) -> None\nC++: void SetSize(const int _arg[2])\n\nSpecify the size of the magnifier viewport in pixels.\n"},
  {"GetSize", PyvtkMagnifierRepresentation_GetSize, METH_VARARGS,
   "GetSize(self) -> (int, int)\nC++: virtual int *GetSize()\n\n"},
  {"SetBorder", PyvtkMagnifierRepresentation_SetBorder, METH_VARARGS,
   "SetBorder(self, _arg:bool) -> None\nC++: virtual void SetBorder(bool _arg)\n\nOptionally specify whether a border should be drawn on the outer\nedge of the magnifier viewport. By default this is off.\n"},
  {"GetBorder", PyvtkMagnifierRepresentation_GetBorder, METH_VARARGS,
   "GetBorder(self) -> bool\nC++: virtual bool GetBorder()\n\n"},
  {"BorderOn", PyvtkMagnifierRepresentation_BorderOn, METH_VARARGS,
   "BorderOn(self) -> None\nC++: virtual void BorderOn()\n\n"},
  {"BorderOff", PyvtkMagnifierRepresentation_BorderOff, METH_VARARGS,
   "BorderOff(self) -> None\nC++: virtual void BorderOff()\n\n"},
  {"GetBorderProperty", PyvtkMagnifierRepresentation_GetBorderProperty, METH_VARARGS,
   "GetBorderProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetBorderProperty()\n\nSpecify the properties of the border.\n"},
  {"BuildRepresentation", PyvtkMagnifierRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nSubclasses should implement these methods. See the superclasses'\ndocumentation for more information.\n"},
  {"WidgetInteraction", PyvtkMagnifierRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void WidgetInteraction(double eventPos[2]) override;\n\n"},
  {"SetInteractionState", PyvtkMagnifierRepresentation_SetInteractionState, METH_VARARGS,
   "SetInteractionState(self, _arg:int) -> None\nC++: virtual void SetInteractionState(int _arg)\n\nSpecify the interaction state of the widget. This is generally\nperformed by the associated vtkMagnifierWidget. (It is necessary\nfor the widget to specify the interaction state in order to\nremove the internal magnification renderer from the render\nwindow).\n"},
  {"GetInteractionStateMinValue", PyvtkMagnifierRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   "GetInteractionStateMinValue(self) -> int\nC++: virtual int GetInteractionStateMinValue()\n\n"},
  {"GetInteractionStateMaxValue", PyvtkMagnifierRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   "GetInteractionStateMaxValue(self) -> int\nC++: virtual int GetInteractionStateMaxValue()\n\n"},
  {"GetMagnificationRenderer", PyvtkMagnifierRepresentation_GetMagnificationRenderer, METH_VARARGS,
   "GetMagnificationRenderer(self) -> vtkRenderer\nC++: vtkRenderer *GetMagnificationRenderer()\n\nProvide access to the magnification renderer. This is so\nproperties like background color can be set.\n"},
  {"ReleaseGraphicsResources", PyvtkMagnifierRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"RenderOverlay", PyvtkMagnifierRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, __a:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\n"},
  {"RenderOpaqueGeometry", PyvtkMagnifierRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkMagnifierRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkMagnifierRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"GetMTime", PyvtkMagnifierRepresentation_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime of this object. It takes into account MTimes of\nthe border's property.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMagnifierRepresentation_Doc =
  "vtkMagnifierRepresentation - represent a vtkBorderWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is used to represent and render a vtkMagnifierWidget.  To\n"
  "use this class, you need to specify a renderer in which to place the\n"
  "magnifier, and a magnification factor. Optionally, you can specify\n"
  "the size of the magnifier window, whether it has a border, and the\n"
  "particular actors to render.\n\n"
  "@sa\n"
  "vtkMagnifierWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMagnifierRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkMagnifierRepresentation", // tp_name
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
  PyvtkMagnifierRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMagnifierRepresentation_StaticNew()
{
  return vtkMagnifierRepresentation::New();
}

PyObject *PyvtkMagnifierRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMagnifierRepresentation_Type, PyvtkMagnifierRepresentation_Methods,
    "vtkMagnifierRepresentation",
 &PyvtkMagnifierRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMagnifierRepresentation_InteractionStateType_Type);
  PyVTKEnum_Add(&PyvtkMagnifierRepresentation_InteractionStateType_Type, "vtkMagnifierRepresentation.InteractionStateType");

  o = (PyObject *)&PyvtkMagnifierRepresentation_InteractionStateType_Type;
  if (PyDict_SetItemString(d, "InteractionStateType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkMagnifierRepresentation::InteractionStateType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "Invisible", vtkMagnifierRepresentation::Invisible },
        { "Visible", vtkMagnifierRepresentation::Visible },
      };

    o = PyvtkMagnifierRepresentation_InteractionStateType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMagnifierRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMagnifierRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMagnifierRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

