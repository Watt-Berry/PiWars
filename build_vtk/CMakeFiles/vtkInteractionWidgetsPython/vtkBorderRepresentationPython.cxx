// python wrapper for vtkBorderRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBorderRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBorderRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkBorderRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBorderRepresentation_InteractionStateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkBorderRepresentation.InteractionStateType", // tp_name
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
PyObject *PyvtkBorderRepresentation_InteractionStateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkBorderRepresentation_InteractionStateType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkBorderRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBorderRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBorderRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBorderRepresentation *tempr = vtkBorderRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBorderRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBorderRepresentation::NewInstance());

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
PyvtkBorderRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBorderRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBorderRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetPositionCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPositionCoordinate() :
      op->vtkBorderRepresentation::GetPositionCoordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetPosition(temp0);
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
PyvtkBorderRepresentation_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1);
    }
    else
    {
      op->vtkBorderRepresentation::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBorderRepresentation_SetPosition_s1(self, args);
    case 2:
      return PyvtkBorderRepresentation_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkBorderRepresentation_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkBorderRepresentation::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetPosition2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPosition2Coordinate() :
      op->vtkBorderRepresentation::GetPosition2Coordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetPosition2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->SetPosition2(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetPosition2(temp0);
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
PyvtkBorderRepresentation_SetPosition2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition2(temp0, temp1);
    }
    else
    {
      op->vtkBorderRepresentation::SetPosition2(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetPosition2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBorderRepresentation_SetPosition2_s1(self, args);
    case 2:
      return PyvtkBorderRepresentation_SetPosition2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition2");
  return nullptr;
}


static PyObject *
PyvtkBorderRepresentation_GetPosition2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition2() :
      op->vtkBorderRepresentation::GetPosition2());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowBorder(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetShowBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowBorderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBorderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowBorderMinValue() :
      op->vtkBorderRepresentation::GetShowBorderMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowBorderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBorderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowBorderMaxValue() :
      op->vtkBorderRepresentation::GetShowBorderMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowBorder() :
      op->vtkBorderRepresentation::GetShowBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowBorderToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBorderToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShowBorderToOff();
    }
    else
    {
      op->vtkBorderRepresentation::SetShowBorderToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowBorderToOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBorderToOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShowBorderToOn();
    }
    else
    {
      op->vtkBorderRepresentation::SetShowBorderToOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowBorderToActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowBorderToActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShowBorderToActive();
    }
    else
    {
      op->vtkBorderRepresentation::SetShowBorderToActive();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowVerticalBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowVerticalBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowVerticalBorder(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetShowVerticalBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowVerticalBorderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowVerticalBorderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowVerticalBorderMinValue() :
      op->vtkBorderRepresentation::GetShowVerticalBorderMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowVerticalBorderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowVerticalBorderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowVerticalBorderMaxValue() :
      op->vtkBorderRepresentation::GetShowVerticalBorderMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowVerticalBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowVerticalBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowVerticalBorder() :
      op->vtkBorderRepresentation::GetShowVerticalBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowHorizontalBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowHorizontalBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowHorizontalBorder(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetShowHorizontalBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowHorizontalBorderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowHorizontalBorderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowHorizontalBorderMinValue() :
      op->vtkBorderRepresentation::GetShowHorizontalBorderMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowHorizontalBorderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowHorizontalBorderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowHorizontalBorderMaxValue() :
      op->vtkBorderRepresentation::GetShowHorizontalBorderMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowHorizontalBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowHorizontalBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowHorizontalBorder() :
      op->vtkBorderRepresentation::GetShowHorizontalBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetBorderProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetBorderProperty() :
      op->vtkBorderRepresentation::GetBorderProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowPolygon(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetShowPolygon(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowPolygon() :
      op->vtkBorderRepresentation::GetShowPolygon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowPolygonToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowPolygonToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShowPolygonToOff();
    }
    else
    {
      op->vtkBorderRepresentation::SetShowPolygonToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowPolygonToOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowPolygonToOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShowPolygonToOn();
    }
    else
    {
      op->vtkBorderRepresentation::SetShowPolygonToOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowPolygonToActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowPolygonToActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShowPolygonToActive();
    }
    else
    {
      op->vtkBorderRepresentation::SetShowPolygonToActive();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetShowPolygonBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowPolygonBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowPolygonBackground(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetShowPolygonBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowPolygonBackgroundMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowPolygonBackgroundMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowPolygonBackgroundMinValue() :
      op->vtkBorderRepresentation::GetShowPolygonBackgroundMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowPolygonBackgroundMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowPolygonBackgroundMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowPolygonBackgroundMaxValue() :
      op->vtkBorderRepresentation::GetShowPolygonBackgroundMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetShowPolygonBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowPolygonBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowPolygonBackground() :
      op->vtkBorderRepresentation::GetShowPolygonBackground());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetEnforceNormalizedViewportBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnforceNormalizedViewportBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnforceNormalizedViewportBounds(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetEnforceNormalizedViewportBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetEnforceNormalizedViewportBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnforceNormalizedViewportBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnforceNormalizedViewportBounds() :
      op->vtkBorderRepresentation::GetEnforceNormalizedViewportBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_EnforceNormalizedViewportBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnforceNormalizedViewportBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnforceNormalizedViewportBoundsOn();
    }
    else
    {
      op->vtkBorderRepresentation::EnforceNormalizedViewportBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_EnforceNormalizedViewportBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnforceNormalizedViewportBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnforceNormalizedViewportBoundsOff();
    }
    else
    {
      op->vtkBorderRepresentation::EnforceNormalizedViewportBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetProportionalResize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProportionalResize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProportionalResize(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetProportionalResize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetProportionalResize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProportionalResize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProportionalResize() :
      op->vtkBorderRepresentation::GetProportionalResize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_ProportionalResizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProportionalResizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProportionalResizeOn();
    }
    else
    {
      op->vtkBorderRepresentation::ProportionalResizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_ProportionalResizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProportionalResizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProportionalResizeOff();
    }
    else
    {
      op->vtkBorderRepresentation::ProportionalResizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetMinimumNormalizedViewportSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumNormalizedViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMinimumNormalizedViewportSize(temp0, temp1);
    }
    else
    {
      op->vtkBorderRepresentation::SetMinimumNormalizedViewportSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetMinimumNormalizedViewportSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumNormalizedViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumNormalizedViewportSize(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetMinimumNormalizedViewportSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetMinimumNormalizedViewportSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBorderRepresentation_SetMinimumNormalizedViewportSize_s1(self, args);
    case 1:
      return PyvtkBorderRepresentation_SetMinimumNormalizedViewportSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMinimumNormalizedViewportSize");
  return nullptr;
}


static PyObject *
PyvtkBorderRepresentation_GetMinimumNormalizedViewportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumNormalizedViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMinimumNormalizedViewportSize() :
      op->vtkBorderRepresentation::GetMinimumNormalizedViewportSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetMinimumSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMinimumSize(temp0, temp1);
    }
    else
    {
      op->vtkBorderRepresentation::SetMinimumSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetMinimumSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumSize(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetMinimumSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetMinimumSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBorderRepresentation_SetMinimumSize_s1(self, args);
    case 1:
      return PyvtkBorderRepresentation_SetMinimumSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMinimumSize");
  return nullptr;
}


static PyObject *
PyvtkBorderRepresentation_GetMinimumSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetMinimumSize() :
      op->vtkBorderRepresentation::GetMinimumSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetMaximumSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMaximumSize(temp0, temp1);
    }
    else
    {
      op->vtkBorderRepresentation::SetMaximumSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetMaximumSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumSize(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetMaximumSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetMaximumSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBorderRepresentation_SetMaximumSize_s1(self, args);
    case 1:
      return PyvtkBorderRepresentation_SetMaximumSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaximumSize");
  return nullptr;
}


static PyObject *
PyvtkBorderRepresentation_GetMaximumSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetMaximumSize() :
      op->vtkBorderRepresentation::GetMaximumSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkBorderRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkBorderRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkBorderRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetSelectionPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSelectionPoint() :
      op->vtkBorderRepresentation::GetSelectionPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetMoving(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMoving");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMoving(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetMoving(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetMoving(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMoving");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMoving() :
      op->vtkBorderRepresentation::GetMoving());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_MovingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MovingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MovingOn();
    }
    else
    {
      op->vtkBorderRepresentation::MovingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_MovingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MovingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MovingOff();
    }
    else
    {
      op->vtkBorderRepresentation::MovingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetWindowLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindowLocation(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetWindowLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetWindowLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWindowLocation() :
      op->vtkBorderRepresentation::GetWindowLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_UpdateWindowLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWindowLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateWindowLocation();
    }
    else
    {
      op->vtkBorderRepresentation::UpdateWindowLocation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMinValue() :
      op->vtkBorderRepresentation::GetInteractionStateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionStateMaxValue() :
      op->vtkBorderRepresentation::GetInteractionStateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkBorderRepresentation::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkBorderRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::StartWidgetInteraction(temp0);
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
PyvtkBorderRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::WidgetInteraction(temp0);
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
PyvtkBorderRepresentation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->GetSize(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::GetSize(temp0);
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
PyvtkBorderRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->vtkBorderRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkBorderRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkBorderRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkBorderRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkBorderRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetBWActorDisplayOverlay(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetBWActorDisplayOverlay."
    " (" "SetBWActorDisplayOverlay is deprecated. Use SetBWActorDisplayOverlayEdges or SetBWActorDisplayOverlayPolygon instead." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetBWActorDisplayOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBWActorDisplayOverlay(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetBWActorDisplayOverlay(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetBWActorDisplayOverlayEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBWActorDisplayOverlayEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBWActorDisplayOverlayEdges(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetBWActorDisplayOverlayEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetBWActorDisplayOverlayPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBWActorDisplayOverlayPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBWActorDisplayOverlayPolygon(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetBWActorDisplayOverlayPolygon(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetBorderColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->SetBorderColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBorderRepresentation::SetBorderColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetBorderColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBorderColor(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetBorderColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetBorderColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBorderRepresentation_SetBorderColor_s1(self, args);
    case 1:
      return PyvtkBorderRepresentation_SetBorderColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBorderColor");
  return nullptr;
}


static PyObject *
PyvtkBorderRepresentation_GetBorderColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBorderColor() :
      op->vtkBorderRepresentation::GetBorderColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetBorderThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderThickness(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetBorderThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetBorderThicknessMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderThicknessMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetBorderThicknessMinValue() :
      op->vtkBorderRepresentation::GetBorderThicknessMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetBorderThicknessMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderThicknessMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetBorderThicknessMaxValue() :
      op->vtkBorderRepresentation::GetBorderThicknessMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetBorderThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetBorderThickness() :
      op->vtkBorderRepresentation::GetBorderThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetCornerRadiusStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerRadiusStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCornerRadiusStrength(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetCornerRadiusStrength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetCornerRadiusStrengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerRadiusStrengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerRadiusStrengthMinValue() :
      op->vtkBorderRepresentation::GetCornerRadiusStrengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetCornerRadiusStrengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerRadiusStrengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerRadiusStrengthMaxValue() :
      op->vtkBorderRepresentation::GetCornerRadiusStrengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetCornerRadiusStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerRadiusStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerRadiusStrength() :
      op->vtkBorderRepresentation::GetCornerRadiusStrength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetCornerResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCornerResolution(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetCornerResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetCornerResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCornerResolutionMinValue() :
      op->vtkBorderRepresentation::GetCornerResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetCornerResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCornerResolutionMaxValue() :
      op->vtkBorderRepresentation::GetCornerResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetCornerResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCornerResolution() :
      op->vtkBorderRepresentation::GetCornerResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetPolygonColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolygonColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->SetPolygonColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBorderRepresentation::SetPolygonColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetPolygonColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolygonColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPolygonColor(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetPolygonColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetPolygonColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBorderRepresentation_SetPolygonColor_s1(self, args);
    case 1:
      return PyvtkBorderRepresentation_SetPolygonColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPolygonColor");
  return nullptr;
}


static PyObject *
PyvtkBorderRepresentation_GetPolygonColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPolygonColor() :
      op->vtkBorderRepresentation::GetPolygonColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetPolygonOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolygonOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolygonOpacity(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetPolygonOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetPolygonOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPolygonOpacityMinValue() :
      op->vtkBorderRepresentation::GetPolygonOpacityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetPolygonOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPolygonOpacityMaxValue() :
      op->vtkBorderRepresentation::GetPolygonOpacityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_GetPolygonOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPolygonOpacity() :
      op->vtkBorderRepresentation::GetPolygonOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderRepresentation_SetPolygonRGBA_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolygonRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->SetPolygonRGBA(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::SetPolygonRGBA(temp0);
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
PyvtkBorderRepresentation_SetPolygonRGBA_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolygonRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->SetPolygonRGBA(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBorderRepresentation::SetPolygonRGBA(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_SetPolygonRGBA(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBorderRepresentation_SetPolygonRGBA_s1(self, args);
    case 4:
      return PyvtkBorderRepresentation_SetPolygonRGBA_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPolygonRGBA");
  return nullptr;
}


static PyObject *
PyvtkBorderRepresentation_GetPolygonRGBA_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->GetPolygonRGBA(temp0);
    }
    else
    {
      op->vtkBorderRepresentation::GetPolygonRGBA(temp0);
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
PyvtkBorderRepresentation_GetPolygonRGBA_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderRepresentation *op = static_cast<vtkBorderRepresentation *>(vp);

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
      op->GetPolygonRGBA(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBorderRepresentation::GetPolygonRGBA(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBorderRepresentation_GetPolygonRGBA(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBorderRepresentation_GetPolygonRGBA_s1(self, args);
    case 4:
      return PyvtkBorderRepresentation_GetPolygonRGBA_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPolygonRGBA");
  return nullptr;
}

static PyMethodDef PyvtkBorderRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkBorderRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBorderRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBorderRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBorderRepresentation\nC++: static vtkBorderRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBorderRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBorderRepresentation\nC++: vtkBorderRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBorderRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBorderRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetPositionCoordinate", PyvtkBorderRepresentation_GetPositionCoordinate, METH_VARARGS,
   "GetPositionCoordinate(self) -> vtkCoordinate\nC++: virtual vtkCoordinate *GetPositionCoordinate()\n\nSpecify opposite corners of the box defining the boundary of the\nwidget. By default, these coordinates are in the normalized\nviewport coordinate system, with Position the lower left of the\noutline, and Position2 relative to Position. Note that using\nthese methods are affected by the ProportionalResize flag. That\nis, if the aspect ratio of the representation is to be preserved\n(e.g., ProportionalResize is on), then the rectangle\n(Position,Position2) is a bounding rectangle.\n"},
  {"SetPosition", PyvtkBorderRepresentation_SetPosition, METH_VARARGS,
   "SetPosition(self, x:[float, float]) -> None\nC++: virtual void SetPosition(double x[2])\nSetPosition(self, x:float, y:float) -> None\nC++: virtual void SetPosition(double x, double y)\n\n"},
  {"GetPosition", PyvtkBorderRepresentation_GetPosition, METH_VARARGS,
   "GetPosition(self) -> (float, float)\nC++: virtual double *GetPosition()\n\n"},
  {"GetPosition2Coordinate", PyvtkBorderRepresentation_GetPosition2Coordinate, METH_VARARGS,
   "GetPosition2Coordinate(self) -> vtkCoordinate\nC++: virtual vtkCoordinate *GetPosition2Coordinate()\n\n"},
  {"SetPosition2", PyvtkBorderRepresentation_SetPosition2, METH_VARARGS,
   "SetPosition2(self, x:[float, float]) -> None\nC++: virtual void SetPosition2(double x[2])\nSetPosition2(self, x:float, y:float) -> None\nC++: virtual void SetPosition2(double x, double y)\n\n"},
  {"GetPosition2", PyvtkBorderRepresentation_GetPosition2, METH_VARARGS,
   "GetPosition2(self) -> (float, float)\nC++: virtual double *GetPosition2()\n\n"},
  {"SetShowBorder", PyvtkBorderRepresentation_SetShowBorder, METH_VARARGS,
   "SetShowBorder(self, border:int) -> None\nC++: virtual void SetShowBorder(int border)\n\nSpecify when and if the border should appear. If ShowBorder is\n\"on\", then the border will always appear. If ShowBorder is \"off\"\nthen the border will never appear.  If ShowBorder is \"active\"\nthen the border will appear when the mouse pointer enters the\nregion bounded by the border widget. This method is provided as\nconveniency to set both horizontal and vertical borders, and the\npolygon background. BORDER_ON by default. See Also:\nSetShowHorizontalBorder(), SetShowVerticalBorder(),\nSetShowPolygon()\n"},
  {"GetShowBorderMinValue", PyvtkBorderRepresentation_GetShowBorderMinValue, METH_VARARGS,
   "GetShowBorderMinValue(self) -> int\nC++: virtual int GetShowBorderMinValue()\n\n"},
  {"GetShowBorderMaxValue", PyvtkBorderRepresentation_GetShowBorderMaxValue, METH_VARARGS,
   "GetShowBorderMaxValue(self) -> int\nC++: virtual int GetShowBorderMaxValue()\n\n"},
  {"GetShowBorder", PyvtkBorderRepresentation_GetShowBorder, METH_VARARGS,
   "GetShowBorder(self) -> int\nC++: virtual int GetShowBorder()\n\n"},
  {"SetShowBorderToOff", PyvtkBorderRepresentation_SetShowBorderToOff, METH_VARARGS,
   "SetShowBorderToOff(self) -> None\nC++: void SetShowBorderToOff()\n\n"},
  {"SetShowBorderToOn", PyvtkBorderRepresentation_SetShowBorderToOn, METH_VARARGS,
   "SetShowBorderToOn(self) -> None\nC++: void SetShowBorderToOn()\n\n"},
  {"SetShowBorderToActive", PyvtkBorderRepresentation_SetShowBorderToActive, METH_VARARGS,
   "SetShowBorderToActive(self) -> None\nC++: void SetShowBorderToActive()\n\n"},
  {"SetShowVerticalBorder", PyvtkBorderRepresentation_SetShowVerticalBorder, METH_VARARGS,
   "SetShowVerticalBorder(self, _arg:int) -> None\nC++: virtual void SetShowVerticalBorder(int _arg)\n\nSpecify when and if the vertical border should appear. BORDER_ON\nby default. See Also: SetShowBorder(), SetShowHorizontalBorder()\n"},
  {"GetShowVerticalBorderMinValue", PyvtkBorderRepresentation_GetShowVerticalBorderMinValue, METH_VARARGS,
   "GetShowVerticalBorderMinValue(self) -> int\nC++: virtual int GetShowVerticalBorderMinValue()\n\n"},
  {"GetShowVerticalBorderMaxValue", PyvtkBorderRepresentation_GetShowVerticalBorderMaxValue, METH_VARARGS,
   "GetShowVerticalBorderMaxValue(self) -> int\nC++: virtual int GetShowVerticalBorderMaxValue()\n\n"},
  {"GetShowVerticalBorder", PyvtkBorderRepresentation_GetShowVerticalBorder, METH_VARARGS,
   "GetShowVerticalBorder(self) -> int\nC++: virtual int GetShowVerticalBorder()\n\n"},
  {"SetShowHorizontalBorder", PyvtkBorderRepresentation_SetShowHorizontalBorder, METH_VARARGS,
   "SetShowHorizontalBorder(self, _arg:int) -> None\nC++: virtual void SetShowHorizontalBorder(int _arg)\n\nSpecify when and if the horizontal border should appear.\nBORDER_ON by default. See Also: SetShowBorder(),\nSetShowVerticalBorder()\n"},
  {"GetShowHorizontalBorderMinValue", PyvtkBorderRepresentation_GetShowHorizontalBorderMinValue, METH_VARARGS,
   "GetShowHorizontalBorderMinValue(self) -> int\nC++: virtual int GetShowHorizontalBorderMinValue()\n\n"},
  {"GetShowHorizontalBorderMaxValue", PyvtkBorderRepresentation_GetShowHorizontalBorderMaxValue, METH_VARARGS,
   "GetShowHorizontalBorderMaxValue(self) -> int\nC++: virtual int GetShowHorizontalBorderMaxValue()\n\n"},
  {"GetShowHorizontalBorder", PyvtkBorderRepresentation_GetShowHorizontalBorder, METH_VARARGS,
   "GetShowHorizontalBorder(self) -> int\nC++: virtual int GetShowHorizontalBorder()\n\n"},
  {"GetBorderProperty", PyvtkBorderRepresentation_GetBorderProperty, METH_VARARGS,
   "GetBorderProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetBorderProperty()\n\nSpecify the properties of the border.\n"},
  {"SetShowPolygon", PyvtkBorderRepresentation_SetShowPolygon, METH_VARARGS,
   "SetShowPolygon(self, border:int) -> None\nC++: virtual void SetShowPolygon(int border)\n\nSpecify when and if the border's polygon background should\nappear. BORDER_ON by default. See Also: SetShowBorder()\n"},
  {"GetShowPolygon", PyvtkBorderRepresentation_GetShowPolygon, METH_VARARGS,
   "GetShowPolygon(self) -> int\nC++: virtual int GetShowPolygon()\n\n"},
  {"SetShowPolygonToOff", PyvtkBorderRepresentation_SetShowPolygonToOff, METH_VARARGS,
   "SetShowPolygonToOff(self) -> None\nC++: void SetShowPolygonToOff()\n\n"},
  {"SetShowPolygonToOn", PyvtkBorderRepresentation_SetShowPolygonToOn, METH_VARARGS,
   "SetShowPolygonToOn(self) -> None\nC++: void SetShowPolygonToOn()\n\n"},
  {"SetShowPolygonToActive", PyvtkBorderRepresentation_SetShowPolygonToActive, METH_VARARGS,
   "SetShowPolygonToActive(self) -> None\nC++: void SetShowPolygonToActive()\n\n"},
  {"SetShowPolygonBackground", PyvtkBorderRepresentation_SetShowPolygonBackground, METH_VARARGS,
   "SetShowPolygonBackground(self, _arg:int) -> None\nC++: virtual void SetShowPolygonBackground(int _arg)\n\nSpecify when and if the border polygon background should appear.\nBORDER_ON by default. See Also: SetShowBorder(), SetShowPolygon()\n"},
  {"GetShowPolygonBackgroundMinValue", PyvtkBorderRepresentation_GetShowPolygonBackgroundMinValue, METH_VARARGS,
   "GetShowPolygonBackgroundMinValue(self) -> int\nC++: virtual int GetShowPolygonBackgroundMinValue()\n\n"},
  {"GetShowPolygonBackgroundMaxValue", PyvtkBorderRepresentation_GetShowPolygonBackgroundMaxValue, METH_VARARGS,
   "GetShowPolygonBackgroundMaxValue(self) -> int\nC++: virtual int GetShowPolygonBackgroundMaxValue()\n\n"},
  {"GetShowPolygonBackground", PyvtkBorderRepresentation_GetShowPolygonBackground, METH_VARARGS,
   "GetShowPolygonBackground(self) -> int\nC++: virtual int GetShowPolygonBackground()\n\n"},
  {"SetEnforceNormalizedViewportBounds", PyvtkBorderRepresentation_SetEnforceNormalizedViewportBounds, METH_VARARGS,
   "SetEnforceNormalizedViewportBounds(self, _arg:int) -> None\nC++: virtual void SetEnforceNormalizedViewportBounds(\n    vtkTypeBool _arg)\n\nWhether to enforce the minimum normalized viewport size and limit\nthe normalized viewport coordinates to [0.0 -> 1.0]. This keeps\nwidgets from being moved offscreen or being scaled down past\ntheir minimum viewport size.\n\nOff by Default.\n\nNote: ProportionalResize must be off for this function to take\neffect.\n"},
  {"GetEnforceNormalizedViewportBounds", PyvtkBorderRepresentation_GetEnforceNormalizedViewportBounds, METH_VARARGS,
   "GetEnforceNormalizedViewportBounds(self) -> int\nC++: virtual vtkTypeBool GetEnforceNormalizedViewportBounds()\n\n"},
  {"EnforceNormalizedViewportBoundsOn", PyvtkBorderRepresentation_EnforceNormalizedViewportBoundsOn, METH_VARARGS,
   "EnforceNormalizedViewportBoundsOn(self) -> None\nC++: virtual void EnforceNormalizedViewportBoundsOn()\n\n"},
  {"EnforceNormalizedViewportBoundsOff", PyvtkBorderRepresentation_EnforceNormalizedViewportBoundsOff, METH_VARARGS,
   "EnforceNormalizedViewportBoundsOff(self) -> None\nC++: virtual void EnforceNormalizedViewportBoundsOff()\n\n"},
  {"SetProportionalResize", PyvtkBorderRepresentation_SetProportionalResize, METH_VARARGS,
   "SetProportionalResize(self, _arg:int) -> None\nC++: virtual void SetProportionalResize(vtkTypeBool _arg)\n\nIndicate whether resizing operations should keep the x-y\ndirections proportional to one another. Also, if\nProportionalResize is on, then the rectangle (Position,Position2)\nis a bounding rectangle, and the representation will be placed in\nthe rectangle in such a way as to preserve the aspect ratio of\nthe representation.\n\nOff by Default.\n"},
  {"GetProportionalResize", PyvtkBorderRepresentation_GetProportionalResize, METH_VARARGS,
   "GetProportionalResize(self) -> int\nC++: virtual vtkTypeBool GetProportionalResize()\n\n"},
  {"ProportionalResizeOn", PyvtkBorderRepresentation_ProportionalResizeOn, METH_VARARGS,
   "ProportionalResizeOn(self) -> None\nC++: virtual void ProportionalResizeOn()\n\n"},
  {"ProportionalResizeOff", PyvtkBorderRepresentation_ProportionalResizeOff, METH_VARARGS,
   "ProportionalResizeOff(self) -> None\nC++: virtual void ProportionalResizeOff()\n\n"},
  {"SetMinimumNormalizedViewportSize", PyvtkBorderRepresentation_SetMinimumNormalizedViewportSize, METH_VARARGS,
   "SetMinimumNormalizedViewportSize(self, _arg1:float, _arg2:float)\n    -> None\nC++: virtual void SetMinimumNormalizedViewportSize(double _arg1,\n    double _arg2)\nSetMinimumNormalizedViewportSize(self, _arg:(float, float))\n    -> None\nC++: void SetMinimumNormalizedViewportSize(const double _arg[2])\n\nSpecify a minimum and/or maximum size [0.0 -> 1.0] that this\nrepresentation can take. These methods require two values: size\nvalues in the x and y directions, respectively.\n\nDefault is { 0.0, 0.0 }.\n"},
  {"GetMinimumNormalizedViewportSize", PyvtkBorderRepresentation_GetMinimumNormalizedViewportSize, METH_VARARGS,
   "GetMinimumNormalizedViewportSize(self) -> (float, float)\nC++: virtual double *GetMinimumNormalizedViewportSize()\n\n"},
  {"SetMinimumSize", PyvtkBorderRepresentation_SetMinimumSize, METH_VARARGS,
   "SetMinimumSize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetMinimumSize(int _arg1, int _arg2)\nSetMinimumSize(self, _arg:(int, int)) -> None\nC++: void SetMinimumSize(const int _arg[2])\n\nSpecify a minimum and/or maximum size (in pixels) that this\nrepresentation can take. These methods require two values: size\nvalues in the x and y directions, respectively.\n\nDefault is { 1, 1 }.\n"},
  {"GetMinimumSize", PyvtkBorderRepresentation_GetMinimumSize, METH_VARARGS,
   "GetMinimumSize(self) -> (int, int)\nC++: virtual int *GetMinimumSize()\n\n"},
  {"SetMaximumSize", PyvtkBorderRepresentation_SetMaximumSize, METH_VARARGS,
   "SetMaximumSize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetMaximumSize(int _arg1, int _arg2)\nSetMaximumSize(self, _arg:(int, int)) -> None\nC++: void SetMaximumSize(const int _arg[2])\n\n"},
  {"GetMaximumSize", PyvtkBorderRepresentation_GetMaximumSize, METH_VARARGS,
   "GetMaximumSize(self) -> (int, int)\nC++: virtual int *GetMaximumSize()\n\n"},
  {"SetTolerance", PyvtkBorderRepresentation_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:int) -> None\nC++: virtual void SetTolerance(int _arg)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n\nDefault is 3.\n"},
  {"GetToleranceMinValue", PyvtkBorderRepresentation_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> int\nC++: virtual int GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkBorderRepresentation_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> int\nC++: virtual int GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkBorderRepresentation_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> int\nC++: virtual int GetTolerance()\n\n"},
  {"GetSelectionPoint", PyvtkBorderRepresentation_GetSelectionPoint, METH_VARARGS,
   "GetSelectionPoint(self) -> (float, float)\nC++: virtual double *GetSelectionPoint()\n\nAfter a selection event within the region interior to the border;\nthe normalized selection coordinates may be obtained.\n"},
  {"SetMoving", PyvtkBorderRepresentation_SetMoving, METH_VARARGS,
   "SetMoving(self, _arg:int) -> None\nC++: virtual void SetMoving(vtkTypeBool _arg)\n\nThis is a modifier of the interaction state. When set, widget\ninteraction allows the border (and stuff inside of it) to be\ntranslated with mouse motion.\n"},
  {"GetMoving", PyvtkBorderRepresentation_GetMoving, METH_VARARGS,
   "GetMoving(self) -> int\nC++: virtual vtkTypeBool GetMoving()\n\n"},
  {"MovingOn", PyvtkBorderRepresentation_MovingOn, METH_VARARGS,
   "MovingOn(self) -> None\nC++: virtual void MovingOn()\n\n"},
  {"MovingOff", PyvtkBorderRepresentation_MovingOff, METH_VARARGS,
   "MovingOff(self) -> None\nC++: virtual void MovingOff()\n\n"},
  {"SetWindowLocation", PyvtkBorderRepresentation_SetWindowLocation, METH_VARARGS,
   "SetWindowLocation(self, enumLocation:int) -> None\nC++: virtual void SetWindowLocation(int enumLocation)\n\nSet the representation position, by enumeration ( AnyLocation =\n0, LowerLeftCorner, LowerRightCorner, LowerCenter,\nUpperLeftCorner, UpperRightCorner, UpperCenter) related to the\nrender window\n"},
  {"GetWindowLocation", PyvtkBorderRepresentation_GetWindowLocation, METH_VARARGS,
   "GetWindowLocation(self) -> int\nC++: virtual int GetWindowLocation()\n\n"},
  {"UpdateWindowLocation", PyvtkBorderRepresentation_UpdateWindowLocation, METH_VARARGS,
   "UpdateWindowLocation(self) -> None\nC++: virtual void UpdateWindowLocation()\n\nUpdate window location if a window location is set.\n\nThis function was made public for VTK issue #18987. Positioning\nand scaling needs a better API.\n"},
  {"SetInteractionState", PyvtkBorderRepresentation_SetInteractionState, METH_VARARGS,
   "SetInteractionState(self, _arg:int) -> None\nC++: virtual void SetInteractionState(int _arg)\n\n"},
  {"GetInteractionStateMinValue", PyvtkBorderRepresentation_GetInteractionStateMinValue, METH_VARARGS,
   "GetInteractionStateMinValue(self) -> int\nC++: virtual int GetInteractionStateMinValue()\n\n"},
  {"GetInteractionStateMaxValue", PyvtkBorderRepresentation_GetInteractionStateMaxValue, METH_VARARGS,
   "GetInteractionStateMaxValue(self) -> int\nC++: virtual int GetInteractionStateMaxValue()\n\n"},
  {"GetMTime", PyvtkBorderRepresentation_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime of this object. It takes into account MTimes of\nposition coordinates and border's property.\n"},
  {"BuildRepresentation", PyvtkBorderRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nSubclasses should implement these methods. See the superclasses'\ndocumentation for more information.\n"},
  {"StartWidgetInteraction", PyvtkBorderRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkBorderRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void WidgetInteraction(double eventPos[2]) override;\n\n"},
  {"GetSize", PyvtkBorderRepresentation_GetSize, METH_VARARGS,
   "GetSize(self, size:[float, float]) -> None\nC++: virtual void GetSize(double size[2])\n\n"},
  {"ComputeInteractionState", PyvtkBorderRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"GetActors2D", PyvtkBorderRepresentation_GetActors2D, METH_VARARGS,
   "GetActors2D(self, __a:vtkPropCollection) -> None\nC++: void GetActors2D(vtkPropCollection *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkBorderRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOverlay", PyvtkBorderRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, __a:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\n"},
  {"RenderOpaqueGeometry", PyvtkBorderRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkBorderRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkBorderRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"SetBWActorDisplayOverlay", PyvtkBorderRepresentation_SetBWActorDisplayOverlay, METH_VARARGS,
   "SetBWActorDisplayOverlay(self, __a:bool) -> None\nC++: void SetBWActorDisplayOverlay(bool)\n\n"},
  {"SetBWActorDisplayOverlayEdges", PyvtkBorderRepresentation_SetBWActorDisplayOverlayEdges, METH_VARARGS,
   "SetBWActorDisplayOverlayEdges(self, __a:bool) -> None\nC++: void SetBWActorDisplayOverlayEdges(bool)\n\n"},
  {"SetBWActorDisplayOverlayPolygon", PyvtkBorderRepresentation_SetBWActorDisplayOverlayPolygon, METH_VARARGS,
   "SetBWActorDisplayOverlayPolygon(self, __a:bool) -> None\nC++: void SetBWActorDisplayOverlayPolygon(bool)\n\n"},
  {"SetBorderColor", PyvtkBorderRepresentation_SetBorderColor, METH_VARARGS,
   "SetBorderColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetBorderColor(double _arg1, double _arg2,\n    double _arg3)\nSetBorderColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetBorderColor(const double _arg[3])\n\nSet/Get the RGB color of the border. Default is white (1.0, 1.0,\n1.0).\n"},
  {"GetBorderColor", PyvtkBorderRepresentation_GetBorderColor, METH_VARARGS,
   "GetBorderColor(self) -> (float, float, float)\nC++: virtual double *GetBorderColor()\n\n"},
  {"SetBorderThickness", PyvtkBorderRepresentation_SetBorderThickness, METH_VARARGS,
   "SetBorderThickness(self, _arg:float) -> None\nC++: virtual void SetBorderThickness(float _arg)\n\nSet/Get the thickness of the border in screen units. Default is\n1.0.\n"},
  {"GetBorderThicknessMinValue", PyvtkBorderRepresentation_GetBorderThicknessMinValue, METH_VARARGS,
   "GetBorderThicknessMinValue(self) -> float\nC++: virtual float GetBorderThicknessMinValue()\n\n"},
  {"GetBorderThicknessMaxValue", PyvtkBorderRepresentation_GetBorderThicknessMaxValue, METH_VARARGS,
   "GetBorderThicknessMaxValue(self) -> float\nC++: virtual float GetBorderThicknessMaxValue()\n\n"},
  {"GetBorderThickness", PyvtkBorderRepresentation_GetBorderThickness, METH_VARARGS,
   "GetBorderThickness(self) -> float\nC++: virtual float GetBorderThickness()\n\n"},
  {"SetCornerRadiusStrength", PyvtkBorderRepresentation_SetCornerRadiusStrength, METH_VARARGS,
   "SetCornerRadiusStrength(self, _arg:float) -> None\nC++: virtual void SetCornerRadiusStrength(double _arg)\n\nSet/Get the ratio between no radius and maximum radius. In order\nto compute round corners, we create 2 points in each side of the\ncorner. The maximum radius is then the minimum length of the two\nsides of each corners. This maximum radius is scaled by the\nCornerRadiusStrength. Default is 0.0 (no radius).\n"},
  {"GetCornerRadiusStrengthMinValue", PyvtkBorderRepresentation_GetCornerRadiusStrengthMinValue, METH_VARARGS,
   "GetCornerRadiusStrengthMinValue(self) -> float\nC++: virtual double GetCornerRadiusStrengthMinValue()\n\n"},
  {"GetCornerRadiusStrengthMaxValue", PyvtkBorderRepresentation_GetCornerRadiusStrengthMaxValue, METH_VARARGS,
   "GetCornerRadiusStrengthMaxValue(self) -> float\nC++: virtual double GetCornerRadiusStrengthMaxValue()\n\n"},
  {"GetCornerRadiusStrength", PyvtkBorderRepresentation_GetCornerRadiusStrength, METH_VARARGS,
   "GetCornerRadiusStrength(self) -> float\nC++: virtual double GetCornerRadiusStrength()\n\n"},
  {"SetCornerResolution", PyvtkBorderRepresentation_SetCornerResolution, METH_VARARGS,
   "SetCornerResolution(self, _arg:int) -> None\nC++: virtual void SetCornerResolution(int _arg)\n\nSet/Get the number of points that define each round corners. A\nhigh value increase the resolution of the corners. Default is 20.\n"},
  {"GetCornerResolutionMinValue", PyvtkBorderRepresentation_GetCornerResolutionMinValue, METH_VARARGS,
   "GetCornerResolutionMinValue(self) -> int\nC++: virtual int GetCornerResolutionMinValue()\n\n"},
  {"GetCornerResolutionMaxValue", PyvtkBorderRepresentation_GetCornerResolutionMaxValue, METH_VARARGS,
   "GetCornerResolutionMaxValue(self) -> int\nC++: virtual int GetCornerResolutionMaxValue()\n\n"},
  {"GetCornerResolution", PyvtkBorderRepresentation_GetCornerResolution, METH_VARARGS,
   "GetCornerResolution(self) -> int\nC++: virtual int GetCornerResolution()\n\n"},
  {"SetPolygonColor", PyvtkBorderRepresentation_SetPolygonColor, METH_VARARGS,
   "SetPolygonColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetPolygonColor(double _arg1, double _arg2,\n    double _arg3)\nSetPolygonColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetPolygonColor(const double _arg[3])\n\nSet/Get the RGB color of the background polygon. Default is white\n(1.0, 1.0, 1.0).\n"},
  {"GetPolygonColor", PyvtkBorderRepresentation_GetPolygonColor, METH_VARARGS,
   "GetPolygonColor(self) -> (float, float, float)\nC++: virtual double *GetPolygonColor()\n\n"},
  {"SetPolygonOpacity", PyvtkBorderRepresentation_SetPolygonOpacity, METH_VARARGS,
   "SetPolygonOpacity(self, _arg:float) -> None\nC++: virtual void SetPolygonOpacity(double _arg)\n\nSet/Get the opacity of the background color. Default is 0.0.\n"},
  {"GetPolygonOpacityMinValue", PyvtkBorderRepresentation_GetPolygonOpacityMinValue, METH_VARARGS,
   "GetPolygonOpacityMinValue(self) -> float\nC++: virtual double GetPolygonOpacityMinValue()\n\n"},
  {"GetPolygonOpacityMaxValue", PyvtkBorderRepresentation_GetPolygonOpacityMaxValue, METH_VARARGS,
   "GetPolygonOpacityMaxValue(self) -> float\nC++: virtual double GetPolygonOpacityMaxValue()\n\n"},
  {"GetPolygonOpacity", PyvtkBorderRepresentation_GetPolygonOpacity, METH_VARARGS,
   "GetPolygonOpacity(self) -> float\nC++: virtual double GetPolygonOpacity()\n\n"},
  {"SetPolygonRGBA", PyvtkBorderRepresentation_SetPolygonRGBA, METH_VARARGS,
   "SetPolygonRGBA(self, rgba:[float, float, float, float]) -> None\nC++: void SetPolygonRGBA(double rgba[4])\nSetPolygonRGBA(self, r:float, g:float, b:float, a:float) -> None\nC++: void SetPolygonRGBA(double r, double g, double b, double a)\n\nConvenience method to set the background color and the opacity at\nonce\n"},
  {"GetPolygonRGBA", PyvtkBorderRepresentation_GetPolygonRGBA, METH_VARARGS,
   "GetPolygonRGBA(self, rgba:[float, float, float, float]) -> None\nC++: void GetPolygonRGBA(double rgba[4])\nGetPolygonRGBA(self, r:float, g:float, b:float, a:float) -> None\nC++: void GetPolygonRGBA(double &r, double &g, double &b,\n    double &a)\n\nConvenience method to get the background color and the opacity at\nonce\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBorderRepresentation_Doc =
  "vtkBorderRepresentation - represent a vtkBorderWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is used to represent and render a vtBorderWidget. To use\n"
  "this class, you need to specify the two corners of a rectangular\n"
  "region.\n\n"
  "The class is typically subclassed so that specialized representations\n"
  "can be created.  The class defines an API and a default\n"
  "implementation that the vtkBorderRepresentation interacts with to\n"
  "render itself in the scene.\n\n"
  "@warning\n"
  "The separation of the widget event handling (e.g., vtkBorderWidget)\n"
  "from the representation (vtkBorderRepresentation) enables users and\n"
  "developers to create new appearances for the widget. It also\n"
  "facilitates parallel processing, where the client application handles\n"
  "events, and remote representations of the widget are slaves to the\n"
  "client (and do not handle events).\n\n"
  "@sa\n"
  "vtkBorderWidget vtkTextWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBorderRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkBorderRepresentation", // tp_name
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
  PyvtkBorderRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBorderRepresentation_StaticNew()
{
  return vtkBorderRepresentation::New();
}

PyObject *PyvtkBorderRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBorderRepresentation_Type, PyvtkBorderRepresentation_Methods,
    "vtkBorderRepresentation",
 &PyvtkBorderRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkBorderRepresentation_InteractionStateType_Type);
  PyVTKEnum_Add(&PyvtkBorderRepresentation_InteractionStateType_Type, "vtkBorderRepresentation.InteractionStateType");

  o = (PyObject *)&PyvtkBorderRepresentation_InteractionStateType_Type;
  if (PyDict_SetItemString(d, "InteractionStateType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 10; c++)
  {
    static const struct { const char *name; int value; }
      constants[10] = {
        { "BORDER_OFF", vtkBorderRepresentation::BORDER_OFF },
        { "BORDER_ON", vtkBorderRepresentation::BORDER_ON },
        { "BORDER_ACTIVE", vtkBorderRepresentation::BORDER_ACTIVE },
        { "AnyLocation", vtkBorderRepresentation::AnyLocation },
        { "LowerLeftCorner", vtkBorderRepresentation::LowerLeftCorner },
        { "LowerRightCorner", vtkBorderRepresentation::LowerRightCorner },
        { "LowerCenter", vtkBorderRepresentation::LowerCenter },
        { "UpperLeftCorner", vtkBorderRepresentation::UpperLeftCorner },
        { "UpperRightCorner", vtkBorderRepresentation::UpperRightCorner },
        { "UpperCenter", vtkBorderRepresentation::UpperCenter },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 10; c++)
  {
    typedef vtkBorderRepresentation::InteractionStateType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[10] = {
        { "Outside", vtkBorderRepresentation::Outside },
        { "Inside", vtkBorderRepresentation::Inside },
        { "AdjustingP0", vtkBorderRepresentation::AdjustingP0 },
        { "AdjustingP1", vtkBorderRepresentation::AdjustingP1 },
        { "AdjustingP2", vtkBorderRepresentation::AdjustingP2 },
        { "AdjustingP3", vtkBorderRepresentation::AdjustingP3 },
        { "AdjustingE0", vtkBorderRepresentation::AdjustingE0 },
        { "AdjustingE1", vtkBorderRepresentation::AdjustingE1 },
        { "AdjustingE2", vtkBorderRepresentation::AdjustingE2 },
        { "AdjustingE3", vtkBorderRepresentation::AdjustingE3 },
      };

    o = PyvtkBorderRepresentation_InteractionStateType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBorderRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBorderRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBorderRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

