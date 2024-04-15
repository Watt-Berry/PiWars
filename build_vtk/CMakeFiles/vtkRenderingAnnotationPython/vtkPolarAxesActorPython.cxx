// python wrapper for vtkPolarAxesActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPolarAxesActor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolarAxesActor(PyObject *dict); }
extern "C" { PyObject *PyvtkPolarAxesActor_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolarAxesActor_ExponentLocation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkPolarAxesActor.ExponentLocation", // tp_name
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
PyObject *PyvtkPolarAxesActor_ExponentLocation_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPolarAxesActor_ExponentLocation_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolarAxesActor_TitleLocation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkPolarAxesActor.TitleLocation", // tp_name
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
PyObject *PyvtkPolarAxesActor_TitleLocation_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPolarAxesActor_TitleLocation_Type, static_cast<int>(val));
}


static PyObject *
PyvtkPolarAxesActor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolarAxesActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolarAxesActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolarAxesActor *tempr = vtkPolarAxesActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolarAxesActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolarAxesActor::NewInstance());

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
PyvtkPolarAxesActor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolarAxesActor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolarAxesActor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkPolarAxesActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkPolarAxesActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkPolarAxesActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPole_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

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
      op->SetPole(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPole(temp0);
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
PyvtkPolarAxesActor_SetPole_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

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
      op->SetPole(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolarAxesActor::SetPole(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_SetPole(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPolarAxesActor_SetPole_s1(self, args);
    case 3:
      return PyvtkPolarAxesActor_SetPole_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPole");
  return nullptr;
}


static PyObject *
PyvtkPolarAxesActor_GetPole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPole() :
      op->vtkPolarAxesActor::GetPole());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLog(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetLog(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLog() :
      op->vtkPolarAxesActor::GetLog());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_LogOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogOn();
    }
    else
    {
      op->vtkPolarAxesActor::LogOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_LogOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogOff();
    }
    else
    {
      op->vtkPolarAxesActor::LogOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetRequestedNumberOfRadialAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedNumberOfRadialAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedNumberOfRadialAxes(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetRequestedNumberOfRadialAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRequestedNumberOfRadialAxesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestedNumberOfRadialAxesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetRequestedNumberOfRadialAxesMinValue() :
      op->vtkPolarAxesActor::GetRequestedNumberOfRadialAxesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRequestedNumberOfRadialAxesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestedNumberOfRadialAxesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetRequestedNumberOfRadialAxesMaxValue() :
      op->vtkPolarAxesActor::GetRequestedNumberOfRadialAxesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRequestedNumberOfRadialAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestedNumberOfRadialAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetRequestedNumberOfRadialAxes() :
      op->vtkPolarAxesActor::GetRequestedNumberOfRadialAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetRequestedNumberOfPolarAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedNumberOfPolarAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedNumberOfPolarAxes(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetRequestedNumberOfPolarAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRequestedNumberOfPolarAxesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestedNumberOfPolarAxesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetRequestedNumberOfPolarAxesMinValue() :
      op->vtkPolarAxesActor::GetRequestedNumberOfPolarAxesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRequestedNumberOfPolarAxesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestedNumberOfPolarAxesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetRequestedNumberOfPolarAxesMaxValue() :
      op->vtkPolarAxesActor::GetRequestedNumberOfPolarAxesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRequestedNumberOfPolarAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestedNumberOfPolarAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetRequestedNumberOfPolarAxes() :
      op->vtkPolarAxesActor::GetRequestedNumberOfPolarAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetAutoSubdividePolarAxis(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetAutoSubdividePolarAxis."
    " (" "Use SetDeltaRangeMajor instead or enable AxisTickMatchesPolarAxes" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetAutoSubdividePolarAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoSubdividePolarAxis(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetAutoSubdividePolarAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetAutoSubdividePolarAxis(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetAutoSubdividePolarAxis."
    " (" "Use SetDeltaRangeMajor instead or enable AxisTickMatchesPolarAxes" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetAutoSubdividePolarAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoSubdividePolarAxis() :
      op->vtkPolarAxesActor::GetAutoSubdividePolarAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_AutoSubdividePolarAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoSubdividePolarAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoSubdividePolarAxisOn();
    }
    else
    {
      op->vtkPolarAxesActor::AutoSubdividePolarAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_AutoSubdividePolarAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoSubdividePolarAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoSubdividePolarAxisOff();
    }
    else
    {
      op->vtkPolarAxesActor::AutoSubdividePolarAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetNumberOfPolarAxisTicks(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetNumberOfPolarAxisTicks."
    " (" "Use SetDeltaRangeMajor instead or enable AxisTickMatchesPolarAxes" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetNumberOfPolarAxisTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPolarAxisTicks(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetNumberOfPolarAxisTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetNumberOfPolarAxisTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPolarAxisTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPolarAxisTicks() :
      op->vtkPolarAxesActor::GetNumberOfPolarAxisTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0, temp1);
    }
    else
    {
      op->vtkPolarAxesActor::SetRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolarAxesActor_SetRange_s1(self, args);
    case 1:
      return PyvtkPolarAxesActor_SetRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return nullptr;
}


static PyObject *
PyvtkPolarAxesActor_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkPolarAxesActor::GetRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetMinimumRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumRadius(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetMinimumRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetMinimumRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumRadius() :
      op->vtkPolarAxesActor::GetMinimumRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetMaximumRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumRadius(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetMaximumRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetMaximumRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumRadius() :
      op->vtkPolarAxesActor::GetMaximumRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetMinimumAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumAngle(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetMinimumAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetMinimumAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumAngle() :
      op->vtkPolarAxesActor::GetMinimumAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetMaximumAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumAngle(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetMaximumAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetMaximumAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumAngle() :
      op->vtkPolarAxesActor::GetMaximumAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetSmallestVisiblePolarAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmallestVisiblePolarAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSmallestVisiblePolarAngle(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetSmallestVisiblePolarAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetSmallestVisiblePolarAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmallestVisiblePolarAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSmallestVisiblePolarAngleMinValue() :
      op->vtkPolarAxesActor::GetSmallestVisiblePolarAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetSmallestVisiblePolarAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmallestVisiblePolarAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSmallestVisiblePolarAngleMaxValue() :
      op->vtkPolarAxesActor::GetSmallestVisiblePolarAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetSmallestVisiblePolarAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmallestVisiblePolarAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSmallestVisiblePolarAngle() :
      op->vtkPolarAxesActor::GetSmallestVisiblePolarAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTickLocation(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetTickLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetTickLocationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLocationMinValue() :
      op->vtkPolarAxesActor::GetTickLocationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetTickLocationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLocationMaxValue() :
      op->vtkPolarAxesActor::GetTickLocationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLocation() :
      op->vtkPolarAxesActor::GetTickLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetRadialUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialUnits(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetRadialUnits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRadialUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRadialUnits() :
      op->vtkPolarAxesActor::GetRadialUnits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScreenSize(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetScreenSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkPolarAxesActor::GetScreenSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarTitleOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPolarTitleOffset(temp0, temp1);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarTitleOffset(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_SetPolarTitleOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPolarTitleOffset(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarTitleOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_SetPolarTitleOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolarAxesActor_SetPolarTitleOffset_s1(self, args);
    case 1:
      return PyvtkPolarAxesActor_SetPolarTitleOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPolarTitleOffset");
  return nullptr;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarTitleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPolarTitleOffset() :
      op->vtkPolarAxesActor::GetPolarTitleOffset());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetRadialTitleOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRadialTitleOffset(temp0, temp1);
    }
    else
    {
      op->vtkPolarAxesActor::SetRadialTitleOffset(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_SetRadialTitleOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRadialTitleOffset(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetRadialTitleOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_SetRadialTitleOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolarAxesActor_SetRadialTitleOffset_s1(self, args);
    case 1:
      return PyvtkPolarAxesActor_SetRadialTitleOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRadialTitleOffset");
  return nullptr;
}


static PyObject *
PyvtkPolarAxesActor_GetRadialTitleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRadialTitleOffset() :
      op->vtkPolarAxesActor::GetRadialTitleOffset());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPolarLabelOffset() :
      op->vtkPolarAxesActor::GetPolarLabelOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarLabelOffset(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarLabelOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarExponentOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarExponentOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPolarExponentOffset() :
      op->vtkPolarAxesActor::GetPolarExponentOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarExponentOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarExponentOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarExponentOffset(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarExponentOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->SetCamera(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkPolarAxesActor::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarAxisTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisTitle(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarAxisTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPolarAxisTitle() :
      op->vtkPolarAxesActor::GetPolarAxisTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarLabelFormat(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPolarLabelFormat() :
      op->vtkPolarAxesActor::GetPolarLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetExponentLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExponentLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExponentLocation(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetExponentLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetExponentLocationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentLocationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExponentLocationMinValue() :
      op->vtkPolarAxesActor::GetExponentLocationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetExponentLocationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentLocationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExponentLocationMaxValue() :
      op->vtkPolarAxesActor::GetExponentLocationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetExponentLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExponentLocation() :
      op->vtkPolarAxesActor::GetExponentLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetRadialAngleFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialAngleFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialAngleFormat(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetRadialAngleFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRadialAngleFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialAngleFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetRadialAngleFormat() :
      op->vtkPolarAxesActor::GetRadialAngleFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

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
      op->vtkPolarAxesActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableDistanceLOD(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetEnableDistanceLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableDistanceLOD() :
      op->vtkPolarAxesActor::GetEnableDistanceLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceLODThreshold(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetDistanceLODThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetDistanceLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMinValue() :
      op->vtkPolarAxesActor::GetDistanceLODThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetDistanceLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMaxValue() :
      op->vtkPolarAxesActor::GetDistanceLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThreshold() :
      op->vtkPolarAxesActor::GetDistanceLODThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableViewAngleLOD(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetEnableViewAngleLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableViewAngleLOD() :
      op->vtkPolarAxesActor::GetEnableViewAngleLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetViewAngleLODThreshold(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetViewAngleLODThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetViewAngleLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMinValue() :
      op->vtkPolarAxesActor::GetViewAngleLODThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetViewAngleLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMaxValue() :
      op->vtkPolarAxesActor::GetViewAngleLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThreshold() :
      op->vtkPolarAxesActor::GetViewAngleLODThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPolarAxisVisibility() :
      op->vtkPolarAxesActor::GetPolarAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolarAxisVisibilityOn();
    }
    else
    {
      op->vtkPolarAxesActor::PolarAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolarAxisVisibilityOff();
    }
    else
    {
      op->vtkPolarAxesActor::PolarAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetDrawRadialGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawRadialGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawRadialGridlines(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetDrawRadialGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetDrawRadialGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawRadialGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawRadialGridlines() :
      op->vtkPolarAxesActor::GetDrawRadialGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_DrawRadialGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawRadialGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawRadialGridlinesOn();
    }
    else
    {
      op->vtkPolarAxesActor::DrawRadialGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_DrawRadialGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawRadialGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawRadialGridlinesOff();
    }
    else
    {
      op->vtkPolarAxesActor::DrawRadialGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetDrawPolarArcsGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawPolarArcsGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawPolarArcsGridlines(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetDrawPolarArcsGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetDrawPolarArcsGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawPolarArcsGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawPolarArcsGridlines() :
      op->vtkPolarAxesActor::GetDrawPolarArcsGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_DrawPolarArcsGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolarArcsGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawPolarArcsGridlinesOn();
    }
    else
    {
      op->vtkPolarAxesActor::DrawPolarArcsGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_DrawPolarArcsGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolarArcsGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawPolarArcsGridlinesOff();
    }
    else
    {
      op->vtkPolarAxesActor::DrawPolarArcsGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarTitleVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarTitleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPolarTitleVisibility() :
      op->vtkPolarAxesActor::GetPolarTitleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarTitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarTitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolarTitleVisibilityOn();
    }
    else
    {
      op->vtkPolarAxesActor::PolarTitleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarTitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarTitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolarTitleVisibilityOff();
    }
    else
    {
      op->vtkPolarAxesActor::PolarTitleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetRadialAxisTitleLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialAxisTitleLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialAxisTitleLocation(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetRadialAxisTitleLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRadialAxisTitleLocationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialAxisTitleLocationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRadialAxisTitleLocationMinValue() :
      op->vtkPolarAxesActor::GetRadialAxisTitleLocationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRadialAxisTitleLocationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialAxisTitleLocationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRadialAxisTitleLocationMaxValue() :
      op->vtkPolarAxesActor::GetRadialAxisTitleLocationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRadialAxisTitleLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialAxisTitleLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRadialAxisTitleLocation() :
      op->vtkPolarAxesActor::GetRadialAxisTitleLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarAxisTitleLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisTitleLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisTitleLocation(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarAxisTitleLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisTitleLocationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisTitleLocationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolarAxisTitleLocationMinValue() :
      op->vtkPolarAxesActor::GetPolarAxisTitleLocationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisTitleLocationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisTitleLocationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolarAxisTitleLocationMaxValue() :
      op->vtkPolarAxesActor::GetPolarAxisTitleLocationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisTitleLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisTitleLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolarAxisTitleLocation() :
      op->vtkPolarAxesActor::GetPolarAxisTitleLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarLabelVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPolarLabelVisibility() :
      op->vtkPolarAxesActor::GetPolarLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolarLabelVisibilityOn();
    }
    else
    {
      op->vtkPolarAxesActor::PolarLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolarLabelVisibilityOff();
    }
    else
    {
      op->vtkPolarAxesActor::PolarLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetArcTicksOriginToPolarAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcTicksOriginToPolarAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcTicksOriginToPolarAxis(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetArcTicksOriginToPolarAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetArcTicksOriginToPolarAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArcTicksOriginToPolarAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetArcTicksOriginToPolarAxis() :
      op->vtkPolarAxesActor::GetArcTicksOriginToPolarAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_ArcTicksOriginToPolarAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArcTicksOriginToPolarAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ArcTicksOriginToPolarAxisOn();
    }
    else
    {
      op->vtkPolarAxesActor::ArcTicksOriginToPolarAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_ArcTicksOriginToPolarAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArcTicksOriginToPolarAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ArcTicksOriginToPolarAxisOff();
    }
    else
    {
      op->vtkPolarAxesActor::ArcTicksOriginToPolarAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetRadialAxesOriginToPolarAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialAxesOriginToPolarAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialAxesOriginToPolarAxis(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetRadialAxesOriginToPolarAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRadialAxesOriginToPolarAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialAxesOriginToPolarAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRadialAxesOriginToPolarAxis() :
      op->vtkPolarAxesActor::GetRadialAxesOriginToPolarAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_RadialAxesOriginToPolarAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialAxesOriginToPolarAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RadialAxesOriginToPolarAxisOn();
    }
    else
    {
      op->vtkPolarAxesActor::RadialAxesOriginToPolarAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_RadialAxesOriginToPolarAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialAxesOriginToPolarAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RadialAxesOriginToPolarAxisOff();
    }
    else
    {
      op->vtkPolarAxesActor::RadialAxesOriginToPolarAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarTickVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPolarTickVisibility() :
      op->vtkPolarAxesActor::GetPolarTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolarTickVisibilityOn();
    }
    else
    {
      op->vtkPolarAxesActor::PolarTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolarTickVisibilityOff();
    }
    else
    {
      op->vtkPolarAxesActor::PolarTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTickVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetAxisTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAxisTickVisibility() :
      op->vtkPolarAxesActor::GetAxisTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_AxisTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxisTickVisibilityOn();
    }
    else
    {
      op->vtkPolarAxesActor::AxisTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_AxisTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxisTickVisibilityOff();
    }
    else
    {
      op->vtkPolarAxesActor::AxisTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisMinorTickVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetAxisMinorTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAxisMinorTickVisibility() :
      op->vtkPolarAxesActor::GetAxisMinorTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_AxisMinorTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisMinorTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxisMinorTickVisibilityOn();
    }
    else
    {
      op->vtkPolarAxesActor::AxisMinorTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_AxisMinorTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisMinorTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxisMinorTickVisibilityOff();
    }
    else
    {
      op->vtkPolarAxesActor::AxisMinorTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetAxisTickMatchesPolarAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTickMatchesPolarAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTickMatchesPolarAxes(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetAxisTickMatchesPolarAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetAxisTickMatchesPolarAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTickMatchesPolarAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAxisTickMatchesPolarAxes() :
      op->vtkPolarAxesActor::GetAxisTickMatchesPolarAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_AxisTickMatchesPolarAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisTickMatchesPolarAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxisTickMatchesPolarAxesOn();
    }
    else
    {
      op->vtkPolarAxesActor::AxisTickMatchesPolarAxesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_AxisTickMatchesPolarAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisTickMatchesPolarAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxisTickMatchesPolarAxesOff();
    }
    else
    {
      op->vtkPolarAxesActor::AxisTickMatchesPolarAxesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetArcTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcTickVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetArcTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetArcTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArcTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetArcTickVisibility() :
      op->vtkPolarAxesActor::GetArcTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_ArcTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArcTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ArcTickVisibilityOn();
    }
    else
    {
      op->vtkPolarAxesActor::ArcTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_ArcTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArcTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ArcTickVisibilityOff();
    }
    else
    {
      op->vtkPolarAxesActor::ArcTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetArcMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcMinorTickVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetArcMinorTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetArcMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArcMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetArcMinorTickVisibility() :
      op->vtkPolarAxesActor::GetArcMinorTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_ArcMinorTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArcMinorTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ArcMinorTickVisibilityOn();
    }
    else
    {
      op->vtkPolarAxesActor::ArcMinorTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_ArcMinorTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArcMinorTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ArcMinorTickVisibilityOff();
    }
    else
    {
      op->vtkPolarAxesActor::ArcMinorTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetArcTickMatchesRadialAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcTickMatchesRadialAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcTickMatchesRadialAxes(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetArcTickMatchesRadialAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetArcTickMatchesRadialAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArcTickMatchesRadialAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetArcTickMatchesRadialAxes() :
      op->vtkPolarAxesActor::GetArcTickMatchesRadialAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_ArcTickMatchesRadialAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArcTickMatchesRadialAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ArcTickMatchesRadialAxesOn();
    }
    else
    {
      op->vtkPolarAxesActor::ArcTickMatchesRadialAxesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_ArcTickMatchesRadialAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArcTickMatchesRadialAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ArcTickMatchesRadialAxesOff();
    }
    else
    {
      op->vtkPolarAxesActor::ArcTickMatchesRadialAxesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetArcMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcMajorTickSize(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetArcMajorTickSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetArcMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArcMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArcMajorTickSize() :
      op->vtkPolarAxesActor::GetArcMajorTickSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarAxisMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisMajorTickSize(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarAxisMajorTickSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPolarAxisMajorTickSize() :
      op->vtkPolarAxesActor::GetPolarAxisMajorTickSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetLastRadialAxisMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastRadialAxisMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastRadialAxisMajorTickSize(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetLastRadialAxisMajorTickSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetLastRadialAxisMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRadialAxisMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLastRadialAxisMajorTickSize() :
      op->vtkPolarAxesActor::GetLastRadialAxisMajorTickSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarAxisTickRatioSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisTickRatioSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisTickRatioSize(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarAxisTickRatioSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisTickRatioSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisTickRatioSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPolarAxisTickRatioSize() :
      op->vtkPolarAxesActor::GetPolarAxisTickRatioSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetLastAxisTickRatioSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastAxisTickRatioSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastAxisTickRatioSize(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetLastAxisTickRatioSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetLastAxisTickRatioSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastAxisTickRatioSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLastAxisTickRatioSize() :
      op->vtkPolarAxesActor::GetLastAxisTickRatioSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetArcTickRatioSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcTickRatioSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcTickRatioSize(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetArcTickRatioSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetArcTickRatioSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArcTickRatioSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArcTickRatioSize() :
      op->vtkPolarAxesActor::GetArcTickRatioSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetTickRatioRadiusSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickRatioRadiusSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTickRatioRadiusSize(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetTickRatioRadiusSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetTickRatioRadiusSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickRatioRadiusSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTickRatioRadiusSize() :
      op->vtkPolarAxesActor::GetTickRatioRadiusSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarAxisMajorTickThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisMajorTickThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisMajorTickThickness(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarAxisMajorTickThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisMajorTickThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisMajorTickThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPolarAxisMajorTickThickness() :
      op->vtkPolarAxesActor::GetPolarAxisMajorTickThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetLastRadialAxisMajorTickThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastRadialAxisMajorTickThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastRadialAxisMajorTickThickness(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetLastRadialAxisMajorTickThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetLastRadialAxisMajorTickThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRadialAxisMajorTickThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLastRadialAxisMajorTickThickness() :
      op->vtkPolarAxesActor::GetLastRadialAxisMajorTickThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetArcMajorTickThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcMajorTickThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcMajorTickThickness(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetArcMajorTickThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetArcMajorTickThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArcMajorTickThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArcMajorTickThickness() :
      op->vtkPolarAxesActor::GetArcMajorTickThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarAxisTickRatioThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisTickRatioThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisTickRatioThickness(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarAxisTickRatioThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisTickRatioThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisTickRatioThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPolarAxisTickRatioThickness() :
      op->vtkPolarAxesActor::GetPolarAxisTickRatioThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetLastAxisTickRatioThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastAxisTickRatioThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastAxisTickRatioThickness(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetLastAxisTickRatioThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetLastAxisTickRatioThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastAxisTickRatioThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLastAxisTickRatioThickness() :
      op->vtkPolarAxesActor::GetLastAxisTickRatioThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetArcTickRatioThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcTickRatioThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcTickRatioThickness(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetArcTickRatioThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetArcTickRatioThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArcTickRatioThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetArcTickRatioThickness() :
      op->vtkPolarAxesActor::GetArcTickRatioThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetDeltaRangeMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaRangeMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeltaRangeMajor(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetDeltaRangeMajor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetDeltaRangeMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRangeMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaRangeMajor() :
      op->vtkPolarAxesActor::GetDeltaRangeMajor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetDeltaRangeMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaRangeMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeltaRangeMinor(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetDeltaRangeMinor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetDeltaRangeMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRangeMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaRangeMinor() :
      op->vtkPolarAxesActor::GetDeltaRangeMinor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetRequestedDeltaRangePolarAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedDeltaRangePolarAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedDeltaRangePolarAxes(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetRequestedDeltaRangePolarAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRequestedDeltaRangePolarAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestedDeltaRangePolarAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRequestedDeltaRangePolarAxes() :
      op->vtkPolarAxesActor::GetRequestedDeltaRangePolarAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetDeltaAngleMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaAngleMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeltaAngleMajor(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetDeltaAngleMajor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetDeltaAngleMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaAngleMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaAngleMajor() :
      op->vtkPolarAxesActor::GetDeltaAngleMajor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetDeltaAngleMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaAngleMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeltaAngleMinor(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetDeltaAngleMinor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetDeltaAngleMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaAngleMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaAngleMinor() :
      op->vtkPolarAxesActor::GetDeltaAngleMinor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetRequestedDeltaAngleRadialAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedDeltaAngleRadialAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedDeltaAngleRadialAxes(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetRequestedDeltaAngleRadialAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRequestedDeltaAngleRadialAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestedDeltaAngleRadialAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRequestedDeltaAngleRadialAxes() :
      op->vtkPolarAxesActor::GetRequestedDeltaAngleRadialAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetRadialAxesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialAxesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialAxesVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetRadialAxesVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRadialAxesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialAxesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRadialAxesVisibility() :
      op->vtkPolarAxesActor::GetRadialAxesVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_RadialAxesVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialAxesVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RadialAxesVisibilityOn();
    }
    else
    {
      op->vtkPolarAxesActor::RadialAxesVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_RadialAxesVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialAxesVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RadialAxesVisibilityOff();
    }
    else
    {
      op->vtkPolarAxesActor::RadialAxesVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetRadialTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialTitleVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetRadialTitleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRadialTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRadialTitleVisibility() :
      op->vtkPolarAxesActor::GetRadialTitleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_RadialTitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialTitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RadialTitleVisibilityOn();
    }
    else
    {
      op->vtkPolarAxesActor::RadialTitleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_RadialTitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialTitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RadialTitleVisibilityOff();
    }
    else
    {
      op->vtkPolarAxesActor::RadialTitleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarArcsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarArcsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarArcsVisibility(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarArcsVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarArcsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarArcsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPolarArcsVisibility() :
      op->vtkPolarAxesActor::GetPolarArcsVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarArcsVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarArcsVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolarArcsVisibilityOn();
    }
    else
    {
      op->vtkPolarAxesActor::PolarArcsVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_PolarArcsVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarArcsVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolarArcsVisibilityOff();
    }
    else
    {
      op->vtkPolarAxesActor::PolarArcsVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetUse2DMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUse2DMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUse2DMode(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetUse2DMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetUse2DMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUse2DMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUse2DMode() :
      op->vtkPolarAxesActor::GetUse2DMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisTitleTextProperty(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarAxisTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetPolarAxisTitleTextProperty() :
      op->vtkPolarAxesActor::GetPolarAxisTitleTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisLabelTextProperty(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarAxisLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetPolarAxisLabelTextProperty() :
      op->vtkPolarAxesActor::GetPolarAxisLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetLastRadialAxisTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastRadialAxisTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLastRadialAxisTextProperty(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetLastRadialAxisTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetLastRadialAxisTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRadialAxisTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLastRadialAxisTextProperty() :
      op->vtkPolarAxesActor::GetLastRadialAxisTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetSecondaryRadialAxesTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryRadialAxesTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetSecondaryRadialAxesTextProperty(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetSecondaryRadialAxesTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetSecondaryRadialAxesTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondaryRadialAxesTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetSecondaryRadialAxesTextProperty() :
      op->vtkPolarAxesActor::GetSecondaryRadialAxesTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarAxisProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarAxisProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetPolarAxisProperty(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarAxisProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarAxisProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarAxisProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPolarAxisProperty() :
      op->vtkPolarAxesActor::GetPolarAxisProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetLastRadialAxisProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastRadialAxisProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLastRadialAxisProperty(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetLastRadialAxisProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetLastRadialAxisProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRadialAxisProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLastRadialAxisProperty() :
      op->vtkPolarAxesActor::GetLastRadialAxisProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetSecondaryRadialAxesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryRadialAxesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetSecondaryRadialAxesProperty(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetSecondaryRadialAxesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetSecondaryRadialAxesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondaryRadialAxesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSecondaryRadialAxesProperty() :
      op->vtkPolarAxesActor::GetSecondaryRadialAxesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarArcsProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarArcsProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetPolarArcsProperty(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarArcsProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarArcsProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarArcsProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPolarArcsProperty() :
      op->vtkPolarAxesActor::GetPolarArcsProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetSecondaryPolarArcsProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryPolarArcsProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetSecondaryPolarArcsProperty(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetSecondaryPolarArcsProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetSecondaryPolarArcsProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondaryPolarArcsProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSecondaryPolarArcsProperty() :
      op->vtkPolarAxesActor::GetSecondaryPolarArcsProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPolarAxesActor::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkPolarAxesActor_SetBounds_s1(self, args);
    case 1:
      return PyvtkPolarAxesActor_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}


static PyObject *
PyvtkPolarAxesActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPolarAxesActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPolarAxesActor::GetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
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
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolarAxesActor_GetBounds_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

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
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::GetBounds(temp0);
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
PyvtkPolarAxesActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolarAxesActor_GetBounds_s1(self, args);
    case 6:
      return PyvtkPolarAxesActor_GetBounds_s2(self, args);
    case 1:
      return PyvtkPolarAxesActor_GetBounds_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkPolarAxesActor_SetRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRatio(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRatioMinValue() :
      op->vtkPolarAxesActor::GetRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRatioMaxValue() :
      op->vtkPolarAxesActor::GetRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRatio() :
      op->vtkPolarAxesActor::GetRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_SetPolarArcResolutionPerDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarArcResolutionPerDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarArcResolutionPerDegree(temp0);
    }
    else
    {
      op->vtkPolarAxesActor::SetPolarArcResolutionPerDegree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarArcResolutionPerDegreeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarArcResolutionPerDegreeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPolarArcResolutionPerDegreeMinValue() :
      op->vtkPolarAxesActor::GetPolarArcResolutionPerDegreeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarArcResolutionPerDegreeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarArcResolutionPerDegreeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPolarArcResolutionPerDegreeMaxValue() :
      op->vtkPolarAxesActor::GetPolarArcResolutionPerDegreeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolarAxesActor_GetPolarArcResolutionPerDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarArcResolutionPerDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolarAxesActor *op = static_cast<vtkPolarAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPolarArcResolutionPerDegree() :
      op->vtkPolarAxesActor::GetPolarArcResolutionPerDegree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolarAxesActor_Methods[] = {
  {"IsTypeOf", PyvtkPolarAxesActor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolarAxesActor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolarAxesActor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPolarAxesActor\nC++: static vtkPolarAxesActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolarAxesActor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolarAxesActor\nC++: vtkPolarAxesActor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolarAxesActor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolarAxesActor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RenderOpaqueGeometry", PyvtkPolarAxesActor_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nDraw the polar axes\n"},
  {"RenderOverlay", PyvtkPolarAxesActor_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, __a:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkPolarAxesActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"SetPole", PyvtkPolarAxesActor_SetPole, METH_VARARGS,
   "SetPole(self, __a:[float, float, float]) -> None\nC++: virtual void SetPole(double[3])\nSetPole(self, __a:float, __b:float, __c:float) -> None\nC++: virtual void SetPole(double, double, double)\n\nExplicitly specify the coordinate of the pole.\n"},
  {"GetPole", PyvtkPolarAxesActor_GetPole, METH_VARARGS,
   "GetPole(self) -> (float, float, float)\nC++: virtual double *GetPole()\n\n"},
  {"SetLog", PyvtkPolarAxesActor_SetLog, METH_VARARGS,
   "SetLog(self, _arg:bool) -> None\nC++: virtual void SetLog(bool _arg)\n\nEnable/Disable log scale. Default: false.\n"},
  {"GetLog", PyvtkPolarAxesActor_GetLog, METH_VARARGS,
   "GetLog(self) -> bool\nC++: virtual bool GetLog()\n\n"},
  {"LogOn", PyvtkPolarAxesActor_LogOn, METH_VARARGS,
   "LogOn(self) -> None\nC++: virtual void LogOn()\n\n"},
  {"LogOff", PyvtkPolarAxesActor_LogOff, METH_VARARGS,
   "LogOff(self) -> None\nC++: virtual void LogOff()\n\n"},
  {"SetRequestedNumberOfRadialAxes", PyvtkPolarAxesActor_SetRequestedNumberOfRadialAxes, METH_VARARGS,
   "SetRequestedNumberOfRadialAxes(self, _arg:int) -> None\nC++: virtual void SetRequestedNumberOfRadialAxes(vtkIdType _arg)\n\nGets/Sets the number of radial axes. Default: 0.\n"},
  {"GetRequestedNumberOfRadialAxesMinValue", PyvtkPolarAxesActor_GetRequestedNumberOfRadialAxesMinValue, METH_VARARGS,
   "GetRequestedNumberOfRadialAxesMinValue(self) -> int\nC++: virtual vtkIdType GetRequestedNumberOfRadialAxesMinValue()\n\n"},
  {"GetRequestedNumberOfRadialAxesMaxValue", PyvtkPolarAxesActor_GetRequestedNumberOfRadialAxesMaxValue, METH_VARARGS,
   "GetRequestedNumberOfRadialAxesMaxValue(self) -> int\nC++: virtual vtkIdType GetRequestedNumberOfRadialAxesMaxValue()\n\n"},
  {"GetRequestedNumberOfRadialAxes", PyvtkPolarAxesActor_GetRequestedNumberOfRadialAxes, METH_VARARGS,
   "GetRequestedNumberOfRadialAxes(self) -> int\nC++: virtual vtkIdType GetRequestedNumberOfRadialAxes()\n\n"},
  {"SetRequestedNumberOfPolarAxes", PyvtkPolarAxesActor_SetRequestedNumberOfPolarAxes, METH_VARARGS,
   "SetRequestedNumberOfPolarAxes(self, _arg:int) -> None\nC++: virtual void SetRequestedNumberOfPolarAxes(vtkIdType _arg)\n\nGets/Sets the number of polar axes. Default: 5.\n"},
  {"GetRequestedNumberOfPolarAxesMinValue", PyvtkPolarAxesActor_GetRequestedNumberOfPolarAxesMinValue, METH_VARARGS,
   "GetRequestedNumberOfPolarAxesMinValue(self) -> int\nC++: virtual vtkIdType GetRequestedNumberOfPolarAxesMinValue()\n\n"},
  {"GetRequestedNumberOfPolarAxesMaxValue", PyvtkPolarAxesActor_GetRequestedNumberOfPolarAxesMaxValue, METH_VARARGS,
   "GetRequestedNumberOfPolarAxesMaxValue(self) -> int\nC++: virtual vtkIdType GetRequestedNumberOfPolarAxesMaxValue()\n\n"},
  {"GetRequestedNumberOfPolarAxes", PyvtkPolarAxesActor_GetRequestedNumberOfPolarAxes, METH_VARARGS,
   "GetRequestedNumberOfPolarAxes(self) -> int\nC++: virtual vtkIdType GetRequestedNumberOfPolarAxes()\n\n"},
  {"SetAutoSubdividePolarAxis", PyvtkPolarAxesActor_SetAutoSubdividePolarAxis, METH_VARARGS,
   "SetAutoSubdividePolarAxis(self, _arg:bool) -> None\nC++: virtual void SetAutoSubdividePolarAxis(bool _arg)\n\nSet/Get whether the number of polar axis ticks and arcs should be\nautomatically calculated. Default: false.\n"},
  {"GetAutoSubdividePolarAxis", PyvtkPolarAxesActor_GetAutoSubdividePolarAxis, METH_VARARGS,
   "GetAutoSubdividePolarAxis(self) -> bool\nC++: virtual bool GetAutoSubdividePolarAxis()\n\n"},
  {"AutoSubdividePolarAxisOn", PyvtkPolarAxesActor_AutoSubdividePolarAxisOn, METH_VARARGS,
   "AutoSubdividePolarAxisOn(self) -> None\nC++: void AutoSubdividePolarAxisOn()\n\n"},
  {"AutoSubdividePolarAxisOff", PyvtkPolarAxesActor_AutoSubdividePolarAxisOff, METH_VARARGS,
   "AutoSubdividePolarAxisOff(self) -> None\nC++: void AutoSubdividePolarAxisOff()\n\n"},
  {"SetNumberOfPolarAxisTicks", PyvtkPolarAxesActor_SetNumberOfPolarAxisTicks, METH_VARARGS,
   "SetNumberOfPolarAxisTicks(self, __a:int) -> None\nC++: virtual void SetNumberOfPolarAxisTicks(int)\n\nSet/Get a number of ticks that one would like to display along\npolar axis. NB: it modifies DeltaRangeMajor to correspond to this\nnumber.\n"},
  {"GetNumberOfPolarAxisTicks", PyvtkPolarAxesActor_GetNumberOfPolarAxisTicks, METH_VARARGS,
   "GetNumberOfPolarAxisTicks(self) -> int\nC++: int GetNumberOfPolarAxisTicks()\n\n"},
  {"SetRange", PyvtkPolarAxesActor_SetRange, METH_VARARGS,
   "SetRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetRange(double _arg1, double _arg2)\nSetRange(self, _arg:(float, float)) -> None\nC++: void SetRange(const double _arg[2])\n\nDefine the range values displayed on the polar Axis. Default: (0,\n10).\n"},
  {"GetRange", PyvtkPolarAxesActor_GetRange, METH_VARARGS,
   "GetRange(self) -> (float, float)\nC++: virtual double *GetRange()\n\n"},
  {"SetMinimumRadius", PyvtkPolarAxesActor_SetMinimumRadius, METH_VARARGS,
   "SetMinimumRadius(self, __a:float) -> None\nC++: virtual void SetMinimumRadius(double)\n\nSet/Get the minimal radius of the polar coordinates. Default: 0.\n"},
  {"GetMinimumRadius", PyvtkPolarAxesActor_GetMinimumRadius, METH_VARARGS,
   "GetMinimumRadius(self) -> float\nC++: virtual double GetMinimumRadius()\n\n"},
  {"SetMaximumRadius", PyvtkPolarAxesActor_SetMaximumRadius, METH_VARARGS,
   "SetMaximumRadius(self, __a:float) -> None\nC++: virtual void SetMaximumRadius(double)\n\nSet/Get the maximum radius of the polar coordinates. Default: 1.\n"},
  {"GetMaximumRadius", PyvtkPolarAxesActor_GetMaximumRadius, METH_VARARGS,
   "GetMaximumRadius(self) -> float\nC++: virtual double GetMaximumRadius()\n\n"},
  {"SetMinimumAngle", PyvtkPolarAxesActor_SetMinimumAngle, METH_VARARGS,
   "SetMinimumAngle(self, __a:float) -> None\nC++: virtual void SetMinimumAngle(double)\n\nSet/Get the minimum radius of the polar coordinates (in degrees).\nDefault: 0.\n"},
  {"GetMinimumAngle", PyvtkPolarAxesActor_GetMinimumAngle, METH_VARARGS,
   "GetMinimumAngle(self) -> float\nC++: virtual double GetMinimumAngle()\n\n"},
  {"SetMaximumAngle", PyvtkPolarAxesActor_SetMaximumAngle, METH_VARARGS,
   "SetMaximumAngle(self, __a:float) -> None\nC++: virtual void SetMaximumAngle(double)\n\nSet/Get the maximum radius of the polar coordinates (in degrees).\nDefault: 90.\n"},
  {"GetMaximumAngle", PyvtkPolarAxesActor_GetMaximumAngle, METH_VARARGS,
   "GetMaximumAngle(self) -> float\nC++: virtual double GetMaximumAngle()\n\n"},
  {"SetSmallestVisiblePolarAngle", PyvtkPolarAxesActor_SetSmallestVisiblePolarAngle, METH_VARARGS,
   "SetSmallestVisiblePolarAngle(self, _arg:float) -> None\nC++: virtual void SetSmallestVisiblePolarAngle(double _arg)\n\nSet/Get the minimum radial angle distinguishable from polar axis.\nNB: This is used only when polar axis is visible. Default: 0.5.\n"},
  {"GetSmallestVisiblePolarAngleMinValue", PyvtkPolarAxesActor_GetSmallestVisiblePolarAngleMinValue, METH_VARARGS,
   "GetSmallestVisiblePolarAngleMinValue(self) -> float\nC++: virtual double GetSmallestVisiblePolarAngleMinValue()\n\n"},
  {"GetSmallestVisiblePolarAngleMaxValue", PyvtkPolarAxesActor_GetSmallestVisiblePolarAngleMaxValue, METH_VARARGS,
   "GetSmallestVisiblePolarAngleMaxValue(self) -> float\nC++: virtual double GetSmallestVisiblePolarAngleMaxValue()\n\n"},
  {"GetSmallestVisiblePolarAngle", PyvtkPolarAxesActor_GetSmallestVisiblePolarAngle, METH_VARARGS,
   "GetSmallestVisiblePolarAngle(self) -> float\nC++: virtual double GetSmallestVisiblePolarAngle()\n\n"},
  {"SetTickLocation", PyvtkPolarAxesActor_SetTickLocation, METH_VARARGS,
   "SetTickLocation(self, _arg:int) -> None\nC++: virtual void SetTickLocation(int _arg)\n\nSet/Get the location of the ticks. Inside: tick end toward\npositive direction of perpendicular axes. Outside: tick end\ntoward negative direction of perpendicular axes. Default:\nVTK_TICKS_BOTH.\n"},
  {"GetTickLocationMinValue", PyvtkPolarAxesActor_GetTickLocationMinValue, METH_VARARGS,
   "GetTickLocationMinValue(self) -> int\nC++: virtual int GetTickLocationMinValue()\n\n"},
  {"GetTickLocationMaxValue", PyvtkPolarAxesActor_GetTickLocationMaxValue, METH_VARARGS,
   "GetTickLocationMaxValue(self) -> int\nC++: virtual int GetTickLocationMaxValue()\n\n"},
  {"GetTickLocation", PyvtkPolarAxesActor_GetTickLocation, METH_VARARGS,
   "GetTickLocation(self) -> int\nC++: virtual int GetTickLocation()\n\n"},
  {"SetRadialUnits", PyvtkPolarAxesActor_SetRadialUnits, METH_VARARGS,
   "SetRadialUnits(self, _arg:bool) -> None\nC++: virtual void SetRadialUnits(bool _arg)\n\nDefault: true\n"},
  {"GetRadialUnits", PyvtkPolarAxesActor_GetRadialUnits, METH_VARARGS,
   "GetRadialUnits(self) -> bool\nC++: virtual bool GetRadialUnits()\n\n"},
  {"SetScreenSize", PyvtkPolarAxesActor_SetScreenSize, METH_VARARGS,
   "SetScreenSize(self, _arg:float) -> None\nC++: virtual void SetScreenSize(double _arg)\n\nExplicitly specify the screen size of title and label text.\nScreenSize determines the size of the text in terms of screen\npixels. Default: 10.0.\n"},
  {"GetScreenSize", PyvtkPolarAxesActor_GetScreenSize, METH_VARARGS,
   "GetScreenSize(self) -> float\nC++: virtual double GetScreenSize()\n\n"},
  {"SetPolarTitleOffset", PyvtkPolarAxesActor_SetPolarTitleOffset, METH_VARARGS,
   "SetPolarTitleOffset(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetPolarTitleOffset(double _arg1, double _arg2)\nSetPolarTitleOffset(self, _arg:(float, float)) -> None\nC++: void SetPolarTitleOffset(const double _arg[2])\n\nSet/Get the polar title offset. X-component is used only if text\nis not aligned to center. Default: (20, 10).\n"},
  {"GetPolarTitleOffset", PyvtkPolarAxesActor_GetPolarTitleOffset, METH_VARARGS,
   "GetPolarTitleOffset(self) -> (float, float)\nC++: virtual double *GetPolarTitleOffset()\n\n"},
  {"SetRadialTitleOffset", PyvtkPolarAxesActor_SetRadialTitleOffset, METH_VARARGS,
   "SetRadialTitleOffset(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetRadialTitleOffset(double _arg1, double _arg2)\nSetRadialTitleOffset(self, _arg:(float, float)) -> None\nC++: void SetRadialTitleOffset(const double _arg[2])\n\nSet/Get the radial title offset. X-component is used only if text\nis not aligned to center. Default: (20, 0).\n"},
  {"GetRadialTitleOffset", PyvtkPolarAxesActor_GetRadialTitleOffset, METH_VARARGS,
   "GetRadialTitleOffset(self) -> (float, float)\nC++: virtual double *GetRadialTitleOffset()\n\n"},
  {"GetPolarLabelOffset", PyvtkPolarAxesActor_GetPolarLabelOffset, METH_VARARGS,
   "GetPolarLabelOffset(self) -> float\nC++: virtual double GetPolarLabelOffset()\n\nSet/Get the polar label Y-offset. Default: 10.\n"},
  {"SetPolarLabelOffset", PyvtkPolarAxesActor_SetPolarLabelOffset, METH_VARARGS,
   "SetPolarLabelOffset(self, _arg:float) -> None\nC++: virtual void SetPolarLabelOffset(double _arg)\n\n"},
  {"GetPolarExponentOffset", PyvtkPolarAxesActor_GetPolarExponentOffset, METH_VARARGS,
   "GetPolarExponentOffset(self) -> float\nC++: virtual double GetPolarExponentOffset()\n\nSet/Get the polar exponent Y-offset. Default: 5.\n"},
  {"SetPolarExponentOffset", PyvtkPolarAxesActor_SetPolarExponentOffset, METH_VARARGS,
   "SetPolarExponentOffset(self, _arg:float) -> None\nC++: virtual void SetPolarExponentOffset(double _arg)\n\n"},
  {"SetCamera", PyvtkPolarAxesActor_SetCamera, METH_VARARGS,
   "SetCamera(self, __a:vtkCamera) -> None\nC++: virtual void SetCamera(vtkCamera *)\n\nSet/Get the camera to perform scaling and translation of the\nvtkPolarAxesActor.\n"},
  {"GetCamera", PyvtkPolarAxesActor_GetCamera, METH_VARARGS,
   "GetCamera(self) -> vtkCamera\nC++: vtkCamera *GetCamera()\n\n"},
  {"SetPolarAxisTitle", PyvtkPolarAxesActor_SetPolarAxisTitle, METH_VARARGS,
   "SetPolarAxisTitle(self, _arg:str) -> None\nC++: virtual void SetPolarAxisTitle(const char *_arg)\n\nSet/Get the labels for the polar axis. Default: \"Radial\nDistance\".\n"},
  {"GetPolarAxisTitle", PyvtkPolarAxesActor_GetPolarAxisTitle, METH_VARARGS,
   "GetPolarAxisTitle(self) -> str\nC++: virtual char *GetPolarAxisTitle()\n\n"},
  {"SetPolarLabelFormat", PyvtkPolarAxesActor_SetPolarLabelFormat, METH_VARARGS,
   "SetPolarLabelFormat(self, _arg:str) -> None\nC++: virtual void SetPolarLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the polar axis labels.\n"},
  {"GetPolarLabelFormat", PyvtkPolarAxesActor_GetPolarLabelFormat, METH_VARARGS,
   "GetPolarLabelFormat(self) -> str\nC++: virtual char *GetPolarLabelFormat()\n\n"},
  {"SetExponentLocation", PyvtkPolarAxesActor_SetExponentLocation, METH_VARARGS,
   "SetExponentLocation(self, _arg:int) -> None\nC++: virtual void SetExponentLocation(int _arg)\n\nGet/Set the location of the exponent (if any) of the polar axis\nvalues. Possible location: VTK_EXPONENT_BOTTOM,\nVTK_EXPONENT_EXTERN, VTK_EXPONENT_LABELS\n"},
  {"GetExponentLocationMinValue", PyvtkPolarAxesActor_GetExponentLocationMinValue, METH_VARARGS,
   "GetExponentLocationMinValue(self) -> int\nC++: virtual int GetExponentLocationMinValue()\n\n"},
  {"GetExponentLocationMaxValue", PyvtkPolarAxesActor_GetExponentLocationMaxValue, METH_VARARGS,
   "GetExponentLocationMaxValue(self) -> int\nC++: virtual int GetExponentLocationMaxValue()\n\n"},
  {"GetExponentLocation", PyvtkPolarAxesActor_GetExponentLocation, METH_VARARGS,
   "GetExponentLocation(self) -> int\nC++: virtual int GetExponentLocation()\n\n"},
  {"SetRadialAngleFormat", PyvtkPolarAxesActor_SetRadialAngleFormat, METH_VARARGS,
   "SetRadialAngleFormat(self, _arg:str) -> None\nC++: virtual void SetRadialAngleFormat(const char *_arg)\n\nString to format angle values displayed on the radial axes.\n"},
  {"GetRadialAngleFormat", PyvtkPolarAxesActor_GetRadialAngleFormat, METH_VARARGS,
   "GetRadialAngleFormat(self) -> str\nC++: virtual char *GetRadialAngleFormat()\n\n"},
  {"ReleaseGraphicsResources", PyvtkPolarAxesActor_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"SetEnableDistanceLOD", PyvtkPolarAxesActor_SetEnableDistanceLOD, METH_VARARGS,
   "SetEnableDistanceLOD(self, _arg:bool) -> None\nC++: virtual void SetEnableDistanceLOD(bool _arg)\n\nEnable and disable the use of distance based LOD for titles and\nlabels. Default: true.\n"},
  {"GetEnableDistanceLOD", PyvtkPolarAxesActor_GetEnableDistanceLOD, METH_VARARGS,
   "GetEnableDistanceLOD(self) -> bool\nC++: virtual bool GetEnableDistanceLOD()\n\n"},
  {"SetDistanceLODThreshold", PyvtkPolarAxesActor_SetDistanceLODThreshold, METH_VARARGS,
   "SetDistanceLODThreshold(self, _arg:float) -> None\nC++: virtual void SetDistanceLODThreshold(double _arg)\n\nSet distance LOD threshold [0.0 - 1.0] for titles and labels.\nDefault: 0.7.\n"},
  {"GetDistanceLODThresholdMinValue", PyvtkPolarAxesActor_GetDistanceLODThresholdMinValue, METH_VARARGS,
   "GetDistanceLODThresholdMinValue(self) -> float\nC++: virtual double GetDistanceLODThresholdMinValue()\n\n"},
  {"GetDistanceLODThresholdMaxValue", PyvtkPolarAxesActor_GetDistanceLODThresholdMaxValue, METH_VARARGS,
   "GetDistanceLODThresholdMaxValue(self) -> float\nC++: virtual double GetDistanceLODThresholdMaxValue()\n\n"},
  {"GetDistanceLODThreshold", PyvtkPolarAxesActor_GetDistanceLODThreshold, METH_VARARGS,
   "GetDistanceLODThreshold(self) -> float\nC++: virtual double GetDistanceLODThreshold()\n\n"},
  {"SetEnableViewAngleLOD", PyvtkPolarAxesActor_SetEnableViewAngleLOD, METH_VARARGS,
   "SetEnableViewAngleLOD(self, _arg:bool) -> None\nC++: virtual void SetEnableViewAngleLOD(bool _arg)\n\nEnable and disable the use of view angle based LOD for titles and\nlabels. Default: true.\n"},
  {"GetEnableViewAngleLOD", PyvtkPolarAxesActor_GetEnableViewAngleLOD, METH_VARARGS,
   "GetEnableViewAngleLOD(self) -> bool\nC++: virtual bool GetEnableViewAngleLOD()\n\n"},
  {"SetViewAngleLODThreshold", PyvtkPolarAxesActor_SetViewAngleLODThreshold, METH_VARARGS,
   "SetViewAngleLODThreshold(self, _arg:float) -> None\nC++: virtual void SetViewAngleLODThreshold(double _arg)\n\nSet view angle LOD threshold [0.0 - 1.0] for titles and labels.\nDefault: 0.3.\n"},
  {"GetViewAngleLODThresholdMinValue", PyvtkPolarAxesActor_GetViewAngleLODThresholdMinValue, METH_VARARGS,
   "GetViewAngleLODThresholdMinValue(self) -> float\nC++: virtual double GetViewAngleLODThresholdMinValue()\n\n"},
  {"GetViewAngleLODThresholdMaxValue", PyvtkPolarAxesActor_GetViewAngleLODThresholdMaxValue, METH_VARARGS,
   "GetViewAngleLODThresholdMaxValue(self) -> float\nC++: virtual double GetViewAngleLODThresholdMaxValue()\n\n"},
  {"GetViewAngleLODThreshold", PyvtkPolarAxesActor_GetViewAngleLODThreshold, METH_VARARGS,
   "GetViewAngleLODThreshold(self) -> float\nC++: virtual double GetViewAngleLODThreshold()\n\n"},
  {"SetPolarAxisVisibility", PyvtkPolarAxesActor_SetPolarAxisVisibility, METH_VARARGS,
   "SetPolarAxisVisibility(self, _arg:bool) -> None\nC++: virtual void SetPolarAxisVisibility(bool _arg)\n\nTurn on and off the visibility of the polar axis. Default: true.\n"},
  {"GetPolarAxisVisibility", PyvtkPolarAxesActor_GetPolarAxisVisibility, METH_VARARGS,
   "GetPolarAxisVisibility(self) -> bool\nC++: virtual bool GetPolarAxisVisibility()\n\n"},
  {"PolarAxisVisibilityOn", PyvtkPolarAxesActor_PolarAxisVisibilityOn, METH_VARARGS,
   "PolarAxisVisibilityOn(self) -> None\nC++: virtual void PolarAxisVisibilityOn()\n\n"},
  {"PolarAxisVisibilityOff", PyvtkPolarAxesActor_PolarAxisVisibilityOff, METH_VARARGS,
   "PolarAxisVisibilityOff(self) -> None\nC++: virtual void PolarAxisVisibilityOff()\n\n"},
  {"SetDrawRadialGridlines", PyvtkPolarAxesActor_SetDrawRadialGridlines, METH_VARARGS,
   "SetDrawRadialGridlines(self, _arg:bool) -> None\nC++: virtual void SetDrawRadialGridlines(bool _arg)\n\nTurn on and off the visibility of inner radial grid lines\nDefault: true.\n"},
  {"GetDrawRadialGridlines", PyvtkPolarAxesActor_GetDrawRadialGridlines, METH_VARARGS,
   "GetDrawRadialGridlines(self) -> bool\nC++: virtual bool GetDrawRadialGridlines()\n\n"},
  {"DrawRadialGridlinesOn", PyvtkPolarAxesActor_DrawRadialGridlinesOn, METH_VARARGS,
   "DrawRadialGridlinesOn(self) -> None\nC++: virtual void DrawRadialGridlinesOn()\n\n"},
  {"DrawRadialGridlinesOff", PyvtkPolarAxesActor_DrawRadialGridlinesOff, METH_VARARGS,
   "DrawRadialGridlinesOff(self) -> None\nC++: virtual void DrawRadialGridlinesOff()\n\n"},
  {"SetDrawPolarArcsGridlines", PyvtkPolarAxesActor_SetDrawPolarArcsGridlines, METH_VARARGS,
   "SetDrawPolarArcsGridlines(self, _arg:bool) -> None\nC++: virtual void SetDrawPolarArcsGridlines(bool _arg)\n\nTurn on and off the visibility of inner polar arcs grid lines\nDefault: true.\n"},
  {"GetDrawPolarArcsGridlines", PyvtkPolarAxesActor_GetDrawPolarArcsGridlines, METH_VARARGS,
   "GetDrawPolarArcsGridlines(self) -> bool\nC++: virtual bool GetDrawPolarArcsGridlines()\n\n"},
  {"DrawPolarArcsGridlinesOn", PyvtkPolarAxesActor_DrawPolarArcsGridlinesOn, METH_VARARGS,
   "DrawPolarArcsGridlinesOn(self) -> None\nC++: virtual void DrawPolarArcsGridlinesOn()\n\n"},
  {"DrawPolarArcsGridlinesOff", PyvtkPolarAxesActor_DrawPolarArcsGridlinesOff, METH_VARARGS,
   "DrawPolarArcsGridlinesOff(self) -> None\nC++: virtual void DrawPolarArcsGridlinesOff()\n\n"},
  {"SetPolarTitleVisibility", PyvtkPolarAxesActor_SetPolarTitleVisibility, METH_VARARGS,
   "SetPolarTitleVisibility(self, _arg:bool) -> None\nC++: virtual void SetPolarTitleVisibility(bool _arg)\n\nTurn on and off the visibility of titles for polar axis. Default:\ntrue.\n"},
  {"GetPolarTitleVisibility", PyvtkPolarAxesActor_GetPolarTitleVisibility, METH_VARARGS,
   "GetPolarTitleVisibility(self) -> bool\nC++: virtual bool GetPolarTitleVisibility()\n\n"},
  {"PolarTitleVisibilityOn", PyvtkPolarAxesActor_PolarTitleVisibilityOn, METH_VARARGS,
   "PolarTitleVisibilityOn(self) -> None\nC++: virtual void PolarTitleVisibilityOn()\n\n"},
  {"PolarTitleVisibilityOff", PyvtkPolarAxesActor_PolarTitleVisibilityOff, METH_VARARGS,
   "PolarTitleVisibilityOff(self) -> None\nC++: virtual void PolarTitleVisibilityOff()\n\n"},
  {"SetRadialAxisTitleLocation", PyvtkPolarAxesActor_SetRadialAxisTitleLocation, METH_VARARGS,
   "SetRadialAxisTitleLocation(self, _arg:int) -> None\nC++: virtual void SetRadialAxisTitleLocation(int _arg)\n\nGet/Set the alignment of the radial axes title related to the\naxis. Possible Alignment: VTK_TITLE_BOTTOM, VTK_TITLE_EXTERN.\nDefault: VTK_TITLE_BOTTOM.\n"},
  {"GetRadialAxisTitleLocationMinValue", PyvtkPolarAxesActor_GetRadialAxisTitleLocationMinValue, METH_VARARGS,
   "GetRadialAxisTitleLocationMinValue(self) -> int\nC++: virtual int GetRadialAxisTitleLocationMinValue()\n\n"},
  {"GetRadialAxisTitleLocationMaxValue", PyvtkPolarAxesActor_GetRadialAxisTitleLocationMaxValue, METH_VARARGS,
   "GetRadialAxisTitleLocationMaxValue(self) -> int\nC++: virtual int GetRadialAxisTitleLocationMaxValue()\n\n"},
  {"GetRadialAxisTitleLocation", PyvtkPolarAxesActor_GetRadialAxisTitleLocation, METH_VARARGS,
   "GetRadialAxisTitleLocation(self) -> int\nC++: virtual int GetRadialAxisTitleLocation()\n\n"},
  {"SetPolarAxisTitleLocation", PyvtkPolarAxesActor_SetPolarAxisTitleLocation, METH_VARARGS,
   "SetPolarAxisTitleLocation(self, _arg:int) -> None\nC++: virtual void SetPolarAxisTitleLocation(int _arg)\n\nGet/Set the alignment of the polar axes title related to the\naxis. Possible Alignment: VTKTITLE_BOTTOM, VTK_TITLE_EXTERN.\nDefault: VTK_TITLE_BOTTOM.\n"},
  {"GetPolarAxisTitleLocationMinValue", PyvtkPolarAxesActor_GetPolarAxisTitleLocationMinValue, METH_VARARGS,
   "GetPolarAxisTitleLocationMinValue(self) -> int\nC++: virtual int GetPolarAxisTitleLocationMinValue()\n\n"},
  {"GetPolarAxisTitleLocationMaxValue", PyvtkPolarAxesActor_GetPolarAxisTitleLocationMaxValue, METH_VARARGS,
   "GetPolarAxisTitleLocationMaxValue(self) -> int\nC++: virtual int GetPolarAxisTitleLocationMaxValue()\n\n"},
  {"GetPolarAxisTitleLocation", PyvtkPolarAxesActor_GetPolarAxisTitleLocation, METH_VARARGS,
   "GetPolarAxisTitleLocation(self) -> int\nC++: virtual int GetPolarAxisTitleLocation()\n\n"},
  {"SetPolarLabelVisibility", PyvtkPolarAxesActor_SetPolarLabelVisibility, METH_VARARGS,
   "SetPolarLabelVisibility(self, _arg:bool) -> None\nC++: virtual void SetPolarLabelVisibility(bool _arg)\n\nTurn on and off the visibility of labels for polar axis. Default:\ntrue.\n"},
  {"GetPolarLabelVisibility", PyvtkPolarAxesActor_GetPolarLabelVisibility, METH_VARARGS,
   "GetPolarLabelVisibility(self) -> bool\nC++: virtual bool GetPolarLabelVisibility()\n\n"},
  {"PolarLabelVisibilityOn", PyvtkPolarAxesActor_PolarLabelVisibilityOn, METH_VARARGS,
   "PolarLabelVisibilityOn(self) -> None\nC++: virtual void PolarLabelVisibilityOn()\n\n"},
  {"PolarLabelVisibilityOff", PyvtkPolarAxesActor_PolarLabelVisibilityOff, METH_VARARGS,
   "PolarLabelVisibilityOff(self) -> None\nC++: virtual void PolarLabelVisibilityOff()\n\n"},
  {"SetArcTicksOriginToPolarAxis", PyvtkPolarAxesActor_SetArcTicksOriginToPolarAxis, METH_VARARGS,
   "SetArcTicksOriginToPolarAxis(self, _arg:bool) -> None\nC++: virtual void SetArcTicksOriginToPolarAxis(bool _arg)\n\nIf On, the ticks are drawn from the angle of the polarAxis (i.e.\nthis->MinimalRadius) and continue counterclockwise with the step\nDeltaAngle Major/Minor. if Off, the start angle is 0.0, i.e. the\nangle on the major radius of the ellipse. Default: true.\n"},
  {"GetArcTicksOriginToPolarAxis", PyvtkPolarAxesActor_GetArcTicksOriginToPolarAxis, METH_VARARGS,
   "GetArcTicksOriginToPolarAxis(self) -> bool\nC++: virtual bool GetArcTicksOriginToPolarAxis()\n\n"},
  {"ArcTicksOriginToPolarAxisOn", PyvtkPolarAxesActor_ArcTicksOriginToPolarAxisOn, METH_VARARGS,
   "ArcTicksOriginToPolarAxisOn(self) -> None\nC++: virtual void ArcTicksOriginToPolarAxisOn()\n\n"},
  {"ArcTicksOriginToPolarAxisOff", PyvtkPolarAxesActor_ArcTicksOriginToPolarAxisOff, METH_VARARGS,
   "ArcTicksOriginToPolarAxisOff(self) -> None\nC++: virtual void ArcTicksOriginToPolarAxisOff()\n\n"},
  {"SetRadialAxesOriginToPolarAxis", PyvtkPolarAxesActor_SetRadialAxesOriginToPolarAxis, METH_VARARGS,
   "SetRadialAxesOriginToPolarAxis(self, _arg:bool) -> None\nC++: virtual void SetRadialAxesOriginToPolarAxis(bool _arg)\n\nIf On, the radial axes are drawn from the angle of the polarAxis\n(i.e. this->MinimalRadius) and continue counterclockwise with the\nstep DeltaAngleRadialAxes. if Off, the start angle is 0.0, i.e.\nthe angle on the major radius of the ellipse. Default: true.\n"},
  {"GetRadialAxesOriginToPolarAxis", PyvtkPolarAxesActor_GetRadialAxesOriginToPolarAxis, METH_VARARGS,
   "GetRadialAxesOriginToPolarAxis(self) -> bool\nC++: virtual bool GetRadialAxesOriginToPolarAxis()\n\n"},
  {"RadialAxesOriginToPolarAxisOn", PyvtkPolarAxesActor_RadialAxesOriginToPolarAxisOn, METH_VARARGS,
   "RadialAxesOriginToPolarAxisOn(self) -> None\nC++: virtual void RadialAxesOriginToPolarAxisOn()\n\n"},
  {"RadialAxesOriginToPolarAxisOff", PyvtkPolarAxesActor_RadialAxesOriginToPolarAxisOff, METH_VARARGS,
   "RadialAxesOriginToPolarAxisOff(self) -> None\nC++: virtual void RadialAxesOriginToPolarAxisOff()\n\n"},
  {"SetPolarTickVisibility", PyvtkPolarAxesActor_SetPolarTickVisibility, METH_VARARGS,
   "SetPolarTickVisibility(self, _arg:bool) -> None\nC++: virtual void SetPolarTickVisibility(bool _arg)\n\nTurn on and off the overall visibility of ticks. Default: true.\n"},
  {"GetPolarTickVisibility", PyvtkPolarAxesActor_GetPolarTickVisibility, METH_VARARGS,
   "GetPolarTickVisibility(self) -> bool\nC++: virtual bool GetPolarTickVisibility()\n\n"},
  {"PolarTickVisibilityOn", PyvtkPolarAxesActor_PolarTickVisibilityOn, METH_VARARGS,
   "PolarTickVisibilityOn(self) -> None\nC++: virtual void PolarTickVisibilityOn()\n\n"},
  {"PolarTickVisibilityOff", PyvtkPolarAxesActor_PolarTickVisibilityOff, METH_VARARGS,
   "PolarTickVisibilityOff(self) -> None\nC++: virtual void PolarTickVisibilityOff()\n\n"},
  {"SetAxisTickVisibility", PyvtkPolarAxesActor_SetAxisTickVisibility, METH_VARARGS,
   "SetAxisTickVisibility(self, _arg:bool) -> None\nC++: virtual void SetAxisTickVisibility(bool _arg)\n\nTurn on and off the visibility of major ticks on polar axis and\nlast radial axis. Default: true.\n"},
  {"GetAxisTickVisibility", PyvtkPolarAxesActor_GetAxisTickVisibility, METH_VARARGS,
   "GetAxisTickVisibility(self) -> bool\nC++: virtual bool GetAxisTickVisibility()\n\n"},
  {"AxisTickVisibilityOn", PyvtkPolarAxesActor_AxisTickVisibilityOn, METH_VARARGS,
   "AxisTickVisibilityOn(self) -> None\nC++: virtual void AxisTickVisibilityOn()\n\n"},
  {"AxisTickVisibilityOff", PyvtkPolarAxesActor_AxisTickVisibilityOff, METH_VARARGS,
   "AxisTickVisibilityOff(self) -> None\nC++: virtual void AxisTickVisibilityOff()\n\n"},
  {"SetAxisMinorTickVisibility", PyvtkPolarAxesActor_SetAxisMinorTickVisibility, METH_VARARGS,
   "SetAxisMinorTickVisibility(self, _arg:bool) -> None\nC++: virtual void SetAxisMinorTickVisibility(bool _arg)\n\nTurn on and off the visibility of minor ticks on polar axis and\nlast radial axis. Default: false.\n"},
  {"GetAxisMinorTickVisibility", PyvtkPolarAxesActor_GetAxisMinorTickVisibility, METH_VARARGS,
   "GetAxisMinorTickVisibility(self) -> bool\nC++: virtual bool GetAxisMinorTickVisibility()\n\n"},
  {"AxisMinorTickVisibilityOn", PyvtkPolarAxesActor_AxisMinorTickVisibilityOn, METH_VARARGS,
   "AxisMinorTickVisibilityOn(self) -> None\nC++: virtual void AxisMinorTickVisibilityOn()\n\n"},
  {"AxisMinorTickVisibilityOff", PyvtkPolarAxesActor_AxisMinorTickVisibilityOff, METH_VARARGS,
   "AxisMinorTickVisibilityOff(self) -> None\nC++: virtual void AxisMinorTickVisibilityOff()\n\n"},
  {"SetAxisTickMatchesPolarAxes", PyvtkPolarAxesActor_SetAxisTickMatchesPolarAxes, METH_VARARGS,
   "SetAxisTickMatchesPolarAxes(self, _arg:bool) -> None\nC++: virtual void SetAxisTickMatchesPolarAxes(bool _arg)\n\nTurn on and off the use of polar axes range for axis major ticks.\nDefault: true.\n"},
  {"GetAxisTickMatchesPolarAxes", PyvtkPolarAxesActor_GetAxisTickMatchesPolarAxes, METH_VARARGS,
   "GetAxisTickMatchesPolarAxes(self) -> bool\nC++: virtual bool GetAxisTickMatchesPolarAxes()\n\n"},
  {"AxisTickMatchesPolarAxesOn", PyvtkPolarAxesActor_AxisTickMatchesPolarAxesOn, METH_VARARGS,
   "AxisTickMatchesPolarAxesOn(self) -> None\nC++: virtual void AxisTickMatchesPolarAxesOn()\n\n"},
  {"AxisTickMatchesPolarAxesOff", PyvtkPolarAxesActor_AxisTickMatchesPolarAxesOff, METH_VARARGS,
   "AxisTickMatchesPolarAxesOff(self) -> None\nC++: virtual void AxisTickMatchesPolarAxesOff()\n\n"},
  {"SetArcTickVisibility", PyvtkPolarAxesActor_SetArcTickVisibility, METH_VARARGS,
   "SetArcTickVisibility(self, _arg:bool) -> None\nC++: virtual void SetArcTickVisibility(bool _arg)\n\nTurn on and off the visibility of major ticks on the last arc.\nDefault: true.\n"},
  {"GetArcTickVisibility", PyvtkPolarAxesActor_GetArcTickVisibility, METH_VARARGS,
   "GetArcTickVisibility(self) -> bool\nC++: virtual bool GetArcTickVisibility()\n\n"},
  {"ArcTickVisibilityOn", PyvtkPolarAxesActor_ArcTickVisibilityOn, METH_VARARGS,
   "ArcTickVisibilityOn(self) -> None\nC++: virtual void ArcTickVisibilityOn()\n\n"},
  {"ArcTickVisibilityOff", PyvtkPolarAxesActor_ArcTickVisibilityOff, METH_VARARGS,
   "ArcTickVisibilityOff(self) -> None\nC++: virtual void ArcTickVisibilityOff()\n\n"},
  {"SetArcMinorTickVisibility", PyvtkPolarAxesActor_SetArcMinorTickVisibility, METH_VARARGS,
   "SetArcMinorTickVisibility(self, _arg:bool) -> None\nC++: virtual void SetArcMinorTickVisibility(bool _arg)\n\nTurn on and off the visibility of minor ticks on the last arc.\nDefault: false.\n"},
  {"GetArcMinorTickVisibility", PyvtkPolarAxesActor_GetArcMinorTickVisibility, METH_VARARGS,
   "GetArcMinorTickVisibility(self) -> bool\nC++: virtual bool GetArcMinorTickVisibility()\n\n"},
  {"ArcMinorTickVisibilityOn", PyvtkPolarAxesActor_ArcMinorTickVisibilityOn, METH_VARARGS,
   "ArcMinorTickVisibilityOn(self) -> None\nC++: virtual void ArcMinorTickVisibilityOn()\n\n"},
  {"ArcMinorTickVisibilityOff", PyvtkPolarAxesActor_ArcMinorTickVisibilityOff, METH_VARARGS,
   "ArcMinorTickVisibilityOff(self) -> None\nC++: virtual void ArcMinorTickVisibilityOff()\n\n"},
  {"SetArcTickMatchesRadialAxes", PyvtkPolarAxesActor_SetArcTickMatchesRadialAxes, METH_VARARGS,
   "SetArcTickMatchesRadialAxes(self, _arg:bool) -> None\nC++: virtual void SetArcTickMatchesRadialAxes(bool _arg)\n\nTurn on and off the use of radial axes angle for arc major ticks.\nDefault: true.\n"},
  {"GetArcTickMatchesRadialAxes", PyvtkPolarAxesActor_GetArcTickMatchesRadialAxes, METH_VARARGS,
   "GetArcTickMatchesRadialAxes(self) -> bool\nC++: virtual bool GetArcTickMatchesRadialAxes()\n\n"},
  {"ArcTickMatchesRadialAxesOn", PyvtkPolarAxesActor_ArcTickMatchesRadialAxesOn, METH_VARARGS,
   "ArcTickMatchesRadialAxesOn(self) -> None\nC++: virtual void ArcTickMatchesRadialAxesOn()\n\n"},
  {"ArcTickMatchesRadialAxesOff", PyvtkPolarAxesActor_ArcTickMatchesRadialAxesOff, METH_VARARGS,
   "ArcTickMatchesRadialAxesOff(self) -> None\nC++: virtual void ArcTickMatchesRadialAxesOff()\n\n"},
  {"SetArcMajorTickSize", PyvtkPolarAxesActor_SetArcMajorTickSize, METH_VARARGS,
   "SetArcMajorTickSize(self, _arg:float) -> None\nC++: virtual void SetArcMajorTickSize(double _arg)\n\nSet/Get the size of the major ticks on the last arc. If set to 0,\ncompute it as a ratio of maximum radius. Default 0.\n"},
  {"GetArcMajorTickSize", PyvtkPolarAxesActor_GetArcMajorTickSize, METH_VARARGS,
   "GetArcMajorTickSize(self) -> float\nC++: virtual double GetArcMajorTickSize()\n\n"},
  {"SetPolarAxisMajorTickSize", PyvtkPolarAxesActor_SetPolarAxisMajorTickSize, METH_VARARGS,
   "SetPolarAxisMajorTickSize(self, _arg:float) -> None\nC++: virtual void SetPolarAxisMajorTickSize(double _arg)\n\nSet/Get the size of the major ticks on the polar axis. If set to\n0, compute it as a ratio of maximum radius. Default 0.\n"},
  {"GetPolarAxisMajorTickSize", PyvtkPolarAxesActor_GetPolarAxisMajorTickSize, METH_VARARGS,
   "GetPolarAxisMajorTickSize(self) -> float\nC++: virtual double GetPolarAxisMajorTickSize()\n\n"},
  {"SetLastRadialAxisMajorTickSize", PyvtkPolarAxesActor_SetLastRadialAxisMajorTickSize, METH_VARARGS,
   "SetLastRadialAxisMajorTickSize(self, _arg:float) -> None\nC++: virtual void SetLastRadialAxisMajorTickSize(double _arg)\n\nSet/Get the size of the major ticks on the last radial axis. If\nset to 0, compute it as a ratio of maximum radius. Default 0.\n"},
  {"GetLastRadialAxisMajorTickSize", PyvtkPolarAxesActor_GetLastRadialAxisMajorTickSize, METH_VARARGS,
   "GetLastRadialAxisMajorTickSize(self) -> float\nC++: virtual double GetLastRadialAxisMajorTickSize()\n\n"},
  {"SetPolarAxisTickRatioSize", PyvtkPolarAxesActor_SetPolarAxisTickRatioSize, METH_VARARGS,
   "SetPolarAxisTickRatioSize(self, _arg:float) -> None\nC++: virtual void SetPolarAxisTickRatioSize(double _arg)\n\nSet/Get the ratio between major and minor Polar Axis ticks size.\nDefault: 0.3.\n"},
  {"GetPolarAxisTickRatioSize", PyvtkPolarAxesActor_GetPolarAxisTickRatioSize, METH_VARARGS,
   "GetPolarAxisTickRatioSize(self) -> float\nC++: virtual double GetPolarAxisTickRatioSize()\n\n"},
  {"SetLastAxisTickRatioSize", PyvtkPolarAxesActor_SetLastAxisTickRatioSize, METH_VARARGS,
   "SetLastAxisTickRatioSize(self, _arg:float) -> None\nC++: virtual void SetLastAxisTickRatioSize(double _arg)\n\nSet/Get the ratio between major and minor Last Radial axis ticks\nsize. Default: 0.3.\n"},
  {"GetLastAxisTickRatioSize", PyvtkPolarAxesActor_GetLastAxisTickRatioSize, METH_VARARGS,
   "GetLastAxisTickRatioSize(self) -> float\nC++: virtual double GetLastAxisTickRatioSize()\n\n"},
  {"SetArcTickRatioSize", PyvtkPolarAxesActor_SetArcTickRatioSize, METH_VARARGS,
   "SetArcTickRatioSize(self, _arg:float) -> None\nC++: virtual void SetArcTickRatioSize(double _arg)\n\nSet/Get the ratio between major and minor Arc ticks size.\nDefault: 0.3.\n"},
  {"GetArcTickRatioSize", PyvtkPolarAxesActor_GetArcTickRatioSize, METH_VARARGS,
   "GetArcTickRatioSize(self) -> float\nC++: virtual double GetArcTickRatioSize()\n\n"},
  {"SetTickRatioRadiusSize", PyvtkPolarAxesActor_SetTickRatioRadiusSize, METH_VARARGS,
   "SetTickRatioRadiusSize(self, _arg:float) -> None\nC++: virtual void SetTickRatioRadiusSize(double _arg)\n\nSet/Get the ratio between maximum radius and major ticks size.\nDefault: 0.02.\n"},
  {"GetTickRatioRadiusSize", PyvtkPolarAxesActor_GetTickRatioRadiusSize, METH_VARARGS,
   "GetTickRatioRadiusSize(self) -> float\nC++: virtual double GetTickRatioRadiusSize()\n\n"},
  {"SetPolarAxisMajorTickThickness", PyvtkPolarAxesActor_SetPolarAxisMajorTickThickness, METH_VARARGS,
   "SetPolarAxisMajorTickThickness(self, _arg:float) -> None\nC++: virtual void SetPolarAxisMajorTickThickness(double _arg)\n\nSet/Get the size of the thickness of polar axis ticks. Default:\n1.\n"},
  {"GetPolarAxisMajorTickThickness", PyvtkPolarAxesActor_GetPolarAxisMajorTickThickness, METH_VARARGS,
   "GetPolarAxisMajorTickThickness(self) -> float\nC++: virtual double GetPolarAxisMajorTickThickness()\n\n"},
  {"SetLastRadialAxisMajorTickThickness", PyvtkPolarAxesActor_SetLastRadialAxisMajorTickThickness, METH_VARARGS,
   "SetLastRadialAxisMajorTickThickness(self, _arg:float) -> None\nC++: virtual void SetLastRadialAxisMajorTickThickness(double _arg)\n\nSet/Get the size of the thickness of last radial axis ticks.\nDefault: 1.\n"},
  {"GetLastRadialAxisMajorTickThickness", PyvtkPolarAxesActor_GetLastRadialAxisMajorTickThickness, METH_VARARGS,
   "GetLastRadialAxisMajorTickThickness(self) -> float\nC++: virtual double GetLastRadialAxisMajorTickThickness()\n\n"},
  {"SetArcMajorTickThickness", PyvtkPolarAxesActor_SetArcMajorTickThickness, METH_VARARGS,
   "SetArcMajorTickThickness(self, _arg:float) -> None\nC++: virtual void SetArcMajorTickThickness(double _arg)\n\nSet/Get the size of the thickness of the last arc ticks. Default:\n1.\n"},
  {"GetArcMajorTickThickness", PyvtkPolarAxesActor_GetArcMajorTickThickness, METH_VARARGS,
   "GetArcMajorTickThickness(self) -> float\nC++: virtual double GetArcMajorTickThickness()\n\n"},
  {"SetPolarAxisTickRatioThickness", PyvtkPolarAxesActor_SetPolarAxisTickRatioThickness, METH_VARARGS,
   "SetPolarAxisTickRatioThickness(self, _arg:float) -> None\nC++: virtual void SetPolarAxisTickRatioThickness(double _arg)\n\nSet/Get the ratio between major and minor Polar Axis ticks\nthickness. Default: 0.5.\n"},
  {"GetPolarAxisTickRatioThickness", PyvtkPolarAxesActor_GetPolarAxisTickRatioThickness, METH_VARARGS,
   "GetPolarAxisTickRatioThickness(self) -> float\nC++: virtual double GetPolarAxisTickRatioThickness()\n\n"},
  {"SetLastAxisTickRatioThickness", PyvtkPolarAxesActor_SetLastAxisTickRatioThickness, METH_VARARGS,
   "SetLastAxisTickRatioThickness(self, _arg:float) -> None\nC++: virtual void SetLastAxisTickRatioThickness(double _arg)\n\nSet/Get the ratio between major and minor Last Radial axis ticks\nthickness. Default: 0.5.\n"},
  {"GetLastAxisTickRatioThickness", PyvtkPolarAxesActor_GetLastAxisTickRatioThickness, METH_VARARGS,
   "GetLastAxisTickRatioThickness(self) -> float\nC++: virtual double GetLastAxisTickRatioThickness()\n\n"},
  {"SetArcTickRatioThickness", PyvtkPolarAxesActor_SetArcTickRatioThickness, METH_VARARGS,
   "SetArcTickRatioThickness(self, _arg:float) -> None\nC++: virtual void SetArcTickRatioThickness(double _arg)\n\nSet/Get the ratio between major and minor Arc ticks thickness.\nDefault: 0.5.\n"},
  {"GetArcTickRatioThickness", PyvtkPolarAxesActor_GetArcTickRatioThickness, METH_VARARGS,
   "GetArcTickRatioThickness(self) -> float\nC++: virtual double GetArcTickRatioThickness()\n\n"},
  {"SetDeltaRangeMajor", PyvtkPolarAxesActor_SetDeltaRangeMajor, METH_VARARGS,
   "SetDeltaRangeMajor(self, _arg:float) -> None\nC++: virtual void SetDeltaRangeMajor(double _arg)\n\nSet/Get the range between 2 major ticks (values displayed on the\naxis). Default: 1.\n"},
  {"GetDeltaRangeMajor", PyvtkPolarAxesActor_GetDeltaRangeMajor, METH_VARARGS,
   "GetDeltaRangeMajor(self) -> float\nC++: virtual double GetDeltaRangeMajor()\n\n"},
  {"SetDeltaRangeMinor", PyvtkPolarAxesActor_SetDeltaRangeMinor, METH_VARARGS,
   "SetDeltaRangeMinor(self, _arg:float) -> None\nC++: virtual void SetDeltaRangeMinor(double _arg)\n\nSet/Get the range between 2 minor ticks. Default: 0.5.\n"},
  {"GetDeltaRangeMinor", PyvtkPolarAxesActor_GetDeltaRangeMinor, METH_VARARGS,
   "GetDeltaRangeMinor(self) -> float\nC++: virtual double GetDeltaRangeMinor()\n\n"},
  {"SetRequestedDeltaRangePolarAxes", PyvtkPolarAxesActor_SetRequestedDeltaRangePolarAxes, METH_VARARGS,
   "SetRequestedDeltaRangePolarAxes(self, _arg:float) -> None\nC++: virtual void SetRequestedDeltaRangePolarAxes(double _arg)\n\nSet/Get requested delta range for polar axes. If set to 0,\ncompute it depending on count. Default: 0.\n"},
  {"GetRequestedDeltaRangePolarAxes", PyvtkPolarAxesActor_GetRequestedDeltaRangePolarAxes, METH_VARARGS,
   "GetRequestedDeltaRangePolarAxes(self) -> float\nC++: virtual double GetRequestedDeltaRangePolarAxes()\n\n"},
  {"SetDeltaAngleMajor", PyvtkPolarAxesActor_SetDeltaAngleMajor, METH_VARARGS,
   "SetDeltaAngleMajor(self, _arg:float) -> None\nC++: virtual void SetDeltaAngleMajor(double _arg)\n\nSet/Get the angle between 2 major ticks on the last arc. Default:\n45.\n"},
  {"GetDeltaAngleMajor", PyvtkPolarAxesActor_GetDeltaAngleMajor, METH_VARARGS,
   "GetDeltaAngleMajor(self) -> float\nC++: virtual double GetDeltaAngleMajor()\n\n"},
  {"SetDeltaAngleMinor", PyvtkPolarAxesActor_SetDeltaAngleMinor, METH_VARARGS,
   "SetDeltaAngleMinor(self, _arg:float) -> None\nC++: virtual void SetDeltaAngleMinor(double _arg)\n\nSet/Get the angle between 2 minor ticks on the last arc. Default:\n22.5.\n"},
  {"GetDeltaAngleMinor", PyvtkPolarAxesActor_GetDeltaAngleMinor, METH_VARARGS,
   "GetDeltaAngleMinor(self) -> float\nC++: virtual double GetDeltaAngleMinor()\n\n"},
  {"SetRequestedDeltaAngleRadialAxes", PyvtkPolarAxesActor_SetRequestedDeltaAngleRadialAxes, METH_VARARGS,
   "SetRequestedDeltaAngleRadialAxes(self, _arg:float) -> None\nC++: virtual void SetRequestedDeltaAngleRadialAxes(double _arg)\n\nSet/Get requested delta angle for radial axes. If set to 0,\ncompute it depending on count. Default: 45.\n"},
  {"GetRequestedDeltaAngleRadialAxes", PyvtkPolarAxesActor_GetRequestedDeltaAngleRadialAxes, METH_VARARGS,
   "GetRequestedDeltaAngleRadialAxes(self) -> float\nC++: virtual double GetRequestedDeltaAngleRadialAxes()\n\n"},
  {"SetRadialAxesVisibility", PyvtkPolarAxesActor_SetRadialAxesVisibility, METH_VARARGS,
   "SetRadialAxesVisibility(self, _arg:bool) -> None\nC++: virtual void SetRadialAxesVisibility(bool _arg)\n\nTurn on and off the visibility of non-polar radial axes. Default:\ntrue.\n"},
  {"GetRadialAxesVisibility", PyvtkPolarAxesActor_GetRadialAxesVisibility, METH_VARARGS,
   "GetRadialAxesVisibility(self) -> bool\nC++: virtual bool GetRadialAxesVisibility()\n\n"},
  {"RadialAxesVisibilityOn", PyvtkPolarAxesActor_RadialAxesVisibilityOn, METH_VARARGS,
   "RadialAxesVisibilityOn(self) -> None\nC++: virtual void RadialAxesVisibilityOn()\n\n"},
  {"RadialAxesVisibilityOff", PyvtkPolarAxesActor_RadialAxesVisibilityOff, METH_VARARGS,
   "RadialAxesVisibilityOff(self) -> None\nC++: virtual void RadialAxesVisibilityOff()\n\n"},
  {"SetRadialTitleVisibility", PyvtkPolarAxesActor_SetRadialTitleVisibility, METH_VARARGS,
   "SetRadialTitleVisibility(self, _arg:bool) -> None\nC++: virtual void SetRadialTitleVisibility(bool _arg)\n\nTurn on and off the visibility of titles for non-polar radial\naxes. Default: true.\n"},
  {"GetRadialTitleVisibility", PyvtkPolarAxesActor_GetRadialTitleVisibility, METH_VARARGS,
   "GetRadialTitleVisibility(self) -> bool\nC++: virtual bool GetRadialTitleVisibility()\n\n"},
  {"RadialTitleVisibilityOn", PyvtkPolarAxesActor_RadialTitleVisibilityOn, METH_VARARGS,
   "RadialTitleVisibilityOn(self) -> None\nC++: virtual void RadialTitleVisibilityOn()\n\n"},
  {"RadialTitleVisibilityOff", PyvtkPolarAxesActor_RadialTitleVisibilityOff, METH_VARARGS,
   "RadialTitleVisibilityOff(self) -> None\nC++: virtual void RadialTitleVisibilityOff()\n\n"},
  {"SetPolarArcsVisibility", PyvtkPolarAxesActor_SetPolarArcsVisibility, METH_VARARGS,
   "SetPolarArcsVisibility(self, _arg:bool) -> None\nC++: virtual void SetPolarArcsVisibility(bool _arg)\n\nTurn on and off the visibility of arcs for polar axis. Default:\ntrue.\n"},
  {"GetPolarArcsVisibility", PyvtkPolarAxesActor_GetPolarArcsVisibility, METH_VARARGS,
   "GetPolarArcsVisibility(self) -> bool\nC++: virtual bool GetPolarArcsVisibility()\n\n"},
  {"PolarArcsVisibilityOn", PyvtkPolarAxesActor_PolarArcsVisibilityOn, METH_VARARGS,
   "PolarArcsVisibilityOn(self) -> None\nC++: virtual void PolarArcsVisibilityOn()\n\n"},
  {"PolarArcsVisibilityOff", PyvtkPolarAxesActor_PolarArcsVisibilityOff, METH_VARARGS,
   "PolarArcsVisibilityOff(self) -> None\nC++: virtual void PolarArcsVisibilityOff()\n\n"},
  {"SetUse2DMode", PyvtkPolarAxesActor_SetUse2DMode, METH_VARARGS,
   "SetUse2DMode(self, enable:bool) -> None\nC++: void SetUse2DMode(bool enable)\n\nEnable/Disable labels 2D mode (always facing the camera).\n"},
  {"GetUse2DMode", PyvtkPolarAxesActor_GetUse2DMode, METH_VARARGS,
   "GetUse2DMode(self) -> bool\nC++: bool GetUse2DMode()\n\n"},
  {"SetPolarAxisTitleTextProperty", PyvtkPolarAxesActor_SetPolarAxisTitleTextProperty, METH_VARARGS,
   "SetPolarAxisTitleTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetPolarAxisTitleTextProperty(\n    vtkTextProperty *p)\n\nSet/Get the polar axis title text property.\n"},
  {"GetPolarAxisTitleTextProperty", PyvtkPolarAxesActor_GetPolarAxisTitleTextProperty, METH_VARARGS,
   "GetPolarAxisTitleTextProperty(self) -> vtkTextProperty\nC++: vtkTextProperty *GetPolarAxisTitleTextProperty()\n\n"},
  {"SetPolarAxisLabelTextProperty", PyvtkPolarAxesActor_SetPolarAxisLabelTextProperty, METH_VARARGS,
   "SetPolarAxisLabelTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetPolarAxisLabelTextProperty(\n    vtkTextProperty *p)\n\nSet/Get the polar axis labels text property.\n"},
  {"GetPolarAxisLabelTextProperty", PyvtkPolarAxesActor_GetPolarAxisLabelTextProperty, METH_VARARGS,
   "GetPolarAxisLabelTextProperty(self) -> vtkTextProperty\nC++: vtkTextProperty *GetPolarAxisLabelTextProperty()\n\n"},
  {"SetLastRadialAxisTextProperty", PyvtkPolarAxesActor_SetLastRadialAxisTextProperty, METH_VARARGS,
   "SetLastRadialAxisTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetLastRadialAxisTextProperty(\n    vtkTextProperty *p)\n\nSet/Get the last radial axis text property.\n"},
  {"GetLastRadialAxisTextProperty", PyvtkPolarAxesActor_GetLastRadialAxisTextProperty, METH_VARARGS,
   "GetLastRadialAxisTextProperty(self) -> vtkTextProperty\nC++: vtkTextProperty *GetLastRadialAxisTextProperty()\n\n"},
  {"SetSecondaryRadialAxesTextProperty", PyvtkPolarAxesActor_SetSecondaryRadialAxesTextProperty, METH_VARARGS,
   "SetSecondaryRadialAxesTextProperty(self, p:vtkTextProperty)\n    -> None\nC++: virtual void SetSecondaryRadialAxesTextProperty(\n    vtkTextProperty *p)\n\nSet/Get the secondary radial axes text property.\n"},
  {"GetSecondaryRadialAxesTextProperty", PyvtkPolarAxesActor_GetSecondaryRadialAxesTextProperty, METH_VARARGS,
   "GetSecondaryRadialAxesTextProperty(self) -> vtkTextProperty\nC++: vtkTextProperty *GetSecondaryRadialAxesTextProperty()\n\n"},
  {"SetPolarAxisProperty", PyvtkPolarAxesActor_SetPolarAxisProperty, METH_VARARGS,
   "SetPolarAxisProperty(self, __a:vtkProperty) -> None\nC++: virtual void SetPolarAxisProperty(vtkProperty *)\n\nGet/Set polar axis actor properties.\n"},
  {"GetPolarAxisProperty", PyvtkPolarAxesActor_GetPolarAxisProperty, METH_VARARGS,
   "GetPolarAxisProperty(self) -> vtkProperty\nC++: vtkProperty *GetPolarAxisProperty()\n\n"},
  {"SetLastRadialAxisProperty", PyvtkPolarAxesActor_SetLastRadialAxisProperty, METH_VARARGS,
   "SetLastRadialAxisProperty(self, p:vtkProperty) -> None\nC++: virtual void SetLastRadialAxisProperty(vtkProperty *p)\n\nGet/Set last radial axis actor properties.\n"},
  {"GetLastRadialAxisProperty", PyvtkPolarAxesActor_GetLastRadialAxisProperty, METH_VARARGS,
   "GetLastRadialAxisProperty(self) -> vtkProperty\nC++: vtkProperty *GetLastRadialAxisProperty()\n\n"},
  {"SetSecondaryRadialAxesProperty", PyvtkPolarAxesActor_SetSecondaryRadialAxesProperty, METH_VARARGS,
   "SetSecondaryRadialAxesProperty(self, p:vtkProperty) -> None\nC++: virtual void SetSecondaryRadialAxesProperty(vtkProperty *p)\n\nGet/Set secondary radial axes actors properties.\n"},
  {"GetSecondaryRadialAxesProperty", PyvtkPolarAxesActor_GetSecondaryRadialAxesProperty, METH_VARARGS,
   "GetSecondaryRadialAxesProperty(self) -> vtkProperty\nC++: vtkProperty *GetSecondaryRadialAxesProperty()\n\n"},
  {"SetPolarArcsProperty", PyvtkPolarAxesActor_SetPolarArcsProperty, METH_VARARGS,
   "SetPolarArcsProperty(self, p:vtkProperty) -> None\nC++: virtual void SetPolarArcsProperty(vtkProperty *p)\n\nGet/Set principal polar arc actor property.\n"},
  {"GetPolarArcsProperty", PyvtkPolarAxesActor_GetPolarArcsProperty, METH_VARARGS,
   "GetPolarArcsProperty(self) -> vtkProperty\nC++: vtkProperty *GetPolarArcsProperty()\n\n"},
  {"SetSecondaryPolarArcsProperty", PyvtkPolarAxesActor_SetSecondaryPolarArcsProperty, METH_VARARGS,
   "SetSecondaryPolarArcsProperty(self, p:vtkProperty) -> None\nC++: virtual void SetSecondaryPolarArcsProperty(vtkProperty *p)\n\nGet/Set secondary polar arcs actors property.\n"},
  {"GetSecondaryPolarArcsProperty", PyvtkPolarAxesActor_GetSecondaryPolarArcsProperty, METH_VARARGS,
   "GetSecondaryPolarArcsProperty(self) -> vtkProperty\nC++: vtkProperty *GetSecondaryPolarArcsProperty()\n\n"},
  {"SetBounds", PyvtkPolarAxesActor_SetBounds, METH_VARARGS,
   "SetBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetBounds(self, _arg:(float, float, float, float, float, float))\n    -> None\nC++: virtual void SetBounds(const double _arg[6])\n\nExplicitly specify the region in space around which to draw the\nbounds. The bounds are used only when no Input or Prop is\nspecified. The bounds are specified according to (xmin,xmax,\nymin,ymax, zmin,zmax), making sure that the min's are less than the\nmax's. Default: (-1, 1, -1, 1, -1, 1).\n"},
  {"GetBounds", PyvtkPolarAxesActor_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, xmin:float, xmax:float, ymin:float, ymax:float,\n    zmin:float, zmax:float) -> None\nC++: void GetBounds(double &xmin, double &xmax, double &ymin,\n    double &ymax, double &zmin, double &zmax)\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nGet the bounds for this Prop as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\nin world coordinates. NULL means that the bounds are not defined.\n"},
  {"SetRatio", PyvtkPolarAxesActor_SetRatio, METH_VARARGS,
   "SetRatio(self, _arg:float) -> None\nC++: virtual void SetRatio(double _arg)\n\nRatio. Default: 1.\n"},
  {"GetRatioMinValue", PyvtkPolarAxesActor_GetRatioMinValue, METH_VARARGS,
   "GetRatioMinValue(self) -> float\nC++: virtual double GetRatioMinValue()\n\n"},
  {"GetRatioMaxValue", PyvtkPolarAxesActor_GetRatioMaxValue, METH_VARARGS,
   "GetRatioMaxValue(self) -> float\nC++: virtual double GetRatioMaxValue()\n\n"},
  {"GetRatio", PyvtkPolarAxesActor_GetRatio, METH_VARARGS,
   "GetRatio(self) -> float\nC++: virtual double GetRatio()\n\n"},
  {"SetPolarArcResolutionPerDegree", PyvtkPolarAxesActor_SetPolarArcResolutionPerDegree, METH_VARARGS,
   "SetPolarArcResolutionPerDegree(self, _arg:float) -> None\nC++: virtual void SetPolarArcResolutionPerDegree(double _arg)\n\nSet/Get the number of line per degree to draw polar arc. Default:\n0.2.\n"},
  {"GetPolarArcResolutionPerDegreeMinValue", PyvtkPolarAxesActor_GetPolarArcResolutionPerDegreeMinValue, METH_VARARGS,
   "GetPolarArcResolutionPerDegreeMinValue(self) -> float\nC++: virtual double GetPolarArcResolutionPerDegreeMinValue()\n\n"},
  {"GetPolarArcResolutionPerDegreeMaxValue", PyvtkPolarAxesActor_GetPolarArcResolutionPerDegreeMaxValue, METH_VARARGS,
   "GetPolarArcResolutionPerDegreeMaxValue(self) -> float\nC++: virtual double GetPolarArcResolutionPerDegreeMaxValue()\n\n"},
  {"GetPolarArcResolutionPerDegree", PyvtkPolarAxesActor_GetPolarArcResolutionPerDegree, METH_VARARGS,
   "GetPolarArcResolutionPerDegree(self) -> float\nC++: virtual double GetPolarArcResolutionPerDegree()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPolarAxesActor_Doc =
  "vtkPolarAxesActor - create an actor of a polar axes -\n\n"
  "Superclass: vtkActor\n\n"
  "vtkPolarAxesActor is a composite actor that draws polar axes in a\n"
  "specified plane for a give pole. Currently the plane has to be the xy\n"
  "plane.\n\n"
  "@par Thanks: This class was written by Philippe Pebay, Kitware SAS\n"
  "2011. This work was supported by CEA/DIF - Commissariat a l'Energie\n"
  "Atomique, Centre DAM Ile-De-France, BP12, F-91297 Arpajon, France.\n\n"
  "@sa\n"
  "vtkActor vtkAxisActor vtkPolarAxesActor\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolarAxesActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkPolarAxesActor", // tp_name
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
  PyvtkPolarAxesActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolarAxesActor_StaticNew()
{
  return vtkPolarAxesActor::New();
}

PyObject *PyvtkPolarAxesActor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolarAxesActor_Type, PyvtkPolarAxesActor_Methods,
    "vtkPolarAxesActor",
 &PyvtkPolarAxesActor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkActor");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPolarAxesActor_ExponentLocation_Type);
  PyVTKEnum_Add(&PyvtkPolarAxesActor_ExponentLocation_Type, "vtkPolarAxesActor.ExponentLocation");

  o = (PyObject *)&PyvtkPolarAxesActor_ExponentLocation_Type;
  if (PyDict_SetItemString(d, "ExponentLocation", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkPolarAxesActor_TitleLocation_Type);
  PyVTKEnum_Add(&PyvtkPolarAxesActor_TitleLocation_Type, "vtkPolarAxesActor.TitleLocation");

  o = (PyObject *)&PyvtkPolarAxesActor_TitleLocation_Type;
  if (PyDict_SetItemString(d, "TitleLocation", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_EXPONENT_BOTTOM", vtkPolarAxesActor::VTK_EXPONENT_BOTTOM },
        { "VTK_EXPONENT_EXTERN", vtkPolarAxesActor::VTK_EXPONENT_EXTERN },
        { "VTK_EXPONENT_LABELS", vtkPolarAxesActor::VTK_EXPONENT_LABELS },
      };

    o = PyvtkPolarAxesActor_ExponentLocation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkPolarAxesActor::TitleLocation cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "VTK_TITLE_BOTTOM", vtkPolarAxesActor::VTK_TITLE_BOTTOM },
        { "VTK_TITLE_EXTERN", vtkPolarAxesActor::VTK_TITLE_EXTERN },
      };

    o = PyvtkPolarAxesActor_TitleLocation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolarAxesActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolarAxesActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolarAxesActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

