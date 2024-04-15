// python wrapper for vtkLabelPlacer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLabelPlacer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLabelPlacer(PyObject *dict); }
extern "C" { PyObject *PyvtkLabelPlacer_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLabelPlacer_LabelGravity_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLabel.vtkLabelPlacer.LabelGravity", // tp_name
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
PyObject *PyvtkLabelPlacer_LabelGravity_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkLabelPlacer_LabelGravity_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLabelPlacer_OutputCoordinates_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLabel.vtkLabelPlacer.OutputCoordinates", // tp_name
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
PyObject *PyvtkLabelPlacer_OutputCoordinates_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkLabelPlacer_OutputCoordinates_Type, static_cast<int>(val));
}


static PyObject *
PyvtkLabelPlacer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLabelPlacer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabelPlacer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLabelPlacer *tempr = vtkLabelPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabelPlacer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabelPlacer::NewInstance());

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
PyvtkLabelPlacer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLabelPlacer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLabelPlacer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkLabelPlacer::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkLabelPlacer::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetAnchorTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnchorTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetAnchorTransform() :
      op->vtkLabelPlacer::GetAnchorTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetGravity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGravity(temp0);
    }
    else
    {
      op->vtkLabelPlacer::SetGravity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetGravity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGravity() :
      op->vtkLabelPlacer::GetGravity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetMaximumLabelFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLabelFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      op->vtkLabelPlacer::SetMaximumLabelFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetMaximumLabelFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLabelFractionMinValue() :
      op->vtkLabelPlacer::GetMaximumLabelFractionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetMaximumLabelFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLabelFractionMaxValue() :
      op->vtkLabelPlacer::GetMaximumLabelFractionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetMaximumLabelFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLabelFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumLabelFraction() :
      op->vtkLabelPlacer::GetMaximumLabelFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetIteratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIteratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      op->vtkLabelPlacer::SetIteratorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetIteratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIteratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIteratorType() :
      op->vtkLabelPlacer::GetIteratorType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkLabelPlacer::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetPositionsAsNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionsAsNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPositionsAsNormals() :
      op->vtkLabelPlacer::GetPositionsAsNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetPositionsAsNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionsAsNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      op->vtkLabelPlacer::SetPositionsAsNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_PositionsAsNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsAsNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PositionsAsNormalsOn();
    }
    else
    {
      op->vtkLabelPlacer::PositionsAsNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_PositionsAsNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsAsNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PositionsAsNormalsOff();
    }
    else
    {
      op->vtkLabelPlacer::PositionsAsNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetGeneratePerturbedLabelSpokes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePerturbedLabelSpokes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePerturbedLabelSpokes() :
      op->vtkLabelPlacer::GetGeneratePerturbedLabelSpokes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetGeneratePerturbedLabelSpokes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePerturbedLabelSpokes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      op->vtkLabelPlacer::SetGeneratePerturbedLabelSpokes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GeneratePerturbedLabelSpokesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePerturbedLabelSpokesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePerturbedLabelSpokesOn();
    }
    else
    {
      op->vtkLabelPlacer::GeneratePerturbedLabelSpokesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GeneratePerturbedLabelSpokesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePerturbedLabelSpokesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePerturbedLabelSpokesOff();
    }
    else
    {
      op->vtkLabelPlacer::GeneratePerturbedLabelSpokesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetUseDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDepthBuffer() :
      op->vtkLabelPlacer::GetUseDepthBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetUseDepthBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      op->vtkLabelPlacer::SetUseDepthBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_UseDepthBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDepthBufferOn();
    }
    else
    {
      op->vtkLabelPlacer::UseDepthBufferOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_UseDepthBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDepthBufferOff();
    }
    else
    {
      op->vtkLabelPlacer::UseDepthBufferOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetOutputTraversedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputTraversedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOutputTraversedBounds() :
      op->vtkLabelPlacer::GetOutputTraversedBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetOutputTraversedBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTraversedBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

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
      op->vtkLabelPlacer::SetOutputTraversedBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_OutputTraversedBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputTraversedBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputTraversedBoundsOn();
    }
    else
    {
      op->vtkLabelPlacer::OutputTraversedBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_OutputTraversedBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputTraversedBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputTraversedBoundsOff();
    }
    else
    {
      op->vtkLabelPlacer::OutputTraversedBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetOutputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputCoordinateSystem() :
      op->vtkLabelPlacer::GetOutputCoordinateSystem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_SetOutputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputCoordinateSystem(temp0);
    }
    else
    {
      op->vtkLabelPlacer::SetOutputCoordinateSystem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetOutputCoordinateSystemMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputCoordinateSystemMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputCoordinateSystemMinValue() :
      op->vtkLabelPlacer::GetOutputCoordinateSystemMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_GetOutputCoordinateSystemMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputCoordinateSystemMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputCoordinateSystemMaxValue() :
      op->vtkLabelPlacer::GetOutputCoordinateSystemMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_OutputCoordinateSystemWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputCoordinateSystemWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputCoordinateSystemWorld();
    }
    else
    {
      op->vtkLabelPlacer::OutputCoordinateSystemWorld();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelPlacer_OutputCoordinateSystemDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputCoordinateSystemDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelPlacer *op = static_cast<vtkLabelPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputCoordinateSystemDisplay();
    }
    else
    {
      op->vtkLabelPlacer::OutputCoordinateSystemDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLabelPlacer_Methods[] = {
  {"IsTypeOf", PyvtkLabelPlacer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLabelPlacer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLabelPlacer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLabelPlacer\nC++: static vtkLabelPlacer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLabelPlacer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLabelPlacer\nC++: vtkLabelPlacer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLabelPlacer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLabelPlacer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetRenderer", PyvtkLabelPlacer_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\n"},
  {"SetRenderer", PyvtkLabelPlacer_SetRenderer, METH_VARARGS,
   "SetRenderer(self, __a:vtkRenderer) -> None\nC++: virtual void SetRenderer(vtkRenderer *)\n\n"},
  {"GetAnchorTransform", PyvtkLabelPlacer_GetAnchorTransform, METH_VARARGS,
   "GetAnchorTransform(self) -> vtkCoordinate\nC++: virtual vtkCoordinate *GetAnchorTransform()\n\n"},
  {"SetGravity", PyvtkLabelPlacer_SetGravity, METH_VARARGS,
   "SetGravity(self, gravity:int) -> None\nC++: virtual void SetGravity(int gravity)\n\nThe placement of the label relative to the anchor point.\n"},
  {"GetGravity", PyvtkLabelPlacer_GetGravity, METH_VARARGS,
   "GetGravity(self) -> int\nC++: virtual int GetGravity()\n\n"},
  {"SetMaximumLabelFraction", PyvtkLabelPlacer_SetMaximumLabelFraction, METH_VARARGS,
   "SetMaximumLabelFraction(self, _arg:float) -> None\nC++: virtual void SetMaximumLabelFraction(double _arg)\n\nThe maximum amount of screen space labels can take up before\nplacement terminates.\n"},
  {"GetMaximumLabelFractionMinValue", PyvtkLabelPlacer_GetMaximumLabelFractionMinValue, METH_VARARGS,
   "GetMaximumLabelFractionMinValue(self) -> float\nC++: virtual double GetMaximumLabelFractionMinValue()\n\n"},
  {"GetMaximumLabelFractionMaxValue", PyvtkLabelPlacer_GetMaximumLabelFractionMaxValue, METH_VARARGS,
   "GetMaximumLabelFractionMaxValue(self) -> float\nC++: virtual double GetMaximumLabelFractionMaxValue()\n\n"},
  {"GetMaximumLabelFraction", PyvtkLabelPlacer_GetMaximumLabelFraction, METH_VARARGS,
   "GetMaximumLabelFraction(self) -> float\nC++: virtual double GetMaximumLabelFraction()\n\n"},
  {"SetIteratorType", PyvtkLabelPlacer_SetIteratorType, METH_VARARGS,
   "SetIteratorType(self, _arg:int) -> None\nC++: virtual void SetIteratorType(int _arg)\n\nThe type of iterator used when traversing the labels. May be\nvtkLabelHierarchy::FRUSTUM or vtkLabelHierarchy::FULL_SORT.\n"},
  {"GetIteratorType", PyvtkLabelPlacer_GetIteratorType, METH_VARARGS,
   "GetIteratorType(self) -> int\nC++: virtual int GetIteratorType()\n\n"},
  {"GetMTime", PyvtkLabelPlacer_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this object's modified time.\n"},
  {"GetPositionsAsNormals", PyvtkLabelPlacer_GetPositionsAsNormals, METH_VARARGS,
   "GetPositionsAsNormals(self) -> bool\nC++: virtual bool GetPositionsAsNormals()\n\nUse label anchor point coordinates as normal vectors and\neliminate those pointing away from the camera. Valid only when\npoints are on a sphere centered at the origin (such as a 3D\ngeographic view). Off by default.\n"},
  {"SetPositionsAsNormals", PyvtkLabelPlacer_SetPositionsAsNormals, METH_VARARGS,
   "SetPositionsAsNormals(self, _arg:bool) -> None\nC++: virtual void SetPositionsAsNormals(bool _arg)\n\n"},
  {"PositionsAsNormalsOn", PyvtkLabelPlacer_PositionsAsNormalsOn, METH_VARARGS,
   "PositionsAsNormalsOn(self) -> None\nC++: virtual void PositionsAsNormalsOn()\n\n"},
  {"PositionsAsNormalsOff", PyvtkLabelPlacer_PositionsAsNormalsOff, METH_VARARGS,
   "PositionsAsNormalsOff(self) -> None\nC++: virtual void PositionsAsNormalsOff()\n\n"},
  {"GetGeneratePerturbedLabelSpokes", PyvtkLabelPlacer_GetGeneratePerturbedLabelSpokes, METH_VARARGS,
   "GetGeneratePerturbedLabelSpokes(self) -> bool\nC++: virtual bool GetGeneratePerturbedLabelSpokes()\n\nEnable drawing spokes (lines) to anchor point coordinates that\nwere perturbed for being coincident with other anchor point\ncoordinates.\n"},
  {"SetGeneratePerturbedLabelSpokes", PyvtkLabelPlacer_SetGeneratePerturbedLabelSpokes, METH_VARARGS,
   "SetGeneratePerturbedLabelSpokes(self, _arg:bool) -> None\nC++: virtual void SetGeneratePerturbedLabelSpokes(bool _arg)\n\n"},
  {"GeneratePerturbedLabelSpokesOn", PyvtkLabelPlacer_GeneratePerturbedLabelSpokesOn, METH_VARARGS,
   "GeneratePerturbedLabelSpokesOn(self) -> None\nC++: virtual void GeneratePerturbedLabelSpokesOn()\n\n"},
  {"GeneratePerturbedLabelSpokesOff", PyvtkLabelPlacer_GeneratePerturbedLabelSpokesOff, METH_VARARGS,
   "GeneratePerturbedLabelSpokesOff(self) -> None\nC++: virtual void GeneratePerturbedLabelSpokesOff()\n\n"},
  {"GetUseDepthBuffer", PyvtkLabelPlacer_GetUseDepthBuffer, METH_VARARGS,
   "GetUseDepthBuffer(self) -> bool\nC++: virtual bool GetUseDepthBuffer()\n\nUse the depth buffer to test each label to see if it should not\nbe displayed if it would be occluded by other objects in the\nscene. Off by default.\n"},
  {"SetUseDepthBuffer", PyvtkLabelPlacer_SetUseDepthBuffer, METH_VARARGS,
   "SetUseDepthBuffer(self, _arg:bool) -> None\nC++: virtual void SetUseDepthBuffer(bool _arg)\n\n"},
  {"UseDepthBufferOn", PyvtkLabelPlacer_UseDepthBufferOn, METH_VARARGS,
   "UseDepthBufferOn(self) -> None\nC++: virtual void UseDepthBufferOn()\n\n"},
  {"UseDepthBufferOff", PyvtkLabelPlacer_UseDepthBufferOff, METH_VARARGS,
   "UseDepthBufferOff(self) -> None\nC++: virtual void UseDepthBufferOff()\n\n"},
  {"GetOutputTraversedBounds", PyvtkLabelPlacer_GetOutputTraversedBounds, METH_VARARGS,
   "GetOutputTraversedBounds(self) -> bool\nC++: virtual bool GetOutputTraversedBounds()\n\nIn the second output, output the geometry of the traversed octree\nnodes.\n"},
  {"SetOutputTraversedBounds", PyvtkLabelPlacer_SetOutputTraversedBounds, METH_VARARGS,
   "SetOutputTraversedBounds(self, _arg:bool) -> None\nC++: virtual void SetOutputTraversedBounds(bool _arg)\n\n"},
  {"OutputTraversedBoundsOn", PyvtkLabelPlacer_OutputTraversedBoundsOn, METH_VARARGS,
   "OutputTraversedBoundsOn(self) -> None\nC++: virtual void OutputTraversedBoundsOn()\n\n"},
  {"OutputTraversedBoundsOff", PyvtkLabelPlacer_OutputTraversedBoundsOff, METH_VARARGS,
   "OutputTraversedBoundsOff(self) -> None\nC++: virtual void OutputTraversedBoundsOff()\n\n"},
  {"GetOutputCoordinateSystem", PyvtkLabelPlacer_GetOutputCoordinateSystem, METH_VARARGS,
   "GetOutputCoordinateSystem(self) -> int\nC++: virtual int GetOutputCoordinateSystem()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {"SetOutputCoordinateSystem", PyvtkLabelPlacer_SetOutputCoordinateSystem, METH_VARARGS,
   "SetOutputCoordinateSystem(self, _arg:int) -> None\nC++: virtual void SetOutputCoordinateSystem(int _arg)\n\n"},
  {"GetOutputCoordinateSystemMinValue", PyvtkLabelPlacer_GetOutputCoordinateSystemMinValue, METH_VARARGS,
   "GetOutputCoordinateSystemMinValue(self) -> int\nC++: virtual int GetOutputCoordinateSystemMinValue()\n\n"},
  {"GetOutputCoordinateSystemMaxValue", PyvtkLabelPlacer_GetOutputCoordinateSystemMaxValue, METH_VARARGS,
   "GetOutputCoordinateSystemMaxValue(self) -> int\nC++: virtual int GetOutputCoordinateSystemMaxValue()\n\n"},
  {"OutputCoordinateSystemWorld", PyvtkLabelPlacer_OutputCoordinateSystemWorld, METH_VARARGS,
   "OutputCoordinateSystemWorld(self) -> None\nC++: void OutputCoordinateSystemWorld()\n\n"},
  {"OutputCoordinateSystemDisplay", PyvtkLabelPlacer_OutputCoordinateSystemDisplay, METH_VARARGS,
   "OutputCoordinateSystemDisplay(self) -> None\nC++: void OutputCoordinateSystemDisplay()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLabelPlacer_Doc =
  "vtkLabelPlacer - place a prioritized hierarchy of labels in screen\nspace\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This class is deprecated and will be removed from VTK in a future\n"
  "release. Use vtkLabelPlacementMapper instead.\n\n"
  "This should probably be a mapper unto itself (given that the polydata\n"
  "output could be large and will realistically always be iterated over\n"
  "exactly once before being tossed for the next frame of the render).\n\n"
  "In any event, it takes as input one (or more, eventually)\n"
  "vtkLabelHierarchies that represent prioritized lists of labels sorted\n"
  "by their placement in space. As output, it provides vtkPolyData\n"
  "containing only VTK_QUAD cells, each representing a single label from\n"
  "the input. Each quadrilateral has cell data indicating what label in\n"
  "the input it corresponds to (via an array named \"LabelId\").\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLabelPlacer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLabel.vtkLabelPlacer", // tp_name
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
  PyvtkLabelPlacer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLabelPlacer_StaticNew()
{
  return vtkLabelPlacer::New();
}

PyObject *PyvtkLabelPlacer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLabelPlacer_Type, PyvtkLabelPlacer_Methods,
    "vtkLabelPlacer",
 &PyvtkLabelPlacer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkLabelPlacer_LabelGravity_Type);
  PyVTKEnum_Add(&PyvtkLabelPlacer_LabelGravity_Type, "vtkLabelPlacer.LabelGravity");

  o = (PyObject *)&PyvtkLabelPlacer_LabelGravity_Type;
  if (PyDict_SetItemString(d, "LabelGravity", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkLabelPlacer_OutputCoordinates_Type);
  PyVTKEnum_Add(&PyvtkLabelPlacer_OutputCoordinates_Type, "vtkLabelPlacer.OutputCoordinates");

  o = (PyObject *)&PyvtkLabelPlacer_OutputCoordinates_Type;
  if (PyDict_SetItemString(d, "OutputCoordinates", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 21; c++)
  {
    typedef vtkLabelPlacer::LabelGravity cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[21] = {
        { "VerticalBottomBit", vtkLabelPlacer::VerticalBottomBit },
        { "VerticalBaselineBit", vtkLabelPlacer::VerticalBaselineBit },
        { "VerticalCenterBit", vtkLabelPlacer::VerticalCenterBit },
        { "VerticalTopBit", vtkLabelPlacer::VerticalTopBit },
        { "HorizontalLeftBit", vtkLabelPlacer::HorizontalLeftBit },
        { "HorizontalCenterBit", vtkLabelPlacer::HorizontalCenterBit },
        { "HorizontalRightBit", vtkLabelPlacer::HorizontalRightBit },
        { "VerticalBitMask", vtkLabelPlacer::VerticalBitMask },
        { "HorizontalBitMask", vtkLabelPlacer::HorizontalBitMask },
        { "LowerLeft", vtkLabelPlacer::LowerLeft },
        { "LowerCenter", vtkLabelPlacer::LowerCenter },
        { "LowerRight", vtkLabelPlacer::LowerRight },
        { "BaselineLeft", vtkLabelPlacer::BaselineLeft },
        { "BaselineCenter", vtkLabelPlacer::BaselineCenter },
        { "BaselineRight", vtkLabelPlacer::BaselineRight },
        { "CenterLeft", vtkLabelPlacer::CenterLeft },
        { "CenterCenter", vtkLabelPlacer::CenterCenter },
        { "CenterRight", vtkLabelPlacer::CenterRight },
        { "UpperLeft", vtkLabelPlacer::UpperLeft },
        { "UpperCenter", vtkLabelPlacer::UpperCenter },
        { "UpperRight", vtkLabelPlacer::UpperRight },
      };

    o = PyvtkLabelPlacer_LabelGravity_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkLabelPlacer::OutputCoordinates cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "WORLD", vtkLabelPlacer::WORLD },
        { "DISPLAY", vtkLabelPlacer::DISPLAY },
      };

    o = PyvtkLabelPlacer_OutputCoordinates_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLabelPlacer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLabelPlacer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLabelPlacer", o) != 0)
  {
    Py_DECREF(o);
  }

}

