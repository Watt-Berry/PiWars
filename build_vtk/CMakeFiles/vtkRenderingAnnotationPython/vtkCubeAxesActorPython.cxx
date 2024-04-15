// python wrapper for vtkCubeAxesActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCubeAxesActor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCubeAxesActor(PyObject *dict); }
extern "C" { PyObject *PyvtkCubeAxesActor_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCubeAxesActor_FlyMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkCubeAxesActor.FlyMode", // tp_name
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
PyObject *PyvtkCubeAxesActor_FlyMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCubeAxesActor_FlyMode_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCubeAxesActor_TickLocation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkCubeAxesActor.TickLocation", // tp_name
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
PyObject *PyvtkCubeAxesActor_TickLocation_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCubeAxesActor_TickLocation_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCubeAxesActor_GridVisibility_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkCubeAxesActor.GridVisibility", // tp_name
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
PyObject *PyvtkCubeAxesActor_GridVisibility_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCubeAxesActor_GridVisibility_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCubeAxesActor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCubeAxesActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCubeAxesActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCubeAxesActor *tempr = vtkCubeAxesActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCubeAxesActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCubeAxesActor::NewInstance());

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
PyvtkCubeAxesActor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCubeAxesActor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCubeAxesActor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCubeAxesActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_RenderTranslucentGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentGeometry(temp0) :
      op->vtkCubeAxesActor::RenderTranslucentGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCubeAxesActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCubeAxesActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCubeAxesActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetRebuildAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRebuildAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRebuildAxes(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetRebuildAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetRebuildAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRebuildAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRebuildAxes() :
      op->vtkCubeAxesActor::GetRebuildAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkCubeAxesActor_SetBounds_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}


static PyObject *
PyvtkCubeAxesActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkCubeAxesActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::GetBounds(temp0);
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
PyvtkCubeAxesActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkCubeAxesActor_GetBounds_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkCubeAxesActor_GetRenderedBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->GetRenderedBounds(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::GetRenderedBounds(temp0);
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
PyvtkCubeAxesActor_GetRenderedBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRenderedBounds() :
      op->vtkCubeAxesActor::GetRenderedBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_GetRenderedBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCubeAxesActor_GetRenderedBounds_s1(self, args);
    case 0:
      return PyvtkCubeAxesActor_GetRenderedBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRenderedBounds");
  return nullptr;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetXAxisRange(temp0, temp1);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxisRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetXAxisRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisRange(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxisRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetXAxisRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCubeAxesActor_SetXAxisRange_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetXAxisRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXAxisRange");
  return nullptr;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetYAxisRange(temp0, temp1);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxisRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetYAxisRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisRange(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxisRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetYAxisRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCubeAxesActor_SetYAxisRange_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetYAxisRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetYAxisRange");
  return nullptr;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetZAxisRange(temp0, temp1);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxisRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetZAxisRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetZAxisRange(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxisRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetZAxisRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCubeAxesActor_SetZAxisRange_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetZAxisRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZAxisRange");
  return nullptr;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetXAxisRange() :
      op->vtkCubeAxesActor::GetXAxisRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetYAxisRange() :
      op->vtkCubeAxesActor::GetYAxisRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAxisLabels(temp0) :
      op->vtkCubeAxesActor::GetAxisLabels(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  vtkStringArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabels(temp0, temp1);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisLabels(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetZAxisRange() :
      op->vtkCubeAxesActor::GetZAxisRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetScreenSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkCubeAxesActor::GetScreenSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelOffset(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetLabelOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelOffset() :
      op->vtkCubeAxesActor::GetLabelOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTitleOffset_s1(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetTitleOffset."
    " (" "Use the new setters as it's now a 2d vector" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleOffset(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetTitleOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetTitleOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->SetTitleOffset(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetTitleOffset(temp0);
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

static PyMethodDef PyvtkCubeAxesActor_SetTitleOffset_Methods[] = {
  {"SetTitleOffset", PyvtkCubeAxesActor_SetTitleOffset_s1, METH_VARARGS,
   "@d"},
  {"SetTitleOffset", PyvtkCubeAxesActor_SetTitleOffset_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCubeAxesActor_SetTitleOffset(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCubeAxesActor_SetTitleOffset_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTitleOffset");
  return nullptr;
}


static PyObject *
PyvtkCubeAxesActor_GetTitleOffset_s1(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetTitleOffset."
    " (" "Use the new getter as it's now a 2d vector" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTitleOffset() :
      op->vtkCubeAxesActor::GetTitleOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_GetTitleOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetTitleOffset(temp0, temp1);
    }
    else
    {
      op->vtkCubeAxesActor::GetTitleOffset(temp0, temp1);
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
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_GetTitleOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkCubeAxesActor_GetTitleOffset_s1(self, args);
    case 2:
      return PyvtkCubeAxesActor_GetTitleOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTitleOffset");
  return nullptr;
}


static PyObject *
PyvtkCubeAxesActor_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkCubeAxesActor::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlyMode(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetFlyMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetFlyModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlyModeMinValue() :
      op->vtkCubeAxesActor::GetFlyModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetFlyModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlyModeMaxValue() :
      op->vtkCubeAxesActor::GetFlyModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetFlyMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlyMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlyMode() :
      op->vtkCubeAxesActor::GetFlyMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToOuterEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToOuterEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFlyModeToOuterEdges();
    }
    else
    {
      op->vtkCubeAxesActor::SetFlyModeToOuterEdges();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToClosestTriad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToClosestTriad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFlyModeToClosestTriad();
    }
    else
    {
      op->vtkCubeAxesActor::SetFlyModeToClosestTriad();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToFurthestTriad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToFurthestTriad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFlyModeToFurthestTriad();
    }
    else
    {
      op->vtkCubeAxesActor::SetFlyModeToFurthestTriad();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToStaticTriad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToStaticTriad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFlyModeToStaticTriad();
    }
    else
    {
      op->vtkCubeAxesActor::SetFlyModeToStaticTriad();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetFlyModeToStaticEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlyModeToStaticEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFlyModeToStaticEdges();
    }
    else
    {
      op->vtkCubeAxesActor::SetFlyModeToStaticEdges();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXTitle(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXTitle() :
      op->vtkCubeAxesActor::GetXTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXUnits(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXUnits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXUnits() :
      op->vtkCubeAxesActor::GetXUnits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYTitle(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYTitle() :
      op->vtkCubeAxesActor::GetYTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYUnits(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYUnits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYUnits() :
      op->vtkCubeAxesActor::GetYUnits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZTitle(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetZTitle() :
      op->vtkCubeAxesActor::GetZTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZUnits(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZUnits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetZUnits() :
      op->vtkCubeAxesActor::GetZUnits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXLabelFormat(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXLabelFormat() :
      op->vtkCubeAxesActor::GetXLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYLabelFormat(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYLabelFormat() :
      op->vtkCubeAxesActor::GetYLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZLabelFormat(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetZLabelFormat() :
      op->vtkCubeAxesActor::GetZLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetInertia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInertia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInertia(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetInertia(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetInertiaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertiaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInertiaMinValue() :
      op->vtkCubeAxesActor::GetInertiaMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetInertiaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertiaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInertiaMaxValue() :
      op->vtkCubeAxesActor::GetInertiaMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetInertia(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInertia");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInertia() :
      op->vtkCubeAxesActor::GetInertia());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCornerOffset(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetCornerOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffset() :
      op->vtkCubeAxesActor::GetCornerOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetEnableDistanceLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetEnableDistanceLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableDistanceLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableDistanceLOD() :
      op->vtkCubeAxesActor::GetEnableDistanceLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetDistanceLODThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDistanceLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMinValue() :
      op->vtkCubeAxesActor::GetDistanceLODThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDistanceLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThresholdMaxValue() :
      op->vtkCubeAxesActor::GetDistanceLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDistanceLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceLODThreshold() :
      op->vtkCubeAxesActor::GetDistanceLODThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetEnableViewAngleLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetEnableViewAngleLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableViewAngleLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableViewAngleLOD() :
      op->vtkCubeAxesActor::GetEnableViewAngleLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetViewAngleLODThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetViewAngleLODThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMinValue() :
      op->vtkCubeAxesActor::GetViewAngleLODThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetViewAngleLODThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThresholdMaxValue() :
      op->vtkCubeAxesActor::GetViewAngleLODThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetViewAngleLODThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleLODThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetViewAngleLODThreshold() :
      op->vtkCubeAxesActor::GetViewAngleLODThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetXAxisVisibility() :
      op->vtkCubeAxesActor::GetXAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::XAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::XAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetYAxisVisibility() :
      op->vtkCubeAxesActor::GetYAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::YAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::YAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZAxisVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetZAxisVisibility() :
      op->vtkCubeAxesActor::GetZAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::ZAxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::ZAxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisLabelVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxisLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetXAxisLabelVisibility() :
      op->vtkCubeAxesActor::GetXAxisLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisLabelVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::XAxisLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisLabelVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::XAxisLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisLabelVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxisLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetYAxisLabelVisibility() :
      op->vtkCubeAxesActor::GetYAxisLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisLabelVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::YAxisLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisLabelVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::YAxisLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZAxisLabelVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxisLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetZAxisLabelVisibility() :
      op->vtkCubeAxesActor::GetZAxisLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisLabelVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::ZAxisLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisLabelVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::ZAxisLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisTickVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxisTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetXAxisTickVisibility() :
      op->vtkCubeAxesActor::GetXAxisTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisTickVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::XAxisTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisTickVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::XAxisTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisTickVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxisTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetYAxisTickVisibility() :
      op->vtkCubeAxesActor::GetYAxisTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisTickVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::YAxisTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisTickVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::YAxisTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZAxisTickVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxisTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetZAxisTickVisibility() :
      op->vtkCubeAxesActor::GetZAxisTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisTickVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::ZAxisTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisTickVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::ZAxisTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisMinorTickVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxisMinorTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetXAxisMinorTickVisibility() :
      op->vtkCubeAxesActor::GetXAxisMinorTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisMinorTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisMinorTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisMinorTickVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::XAxisMinorTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_XAxisMinorTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XAxisMinorTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XAxisMinorTickVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::XAxisMinorTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisMinorTickVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxisMinorTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetYAxisMinorTickVisibility() :
      op->vtkCubeAxesActor::GetYAxisMinorTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisMinorTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisMinorTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisMinorTickVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::YAxisMinorTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_YAxisMinorTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YAxisMinorTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YAxisMinorTickVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::YAxisMinorTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZAxisMinorTickVisibility(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxisMinorTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxisMinorTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisMinorTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetZAxisMinorTickVisibility() :
      op->vtkCubeAxesActor::GetZAxisMinorTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisMinorTickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisMinorTickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisMinorTickVisibilityOn();
    }
    else
    {
      op->vtkCubeAxesActor::ZAxisMinorTickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_ZAxisMinorTickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZAxisMinorTickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZAxisMinorTickVisibilityOff();
    }
    else
    {
      op->vtkCubeAxesActor::ZAxisMinorTickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawXGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawXGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawXGridlines(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawXGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawXGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawXGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawXGridlines() :
      op->vtkCubeAxesActor::GetDrawXGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawXGridlinesOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawXGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawXGridlinesOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawXGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawYGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawYGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawYGridlines(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawYGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawYGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawYGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawYGridlines() :
      op->vtkCubeAxesActor::GetDrawYGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawYGridlinesOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawYGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawYGridlinesOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawYGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawZGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawZGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawZGridlines(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawZGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawZGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawZGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawZGridlines() :
      op->vtkCubeAxesActor::GetDrawZGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawZGridlinesOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawZGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawZGridlinesOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawZGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawXInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawXInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawXInnerGridlines(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawXInnerGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawXInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawXInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawXInnerGridlines() :
      op->vtkCubeAxesActor::GetDrawXInnerGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXInnerGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXInnerGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawXInnerGridlinesOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawXInnerGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXInnerGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXInnerGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawXInnerGridlinesOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawXInnerGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawYInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawYInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawYInnerGridlines(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawYInnerGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawYInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawYInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawYInnerGridlines() :
      op->vtkCubeAxesActor::GetDrawYInnerGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYInnerGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYInnerGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawYInnerGridlinesOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawYInnerGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYInnerGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYInnerGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawYInnerGridlinesOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawYInnerGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawZInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawZInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawZInnerGridlines(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawZInnerGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawZInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawZInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawZInnerGridlines() :
      op->vtkCubeAxesActor::GetDrawZInnerGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZInnerGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZInnerGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawZInnerGridlinesOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawZInnerGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZInnerGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZInnerGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawZInnerGridlinesOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawZInnerGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawXGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawXGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawXGridpolys(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawXGridpolys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawXGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawXGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawXGridpolys() :
      op->vtkCubeAxesActor::GetDrawXGridpolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXGridpolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXGridpolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawXGridpolysOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawXGridpolysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawXGridpolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawXGridpolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawXGridpolysOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawXGridpolysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawYGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawYGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawYGridpolys(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawYGridpolys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawYGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawYGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawYGridpolys() :
      op->vtkCubeAxesActor::GetDrawYGridpolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYGridpolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYGridpolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawYGridpolysOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawYGridpolysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawYGridpolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawYGridpolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawYGridpolysOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawYGridpolysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetDrawZGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawZGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawZGridpolys(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetDrawZGridpolys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetDrawZGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawZGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawZGridpolys() :
      op->vtkCubeAxesActor::GetDrawZGridpolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZGridpolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZGridpolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawZGridpolysOn();
    }
    else
    {
      op->vtkCubeAxesActor::DrawZGridpolysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_DrawZGridpolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawZGridpolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawZGridpolysOff();
    }
    else
    {
      op->vtkCubeAxesActor::DrawZGridpolysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty(temp0) :
      op->vtkCubeAxesActor::GetTitleTextProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty(temp0) :
      op->vtkCubeAxesActor::GetLabelTextProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetXAxesLinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxesLinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxesLinesProperty() :
      op->vtkCubeAxesActor::GetXAxesLinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetYAxesLinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxesLinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxesLinesProperty() :
      op->vtkCubeAxesActor::GetYAxesLinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetZAxesLinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxesLinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxesLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxesLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxesLinesProperty() :
      op->vtkCubeAxesActor::GetZAxesLinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetXAxesGridlinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxesGridlinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxesGridlinesProperty() :
      op->vtkCubeAxesActor::GetXAxesGridlinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetYAxesGridlinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxesGridlinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxesGridlinesProperty() :
      op->vtkCubeAxesActor::GetYAxesGridlinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetZAxesGridlinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxesGridlinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxesGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxesGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxesGridlinesProperty() :
      op->vtkCubeAxesActor::GetZAxesGridlinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetXAxesInnerGridlinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxesInnerGridlinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxesInnerGridlinesProperty() :
      op->vtkCubeAxesActor::GetXAxesInnerGridlinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetYAxesInnerGridlinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxesInnerGridlinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxesInnerGridlinesProperty() :
      op->vtkCubeAxesActor::GetYAxesInnerGridlinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetZAxesInnerGridlinesProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxesInnerGridlinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxesInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxesInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxesInnerGridlinesProperty() :
      op->vtkCubeAxesActor::GetZAxesInnerGridlinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetXAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetXAxesGridpolysProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetXAxesGridpolysProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetXAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxesGridpolysProperty() :
      op->vtkCubeAxesActor::GetXAxesGridpolysProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetYAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetYAxesGridpolysProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetYAxesGridpolysProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetYAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxesGridpolysProperty() :
      op->vtkCubeAxesActor::GetYAxesGridpolysProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetZAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetZAxesGridpolysProperty(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetZAxesGridpolysProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetZAxesGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxesGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxesGridpolysProperty() :
      op->vtkCubeAxesActor::GetZAxesGridpolysProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetTickLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTickLocationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLocationMinValue() :
      op->vtkCubeAxesActor::GetTickLocationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTickLocationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLocationMaxValue() :
      op->vtkCubeAxesActor::GetTickLocationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLocation() :
      op->vtkCubeAxesActor::GetTickLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTickLocationToInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTickLocationToInside();
    }
    else
    {
      op->vtkCubeAxesActor::SetTickLocationToInside();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTickLocationToOutside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToOutside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTickLocationToOutside();
    }
    else
    {
      op->vtkCubeAxesActor::SetTickLocationToOutside();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetTickLocationToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTickLocationToBoth();
    }
    else
    {
      op->vtkCubeAxesActor::SetTickLocationToBoth();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetLabelScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetLabelScaling(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkCubeAxesActor::SetLabelScaling(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetUseTextActor3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTextActor3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseTextActor3D(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetUseTextActor3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetUseTextActor3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTextActor3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseTextActor3D() :
      op->vtkCubeAxesActor::GetUseTextActor3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetUse2DMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUse2DMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->vtkCubeAxesActor::SetUse2DMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetUse2DMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUse2DMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUse2DMode() :
      op->vtkCubeAxesActor::GetUse2DMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetSaveTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSaveTitlePosition(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetSaveTitlePosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetOrientedBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->SetOrientedBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkCubeAxesActor::SetOrientedBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetOrientedBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrientedBounds(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetOrientedBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetOrientedBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkCubeAxesActor_SetOrientedBounds_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetOrientedBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrientedBounds");
  return nullptr;
}


static PyObject *
PyvtkCubeAxesActor_GetOrientedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientedBounds() :
      op->vtkCubeAxesActor::GetOrientedBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetUseOrientedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOrientedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOrientedBounds(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetUseOrientedBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetUseOrientedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOrientedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseOrientedBounds() :
      op->vtkCubeAxesActor::GetUseOrientedBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->SetAxisBaseForX(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisBaseForX(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisBaseForX(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisBaseForX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCubeAxesActor_SetAxisBaseForX_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetAxisBaseForX_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForX");
  return nullptr;
}


static PyObject *
PyvtkCubeAxesActor_GetAxisBaseForX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForX() :
      op->vtkCubeAxesActor::GetAxisBaseForX());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->SetAxisBaseForY(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisBaseForY(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisBaseForY(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisBaseForY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCubeAxesActor_SetAxisBaseForY_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetAxisBaseForY_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForY");
  return nullptr;
}


static PyObject *
PyvtkCubeAxesActor_GetAxisBaseForY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForY() :
      op->vtkCubeAxesActor::GetAxisBaseForY());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->SetAxisBaseForZ(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisBaseForZ(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisBaseForZ(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisBaseForZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisBaseForZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCubeAxesActor_SetAxisBaseForZ_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetAxisBaseForZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForZ");
  return nullptr;
}


static PyObject *
PyvtkCubeAxesActor_GetAxisBaseForZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForZ() :
      op->vtkCubeAxesActor::GetAxisBaseForZ());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetAxisOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

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
      op->SetAxisOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisOrigin(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetAxisOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeAxesActor_SetAxisOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCubeAxesActor_SetAxisOrigin_s1(self, args);
    case 1:
      return PyvtkCubeAxesActor_SetAxisOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisOrigin");
  return nullptr;
}


static PyObject *
PyvtkCubeAxesActor_GetAxisOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisOrigin() :
      op->vtkCubeAxesActor::GetAxisOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetUseAxisOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAxisOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseAxisOrigin(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetUseAxisOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetUseAxisOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAxisOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseAxisOrigin() :
      op->vtkCubeAxesActor::GetUseAxisOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetGridLineLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridLineLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridLineLocation(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetGridLineLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetGridLineLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridLineLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGridLineLocation() :
      op->vtkCubeAxesActor::GetGridLineLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetStickyAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStickyAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStickyAxes(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetStickyAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetStickyAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStickyAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetStickyAxes() :
      op->vtkCubeAxesActor::GetStickyAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_StickyAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StickyAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StickyAxesOn();
    }
    else
    {
      op->vtkCubeAxesActor::StickyAxesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_StickyAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StickyAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StickyAxesOff();
    }
    else
    {
      op->vtkCubeAxesActor::StickyAxesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_SetCenterStickyAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterStickyAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterStickyAxes(temp0);
    }
    else
    {
      op->vtkCubeAxesActor::SetCenterStickyAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_GetCenterStickyAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterStickyAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCenterStickyAxes() :
      op->vtkCubeAxesActor::GetCenterStickyAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_CenterStickyAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterStickyAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterStickyAxesOn();
    }
    else
    {
      op->vtkCubeAxesActor::CenterStickyAxesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeAxesActor_CenterStickyAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterStickyAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeAxesActor *op = static_cast<vtkCubeAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterStickyAxesOff();
    }
    else
    {
      op->vtkCubeAxesActor::CenterStickyAxesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCubeAxesActor_Methods[] = {
  {"IsTypeOf", PyvtkCubeAxesActor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCubeAxesActor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCubeAxesActor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCubeAxesActor\nC++: static vtkCubeAxesActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCubeAxesActor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCubeAxesActor\nC++: vtkCubeAxesActor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCubeAxesActor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCubeAxesActor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RenderOpaqueGeometry", PyvtkCubeAxesActor_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nDraw the axes as per the vtkProp superclass' API.\n"},
  {"RenderTranslucentGeometry", PyvtkCubeAxesActor_RenderTranslucentGeometry, METH_VARARGS,
   "RenderTranslucentGeometry(self, __a:vtkViewport) -> int\nC++: virtual int RenderTranslucentGeometry(vtkViewport *)\n\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkCubeAxesActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"RenderOverlay", PyvtkCubeAxesActor_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, __a:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCubeAxesActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some opaque/translucent polygonal geometry?\n"},
  {"SetRebuildAxes", PyvtkCubeAxesActor_SetRebuildAxes, METH_VARARGS,
   "SetRebuildAxes(self, _arg:bool) -> None\nC++: virtual void SetRebuildAxes(bool _arg)\n\nGets/Sets the RebuildAxes flag. Default: true.\n"},
  {"GetRebuildAxes", PyvtkCubeAxesActor_GetRebuildAxes, METH_VARARGS,
   "GetRebuildAxes(self) -> bool\nC++: virtual bool GetRebuildAxes()\n\n"},
  {"SetBounds", PyvtkCubeAxesActor_SetBounds, METH_VARARGS,
   "SetBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetBounds(self, _arg:(float, float, float, float, float, float))\n    -> None\nC++: virtual void SetBounds(const double _arg[6])\n\nExplicitly specify the region in space around which to draw the\nbounds. The bounds is used only when no Input or Prop is\nspecified. The bounds are specified according to (xmin,xmax,\nymin,ymax, zmin,zmax), making sure that the min's are less than the\nmax's.\n"},
  {"GetBounds", PyvtkCubeAxesActor_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nGet the bounds for this Prop as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\nin world coordinates. NULL means that the bounds are not defined.\n"},
  {"GetRenderedBounds", PyvtkCubeAxesActor_GetRenderedBounds, METH_VARARGS,
   "GetRenderedBounds(self, rBounds:[float, float, float, float,\n    float, float]) -> None\nC++: virtual void GetRenderedBounds(double rBounds[6])\nGetRenderedBounds(self) -> Pointer\nC++: virtual double *GetRenderedBounds()\n\nMethod used to properly return the bounds of the cube axis itself\nwith all its labels.\n"},
  {"SetXAxisRange", PyvtkCubeAxesActor_SetXAxisRange, METH_VARARGS,
   "SetXAxisRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetXAxisRange(double _arg1, double _arg2)\nSetXAxisRange(self, _arg:(float, float)) -> None\nC++: void SetXAxisRange(const double _arg[2])\n\nExplicitly specify the range of each axes that's used to define\nthe prop. The default, (if you do not use these methods) is to\nuse the bounds specified, or use the bounds of the Input Prop if\none is specified. This method allows you to separate the notion\nof extent of the axes in physical space (bounds) and the extent\nof the values it represents. In other words, you can have the\nticks and labels show a different range.\n"},
  {"SetYAxisRange", PyvtkCubeAxesActor_SetYAxisRange, METH_VARARGS,
   "SetYAxisRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetYAxisRange(double _arg1, double _arg2)\nSetYAxisRange(self, _arg:(float, float)) -> None\nC++: void SetYAxisRange(const double _arg[2])\n\n"},
  {"SetZAxisRange", PyvtkCubeAxesActor_SetZAxisRange, METH_VARARGS,
   "SetZAxisRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetZAxisRange(double _arg1, double _arg2)\nSetZAxisRange(self, _arg:(float, float)) -> None\nC++: void SetZAxisRange(const double _arg[2])\n\n"},
  {"GetXAxisRange", PyvtkCubeAxesActor_GetXAxisRange, METH_VARARGS,
   "GetXAxisRange(self) -> (float, float)\nC++: virtual double *GetXAxisRange()\n\n"},
  {"GetYAxisRange", PyvtkCubeAxesActor_GetYAxisRange, METH_VARARGS,
   "GetYAxisRange(self) -> (float, float)\nC++: virtual double *GetYAxisRange()\n\n"},
  {"GetAxisLabels", PyvtkCubeAxesActor_GetAxisLabels, METH_VARARGS,
   "GetAxisLabels(self, axis:int) -> vtkStringArray\nC++: vtkStringArray *GetAxisLabels(int axis)\n\nExplicitly specify the axis labels along an axis as an array of\nstrings instead of using the values.\n"},
  {"SetAxisLabels", PyvtkCubeAxesActor_SetAxisLabels, METH_VARARGS,
   "SetAxisLabels(self, axis:int, value:vtkStringArray) -> None\nC++: void SetAxisLabels(int axis, vtkStringArray *value)\n\n"},
  {"GetZAxisRange", PyvtkCubeAxesActor_GetZAxisRange, METH_VARARGS,
   "GetZAxisRange(self) -> (float, float)\nC++: virtual double *GetZAxisRange()\n\n"},
  {"SetScreenSize", PyvtkCubeAxesActor_SetScreenSize, METH_VARARGS,
   "SetScreenSize(self, screenSize:float) -> None\nC++: void SetScreenSize(double screenSize)\n\nExplicitly specify the screen size of title and label text.\nScreenSize determines the size of the text in terms of screen\npixels. Default: 10.0.\n"},
  {"GetScreenSize", PyvtkCubeAxesActor_GetScreenSize, METH_VARARGS,
   "GetScreenSize(self) -> float\nC++: virtual double GetScreenSize()\n\n"},
  {"SetLabelOffset", PyvtkCubeAxesActor_SetLabelOffset, METH_VARARGS,
   "SetLabelOffset(self, offset:float) -> None\nC++: void SetLabelOffset(double offset)\n\nExplicitly specify the offset between labels and the axis.\nDefault: 20.0.\n"},
  {"GetLabelOffset", PyvtkCubeAxesActor_GetLabelOffset, METH_VARARGS,
   "GetLabelOffset(self) -> float\nC++: virtual double GetLabelOffset()\n\n"},
  {"SetTitleOffset", PyvtkCubeAxesActor_SetTitleOffset, METH_VARARGS,
   "SetTitleOffset(self, titleOffsetY:float) -> None\nC++: void SetTitleOffset(double titleOffsetY)\nSetTitleOffset(self, titleOffset:[float, float]) -> None\nC++: void SetTitleOffset(double titleOffset[2])\n\nExplicitly specify the offset between title and labels. Default:\n(20.0, 20.0).\n"},
  {"GetTitleOffset", PyvtkCubeAxesActor_GetTitleOffset, METH_VARARGS,
   "GetTitleOffset(self) -> float\nC++: double GetTitleOffset()\nGetTitleOffset(self, titleOffsetX:float, titleOffsetY:float)\n    -> None\nC++: void GetTitleOffset(double &titleOffsetX,\n    double &titleOffsetY)\n\n"},
  {"SetCamera", PyvtkCubeAxesActor_SetCamera, METH_VARARGS,
   "SetCamera(self, __a:vtkCamera) -> None\nC++: virtual void SetCamera(vtkCamera *)\n\nSet/Get the camera to perform scaling and translation of the\nvtkCubeAxesActor.\n"},
  {"GetCamera", PyvtkCubeAxesActor_GetCamera, METH_VARARGS,
   "GetCamera(self) -> vtkCamera\nC++: vtkCamera *GetCamera()\n\n"},
  {"SetFlyMode", PyvtkCubeAxesActor_SetFlyMode, METH_VARARGS,
   "SetFlyMode(self, _arg:int) -> None\nC++: virtual void SetFlyMode(int _arg)\n\nSpecify a mode to control how the axes are drawn: either static,\nclosest triad, furthest triad or outer edges in relation to the\ncamera position. Default: VTK_FLY_CLOSEST_TRIAD.\n"},
  {"GetFlyModeMinValue", PyvtkCubeAxesActor_GetFlyModeMinValue, METH_VARARGS,
   "GetFlyModeMinValue(self) -> int\nC++: virtual int GetFlyModeMinValue()\n\n"},
  {"GetFlyModeMaxValue", PyvtkCubeAxesActor_GetFlyModeMaxValue, METH_VARARGS,
   "GetFlyModeMaxValue(self) -> int\nC++: virtual int GetFlyModeMaxValue()\n\n"},
  {"GetFlyMode", PyvtkCubeAxesActor_GetFlyMode, METH_VARARGS,
   "GetFlyMode(self) -> int\nC++: virtual int GetFlyMode()\n\n"},
  {"SetFlyModeToOuterEdges", PyvtkCubeAxesActor_SetFlyModeToOuterEdges, METH_VARARGS,
   "SetFlyModeToOuterEdges(self) -> None\nC++: void SetFlyModeToOuterEdges()\n\n"},
  {"SetFlyModeToClosestTriad", PyvtkCubeAxesActor_SetFlyModeToClosestTriad, METH_VARARGS,
   "SetFlyModeToClosestTriad(self) -> None\nC++: void SetFlyModeToClosestTriad()\n\n"},
  {"SetFlyModeToFurthestTriad", PyvtkCubeAxesActor_SetFlyModeToFurthestTriad, METH_VARARGS,
   "SetFlyModeToFurthestTriad(self) -> None\nC++: void SetFlyModeToFurthestTriad()\n\n"},
  {"SetFlyModeToStaticTriad", PyvtkCubeAxesActor_SetFlyModeToStaticTriad, METH_VARARGS,
   "SetFlyModeToStaticTriad(self) -> None\nC++: void SetFlyModeToStaticTriad()\n\n"},
  {"SetFlyModeToStaticEdges", PyvtkCubeAxesActor_SetFlyModeToStaticEdges, METH_VARARGS,
   "SetFlyModeToStaticEdges(self) -> None\nC++: void SetFlyModeToStaticEdges()\n\n"},
  {"SetXTitle", PyvtkCubeAxesActor_SetXTitle, METH_VARARGS,
   "SetXTitle(self, _arg:str) -> None\nC++: virtual void SetXTitle(const char *_arg)\n\nSet/Get the labels for the x, y, and z axes. By default, use\n\"X-Axis\", \"Y-Axis\" and \"Z-Axis\".\n"},
  {"GetXTitle", PyvtkCubeAxesActor_GetXTitle, METH_VARARGS,
   "GetXTitle(self) -> str\nC++: virtual char *GetXTitle()\n\n"},
  {"SetXUnits", PyvtkCubeAxesActor_SetXUnits, METH_VARARGS,
   "SetXUnits(self, _arg:str) -> None\nC++: virtual void SetXUnits(const char *_arg)\n\n"},
  {"GetXUnits", PyvtkCubeAxesActor_GetXUnits, METH_VARARGS,
   "GetXUnits(self) -> str\nC++: virtual char *GetXUnits()\n\n"},
  {"SetYTitle", PyvtkCubeAxesActor_SetYTitle, METH_VARARGS,
   "SetYTitle(self, _arg:str) -> None\nC++: virtual void SetYTitle(const char *_arg)\n\n"},
  {"GetYTitle", PyvtkCubeAxesActor_GetYTitle, METH_VARARGS,
   "GetYTitle(self) -> str\nC++: virtual char *GetYTitle()\n\n"},
  {"SetYUnits", PyvtkCubeAxesActor_SetYUnits, METH_VARARGS,
   "SetYUnits(self, _arg:str) -> None\nC++: virtual void SetYUnits(const char *_arg)\n\n"},
  {"GetYUnits", PyvtkCubeAxesActor_GetYUnits, METH_VARARGS,
   "GetYUnits(self) -> str\nC++: virtual char *GetYUnits()\n\n"},
  {"SetZTitle", PyvtkCubeAxesActor_SetZTitle, METH_VARARGS,
   "SetZTitle(self, _arg:str) -> None\nC++: virtual void SetZTitle(const char *_arg)\n\n"},
  {"GetZTitle", PyvtkCubeAxesActor_GetZTitle, METH_VARARGS,
   "GetZTitle(self) -> str\nC++: virtual char *GetZTitle()\n\n"},
  {"SetZUnits", PyvtkCubeAxesActor_SetZUnits, METH_VARARGS,
   "SetZUnits(self, _arg:str) -> None\nC++: virtual void SetZUnits(const char *_arg)\n\n"},
  {"GetZUnits", PyvtkCubeAxesActor_GetZUnits, METH_VARARGS,
   "GetZUnits(self) -> str\nC++: virtual char *GetZUnits()\n\n"},
  {"SetXLabelFormat", PyvtkCubeAxesActor_SetXLabelFormat, METH_VARARGS,
   "SetXLabelFormat(self, _arg:str) -> None\nC++: virtual void SetXLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the labels on each of the\nx-y-z axes.\n"},
  {"GetXLabelFormat", PyvtkCubeAxesActor_GetXLabelFormat, METH_VARARGS,
   "GetXLabelFormat(self) -> str\nC++: virtual char *GetXLabelFormat()\n\n"},
  {"SetYLabelFormat", PyvtkCubeAxesActor_SetYLabelFormat, METH_VARARGS,
   "SetYLabelFormat(self, _arg:str) -> None\nC++: virtual void SetYLabelFormat(const char *_arg)\n\n"},
  {"GetYLabelFormat", PyvtkCubeAxesActor_GetYLabelFormat, METH_VARARGS,
   "GetYLabelFormat(self) -> str\nC++: virtual char *GetYLabelFormat()\n\n"},
  {"SetZLabelFormat", PyvtkCubeAxesActor_SetZLabelFormat, METH_VARARGS,
   "SetZLabelFormat(self, _arg:str) -> None\nC++: virtual void SetZLabelFormat(const char *_arg)\n\n"},
  {"GetZLabelFormat", PyvtkCubeAxesActor_GetZLabelFormat, METH_VARARGS,
   "GetZLabelFormat(self) -> str\nC++: virtual char *GetZLabelFormat()\n\n"},
  {"SetInertia", PyvtkCubeAxesActor_SetInertia, METH_VARARGS,
   "SetInertia(self, _arg:int) -> None\nC++: virtual void SetInertia(int _arg)\n\nSet/Get the inertial factor that controls how often (i.e, how\nmany renders) the axes can switch position (jump from one axes to\nanother). Default: 1.\n"},
  {"GetInertiaMinValue", PyvtkCubeAxesActor_GetInertiaMinValue, METH_VARARGS,
   "GetInertiaMinValue(self) -> int\nC++: virtual int GetInertiaMinValue()\n\n"},
  {"GetInertiaMaxValue", PyvtkCubeAxesActor_GetInertiaMaxValue, METH_VARARGS,
   "GetInertiaMaxValue(self) -> int\nC++: virtual int GetInertiaMaxValue()\n\n"},
  {"GetInertia", PyvtkCubeAxesActor_GetInertia, METH_VARARGS,
   "GetInertia(self) -> int\nC++: virtual int GetInertia()\n\n"},
  {"SetCornerOffset", PyvtkCubeAxesActor_SetCornerOffset, METH_VARARGS,
   "SetCornerOffset(self, _arg:float) -> None\nC++: virtual void SetCornerOffset(double _arg)\n\nSpecify an offset value to \"pull back\" the axes from the corner\nat which they are joined to avoid overlap of axes labels. The\n\"CornerOffset\" is the fraction of the axis length to pull back.\nDefault: 0.0.\n"},
  {"GetCornerOffset", PyvtkCubeAxesActor_GetCornerOffset, METH_VARARGS,
   "GetCornerOffset(self) -> float\nC++: virtual double GetCornerOffset()\n\n"},
  {"ReleaseGraphicsResources", PyvtkCubeAxesActor_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"SetEnableDistanceLOD", PyvtkCubeAxesActor_SetEnableDistanceLOD, METH_VARARGS,
   "SetEnableDistanceLOD(self, _arg:bool) -> None\nC++: virtual void SetEnableDistanceLOD(bool _arg)\n\nEnable and disable the use of distance based LOD for titles and\nlabels. Default: true.\n"},
  {"GetEnableDistanceLOD", PyvtkCubeAxesActor_GetEnableDistanceLOD, METH_VARARGS,
   "GetEnableDistanceLOD(self) -> bool\nC++: virtual bool GetEnableDistanceLOD()\n\n"},
  {"SetDistanceLODThreshold", PyvtkCubeAxesActor_SetDistanceLODThreshold, METH_VARARGS,
   "SetDistanceLODThreshold(self, _arg:float) -> None\nC++: virtual void SetDistanceLODThreshold(double _arg)\n\nSet distance LOD threshold [0.0 - 1.0] for titles and labels.\nDefault: 0.8.\n"},
  {"GetDistanceLODThresholdMinValue", PyvtkCubeAxesActor_GetDistanceLODThresholdMinValue, METH_VARARGS,
   "GetDistanceLODThresholdMinValue(self) -> float\nC++: virtual double GetDistanceLODThresholdMinValue()\n\n"},
  {"GetDistanceLODThresholdMaxValue", PyvtkCubeAxesActor_GetDistanceLODThresholdMaxValue, METH_VARARGS,
   "GetDistanceLODThresholdMaxValue(self) -> float\nC++: virtual double GetDistanceLODThresholdMaxValue()\n\n"},
  {"GetDistanceLODThreshold", PyvtkCubeAxesActor_GetDistanceLODThreshold, METH_VARARGS,
   "GetDistanceLODThreshold(self) -> float\nC++: virtual double GetDistanceLODThreshold()\n\n"},
  {"SetEnableViewAngleLOD", PyvtkCubeAxesActor_SetEnableViewAngleLOD, METH_VARARGS,
   "SetEnableViewAngleLOD(self, _arg:bool) -> None\nC++: virtual void SetEnableViewAngleLOD(bool _arg)\n\nEnable and disable the use of view angle based LOD for titles and\nlabels. Default: true.\n"},
  {"GetEnableViewAngleLOD", PyvtkCubeAxesActor_GetEnableViewAngleLOD, METH_VARARGS,
   "GetEnableViewAngleLOD(self) -> bool\nC++: virtual bool GetEnableViewAngleLOD()\n\n"},
  {"SetViewAngleLODThreshold", PyvtkCubeAxesActor_SetViewAngleLODThreshold, METH_VARARGS,
   "SetViewAngleLODThreshold(self, _arg:float) -> None\nC++: virtual void SetViewAngleLODThreshold(double _arg)\n\nSet view angle LOD threshold [0.0 - 1.0] for titles and labels.\nDefault: 0.2.\n"},
  {"GetViewAngleLODThresholdMinValue", PyvtkCubeAxesActor_GetViewAngleLODThresholdMinValue, METH_VARARGS,
   "GetViewAngleLODThresholdMinValue(self) -> float\nC++: virtual double GetViewAngleLODThresholdMinValue()\n\n"},
  {"GetViewAngleLODThresholdMaxValue", PyvtkCubeAxesActor_GetViewAngleLODThresholdMaxValue, METH_VARARGS,
   "GetViewAngleLODThresholdMaxValue(self) -> float\nC++: virtual double GetViewAngleLODThresholdMaxValue()\n\n"},
  {"GetViewAngleLODThreshold", PyvtkCubeAxesActor_GetViewAngleLODThreshold, METH_VARARGS,
   "GetViewAngleLODThreshold(self) -> float\nC++: virtual double GetViewAngleLODThreshold()\n\n"},
  {"SetXAxisVisibility", PyvtkCubeAxesActor_SetXAxisVisibility, METH_VARARGS,
   "SetXAxisVisibility(self, _arg:bool) -> None\nC++: virtual void SetXAxisVisibility(bool _arg)\n\nTurn on and off the visibility of each axis. Default: true.\n"},
  {"GetXAxisVisibility", PyvtkCubeAxesActor_GetXAxisVisibility, METH_VARARGS,
   "GetXAxisVisibility(self) -> bool\nC++: virtual bool GetXAxisVisibility()\n\n"},
  {"XAxisVisibilityOn", PyvtkCubeAxesActor_XAxisVisibilityOn, METH_VARARGS,
   "XAxisVisibilityOn(self) -> None\nC++: virtual void XAxisVisibilityOn()\n\n"},
  {"XAxisVisibilityOff", PyvtkCubeAxesActor_XAxisVisibilityOff, METH_VARARGS,
   "XAxisVisibilityOff(self) -> None\nC++: virtual void XAxisVisibilityOff()\n\n"},
  {"SetYAxisVisibility", PyvtkCubeAxesActor_SetYAxisVisibility, METH_VARARGS,
   "SetYAxisVisibility(self, _arg:bool) -> None\nC++: virtual void SetYAxisVisibility(bool _arg)\n\n"},
  {"GetYAxisVisibility", PyvtkCubeAxesActor_GetYAxisVisibility, METH_VARARGS,
   "GetYAxisVisibility(self) -> bool\nC++: virtual bool GetYAxisVisibility()\n\n"},
  {"YAxisVisibilityOn", PyvtkCubeAxesActor_YAxisVisibilityOn, METH_VARARGS,
   "YAxisVisibilityOn(self) -> None\nC++: virtual void YAxisVisibilityOn()\n\n"},
  {"YAxisVisibilityOff", PyvtkCubeAxesActor_YAxisVisibilityOff, METH_VARARGS,
   "YAxisVisibilityOff(self) -> None\nC++: virtual void YAxisVisibilityOff()\n\n"},
  {"SetZAxisVisibility", PyvtkCubeAxesActor_SetZAxisVisibility, METH_VARARGS,
   "SetZAxisVisibility(self, _arg:bool) -> None\nC++: virtual void SetZAxisVisibility(bool _arg)\n\n"},
  {"GetZAxisVisibility", PyvtkCubeAxesActor_GetZAxisVisibility, METH_VARARGS,
   "GetZAxisVisibility(self) -> bool\nC++: virtual bool GetZAxisVisibility()\n\n"},
  {"ZAxisVisibilityOn", PyvtkCubeAxesActor_ZAxisVisibilityOn, METH_VARARGS,
   "ZAxisVisibilityOn(self) -> None\nC++: virtual void ZAxisVisibilityOn()\n\n"},
  {"ZAxisVisibilityOff", PyvtkCubeAxesActor_ZAxisVisibilityOff, METH_VARARGS,
   "ZAxisVisibilityOff(self) -> None\nC++: virtual void ZAxisVisibilityOff()\n\n"},
  {"SetXAxisLabelVisibility", PyvtkCubeAxesActor_SetXAxisLabelVisibility, METH_VARARGS,
   "SetXAxisLabelVisibility(self, _arg:bool) -> None\nC++: virtual void SetXAxisLabelVisibility(bool _arg)\n\nTurn on and off the visibility of labels for each axis. Default:\ntrue.\n"},
  {"GetXAxisLabelVisibility", PyvtkCubeAxesActor_GetXAxisLabelVisibility, METH_VARARGS,
   "GetXAxisLabelVisibility(self) -> bool\nC++: virtual bool GetXAxisLabelVisibility()\n\n"},
  {"XAxisLabelVisibilityOn", PyvtkCubeAxesActor_XAxisLabelVisibilityOn, METH_VARARGS,
   "XAxisLabelVisibilityOn(self) -> None\nC++: virtual void XAxisLabelVisibilityOn()\n\n"},
  {"XAxisLabelVisibilityOff", PyvtkCubeAxesActor_XAxisLabelVisibilityOff, METH_VARARGS,
   "XAxisLabelVisibilityOff(self) -> None\nC++: virtual void XAxisLabelVisibilityOff()\n\n"},
  {"SetYAxisLabelVisibility", PyvtkCubeAxesActor_SetYAxisLabelVisibility, METH_VARARGS,
   "SetYAxisLabelVisibility(self, _arg:bool) -> None\nC++: virtual void SetYAxisLabelVisibility(bool _arg)\n\n"},
  {"GetYAxisLabelVisibility", PyvtkCubeAxesActor_GetYAxisLabelVisibility, METH_VARARGS,
   "GetYAxisLabelVisibility(self) -> bool\nC++: virtual bool GetYAxisLabelVisibility()\n\n"},
  {"YAxisLabelVisibilityOn", PyvtkCubeAxesActor_YAxisLabelVisibilityOn, METH_VARARGS,
   "YAxisLabelVisibilityOn(self) -> None\nC++: virtual void YAxisLabelVisibilityOn()\n\n"},
  {"YAxisLabelVisibilityOff", PyvtkCubeAxesActor_YAxisLabelVisibilityOff, METH_VARARGS,
   "YAxisLabelVisibilityOff(self) -> None\nC++: virtual void YAxisLabelVisibilityOff()\n\n"},
  {"SetZAxisLabelVisibility", PyvtkCubeAxesActor_SetZAxisLabelVisibility, METH_VARARGS,
   "SetZAxisLabelVisibility(self, _arg:bool) -> None\nC++: virtual void SetZAxisLabelVisibility(bool _arg)\n\n"},
  {"GetZAxisLabelVisibility", PyvtkCubeAxesActor_GetZAxisLabelVisibility, METH_VARARGS,
   "GetZAxisLabelVisibility(self) -> bool\nC++: virtual bool GetZAxisLabelVisibility()\n\n"},
  {"ZAxisLabelVisibilityOn", PyvtkCubeAxesActor_ZAxisLabelVisibilityOn, METH_VARARGS,
   "ZAxisLabelVisibilityOn(self) -> None\nC++: virtual void ZAxisLabelVisibilityOn()\n\n"},
  {"ZAxisLabelVisibilityOff", PyvtkCubeAxesActor_ZAxisLabelVisibilityOff, METH_VARARGS,
   "ZAxisLabelVisibilityOff(self) -> None\nC++: virtual void ZAxisLabelVisibilityOff()\n\n"},
  {"SetXAxisTickVisibility", PyvtkCubeAxesActor_SetXAxisTickVisibility, METH_VARARGS,
   "SetXAxisTickVisibility(self, _arg:bool) -> None\nC++: virtual void SetXAxisTickVisibility(bool _arg)\n\nTurn on and off the visibility of ticks for each axis. Default:\ntrue.\n"},
  {"GetXAxisTickVisibility", PyvtkCubeAxesActor_GetXAxisTickVisibility, METH_VARARGS,
   "GetXAxisTickVisibility(self) -> bool\nC++: virtual bool GetXAxisTickVisibility()\n\n"},
  {"XAxisTickVisibilityOn", PyvtkCubeAxesActor_XAxisTickVisibilityOn, METH_VARARGS,
   "XAxisTickVisibilityOn(self) -> None\nC++: virtual void XAxisTickVisibilityOn()\n\n"},
  {"XAxisTickVisibilityOff", PyvtkCubeAxesActor_XAxisTickVisibilityOff, METH_VARARGS,
   "XAxisTickVisibilityOff(self) -> None\nC++: virtual void XAxisTickVisibilityOff()\n\n"},
  {"SetYAxisTickVisibility", PyvtkCubeAxesActor_SetYAxisTickVisibility, METH_VARARGS,
   "SetYAxisTickVisibility(self, _arg:bool) -> None\nC++: virtual void SetYAxisTickVisibility(bool _arg)\n\n"},
  {"GetYAxisTickVisibility", PyvtkCubeAxesActor_GetYAxisTickVisibility, METH_VARARGS,
   "GetYAxisTickVisibility(self) -> bool\nC++: virtual bool GetYAxisTickVisibility()\n\n"},
  {"YAxisTickVisibilityOn", PyvtkCubeAxesActor_YAxisTickVisibilityOn, METH_VARARGS,
   "YAxisTickVisibilityOn(self) -> None\nC++: virtual void YAxisTickVisibilityOn()\n\n"},
  {"YAxisTickVisibilityOff", PyvtkCubeAxesActor_YAxisTickVisibilityOff, METH_VARARGS,
   "YAxisTickVisibilityOff(self) -> None\nC++: virtual void YAxisTickVisibilityOff()\n\n"},
  {"SetZAxisTickVisibility", PyvtkCubeAxesActor_SetZAxisTickVisibility, METH_VARARGS,
   "SetZAxisTickVisibility(self, _arg:bool) -> None\nC++: virtual void SetZAxisTickVisibility(bool _arg)\n\n"},
  {"GetZAxisTickVisibility", PyvtkCubeAxesActor_GetZAxisTickVisibility, METH_VARARGS,
   "GetZAxisTickVisibility(self) -> bool\nC++: virtual bool GetZAxisTickVisibility()\n\n"},
  {"ZAxisTickVisibilityOn", PyvtkCubeAxesActor_ZAxisTickVisibilityOn, METH_VARARGS,
   "ZAxisTickVisibilityOn(self) -> None\nC++: virtual void ZAxisTickVisibilityOn()\n\n"},
  {"ZAxisTickVisibilityOff", PyvtkCubeAxesActor_ZAxisTickVisibilityOff, METH_VARARGS,
   "ZAxisTickVisibilityOff(self) -> None\nC++: virtual void ZAxisTickVisibilityOff()\n\n"},
  {"SetXAxisMinorTickVisibility", PyvtkCubeAxesActor_SetXAxisMinorTickVisibility, METH_VARARGS,
   "SetXAxisMinorTickVisibility(self, _arg:bool) -> None\nC++: virtual void SetXAxisMinorTickVisibility(bool _arg)\n\nTurn on and off the visibility of minor ticks for each axis.\nDefault: true.\n"},
  {"GetXAxisMinorTickVisibility", PyvtkCubeAxesActor_GetXAxisMinorTickVisibility, METH_VARARGS,
   "GetXAxisMinorTickVisibility(self) -> bool\nC++: virtual bool GetXAxisMinorTickVisibility()\n\n"},
  {"XAxisMinorTickVisibilityOn", PyvtkCubeAxesActor_XAxisMinorTickVisibilityOn, METH_VARARGS,
   "XAxisMinorTickVisibilityOn(self) -> None\nC++: virtual void XAxisMinorTickVisibilityOn()\n\n"},
  {"XAxisMinorTickVisibilityOff", PyvtkCubeAxesActor_XAxisMinorTickVisibilityOff, METH_VARARGS,
   "XAxisMinorTickVisibilityOff(self) -> None\nC++: virtual void XAxisMinorTickVisibilityOff()\n\n"},
  {"SetYAxisMinorTickVisibility", PyvtkCubeAxesActor_SetYAxisMinorTickVisibility, METH_VARARGS,
   "SetYAxisMinorTickVisibility(self, _arg:bool) -> None\nC++: virtual void SetYAxisMinorTickVisibility(bool _arg)\n\n"},
  {"GetYAxisMinorTickVisibility", PyvtkCubeAxesActor_GetYAxisMinorTickVisibility, METH_VARARGS,
   "GetYAxisMinorTickVisibility(self) -> bool\nC++: virtual bool GetYAxisMinorTickVisibility()\n\n"},
  {"YAxisMinorTickVisibilityOn", PyvtkCubeAxesActor_YAxisMinorTickVisibilityOn, METH_VARARGS,
   "YAxisMinorTickVisibilityOn(self) -> None\nC++: virtual void YAxisMinorTickVisibilityOn()\n\n"},
  {"YAxisMinorTickVisibilityOff", PyvtkCubeAxesActor_YAxisMinorTickVisibilityOff, METH_VARARGS,
   "YAxisMinorTickVisibilityOff(self) -> None\nC++: virtual void YAxisMinorTickVisibilityOff()\n\n"},
  {"SetZAxisMinorTickVisibility", PyvtkCubeAxesActor_SetZAxisMinorTickVisibility, METH_VARARGS,
   "SetZAxisMinorTickVisibility(self, _arg:bool) -> None\nC++: virtual void SetZAxisMinorTickVisibility(bool _arg)\n\n"},
  {"GetZAxisMinorTickVisibility", PyvtkCubeAxesActor_GetZAxisMinorTickVisibility, METH_VARARGS,
   "GetZAxisMinorTickVisibility(self) -> bool\nC++: virtual bool GetZAxisMinorTickVisibility()\n\n"},
  {"ZAxisMinorTickVisibilityOn", PyvtkCubeAxesActor_ZAxisMinorTickVisibilityOn, METH_VARARGS,
   "ZAxisMinorTickVisibilityOn(self) -> None\nC++: virtual void ZAxisMinorTickVisibilityOn()\n\n"},
  {"ZAxisMinorTickVisibilityOff", PyvtkCubeAxesActor_ZAxisMinorTickVisibilityOff, METH_VARARGS,
   "ZAxisMinorTickVisibilityOff(self) -> None\nC++: virtual void ZAxisMinorTickVisibilityOff()\n\n"},
  {"SetDrawXGridlines", PyvtkCubeAxesActor_SetDrawXGridlines, METH_VARARGS,
   "SetDrawXGridlines(self, _arg:bool) -> None\nC++: virtual void SetDrawXGridlines(bool _arg)\n\nTurn on and off the visibility of grid lines for each axis.\nDefault: false.\n"},
  {"GetDrawXGridlines", PyvtkCubeAxesActor_GetDrawXGridlines, METH_VARARGS,
   "GetDrawXGridlines(self) -> bool\nC++: virtual bool GetDrawXGridlines()\n\n"},
  {"DrawXGridlinesOn", PyvtkCubeAxesActor_DrawXGridlinesOn, METH_VARARGS,
   "DrawXGridlinesOn(self) -> None\nC++: virtual void DrawXGridlinesOn()\n\n"},
  {"DrawXGridlinesOff", PyvtkCubeAxesActor_DrawXGridlinesOff, METH_VARARGS,
   "DrawXGridlinesOff(self) -> None\nC++: virtual void DrawXGridlinesOff()\n\n"},
  {"SetDrawYGridlines", PyvtkCubeAxesActor_SetDrawYGridlines, METH_VARARGS,
   "SetDrawYGridlines(self, _arg:bool) -> None\nC++: virtual void SetDrawYGridlines(bool _arg)\n\n"},
  {"GetDrawYGridlines", PyvtkCubeAxesActor_GetDrawYGridlines, METH_VARARGS,
   "GetDrawYGridlines(self) -> bool\nC++: virtual bool GetDrawYGridlines()\n\n"},
  {"DrawYGridlinesOn", PyvtkCubeAxesActor_DrawYGridlinesOn, METH_VARARGS,
   "DrawYGridlinesOn(self) -> None\nC++: virtual void DrawYGridlinesOn()\n\n"},
  {"DrawYGridlinesOff", PyvtkCubeAxesActor_DrawYGridlinesOff, METH_VARARGS,
   "DrawYGridlinesOff(self) -> None\nC++: virtual void DrawYGridlinesOff()\n\n"},
  {"SetDrawZGridlines", PyvtkCubeAxesActor_SetDrawZGridlines, METH_VARARGS,
   "SetDrawZGridlines(self, _arg:bool) -> None\nC++: virtual void SetDrawZGridlines(bool _arg)\n\n"},
  {"GetDrawZGridlines", PyvtkCubeAxesActor_GetDrawZGridlines, METH_VARARGS,
   "GetDrawZGridlines(self) -> bool\nC++: virtual bool GetDrawZGridlines()\n\n"},
  {"DrawZGridlinesOn", PyvtkCubeAxesActor_DrawZGridlinesOn, METH_VARARGS,
   "DrawZGridlinesOn(self) -> None\nC++: virtual void DrawZGridlinesOn()\n\n"},
  {"DrawZGridlinesOff", PyvtkCubeAxesActor_DrawZGridlinesOff, METH_VARARGS,
   "DrawZGridlinesOff(self) -> None\nC++: virtual void DrawZGridlinesOff()\n\n"},
  {"SetDrawXInnerGridlines", PyvtkCubeAxesActor_SetDrawXInnerGridlines, METH_VARARGS,
   "SetDrawXInnerGridlines(self, _arg:bool) -> None\nC++: virtual void SetDrawXInnerGridlines(bool _arg)\n\nTurn on and off the visibility of inner grid lines for each axis.\nDefault: false.\n"},
  {"GetDrawXInnerGridlines", PyvtkCubeAxesActor_GetDrawXInnerGridlines, METH_VARARGS,
   "GetDrawXInnerGridlines(self) -> bool\nC++: virtual bool GetDrawXInnerGridlines()\n\n"},
  {"DrawXInnerGridlinesOn", PyvtkCubeAxesActor_DrawXInnerGridlinesOn, METH_VARARGS,
   "DrawXInnerGridlinesOn(self) -> None\nC++: virtual void DrawXInnerGridlinesOn()\n\n"},
  {"DrawXInnerGridlinesOff", PyvtkCubeAxesActor_DrawXInnerGridlinesOff, METH_VARARGS,
   "DrawXInnerGridlinesOff(self) -> None\nC++: virtual void DrawXInnerGridlinesOff()\n\n"},
  {"SetDrawYInnerGridlines", PyvtkCubeAxesActor_SetDrawYInnerGridlines, METH_VARARGS,
   "SetDrawYInnerGridlines(self, _arg:bool) -> None\nC++: virtual void SetDrawYInnerGridlines(bool _arg)\n\n"},
  {"GetDrawYInnerGridlines", PyvtkCubeAxesActor_GetDrawYInnerGridlines, METH_VARARGS,
   "GetDrawYInnerGridlines(self) -> bool\nC++: virtual bool GetDrawYInnerGridlines()\n\n"},
  {"DrawYInnerGridlinesOn", PyvtkCubeAxesActor_DrawYInnerGridlinesOn, METH_VARARGS,
   "DrawYInnerGridlinesOn(self) -> None\nC++: virtual void DrawYInnerGridlinesOn()\n\n"},
  {"DrawYInnerGridlinesOff", PyvtkCubeAxesActor_DrawYInnerGridlinesOff, METH_VARARGS,
   "DrawYInnerGridlinesOff(self) -> None\nC++: virtual void DrawYInnerGridlinesOff()\n\n"},
  {"SetDrawZInnerGridlines", PyvtkCubeAxesActor_SetDrawZInnerGridlines, METH_VARARGS,
   "SetDrawZInnerGridlines(self, _arg:bool) -> None\nC++: virtual void SetDrawZInnerGridlines(bool _arg)\n\n"},
  {"GetDrawZInnerGridlines", PyvtkCubeAxesActor_GetDrawZInnerGridlines, METH_VARARGS,
   "GetDrawZInnerGridlines(self) -> bool\nC++: virtual bool GetDrawZInnerGridlines()\n\n"},
  {"DrawZInnerGridlinesOn", PyvtkCubeAxesActor_DrawZInnerGridlinesOn, METH_VARARGS,
   "DrawZInnerGridlinesOn(self) -> None\nC++: virtual void DrawZInnerGridlinesOn()\n\n"},
  {"DrawZInnerGridlinesOff", PyvtkCubeAxesActor_DrawZInnerGridlinesOff, METH_VARARGS,
   "DrawZInnerGridlinesOff(self) -> None\nC++: virtual void DrawZInnerGridlinesOff()\n\n"},
  {"SetDrawXGridpolys", PyvtkCubeAxesActor_SetDrawXGridpolys, METH_VARARGS,
   "SetDrawXGridpolys(self, _arg:bool) -> None\nC++: virtual void SetDrawXGridpolys(bool _arg)\n\nTurn on and off the visibility of grid polys for each axis.\nDefault: false.\n"},
  {"GetDrawXGridpolys", PyvtkCubeAxesActor_GetDrawXGridpolys, METH_VARARGS,
   "GetDrawXGridpolys(self) -> bool\nC++: virtual bool GetDrawXGridpolys()\n\n"},
  {"DrawXGridpolysOn", PyvtkCubeAxesActor_DrawXGridpolysOn, METH_VARARGS,
   "DrawXGridpolysOn(self) -> None\nC++: virtual void DrawXGridpolysOn()\n\n"},
  {"DrawXGridpolysOff", PyvtkCubeAxesActor_DrawXGridpolysOff, METH_VARARGS,
   "DrawXGridpolysOff(self) -> None\nC++: virtual void DrawXGridpolysOff()\n\n"},
  {"SetDrawYGridpolys", PyvtkCubeAxesActor_SetDrawYGridpolys, METH_VARARGS,
   "SetDrawYGridpolys(self, _arg:bool) -> None\nC++: virtual void SetDrawYGridpolys(bool _arg)\n\n"},
  {"GetDrawYGridpolys", PyvtkCubeAxesActor_GetDrawYGridpolys, METH_VARARGS,
   "GetDrawYGridpolys(self) -> bool\nC++: virtual bool GetDrawYGridpolys()\n\n"},
  {"DrawYGridpolysOn", PyvtkCubeAxesActor_DrawYGridpolysOn, METH_VARARGS,
   "DrawYGridpolysOn(self) -> None\nC++: virtual void DrawYGridpolysOn()\n\n"},
  {"DrawYGridpolysOff", PyvtkCubeAxesActor_DrawYGridpolysOff, METH_VARARGS,
   "DrawYGridpolysOff(self) -> None\nC++: virtual void DrawYGridpolysOff()\n\n"},
  {"SetDrawZGridpolys", PyvtkCubeAxesActor_SetDrawZGridpolys, METH_VARARGS,
   "SetDrawZGridpolys(self, _arg:bool) -> None\nC++: virtual void SetDrawZGridpolys(bool _arg)\n\n"},
  {"GetDrawZGridpolys", PyvtkCubeAxesActor_GetDrawZGridpolys, METH_VARARGS,
   "GetDrawZGridpolys(self) -> bool\nC++: virtual bool GetDrawZGridpolys()\n\n"},
  {"DrawZGridpolysOn", PyvtkCubeAxesActor_DrawZGridpolysOn, METH_VARARGS,
   "DrawZGridpolysOn(self) -> None\nC++: virtual void DrawZGridpolysOn()\n\n"},
  {"DrawZGridpolysOff", PyvtkCubeAxesActor_DrawZGridpolysOff, METH_VARARGS,
   "DrawZGridpolysOff(self) -> None\nC++: virtual void DrawZGridpolysOff()\n\n"},
  {"GetTitleTextProperty", PyvtkCubeAxesActor_GetTitleTextProperty, METH_VARARGS,
   "GetTitleTextProperty(self, __a:int) -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty(int)\n\nReturns the text property for the title on an axis.\n"},
  {"GetLabelTextProperty", PyvtkCubeAxesActor_GetLabelTextProperty, METH_VARARGS,
   "GetLabelTextProperty(self, __a:int) -> vtkTextProperty\nC++: vtkTextProperty *GetLabelTextProperty(int)\n\nReturns the text property for the labels on an axis.\n"},
  {"SetXAxesLinesProperty", PyvtkCubeAxesActor_SetXAxesLinesProperty, METH_VARARGS,
   "SetXAxesLinesProperty(self, __a:vtkProperty) -> None\nC++: void SetXAxesLinesProperty(vtkProperty *)\n\nGet/Set axes actors properties.\n"},
  {"GetXAxesLinesProperty", PyvtkCubeAxesActor_GetXAxesLinesProperty, METH_VARARGS,
   "GetXAxesLinesProperty(self) -> vtkProperty\nC++: vtkProperty *GetXAxesLinesProperty()\n\n"},
  {"SetYAxesLinesProperty", PyvtkCubeAxesActor_SetYAxesLinesProperty, METH_VARARGS,
   "SetYAxesLinesProperty(self, __a:vtkProperty) -> None\nC++: void SetYAxesLinesProperty(vtkProperty *)\n\n"},
  {"GetYAxesLinesProperty", PyvtkCubeAxesActor_GetYAxesLinesProperty, METH_VARARGS,
   "GetYAxesLinesProperty(self) -> vtkProperty\nC++: vtkProperty *GetYAxesLinesProperty()\n\n"},
  {"SetZAxesLinesProperty", PyvtkCubeAxesActor_SetZAxesLinesProperty, METH_VARARGS,
   "SetZAxesLinesProperty(self, __a:vtkProperty) -> None\nC++: void SetZAxesLinesProperty(vtkProperty *)\n\n"},
  {"GetZAxesLinesProperty", PyvtkCubeAxesActor_GetZAxesLinesProperty, METH_VARARGS,
   "GetZAxesLinesProperty(self) -> vtkProperty\nC++: vtkProperty *GetZAxesLinesProperty()\n\n"},
  {"SetXAxesGridlinesProperty", PyvtkCubeAxesActor_SetXAxesGridlinesProperty, METH_VARARGS,
   "SetXAxesGridlinesProperty(self, __a:vtkProperty) -> None\nC++: void SetXAxesGridlinesProperty(vtkProperty *)\n\nGet/Set axes (outer) gridlines actors properties.\n"},
  {"GetXAxesGridlinesProperty", PyvtkCubeAxesActor_GetXAxesGridlinesProperty, METH_VARARGS,
   "GetXAxesGridlinesProperty(self) -> vtkProperty\nC++: vtkProperty *GetXAxesGridlinesProperty()\n\n"},
  {"SetYAxesGridlinesProperty", PyvtkCubeAxesActor_SetYAxesGridlinesProperty, METH_VARARGS,
   "SetYAxesGridlinesProperty(self, __a:vtkProperty) -> None\nC++: void SetYAxesGridlinesProperty(vtkProperty *)\n\n"},
  {"GetYAxesGridlinesProperty", PyvtkCubeAxesActor_GetYAxesGridlinesProperty, METH_VARARGS,
   "GetYAxesGridlinesProperty(self) -> vtkProperty\nC++: vtkProperty *GetYAxesGridlinesProperty()\n\n"},
  {"SetZAxesGridlinesProperty", PyvtkCubeAxesActor_SetZAxesGridlinesProperty, METH_VARARGS,
   "SetZAxesGridlinesProperty(self, __a:vtkProperty) -> None\nC++: void SetZAxesGridlinesProperty(vtkProperty *)\n\n"},
  {"GetZAxesGridlinesProperty", PyvtkCubeAxesActor_GetZAxesGridlinesProperty, METH_VARARGS,
   "GetZAxesGridlinesProperty(self) -> vtkProperty\nC++: vtkProperty *GetZAxesGridlinesProperty()\n\n"},
  {"SetXAxesInnerGridlinesProperty", PyvtkCubeAxesActor_SetXAxesInnerGridlinesProperty, METH_VARARGS,
   "SetXAxesInnerGridlinesProperty(self, __a:vtkProperty) -> None\nC++: void SetXAxesInnerGridlinesProperty(vtkProperty *)\n\nGet/Set axes inner gridlines actors properties.\n"},
  {"GetXAxesInnerGridlinesProperty", PyvtkCubeAxesActor_GetXAxesInnerGridlinesProperty, METH_VARARGS,
   "GetXAxesInnerGridlinesProperty(self) -> vtkProperty\nC++: vtkProperty *GetXAxesInnerGridlinesProperty()\n\n"},
  {"SetYAxesInnerGridlinesProperty", PyvtkCubeAxesActor_SetYAxesInnerGridlinesProperty, METH_VARARGS,
   "SetYAxesInnerGridlinesProperty(self, __a:vtkProperty) -> None\nC++: void SetYAxesInnerGridlinesProperty(vtkProperty *)\n\n"},
  {"GetYAxesInnerGridlinesProperty", PyvtkCubeAxesActor_GetYAxesInnerGridlinesProperty, METH_VARARGS,
   "GetYAxesInnerGridlinesProperty(self) -> vtkProperty\nC++: vtkProperty *GetYAxesInnerGridlinesProperty()\n\n"},
  {"SetZAxesInnerGridlinesProperty", PyvtkCubeAxesActor_SetZAxesInnerGridlinesProperty, METH_VARARGS,
   "SetZAxesInnerGridlinesProperty(self, __a:vtkProperty) -> None\nC++: void SetZAxesInnerGridlinesProperty(vtkProperty *)\n\n"},
  {"GetZAxesInnerGridlinesProperty", PyvtkCubeAxesActor_GetZAxesInnerGridlinesProperty, METH_VARARGS,
   "GetZAxesInnerGridlinesProperty(self) -> vtkProperty\nC++: vtkProperty *GetZAxesInnerGridlinesProperty()\n\n"},
  {"SetXAxesGridpolysProperty", PyvtkCubeAxesActor_SetXAxesGridpolysProperty, METH_VARARGS,
   "SetXAxesGridpolysProperty(self, __a:vtkProperty) -> None\nC++: void SetXAxesGridpolysProperty(vtkProperty *)\n\nGet/Set axes gridPolys actors properties.\n"},
  {"GetXAxesGridpolysProperty", PyvtkCubeAxesActor_GetXAxesGridpolysProperty, METH_VARARGS,
   "GetXAxesGridpolysProperty(self) -> vtkProperty\nC++: vtkProperty *GetXAxesGridpolysProperty()\n\n"},
  {"SetYAxesGridpolysProperty", PyvtkCubeAxesActor_SetYAxesGridpolysProperty, METH_VARARGS,
   "SetYAxesGridpolysProperty(self, __a:vtkProperty) -> None\nC++: void SetYAxesGridpolysProperty(vtkProperty *)\n\n"},
  {"GetYAxesGridpolysProperty", PyvtkCubeAxesActor_GetYAxesGridpolysProperty, METH_VARARGS,
   "GetYAxesGridpolysProperty(self) -> vtkProperty\nC++: vtkProperty *GetYAxesGridpolysProperty()\n\n"},
  {"SetZAxesGridpolysProperty", PyvtkCubeAxesActor_SetZAxesGridpolysProperty, METH_VARARGS,
   "SetZAxesGridpolysProperty(self, __a:vtkProperty) -> None\nC++: void SetZAxesGridpolysProperty(vtkProperty *)\n\n"},
  {"GetZAxesGridpolysProperty", PyvtkCubeAxesActor_GetZAxesGridpolysProperty, METH_VARARGS,
   "GetZAxesGridpolysProperty(self) -> vtkProperty\nC++: vtkProperty *GetZAxesGridpolysProperty()\n\n"},
  {"SetTickLocation", PyvtkCubeAxesActor_SetTickLocation, METH_VARARGS,
   "SetTickLocation(self, _arg:int) -> None\nC++: virtual void SetTickLocation(int _arg)\n\nSet/Get the location of ticks marks. Default: VTK_TICKS_INSIDE.\n"},
  {"GetTickLocationMinValue", PyvtkCubeAxesActor_GetTickLocationMinValue, METH_VARARGS,
   "GetTickLocationMinValue(self) -> int\nC++: virtual int GetTickLocationMinValue()\n\n"},
  {"GetTickLocationMaxValue", PyvtkCubeAxesActor_GetTickLocationMaxValue, METH_VARARGS,
   "GetTickLocationMaxValue(self) -> int\nC++: virtual int GetTickLocationMaxValue()\n\n"},
  {"GetTickLocation", PyvtkCubeAxesActor_GetTickLocation, METH_VARARGS,
   "GetTickLocation(self) -> int\nC++: virtual int GetTickLocation()\n\n"},
  {"SetTickLocationToInside", PyvtkCubeAxesActor_SetTickLocationToInside, METH_VARARGS,
   "SetTickLocationToInside(self) -> None\nC++: void SetTickLocationToInside()\n\n"},
  {"SetTickLocationToOutside", PyvtkCubeAxesActor_SetTickLocationToOutside, METH_VARARGS,
   "SetTickLocationToOutside(self) -> None\nC++: void SetTickLocationToOutside()\n\n"},
  {"SetTickLocationToBoth", PyvtkCubeAxesActor_SetTickLocationToBoth, METH_VARARGS,
   "SetTickLocationToBoth(self) -> None\nC++: void SetTickLocationToBoth()\n\n"},
  {"SetLabelScaling", PyvtkCubeAxesActor_SetLabelScaling, METH_VARARGS,
   "SetLabelScaling(self, __a:bool, __b:int, __c:int, __d:int) -> None\nC++: void SetLabelScaling(bool, int, int, int)\n\n"},
  {"SetUseTextActor3D", PyvtkCubeAxesActor_SetUseTextActor3D, METH_VARARGS,
   "SetUseTextActor3D(self, enable:bool) -> None\nC++: void SetUseTextActor3D(bool enable)\n\nUse or not vtkTextActor3D for titles and labels. See Also:\nvtkAxisActor::SetUseTextActor3D(),\nvtkAxisActor::GetUseTextActor3D()\n"},
  {"GetUseTextActor3D", PyvtkCubeAxesActor_GetUseTextActor3D, METH_VARARGS,
   "GetUseTextActor3D(self) -> bool\nC++: bool GetUseTextActor3D()\n\n"},
  {"SetUse2DMode", PyvtkCubeAxesActor_SetUse2DMode, METH_VARARGS,
   "SetUse2DMode(self, enable:bool) -> None\nC++: void SetUse2DMode(bool enable)\n\nGet/Set 2D mode NB: Use vtkTextActor for titles in 2D instead of\nvtkAxisFollower\n"},
  {"GetUse2DMode", PyvtkCubeAxesActor_GetUse2DMode, METH_VARARGS,
   "GetUse2DMode(self) -> bool\nC++: bool GetUse2DMode()\n\n"},
  {"SetSaveTitlePosition", PyvtkCubeAxesActor_SetSaveTitlePosition, METH_VARARGS,
   "SetSaveTitlePosition(self, val:int) -> None\nC++: void SetSaveTitlePosition(int val)\n\nFor 2D mode only: save axis title positions for later use\n"},
  {"SetOrientedBounds", PyvtkCubeAxesActor_SetOrientedBounds, METH_VARARGS,
   "SetOrientedBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetOrientedBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetOrientedBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetOrientedBounds(const double _arg[6])\n\nProvide an oriented bounded box when using AxisBaseFor. Default:\n(-1, 1, -1, 1, -1, 1).\n"},
  {"GetOrientedBounds", PyvtkCubeAxesActor_GetOrientedBounds, METH_VARARGS,
   "GetOrientedBounds(self) -> (float, float, float, float, float,\n    float)\nC++: virtual double *GetOrientedBounds()\n\n"},
  {"SetUseOrientedBounds", PyvtkCubeAxesActor_SetUseOrientedBounds, METH_VARARGS,
   "SetUseOrientedBounds(self, _arg:bool) -> None\nC++: virtual void SetUseOrientedBounds(bool _arg)\n\nEnable/Disable the usage of the OrientedBounds. Default: false.\n"},
  {"GetUseOrientedBounds", PyvtkCubeAxesActor_GetUseOrientedBounds, METH_VARARGS,
   "GetUseOrientedBounds(self) -> bool\nC++: virtual bool GetUseOrientedBounds()\n\n"},
  {"SetAxisBaseForX", PyvtkCubeAxesActor_SetAxisBaseForX, METH_VARARGS,
   "SetAxisBaseForX(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetAxisBaseForX(double _arg1, double _arg2,\n    double _arg3)\nSetAxisBaseForX(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAxisBaseForX(const double _arg[3])\n\nVector that should be use as the base for X. Default: (1.0, 0.0,\n0.0).\n"},
  {"GetAxisBaseForX", PyvtkCubeAxesActor_GetAxisBaseForX, METH_VARARGS,
   "GetAxisBaseForX(self) -> (float, float, float)\nC++: virtual double *GetAxisBaseForX()\n\n"},
  {"SetAxisBaseForY", PyvtkCubeAxesActor_SetAxisBaseForY, METH_VARARGS,
   "SetAxisBaseForY(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetAxisBaseForY(double _arg1, double _arg2,\n    double _arg3)\nSetAxisBaseForY(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAxisBaseForY(const double _arg[3])\n\nVector that should be use as the base for Y. Default: (0.0, 1.0,\n0.0).\n"},
  {"GetAxisBaseForY", PyvtkCubeAxesActor_GetAxisBaseForY, METH_VARARGS,
   "GetAxisBaseForY(self) -> (float, float, float)\nC++: virtual double *GetAxisBaseForY()\n\n"},
  {"SetAxisBaseForZ", PyvtkCubeAxesActor_SetAxisBaseForZ, METH_VARARGS,
   "SetAxisBaseForZ(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetAxisBaseForZ(double _arg1, double _arg2,\n    double _arg3)\nSetAxisBaseForZ(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAxisBaseForZ(const double _arg[3])\n\nVector that should be use as the base for Z. Default: (0.0, 0.0,\n1.0).\n"},
  {"GetAxisBaseForZ", PyvtkCubeAxesActor_GetAxisBaseForZ, METH_VARARGS,
   "GetAxisBaseForZ(self) -> (float, float, float)\nC++: virtual double *GetAxisBaseForZ()\n\n"},
  {"SetAxisOrigin", PyvtkCubeAxesActor_SetAxisOrigin, METH_VARARGS,
   "SetAxisOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetAxisOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetAxisOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAxisOrigin(const double _arg[3])\n\nProvide a custom AxisOrigin. This point must be inside the\nbounding box and will represent the point where the 3 axes will\nintersect. Default: (0.0, 0.0, 0.0).\n"},
  {"GetAxisOrigin", PyvtkCubeAxesActor_GetAxisOrigin, METH_VARARGS,
   "GetAxisOrigin(self) -> (float, float, float)\nC++: virtual double *GetAxisOrigin()\n\n"},
  {"SetUseAxisOrigin", PyvtkCubeAxesActor_SetUseAxisOrigin, METH_VARARGS,
   "SetUseAxisOrigin(self, _arg:bool) -> None\nC++: virtual void SetUseAxisOrigin(bool _arg)\n\nEnable/Disable the usage of the AxisOrigin. Default: false.\n"},
  {"GetUseAxisOrigin", PyvtkCubeAxesActor_GetUseAxisOrigin, METH_VARARGS,
   "GetUseAxisOrigin(self) -> bool\nC++: virtual bool GetUseAxisOrigin()\n\n"},
  {"SetGridLineLocation", PyvtkCubeAxesActor_SetGridLineLocation, METH_VARARGS,
   "SetGridLineLocation(self, _arg:int) -> None\nC++: virtual void SetGridLineLocation(int _arg)\n\nSpecify the mode in which the cube axes should render its\ngridLines. Default: VTK_GRID_LINES_ALL.\n"},
  {"GetGridLineLocation", PyvtkCubeAxesActor_GetGridLineLocation, METH_VARARGS,
   "GetGridLineLocation(self) -> int\nC++: virtual int GetGridLineLocation()\n\n"},
  {"SetStickyAxes", PyvtkCubeAxesActor_SetStickyAxes, METH_VARARGS,
   "SetStickyAxes(self, _arg:bool) -> None\nC++: virtual void SetStickyAxes(bool _arg)\n\nEnable/Disable axis stickiness. When on, the axes will be\nadjusted to always be visible in the viewport unless the original\nbounds of the axes are entirely outside the viewport. Default:\nfalse.\n"},
  {"GetStickyAxes", PyvtkCubeAxesActor_GetStickyAxes, METH_VARARGS,
   "GetStickyAxes(self) -> bool\nC++: virtual bool GetStickyAxes()\n\n"},
  {"StickyAxesOn", PyvtkCubeAxesActor_StickyAxesOn, METH_VARARGS,
   "StickyAxesOn(self) -> None\nC++: virtual void StickyAxesOn()\n\n"},
  {"StickyAxesOff", PyvtkCubeAxesActor_StickyAxesOff, METH_VARARGS,
   "StickyAxesOff(self) -> None\nC++: virtual void StickyAxesOff()\n\n"},
  {"SetCenterStickyAxes", PyvtkCubeAxesActor_SetCenterStickyAxes, METH_VARARGS,
   "SetCenterStickyAxes(self, _arg:bool) -> None\nC++: virtual void SetCenterStickyAxes(bool _arg)\n\nEnable/Disable centering of axes when the Sticky option is on. If\non, the axes bounds will be centered in the viewport. Otherwise,\nthe axes can move about the longer of the horizontal or vertical\ndirections of the viewport to follow the data. Default: true.\n"},
  {"GetCenterStickyAxes", PyvtkCubeAxesActor_GetCenterStickyAxes, METH_VARARGS,
   "GetCenterStickyAxes(self) -> bool\nC++: virtual bool GetCenterStickyAxes()\n\n"},
  {"CenterStickyAxesOn", PyvtkCubeAxesActor_CenterStickyAxesOn, METH_VARARGS,
   "CenterStickyAxesOn(self) -> None\nC++: virtual void CenterStickyAxesOn()\n\n"},
  {"CenterStickyAxesOff", PyvtkCubeAxesActor_CenterStickyAxesOff, METH_VARARGS,
   "CenterStickyAxesOff(self) -> None\nC++: virtual void CenterStickyAxesOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCubeAxesActor_Doc =
  "vtkCubeAxesActor - create a plot of a bounding box edges - used for\nnavigation\n\n"
  "Superclass: vtkActor\n\n"
  "vtkCubeAxesActor is a composite actor that draws axes of the bounding\n"
  "box of an input dataset. The axes include labels and titles for the\n"
  "x-y-z axes. The algorithm selects which axes to draw based on the\n"
  "user-defined 'fly' mode.  (STATIC is default). 'STATIC' constructs\n"
  "axes from all edges of the bounding box. 'CLOSEST_TRIAD' consists of\n"
  "the three axes x-y-z forming a triad that lies closest to the\n"
  "specified camera. 'FURTHEST_TRIAD' consists of the three axes x-y-z\n"
  "forming a triad that lies furthest from the specified camera.\n"
  "'OUTER_EDGES' is constructed from edges that are on the \"exterior\" of\n"
  "the bounding box, exterior as determined from examining outer edges\n"
  "of the bounding box in projection (display) space.\n\n"
  "To use this object you must define a bounding box and the camera used\n"
  "to render the vtkCubeAxesActor. You can optionally turn on/off\n"
  "labels, ticks, gridlines, and set tick location, number of labels,\n"
  "and text to use for axis-titles.  A 'corner offset' can also be set. \n"
  "This allows the axes to be set partially away from the actual\n"
  "bounding box to perhaps prevent overlap of labels between the various\n"
  "axes.\n\n"
  "The Bounds instance variable (an array of six doubles) is used to\n"
  "determine the bounding box.\n\n"
  "@par Thanks: This class was written by: Hank Childs, Kathleen\n"
  "Bonnell, Amy Squillacote, Brad Whitlock, Will Schroeder, Eric\n"
  "Brugger, Daniel Aguilera, Claire Guilbaud, Nicolas Dolegieviez,\n"
  "Aashish Chaudhary, Philippe Pebay, David Gobbi, David Partyka,\n"
  "Utkarsh Ayachit David Cole, Francois Bertel, and Mark Olesen Part of\n"
  "this work was supported by CEA/DIF - Commissariat a l'Energie\n"
  "Atomique, Centre DAM Ile-De-France, BP12, F-91297 Arpajon, France.\n\n"
  "@sa\n"
  "vtkActor vtkAxisActor vtkCubeAxesActor2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCubeAxesActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkCubeAxesActor", // tp_name
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
  PyvtkCubeAxesActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCubeAxesActor_StaticNew()
{
  return vtkCubeAxesActor::New();
}

PyObject *PyvtkCubeAxesActor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCubeAxesActor_Type, PyvtkCubeAxesActor_Methods,
    "vtkCubeAxesActor",
 &PyvtkCubeAxesActor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkActor");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCubeAxesActor_FlyMode_Type);
  PyVTKEnum_Add(&PyvtkCubeAxesActor_FlyMode_Type, "vtkCubeAxesActor.FlyMode");

  o = (PyObject *)&PyvtkCubeAxesActor_FlyMode_Type;
  if (PyDict_SetItemString(d, "FlyMode", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkCubeAxesActor_TickLocation_Type);
  PyVTKEnum_Add(&PyvtkCubeAxesActor_TickLocation_Type, "vtkCubeAxesActor.TickLocation");

  o = (PyObject *)&PyvtkCubeAxesActor_TickLocation_Type;
  if (PyDict_SetItemString(d, "TickLocation", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkCubeAxesActor_GridVisibility_Type);
  PyVTKEnum_Add(&PyvtkCubeAxesActor_GridVisibility_Type, "vtkCubeAxesActor.GridVisibility");

  o = (PyObject *)&PyvtkCubeAxesActor_GridVisibility_Type;
  if (PyDict_SetItemString(d, "GridVisibility", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_FLY_OUTER_EDGES", vtkCubeAxesActor::VTK_FLY_OUTER_EDGES },
        { "VTK_FLY_CLOSEST_TRIAD", vtkCubeAxesActor::VTK_FLY_CLOSEST_TRIAD },
        { "VTK_FLY_FURTHEST_TRIAD", vtkCubeAxesActor::VTK_FLY_FURTHEST_TRIAD },
        { "VTK_FLY_STATIC_TRIAD", vtkCubeAxesActor::VTK_FLY_STATIC_TRIAD },
        { "VTK_FLY_STATIC_EDGES", vtkCubeAxesActor::VTK_FLY_STATIC_EDGES },
      };

    o = PyvtkCubeAxesActor_FlyMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_TICKS_INSIDE", vtkCubeAxesActor::VTK_TICKS_INSIDE },
        { "VTK_TICKS_OUTSIDE", vtkCubeAxesActor::VTK_TICKS_OUTSIDE },
        { "VTK_TICKS_BOTH", vtkCubeAxesActor::VTK_TICKS_BOTH },
      };

    o = PyvtkCubeAxesActor_TickLocation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkCubeAxesActor::GridVisibility cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "VTK_GRID_LINES_ALL", vtkCubeAxesActor::VTK_GRID_LINES_ALL },
        { "VTK_GRID_LINES_CLOSEST", vtkCubeAxesActor::VTK_GRID_LINES_CLOSEST },
        { "VTK_GRID_LINES_FURTHEST", vtkCubeAxesActor::VTK_GRID_LINES_FURTHEST },
      };

    o = PyvtkCubeAxesActor_GridVisibility_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCubeAxesActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCubeAxesActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCubeAxesActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

