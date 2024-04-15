// python wrapper for vtkLabelPlacementMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLabelPlacementMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLabelPlacementMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkLabelPlacementMapper_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLabelPlacementMapper_LabelShape_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLabel.vtkLabelPlacementMapper.LabelShape", // tp_name
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
PyObject *PyvtkLabelPlacementMapper_LabelShape_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkLabelPlacementMapper_LabelShape_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLabelPlacementMapper_LabelStyle_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLabel.vtkLabelPlacementMapper.LabelStyle", // tp_name
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
PyObject *PyvtkLabelPlacementMapper_LabelStyle_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkLabelPlacementMapper_LabelStyle_Type, static_cast<int>(val));
}


static PyObject *
PyvtkLabelPlacementMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLabelPlacementMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabelPlacementMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLabelPlacementMapper *tempr = vtkLabelPlacementMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabelPlacementMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabelPlacementMapper::NewInstance());

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
PyvtkLabelPlacementMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLabelPlacementMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLabelPlacementMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderOverlay(temp0, temp1);
    }
    else
    {
      op->vtkLabelPlacementMapper::RenderOverlay(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetRenderStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  vtkLabelRenderStrategy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLabelRenderStrategy"))
  {
    if (ap.IsBound())
    {
      op->SetRenderStrategy(temp0);
    }
    else
    {
      op->vtkLabelPlacementMapper::SetRenderStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetRenderStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabelRenderStrategy *tempr = (ap.IsBound() ?
      op->GetRenderStrategy() :
      op->vtkLabelPlacementMapper::GetRenderStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetMaximumLabelFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLabelFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumLabelFraction(temp0);
    }
    else
    {
      op->vtkLabelPlacementMapper::SetMaximumLabelFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetMaximumLabelFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLabelFractionMinValue() :
      op->vtkLabelPlacementMapper::GetMaximumLabelFractionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetMaximumLabelFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLabelFractionMaxValue() :
      op->vtkLabelPlacementMapper::GetMaximumLabelFractionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetMaximumLabelFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLabelFraction() :
      op->vtkLabelPlacementMapper::GetMaximumLabelFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetIteratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIteratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIteratorType(temp0);
    }
    else
    {
      op->vtkLabelPlacementMapper::SetIteratorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetIteratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIteratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIteratorType() :
      op->vtkLabelPlacementMapper::GetIteratorType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetPositionsAsNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionsAsNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPositionsAsNormals() :
      op->vtkLabelPlacementMapper::GetPositionsAsNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetPositionsAsNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionsAsNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPositionsAsNormals(temp0);
    }
    else
    {
      op->vtkLabelPlacementMapper::SetPositionsAsNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_PositionsAsNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsAsNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PositionsAsNormalsOn();
    }
    else
    {
      op->vtkLabelPlacementMapper::PositionsAsNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_PositionsAsNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsAsNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PositionsAsNormalsOff();
    }
    else
    {
      op->vtkLabelPlacementMapper::PositionsAsNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetGeneratePerturbedLabelSpokes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePerturbedLabelSpokes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePerturbedLabelSpokes() :
      op->vtkLabelPlacementMapper::GetGeneratePerturbedLabelSpokes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetGeneratePerturbedLabelSpokes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePerturbedLabelSpokes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePerturbedLabelSpokes(temp0);
    }
    else
    {
      op->vtkLabelPlacementMapper::SetGeneratePerturbedLabelSpokes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GeneratePerturbedLabelSpokesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePerturbedLabelSpokesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePerturbedLabelSpokesOn();
    }
    else
    {
      op->vtkLabelPlacementMapper::GeneratePerturbedLabelSpokesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GeneratePerturbedLabelSpokesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePerturbedLabelSpokesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePerturbedLabelSpokesOff();
    }
    else
    {
      op->vtkLabelPlacementMapper::GeneratePerturbedLabelSpokesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetUseDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDepthBuffer() :
      op->vtkLabelPlacementMapper::GetUseDepthBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetUseDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDepthBuffer(temp0);
    }
    else
    {
      op->vtkLabelPlacementMapper::SetUseDepthBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_UseDepthBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDepthBufferOn();
    }
    else
    {
      op->vtkLabelPlacementMapper::UseDepthBufferOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_UseDepthBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDepthBufferOff();
    }
    else
    {
      op->vtkLabelPlacementMapper::UseDepthBufferOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetPlaceAllLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaceAllLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlaceAllLabels(temp0);
    }
    else
    {
      op->vtkLabelPlacementMapper::SetPlaceAllLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetPlaceAllLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceAllLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPlaceAllLabels() :
      op->vtkLabelPlacementMapper::GetPlaceAllLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_PlaceAllLabelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceAllLabelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceAllLabelsOn();
    }
    else
    {
      op->vtkLabelPlacementMapper::PlaceAllLabelsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_PlaceAllLabelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceAllLabelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceAllLabelsOff();
    }
    else
    {
      op->vtkLabelPlacementMapper::PlaceAllLabelsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetOutputTraversedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTraversedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTraversedBounds(temp0);
    }
    else
    {
      op->vtkLabelPlacementMapper::SetOutputTraversedBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetOutputTraversedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputTraversedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOutputTraversedBounds() :
      op->vtkLabelPlacementMapper::GetOutputTraversedBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_OutputTraversedBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputTraversedBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputTraversedBoundsOn();
    }
    else
    {
      op->vtkLabelPlacementMapper::OutputTraversedBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_OutputTraversedBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputTraversedBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputTraversedBoundsOff();
    }
    else
    {
      op->vtkLabelPlacementMapper::OutputTraversedBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShape(temp0);
    }
    else
    {
      op->vtkLabelPlacementMapper::SetShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetShapeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShapeMinValue() :
      op->vtkLabelPlacementMapper::GetShapeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetShapeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShapeMaxValue() :
      op->vtkLabelPlacementMapper::GetShapeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShape() :
      op->vtkLabelPlacementMapper::GetShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetShapeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShapeToNone();
    }
    else
    {
      op->vtkLabelPlacementMapper::SetShapeToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetShapeToRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShapeToRect();
    }
    else
    {
      op->vtkLabelPlacementMapper::SetShapeToRect();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetShapeToRoundedRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToRoundedRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShapeToRoundedRect();
    }
    else
    {
      op->vtkLabelPlacementMapper::SetShapeToRoundedRect();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStyle(temp0);
    }
    else
    {
      op->vtkLabelPlacementMapper::SetStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetStyleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStyleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStyleMinValue() :
      op->vtkLabelPlacementMapper::GetStyleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetStyleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStyleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStyleMaxValue() :
      op->vtkLabelPlacementMapper::GetStyleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStyle() :
      op->vtkLabelPlacementMapper::GetStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetStyleToFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStyleToFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStyleToFilled();
    }
    else
    {
      op->vtkLabelPlacementMapper::SetStyleToFilled();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetStyleToOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStyleToOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStyleToOutline();
    }
    else
    {
      op->vtkLabelPlacementMapper::SetStyleToOutline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetMargin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMargin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMargin(temp0);
    }
    else
    {
      op->vtkLabelPlacementMapper::SetMargin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetMargin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMargin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMargin() :
      op->vtkLabelPlacementMapper::GetMargin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

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
      op->SetBackgroundColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLabelPlacementMapper::SetBackgroundColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLabelPlacementMapper_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundColor(temp0);
    }
    else
    {
      op->vtkLabelPlacementMapper::SetBackgroundColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLabelPlacementMapper_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLabelPlacementMapper_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkLabelPlacementMapper_SetBackgroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return nullptr;
}


static PyObject *
PyvtkLabelPlacementMapper_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor() :
      op->vtkLabelPlacementMapper::GetBackgroundColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_SetBackgroundOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundOpacity(temp0);
    }
    else
    {
      op->vtkLabelPlacementMapper::SetBackgroundOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetBackgroundOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacityMinValue() :
      op->vtkLabelPlacementMapper::GetBackgroundOpacityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetBackgroundOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacityMaxValue() :
      op->vtkLabelPlacementMapper::GetBackgroundOpacityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetBackgroundOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacity() :
      op->vtkLabelPlacementMapper::GetBackgroundOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_GetAnchorTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnchorTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetAnchorTransform() :
      op->vtkLabelPlacementMapper::GetAnchorTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacementMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacementMapper *op = static_cast<vtkLabelPlacementMapper *>(vp);

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
      op->vtkLabelPlacementMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLabelPlacementMapper_Methods[] = {
  {"IsTypeOf", PyvtkLabelPlacementMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLabelPlacementMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLabelPlacementMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLabelPlacementMapper\nC++: static vtkLabelPlacementMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLabelPlacementMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLabelPlacementMapper\nC++: vtkLabelPlacementMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLabelPlacementMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLabelPlacementMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RenderOverlay", PyvtkLabelPlacementMapper_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport, actor:vtkActor2D)\n    -> None\nC++: void RenderOverlay(vtkViewport *viewport, vtkActor2D *actor)\n    override;\n\nDraw non-overlapping labels to the screen.\n"},
  {"SetRenderStrategy", PyvtkLabelPlacementMapper_SetRenderStrategy, METH_VARARGS,
   "SetRenderStrategy(self, s:vtkLabelRenderStrategy) -> None\nC++: virtual void SetRenderStrategy(vtkLabelRenderStrategy *s)\n\nSet the label rendering strategy.\n"},
  {"GetRenderStrategy", PyvtkLabelPlacementMapper_GetRenderStrategy, METH_VARARGS,
   "GetRenderStrategy(self) -> vtkLabelRenderStrategy\nC++: virtual vtkLabelRenderStrategy *GetRenderStrategy()\n\n"},
  {"SetMaximumLabelFraction", PyvtkLabelPlacementMapper_SetMaximumLabelFraction, METH_VARARGS,
   "SetMaximumLabelFraction(self, _arg:float) -> None\nC++: virtual void SetMaximumLabelFraction(double _arg)\n\nThe maximum fraction of the screen that the labels may cover.\nLabel placement stops when this fraction is reached.\n"},
  {"GetMaximumLabelFractionMinValue", PyvtkLabelPlacementMapper_GetMaximumLabelFractionMinValue, METH_VARARGS,
   "GetMaximumLabelFractionMinValue(self) -> float\nC++: virtual double GetMaximumLabelFractionMinValue()\n\n"},
  {"GetMaximumLabelFractionMaxValue", PyvtkLabelPlacementMapper_GetMaximumLabelFractionMaxValue, METH_VARARGS,
   "GetMaximumLabelFractionMaxValue(self) -> float\nC++: virtual double GetMaximumLabelFractionMaxValue()\n\n"},
  {"GetMaximumLabelFraction", PyvtkLabelPlacementMapper_GetMaximumLabelFraction, METH_VARARGS,
   "GetMaximumLabelFraction(self) -> float\nC++: virtual double GetMaximumLabelFraction()\n\n"},
  {"SetIteratorType", PyvtkLabelPlacementMapper_SetIteratorType, METH_VARARGS,
   "SetIteratorType(self, _arg:int) -> None\nC++: virtual void SetIteratorType(int _arg)\n\nThe type of iterator used when traversing the labels. May be\nvtkLabelHierarchy::FRUSTUM or vtkLabelHierarchy::FULL_SORT\n"},
  {"GetIteratorType", PyvtkLabelPlacementMapper_GetIteratorType, METH_VARARGS,
   "GetIteratorType(self) -> int\nC++: virtual int GetIteratorType()\n\n"},
  {"GetPositionsAsNormals", PyvtkLabelPlacementMapper_GetPositionsAsNormals, METH_VARARGS,
   "GetPositionsAsNormals(self) -> bool\nC++: virtual bool GetPositionsAsNormals()\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {"SetPositionsAsNormals", PyvtkLabelPlacementMapper_SetPositionsAsNormals, METH_VARARGS,
   "SetPositionsAsNormals(self, _arg:bool) -> None\nC++: virtual void SetPositionsAsNormals(bool _arg)\n\n"},
  {"PositionsAsNormalsOn", PyvtkLabelPlacementMapper_PositionsAsNormalsOn, METH_VARARGS,
   "PositionsAsNormalsOn(self) -> None\nC++: virtual void PositionsAsNormalsOn()\n\n"},
  {"PositionsAsNormalsOff", PyvtkLabelPlacementMapper_PositionsAsNormalsOff, METH_VARARGS,
   "PositionsAsNormalsOff(self) -> None\nC++: virtual void PositionsAsNormalsOff()\n\n"},
  {"GetGeneratePerturbedLabelSpokes", PyvtkLabelPlacementMapper_GetGeneratePerturbedLabelSpokes, METH_VARARGS,
   "GetGeneratePerturbedLabelSpokes(self) -> bool\nC++: virtual bool GetGeneratePerturbedLabelSpokes()\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {"SetGeneratePerturbedLabelSpokes", PyvtkLabelPlacementMapper_SetGeneratePerturbedLabelSpokes, METH_VARARGS,
   "SetGeneratePerturbedLabelSpokes(self, _arg:bool) -> None\nC++: virtual void SetGeneratePerturbedLabelSpokes(bool _arg)\n\n"},
  {"GeneratePerturbedLabelSpokesOn", PyvtkLabelPlacementMapper_GeneratePerturbedLabelSpokesOn, METH_VARARGS,
   "GeneratePerturbedLabelSpokesOn(self) -> None\nC++: virtual void GeneratePerturbedLabelSpokesOn()\n\n"},
  {"GeneratePerturbedLabelSpokesOff", PyvtkLabelPlacementMapper_GeneratePerturbedLabelSpokesOff, METH_VARARGS,
   "GeneratePerturbedLabelSpokesOff(self) -> None\nC++: virtual void GeneratePerturbedLabelSpokesOff()\n\n"},
  {"GetUseDepthBuffer", PyvtkLabelPlacementMapper_GetUseDepthBuffer, METH_VARARGS,
   "GetUseDepthBuffer(self) -> bool\nC++: virtual bool GetUseDepthBuffer()\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {"SetUseDepthBuffer", PyvtkLabelPlacementMapper_SetUseDepthBuffer, METH_VARARGS,
   "SetUseDepthBuffer(self, _arg:bool) -> None\nC++: virtual void SetUseDepthBuffer(bool _arg)\n\n"},
  {"UseDepthBufferOn", PyvtkLabelPlacementMapper_UseDepthBufferOn, METH_VARARGS,
   "UseDepthBufferOn(self) -> None\nC++: virtual void UseDepthBufferOn()\n\n"},
  {"UseDepthBufferOff", PyvtkLabelPlacementMapper_UseDepthBufferOff, METH_VARARGS,
   "UseDepthBufferOff(self) -> None\nC++: virtual void UseDepthBufferOff()\n\n"},
  {"SetPlaceAllLabels", PyvtkLabelPlacementMapper_SetPlaceAllLabels, METH_VARARGS,
   "SetPlaceAllLabels(self, _arg:bool) -> None\nC++: virtual void SetPlaceAllLabels(bool _arg)\n\nTells the placer to place every label regardless of overlap. Off\nby default.\n"},
  {"GetPlaceAllLabels", PyvtkLabelPlacementMapper_GetPlaceAllLabels, METH_VARARGS,
   "GetPlaceAllLabels(self) -> bool\nC++: virtual bool GetPlaceAllLabels()\n\n"},
  {"PlaceAllLabelsOn", PyvtkLabelPlacementMapper_PlaceAllLabelsOn, METH_VARARGS,
   "PlaceAllLabelsOn(self) -> None\nC++: virtual void PlaceAllLabelsOn()\n\n"},
  {"PlaceAllLabelsOff", PyvtkLabelPlacementMapper_PlaceAllLabelsOff, METH_VARARGS,
   "PlaceAllLabelsOff(self) -> None\nC++: virtual void PlaceAllLabelsOff()\n\n"},
  {"SetOutputTraversedBounds", PyvtkLabelPlacementMapper_SetOutputTraversedBounds, METH_VARARGS,
   "SetOutputTraversedBounds(self, _arg:bool) -> None\nC++: virtual void SetOutputTraversedBounds(bool _arg)\n\nWhether to render traversed bounds. Off by default.\n"},
  {"GetOutputTraversedBounds", PyvtkLabelPlacementMapper_GetOutputTraversedBounds, METH_VARARGS,
   "GetOutputTraversedBounds(self) -> bool\nC++: virtual bool GetOutputTraversedBounds()\n\n"},
  {"OutputTraversedBoundsOn", PyvtkLabelPlacementMapper_OutputTraversedBoundsOn, METH_VARARGS,
   "OutputTraversedBoundsOn(self) -> None\nC++: virtual void OutputTraversedBoundsOn()\n\n"},
  {"OutputTraversedBoundsOff", PyvtkLabelPlacementMapper_OutputTraversedBoundsOff, METH_VARARGS,
   "OutputTraversedBoundsOff(self) -> None\nC++: virtual void OutputTraversedBoundsOff()\n\n"},
  {"SetShape", PyvtkLabelPlacementMapper_SetShape, METH_VARARGS,
   "SetShape(self, _arg:int) -> None\nC++: virtual void SetShape(int _arg)\n\nThe shape of the label background, should be one of the values in\nthe LabelShape enumeration.\n"},
  {"GetShapeMinValue", PyvtkLabelPlacementMapper_GetShapeMinValue, METH_VARARGS,
   "GetShapeMinValue(self) -> int\nC++: virtual int GetShapeMinValue()\n\n"},
  {"GetShapeMaxValue", PyvtkLabelPlacementMapper_GetShapeMaxValue, METH_VARARGS,
   "GetShapeMaxValue(self) -> int\nC++: virtual int GetShapeMaxValue()\n\n"},
  {"GetShape", PyvtkLabelPlacementMapper_GetShape, METH_VARARGS,
   "GetShape(self) -> int\nC++: virtual int GetShape()\n\n"},
  {"SetShapeToNone", PyvtkLabelPlacementMapper_SetShapeToNone, METH_VARARGS,
   "SetShapeToNone(self) -> None\nC++: virtual void SetShapeToNone()\n\n"},
  {"SetShapeToRect", PyvtkLabelPlacementMapper_SetShapeToRect, METH_VARARGS,
   "SetShapeToRect(self) -> None\nC++: virtual void SetShapeToRect()\n\n"},
  {"SetShapeToRoundedRect", PyvtkLabelPlacementMapper_SetShapeToRoundedRect, METH_VARARGS,
   "SetShapeToRoundedRect(self) -> None\nC++: virtual void SetShapeToRoundedRect()\n\n"},
  {"SetStyle", PyvtkLabelPlacementMapper_SetStyle, METH_VARARGS,
   "SetStyle(self, _arg:int) -> None\nC++: virtual void SetStyle(int _arg)\n\nThe style of the label background shape, should be one of the\nvalues in the LabelStyle enumeration.\n"},
  {"GetStyleMinValue", PyvtkLabelPlacementMapper_GetStyleMinValue, METH_VARARGS,
   "GetStyleMinValue(self) -> int\nC++: virtual int GetStyleMinValue()\n\n"},
  {"GetStyleMaxValue", PyvtkLabelPlacementMapper_GetStyleMaxValue, METH_VARARGS,
   "GetStyleMaxValue(self) -> int\nC++: virtual int GetStyleMaxValue()\n\n"},
  {"GetStyle", PyvtkLabelPlacementMapper_GetStyle, METH_VARARGS,
   "GetStyle(self) -> int\nC++: virtual int GetStyle()\n\n"},
  {"SetStyleToFilled", PyvtkLabelPlacementMapper_SetStyleToFilled, METH_VARARGS,
   "SetStyleToFilled(self) -> None\nC++: virtual void SetStyleToFilled()\n\n"},
  {"SetStyleToOutline", PyvtkLabelPlacementMapper_SetStyleToOutline, METH_VARARGS,
   "SetStyleToOutline(self) -> None\nC++: virtual void SetStyleToOutline()\n\n"},
  {"SetMargin", PyvtkLabelPlacementMapper_SetMargin, METH_VARARGS,
   "SetMargin(self, _arg:float) -> None\nC++: virtual void SetMargin(double _arg)\n\nThe size of the margin on the label background shape. Default is\n5.\n"},
  {"GetMargin", PyvtkLabelPlacementMapper_GetMargin, METH_VARARGS,
   "GetMargin(self) -> float\nC++: virtual double GetMargin()\n\n"},
  {"SetBackgroundColor", PyvtkLabelPlacementMapper_SetBackgroundColor, METH_VARARGS,
   "SetBackgroundColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetBackgroundColor(double _arg1, double _arg2,\n    double _arg3)\nSetBackgroundColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetBackgroundColor(const double _arg[3])\n\nThe color of the background shape.\n"},
  {"GetBackgroundColor", PyvtkLabelPlacementMapper_GetBackgroundColor, METH_VARARGS,
   "GetBackgroundColor(self) -> (float, float, float)\nC++: virtual double *GetBackgroundColor()\n\n"},
  {"SetBackgroundOpacity", PyvtkLabelPlacementMapper_SetBackgroundOpacity, METH_VARARGS,
   "SetBackgroundOpacity(self, _arg:float) -> None\nC++: virtual void SetBackgroundOpacity(double _arg)\n\nThe opacity of the background shape.\n"},
  {"GetBackgroundOpacityMinValue", PyvtkLabelPlacementMapper_GetBackgroundOpacityMinValue, METH_VARARGS,
   "GetBackgroundOpacityMinValue(self) -> float\nC++: virtual double GetBackgroundOpacityMinValue()\n\n"},
  {"GetBackgroundOpacityMaxValue", PyvtkLabelPlacementMapper_GetBackgroundOpacityMaxValue, METH_VARARGS,
   "GetBackgroundOpacityMaxValue(self) -> float\nC++: virtual double GetBackgroundOpacityMaxValue()\n\n"},
  {"GetBackgroundOpacity", PyvtkLabelPlacementMapper_GetBackgroundOpacity, METH_VARARGS,
   "GetBackgroundOpacity(self) -> float\nC++: virtual double GetBackgroundOpacity()\n\n"},
  {"GetAnchorTransform", PyvtkLabelPlacementMapper_GetAnchorTransform, METH_VARARGS,
   "GetAnchorTransform(self) -> vtkCoordinate\nC++: virtual vtkCoordinate *GetAnchorTransform()\n\nGet the transform for the anchor points.\n"},
  {"ReleaseGraphicsResources", PyvtkLabelPlacementMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLabelPlacementMapper_Doc =
  "vtkLabelPlacementMapper - Places and renders non-overlapping labels.\n\n"
  "Superclass: vtkMapper2D\n\n"
  "To use this mapper, first send your data through\n"
  "vtkPointSetToLabelHierarchy, which takes a set of points, associates\n"
  "special arrays to the points (label, priority, etc.), and produces a\n"
  "prioritized spatial tree of labels.\n\n"
  "This mapper then takes that hierarchy (or hierarchies) as input, and\n"
  "every frame will decide which labels and/or icons to place in order\n"
  "of priority, and will render only those labels/icons. A label render\n"
  "strategy is used to render the labels, and can use e.g. FreeType or\n"
  "Qt for rendering.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLabelPlacementMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLabel.vtkLabelPlacementMapper", // tp_name
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
  PyvtkLabelPlacementMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLabelPlacementMapper_StaticNew()
{
  return vtkLabelPlacementMapper::New();
}

PyObject *PyvtkLabelPlacementMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLabelPlacementMapper_Type, PyvtkLabelPlacementMapper_Methods,
    "vtkLabelPlacementMapper",
 &PyvtkLabelPlacementMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMapper2D");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkLabelPlacementMapper_LabelShape_Type);
  PyVTKEnum_Add(&PyvtkLabelPlacementMapper_LabelShape_Type, "vtkLabelPlacementMapper.LabelShape");

  o = (PyObject *)&PyvtkLabelPlacementMapper_LabelShape_Type;
  if (PyDict_SetItemString(d, "LabelShape", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkLabelPlacementMapper_LabelStyle_Type);
  PyVTKEnum_Add(&PyvtkLabelPlacementMapper_LabelStyle_Type, "vtkLabelPlacementMapper.LabelStyle");

  o = (PyObject *)&PyvtkLabelPlacementMapper_LabelStyle_Type;
  if (PyDict_SetItemString(d, "LabelStyle", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkLabelPlacementMapper::LabelShape cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "NONE", vtkLabelPlacementMapper::NONE },
        { "RECT", vtkLabelPlacementMapper::RECT },
        { "ROUNDED_RECT", vtkLabelPlacementMapper::ROUNDED_RECT },
        { "NUMBER_OF_LABEL_SHAPES", vtkLabelPlacementMapper::NUMBER_OF_LABEL_SHAPES },
      };

    o = PyvtkLabelPlacementMapper_LabelShape_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkLabelPlacementMapper::LabelStyle cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "FILLED", vtkLabelPlacementMapper::FILLED },
        { "OUTLINE", vtkLabelPlacementMapper::OUTLINE },
        { "NUMBER_OF_LABEL_STYLES", vtkLabelPlacementMapper::NUMBER_OF_LABEL_STYLES },
      };

    o = PyvtkLabelPlacementMapper_LabelStyle_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLabelPlacementMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLabelPlacementMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLabelPlacementMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

