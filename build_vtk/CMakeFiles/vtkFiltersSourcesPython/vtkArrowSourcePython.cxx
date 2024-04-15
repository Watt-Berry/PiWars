// python wrapper for vtkArrowSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkArrowSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArrowSource(PyObject *dict); }
extern "C" { PyObject *PyvtkArrowSource_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkArrowSource_ArrowOrigins_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkArrowSource.ArrowOrigins", // tp_name
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
PyObject *PyvtkArrowSource_ArrowOrigins_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkArrowSource_ArrowOrigins_Type, static_cast<int>(val));
}


static PyObject *
PyvtkArrowSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrowSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrowSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrowSource *tempr = vtkArrowSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrowSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrowSource::NewInstance());

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
PyvtkArrowSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkArrowSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkArrowSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_SetTipLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTipLength(temp0);
    }
    else
    {
      op->vtkArrowSource::SetTipLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTipLengthMinValue() :
      op->vtkArrowSource::GetTipLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTipLengthMaxValue() :
      op->vtkArrowSource::GetTipLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTipLength() :
      op->vtkArrowSource::GetTipLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_SetTipRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTipRadius(temp0);
    }
    else
    {
      op->vtkArrowSource::SetTipRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTipRadiusMinValue() :
      op->vtkArrowSource::GetTipRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTipRadiusMaxValue() :
      op->vtkArrowSource::GetTipRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTipRadius() :
      op->vtkArrowSource::GetTipRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_SetTipResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTipResolution(temp0);
    }
    else
    {
      op->vtkArrowSource::SetTipResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTipResolutionMinValue() :
      op->vtkArrowSource::GetTipResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTipResolutionMaxValue() :
      op->vtkArrowSource::GetTipResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTipResolution() :
      op->vtkArrowSource::GetTipResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_SetShaftRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShaftRadius(temp0);
    }
    else
    {
      op->vtkArrowSource::SetShaftRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShaftRadiusMinValue() :
      op->vtkArrowSource::GetShaftRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShaftRadiusMaxValue() :
      op->vtkArrowSource::GetShaftRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShaftRadius() :
      op->vtkArrowSource::GetShaftRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_SetShaftResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShaftResolution(temp0);
    }
    else
    {
      op->vtkArrowSource::SetShaftResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShaftResolutionMinValue() :
      op->vtkArrowSource::GetShaftResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShaftResolutionMaxValue() :
      op->vtkArrowSource::GetShaftResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShaftResolution() :
      op->vtkArrowSource::GetShaftResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_InvertOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvertOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvertOn();
    }
    else
    {
      op->vtkArrowSource::InvertOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_InvertOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvertOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvertOff();
    }
    else
    {
      op->vtkArrowSource::InvertOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_SetInvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInvert(temp0);
    }
    else
    {
      op->vtkArrowSource::SetInvert(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetInvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInvert() :
      op->vtkArrowSource::GetInvert());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_SetArrowOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  typedef vtkArrowSource::ArrowOrigins temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkArrowSource.ArrowOrigins"))
  {
    if (ap.IsBound())
    {
      op->SetArrowOrigin(temp0);
    }
    else
    {
      op->vtkArrowSource::SetArrowOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetArrowOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkArrowSource::ArrowOrigins tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetArrowOrigin() :
      op->vtkArrowSource::GetArrowOrigin());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkArrowSource_ArrowOrigins_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_SetArrowOriginToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowOriginToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetArrowOriginToDefault();
    }
    else
    {
      op->vtkArrowSource::SetArrowOriginToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_SetArrowOriginToCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrowOriginToCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetArrowOriginToCenter();
    }
    else
    {
      op->vtkArrowSource::SetArrowOriginToCenter();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetArrowOriginAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrowOriginAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetArrowOriginAsString() :
      op->vtkArrowSource::GetArrowOriginAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrowSource_Methods[] = {
  {"IsTypeOf", PyvtkArrowSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrowSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrowSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkArrowSource\nC++: static vtkArrowSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrowSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkArrowSource\nC++: vtkArrowSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkArrowSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkArrowSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTipLength", PyvtkArrowSource_SetTipLength, METH_VARARGS,
   "SetTipLength(self, _arg:float) -> None\nC++: virtual void SetTipLength(double _arg)\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {"GetTipLengthMinValue", PyvtkArrowSource_GetTipLengthMinValue, METH_VARARGS,
   "GetTipLengthMinValue(self) -> float\nC++: virtual double GetTipLengthMinValue()\n\n"},
  {"GetTipLengthMaxValue", PyvtkArrowSource_GetTipLengthMaxValue, METH_VARARGS,
   "GetTipLengthMaxValue(self) -> float\nC++: virtual double GetTipLengthMaxValue()\n\n"},
  {"GetTipLength", PyvtkArrowSource_GetTipLength, METH_VARARGS,
   "GetTipLength(self) -> float\nC++: virtual double GetTipLength()\n\n"},
  {"SetTipRadius", PyvtkArrowSource_SetTipRadius, METH_VARARGS,
   "SetTipRadius(self, _arg:float) -> None\nC++: virtual void SetTipRadius(double _arg)\n\n"},
  {"GetTipRadiusMinValue", PyvtkArrowSource_GetTipRadiusMinValue, METH_VARARGS,
   "GetTipRadiusMinValue(self) -> float\nC++: virtual double GetTipRadiusMinValue()\n\n"},
  {"GetTipRadiusMaxValue", PyvtkArrowSource_GetTipRadiusMaxValue, METH_VARARGS,
   "GetTipRadiusMaxValue(self) -> float\nC++: virtual double GetTipRadiusMaxValue()\n\n"},
  {"GetTipRadius", PyvtkArrowSource_GetTipRadius, METH_VARARGS,
   "GetTipRadius(self) -> float\nC++: virtual double GetTipRadius()\n\n"},
  {"SetTipResolution", PyvtkArrowSource_SetTipResolution, METH_VARARGS,
   "SetTipResolution(self, _arg:int) -> None\nC++: virtual void SetTipResolution(int _arg)\n\nSet the resolution of the tip.  The tip behaves the same as a\ncone. Resolution 1 gives a single triangle, 2 gives two crossed\ntriangles.\n"},
  {"GetTipResolutionMinValue", PyvtkArrowSource_GetTipResolutionMinValue, METH_VARARGS,
   "GetTipResolutionMinValue(self) -> int\nC++: virtual int GetTipResolutionMinValue()\n\n"},
  {"GetTipResolutionMaxValue", PyvtkArrowSource_GetTipResolutionMaxValue, METH_VARARGS,
   "GetTipResolutionMaxValue(self) -> int\nC++: virtual int GetTipResolutionMaxValue()\n\n"},
  {"GetTipResolution", PyvtkArrowSource_GetTipResolution, METH_VARARGS,
   "GetTipResolution(self) -> int\nC++: virtual int GetTipResolution()\n\n"},
  {"SetShaftRadius", PyvtkArrowSource_SetShaftRadius, METH_VARARGS,
   "SetShaftRadius(self, _arg:float) -> None\nC++: virtual void SetShaftRadius(double _arg)\n\nSet the radius of the shaft.  Defaults to 0.03.\n"},
  {"GetShaftRadiusMinValue", PyvtkArrowSource_GetShaftRadiusMinValue, METH_VARARGS,
   "GetShaftRadiusMinValue(self) -> float\nC++: virtual double GetShaftRadiusMinValue()\n\n"},
  {"GetShaftRadiusMaxValue", PyvtkArrowSource_GetShaftRadiusMaxValue, METH_VARARGS,
   "GetShaftRadiusMaxValue(self) -> float\nC++: virtual double GetShaftRadiusMaxValue()\n\n"},
  {"GetShaftRadius", PyvtkArrowSource_GetShaftRadius, METH_VARARGS,
   "GetShaftRadius(self) -> float\nC++: virtual double GetShaftRadius()\n\n"},
  {"SetShaftResolution", PyvtkArrowSource_SetShaftResolution, METH_VARARGS,
   "SetShaftResolution(self, _arg:int) -> None\nC++: virtual void SetShaftResolution(int _arg)\n\nSet the resolution of the shaft. Minimum is 3 for a triangular\nshaft.\n"},
  {"GetShaftResolutionMinValue", PyvtkArrowSource_GetShaftResolutionMinValue, METH_VARARGS,
   "GetShaftResolutionMinValue(self) -> int\nC++: virtual int GetShaftResolutionMinValue()\n\n"},
  {"GetShaftResolutionMaxValue", PyvtkArrowSource_GetShaftResolutionMaxValue, METH_VARARGS,
   "GetShaftResolutionMaxValue(self) -> int\nC++: virtual int GetShaftResolutionMaxValue()\n\n"},
  {"GetShaftResolution", PyvtkArrowSource_GetShaftResolution, METH_VARARGS,
   "GetShaftResolution(self) -> int\nC++: virtual int GetShaftResolution()\n\n"},
  {"InvertOn", PyvtkArrowSource_InvertOn, METH_VARARGS,
   "InvertOn(self) -> None\nC++: virtual void InvertOn()\n\nInverts the arrow direction. When set to true, base is at (1, 0,\n0) while the tip is at (0, 0, 0). The default is false, i.e. base\nat (0, 0, 0) and the tip at (1, 0, 0).\n"},
  {"InvertOff", PyvtkArrowSource_InvertOff, METH_VARARGS,
   "InvertOff(self) -> None\nC++: virtual void InvertOff()\n\n"},
  {"SetInvert", PyvtkArrowSource_SetInvert, METH_VARARGS,
   "SetInvert(self, _arg:bool) -> None\nC++: virtual void SetInvert(bool _arg)\n\n"},
  {"GetInvert", PyvtkArrowSource_GetInvert, METH_VARARGS,
   "GetInvert(self) -> bool\nC++: virtual bool GetInvert()\n\n"},
  {"SetArrowOrigin", PyvtkArrowSource_SetArrowOrigin, METH_VARARGS,
   "SetArrowOrigin(self, _arg:ArrowOrigins) -> None\nC++: virtual void SetArrowOrigin(ArrowOrigins _arg)\n\nSets and Gets the location used for orienting and scaling the\narrow. Default is set to Default.\n"},
  {"GetArrowOrigin", PyvtkArrowSource_GetArrowOrigin, METH_VARARGS,
   "GetArrowOrigin(self) -> ArrowOrigins\nC++: virtual ArrowOrigins GetArrowOrigin()\n\n"},
  {"SetArrowOriginToDefault", PyvtkArrowSource_SetArrowOriginToDefault, METH_VARARGS,
   "SetArrowOriginToDefault(self) -> None\nC++: void SetArrowOriginToDefault()\n\n"},
  {"SetArrowOriginToCenter", PyvtkArrowSource_SetArrowOriginToCenter, METH_VARARGS,
   "SetArrowOriginToCenter(self) -> None\nC++: void SetArrowOriginToCenter()\n\n"},
  {"GetArrowOriginAsString", PyvtkArrowSource_GetArrowOriginAsString, METH_VARARGS,
   "GetArrowOriginAsString(self) -> str\nC++: std::string GetArrowOriginAsString()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkArrowSource_Doc =
  "vtkArrowSource - Appends a cylinder to a cone to form an arrow.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkArrowSource was intended to be used as the source for a glyph. The\n"
  "shaft base is always at (0,0,0). The arrow tip is always at (1,0,0).\n"
  "If \"Invert\" is true, then the ends are flipped i.e. tip is at (0,0,0)\n"
  "while base is at (1, 0, 0). The resolution of the cone and shaft can\n"
  "be set and default to 6. The radius of the cone and shaft can be set\n"
  "and default to 0.03 and 0.1. The length of the tip can also be set,\n"
  "and defaults to 0.35.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkArrowSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkArrowSource", // tp_name
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
  PyvtkArrowSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrowSource_StaticNew()
{
  return vtkArrowSource::New();
}

PyObject *PyvtkArrowSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkArrowSource_Type, PyvtkArrowSource_Methods,
    "vtkArrowSource",
 &PyvtkArrowSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkArrowSource_ArrowOrigins_Type);
  // members of vtkArrowSource::ArrowOrigins
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkArrowSource_ArrowOrigins_Type.tp_dict = enumdict;

    typedef vtkArrowSource::ArrowOrigins cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[2] = {
      { "Default", cxx_enum_type::Default },
      { "Center", cxx_enum_type::Center },
    };

    for (int c = 0; c < 2; c++)
    {
      enumval = PyvtkArrowSource_ArrowOrigins_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkArrowSource_ArrowOrigins_Type, "vtkArrowSource.ArrowOrigins");

  o = (PyObject *)&PyvtkArrowSource_ArrowOrigins_Type;
  if (PyDict_SetItemString(d, "ArrowOrigins", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArrowSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrowSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkArrowSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

