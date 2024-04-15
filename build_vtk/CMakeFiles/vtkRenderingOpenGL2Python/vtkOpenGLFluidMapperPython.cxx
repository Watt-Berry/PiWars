// python wrapper for vtkOpenGLFluidMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLFluidMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLFluidMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLFluidMapper_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLFluidMapper_FluidSurfaceFilterMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLFluidMapper.FluidSurfaceFilterMethod", // tp_name
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
PyObject *PyvtkOpenGLFluidMapper_FluidSurfaceFilterMethod_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOpenGLFluidMapper_FluidSurfaceFilterMethod_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLFluidMapper_FluidDisplayMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLFluidMapper.FluidDisplayMode", // tp_name
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
PyObject *PyvtkOpenGLFluidMapper_FluidDisplayMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOpenGLFluidMapper_FluidDisplayMode_Type, static_cast<int>(val));
}


static PyObject *
PyvtkOpenGLFluidMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLFluidMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLFluidMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLFluidMapper *tempr = vtkOpenGLFluidMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLFluidMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLFluidMapper::NewInstance());

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
PyvtkOpenGLFluidMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLFluidMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLFluidMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkOpenGLFluidMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarVisibility(temp0);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetScalarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_GetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScalarVisibility() :
      op->vtkOpenGLFluidMapper::GetScalarVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_ScalarVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOn();
    }
    else
    {
      op->vtkOpenGLFluidMapper::ScalarVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_ScalarVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOff();
    }
    else
    {
      op->vtkOpenGLFluidMapper::ScalarVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SetParticleRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParticleRadius(temp0);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetParticleRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_GetParticleRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetParticleRadius() :
      op->vtkOpenGLFluidMapper::GetParticleRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SetThicknessAndVolumeColorFilterRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThicknessAndVolumeColorFilterRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThicknessAndVolumeColorFilterRadius(temp0);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetThicknessAndVolumeColorFilterRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_GetThicknessAndVolumeColorFilterRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThicknessAndVolumeColorFilterRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetThicknessAndVolumeColorFilterRadius() :
      op->vtkOpenGLFluidMapper::GetThicknessAndVolumeColorFilterRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SetSurfaceFilterMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceFilterMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  vtkOpenGLFluidMapper::FluidSurfaceFilterMethod temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkOpenGLFluidMapper.FluidSurfaceFilterMethod"))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceFilterMethod(temp0);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetSurfaceFilterMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_GetSurfaceFilterMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceFilterMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLFluidMapper::FluidSurfaceFilterMethod tempr = (ap.IsBound() ?
      op->GetSurfaceFilterMethod() :
      op->vtkOpenGLFluidMapper::GetSurfaceFilterMethod());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkOpenGLFluidMapper.FluidSurfaceFilterMethod");
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SetNarrowRangeFilterParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNarrowRangeFilterParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNarrowRangeFilterParameters(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetNarrowRangeFilterParameters(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SetBilateralGaussianFilterParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBilateralGaussianFilterParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBilateralGaussianFilterParameter(temp0);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetBilateralGaussianFilterParameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SetDisplayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  vtkOpenGLFluidMapper::FluidDisplayMode temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkOpenGLFluidMapper.FluidDisplayMode"))
  {
    if (ap.IsBound())
    {
      op->SetDisplayMode(temp0);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetDisplayMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_GetDisplayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLFluidMapper::FluidDisplayMode tempr = (ap.IsBound() ?
      op->GetDisplayMode() :
      op->vtkOpenGLFluidMapper::GetDisplayMode());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkOpenGLFluidMapper.FluidDisplayMode");
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SetAttenuationColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttenuationColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAttenuationColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetAttenuationColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFluidMapper_SetAttenuationColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttenuationColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAttenuationColor(temp0);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetAttenuationColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFluidMapper_SetAttenuationColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkOpenGLFluidMapper_SetAttenuationColor_s1(self, args);
    case 1:
      return PyvtkOpenGLFluidMapper_SetAttenuationColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAttenuationColor");
  return nullptr;
}


static PyObject *
PyvtkOpenGLFluidMapper_GetAttenuationColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttenuationColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetAttenuationColor() :
      op->vtkOpenGLFluidMapper::GetAttenuationColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SetOpaqueColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpaqueColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOpaqueColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetOpaqueColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFluidMapper_SetOpaqueColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpaqueColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOpaqueColor(temp0);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetOpaqueColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFluidMapper_SetOpaqueColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkOpenGLFluidMapper_SetOpaqueColor_s1(self, args);
    case 1:
      return PyvtkOpenGLFluidMapper_SetOpaqueColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOpaqueColor");
  return nullptr;
}


static PyObject *
PyvtkOpenGLFluidMapper_GetOpaqueColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpaqueColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetOpaqueColor() :
      op->vtkOpenGLFluidMapper::GetOpaqueColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SetParticleColorPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleColorPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParticleColorPower(temp0);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetParticleColorPower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_GetParticleColorPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleColorPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetParticleColorPower() :
      op->vtkOpenGLFluidMapper::GetParticleColorPower());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SetParticleColorScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleColorScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParticleColorScale(temp0);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetParticleColorScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_GetParticleColorScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleColorScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetParticleColorScale() :
      op->vtkOpenGLFluidMapper::GetParticleColorScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SetAttenuationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttenuationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttenuationScale(temp0);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetAttenuationScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_GetAttenuationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttenuationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetAttenuationScale() :
      op->vtkOpenGLFluidMapper::GetAttenuationScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SetAdditionalReflection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdditionalReflection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdditionalReflection(temp0);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetAdditionalReflection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_GetAdditionalReflection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdditionalReflection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetAdditionalReflection() :
      op->vtkOpenGLFluidMapper::GetAdditionalReflection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SetRefractionScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefractionScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRefractionScale(temp0);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetRefractionScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_GetRefractionScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefractionScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetRefractionScale() :
      op->vtkOpenGLFluidMapper::GetRefractionScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_SetRefractiveIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefractiveIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRefractiveIndex(temp0);
    }
    else
    {
      op->vtkOpenGLFluidMapper::SetRefractiveIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_GetRefractiveIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefractiveIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetRefractiveIndex() :
      op->vtkOpenGLFluidMapper::GetRefractiveIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLFluidMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFluidMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFluidMapper *op = static_cast<vtkOpenGLFluidMapper *>(vp);

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
      op->vtkOpenGLFluidMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLFluidMapper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLFluidMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLFluidMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLFluidMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLFluidMapper\nC++: static vtkOpenGLFluidMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLFluidMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLFluidMapper\nC++: vtkOpenGLFluidMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLFluidMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLFluidMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputData", PyvtkOpenGLFluidMapper_SetInputData, METH_VARARGS,
   "SetInputData(self, in_:vtkPolyData) -> None\nC++: void SetInputData(vtkPolyData *in)\n\nSpecify the input data to map.\n"},
  {"GetInput", PyvtkOpenGLFluidMapper_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkPolyData\nC++: vtkPolyData *GetInput()\n\n"},
  {"SetScalarVisibility", PyvtkOpenGLFluidMapper_SetScalarVisibility, METH_VARARGS,
   "SetScalarVisibility(self, _arg:bool) -> None\nC++: virtual void SetScalarVisibility(bool _arg)\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"GetScalarVisibility", PyvtkOpenGLFluidMapper_GetScalarVisibility, METH_VARARGS,
   "GetScalarVisibility(self) -> bool\nC++: virtual bool GetScalarVisibility()\n\n"},
  {"ScalarVisibilityOn", PyvtkOpenGLFluidMapper_ScalarVisibilityOn, METH_VARARGS,
   "ScalarVisibilityOn(self) -> None\nC++: virtual void ScalarVisibilityOn()\n\n"},
  {"ScalarVisibilityOff", PyvtkOpenGLFluidMapper_ScalarVisibilityOff, METH_VARARGS,
   "ScalarVisibilityOff(self) -> None\nC++: virtual void ScalarVisibilityOff()\n\n"},
  {"SetParticleRadius", PyvtkOpenGLFluidMapper_SetParticleRadius, METH_VARARGS,
   "SetParticleRadius(self, _arg:float) -> None\nC++: virtual void SetParticleRadius(float _arg)\n\nSet/Get the particle radius, must be explicitly set by user To\nfuse the gaps between particles and obtain a smooth surface, this\nparameter need to be slightly larger than the actual particle\nradius, (particle radius is the half distance between two\nconsecutive particles in regular pattern sampling)\n"},
  {"GetParticleRadius", PyvtkOpenGLFluidMapper_GetParticleRadius, METH_VARARGS,
   "GetParticleRadius(self) -> float\nC++: virtual float GetParticleRadius()\n\n"},
  {"SetThicknessAndVolumeColorFilterRadius", PyvtkOpenGLFluidMapper_SetThicknessAndVolumeColorFilterRadius, METH_VARARGS,
   "SetThicknessAndVolumeColorFilterRadius(self, _arg:float) -> None\nC++: virtual void SetThicknessAndVolumeColorFilterRadius(\n    float _arg)\n\nGet/Set the filter radius to filter the volume thickness and\nparticle color This is an optional parameter, default value is 10\n(pixels)\n"},
  {"GetThicknessAndVolumeColorFilterRadius", PyvtkOpenGLFluidMapper_GetThicknessAndVolumeColorFilterRadius, METH_VARARGS,
   "GetThicknessAndVolumeColorFilterRadius(self) -> float\nC++: virtual float GetThicknessAndVolumeColorFilterRadius()\n\n"},
  {"SetSurfaceFilterMethod", PyvtkOpenGLFluidMapper_SetSurfaceFilterMethod, METH_VARARGS,
   "SetSurfaceFilterMethod(self,\n    _arg:vtkOpenGLFluidMapper.FluidSurfaceFilterMethod) -> None\nC++: virtual void SetSurfaceFilterMethod(\n    vtkOpenGLFluidMapper::FluidSurfaceFilterMethod _arg)\n\nGet/Set the filter method for filtering fluid surface\n"},
  {"GetSurfaceFilterMethod", PyvtkOpenGLFluidMapper_GetSurfaceFilterMethod, METH_VARARGS,
   "GetSurfaceFilterMethod(self)\n    -> vtkOpenGLFluidMapper.FluidSurfaceFilterMethod\nC++: virtual vtkOpenGLFluidMapper::FluidSurfaceFilterMethod GetSurfaceFilterMethod(\n    )\n\n"},
  {"SetNarrowRangeFilterParameters", PyvtkOpenGLFluidMapper_SetNarrowRangeFilterParameters, METH_VARARGS,
   "SetNarrowRangeFilterParameters(self, lambda_:float, mu:float)\n    -> None\nC++: void SetNarrowRangeFilterParameters(float lambda, float mu)\n\nOptional parameters, exclusively for narrow range filter The\nfirst parameter is to control smoothing between surface depth\nvalues The second parameter is to control curvature of the\nsurface edges\n"},
  {"SetBilateralGaussianFilterParameter", PyvtkOpenGLFluidMapper_SetBilateralGaussianFilterParameter, METH_VARARGS,
   "SetBilateralGaussianFilterParameter(self, sigmaDepth:float)\n    -> None\nC++: void SetBilateralGaussianFilterParameter(float sigmaDepth)\n\nOptional parameters, exclusively for bilateral gaussian filter\nThe parameter is for controlling smoothing between surface depth\nvalues\n"},
  {"SetDisplayMode", PyvtkOpenGLFluidMapper_SetDisplayMode, METH_VARARGS,
   "SetDisplayMode(self, _arg:vtkOpenGLFluidMapper.FluidDisplayMode)\n    -> None\nC++: virtual void SetDisplayMode(\n    vtkOpenGLFluidMapper::FluidDisplayMode _arg)\n\nGet/Set the display mode\n"},
  {"GetDisplayMode", PyvtkOpenGLFluidMapper_GetDisplayMode, METH_VARARGS,
   "GetDisplayMode(self) -> vtkOpenGLFluidMapper.FluidDisplayMode\nC++: virtual vtkOpenGLFluidMapper::FluidDisplayMode GetDisplayMode(\n    )\n\n"},
  {"SetAttenuationColor", PyvtkOpenGLFluidMapper_SetAttenuationColor, METH_VARARGS,
   "SetAttenuationColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetAttenuationColor(float _arg1, float _arg2,\n    float _arg3)\nSetAttenuationColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAttenuationColor(const float _arg[3])\n\nGet/Set the fluid attenuation color (color that will be absorpted\nexponentially when going through the fluid volume)\n"},
  {"GetAttenuationColor", PyvtkOpenGLFluidMapper_GetAttenuationColor, METH_VARARGS,
   "GetAttenuationColor(self) -> (float, float, float)\nC++: virtual float *GetAttenuationColor()\n\n"},
  {"SetOpaqueColor", PyvtkOpenGLFluidMapper_SetOpaqueColor, METH_VARARGS,
   "SetOpaqueColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetOpaqueColor(float _arg1, float _arg2,\n    float _arg3)\nSetOpaqueColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOpaqueColor(const float _arg[3])\n\nGet/Set the fluid surface color if rendered in opaque surface\nmode without particle color\n"},
  {"GetOpaqueColor", PyvtkOpenGLFluidMapper_GetOpaqueColor, METH_VARARGS,
   "GetOpaqueColor(self) -> (float, float, float)\nC++: virtual float *GetOpaqueColor()\n\n"},
  {"SetParticleColorPower", PyvtkOpenGLFluidMapper_SetParticleColorPower, METH_VARARGS,
   "SetParticleColorPower(self, _arg:float) -> None\nC++: virtual void SetParticleColorPower(float _arg)\n\nGet/Set the power value for particle color if input data has\nparticle color Default value is 0.1, and can be set to any\nnon-negative number The particle color is then recomputed as\nnewColor = pow(oldColor, power) * scale\n"},
  {"GetParticleColorPower", PyvtkOpenGLFluidMapper_GetParticleColorPower, METH_VARARGS,
   "GetParticleColorPower(self) -> float\nC++: virtual float GetParticleColorPower()\n\n"},
  {"SetParticleColorScale", PyvtkOpenGLFluidMapper_SetParticleColorScale, METH_VARARGS,
   "SetParticleColorScale(self, _arg:float) -> None\nC++: virtual void SetParticleColorScale(float _arg)\n\nGet/Set the scale value for particle color if input data has\nparticle color Default value is 1.0, and can be set to any\nnon-negative number The particle color is then recomputed as\nnewColor = pow(oldColor, power) * scale\n"},
  {"GetParticleColorScale", PyvtkOpenGLFluidMapper_GetParticleColorScale, METH_VARARGS,
   "GetParticleColorScale(self) -> float\nC++: virtual float GetParticleColorScale()\n\n"},
  {"SetAttenuationScale", PyvtkOpenGLFluidMapper_SetAttenuationScale, METH_VARARGS,
   "SetAttenuationScale(self, _arg:float) -> None\nC++: virtual void SetAttenuationScale(float _arg)\n\nGet/Set the fluid volume attenuation scale, which will be\nmultiplied with attenuation color Default value is 1.0, and can\nbe set to any non-negative number The larger attenuation scale,\nthe darker fluid color\n"},
  {"GetAttenuationScale", PyvtkOpenGLFluidMapper_GetAttenuationScale, METH_VARARGS,
   "GetAttenuationScale(self) -> float\nC++: virtual float GetAttenuationScale()\n\n"},
  {"SetAdditionalReflection", PyvtkOpenGLFluidMapper_SetAdditionalReflection, METH_VARARGS,
   "SetAdditionalReflection(self, _arg:float) -> None\nC++: virtual void SetAdditionalReflection(float _arg)\n\nGet/Set the fluid surface additional reflection scale This value\nis in [0, 1], which 0 means using the reflection color computed\nfrom fresnel equation, and 1 means using reflection color as [1,\n1, 1] Default value is 0\n"},
  {"GetAdditionalReflection", PyvtkOpenGLFluidMapper_GetAdditionalReflection, METH_VARARGS,
   "GetAdditionalReflection(self) -> float\nC++: virtual float GetAdditionalReflection()\n\n"},
  {"SetRefractionScale", PyvtkOpenGLFluidMapper_SetRefractionScale, METH_VARARGS,
   "SetRefractionScale(self, _arg:float) -> None\nC++: virtual void SetRefractionScale(float _arg)\n\nGet/Set the scale value for refraction This is needed for tweak\nrefraction of volumes with different size scales For example,\nfluid volume having diameter of 100.0 will refract light much\nmore than volume with diameter 1.0 This value is in [0, 1],\ndefault value is 1.0\n"},
  {"GetRefractionScale", PyvtkOpenGLFluidMapper_GetRefractionScale, METH_VARARGS,
   "GetRefractionScale(self) -> float\nC++: virtual float GetRefractionScale()\n\n"},
  {"SetRefractiveIndex", PyvtkOpenGLFluidMapper_SetRefractiveIndex, METH_VARARGS,
   "SetRefractiveIndex(self, _arg:float) -> None\nC++: virtual void SetRefractiveIndex(float _arg)\n\nGet/Set the fluid refraction index. The default value is 1.33\n(water)\n"},
  {"GetRefractiveIndex", PyvtkOpenGLFluidMapper_GetRefractiveIndex, METH_VARARGS,
   "GetRefractiveIndex(self) -> float\nC++: virtual float GetRefractiveIndex()\n\n"},
  {"Render", PyvtkOpenGLFluidMapper_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer, vol:vtkVolume) -> None\nC++: void Render(vtkRenderer *ren, vtkVolume *vol) override;\n\nThis calls RenderPiece\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLFluidMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, w:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLFluidMapper_Doc =
  "vtkOpenGLFluidMapper - Render fluid from position data (and color, if\navailable)\n\n"
  "Superclass: vtkAbstractVolumeMapper\n\n"
  "An OpenGL mapper that display fluid volume using a screen space fluid\n"
  "rendering technique. Thanks to Nghia Truong for the algorithm and\n"
  "initial implementation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLFluidMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLFluidMapper", // tp_name
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
  PyvtkOpenGLFluidMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLFluidMapper_StaticNew()
{
  return vtkOpenGLFluidMapper::New();
}

PyObject *PyvtkOpenGLFluidMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLFluidMapper_Type, PyvtkOpenGLFluidMapper_Methods,
    "vtkOpenGLFluidMapper",
 &PyvtkOpenGLFluidMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAbstractVolumeMapper");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOpenGLFluidMapper_FluidSurfaceFilterMethod_Type);
  PyVTKEnum_Add(&PyvtkOpenGLFluidMapper_FluidSurfaceFilterMethod_Type, "vtkOpenGLFluidMapper.FluidSurfaceFilterMethod");

  o = (PyObject *)&PyvtkOpenGLFluidMapper_FluidSurfaceFilterMethod_Type;
  if (PyDict_SetItemString(d, "FluidSurfaceFilterMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkOpenGLFluidMapper_FluidDisplayMode_Type);
  PyVTKEnum_Add(&PyvtkOpenGLFluidMapper_FluidDisplayMode_Type, "vtkOpenGLFluidMapper.FluidDisplayMode");

  o = (PyObject *)&PyvtkOpenGLFluidMapper_FluidDisplayMode_Type;
  if (PyDict_SetItemString(d, "FluidDisplayMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkOpenGLFluidMapper::FluidSurfaceFilterMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "BilateralGaussian", vtkOpenGLFluidMapper::BilateralGaussian },
        { "NarrowRange", vtkOpenGLFluidMapper::NarrowRange },
        { "NumFilterMethods", vtkOpenGLFluidMapper::NumFilterMethods },
      };

    o = PyvtkOpenGLFluidMapper_FluidSurfaceFilterMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkOpenGLFluidMapper::FluidDisplayMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "UnfilteredOpaqueSurface", vtkOpenGLFluidMapper::UnfilteredOpaqueSurface },
        { "FilteredOpaqueSurface", vtkOpenGLFluidMapper::FilteredOpaqueSurface },
        { "UnfilteredSurfaceNormal", vtkOpenGLFluidMapper::UnfilteredSurfaceNormal },
        { "FilteredSurfaceNormal", vtkOpenGLFluidMapper::FilteredSurfaceNormal },
        { "TransparentFluidVolume", vtkOpenGLFluidMapper::TransparentFluidVolume },
        { "NumDisplayModes", vtkOpenGLFluidMapper::NumDisplayModes },
      };

    o = PyvtkOpenGLFluidMapper_FluidDisplayMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLFluidMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLFluidMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLFluidMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

