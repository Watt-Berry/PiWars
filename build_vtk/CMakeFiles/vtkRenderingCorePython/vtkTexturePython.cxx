// python wrapper for vtkTexture
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTexture.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTexture(PyObject *dict); }
extern "C" { PyObject *PyvtkTexture_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTexture_VTKTextureBlendingMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkTexture.VTKTextureBlendingMode", // tp_name
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
PyObject *PyvtkTexture_VTKTextureBlendingMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkTexture_VTKTextureBlendingMode_Type, static_cast<int>(val));
}


static PyObject *
PyvtkTexture_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTexture::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTexture::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTexture *tempr = vtkTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTexture *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTexture::NewInstance());

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
PyvtkTexture_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTexture::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTexture::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0);
    }
    else
    {
      op->vtkTexture::Render(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_PostRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->PostRender(temp0);
    }
    else
    {
      op->vtkTexture::PostRender(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

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
      op->vtkTexture::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_Load(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->Load(temp0);
    }
    else
    {
      op->vtkTexture::Load(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolate() :
      op->vtkTexture::GetInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolate(temp0);
    }
    else
    {
      op->vtkTexture::SetInterpolate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_InterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOn();
    }
    else
    {
      op->vtkTexture::InterpolateOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_InterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOff();
    }
    else
    {
      op->vtkTexture::InterpolateOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetMipmap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMipmap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMipmap() :
      op->vtkTexture::GetMipmap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetMipmap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMipmap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMipmap(temp0);
    }
    else
    {
      op->vtkTexture::SetMipmap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_MipmapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MipmapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MipmapOn();
    }
    else
    {
      op->vtkTexture::MipmapOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_MipmapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MipmapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MipmapOff();
    }
    else
    {
      op->vtkTexture::MipmapOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetMaximumAnisotropicFiltering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumAnisotropicFiltering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumAnisotropicFiltering(temp0);
    }
    else
    {
      op->vtkTexture::SetMaximumAnisotropicFiltering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetMaximumAnisotropicFiltering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumAnisotropicFiltering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumAnisotropicFiltering() :
      op->vtkTexture::GetMaximumAnisotropicFiltering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQuality(temp0);
    }
    else
    {
      op->vtkTexture::SetQuality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQuality() :
      op->vtkTexture::GetQuality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetQualityToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityToDefault();
    }
    else
    {
      op->vtkTexture::SetQualityToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetQualityTo16Bit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityTo16Bit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityTo16Bit();
    }
    else
    {
      op->vtkTexture::SetQualityTo16Bit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetQualityTo32Bit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityTo32Bit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityTo32Bit();
    }
    else
    {
      op->vtkTexture::SetQualityTo32Bit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorMode(temp0);
    }
    else
    {
      op->vtkTexture::SetColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkTexture::GetColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetColorModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToDefault();
    }
    else
    {
      op->vtkTexture::SetColorModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetColorModeToMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToMapScalars();
    }
    else
    {
      op->vtkTexture::SetColorModeToMapScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetColorModeToDirectScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDirectScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToDirectScalars();
    }
    else
    {
      op->vtkTexture::SetColorModeToDirectScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkTexture::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkTexture::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkTexture::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetMappedScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMappedScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetMappedScalars() :
      op->vtkTexture::GetMappedScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_MapScalarsToColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsToColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->MapScalarsToColors(temp0) :
      op->vtkTexture::MapScalarsToColors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkTexture::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkTexture::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetBlendingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlendingMode() :
      op->vtkTexture::GetBlendingMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetBlendingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlendingMode(temp0);
    }
    else
    {
      op->vtkTexture::SetBlendingMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetPremultipliedAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPremultipliedAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPremultipliedAlpha() :
      op->vtkTexture::GetPremultipliedAlpha());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetPremultipliedAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPremultipliedAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPremultipliedAlpha(temp0);
    }
    else
    {
      op->vtkTexture::SetPremultipliedAlpha(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_PremultipliedAlphaOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PremultipliedAlphaOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PremultipliedAlphaOn();
    }
    else
    {
      op->vtkTexture::PremultipliedAlphaOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_PremultipliedAlphaOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PremultipliedAlphaOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PremultipliedAlphaOff();
    }
    else
    {
      op->vtkTexture::PremultipliedAlphaOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetRestrictPowerOf2ImageSmaller(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestrictPowerOf2ImageSmaller");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRestrictPowerOf2ImageSmaller() :
      op->vtkTexture::GetRestrictPowerOf2ImageSmaller());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetRestrictPowerOf2ImageSmaller(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestrictPowerOf2ImageSmaller");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRestrictPowerOf2ImageSmaller(temp0);
    }
    else
    {
      op->vtkTexture::SetRestrictPowerOf2ImageSmaller(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_RestrictPowerOf2ImageSmallerOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestrictPowerOf2ImageSmallerOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestrictPowerOf2ImageSmallerOn();
    }
    else
    {
      op->vtkTexture::RestrictPowerOf2ImageSmallerOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_RestrictPowerOf2ImageSmallerOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestrictPowerOf2ImageSmallerOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestrictPowerOf2ImageSmallerOff();
    }
    else
    {
      op->vtkTexture::RestrictPowerOf2ImageSmallerOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_IsTranslucent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTranslucent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsTranslucent() :
      op->vtkTexture::IsTranslucent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetTextureUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureUnit() :
      op->vtkTexture::GetTextureUnit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetCubeMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCubeMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCubeMap() :
      op->vtkTexture::GetCubeMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_CubeMapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CubeMapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CubeMapOn();
    }
    else
    {
      op->vtkTexture::CubeMapOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_CubeMapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CubeMapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CubeMapOff();
    }
    else
    {
      op->vtkTexture::CubeMapOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetCubeMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCubeMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCubeMap(temp0);
    }
    else
    {
      op->vtkTexture::SetCubeMap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetUseSRGBColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSRGBColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseSRGBColorSpace() :
      op->vtkTexture::GetUseSRGBColorSpace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetUseSRGBColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseSRGBColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseSRGBColorSpace(temp0);
    }
    else
    {
      op->vtkTexture::SetUseSRGBColorSpace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_UseSRGBColorSpaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSRGBColorSpaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSRGBColorSpaceOn();
    }
    else
    {
      op->vtkTexture::UseSRGBColorSpaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_UseSRGBColorSpaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSRGBColorSpaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSRGBColorSpaceOff();
    }
    else
    {
      op->vtkTexture::UseSRGBColorSpaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetBorderColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetBorderColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkTexture::SetBorderColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTexture_SetBorderColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  const size_t size0 = 4;
  float temp0[4];
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
      op->vtkTexture::SetBorderColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTexture_SetBorderColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkTexture_SetBorderColor_s1(self, args);
    case 1:
      return PyvtkTexture_SetBorderColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBorderColor");
  return nullptr;
}


static PyObject *
PyvtkTexture_GetBorderColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetBorderColor() :
      op->vtkTexture::GetBorderColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWrap() :
      op->vtkTexture::GetWrap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWrap(temp0);
    }
    else
    {
      op->vtkTexture::SetWrap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetWrapMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrapMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWrapMinValue() :
      op->vtkTexture::GetWrapMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetWrapMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrapMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWrapMaxValue() :
      op->vtkTexture::GetWrapMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetRepeat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepeat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepeat(temp0);
    }
    else
    {
      op->vtkTexture::SetRepeat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetRepeat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepeat() :
      op->vtkTexture::GetRepeat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_RepeatOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepeatOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RepeatOn();
    }
    else
    {
      op->vtkTexture::RepeatOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_RepeatOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepeatOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RepeatOff();
    }
    else
    {
      op->vtkTexture::RepeatOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_SetEdgeClamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeClamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeClamp(temp0);
    }
    else
    {
      op->vtkTexture::SetEdgeClamp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_GetEdgeClamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeClamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdgeClamp() :
      op->vtkTexture::GetEdgeClamp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_EdgeClampOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeClampOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeClampOn();
    }
    else
    {
      op->vtkTexture::EdgeClampOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexture_EdgeClampOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeClampOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexture *op = static_cast<vtkTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeClampOff();
    }
    else
    {
      op->vtkTexture::EdgeClampOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTexture_Methods[] = {
  {"IsTypeOf", PyvtkTexture_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTexture_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTexture_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTexture\nC++: static vtkTexture *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTexture_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTexture\nC++: vtkTexture *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTexture_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTexture_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Render", PyvtkTexture_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer) -> None\nC++: virtual void Render(vtkRenderer *ren)\n\nRenders a texture map. It first checks the object's modified time\nto make sure the texture maps Input is valid, then it invokes the\nLoad() method.\n"},
  {"PostRender", PyvtkTexture_PostRender, METH_VARARGS,
   "PostRender(self, __a:vtkRenderer) -> None\nC++: virtual void PostRender(vtkRenderer *)\n\nCleans up after the texture rendering to restore the state of the\ngraphics context.\n"},
  {"ReleaseGraphicsResources", PyvtkTexture_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\ntexture. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"Load", PyvtkTexture_Load, METH_VARARGS,
   "Load(self, __a:vtkRenderer) -> None\nC++: virtual void Load(vtkRenderer *)\n\nAbstract interface to renderer. Each concrete subclass of\nvtkTexture will load its data into graphics system in response to\nthis method invocation.\n"},
  {"GetInterpolate", PyvtkTexture_GetInterpolate, METH_VARARGS,
   "GetInterpolate(self) -> int\nC++: virtual vtkTypeBool GetInterpolate()\n\nTurn on/off linear interpolation of the texture map when\nrendering.\n"},
  {"SetInterpolate", PyvtkTexture_SetInterpolate, METH_VARARGS,
   "SetInterpolate(self, _arg:int) -> None\nC++: virtual void SetInterpolate(vtkTypeBool _arg)\n\n"},
  {"InterpolateOn", PyvtkTexture_InterpolateOn, METH_VARARGS,
   "InterpolateOn(self) -> None\nC++: virtual void InterpolateOn()\n\n"},
  {"InterpolateOff", PyvtkTexture_InterpolateOff, METH_VARARGS,
   "InterpolateOff(self) -> None\nC++: virtual void InterpolateOff()\n\n"},
  {"GetMipmap", PyvtkTexture_GetMipmap, METH_VARARGS,
   "GetMipmap(self) -> bool\nC++: virtual bool GetMipmap()\n\nTurn on/off use of mipmaps when rendering.\n"},
  {"SetMipmap", PyvtkTexture_SetMipmap, METH_VARARGS,
   "SetMipmap(self, _arg:bool) -> None\nC++: virtual void SetMipmap(bool _arg)\n\n"},
  {"MipmapOn", PyvtkTexture_MipmapOn, METH_VARARGS,
   "MipmapOn(self) -> None\nC++: virtual void MipmapOn()\n\n"},
  {"MipmapOff", PyvtkTexture_MipmapOff, METH_VARARGS,
   "MipmapOff(self) -> None\nC++: virtual void MipmapOff()\n\n"},
  {"SetMaximumAnisotropicFiltering", PyvtkTexture_SetMaximumAnisotropicFiltering, METH_VARARGS,
   "SetMaximumAnisotropicFiltering(self, _arg:float) -> None\nC++: virtual void SetMaximumAnisotropicFiltering(float _arg)\n\nSet/Get the maximum anisotropic filtering to use. 1.0 means use\nno anisotropic filtering. The default value is 4.0 and a high\nvalue would be 16. This setting is only applied when mipmaps are\nused. This might not be supported on all machines.\n"},
  {"GetMaximumAnisotropicFiltering", PyvtkTexture_GetMaximumAnisotropicFiltering, METH_VARARGS,
   "GetMaximumAnisotropicFiltering(self) -> float\nC++: virtual float GetMaximumAnisotropicFiltering()\n\n"},
  {"SetQuality", PyvtkTexture_SetQuality, METH_VARARGS,
   "SetQuality(self, _arg:int) -> None\nC++: virtual void SetQuality(int _arg)\n\nForce texture quality to 16-bit or 32-bit. This might not be\nsupported on all machines.\n"},
  {"GetQuality", PyvtkTexture_GetQuality, METH_VARARGS,
   "GetQuality(self) -> int\nC++: virtual int GetQuality()\n\n"},
  {"SetQualityToDefault", PyvtkTexture_SetQualityToDefault, METH_VARARGS,
   "SetQualityToDefault(self) -> None\nC++: void SetQualityToDefault()\n\n"},
  {"SetQualityTo16Bit", PyvtkTexture_SetQualityTo16Bit, METH_VARARGS,
   "SetQualityTo16Bit(self) -> None\nC++: void SetQualityTo16Bit()\n\n"},
  {"SetQualityTo32Bit", PyvtkTexture_SetQualityTo32Bit, METH_VARARGS,
   "SetQualityTo32Bit(self) -> None\nC++: void SetQualityTo32Bit()\n\n"},
  {"SetColorMode", PyvtkTexture_SetColorMode, METH_VARARGS,
   "SetColorMode(self, _arg:int) -> None\nC++: virtual void SetColorMode(int _arg)\n\nDefault: ColorModeToDefault. unsigned char scalars are treated as\ncolors, and NOT mapped through the lookup table (set with\nSetLookupTable), while other kinds of scalars are.\nColorModeToDirectScalar extends ColorModeToDefault such that all\ninteger types are treated as colors with values in the range\n0-255 and floating types are treated as colors with values in the\nrange 0.0-1.0. Setting ColorModeToMapScalars means that all\nscalar data will be mapped through the lookup table.\n"},
  {"GetColorMode", PyvtkTexture_GetColorMode, METH_VARARGS,
   "GetColorMode(self) -> int\nC++: virtual int GetColorMode()\n\n"},
  {"SetColorModeToDefault", PyvtkTexture_SetColorModeToDefault, METH_VARARGS,
   "SetColorModeToDefault(self) -> None\nC++: void SetColorModeToDefault()\n\n"},
  {"SetColorModeToMapScalars", PyvtkTexture_SetColorModeToMapScalars, METH_VARARGS,
   "SetColorModeToMapScalars(self) -> None\nC++: void SetColorModeToMapScalars()\n\n"},
  {"SetColorModeToDirectScalars", PyvtkTexture_SetColorModeToDirectScalars, METH_VARARGS,
   "SetColorModeToDirectScalars(self) -> None\nC++: void SetColorModeToDirectScalars()\n\n"},
  {"GetInput", PyvtkTexture_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkImageData\nC++: vtkImageData *GetInput()\n\nGet the input as a vtkImageData object.  This method is for\nbackwards compatibility.\n"},
  {"SetLookupTable", PyvtkTexture_SetLookupTable, METH_VARARGS,
   "SetLookupTable(self, __a:vtkScalarsToColors) -> None\nC++: void SetLookupTable(vtkScalarsToColors *)\n\nSpecify the lookup table to convert scalars if necessary\n"},
  {"GetLookupTable", PyvtkTexture_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetLookupTable()\n\n"},
  {"GetMappedScalars", PyvtkTexture_GetMappedScalars, METH_VARARGS,
   "GetMappedScalars(self) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *GetMappedScalars()\n\nGet Mapped Scalars\n"},
  {"MapScalarsToColors", PyvtkTexture_MapScalarsToColors, METH_VARARGS,
   "MapScalarsToColors(self, scalars:vtkDataArray) -> Pointer\nC++: unsigned char *MapScalarsToColors(vtkDataArray *scalars)\n\nMap scalar values into color scalars.\n"},
  {"SetTransform", PyvtkTexture_SetTransform, METH_VARARGS,
   "SetTransform(self, transform:vtkTransform) -> None\nC++: void SetTransform(vtkTransform *transform)\n\nSet a transform on the texture which allows one to scale, rotate\nand translate the texture.\n"},
  {"GetTransform", PyvtkTexture_GetTransform, METH_VARARGS,
   "GetTransform(self) -> vtkTransform\nC++: virtual vtkTransform *GetTransform()\n\n"},
  {"GetBlendingMode", PyvtkTexture_GetBlendingMode, METH_VARARGS,
   "GetBlendingMode(self) -> int\nC++: virtual int GetBlendingMode()\n\nUsed to specify how the texture will blend its RGB and Alpha\nvalues with other textures and the fragment the texture is\nrendered upon.\n"},
  {"SetBlendingMode", PyvtkTexture_SetBlendingMode, METH_VARARGS,
   "SetBlendingMode(self, _arg:int) -> None\nC++: virtual void SetBlendingMode(int _arg)\n\n"},
  {"GetPremultipliedAlpha", PyvtkTexture_GetPremultipliedAlpha, METH_VARARGS,
   "GetPremultipliedAlpha(self) -> bool\nC++: virtual bool GetPremultipliedAlpha()\n\nWhether the texture colors are premultiplied by alpha. Initial\nvalue is false.\n"},
  {"SetPremultipliedAlpha", PyvtkTexture_SetPremultipliedAlpha, METH_VARARGS,
   "SetPremultipliedAlpha(self, _arg:bool) -> None\nC++: virtual void SetPremultipliedAlpha(bool _arg)\n\n"},
  {"PremultipliedAlphaOn", PyvtkTexture_PremultipliedAlphaOn, METH_VARARGS,
   "PremultipliedAlphaOn(self) -> None\nC++: virtual void PremultipliedAlphaOn()\n\n"},
  {"PremultipliedAlphaOff", PyvtkTexture_PremultipliedAlphaOff, METH_VARARGS,
   "PremultipliedAlphaOff(self) -> None\nC++: virtual void PremultipliedAlphaOff()\n\n"},
  {"GetRestrictPowerOf2ImageSmaller", PyvtkTexture_GetRestrictPowerOf2ImageSmaller, METH_VARARGS,
   "GetRestrictPowerOf2ImageSmaller(self) -> int\nC++: virtual vtkTypeBool GetRestrictPowerOf2ImageSmaller()\n\nWhen the texture is forced to be a power of 2, the default\nbehavior is for the \"new\" image's dimensions to be greater than\nor equal to with respects to the original.  Setting\nRestrictPowerOf2ImageSmaller to be 1 (or ON) with force the new\nimage's dimensions to be less than or equal to with respects to\nthe original.\n"},
  {"SetRestrictPowerOf2ImageSmaller", PyvtkTexture_SetRestrictPowerOf2ImageSmaller, METH_VARARGS,
   "SetRestrictPowerOf2ImageSmaller(self, _arg:int) -> None\nC++: virtual void SetRestrictPowerOf2ImageSmaller(\n    vtkTypeBool _arg)\n\n"},
  {"RestrictPowerOf2ImageSmallerOn", PyvtkTexture_RestrictPowerOf2ImageSmallerOn, METH_VARARGS,
   "RestrictPowerOf2ImageSmallerOn(self) -> None\nC++: virtual void RestrictPowerOf2ImageSmallerOn()\n\n"},
  {"RestrictPowerOf2ImageSmallerOff", PyvtkTexture_RestrictPowerOf2ImageSmallerOff, METH_VARARGS,
   "RestrictPowerOf2ImageSmallerOff(self) -> None\nC++: virtual void RestrictPowerOf2ImageSmallerOff()\n\n"},
  {"IsTranslucent", PyvtkTexture_IsTranslucent, METH_VARARGS,
   "IsTranslucent(self) -> int\nC++: virtual int IsTranslucent()\n\nIs this Texture Translucent? returns false (0) if the texture is\neither fully opaque or has only fully transparent pixels and\nfully opaque pixels and the Interpolate flag is turn off.\n"},
  {"GetTextureUnit", PyvtkTexture_GetTextureUnit, METH_VARARGS,
   "GetTextureUnit(self) -> int\nC++: virtual int GetTextureUnit()\n\nReturn the texture unit used for this texture\n"},
  {"GetCubeMap", PyvtkTexture_GetCubeMap, METH_VARARGS,
   "GetCubeMap(self) -> bool\nC++: virtual bool GetCubeMap()\n\nIs this texture a cube map, if so it needs 6 inputs one for each\nside of the cube. You must set this before connecting the inputs.\nThe inputs must all have the same size, data type, and depth\n"},
  {"CubeMapOn", PyvtkTexture_CubeMapOn, METH_VARARGS,
   "CubeMapOn(self) -> None\nC++: virtual void CubeMapOn()\n\n"},
  {"CubeMapOff", PyvtkTexture_CubeMapOff, METH_VARARGS,
   "CubeMapOff(self) -> None\nC++: virtual void CubeMapOff()\n\n"},
  {"SetCubeMap", PyvtkTexture_SetCubeMap, METH_VARARGS,
   "SetCubeMap(self, val:bool) -> None\nC++: void SetCubeMap(bool val)\n\n"},
  {"GetUseSRGBColorSpace", PyvtkTexture_GetUseSRGBColorSpace, METH_VARARGS,
   "GetUseSRGBColorSpace(self) -> bool\nC++: virtual bool GetUseSRGBColorSpace()\n\nIs this texture using the sRGB color space. If you are using a\nsRGB framebuffer or window then you probably also want to be\nusing sRGB color textures for proper handling of gamma and\nassociated color mixing.\n"},
  {"SetUseSRGBColorSpace", PyvtkTexture_SetUseSRGBColorSpace, METH_VARARGS,
   "SetUseSRGBColorSpace(self, _arg:bool) -> None\nC++: virtual void SetUseSRGBColorSpace(bool _arg)\n\n"},
  {"UseSRGBColorSpaceOn", PyvtkTexture_UseSRGBColorSpaceOn, METH_VARARGS,
   "UseSRGBColorSpaceOn(self) -> None\nC++: virtual void UseSRGBColorSpaceOn()\n\n"},
  {"UseSRGBColorSpaceOff", PyvtkTexture_UseSRGBColorSpaceOff, METH_VARARGS,
   "UseSRGBColorSpaceOff(self) -> None\nC++: virtual void UseSRGBColorSpaceOff()\n\n"},
  {"SetBorderColor", PyvtkTexture_SetBorderColor, METH_VARARGS,
   "SetBorderColor(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float) -> None\nC++: virtual void SetBorderColor(float _arg1, float _arg2,\n    float _arg3, float _arg4)\nSetBorderColor(self, _arg:(float, float, float, float)) -> None\nC++: virtual void SetBorderColor(const float _arg[4])\n\nBorder Color (RGBA). The values can be any valid float value, if\nthe gpu supports it. Initial value is (0.0f, 0.0f, 0.0f, 0.0f),\nas in the OpenGL spec.\n\note This property is ignored for OpenGL ES <= 3.2\n"},
  {"GetBorderColor", PyvtkTexture_GetBorderColor, METH_VARARGS,
   "GetBorderColor(self) -> (float, float, float, float)\nC++: virtual float *GetBorderColor()\n\n"},
  {"GetWrap", PyvtkTexture_GetWrap, METH_VARARGS,
   "GetWrap(self) -> int\nC++: virtual int GetWrap()\n\nWrap mode for the texture coordinates Valid values are:\n- ClampToEdge\n- Repeat\n- MirroredRepeat\n- ClampToBorder Initial value is Repeat (as in OpenGL spec)\n\note ClampToBorder is not supported with OpenGL ES <= 3.2. Wrap\nwill default to ClampToEdge if it is set to ClampToBorder in this\ncase.\n"},
  {"SetWrap", PyvtkTexture_SetWrap, METH_VARARGS,
   "SetWrap(self, _arg:int) -> None\nC++: virtual void SetWrap(int _arg)\n\n"},
  {"GetWrapMinValue", PyvtkTexture_GetWrapMinValue, METH_VARARGS,
   "GetWrapMinValue(self) -> int\nC++: virtual int GetWrapMinValue()\n\n"},
  {"GetWrapMaxValue", PyvtkTexture_GetWrapMaxValue, METH_VARARGS,
   "GetWrapMaxValue(self) -> int\nC++: virtual int GetWrapMaxValue()\n\n"},
  {"SetRepeat", PyvtkTexture_SetRepeat, METH_VARARGS,
   "SetRepeat(self, r:int) -> None\nC++: virtual void SetRepeat(vtkTypeBool r)\n\nConvenience functions to maintain backwards compatibility. For\nnew code, use the SetWrap API.\n"},
  {"GetRepeat", PyvtkTexture_GetRepeat, METH_VARARGS,
   "GetRepeat(self) -> int\nC++: virtual vtkTypeBool GetRepeat()\n\n"},
  {"RepeatOn", PyvtkTexture_RepeatOn, METH_VARARGS,
   "RepeatOn(self) -> None\nC++: virtual void RepeatOn()\n\n"},
  {"RepeatOff", PyvtkTexture_RepeatOff, METH_VARARGS,
   "RepeatOff(self) -> None\nC++: virtual void RepeatOff()\n\n"},
  {"SetEdgeClamp", PyvtkTexture_SetEdgeClamp, METH_VARARGS,
   "SetEdgeClamp(self, __a:int) -> None\nC++: virtual void SetEdgeClamp(vtkTypeBool)\n\n"},
  {"GetEdgeClamp", PyvtkTexture_GetEdgeClamp, METH_VARARGS,
   "GetEdgeClamp(self) -> int\nC++: virtual vtkTypeBool GetEdgeClamp()\n\n"},
  {"EdgeClampOn", PyvtkTexture_EdgeClampOn, METH_VARARGS,
   "EdgeClampOn(self) -> None\nC++: virtual void EdgeClampOn()\n\n"},
  {"EdgeClampOff", PyvtkTexture_EdgeClampOff, METH_VARARGS,
   "EdgeClampOff(self) -> None\nC++: virtual void EdgeClampOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTexture_Doc =
  "vtkTexture - handles properties associated with a texture map\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkTexture is an image algorithm that handles loading and binding of\n"
  "texture maps. It obtains its data from an input image data dataset\n"
  "type. Thus you can create visualization pipelines to read, process,\n"
  "and construct textures. Note that textures will only work if texture\n"
  "coordinates are also defined, and if the rendering system supports\n"
  "texture.\n\n"
  "Instances of vtkTexture are associated with actors via the actor's\n"
  "SetTexture() method. Actors can share texture maps (this is\n"
  "encouraged to save memory resources.)\n\n"
  "@warning\n"
  "Currently only 2D texture maps are supported, even though the data\n"
  "pipeline supports 1,2, and 3D texture coordinates.\n\n"
  "@warning\n"
  "Some renderers such as old OpenGL require that the texture map\n"
  "dimensions are a power of two in each direction. If a non-power of\n"
  "two texture map is used, it is automatically resampled to a power of\n"
  "two in one or more directions, at the cost of an expensive\n"
  "computation. If the OpenGL implementation is recent enough\n"
  "(OpenGL>=2.0 or extension GL_ARB_texture_non_power_of_two exists)\n"
  "there is no such restriction and no extra computational cost.\n"
  "@sa\n"
  "vtkActor vtkRenderer vtkOpenGLTexture\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTexture_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkTexture", // tp_name
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
  PyvtkTexture_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTexture_StaticNew()
{
  return vtkTexture::New();
}

PyObject *PyvtkTexture_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTexture_Type, PyvtkTexture_Methods,
    "vtkTexture",
 &PyvtkTexture_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkTexture_VTKTextureBlendingMode_Type);
  PyVTKEnum_Add(&PyvtkTexture_VTKTextureBlendingMode_Type, "vtkTexture.VTKTextureBlendingMode");

  o = (PyObject *)&PyvtkTexture_VTKTextureBlendingMode_Type;
  if (PyDict_SetItemString(d, "VTKTextureBlendingMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkTexture::VTKTextureBlendingMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "VTK_TEXTURE_BLENDING_MODE_NONE", vtkTexture::VTK_TEXTURE_BLENDING_MODE_NONE },
        { "VTK_TEXTURE_BLENDING_MODE_REPLACE", vtkTexture::VTK_TEXTURE_BLENDING_MODE_REPLACE },
        { "VTK_TEXTURE_BLENDING_MODE_MODULATE", vtkTexture::VTK_TEXTURE_BLENDING_MODE_MODULATE },
        { "VTK_TEXTURE_BLENDING_MODE_ADD", vtkTexture::VTK_TEXTURE_BLENDING_MODE_ADD },
        { "VTK_TEXTURE_BLENDING_MODE_ADD_SIGNED", vtkTexture::VTK_TEXTURE_BLENDING_MODE_ADD_SIGNED },
        { "VTK_TEXTURE_BLENDING_MODE_INTERPOLATE", vtkTexture::VTK_TEXTURE_BLENDING_MODE_INTERPOLATE },
        { "VTK_TEXTURE_BLENDING_MODE_SUBTRACT", vtkTexture::VTK_TEXTURE_BLENDING_MODE_SUBTRACT },
      };

    o = PyvtkTexture_VTKTextureBlendingMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "ClampToEdge", vtkTexture::ClampToEdge },
        { "Repeat", vtkTexture::Repeat },
        { "MirroredRepeat", vtkTexture::MirroredRepeat },
        { "ClampToBorder", vtkTexture::ClampToBorder },
        { "NumberOfWrapModes", vtkTexture::NumberOfWrapModes },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTexture(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTexture_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTexture", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_TEXTURE_QUALITY_DEFAULT", 0 },
        { "VTK_TEXTURE_QUALITY_16BIT", 16 },
        { "VTK_TEXTURE_QUALITY_32BIT", 32 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

