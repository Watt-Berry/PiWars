// python wrapper for vtkVolumeProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTimeStamp.h"
#include "vtkVolumeProperty.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVolumeProperty(PyObject *dict); }
extern "C" { PyObject *PyvtkVolumeProperty_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVolumeProperty_TransferMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkVolumeProperty.TransferMode", // tp_name
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
PyObject *PyvtkVolumeProperty_TransferMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkVolumeProperty_TransferMode_Type, static_cast<int>(val));
}


static PyObject *
PyvtkVolumeProperty_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVolumeProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVolumeProperty *tempr = vtkVolumeProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeProperty::NewInstance());

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
PyvtkVolumeProperty_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVolumeProperty::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVolumeProperty::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkVolumeProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeProperty"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkVolumeProperty::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkVolumeProperty::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetIndependentComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndependentComponents(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetIndependentComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetIndependentComponentsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentComponentsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndependentComponentsMinValue() :
      op->vtkVolumeProperty::GetIndependentComponentsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetIndependentComponentsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentComponentsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndependentComponentsMaxValue() :
      op->vtkVolumeProperty::GetIndependentComponentsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetIndependentComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndependentComponents() :
      op->vtkVolumeProperty::GetIndependentComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_IndependentComponentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IndependentComponentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IndependentComponentsOn();
    }
    else
    {
      op->vtkVolumeProperty::IndependentComponentsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_IndependentComponentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IndependentComponentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IndependentComponentsOff();
    }
    else
    {
      op->vtkVolumeProperty::IndependentComponentsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationType(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetInterpolationType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetInterpolationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMinValue() :
      op->vtkVolumeProperty::GetInterpolationTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetInterpolationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMaxValue() :
      op->vtkVolumeProperty::GetInterpolationTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationType() :
      op->vtkVolumeProperty::GetInterpolationType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetInterpolationTypeToNearest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToNearest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToNearest();
    }
    else
    {
      op->vtkVolumeProperty::SetInterpolationTypeToNearest();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetInterpolationTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToLinear();
    }
    else
    {
      op->vtkVolumeProperty::SetInterpolationTypeToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetInterpolationTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInterpolationTypeAsString() :
      op->vtkVolumeProperty::GetInterpolationTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetComponentWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetComponentWeight(temp0, temp1);
    }
    else
    {
      op->vtkVolumeProperty::SetComponentWeight(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetComponentWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetComponentWeight(temp0) :
      op->vtkVolumeProperty::GetComponentWeight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkPiecewiseFunction *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1);
    }
    else
    {
      op->vtkVolumeProperty::SetColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkColorTransferFunction *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkColorTransferFunction"))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1);
    }
    else
    {
      op->vtkVolumeProperty::SetColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetColor_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkColorTransferFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkVolumeProperty_SetColor_Methods[] = {
  {"SetColor", PyvtkVolumeProperty_SetColor_s1, METH_VARARGS,
   "@iV *vtkPiecewiseFunction"},
  {"SetColor", PyvtkVolumeProperty_SetColor_s2, METH_VARARGS,
   "@V *vtkPiecewiseFunction"},
  {"SetColor", PyvtkVolumeProperty_SetColor_s3, METH_VARARGS,
   "@iV *vtkColorTransferFunction"},
  {"SetColor", PyvtkVolumeProperty_SetColor_s4, METH_VARARGS,
   "@V *vtkColorTransferFunction"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVolumeProperty_SetColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVolumeProperty_SetColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetColorChannels_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorChannels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorChannels(temp0) :
      op->vtkVolumeProperty::GetColorChannels(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetColorChannels_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorChannels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorChannels() :
      op->vtkVolumeProperty::GetColorChannels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetColorChannels(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetColorChannels_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetColorChannels_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColorChannels");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetGrayTransferFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrayTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetGrayTransferFunction(temp0) :
      op->vtkVolumeProperty::GetGrayTransferFunction(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetGrayTransferFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrayTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetGrayTransferFunction() :
      op->vtkVolumeProperty::GetGrayTransferFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetGrayTransferFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetGrayTransferFunction_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetGrayTransferFunction_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGrayTransferFunction");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetRGBTransferFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColorTransferFunction *tempr = (ap.IsBound() ?
      op->GetRGBTransferFunction(temp0) :
      op->vtkVolumeProperty::GetRGBTransferFunction(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetRGBTransferFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColorTransferFunction *tempr = (ap.IsBound() ?
      op->GetRGBTransferFunction() :
      op->vtkVolumeProperty::GetRGBTransferFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetRGBTransferFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetRGBTransferFunction_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetRGBTransferFunction_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBTransferFunction");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_SetScalarOpacity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkPiecewiseFunction *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetScalarOpacity(temp0, temp1);
    }
    else
    {
      op->vtkVolumeProperty::SetScalarOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetScalarOpacity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetScalarOpacity(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetScalarOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetScalarOpacity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVolumeProperty_SetScalarOpacity_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetScalarOpacity_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarOpacity");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetScalarOpacity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetScalarOpacity(temp0) :
      op->vtkVolumeProperty::GetScalarOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetScalarOpacity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetScalarOpacity() :
      op->vtkVolumeProperty::GetScalarOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetScalarOpacity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetScalarOpacity_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetScalarOpacity_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarOpacity");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_SetScalarOpacityUnitDistance_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacityUnitDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarOpacityUnitDistance(temp0, temp1);
    }
    else
    {
      op->vtkVolumeProperty::SetScalarOpacityUnitDistance(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetScalarOpacityUnitDistance_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacityUnitDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarOpacityUnitDistance(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetScalarOpacityUnitDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetScalarOpacityUnitDistance(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVolumeProperty_SetScalarOpacityUnitDistance_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetScalarOpacityUnitDistance_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarOpacityUnitDistance");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetScalarOpacityUnitDistance_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityUnitDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarOpacityUnitDistance(temp0) :
      op->vtkVolumeProperty::GetScalarOpacityUnitDistance(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetScalarOpacityUnitDistance_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityUnitDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarOpacityUnitDistance() :
      op->vtkVolumeProperty::GetScalarOpacityUnitDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetScalarOpacityUnitDistance(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetScalarOpacityUnitDistance_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetScalarOpacityUnitDistance_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarOpacityUnitDistance");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_SetGradientOpacity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkPiecewiseFunction *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetGradientOpacity(temp0, temp1);
    }
    else
    {
      op->vtkVolumeProperty::SetGradientOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetGradientOpacity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetGradientOpacity(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetGradientOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetGradientOpacity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVolumeProperty_SetGradientOpacity_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetGradientOpacity_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGradientOpacity");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_SetTransferFunction2D_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunction2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetTransferFunction2D(temp0, temp1);
    }
    else
    {
      op->vtkVolumeProperty::SetTransferFunction2D(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetTransferFunction2D_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunction2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetTransferFunction2D(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetTransferFunction2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetTransferFunction2D(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVolumeProperty_SetTransferFunction2D_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetTransferFunction2D_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTransferFunction2D");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetTransferFunction2D_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunction2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetTransferFunction2D(temp0) :
      op->vtkVolumeProperty::GetTransferFunction2D(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetTransferFunction2D_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunction2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetTransferFunction2D() :
      op->vtkVolumeProperty::GetTransferFunction2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetTransferFunction2D(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetTransferFunction2D_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetTransferFunction2D_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTransferFunction2D");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_SetTransferFunctionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunctionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransferFunctionMode(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetTransferFunctionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetTransferFunctionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunctionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTransferFunctionModeMinValue() :
      op->vtkVolumeProperty::GetTransferFunctionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetTransferFunctionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunctionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTransferFunctionModeMaxValue() :
      op->vtkVolumeProperty::GetTransferFunctionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetTransferFunctionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunctionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTransferFunctionMode() :
      op->vtkVolumeProperty::GetTransferFunctionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetTransferFunctionModeTo1D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunctionModeTo1D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTransferFunctionModeTo1D();
    }
    else
    {
      op->vtkVolumeProperty::SetTransferFunctionModeTo1D();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetTransferFunctionModeTo2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunctionModeTo2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTransferFunctionModeTo2D();
    }
    else
    {
      op->vtkVolumeProperty::SetTransferFunctionModeTo2D();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetGradientOpacity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetGradientOpacity(temp0) :
      op->vtkVolumeProperty::GetGradientOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetGradientOpacity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetGradientOpacity() :
      op->vtkVolumeProperty::GetGradientOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetGradientOpacity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetGradientOpacity_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetGradientOpacity_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientOpacity");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_SetDisableGradientOpacity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisableGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDisableGradientOpacity(temp0, temp1);
    }
    else
    {
      op->vtkVolumeProperty::SetDisableGradientOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetDisableGradientOpacity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisableGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisableGradientOpacity(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetDisableGradientOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetDisableGradientOpacity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVolumeProperty_SetDisableGradientOpacity_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetDisableGradientOpacity_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDisableGradientOpacity");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_DisableGradientOpacityOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableGradientOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisableGradientOpacityOn(temp0);
    }
    else
    {
      op->vtkVolumeProperty::DisableGradientOpacityOn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_DisableGradientOpacityOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableGradientOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableGradientOpacityOn();
    }
    else
    {
      op->vtkVolumeProperty::DisableGradientOpacityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_DisableGradientOpacityOn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_DisableGradientOpacityOn_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_DisableGradientOpacityOn_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DisableGradientOpacityOn");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_DisableGradientOpacityOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableGradientOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisableGradientOpacityOff(temp0);
    }
    else
    {
      op->vtkVolumeProperty::DisableGradientOpacityOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_DisableGradientOpacityOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableGradientOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableGradientOpacityOff();
    }
    else
    {
      op->vtkVolumeProperty::DisableGradientOpacityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_DisableGradientOpacityOff(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_DisableGradientOpacityOff_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_DisableGradientOpacityOff_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DisableGradientOpacityOff");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetDisableGradientOpacity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisableGradientOpacity(temp0) :
      op->vtkVolumeProperty::GetDisableGradientOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetDisableGradientOpacity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisableGradientOpacity() :
      op->vtkVolumeProperty::GetDisableGradientOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetDisableGradientOpacity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetDisableGradientOpacity_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetDisableGradientOpacity_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDisableGradientOpacity");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetStoredGradientOpacity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStoredGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetStoredGradientOpacity(temp0) :
      op->vtkVolumeProperty::GetStoredGradientOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetStoredGradientOpacity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStoredGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetStoredGradientOpacity() :
      op->vtkVolumeProperty::GetStoredGradientOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetStoredGradientOpacity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetStoredGradientOpacity_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetStoredGradientOpacity_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetStoredGradientOpacity");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_HasGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->HasGradientOpacity(temp0) :
      op->vtkVolumeProperty::HasGradientOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_HasLabelGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasLabelGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasLabelGradientOpacity() :
      op->vtkVolumeProperty::HasLabelGradientOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetShade_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShade");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetShade(temp0, temp1);
    }
    else
    {
      op->vtkVolumeProperty::SetShade(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetShade_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShade");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShade(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetShade(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetShade(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVolumeProperty_SetShade_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetShade_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetShade");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetShade_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShade");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShade(temp0) :
      op->vtkVolumeProperty::GetShade(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetShade_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShade");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShade() :
      op->vtkVolumeProperty::GetShade());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetShade(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetShade_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetShade_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetShade");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_ShadeOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ShadeOn(temp0);
    }
    else
    {
      op->vtkVolumeProperty::ShadeOn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_ShadeOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShadeOn();
    }
    else
    {
      op->vtkVolumeProperty::ShadeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_ShadeOn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_ShadeOn_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_ShadeOn_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ShadeOn");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_ShadeOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ShadeOff(temp0);
    }
    else
    {
      op->vtkVolumeProperty::ShadeOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_ShadeOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShadeOff();
    }
    else
    {
      op->vtkVolumeProperty::ShadeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_ShadeOff(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_ShadeOff_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_ShadeOff_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ShadeOff");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_SetAmbient_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAmbient(temp0, temp1);
    }
    else
    {
      op->vtkVolumeProperty::SetAmbient(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetAmbient_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAmbient(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetAmbient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetAmbient(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVolumeProperty_SetAmbient_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetAmbient_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAmbient");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetAmbient_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmbient(temp0) :
      op->vtkVolumeProperty::GetAmbient(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetAmbient_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmbient() :
      op->vtkVolumeProperty::GetAmbient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetAmbient(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetAmbient_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetAmbient_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAmbient");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_SetDiffuse_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDiffuse(temp0, temp1);
    }
    else
    {
      op->vtkVolumeProperty::SetDiffuse(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetDiffuse_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiffuse(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetDiffuse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetDiffuse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVolumeProperty_SetDiffuse_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetDiffuse_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDiffuse");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetDiffuse_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffuse(temp0) :
      op->vtkVolumeProperty::GetDiffuse(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetDiffuse_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffuse() :
      op->vtkVolumeProperty::GetDiffuse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetDiffuse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetDiffuse_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetDiffuse_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDiffuse");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_SetSpecular_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSpecular(temp0, temp1);
    }
    else
    {
      op->vtkVolumeProperty::SetSpecular(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetSpecular_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpecular(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetSpecular(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetSpecular(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVolumeProperty_SetSpecular_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetSpecular_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpecular");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetSpecular_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecular(temp0) :
      op->vtkVolumeProperty::GetSpecular(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetSpecular_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecular() :
      op->vtkVolumeProperty::GetSpecular());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetSpecular(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetSpecular_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetSpecular_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSpecular");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_SetSpecularPower_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSpecularPower(temp0, temp1);
    }
    else
    {
      op->vtkVolumeProperty::SetSpecularPower(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetSpecularPower_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpecularPower(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetSpecularPower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_SetSpecularPower(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVolumeProperty_SetSpecularPower_s1(self, args);
    case 1:
      return PyvtkVolumeProperty_SetSpecularPower_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpecularPower");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetSpecularPower_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecularPower(temp0) :
      op->vtkVolumeProperty::GetSpecularPower(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetSpecularPower_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecularPower() :
      op->vtkVolumeProperty::GetSpecularPower());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetSpecularPower(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetSpecularPower_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetSpecularPower_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSpecularPower");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetIsoSurfaceValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsoSurfaceValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContourValues *tempr = (ap.IsBound() ?
      op->GetIsoSurfaceValues() :
      op->vtkVolumeProperty::GetIsoSurfaceValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetSliceFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetSliceFunction(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetSliceFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetSliceFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetSliceFunction() :
      op->vtkVolumeProperty::GetSliceFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetScatteringAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatteringAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScatteringAnisotropy(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetScatteringAnisotropy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetScatteringAnisotropyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScatteringAnisotropyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetScatteringAnisotropyMinValue() :
      op->vtkVolumeProperty::GetScatteringAnisotropyMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetScatteringAnisotropyMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScatteringAnisotropyMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetScatteringAnisotropyMaxValue() :
      op->vtkVolumeProperty::GetScatteringAnisotropyMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetScatteringAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScatteringAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetScatteringAnisotropy() :
      op->vtkVolumeProperty::GetScatteringAnisotropy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_UpdateMTimes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateMTimes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateMTimes();
    }
    else
    {
      op->vtkVolumeProperty::UpdateMTimes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetGradientOpacityMTime_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTimeStamp tempr = (ap.IsBound() ?
      op->GetGradientOpacityMTime(temp0) :
      op->vtkVolumeProperty::GetGradientOpacityMTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetGradientOpacityMTime_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimeStamp tempr = (ap.IsBound() ?
      op->GetGradientOpacityMTime() :
      op->vtkVolumeProperty::GetGradientOpacityMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetGradientOpacityMTime(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetGradientOpacityMTime_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetGradientOpacityMTime_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientOpacityMTime");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetScalarOpacityMTime_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTimeStamp tempr = (ap.IsBound() ?
      op->GetScalarOpacityMTime(temp0) :
      op->vtkVolumeProperty::GetScalarOpacityMTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetScalarOpacityMTime_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimeStamp tempr = (ap.IsBound() ?
      op->GetScalarOpacityMTime() :
      op->vtkVolumeProperty::GetScalarOpacityMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetScalarOpacityMTime(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetScalarOpacityMTime_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetScalarOpacityMTime_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarOpacityMTime");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetRGBTransferFunctionMTime_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBTransferFunctionMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTimeStamp tempr = (ap.IsBound() ?
      op->GetRGBTransferFunctionMTime(temp0) :
      op->vtkVolumeProperty::GetRGBTransferFunctionMTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetRGBTransferFunctionMTime_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBTransferFunctionMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimeStamp tempr = (ap.IsBound() ?
      op->GetRGBTransferFunctionMTime() :
      op->vtkVolumeProperty::GetRGBTransferFunctionMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetRGBTransferFunctionMTime(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetRGBTransferFunctionMTime_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetRGBTransferFunctionMTime_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBTransferFunctionMTime");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_GetGrayTransferFunctionMTime_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrayTransferFunctionMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTimeStamp tempr = (ap.IsBound() ?
      op->GetGrayTransferFunctionMTime(temp0) :
      op->vtkVolumeProperty::GetGrayTransferFunctionMTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetGrayTransferFunctionMTime_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrayTransferFunctionMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimeStamp tempr = (ap.IsBound() ?
      op->GetGrayTransferFunctionMTime() :
      op->vtkVolumeProperty::GetGrayTransferFunctionMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeProperty_GetGrayTransferFunctionMTime(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolumeProperty_GetGrayTransferFunctionMTime_s1(self, args);
    case 0:
      return PyvtkVolumeProperty_GetGrayTransferFunctionMTime_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGrayTransferFunctionMTime");
  return nullptr;
}


static PyObject *
PyvtkVolumeProperty_SetUseClippedVoxelIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseClippedVoxelIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseClippedVoxelIntensity(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetUseClippedVoxelIntensity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetUseClippedVoxelIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseClippedVoxelIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseClippedVoxelIntensity() :
      op->vtkVolumeProperty::GetUseClippedVoxelIntensity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_UseClippedVoxelIntensityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseClippedVoxelIntensityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseClippedVoxelIntensityOn();
    }
    else
    {
      op->vtkVolumeProperty::UseClippedVoxelIntensityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_UseClippedVoxelIntensityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseClippedVoxelIntensityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseClippedVoxelIntensityOff();
    }
    else
    {
      op->vtkVolumeProperty::UseClippedVoxelIntensityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetClippedVoxelIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippedVoxelIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClippedVoxelIntensity(temp0);
    }
    else
    {
      op->vtkVolumeProperty::SetClippedVoxelIntensity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetClippedVoxelIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippedVoxelIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetClippedVoxelIntensity() :
      op->vtkVolumeProperty::GetClippedVoxelIntensity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkColorTransferFunction *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkColorTransferFunction"))
  {
    if (ap.IsBound())
    {
      op->SetLabelColor(temp0, temp1);
    }
    else
    {
      op->vtkVolumeProperty::SetLabelColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColorTransferFunction *tempr = (ap.IsBound() ?
      op->GetLabelColor(temp0) :
      op->vtkVolumeProperty::GetLabelColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetLabelScalarOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkPiecewiseFunction *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetLabelScalarOpacity(temp0, temp1);
    }
    else
    {
      op->vtkVolumeProperty::SetLabelScalarOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetLabelScalarOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetLabelScalarOpacity(temp0) :
      op->vtkVolumeProperty::GetLabelScalarOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_SetLabelGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  vtkPiecewiseFunction *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetLabelGradientOpacity(temp0, temp1);
    }
    else
    {
      op->vtkVolumeProperty::SetLabelGradientOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetLabelGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetLabelGradientOpacity(temp0) :
      op->vtkVolumeProperty::GetLabelGradientOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetLabelColorMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelColorMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimeStamp tempr = (ap.IsBound() ?
      op->GetLabelColorMTime() :
      op->vtkVolumeProperty::GetLabelColorMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetLabelScalarOpacityMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelScalarOpacityMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimeStamp tempr = (ap.IsBound() ?
      op->GetLabelScalarOpacityMTime() :
      op->vtkVolumeProperty::GetLabelScalarOpacityMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetLabelGradientOpacityMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelGradientOpacityMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimeStamp tempr = (ap.IsBound() ?
      op->GetLabelGradientOpacityMTime() :
      op->vtkVolumeProperty::GetLabelGradientOpacityMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeProperty_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeProperty *op = static_cast<vtkVolumeProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetNumberOfLabels() :
      op->vtkVolumeProperty::GetNumberOfLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVolumeProperty_Methods[] = {
  {"IsTypeOf", PyvtkVolumeProperty_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVolumeProperty_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVolumeProperty_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVolumeProperty\nC++: static vtkVolumeProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVolumeProperty_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVolumeProperty\nC++: vtkVolumeProperty *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVolumeProperty_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVolumeProperty_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DeepCopy", PyvtkVolumeProperty_DeepCopy, METH_VARARGS,
   "DeepCopy(self, p:vtkVolumeProperty) -> None\nC++: void DeepCopy(vtkVolumeProperty *p)\n\n"},
  {"GetMTime", PyvtkVolumeProperty_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the modified time for this object (or the properties\nregistered with this object).\n"},
  {"SetIndependentComponents", PyvtkVolumeProperty_SetIndependentComponents, METH_VARARGS,
   "SetIndependentComponents(self, _arg:int) -> None\nC++: virtual void SetIndependentComponents(vtkTypeBool _arg)\n\nDoes the data have independent components, or do some define\ncolor only? If IndependentComponents is On (the default) then\neach component will be independently passed through a lookup\ntable to determine RGBA, shaded. Some volume Mappers can handle 1\nto 4 component unsigned char or unsigned short data (see each\nmapper header file to determine functionality). If\nIndependentComponents is Off, then you must have either 2 or 4\ncomponent data. For 2 component data, the first is passed through\nthe first color transfer function and the second component is\npassed through the first scalar opacity (and gradient opacity)\ntransfer function. Normals will be generated off of the second\ncomponent. When using gradient based opacity modulation, the\ngradients are computed off of the second component. For 4\ncomponent data, the first three will directly represent RGB (no\nlookup table). The fourth component will be passed through the\nfirst scalar opacity transfer function for opacity and first\ngradient opacity transfer function for gradient based opacity\nmodulation. Normals will be generated from the fourth component.\nWhen using gradient based opacity modulation, the gradients are\ncomputed off of the fourth component.\n"},
  {"GetIndependentComponentsMinValue", PyvtkVolumeProperty_GetIndependentComponentsMinValue, METH_VARARGS,
   "GetIndependentComponentsMinValue(self) -> int\nC++: virtual vtkTypeBool GetIndependentComponentsMinValue()\n\n"},
  {"GetIndependentComponentsMaxValue", PyvtkVolumeProperty_GetIndependentComponentsMaxValue, METH_VARARGS,
   "GetIndependentComponentsMaxValue(self) -> int\nC++: virtual vtkTypeBool GetIndependentComponentsMaxValue()\n\n"},
  {"GetIndependentComponents", PyvtkVolumeProperty_GetIndependentComponents, METH_VARARGS,
   "GetIndependentComponents(self) -> int\nC++: virtual vtkTypeBool GetIndependentComponents()\n\n"},
  {"IndependentComponentsOn", PyvtkVolumeProperty_IndependentComponentsOn, METH_VARARGS,
   "IndependentComponentsOn(self) -> None\nC++: virtual void IndependentComponentsOn()\n\n"},
  {"IndependentComponentsOff", PyvtkVolumeProperty_IndependentComponentsOff, METH_VARARGS,
   "IndependentComponentsOff(self) -> None\nC++: virtual void IndependentComponentsOff()\n\n"},
  {"SetInterpolationType", PyvtkVolumeProperty_SetInterpolationType, METH_VARARGS,
   "SetInterpolationType(self, _arg:int) -> None\nC++: virtual void SetInterpolationType(int _arg)\n\nSet the interpolation type for sampling a volume. Initial value\nis VTK_NEAREST_INTERPOLATION.\n"},
  {"GetInterpolationTypeMinValue", PyvtkVolumeProperty_GetInterpolationTypeMinValue, METH_VARARGS,
   "GetInterpolationTypeMinValue(self) -> int\nC++: virtual int GetInterpolationTypeMinValue()\n\n"},
  {"GetInterpolationTypeMaxValue", PyvtkVolumeProperty_GetInterpolationTypeMaxValue, METH_VARARGS,
   "GetInterpolationTypeMaxValue(self) -> int\nC++: virtual int GetInterpolationTypeMaxValue()\n\n"},
  {"GetInterpolationType", PyvtkVolumeProperty_GetInterpolationType, METH_VARARGS,
   "GetInterpolationType(self) -> int\nC++: virtual int GetInterpolationType()\n\n"},
  {"SetInterpolationTypeToNearest", PyvtkVolumeProperty_SetInterpolationTypeToNearest, METH_VARARGS,
   "SetInterpolationTypeToNearest(self) -> None\nC++: void SetInterpolationTypeToNearest()\n\n"},
  {"SetInterpolationTypeToLinear", PyvtkVolumeProperty_SetInterpolationTypeToLinear, METH_VARARGS,
   "SetInterpolationTypeToLinear(self) -> None\nC++: void SetInterpolationTypeToLinear()\n\n"},
  {"GetInterpolationTypeAsString", PyvtkVolumeProperty_GetInterpolationTypeAsString, METH_VARARGS,
   "GetInterpolationTypeAsString(self) -> str\nC++: const char *GetInterpolationTypeAsString()\n\n"},
  {"SetComponentWeight", PyvtkVolumeProperty_SetComponentWeight, METH_VARARGS,
   "SetComponentWeight(self, index:int, value:float) -> None\nC++: virtual void SetComponentWeight(int index, double value)\n\nSet/Get the scalar component weights. Clamped between the range\nof (0.0, 1.0)\n"},
  {"GetComponentWeight", PyvtkVolumeProperty_GetComponentWeight, METH_VARARGS,
   "GetComponentWeight(self, index:int) -> float\nC++: virtual double GetComponentWeight(int index)\n\n"},
  {"SetColor", PyvtkVolumeProperty_SetColor, METH_VARARGS,
   "SetColor(self, index:int, function:vtkPiecewiseFunction) -> None\nC++: void SetColor(int index, vtkPiecewiseFunction *function)\nSetColor(self, function:vtkPiecewiseFunction) -> None\nC++: void SetColor(vtkPiecewiseFunction *function)\nSetColor(self, index:int, function:vtkColorTransferFunction)\n    -> None\nC++: void SetColor(int index, vtkColorTransferFunction *function)\nSetColor(self, function:vtkColorTransferFunction) -> None\nC++: void SetColor(vtkColorTransferFunction *function)\n\nSet the color of a volume to a gray level transfer function for\nthe component indicated by index. This will set the color\nchannels for this component to 1.\n"},
  {"GetColorChannels", PyvtkVolumeProperty_GetColorChannels, METH_VARARGS,
   "GetColorChannels(self, index:int) -> int\nC++: int GetColorChannels(int index)\nGetColorChannels(self) -> int\nC++: int GetColorChannels()\n\nGet the number of color channels in the transfer function for the\ngiven component.\n"},
  {"GetGrayTransferFunction", PyvtkVolumeProperty_GetGrayTransferFunction, METH_VARARGS,
   "GetGrayTransferFunction(self, index:int) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetGrayTransferFunction(int index)\nGetGrayTransferFunction(self) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetGrayTransferFunction()\n\nGet the gray transfer function. If no transfer function has been\nset for this component, a default one is created and returned.\n"},
  {"GetRGBTransferFunction", PyvtkVolumeProperty_GetRGBTransferFunction, METH_VARARGS,
   "GetRGBTransferFunction(self, index:int)\n    -> vtkColorTransferFunction\nC++: vtkColorTransferFunction *GetRGBTransferFunction(int index)\nGetRGBTransferFunction(self) -> vtkColorTransferFunction\nC++: vtkColorTransferFunction *GetRGBTransferFunction()\n\nGet the RGB transfer function for the given component. If no\ntransfer function has been set for this component, a default one\nis created and returned.\n"},
  {"SetScalarOpacity", PyvtkVolumeProperty_SetScalarOpacity, METH_VARARGS,
   "SetScalarOpacity(self, index:int, function:vtkPiecewiseFunction)\n    -> None\nC++: void SetScalarOpacity(int index,\n    vtkPiecewiseFunction *function)\nSetScalarOpacity(self, function:vtkPiecewiseFunction) -> None\nC++: void SetScalarOpacity(vtkPiecewiseFunction *function)\n\nSet the opacity of a volume to an opacity transfer function based\non scalar value for the component indicated by index.\n"},
  {"GetScalarOpacity", PyvtkVolumeProperty_GetScalarOpacity, METH_VARARGS,
   "GetScalarOpacity(self, index:int) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetScalarOpacity(int index)\nGetScalarOpacity(self) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetScalarOpacity()\n\nGet the scalar opacity transfer function for the given component.\nIf no transfer function has been set for this component, a\ndefault one is created and returned.\n"},
  {"SetScalarOpacityUnitDistance", PyvtkVolumeProperty_SetScalarOpacityUnitDistance, METH_VARARGS,
   "SetScalarOpacityUnitDistance(self, index:int, distance:float)\n    -> None\nC++: void SetScalarOpacityUnitDistance(int index, double distance)\nSetScalarOpacityUnitDistance(self, distance:float) -> None\nC++: void SetScalarOpacityUnitDistance(double distance)\n\nSet/Get the unit distance on which the scalar opacity transfer\nfunction is defined. By default this is 1.0, meaning that over a\ndistance of 1.0 units, a given opacity (from the transfer\nfunction) is accumulated. This is adjusted for the actual\nsampling distance during rendering.\n"},
  {"GetScalarOpacityUnitDistance", PyvtkVolumeProperty_GetScalarOpacityUnitDistance, METH_VARARGS,
   "GetScalarOpacityUnitDistance(self, index:int) -> float\nC++: double GetScalarOpacityUnitDistance(int index)\nGetScalarOpacityUnitDistance(self) -> float\nC++: double GetScalarOpacityUnitDistance()\n\n"},
  {"SetGradientOpacity", PyvtkVolumeProperty_SetGradientOpacity, METH_VARARGS,
   "SetGradientOpacity(self, index:int, function:vtkPiecewiseFunction)\n     -> None\nC++: void SetGradientOpacity(int index,\n    vtkPiecewiseFunction *function)\nSetGradientOpacity(self, function:vtkPiecewiseFunction) -> None\nC++: void SetGradientOpacity(vtkPiecewiseFunction *function)\n\nSet the opacity of a volume to an opacity transfer function based\non gradient magnitude for the given component.\n"},
  {"SetTransferFunction2D", PyvtkVolumeProperty_SetTransferFunction2D, METH_VARARGS,
   "SetTransferFunction2D(self, index:int, function:vtkImageData)\n    -> None\nC++: void SetTransferFunction2D(int index, vtkImageData *function)\nSetTransferFunction2D(self, function:vtkImageData) -> None\nC++: void SetTransferFunction2D(vtkImageData *function)\n\nSet/Get a 2D transfer function. Volume mappers interpret the\nx-axis of of this transfer function as scalar value and the\ny-axis as gradient magnitude. The value at (X, Y) corresponds to\nthe color and opacity for a salar value of X and a gradient\nmagnitude of Y.\n"},
  {"GetTransferFunction2D", PyvtkVolumeProperty_GetTransferFunction2D, METH_VARARGS,
   "GetTransferFunction2D(self, index:int) -> vtkImageData\nC++: vtkImageData *GetTransferFunction2D(int index)\nGetTransferFunction2D(self) -> vtkImageData\nC++: vtkImageData *GetTransferFunction2D()\n\n"},
  {"SetTransferFunctionMode", PyvtkVolumeProperty_SetTransferFunctionMode, METH_VARARGS,
   "SetTransferFunctionMode(self, _arg:int) -> None\nC++: virtual void SetTransferFunctionMode(int _arg)\n\n"},
  {"GetTransferFunctionModeMinValue", PyvtkVolumeProperty_GetTransferFunctionModeMinValue, METH_VARARGS,
   "GetTransferFunctionModeMinValue(self) -> int\nC++: virtual int GetTransferFunctionModeMinValue()\n\n"},
  {"GetTransferFunctionModeMaxValue", PyvtkVolumeProperty_GetTransferFunctionModeMaxValue, METH_VARARGS,
   "GetTransferFunctionModeMaxValue(self) -> int\nC++: virtual int GetTransferFunctionModeMaxValue()\n\n"},
  {"GetTransferFunctionMode", PyvtkVolumeProperty_GetTransferFunctionMode, METH_VARARGS,
   "GetTransferFunctionMode(self) -> int\nC++: virtual int GetTransferFunctionMode()\n\n"},
  {"SetTransferFunctionModeTo1D", PyvtkVolumeProperty_SetTransferFunctionModeTo1D, METH_VARARGS,
   "SetTransferFunctionModeTo1D(self) -> None\nC++: void SetTransferFunctionModeTo1D()\n\n"},
  {"SetTransferFunctionModeTo2D", PyvtkVolumeProperty_SetTransferFunctionModeTo2D, METH_VARARGS,
   "SetTransferFunctionModeTo2D(self) -> None\nC++: void SetTransferFunctionModeTo2D()\n\n"},
  {"GetGradientOpacity", PyvtkVolumeProperty_GetGradientOpacity, METH_VARARGS,
   "GetGradientOpacity(self, index:int) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetGradientOpacity(int index)\nGetGradientOpacity(self) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetGradientOpacity()\n\nGet the gradient magnitude opacity transfer function for the\ngiven component. If no transfer function has been set for this\ncomponent, a default one is created and returned. This default\nfunction is always returned if DisableGradientOpacity is On for\nthat component.\n"},
  {"SetDisableGradientOpacity", PyvtkVolumeProperty_SetDisableGradientOpacity, METH_VARARGS,
   "SetDisableGradientOpacity(self, index:int, value:int) -> None\nC++: virtual void SetDisableGradientOpacity(int index, int value)\nSetDisableGradientOpacity(self, value:int) -> None\nC++: virtual void SetDisableGradientOpacity(int value)\n\nEnable/Disable the gradient opacity function for the given\ncomponent. If set to true, any call to GetGradientOpacity() will\nreturn a default function for this component. Note that the\ngradient opacity function is still stored, it is not set or reset\nand can be retrieved using GetStoredGradientOpacity().\n"},
  {"DisableGradientOpacityOn", PyvtkVolumeProperty_DisableGradientOpacityOn, METH_VARARGS,
   "DisableGradientOpacityOn(self, index:int) -> None\nC++: virtual void DisableGradientOpacityOn(int index)\nDisableGradientOpacityOn(self) -> None\nC++: virtual void DisableGradientOpacityOn()\n\n"},
  {"DisableGradientOpacityOff", PyvtkVolumeProperty_DisableGradientOpacityOff, METH_VARARGS,
   "DisableGradientOpacityOff(self, index:int) -> None\nC++: virtual void DisableGradientOpacityOff(int index)\nDisableGradientOpacityOff(self) -> None\nC++: virtual void DisableGradientOpacityOff()\n\n"},
  {"GetDisableGradientOpacity", PyvtkVolumeProperty_GetDisableGradientOpacity, METH_VARARGS,
   "GetDisableGradientOpacity(self, index:int) -> int\nC++: virtual int GetDisableGradientOpacity(int index)\nGetDisableGradientOpacity(self) -> int\nC++: virtual int GetDisableGradientOpacity()\n\n"},
  {"GetStoredGradientOpacity", PyvtkVolumeProperty_GetStoredGradientOpacity, METH_VARARGS,
   "GetStoredGradientOpacity(self, index:int) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetStoredGradientOpacity(int index)\nGetStoredGradientOpacity(self) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetStoredGradientOpacity()\n\n"},
  {"HasGradientOpacity", PyvtkVolumeProperty_HasGradientOpacity, METH_VARARGS,
   "HasGradientOpacity(self, index:int=0) -> bool\nC++: bool HasGradientOpacity(int index=0)\n\nCheck whether or not we have the gradient opacity. Checking\ngradient opacity via GetDisableGradientOpacity or\nGetGradientOpacity will not work as in the former case, \nGetDisableGradientOpacity returns false by default and in the\nlater case, a default gradient opacity will be created.\n"},
  {"HasLabelGradientOpacity", PyvtkVolumeProperty_HasLabelGradientOpacity, METH_VARARGS,
   "HasLabelGradientOpacity(self) -> bool\nC++: bool HasLabelGradientOpacity()\n\n"},
  {"SetShade", PyvtkVolumeProperty_SetShade, METH_VARARGS,
   "SetShade(self, index:int, value:int) -> None\nC++: void SetShade(int index, int value)\nSetShade(self, value:int) -> None\nC++: void SetShade(int value)\n\nSet/Get the shading of a volume. If shading is turned off, then\nthe mapper for the volume will not perform shading calculations.\nIf shading is turned on, the mapper may perform shading\ncalculations - in some cases shading does not apply (for example,\nin a maximum intensity projection) and therefore shading will not\nbe performed even if this flag is on. For a compositing type of\nmapper, turning shading off is generally the same as setting\nambient=1, diffuse=0, specular=0. Shading can be independently\nturned on/off per component.\n\note Shading is only supported for\nvtkVolumeMapper::COMPOSITE_BLEND. For minimum and maximum\nintensity blend modes, there is not necessarily one unique\nlocation along the ray through the volume where that minimum or\nmaximum occurs. For average and additive blend modes, the value\nbeing visualized does not represent a location in the volume but\nrather a statistical measurement along the ray traversing through\nthe volume, and hence shading is not applicable.\n\\sa vtkVolumeMapper::BlendModes\n"},
  {"GetShade", PyvtkVolumeProperty_GetShade, METH_VARARGS,
   "GetShade(self, index:int) -> int\nC++: int GetShade(int index)\nGetShade(self) -> int\nC++: int GetShade()\n\n"},
  {"ShadeOn", PyvtkVolumeProperty_ShadeOn, METH_VARARGS,
   "ShadeOn(self, index:int) -> None\nC++: void ShadeOn(int index)\nShadeOn(self) -> None\nC++: void ShadeOn()\n\n"},
  {"ShadeOff", PyvtkVolumeProperty_ShadeOff, METH_VARARGS,
   "ShadeOff(self, index:int) -> None\nC++: void ShadeOff(int index)\nShadeOff(self) -> None\nC++: void ShadeOff()\n\n"},
  {"SetAmbient", PyvtkVolumeProperty_SetAmbient, METH_VARARGS,
   "SetAmbient(self, index:int, value:float) -> None\nC++: void SetAmbient(int index, double value)\nSetAmbient(self, value:float) -> None\nC++: void SetAmbient(double value)\n\nSet/Get the ambient lighting coefficient.\n"},
  {"GetAmbient", PyvtkVolumeProperty_GetAmbient, METH_VARARGS,
   "GetAmbient(self, index:int) -> float\nC++: double GetAmbient(int index)\nGetAmbient(self) -> float\nC++: double GetAmbient()\n\n"},
  {"SetDiffuse", PyvtkVolumeProperty_SetDiffuse, METH_VARARGS,
   "SetDiffuse(self, index:int, value:float) -> None\nC++: void SetDiffuse(int index, double value)\nSetDiffuse(self, value:float) -> None\nC++: void SetDiffuse(double value)\n\nSet/Get the diffuse lighting coefficient.\n"},
  {"GetDiffuse", PyvtkVolumeProperty_GetDiffuse, METH_VARARGS,
   "GetDiffuse(self, index:int) -> float\nC++: double GetDiffuse(int index)\nGetDiffuse(self) -> float\nC++: double GetDiffuse()\n\n"},
  {"SetSpecular", PyvtkVolumeProperty_SetSpecular, METH_VARARGS,
   "SetSpecular(self, index:int, value:float) -> None\nC++: void SetSpecular(int index, double value)\nSetSpecular(self, value:float) -> None\nC++: void SetSpecular(double value)\n\nSet/Get the specular lighting coefficient.\n"},
  {"GetSpecular", PyvtkVolumeProperty_GetSpecular, METH_VARARGS,
   "GetSpecular(self, index:int) -> float\nC++: double GetSpecular(int index)\nGetSpecular(self) -> float\nC++: double GetSpecular()\n\n"},
  {"SetSpecularPower", PyvtkVolumeProperty_SetSpecularPower, METH_VARARGS,
   "SetSpecularPower(self, index:int, value:float) -> None\nC++: void SetSpecularPower(int index, double value)\nSetSpecularPower(self, value:float) -> None\nC++: void SetSpecularPower(double value)\n\nSet/Get the specular power.\n"},
  {"GetSpecularPower", PyvtkVolumeProperty_GetSpecularPower, METH_VARARGS,
   "GetSpecularPower(self, index:int) -> float\nC++: double GetSpecularPower(int index)\nGetSpecularPower(self) -> float\nC++: double GetSpecularPower()\n\n"},
  {"GetIsoSurfaceValues", PyvtkVolumeProperty_GetIsoSurfaceValues, METH_VARARGS,
   "GetIsoSurfaceValues(self) -> vtkContourValues\nC++: vtkContourValues *GetIsoSurfaceValues()\n\nGet contour values for isosurface blending mode. Do not affect\nother blending modes.\n"},
  {"SetSliceFunction", PyvtkVolumeProperty_SetSliceFunction, METH_VARARGS,
   "SetSliceFunction(self, _arg:vtkImplicitFunction) -> None\nC++: virtual void SetSliceFunction(vtkImplicitFunction *_arg)\n\nGet/Set the function used for slicing. Currently, only vtkPlane\nis supported.\n"},
  {"GetSliceFunction", PyvtkVolumeProperty_GetSliceFunction, METH_VARARGS,
   "GetSliceFunction(self) -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetSliceFunction()\n\n"},
  {"SetScatteringAnisotropy", PyvtkVolumeProperty_SetScatteringAnisotropy, METH_VARARGS,
   "SetScatteringAnisotropy(self, _arg:float) -> None\nC++: virtual void SetScatteringAnisotropy(float _arg)\n\nGet/Set the volume's scattering anisotropy. The model used is\nHenyey-Greenstein. The value should be between -1.0\n(back-scattering) and 1.0 (forward-scattering), so the default\nvalue of 0.0 corresponds to an isotropic volume. For now, it is\nonly used in vtkGPUVolumeRayCastMapper.\n"},
  {"GetScatteringAnisotropyMinValue", PyvtkVolumeProperty_GetScatteringAnisotropyMinValue, METH_VARARGS,
   "GetScatteringAnisotropyMinValue(self) -> float\nC++: virtual float GetScatteringAnisotropyMinValue()\n\n"},
  {"GetScatteringAnisotropyMaxValue", PyvtkVolumeProperty_GetScatteringAnisotropyMaxValue, METH_VARARGS,
   "GetScatteringAnisotropyMaxValue(self) -> float\nC++: virtual float GetScatteringAnisotropyMaxValue()\n\n"},
  {"GetScatteringAnisotropy", PyvtkVolumeProperty_GetScatteringAnisotropy, METH_VARARGS,
   "GetScatteringAnisotropy(self) -> float\nC++: virtual float GetScatteringAnisotropy()\n\n"},
  {"UpdateMTimes", PyvtkVolumeProperty_UpdateMTimes, METH_VARARGS,
   "UpdateMTimes(self) -> None\nC++: void UpdateMTimes()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\nUpdateMTimes performs a Modified() on all TimeStamps. This is\nused by vtkVolume when the property is set, so that any other\nobject that might have been caching information for the property\nwill rebuild.\n"},
  {"GetGradientOpacityMTime", PyvtkVolumeProperty_GetGradientOpacityMTime, METH_VARARGS,
   "GetGradientOpacityMTime(self, index:int) -> vtkTimeStamp\nC++: vtkTimeStamp GetGradientOpacityMTime(int index)\nGetGradientOpacityMTime(self) -> vtkTimeStamp\nC++: vtkTimeStamp GetGradientOpacityMTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Get the\ntime that the gradient opacity transfer function was set\n"},
  {"GetScalarOpacityMTime", PyvtkVolumeProperty_GetScalarOpacityMTime, METH_VARARGS,
   "GetScalarOpacityMTime(self, index:int) -> vtkTimeStamp\nC++: vtkTimeStamp GetScalarOpacityMTime(int index)\nGetScalarOpacityMTime(self) -> vtkTimeStamp\nC++: vtkTimeStamp GetScalarOpacityMTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Get the\ntime that the scalar opacity transfer function was set.\n"},
  {"GetRGBTransferFunctionMTime", PyvtkVolumeProperty_GetRGBTransferFunctionMTime, METH_VARARGS,
   "GetRGBTransferFunctionMTime(self, index:int) -> vtkTimeStamp\nC++: vtkTimeStamp GetRGBTransferFunctionMTime(int index)\nGetRGBTransferFunctionMTime(self) -> vtkTimeStamp\nC++: vtkTimeStamp GetRGBTransferFunctionMTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Get the\ntime that the RGBTransferFunction was set\n"},
  {"GetGrayTransferFunctionMTime", PyvtkVolumeProperty_GetGrayTransferFunctionMTime, METH_VARARGS,
   "GetGrayTransferFunctionMTime(self, index:int) -> vtkTimeStamp\nC++: vtkTimeStamp GetGrayTransferFunctionMTime(int index)\nGetGrayTransferFunctionMTime(self) -> vtkTimeStamp\nC++: vtkTimeStamp GetGrayTransferFunctionMTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Get the\ntime that the GrayTransferFunction was set\n"},
  {"SetUseClippedVoxelIntensity", PyvtkVolumeProperty_SetUseClippedVoxelIntensity, METH_VARARGS,
   "SetUseClippedVoxelIntensity(self, _arg:int) -> None\nC++: virtual void SetUseClippedVoxelIntensity(int _arg)\n\nSet/Get whether to use a fixed intensity value for voxels in the\nclipped space for gradient calculations. When\nUseClippedVoxelIntensity is enabled, the ClippedVoxelIntensity\nvalue will be used as intensity of clipped voxels. By default,\nthis is false.\n\note This property is only used by the vtkGPUVolumeRayCastMapper\nfor now.\n\\sa SetClippedVoxelIntensity\n"},
  {"GetUseClippedVoxelIntensity", PyvtkVolumeProperty_GetUseClippedVoxelIntensity, METH_VARARGS,
   "GetUseClippedVoxelIntensity(self) -> int\nC++: virtual int GetUseClippedVoxelIntensity()\n\n"},
  {"UseClippedVoxelIntensityOn", PyvtkVolumeProperty_UseClippedVoxelIntensityOn, METH_VARARGS,
   "UseClippedVoxelIntensityOn(self) -> None\nC++: virtual void UseClippedVoxelIntensityOn()\n\n"},
  {"UseClippedVoxelIntensityOff", PyvtkVolumeProperty_UseClippedVoxelIntensityOff, METH_VARARGS,
   "UseClippedVoxelIntensityOff(self) -> None\nC++: virtual void UseClippedVoxelIntensityOff()\n\n"},
  {"SetClippedVoxelIntensity", PyvtkVolumeProperty_SetClippedVoxelIntensity, METH_VARARGS,
   "SetClippedVoxelIntensity(self, _arg:float) -> None\nC++: virtual void SetClippedVoxelIntensity(double _arg)\n\nSet/Get the intensity value for voxels in the clipped space for\ngradient computations (for shading and gradient based opacity\nmodulation). By default, this is set to VTK_DOUBLE_MIN.\n\note This value is only used when UseClippedVoxelIntensity is\ntrue.\n\note This property is only used by the vtkGPUVolumeRayCastMapper\nfor now.\n\\sa SetUseClippedVoxelIntensity\n"},
  {"GetClippedVoxelIntensity", PyvtkVolumeProperty_GetClippedVoxelIntensity, METH_VARARGS,
   "GetClippedVoxelIntensity(self) -> float\nC++: virtual double GetClippedVoxelIntensity()\n\n"},
  {"SetLabelColor", PyvtkVolumeProperty_SetLabelColor, METH_VARARGS,
   "SetLabelColor(self, label:int, function:vtkColorTransferFunction)\n    -> None\nC++: void SetLabelColor(int label,\n    vtkColorTransferFunction *function)\n\nSet/Get the color transfer function for a label in the label map.\n"},
  {"GetLabelColor", PyvtkVolumeProperty_GetLabelColor, METH_VARARGS,
   "GetLabelColor(self, label:int) -> vtkColorTransferFunction\nC++: vtkColorTransferFunction *GetLabelColor(int label)\n\n"},
  {"SetLabelScalarOpacity", PyvtkVolumeProperty_SetLabelScalarOpacity, METH_VARARGS,
   "SetLabelScalarOpacity(self, label:int,\n    function:vtkPiecewiseFunction) -> None\nC++: void SetLabelScalarOpacity(int label,\n    vtkPiecewiseFunction *function)\n\nSet/Get the opacity transfer function for a label in the label\nmap.\n"},
  {"GetLabelScalarOpacity", PyvtkVolumeProperty_GetLabelScalarOpacity, METH_VARARGS,
   "GetLabelScalarOpacity(self, label:int) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetLabelScalarOpacity(int label)\n\n"},
  {"SetLabelGradientOpacity", PyvtkVolumeProperty_SetLabelGradientOpacity, METH_VARARGS,
   "SetLabelGradientOpacity(self, label:int,\n    function:vtkPiecewiseFunction) -> None\nC++: void SetLabelGradientOpacity(int label,\n    vtkPiecewiseFunction *function)\n\nSet/Get the gradient opacity function for a label in the label\nmap.\n"},
  {"GetLabelGradientOpacity", PyvtkVolumeProperty_GetLabelGradientOpacity, METH_VARARGS,
   "GetLabelGradientOpacity(self, label:int) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *GetLabelGradientOpacity(int label)\n\n"},
  {"GetLabelColorMTime", PyvtkVolumeProperty_GetLabelColorMTime, METH_VARARGS,
   "GetLabelColorMTime(self) -> vtkTimeStamp\nC++: virtual vtkTimeStamp GetLabelColorMTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Get the\ntime that label color transfer functions were set\n"},
  {"GetLabelScalarOpacityMTime", PyvtkVolumeProperty_GetLabelScalarOpacityMTime, METH_VARARGS,
   "GetLabelScalarOpacityMTime(self) -> vtkTimeStamp\nC++: virtual vtkTimeStamp GetLabelScalarOpacityMTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Get the\ntime that label scalar opacity transfer functions were set\n"},
  {"GetLabelGradientOpacityMTime", PyvtkVolumeProperty_GetLabelGradientOpacityMTime, METH_VARARGS,
   "GetLabelGradientOpacityMTime(self) -> vtkTimeStamp\nC++: virtual vtkTimeStamp GetLabelGradientOpacityMTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Get the\ntime that label gradient opacity transfer functions were set\n"},
  {"GetNumberOfLabels", PyvtkVolumeProperty_GetNumberOfLabels, METH_VARARGS,
   "GetNumberOfLabels(self) -> int\nC++: std::size_t GetNumberOfLabels()\n\nGet the number of labels that are provided with transfer\nfunctions using either SetLabelColor, SetLabelScalarOpacity or\nSetLabelGradientOpacity.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVolumeProperty_Doc =
  "vtkVolumeProperty - represents the common properties for rendering a\nvolume.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkVolumeProperty is used to represent common properties associated\n"
  "with volume rendering. This includes properties for determining the\n"
  "type of interpolation to use when sampling a volume, the color of a\n"
  "volume, the scalar opacity of a volume, the gradient opacity of a\n"
  "volume, and the shading parameters of a volume.\n\n"
  "Color, scalar opacity and gradient magnitude opacity transfer\n"
  "functions can be set as either 3 separate 1D functions or as a single\n"
  "2D transfer function.\n\n"
  "- 1D Transfer functions (vtkVolumeProperty::TF_1D) Color, scalar\n"
  "  opacity and gradient magnitude opacity are defined by 1\n"
  "  vtkColorTransferFunction and 2 vtkPiecewiseFunctions respectively.\n"
  "  When the scalar opacity or the gradient opacity of a volume is not\n"
  "  set, then the function is defined to be a constant value of 1.0.\n"
  "  When a scalar and gradient opacity are both set simultaneously,\n"
  "  then the opacity is defined to be the product of the scalar opacity\n"
  "and gradient opacity transfer functions. 1D transfer functions is the\n"
  "legacy and default behavior.\n\n"
  "- 2D Transfer functions (vtkVolumeProperty::TF_2D) Color and\n"
  "  scalar/gradient magnitude opacity are defined by a 4-component\n"
  "  vtkImageData instance mapping scalar value vs. gradient magnitude\n"
  "  on its x and y axis respectively. This mode is only available if a\n"
  "  2D TF has been explicitly set (see SetTransferFunction2D).\n\n"
  "Most properties can be set per \"component\" for volume mappers that\n"
  "support multiple independent components. If you are using 2 component\n"
  "data as LV or 4 component data as RGBV (as specified in the mapper)\n"
  "only the first scalar opacity and gradient opacity transfer functions\n"
  "will be used (and all color functions will be ignored). Omitting the\n"
  "index parameter on the Set/Get methods will access index = 0.\n\n"
  "@sa vtkPiecewiseFunction vtkColorTransferFunction\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVolumeProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkVolumeProperty", // tp_name
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
  PyvtkVolumeProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVolumeProperty_StaticNew()
{
  return vtkVolumeProperty::New();
}

PyObject *PyvtkVolumeProperty_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVolumeProperty_Type, PyvtkVolumeProperty_Methods,
    "vtkVolumeProperty",
 &PyvtkVolumeProperty_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkVolumeProperty_TransferMode_Type);
  PyVTKEnum_Add(&PyvtkVolumeProperty_TransferMode_Type, "vtkVolumeProperty.TransferMode");

  o = (PyObject *)&PyvtkVolumeProperty_TransferMode_Type;
  if (PyDict_SetItemString(d, "TransferMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkVolumeProperty::TransferMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "TF_1D", vtkVolumeProperty::TF_1D },
        { "TF_2D", vtkVolumeProperty::TF_2D },
      };

    o = PyvtkVolumeProperty_TransferMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVolumeProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVolumeProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVolumeProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

