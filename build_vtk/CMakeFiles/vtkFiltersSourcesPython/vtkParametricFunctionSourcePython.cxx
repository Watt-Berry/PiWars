// python wrapper for vtkParametricFunctionSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkParametricFunctionSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParametricFunctionSource(PyObject *dict); }
extern "C" { PyObject *PyvtkParametricFunctionSource_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParametricFunctionSource_SCALAR_MODE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkParametricFunctionSource.SCALAR_MODE", // tp_name
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
PyObject *PyvtkParametricFunctionSource_SCALAR_MODE_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkParametricFunctionSource_SCALAR_MODE_Type, static_cast<int>(val));
}


static PyObject *
PyvtkParametricFunctionSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParametricFunctionSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricFunctionSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParametricFunctionSource *tempr = vtkParametricFunctionSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricFunctionSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricFunctionSource::NewInstance());

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
PyvtkParametricFunctionSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkParametricFunctionSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkParametricFunctionSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetParametricFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  vtkParametricFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkParametricFunction"))
  {
    if (ap.IsBound())
    {
      op->SetParametricFunction(temp0);
    }
    else
    {
      op->vtkParametricFunctionSource::SetParametricFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetParametricFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricFunction *tempr = (ap.IsBound() ?
      op->GetParametricFunction() :
      op->vtkParametricFunctionSource::GetParametricFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetUResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUResolution(temp0);
    }
    else
    {
      op->vtkParametricFunctionSource::SetUResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetUResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUResolutionMinValue() :
      op->vtkParametricFunctionSource::GetUResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetUResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUResolutionMaxValue() :
      op->vtkParametricFunctionSource::GetUResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetUResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUResolution() :
      op->vtkParametricFunctionSource::GetUResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetVResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVResolution(temp0);
    }
    else
    {
      op->vtkParametricFunctionSource::SetVResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetVResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVResolutionMinValue() :
      op->vtkParametricFunctionSource::GetVResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetVResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVResolutionMaxValue() :
      op->vtkParametricFunctionSource::GetVResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetVResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVResolution() :
      op->vtkParametricFunctionSource::GetVResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetWResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWResolution(temp0);
    }
    else
    {
      op->vtkParametricFunctionSource::SetWResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetWResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWResolutionMinValue() :
      op->vtkParametricFunctionSource::GetWResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetWResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWResolutionMaxValue() :
      op->vtkParametricFunctionSource::GetWResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetWResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWResolution() :
      op->vtkParametricFunctionSource::GetWResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GenerateTextureCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTextureCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTextureCoordinatesOn();
    }
    else
    {
      op->vtkParametricFunctionSource::GenerateTextureCoordinatesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GenerateTextureCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTextureCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTextureCoordinatesOff();
    }
    else
    {
      op->vtkParametricFunctionSource::GenerateTextureCoordinatesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetGenerateTextureCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTextureCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTextureCoordinates(temp0);
    }
    else
    {
      op->vtkParametricFunctionSource::SetGenerateTextureCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateTextureCoordinatesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTextureCoordinatesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTextureCoordinatesMinValue() :
      op->vtkParametricFunctionSource::GetGenerateTextureCoordinatesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateTextureCoordinatesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTextureCoordinatesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTextureCoordinatesMaxValue() :
      op->vtkParametricFunctionSource::GetGenerateTextureCoordinatesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateTextureCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTextureCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTextureCoordinates() :
      op->vtkParametricFunctionSource::GetGenerateTextureCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GenerateNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateNormalsOn();
    }
    else
    {
      op->vtkParametricFunctionSource::GenerateNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GenerateNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateNormalsOff();
    }
    else
    {
      op->vtkParametricFunctionSource::GenerateNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetGenerateNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateNormals(temp0);
    }
    else
    {
      op->vtkParametricFunctionSource::SetGenerateNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateNormalsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateNormalsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateNormalsMinValue() :
      op->vtkParametricFunctionSource::GetGenerateNormalsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateNormalsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateNormalsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateNormalsMaxValue() :
      op->vtkParametricFunctionSource::GetGenerateNormalsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetGenerateNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateNormals() :
      op->vtkParametricFunctionSource::GetGenerateNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarMode(temp0);
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetScalarModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarModeMinValue() :
      op->vtkParametricFunctionSource::GetScalarModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetScalarModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarModeMaxValue() :
      op->vtkParametricFunctionSource::GetScalarModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkParametricFunctionSource::GetScalarMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToNone();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToU();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToU();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToV();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToV();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToU0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToU0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToU0();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToU0();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToV0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToV0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToV0();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToV0();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToU0V0(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToU0V0");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToU0V0();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToU0V0();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToModulus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToModulus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToModulus();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToModulus();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToPhase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToPhase();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToPhase();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToQuadrant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToQuadrant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToQuadrant();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToQuadrant();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToX();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToY();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToZ();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToDistance();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToDistance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetScalarModeToFunctionDefined(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToFunctionDefined");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToFunctionDefined();
    }
    else
    {
      op->vtkParametricFunctionSource::SetScalarModeToFunctionDefined();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkParametricFunctionSource::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkParametricFunctionSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricFunctionSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricFunctionSource *op = static_cast<vtkParametricFunctionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkParametricFunctionSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkParametricFunctionSource_Methods[] = {
  {"IsTypeOf", PyvtkParametricFunctionSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParametricFunctionSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParametricFunctionSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkParametricFunctionSource\nC++: static vtkParametricFunctionSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParametricFunctionSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkParametricFunctionSource\nC++: vtkParametricFunctionSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkParametricFunctionSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkParametricFunctionSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetParametricFunction", PyvtkParametricFunctionSource_SetParametricFunction, METH_VARARGS,
   "SetParametricFunction(self, __a:vtkParametricFunction) -> None\nC++: virtual void SetParametricFunction(vtkParametricFunction *)\n\nSpecify the parametric function to use to generate the\ntessellation.\n"},
  {"GetParametricFunction", PyvtkParametricFunctionSource_GetParametricFunction, METH_VARARGS,
   "GetParametricFunction(self) -> vtkParametricFunction\nC++: virtual vtkParametricFunction *GetParametricFunction()\n\n"},
  {"SetUResolution", PyvtkParametricFunctionSource_SetUResolution, METH_VARARGS,
   "SetUResolution(self, _arg:int) -> None\nC++: virtual void SetUResolution(int _arg)\n\nSet/Get the number of subdivisions / tessellations in the u\nparametric direction. Note that the number of tessellant points\nin the u direction is the UResolution + 1.\n"},
  {"GetUResolutionMinValue", PyvtkParametricFunctionSource_GetUResolutionMinValue, METH_VARARGS,
   "GetUResolutionMinValue(self) -> int\nC++: virtual int GetUResolutionMinValue()\n\n"},
  {"GetUResolutionMaxValue", PyvtkParametricFunctionSource_GetUResolutionMaxValue, METH_VARARGS,
   "GetUResolutionMaxValue(self) -> int\nC++: virtual int GetUResolutionMaxValue()\n\n"},
  {"GetUResolution", PyvtkParametricFunctionSource_GetUResolution, METH_VARARGS,
   "GetUResolution(self) -> int\nC++: virtual int GetUResolution()\n\n"},
  {"SetVResolution", PyvtkParametricFunctionSource_SetVResolution, METH_VARARGS,
   "SetVResolution(self, _arg:int) -> None\nC++: virtual void SetVResolution(int _arg)\n\nSet/Get the number of subdivisions / tessellations in the v\nparametric direction. Note that the number of tessellant points\nin the v direction is the VResolution + 1.\n"},
  {"GetVResolutionMinValue", PyvtkParametricFunctionSource_GetVResolutionMinValue, METH_VARARGS,
   "GetVResolutionMinValue(self) -> int\nC++: virtual int GetVResolutionMinValue()\n\n"},
  {"GetVResolutionMaxValue", PyvtkParametricFunctionSource_GetVResolutionMaxValue, METH_VARARGS,
   "GetVResolutionMaxValue(self) -> int\nC++: virtual int GetVResolutionMaxValue()\n\n"},
  {"GetVResolution", PyvtkParametricFunctionSource_GetVResolution, METH_VARARGS,
   "GetVResolution(self) -> int\nC++: virtual int GetVResolution()\n\n"},
  {"SetWResolution", PyvtkParametricFunctionSource_SetWResolution, METH_VARARGS,
   "SetWResolution(self, _arg:int) -> None\nC++: virtual void SetWResolution(int _arg)\n\nSet/Get the number of subdivisions / tessellations in the w\nparametric direction. Note that the number of tessellant points\nin the w direction is the WResolution + 1.\n"},
  {"GetWResolutionMinValue", PyvtkParametricFunctionSource_GetWResolutionMinValue, METH_VARARGS,
   "GetWResolutionMinValue(self) -> int\nC++: virtual int GetWResolutionMinValue()\n\n"},
  {"GetWResolutionMaxValue", PyvtkParametricFunctionSource_GetWResolutionMaxValue, METH_VARARGS,
   "GetWResolutionMaxValue(self) -> int\nC++: virtual int GetWResolutionMaxValue()\n\n"},
  {"GetWResolution", PyvtkParametricFunctionSource_GetWResolution, METH_VARARGS,
   "GetWResolution(self) -> int\nC++: virtual int GetWResolution()\n\n"},
  {"GenerateTextureCoordinatesOn", PyvtkParametricFunctionSource_GenerateTextureCoordinatesOn, METH_VARARGS,
   "GenerateTextureCoordinatesOn(self) -> None\nC++: virtual void GenerateTextureCoordinatesOn()\n\nSet/Get the generation of texture coordinates. This is off by\ndefault. Note that this is only applicable to parametric surfaces\nwhose parametric dimension is 2. Note that texturing may fail in\nsome cases.\n"},
  {"GenerateTextureCoordinatesOff", PyvtkParametricFunctionSource_GenerateTextureCoordinatesOff, METH_VARARGS,
   "GenerateTextureCoordinatesOff(self) -> None\nC++: virtual void GenerateTextureCoordinatesOff()\n\n"},
  {"SetGenerateTextureCoordinates", PyvtkParametricFunctionSource_SetGenerateTextureCoordinates, METH_VARARGS,
   "SetGenerateTextureCoordinates(self, _arg:int) -> None\nC++: virtual void SetGenerateTextureCoordinates(vtkTypeBool _arg)\n\n"},
  {"GetGenerateTextureCoordinatesMinValue", PyvtkParametricFunctionSource_GetGenerateTextureCoordinatesMinValue, METH_VARARGS,
   "GetGenerateTextureCoordinatesMinValue(self) -> int\nC++: virtual vtkTypeBool GetGenerateTextureCoordinatesMinValue()\n\n"},
  {"GetGenerateTextureCoordinatesMaxValue", PyvtkParametricFunctionSource_GetGenerateTextureCoordinatesMaxValue, METH_VARARGS,
   "GetGenerateTextureCoordinatesMaxValue(self) -> int\nC++: virtual vtkTypeBool GetGenerateTextureCoordinatesMaxValue()\n\n"},
  {"GetGenerateTextureCoordinates", PyvtkParametricFunctionSource_GetGenerateTextureCoordinates, METH_VARARGS,
   "GetGenerateTextureCoordinates(self) -> int\nC++: virtual vtkTypeBool GetGenerateTextureCoordinates()\n\n"},
  {"GenerateNormalsOn", PyvtkParametricFunctionSource_GenerateNormalsOn, METH_VARARGS,
   "GenerateNormalsOn(self) -> None\nC++: virtual void GenerateNormalsOn()\n\nSet/Get the generation of normals. This is on by default. Note\nthat this is only applicable to parametric surfaces whose\nparametric dimension is 2.\n"},
  {"GenerateNormalsOff", PyvtkParametricFunctionSource_GenerateNormalsOff, METH_VARARGS,
   "GenerateNormalsOff(self) -> None\nC++: virtual void GenerateNormalsOff()\n\n"},
  {"SetGenerateNormals", PyvtkParametricFunctionSource_SetGenerateNormals, METH_VARARGS,
   "SetGenerateNormals(self, _arg:int) -> None\nC++: virtual void SetGenerateNormals(vtkTypeBool _arg)\n\n"},
  {"GetGenerateNormalsMinValue", PyvtkParametricFunctionSource_GetGenerateNormalsMinValue, METH_VARARGS,
   "GetGenerateNormalsMinValue(self) -> int\nC++: virtual vtkTypeBool GetGenerateNormalsMinValue()\n\n"},
  {"GetGenerateNormalsMaxValue", PyvtkParametricFunctionSource_GetGenerateNormalsMaxValue, METH_VARARGS,
   "GetGenerateNormalsMaxValue(self) -> int\nC++: virtual vtkTypeBool GetGenerateNormalsMaxValue()\n\n"},
  {"GetGenerateNormals", PyvtkParametricFunctionSource_GetGenerateNormals, METH_VARARGS,
   "GetGenerateNormals(self) -> int\nC++: virtual vtkTypeBool GetGenerateNormals()\n\n"},
  {"SetScalarMode", PyvtkParametricFunctionSource_SetScalarMode, METH_VARARGS,
   "SetScalarMode(self, _arg:int) -> None\nC++: virtual void SetScalarMode(int _arg)\n\nGet/Set the mode used for the scalar data. See SCALAR_MODE for a\ndescription of the types of scalars generated.\n"},
  {"GetScalarModeMinValue", PyvtkParametricFunctionSource_GetScalarModeMinValue, METH_VARARGS,
   "GetScalarModeMinValue(self) -> int\nC++: virtual int GetScalarModeMinValue()\n\n"},
  {"GetScalarModeMaxValue", PyvtkParametricFunctionSource_GetScalarModeMaxValue, METH_VARARGS,
   "GetScalarModeMaxValue(self) -> int\nC++: virtual int GetScalarModeMaxValue()\n\n"},
  {"GetScalarMode", PyvtkParametricFunctionSource_GetScalarMode, METH_VARARGS,
   "GetScalarMode(self) -> int\nC++: virtual int GetScalarMode()\n\n"},
  {"SetScalarModeToNone", PyvtkParametricFunctionSource_SetScalarModeToNone, METH_VARARGS,
   "SetScalarModeToNone(self) -> None\nC++: void SetScalarModeToNone()\n\n"},
  {"SetScalarModeToU", PyvtkParametricFunctionSource_SetScalarModeToU, METH_VARARGS,
   "SetScalarModeToU(self) -> None\nC++: void SetScalarModeToU()\n\n"},
  {"SetScalarModeToV", PyvtkParametricFunctionSource_SetScalarModeToV, METH_VARARGS,
   "SetScalarModeToV(self) -> None\nC++: void SetScalarModeToV()\n\n"},
  {"SetScalarModeToU0", PyvtkParametricFunctionSource_SetScalarModeToU0, METH_VARARGS,
   "SetScalarModeToU0(self) -> None\nC++: void SetScalarModeToU0()\n\n"},
  {"SetScalarModeToV0", PyvtkParametricFunctionSource_SetScalarModeToV0, METH_VARARGS,
   "SetScalarModeToV0(self) -> None\nC++: void SetScalarModeToV0()\n\n"},
  {"SetScalarModeToU0V0", PyvtkParametricFunctionSource_SetScalarModeToU0V0, METH_VARARGS,
   "SetScalarModeToU0V0(self) -> None\nC++: void SetScalarModeToU0V0()\n\n"},
  {"SetScalarModeToModulus", PyvtkParametricFunctionSource_SetScalarModeToModulus, METH_VARARGS,
   "SetScalarModeToModulus(self) -> None\nC++: void SetScalarModeToModulus()\n\n"},
  {"SetScalarModeToPhase", PyvtkParametricFunctionSource_SetScalarModeToPhase, METH_VARARGS,
   "SetScalarModeToPhase(self) -> None\nC++: void SetScalarModeToPhase()\n\n"},
  {"SetScalarModeToQuadrant", PyvtkParametricFunctionSource_SetScalarModeToQuadrant, METH_VARARGS,
   "SetScalarModeToQuadrant(self) -> None\nC++: void SetScalarModeToQuadrant()\n\n"},
  {"SetScalarModeToX", PyvtkParametricFunctionSource_SetScalarModeToX, METH_VARARGS,
   "SetScalarModeToX(self) -> None\nC++: void SetScalarModeToX()\n\n"},
  {"SetScalarModeToY", PyvtkParametricFunctionSource_SetScalarModeToY, METH_VARARGS,
   "SetScalarModeToY(self) -> None\nC++: void SetScalarModeToY()\n\n"},
  {"SetScalarModeToZ", PyvtkParametricFunctionSource_SetScalarModeToZ, METH_VARARGS,
   "SetScalarModeToZ(self) -> None\nC++: void SetScalarModeToZ()\n\n"},
  {"SetScalarModeToDistance", PyvtkParametricFunctionSource_SetScalarModeToDistance, METH_VARARGS,
   "SetScalarModeToDistance(self) -> None\nC++: void SetScalarModeToDistance()\n\n"},
  {"SetScalarModeToFunctionDefined", PyvtkParametricFunctionSource_SetScalarModeToFunctionDefined, METH_VARARGS,
   "SetScalarModeToFunctionDefined(self) -> None\nC++: void SetScalarModeToFunctionDefined()\n\n"},
  {"GetMTime", PyvtkParametricFunctionSource_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the parametric function.\n"},
  {"SetOutputPointsPrecision", PyvtkParametricFunctionSource_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkParametricFunctionSource_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkParametricFunctionSource_Doc =
  "vtkParametricFunctionSource - tessellate parametric functions\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This class tessellates parametric functions. The user must specify\n"
  "how many points in the parametric coordinate directions are required\n"
  "(i.e., the resolution), and the mode to use to generate scalars.\n\n"
  "@par Thanks: Andrew Maclean andrew.amaclean@gmail.com for creating\n"
  "and contributing the class.\n\n"
  "@sa\n"
  "vtkParametricFunction\n\n"
  "@sa\n"
  "Implementation of parametrics for 1D lines: vtkParametricSpline\n\n"
  "@sa\n"
  "Subclasses of vtkParametricFunction implementing non-orentable\n"
  "surfaces: vtkParametricBoy vtkParametricCrossCap\n"
  "vtkParametricFigure8Klein vtkParametricKlein vtkParametricMobius\n"
  "vtkParametricRoman\n\n"
  "@sa\n"
  "Subclasses of vtkParametricFunction implementing orientable surfaces:\n"
  "vtkParametricConicSpiral vtkParametricDini vtkParametricEllipsoid\n"
  "vtkParametricEnneper vtkParametricRandomHills\n"
  "vtkParametricSuperEllipsoid vtkParametricSuperToroid\n"
  "vtkParametricTorus\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParametricFunctionSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkParametricFunctionSource", // tp_name
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
  PyvtkParametricFunctionSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParametricFunctionSource_StaticNew()
{
  return vtkParametricFunctionSource::New();
}

PyObject *PyvtkParametricFunctionSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkParametricFunctionSource_Type, PyvtkParametricFunctionSource_Methods,
    "vtkParametricFunctionSource",
 &PyvtkParametricFunctionSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkParametricFunctionSource_SCALAR_MODE_Type);
  PyVTKEnum_Add(&PyvtkParametricFunctionSource_SCALAR_MODE_Type, "vtkParametricFunctionSource.SCALAR_MODE");

  o = (PyObject *)&PyvtkParametricFunctionSource_SCALAR_MODE_Type;
  if (PyDict_SetItemString(d, "SCALAR_MODE", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 14; c++)
  {
    typedef vtkParametricFunctionSource::SCALAR_MODE cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[14] = {
        { "SCALAR_NONE", vtkParametricFunctionSource::SCALAR_NONE },
        { "SCALAR_U", vtkParametricFunctionSource::SCALAR_U },
        { "SCALAR_V", vtkParametricFunctionSource::SCALAR_V },
        { "SCALAR_U0", vtkParametricFunctionSource::SCALAR_U0 },
        { "SCALAR_V0", vtkParametricFunctionSource::SCALAR_V0 },
        { "SCALAR_U0V0", vtkParametricFunctionSource::SCALAR_U0V0 },
        { "SCALAR_MODULUS", vtkParametricFunctionSource::SCALAR_MODULUS },
        { "SCALAR_PHASE", vtkParametricFunctionSource::SCALAR_PHASE },
        { "SCALAR_QUADRANT", vtkParametricFunctionSource::SCALAR_QUADRANT },
        { "SCALAR_X", vtkParametricFunctionSource::SCALAR_X },
        { "SCALAR_Y", vtkParametricFunctionSource::SCALAR_Y },
        { "SCALAR_Z", vtkParametricFunctionSource::SCALAR_Z },
        { "SCALAR_DISTANCE", vtkParametricFunctionSource::SCALAR_DISTANCE },
        { "SCALAR_FUNCTION_DEFINED", vtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED },
      };

    o = PyvtkParametricFunctionSource_SCALAR_MODE_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParametricFunctionSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParametricFunctionSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParametricFunctionSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

