// python wrapper for vtkOpenGLRenderer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLRenderer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLRenderer(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLRenderer_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLRenderer_LightingComplexityEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLRenderer.LightingComplexityEnum", // tp_name
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
PyObject *PyvtkOpenGLRenderer_LightingComplexityEnum_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOpenGLRenderer_LightingComplexityEnum_Type, static_cast<int>(val));
}


static PyObject *
PyvtkOpenGLRenderer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLRenderer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLRenderer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLRenderer *tempr = vtkOpenGLRenderer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLRenderer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLRenderer::NewInstance());

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
PyvtkOpenGLRenderer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLRenderer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLRenderer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_DeviceRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeviceRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeviceRender();
    }
    else
    {
      op->vtkOpenGLRenderer::DeviceRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_DeviceRenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeviceRenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  vtkFrameBufferObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkFrameBufferObjectBase")))
  {
    if (ap.IsBound())
    {
      op->DeviceRenderOpaqueGeometry(temp0);
    }
    else
    {
      op->vtkOpenGLRenderer::DeviceRenderOpaqueGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_DeviceRenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeviceRenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  vtkFrameBufferObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkFrameBufferObjectBase")))
  {
    if (ap.IsBound())
    {
      op->DeviceRenderTranslucentPolygonalGeometry(temp0);
    }
    else
    {
      op->vtkOpenGLRenderer::DeviceRenderTranslucentPolygonalGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkOpenGLRenderer::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_UpdateLights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateLights() :
      op->vtkOpenGLRenderer::UpdateLights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetDepthPeelingHigherLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthPeelingHigherLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDepthPeelingHigherLayer() :
      op->vtkOpenGLRenderer::GetDepthPeelingHigherLayer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_HaveAppleQueryAllocationBug(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HaveAppleQueryAllocationBug");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkOpenGLRenderer::HaveAppleQueryAllocationBug();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_IsDualDepthPeelingSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDualDepthPeelingSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDualDepthPeelingSupported() :
      op->vtkOpenGLRenderer::IsDualDepthPeelingSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLState *tempr = (ap.IsBound() ?
      op->GetState() :
      op->vtkOpenGLRenderer::GetState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetLightingUniforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightingUniforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLightingUniforms() :
      op->vtkOpenGLRenderer::GetLightingUniforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_UpdateLightingUniforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLightingUniforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram"))
  {
    if (ap.IsBound())
    {
      op->UpdateLightingUniforms(temp0);
    }
    else
    {
      op->vtkOpenGLRenderer::UpdateLightingUniforms(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetLightingComplexity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightingComplexity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLightingComplexity() :
      op->vtkOpenGLRenderer::GetLightingComplexity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetLightingCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightingCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLightingCount() :
      op->vtkOpenGLRenderer::GetLightingCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_SetUserLightTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserLightTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->SetUserLightTransform(temp0);
    }
    else
    {
      op->vtkOpenGLRenderer::SetUserLightTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetUserLightTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserLightTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetUserLightTransform() :
      op->vtkOpenGLRenderer::GetUserLightTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetEnvMapLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnvMapLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPBRLUTTexture *tempr = (ap.IsBound() ?
      op->GetEnvMapLookupTable() :
      op->vtkOpenGLRenderer::GetEnvMapLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetEnvMapIrradiance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnvMapIrradiance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPBRIrradianceTexture *tempr = (ap.IsBound() ?
      op->GetEnvMapIrradiance() :
      op->vtkOpenGLRenderer::GetEnvMapIrradiance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetEnvMapPrefiltered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnvMapPrefiltered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPBRPrefilterTexture *tempr = (ap.IsBound() ?
      op->GetEnvMapPrefiltered() :
      op->vtkOpenGLRenderer::GetEnvMapPrefiltered());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetSphericalHarmonics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphericalHarmonics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetSphericalHarmonics() :
      op->vtkOpenGLRenderer::GetSphericalHarmonics());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_SetUseSphericalHarmonics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseSphericalHarmonics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseSphericalHarmonics(temp0);
    }
    else
    {
      op->vtkOpenGLRenderer::SetUseSphericalHarmonics(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_GetUseSphericalHarmonics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSphericalHarmonics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseSphericalHarmonics() :
      op->vtkOpenGLRenderer::GetUseSphericalHarmonics());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_UseSphericalHarmonicsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSphericalHarmonicsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSphericalHarmonicsOn();
    }
    else
    {
      op->vtkOpenGLRenderer::UseSphericalHarmonicsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_UseSphericalHarmonicsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSphericalHarmonicsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSphericalHarmonicsOff();
    }
    else
    {
      op->vtkOpenGLRenderer::UseSphericalHarmonicsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_SetEnvironmentTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnvironmentTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

  vtkTexture *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkTexture") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetEnvironmentTexture(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLRenderer::SetEnvironmentTexture(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderer_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderer *op = static_cast<vtkOpenGLRenderer *>(vp);

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
      op->vtkOpenGLRenderer::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderer_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLRenderer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLRenderer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLRenderer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLRenderer\nC++: static vtkOpenGLRenderer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLRenderer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLRenderer\nC++: vtkOpenGLRenderer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLRenderer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLRenderer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DeviceRender", PyvtkOpenGLRenderer_DeviceRender, METH_VARARGS,
   "DeviceRender(self) -> None\nC++: void DeviceRender() override;\n\nConcrete open gl render method.\n"},
  {"DeviceRenderOpaqueGeometry", PyvtkOpenGLRenderer_DeviceRenderOpaqueGeometry, METH_VARARGS,
   "DeviceRenderOpaqueGeometry(self, fbo:vtkFrameBufferObjectBase=...)\n     -> None\nC++: void DeviceRenderOpaqueGeometry(\n    vtkFrameBufferObjectBase *fbo=nullptr) override;\n\nOverridden to support hidden line removal.\n"},
  {"DeviceRenderTranslucentPolygonalGeometry", PyvtkOpenGLRenderer_DeviceRenderTranslucentPolygonalGeometry, METH_VARARGS,
   "DeviceRenderTranslucentPolygonalGeometry(self,\n    fbo:vtkFrameBufferObjectBase=...) -> None\nC++: void DeviceRenderTranslucentPolygonalGeometry(\n    vtkFrameBufferObjectBase *fbo=nullptr) override;\n\nRender translucent polygonal geometry. Default implementation\njust call UpdateTranslucentPolygonalGeometry(). Subclasses of\nvtkRenderer that can deal with depth peeling must override this\nmethod.\n"},
  {"Clear", PyvtkOpenGLRenderer_Clear, METH_VARARGS,
   "Clear(self) -> None\nC++: void Clear() override;\n\nClear the image to the background color.\n"},
  {"UpdateLights", PyvtkOpenGLRenderer_UpdateLights, METH_VARARGS,
   "UpdateLights(self) -> int\nC++: int UpdateLights() override;\n\nAsk lights to load themselves into graphics pipeline.\n"},
  {"GetDepthPeelingHigherLayer", PyvtkOpenGLRenderer_GetDepthPeelingHigherLayer, METH_VARARGS,
   "GetDepthPeelingHigherLayer(self) -> int\nC++: int GetDepthPeelingHigherLayer()\n\nIs rendering at translucent geometry stage using depth peeling\nand rendering a layer other than the first one? (Boolean value)\nIf so, the uniform variables UseTexture and Texture can be set.\n(Used by vtkOpenGLProperty or vtkOpenGLTexture)\n"},
  {"HaveAppleQueryAllocationBug", PyvtkOpenGLRenderer_HaveAppleQueryAllocationBug, METH_VARARGS,
   "HaveAppleQueryAllocationBug() -> bool\nC++: static bool HaveAppleQueryAllocationBug()\n\nIndicate if this system is subject to the apple/NVIDIA bug that\ncauses crashes in the driver when too many query objects are\nallocated.\n"},
  {"IsDualDepthPeelingSupported", PyvtkOpenGLRenderer_IsDualDepthPeelingSupported, METH_VARARGS,
   "IsDualDepthPeelingSupported(self) -> bool\nC++: bool IsDualDepthPeelingSupported()\n\nDual depth peeling may be disabled for certain runtime\nconfigurations. This method returns true if\nvtkDualDepthPeelingPass will be used in place of\nvtkDepthPeelingPass.\n"},
  {"GetState", PyvtkOpenGLRenderer_GetState, METH_VARARGS,
   "GetState(self) -> vtkOpenGLState\nC++: vtkOpenGLState *GetState()\n\n"},
  {"GetLightingUniforms", PyvtkOpenGLRenderer_GetLightingUniforms, METH_VARARGS,
   "GetLightingUniforms(self) -> str\nC++: const char *GetLightingUniforms()\n\n"},
  {"UpdateLightingUniforms", PyvtkOpenGLRenderer_UpdateLightingUniforms, METH_VARARGS,
   "UpdateLightingUniforms(self, prog:vtkShaderProgram) -> None\nC++: void UpdateLightingUniforms(vtkShaderProgram *prog)\n\n"},
  {"GetLightingComplexity", PyvtkOpenGLRenderer_GetLightingComplexity, METH_VARARGS,
   "GetLightingComplexity(self) -> int\nC++: virtual int GetLightingComplexity()\n\n"},
  {"GetLightingCount", PyvtkOpenGLRenderer_GetLightingCount, METH_VARARGS,
   "GetLightingCount(self) -> int\nC++: virtual int GetLightingCount()\n\n"},
  {"SetUserLightTransform", PyvtkOpenGLRenderer_SetUserLightTransform, METH_VARARGS,
   "SetUserLightTransform(self, transform:vtkTransform) -> None\nC++: void SetUserLightTransform(vtkTransform *transform)\n\nSet the user light transform applied after the camera transform.\nCan be null to disable it.\n"},
  {"GetUserLightTransform", PyvtkOpenGLRenderer_GetUserLightTransform, METH_VARARGS,
   "GetUserLightTransform(self) -> vtkTransform\nC++: vtkTransform *GetUserLightTransform()\n\n"},
  {"GetEnvMapLookupTable", PyvtkOpenGLRenderer_GetEnvMapLookupTable, METH_VARARGS,
   "GetEnvMapLookupTable(self) -> vtkPBRLUTTexture\nC++: vtkPBRLUTTexture *GetEnvMapLookupTable()\n\nGet environment textures used for image based lighting.\n"},
  {"GetEnvMapIrradiance", PyvtkOpenGLRenderer_GetEnvMapIrradiance, METH_VARARGS,
   "GetEnvMapIrradiance(self) -> vtkPBRIrradianceTexture\nC++: vtkPBRIrradianceTexture *GetEnvMapIrradiance()\n\n"},
  {"GetEnvMapPrefiltered", PyvtkOpenGLRenderer_GetEnvMapPrefiltered, METH_VARARGS,
   "GetEnvMapPrefiltered(self) -> vtkPBRPrefilterTexture\nC++: vtkPBRPrefilterTexture *GetEnvMapPrefiltered()\n\n"},
  {"GetSphericalHarmonics", PyvtkOpenGLRenderer_GetSphericalHarmonics, METH_VARARGS,
   "GetSphericalHarmonics(self) -> vtkFloatArray\nC++: vtkFloatArray *GetSphericalHarmonics()\n\nGet spherical harmonics coefficients used for irradiance\n"},
  {"SetUseSphericalHarmonics", PyvtkOpenGLRenderer_SetUseSphericalHarmonics, METH_VARARGS,
   "SetUseSphericalHarmonics(self, _arg:bool) -> None\nC++: virtual void SetUseSphericalHarmonics(bool _arg)\n\nUse spherical harmonics instead of irradiance texture\n"},
  {"GetUseSphericalHarmonics", PyvtkOpenGLRenderer_GetUseSphericalHarmonics, METH_VARARGS,
   "GetUseSphericalHarmonics(self) -> bool\nC++: virtual bool GetUseSphericalHarmonics()\n\n"},
  {"UseSphericalHarmonicsOn", PyvtkOpenGLRenderer_UseSphericalHarmonicsOn, METH_VARARGS,
   "UseSphericalHarmonicsOn(self) -> None\nC++: virtual void UseSphericalHarmonicsOn()\n\n"},
  {"UseSphericalHarmonicsOff", PyvtkOpenGLRenderer_UseSphericalHarmonicsOff, METH_VARARGS,
   "UseSphericalHarmonicsOff(self) -> None\nC++: virtual void UseSphericalHarmonicsOff()\n\n"},
  {"SetEnvironmentTexture", PyvtkOpenGLRenderer_SetEnvironmentTexture, METH_VARARGS,
   "SetEnvironmentTexture(self, texture:vtkTexture, isSRGB:bool=False)\n     -> None\nC++: void SetEnvironmentTexture(vtkTexture *texture,\n    bool isSRGB=false) override;\n\nOverridden in order to connect the texture to the environment map\ntextures.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLRenderer_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, w:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLRenderer_Doc =
  "vtkOpenGLRenderer - OpenGL renderer\n\n"
  "Superclass: vtkRenderer\n\n"
  "vtkOpenGLRenderer is a concrete implementation of the abstract class\n"
  "vtkRenderer. vtkOpenGLRenderer interfaces to the OpenGL graphics\n"
  "library.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLRenderer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLRenderer", // tp_name
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
  PyvtkOpenGLRenderer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLRenderer_StaticNew()
{
  return vtkOpenGLRenderer::New();
}

PyObject *PyvtkOpenGLRenderer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLRenderer_Type, PyvtkOpenGLRenderer_Methods,
    "vtkOpenGLRenderer",
 &PyvtkOpenGLRenderer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkRenderer");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOpenGLRenderer_LightingComplexityEnum_Type);
  PyVTKEnum_Add(&PyvtkOpenGLRenderer_LightingComplexityEnum_Type, "vtkOpenGLRenderer.LightingComplexityEnum");

  o = (PyObject *)&PyvtkOpenGLRenderer_LightingComplexityEnum_Type;
  if (PyDict_SetItemString(d, "LightingComplexityEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkOpenGLRenderer::LightingComplexityEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "NoLighting", vtkOpenGLRenderer::NoLighting },
        { "Headlight", vtkOpenGLRenderer::Headlight },
        { "Directional", vtkOpenGLRenderer::Directional },
        { "Positional", vtkOpenGLRenderer::Positional },
      };

    o = PyvtkOpenGLRenderer_LightingComplexityEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLRenderer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLRenderer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLRenderer", o) != 0)
  {
    Py_DECREF(o);
  }

}

