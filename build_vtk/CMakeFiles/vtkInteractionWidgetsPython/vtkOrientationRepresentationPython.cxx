// python wrapper for vtkOrientationRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOrientationRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOrientationRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkOrientationRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOrientationRepresentation_Axis_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkOrientationRepresentation.Axis", // tp_name
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
PyObject *PyvtkOrientationRepresentation_Axis_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOrientationRepresentation_Axis_Type, static_cast<int>(val));
}


static PyObject *
PyvtkOrientationRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOrientationRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrientationRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOrientationRepresentation *tempr = vtkOrientationRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOrientationRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrientationRepresentation::NewInstance());

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
PyvtkOrientationRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOrientationRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOrientationRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkOrientationRepresentation::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

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
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkOrientationRepresentation::SetOrientation(temp0);
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
PyvtkOrientationRepresentation_SetOrientationX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationX(temp0);
    }
    else
    {
      op->vtkOrientationRepresentation::SetOrientationX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SetOrientationY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationY(temp0);
    }
    else
    {
      op->vtkOrientationRepresentation::SetOrientationY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SetOrientationZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationZ(temp0);
    }
    else
    {
      op->vtkOrientationRepresentation::SetOrientationZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkOrientationRepresentation::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetOrientationX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOrientationX() :
      op->vtkOrientationRepresentation::GetOrientationX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetOrientationY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOrientationY() :
      op->vtkOrientationRepresentation::GetOrientationY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetOrientationZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOrientationZ() :
      op->vtkOrientationRepresentation::GetOrientationZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  int temp0;
  bool temp1 = false;
  vtkProperty *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOrientationRepresentation::SetProperty(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SetPropertyX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertyX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  bool temp0 = false;
  vtkProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetPropertyX(temp0, temp1);
    }
    else
    {
      op->vtkOrientationRepresentation::SetPropertyX(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SetPropertyY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertyY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  bool temp0 = false;
  vtkProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetPropertyY(temp0, temp1);
    }
    else
    {
      op->vtkOrientationRepresentation::SetPropertyY(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SetPropertyZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertyZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  bool temp0 = false;
  vtkProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetPropertyZ(temp0, temp1);
    }
    else
    {
      op->vtkOrientationRepresentation::SetPropertyZ(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty(temp0, temp1) :
      op->vtkOrientationRepresentation::GetProperty(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetPropertyX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPropertyX(temp0) :
      op->vtkOrientationRepresentation::GetPropertyX(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetPropertyY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPropertyY(temp0) :
      op->vtkOrientationRepresentation::GetPropertyY(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetPropertyZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPropertyZ(temp0) :
      op->vtkOrientationRepresentation::GetPropertyZ(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SetTorusLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTorusLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTorusLength(temp0);
    }
    else
    {
      op->vtkOrientationRepresentation::SetTorusLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetTorusLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTorusLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTorusLengthMinValue() :
      op->vtkOrientationRepresentation::GetTorusLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetTorusLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTorusLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTorusLengthMaxValue() :
      op->vtkOrientationRepresentation::GetTorusLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetTorusLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTorusLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTorusLength() :
      op->vtkOrientationRepresentation::GetTorusLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SetTorusThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTorusThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTorusThickness(temp0);
    }
    else
    {
      op->vtkOrientationRepresentation::SetTorusThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetTorusThicknessMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTorusThicknessMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTorusThicknessMinValue() :
      op->vtkOrientationRepresentation::GetTorusThicknessMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetTorusThicknessMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTorusThicknessMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTorusThicknessMaxValue() :
      op->vtkOrientationRepresentation::GetTorusThicknessMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetTorusThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTorusThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTorusThickness() :
      op->vtkOrientationRepresentation::GetTorusThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SetShowArrows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowArrows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowArrows(temp0);
    }
    else
    {
      op->vtkOrientationRepresentation::SetShowArrows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetShowArrows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowArrows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShowArrows() :
      op->vtkOrientationRepresentation::GetShowArrows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_ShowArrowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowArrowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowArrowsOn();
    }
    else
    {
      op->vtkOrientationRepresentation::ShowArrowsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_ShowArrowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowArrowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowArrowsOff();
    }
    else
    {
      op->vtkOrientationRepresentation::ShowArrowsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SetArrowDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrowDistance(temp0);
    }
    else
    {
      op->vtkOrientationRepresentation::SetArrowDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetArrowDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowDistanceMinValue() :
      op->vtkOrientationRepresentation::GetArrowDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetArrowDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowDistanceMaxValue() :
      op->vtkOrientationRepresentation::GetArrowDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetArrowDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowDistance() :
      op->vtkOrientationRepresentation::GetArrowDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SetArrowLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrowLength(temp0);
    }
    else
    {
      op->vtkOrientationRepresentation::SetArrowLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetArrowLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowLengthMinValue() :
      op->vtkOrientationRepresentation::GetArrowLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetArrowLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowLengthMaxValue() :
      op->vtkOrientationRepresentation::GetArrowLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetArrowLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowLength() :
      op->vtkOrientationRepresentation::GetArrowLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SetArrowTipLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrowTipLength(temp0);
    }
    else
    {
      op->vtkOrientationRepresentation::SetArrowTipLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetArrowTipLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowTipLength() :
      op->vtkOrientationRepresentation::GetArrowTipLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SetArrowTipRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowTipRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrowTipRadius(temp0);
    }
    else
    {
      op->vtkOrientationRepresentation::SetArrowTipRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetArrowTipRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowTipRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowTipRadiusMinValue() :
      op->vtkOrientationRepresentation::GetArrowTipRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetArrowTipRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowTipRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowTipRadiusMaxValue() :
      op->vtkOrientationRepresentation::GetArrowTipRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetArrowTipRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowTipRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowTipRadius() :
      op->vtkOrientationRepresentation::GetArrowTipRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SetArrowShaftRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowShaftRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrowShaftRadius(temp0);
    }
    else
    {
      op->vtkOrientationRepresentation::SetArrowShaftRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetArrowShaftRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowShaftRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowShaftRadiusMinValue() :
      op->vtkOrientationRepresentation::GetArrowShaftRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetArrowShaftRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowShaftRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowShaftRadiusMaxValue() :
      op->vtkOrientationRepresentation::GetArrowShaftRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetArrowShaftRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowShaftRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArrowShaftRadius() :
      op->vtkOrientationRepresentation::GetArrowShaftRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

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
      op->vtkOrientationRepresentation::PlaceWidget(temp0);
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
PyvtkOrientationRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkOrientationRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

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
      op->vtkOrientationRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

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
      op->vtkOrientationRepresentation::StartWidgetInteraction(temp0);
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
PyvtkOrientationRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

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
      op->vtkOrientationRepresentation::WidgetInteraction(temp0);
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
PyvtkOrientationRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkOrientationRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

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
      op->vtkOrientationRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkOrientationRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkOrientationRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkOrientationRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

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
      op->vtkOrientationRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkOrientationRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationRepresentation *op = static_cast<vtkOrientationRepresentation *>(vp);

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
      op->vtkOrientationRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOrientationRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkOrientationRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOrientationRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOrientationRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOrientationRepresentation\nC++: static vtkOrientationRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOrientationRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOrientationRepresentation\nC++: vtkOrientationRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOrientationRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOrientationRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetTransform", PyvtkOrientationRepresentation_GetTransform, METH_VARARGS,
   "GetTransform(self) -> vtkTransform\nC++: vtkTransform *GetTransform()\n\nGet the orientation transform.\n"},
  {"SetOrientation", PyvtkOrientationRepresentation_SetOrientation, METH_VARARGS,
   "SetOrientation(self, values:[float, float, float]) -> None\nC++: virtual void SetOrientation(double values[3])\n\nSet/Get the orientation values. Angles are in interval [-180,\n180] degrees.\n"},
  {"SetOrientationX", PyvtkOrientationRepresentation_SetOrientationX, METH_VARARGS,
   "SetOrientationX(self, value:float) -> None\nC++: virtual void SetOrientationX(double value)\n\n"},
  {"SetOrientationY", PyvtkOrientationRepresentation_SetOrientationY, METH_VARARGS,
   "SetOrientationY(self, value:float) -> None\nC++: virtual void SetOrientationY(double value)\n\n"},
  {"SetOrientationZ", PyvtkOrientationRepresentation_SetOrientationZ, METH_VARARGS,
   "SetOrientationZ(self, value:float) -> None\nC++: virtual void SetOrientationZ(double value)\n\n"},
  {"GetOrientation", PyvtkOrientationRepresentation_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> Pointer\nC++: double *GetOrientation()\n\n"},
  {"GetOrientationX", PyvtkOrientationRepresentation_GetOrientationX, METH_VARARGS,
   "GetOrientationX(self) -> float\nC++: double GetOrientationX()\n\n"},
  {"GetOrientationY", PyvtkOrientationRepresentation_GetOrientationY, METH_VARARGS,
   "GetOrientationY(self) -> float\nC++: double GetOrientationY()\n\n"},
  {"GetOrientationZ", PyvtkOrientationRepresentation_GetOrientationZ, METH_VARARGS,
   "GetOrientationZ(self) -> float\nC++: double GetOrientationZ()\n\n"},
  {"SetProperty", PyvtkOrientationRepresentation_SetProperty, METH_VARARGS,
   "SetProperty(self, axis:int, selected:bool, property:vtkProperty)\n    -> None\nC++: void SetProperty(int axis, bool selected,\n    vtkProperty *property)\n\nSet/Get the properties values. Axis is clamped to axis values. If\nselected is true, applies to selected properties (on hover or\nclick).\n"},
  {"SetPropertyX", PyvtkOrientationRepresentation_SetPropertyX, METH_VARARGS,
   "SetPropertyX(self, selected:bool, property:vtkProperty) -> None\nC++: void SetPropertyX(bool selected, vtkProperty *property)\n\n"},
  {"SetPropertyY", PyvtkOrientationRepresentation_SetPropertyY, METH_VARARGS,
   "SetPropertyY(self, selected:bool, property:vtkProperty) -> None\nC++: void SetPropertyY(bool selected, vtkProperty *property)\n\n"},
  {"SetPropertyZ", PyvtkOrientationRepresentation_SetPropertyZ, METH_VARARGS,
   "SetPropertyZ(self, selected:bool, property:vtkProperty) -> None\nC++: void SetPropertyZ(bool selected, vtkProperty *property)\n\n"},
  {"GetProperty", PyvtkOrientationRepresentation_GetProperty, METH_VARARGS,
   "GetProperty(self, axis:int, selected:bool) -> vtkProperty\nC++: vtkProperty *GetProperty(int axis, bool selected)\n\n"},
  {"GetPropertyX", PyvtkOrientationRepresentation_GetPropertyX, METH_VARARGS,
   "GetPropertyX(self, selected:bool) -> vtkProperty\nC++: vtkProperty *GetPropertyX(bool selected)\n\n"},
  {"GetPropertyY", PyvtkOrientationRepresentation_GetPropertyY, METH_VARARGS,
   "GetPropertyY(self, selected:bool) -> vtkProperty\nC++: vtkProperty *GetPropertyY(bool selected)\n\n"},
  {"GetPropertyZ", PyvtkOrientationRepresentation_GetPropertyZ, METH_VARARGS,
   "GetPropertyZ(self, selected:bool) -> vtkProperty\nC++: vtkProperty *GetPropertyZ(bool selected)\n\n"},
  {"SetTorusLength", PyvtkOrientationRepresentation_SetTorusLength, METH_VARARGS,
   "SetTorusLength(self, _arg:float) -> None\nC++: virtual void SetTorusLength(double _arg)\n\nSet/Get the length (Z scale) of the torus. This is a factor of\nThickness parameter. Clamped between [0.01, 100.0]. Default: 7.5.\n"},
  {"GetTorusLengthMinValue", PyvtkOrientationRepresentation_GetTorusLengthMinValue, METH_VARARGS,
   "GetTorusLengthMinValue(self) -> float\nC++: virtual double GetTorusLengthMinValue()\n\n"},
  {"GetTorusLengthMaxValue", PyvtkOrientationRepresentation_GetTorusLengthMaxValue, METH_VARARGS,
   "GetTorusLengthMaxValue(self) -> float\nC++: virtual double GetTorusLengthMaxValue()\n\n"},
  {"GetTorusLength", PyvtkOrientationRepresentation_GetTorusLength, METH_VARARGS,
   "GetTorusLength(self) -> float\nC++: virtual double GetTorusLength()\n\n"},
  {"SetTorusThickness", PyvtkOrientationRepresentation_SetTorusThickness, METH_VARARGS,
   "SetTorusThickness(self, _arg:float) -> None\nC++: virtual void SetTorusThickness(double _arg)\n\nSet/Get the thickness of the torus. Thickness handles width in\nevery axes. This means Length depends on it. Clamped between\n[0.001, 0.1]. Default: 0.005.\n"},
  {"GetTorusThicknessMinValue", PyvtkOrientationRepresentation_GetTorusThicknessMinValue, METH_VARARGS,
   "GetTorusThicknessMinValue(self) -> float\nC++: virtual double GetTorusThicknessMinValue()\n\n"},
  {"GetTorusThicknessMaxValue", PyvtkOrientationRepresentation_GetTorusThicknessMaxValue, METH_VARARGS,
   "GetTorusThicknessMaxValue(self) -> float\nC++: virtual double GetTorusThicknessMaxValue()\n\n"},
  {"GetTorusThickness", PyvtkOrientationRepresentation_GetTorusThickness, METH_VARARGS,
   "GetTorusThickness(self) -> float\nC++: virtual double GetTorusThickness()\n\n"},
  {"SetShowArrows", PyvtkOrientationRepresentation_SetShowArrows, METH_VARARGS,
   "SetShowArrows(self, _arg:bool) -> None\nC++: virtual void SetShowArrows(bool _arg)\n\nSet/Get whether to show arrows. Default: False.\n"},
  {"GetShowArrows", PyvtkOrientationRepresentation_GetShowArrows, METH_VARARGS,
   "GetShowArrows(self) -> bool\nC++: virtual bool GetShowArrows()\n\n"},
  {"ShowArrowsOn", PyvtkOrientationRepresentation_ShowArrowsOn, METH_VARARGS,
   "ShowArrowsOn(self) -> None\nC++: virtual void ShowArrowsOn()\n\n"},
  {"ShowArrowsOff", PyvtkOrientationRepresentation_ShowArrowsOff, METH_VARARGS,
   "ShowArrowsOff(self) -> None\nC++: virtual void ShowArrowsOff()\n\n"},
  {"SetArrowDistance", PyvtkOrientationRepresentation_SetArrowDistance, METH_VARARGS,
   "SetArrowDistance(self, _arg:float) -> None\nC++: virtual void SetArrowDistance(double _arg)\n\nSet/Get the distance between arrows and torus. Clamped between\n[0.0, 0.5]. Default: 0.0.\n"},
  {"GetArrowDistanceMinValue", PyvtkOrientationRepresentation_GetArrowDistanceMinValue, METH_VARARGS,
   "GetArrowDistanceMinValue(self) -> float\nC++: virtual double GetArrowDistanceMinValue()\n\n"},
  {"GetArrowDistanceMaxValue", PyvtkOrientationRepresentation_GetArrowDistanceMaxValue, METH_VARARGS,
   "GetArrowDistanceMaxValue(self) -> float\nC++: virtual double GetArrowDistanceMaxValue()\n\n"},
  {"GetArrowDistance", PyvtkOrientationRepresentation_GetArrowDistance, METH_VARARGS,
   "GetArrowDistance(self) -> float\nC++: virtual double GetArrowDistance()\n\n"},
  {"SetArrowLength", PyvtkOrientationRepresentation_SetArrowLength, METH_VARARGS,
   "SetArrowLength(self, _arg:float) -> None\nC++: virtual void SetArrowLength(double _arg)\n\nSet/Get the arrow length. This includes shaft+tip. Note that\ndouble arrows are two arrows next to each other. Clamped between\n[0.01, 0.5]. Default: 0.05.\n"},
  {"GetArrowLengthMinValue", PyvtkOrientationRepresentation_GetArrowLengthMinValue, METH_VARARGS,
   "GetArrowLengthMinValue(self) -> float\nC++: virtual double GetArrowLengthMinValue()\n\n"},
  {"GetArrowLengthMaxValue", PyvtkOrientationRepresentation_GetArrowLengthMaxValue, METH_VARARGS,
   "GetArrowLengthMaxValue(self) -> float\nC++: virtual double GetArrowLengthMaxValue()\n\n"},
  {"GetArrowLength", PyvtkOrientationRepresentation_GetArrowLength, METH_VARARGS,
   "GetArrowLength(self) -> float\nC++: virtual double GetArrowLength()\n\n"},
  {"SetArrowTipLength", PyvtkOrientationRepresentation_SetArrowTipLength, METH_VARARGS,
   "SetArrowTipLength(self, _arg:float) -> None\nC++: virtual void SetArrowTipLength(double _arg)\n\nSet/Get the length of the arrow tip. Factor of arrow length,\nequals if set to 1. Note that double arrows are two arrows next\nto each other. Clamped between [0.0, 1.0]. Default: 1.0.\n"},
  {"GetArrowTipLength", PyvtkOrientationRepresentation_GetArrowTipLength, METH_VARARGS,
   "GetArrowTipLength(self) -> float\nC++: virtual double GetArrowTipLength()\n\n"},
  {"SetArrowTipRadius", PyvtkOrientationRepresentation_SetArrowTipRadius, METH_VARARGS,
   "SetArrowTipRadius(self, _arg:float) -> None\nC++: virtual void SetArrowTipRadius(double _arg)\n\nSet/Get the radius of the arrow tip. Clamped between [0.001,\n0.5]. Default: 0.03.\n"},
  {"GetArrowTipRadiusMinValue", PyvtkOrientationRepresentation_GetArrowTipRadiusMinValue, METH_VARARGS,
   "GetArrowTipRadiusMinValue(self) -> float\nC++: virtual double GetArrowTipRadiusMinValue()\n\n"},
  {"GetArrowTipRadiusMaxValue", PyvtkOrientationRepresentation_GetArrowTipRadiusMaxValue, METH_VARARGS,
   "GetArrowTipRadiusMaxValue(self) -> float\nC++: virtual double GetArrowTipRadiusMaxValue()\n\n"},
  {"GetArrowTipRadius", PyvtkOrientationRepresentation_GetArrowTipRadius, METH_VARARGS,
   "GetArrowTipRadius(self) -> float\nC++: virtual double GetArrowTipRadius()\n\n"},
  {"SetArrowShaftRadius", PyvtkOrientationRepresentation_SetArrowShaftRadius, METH_VARARGS,
   "SetArrowShaftRadius(self, _arg:float) -> None\nC++: virtual void SetArrowShaftRadius(double _arg)\n\nSet/Get the radius of the arrow shaft. Clamped between [0.001,\n0.5]. Default: 0.001.\n"},
  {"GetArrowShaftRadiusMinValue", PyvtkOrientationRepresentation_GetArrowShaftRadiusMinValue, METH_VARARGS,
   "GetArrowShaftRadiusMinValue(self) -> float\nC++: virtual double GetArrowShaftRadiusMinValue()\n\n"},
  {"GetArrowShaftRadiusMaxValue", PyvtkOrientationRepresentation_GetArrowShaftRadiusMaxValue, METH_VARARGS,
   "GetArrowShaftRadiusMaxValue(self) -> float\nC++: virtual double GetArrowShaftRadiusMaxValue()\n\n"},
  {"GetArrowShaftRadius", PyvtkOrientationRepresentation_GetArrowShaftRadius, METH_VARARGS,
   "GetArrowShaftRadius(self) -> float\nC++: virtual double GetArrowShaftRadius()\n\n"},
  {"PlaceWidget", PyvtkOrientationRepresentation_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"BuildRepresentation", PyvtkOrientationRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"ComputeInteractionState", PyvtkOrientationRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"StartWidgetInteraction", PyvtkOrientationRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, e:[float, float]) -> None\nC++: void StartWidgetInteraction(double e[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkOrientationRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, e:[float, float]) -> None\nC++: void WidgetInteraction(double e[2]) override;\n\n"},
  {"GetBounds", PyvtkOrientationRepresentation_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"ReleaseGraphicsResources", PyvtkOrientationRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"RenderOpaqueGeometry", PyvtkOrientationRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkOrientationRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkOrientationRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"SetInteractionState", PyvtkOrientationRepresentation_SetInteractionState, METH_VARARGS,
   "SetInteractionState(self, state:int) -> None\nC++: void SetInteractionState(int state)\n\nThe interaction state may be set from a widget (e.g.,\nvtkOrientationWidget) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"RegisterPickers", PyvtkOrientationRepresentation_RegisterPickers, METH_VARARGS,
   "RegisterPickers(self) -> None\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {"GetActors", PyvtkOrientationRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp (i.e., support rendering). GetActors adds all the\ninternal props used by this representation to the supplied\ncollection.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOrientationRepresentation_Doc =
  "vtkOrientationRepresentation - a class defining the representation\nfor the vtkOrientationWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is a concrete representation for the vtkOrientationWidget.\n"
  "The widget is represented by three flat tori of different colors in\n"
  "each base direction (X/Y/Z). Additional arrows can be added to it for\n"
  "each direction in order to simplify grabbing and understanding. Their\n"
  "default look is a diamond shape, but they can be customized to look\n"
  "like real double arrows.\n\n"
  "To use this representation, you can use the PlaceWidget() method to\n"
  "position the widget around an actor and scale it properly. You can\n"
  "retrieve orientation values with component-wise getters or through a\n"
  "vtkTransform.\n\n"
  "@sa\n"
  "vtkOrientationWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOrientationRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkOrientationRepresentation", // tp_name
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
  PyvtkOrientationRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOrientationRepresentation_StaticNew()
{
  return vtkOrientationRepresentation::New();
}

PyObject *PyvtkOrientationRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOrientationRepresentation_Type, PyvtkOrientationRepresentation_Methods,
    "vtkOrientationRepresentation",
 &PyvtkOrientationRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOrientationRepresentation_Axis_Type);
  PyVTKEnum_Add(&PyvtkOrientationRepresentation_Axis_Type, "vtkOrientationRepresentation.Axis");

  o = (PyObject *)&PyvtkOrientationRepresentation_Axis_Type;
  if (PyDict_SetItemString(d, "Axis", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "Outside", vtkOrientationRepresentation::Outside },
        { "RotatingX", vtkOrientationRepresentation::RotatingX },
        { "RotatingY", vtkOrientationRepresentation::RotatingY },
        { "RotatingZ", vtkOrientationRepresentation::RotatingZ },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkOrientationRepresentation::Axis cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "X_AXIS", vtkOrientationRepresentation::X_AXIS },
        { "Y_AXIS", vtkOrientationRepresentation::Y_AXIS },
        { "Z_AXIS", vtkOrientationRepresentation::Z_AXIS },
      };

    o = PyvtkOrientationRepresentation_Axis_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOrientationRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOrientationRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOrientationRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

