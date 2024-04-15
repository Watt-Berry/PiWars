// python wrapper for vtkPCANormalEstimation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPCANormalEstimation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPCANormalEstimation(PyObject *dict); }
extern "C" { PyObject *PyvtkPCANormalEstimation_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPCANormalEstimation_Style_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkPCANormalEstimation.Style", // tp_name
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
PyObject *PyvtkPCANormalEstimation_Style_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPCANormalEstimation_Style_Type, static_cast<int>(val));
}


static PyObject *
PyvtkPCANormalEstimation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPCANormalEstimation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPCANormalEstimation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPCANormalEstimation *tempr = vtkPCANormalEstimation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPCANormalEstimation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPCANormalEstimation::NewInstance());

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
PyvtkPCANormalEstimation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPCANormalEstimation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPCANormalEstimation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetSearchMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSearchMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSearchMode(temp0);
    }
    else
    {
      op->vtkPCANormalEstimation::SetSearchMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_GetSearchMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSearchMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSearchMode() :
      op->vtkPCANormalEstimation::GetSearchMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetSearchModeToKNN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSearchModeToKNN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSearchModeToKNN();
    }
    else
    {
      op->vtkPCANormalEstimation::SetSearchModeToKNN();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetSearchModeToRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSearchModeToRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSearchModeToRadius();
    }
    else
    {
      op->vtkPCANormalEstimation::SetSearchModeToRadius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetSampleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSampleSize(temp0);
    }
    else
    {
      op->vtkPCANormalEstimation::SetSampleSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_GetSampleSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleSizeMinValue() :
      op->vtkPCANormalEstimation::GetSampleSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_GetSampleSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleSizeMaxValue() :
      op->vtkPCANormalEstimation::GetSampleSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_GetSampleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleSize() :
      op->vtkPCANormalEstimation::GetSampleSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkPCANormalEstimation::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkPCANormalEstimation::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetNormalOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalOrientation(temp0);
    }
    else
    {
      op->vtkPCANormalEstimation::SetNormalOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_GetNormalOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalOrientation() :
      op->vtkPCANormalEstimation::GetNormalOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetNormalOrientationToAsComputed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalOrientationToAsComputed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNormalOrientationToAsComputed();
    }
    else
    {
      op->vtkPCANormalEstimation::SetNormalOrientationToAsComputed();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetNormalOrientationToPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalOrientationToPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNormalOrientationToPoint();
    }
    else
    {
      op->vtkPCANormalEstimation::SetNormalOrientationToPoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetNormalOrientationToGraphTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalOrientationToGraphTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNormalOrientationToGraphTraversal();
    }
    else
    {
      op->vtkPCANormalEstimation::SetNormalOrientationToGraphTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetOrientationPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

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
      op->SetOrientationPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPCANormalEstimation::SetOrientationPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPCANormalEstimation_SetOrientationPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationPoint(temp0);
    }
    else
    {
      op->vtkPCANormalEstimation::SetOrientationPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPCANormalEstimation_SetOrientationPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPCANormalEstimation_SetOrientationPoint_s1(self, args);
    case 1:
      return PyvtkPCANormalEstimation_SetOrientationPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrientationPoint");
  return nullptr;
}


static PyObject *
PyvtkPCANormalEstimation_GetOrientationPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientationPoint() :
      op->vtkPCANormalEstimation::GetOrientationPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetFlipNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlipNormals(temp0);
    }
    else
    {
      op->vtkPCANormalEstimation::SetFlipNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_GetFlipNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFlipNormals() :
      op->vtkPCANormalEstimation::GetFlipNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_FlipNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipNormalsOn();
    }
    else
    {
      op->vtkPCANormalEstimation::FlipNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_FlipNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipNormalsOff();
    }
    else
    {
      op->vtkPCANormalEstimation::FlipNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  vtkAbstractPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkPCANormalEstimation::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkPCANormalEstimation::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPCANormalEstimation_Methods[] = {
  {"IsTypeOf", PyvtkPCANormalEstimation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPCANormalEstimation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPCANormalEstimation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPCANormalEstimation\nC++: static vtkPCANormalEstimation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPCANormalEstimation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPCANormalEstimation\nC++: vtkPCANormalEstimation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPCANormalEstimation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPCANormalEstimation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSearchMode", PyvtkPCANormalEstimation_SetSearchMode, METH_VARARGS,
   "SetSearchMode(self, _arg:int) -> None\nC++: virtual void SetSearchMode(int _arg)\n\nConfigure how the filter selects the neighbor points used to\ncalculate the PCA. By default (KNN mode and radius set to 0), K\n(SampleSize) points are selected regardless of their location\nrelative to the sampled point. The radius can also be set to\nensure that a sufficiently large neighborhood is taken into\naccount, if not (i.e. all points fall inside the radius), the\nsecond approach is performed. A second approach is to select\nneighboring points inside a radius (RADIUS), only the\nneighborhood of the sampled point is considered. If K\n(SampleSize) is also set, the number of points found inside the\nradius must be larger than K, if not the first approach is\nperformed. Both approaches give the same results. The first\napproach is faster for uniform point clouds, in other cases, the\nsecond approach is faster.\n"},
  {"GetSearchMode", PyvtkPCANormalEstimation_GetSearchMode, METH_VARARGS,
   "GetSearchMode(self) -> int\nC++: virtual int GetSearchMode()\n\n"},
  {"SetSearchModeToKNN", PyvtkPCANormalEstimation_SetSearchModeToKNN, METH_VARARGS,
   "SetSearchModeToKNN(self) -> None\nC++: void SetSearchModeToKNN()\n\n"},
  {"SetSearchModeToRadius", PyvtkPCANormalEstimation_SetSearchModeToRadius, METH_VARARGS,
   "SetSearchModeToRadius(self) -> None\nC++: void SetSearchModeToRadius()\n\n"},
  {"SetSampleSize", PyvtkPCANormalEstimation_SetSampleSize, METH_VARARGS,
   "SetSampleSize(self, _arg:int) -> None\nC++: virtual void SetSampleSize(int _arg)\n\nFor each sampled point, specify the number of the closest,\nsurrounding points used to estimate the normal (the so called\nk-neighborhood). By default 25 points are used. Smaller numbers\nmay speed performance at the cost of accuracy.\n"},
  {"GetSampleSizeMinValue", PyvtkPCANormalEstimation_GetSampleSizeMinValue, METH_VARARGS,
   "GetSampleSizeMinValue(self) -> int\nC++: virtual int GetSampleSizeMinValue()\n\n"},
  {"GetSampleSizeMaxValue", PyvtkPCANormalEstimation_GetSampleSizeMaxValue, METH_VARARGS,
   "GetSampleSizeMaxValue(self) -> int\nC++: virtual int GetSampleSizeMaxValue()\n\n"},
  {"GetSampleSize", PyvtkPCANormalEstimation_GetSampleSize, METH_VARARGS,
   "GetSampleSize(self) -> int\nC++: virtual int GetSampleSize()\n\n"},
  {"SetRadius", PyvtkPCANormalEstimation_SetRadius, METH_VARARGS,
   "SetRadius(self, _arg:float) -> None\nC++: virtual void SetRadius(double _arg)\n\nFor each sampled point, specify the radius within which the\nsurrounding points used to estimate the normal are selected. By\ndefault a 1 meter radius is used. Smaller radius may speed\nperformance at the cost of accuracy.\n"},
  {"GetRadius", PyvtkPCANormalEstimation_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: virtual double GetRadius()\n\n"},
  {"SetNormalOrientation", PyvtkPCANormalEstimation_SetNormalOrientation, METH_VARARGS,
   "SetNormalOrientation(self, _arg:int) -> None\nC++: virtual void SetNormalOrientation(int _arg)\n\nConfigure how the filter addresses consistency in normal\noreientation. When initially computed using PCA, a point normal\nmay point in the + or - direction, which may not be consistent\nwith neighboring points. To address this, various strategies have\nbeen used to create consistent normals. The simplest approach is\nto do nothing (AsComputed). Another simple approach is to flip\nthe normal based on its direction with respect to a specified\npoint (i.e., point normals will point towrads the specified\npoint). Finally, a full traversal of points across the graph of\nneighboring, connected points produces the best results but is\ncomputationally expensive.\n"},
  {"GetNormalOrientation", PyvtkPCANormalEstimation_GetNormalOrientation, METH_VARARGS,
   "GetNormalOrientation(self) -> int\nC++: virtual int GetNormalOrientation()\n\n"},
  {"SetNormalOrientationToAsComputed", PyvtkPCANormalEstimation_SetNormalOrientationToAsComputed, METH_VARARGS,
   "SetNormalOrientationToAsComputed(self) -> None\nC++: void SetNormalOrientationToAsComputed()\n\n"},
  {"SetNormalOrientationToPoint", PyvtkPCANormalEstimation_SetNormalOrientationToPoint, METH_VARARGS,
   "SetNormalOrientationToPoint(self) -> None\nC++: void SetNormalOrientationToPoint()\n\n"},
  {"SetNormalOrientationToGraphTraversal", PyvtkPCANormalEstimation_SetNormalOrientationToGraphTraversal, METH_VARARGS,
   "SetNormalOrientationToGraphTraversal(self) -> None\nC++: void SetNormalOrientationToGraphTraversal()\n\n"},
  {"SetOrientationPoint", PyvtkPCANormalEstimation_SetOrientationPoint, METH_VARARGS,
   "SetOrientationPoint(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetOrientationPoint(double _arg1, double _arg2,\n    double _arg3)\nSetOrientationPoint(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOrientationPoint(const double _arg[3])\n\nIf the normal orientation is to be consistent with a specified\ndirection, then an orientation point should be set. The sign of\nthe normals will be modified so that they point towards this\npoint. By default, the specified orientation point is (0,0,0).\n"},
  {"GetOrientationPoint", PyvtkPCANormalEstimation_GetOrientationPoint, METH_VARARGS,
   "GetOrientationPoint(self) -> (float, float, float)\nC++: virtual double *GetOrientationPoint()\n\n"},
  {"SetFlipNormals", PyvtkPCANormalEstimation_SetFlipNormals, METH_VARARGS,
   "SetFlipNormals(self, _arg:bool) -> None\nC++: virtual void SetFlipNormals(bool _arg)\n\nThe normal orientation can be flipped by enabling this flag.\n"},
  {"GetFlipNormals", PyvtkPCANormalEstimation_GetFlipNormals, METH_VARARGS,
   "GetFlipNormals(self) -> bool\nC++: virtual bool GetFlipNormals()\n\n"},
  {"FlipNormalsOn", PyvtkPCANormalEstimation_FlipNormalsOn, METH_VARARGS,
   "FlipNormalsOn(self) -> None\nC++: virtual void FlipNormalsOn()\n\n"},
  {"FlipNormalsOff", PyvtkPCANormalEstimation_FlipNormalsOff, METH_VARARGS,
   "FlipNormalsOff(self) -> None\nC++: virtual void FlipNormalsOff()\n\n"},
  {"SetLocator", PyvtkPCANormalEstimation_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkAbstractPointLocator) -> None\nC++: void SetLocator(vtkAbstractPointLocator *locator)\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate points\naround a sample point.\n"},
  {"GetLocator", PyvtkPCANormalEstimation_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkAbstractPointLocator\nC++: virtual vtkAbstractPointLocator *GetLocator()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPCANormalEstimation_Doc =
  "vtkPCANormalEstimation - generate point normals using local tangent\nplanes\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPCANormalEstimation generates point normals using PCA (principal\n"
  "component analysis).  Basically this estimates a local tangent plane\n"
  "around each sample point p by considering a small neighborhood of\n"
  "points around p, and fitting a plane to the neighborhood (via PCA). A\n"
  "good introductory reference is Hoppe's \"Surface reconstruction from\n"
  "unorganized points.\"\n\n"
  "To use this filter, specify a neighborhood size (SampleSize) or/and a\n"
  "neighborhood radius (Radius). This may have to be set via\n"
  "experimentation. Both options can be set with SetSearchMode. If\n"
  "SearchMode is set to KNN, K points (set by SampleSize) are selected\n"
  "regardless of their location. If Radius is also set to a value\n"
  "different from 0, the code checks if the farthest point found (K-th)\n"
  "is inside this radius. In that case, the selection is performed again\n"
  "to return all points inside this radius, indicating that the initial\n"
  "SampleSize was probably too small compared to the cloud density.\n"
  "Otherwise, if the farthest point is outside the radius, the selection\n"
  "is kept unchanged. If SearchMode is set to Radius, the surrounding\n"
  "points are selected inside the radius. If SampleSize is also set to a\n"
  "value greater than 0, the code checks if at least SampleSize (K)\n"
  "points have been selected. Otherwise, the selection is performed\n"
  "again to include SampleSize (K) points, indicating that the initial\n"
  "Radius was probably too small to estimate the normals relative to the\n"
  "low density of the cloud. Default behavior is KNN with no radius\n"
  "checked (radius is null). Both approaches give the same results. The\n"
  "first approach is faster for uniform point clouds, in other cases,\n"
  "the second approach is faster. In addition, the user may optionally\n"
  "specify a point locator (instead of the default locator), which is\n"
  "used to accelerate searches around the sample point. Finally, the\n"
  "user should specify how to generate consistently-oriented normals. As\n"
  "computed by PCA, normals may point in arbitrary +/- orientation,\n"
  "which may not be consistent with neighboring normals. There are three\n"
  "methods to address normal consistency: 1) leave the normals as\n"
  "computed, 2) adjust the +/- sign of the normals so that the normals\n"
  "all point towards a specified point, and 3) perform a traversal of\n"
  "the point cloud and flip neighboring normals so that they are\n"
  "mutually consistent.\n\n"
  "The output of this filter is the same as the input except that a\n"
  "normal per point is produced. (Note that these are unit normals.)\n"
  "While any vtkPointSet type can be provided as input, the output is\n"
  "represented by an explicit representation of points via a\n"
  "vtkPolyData. This output polydata will populate its instance of\n"
  "vtkPoints, but no cells will be defined (i.e., no vtkVertex or\n"
  "vtkPolyVertex are contained in the output).\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkPCACurvatureEstimation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPCANormalEstimation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkPCANormalEstimation", // tp_name
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
  PyvtkPCANormalEstimation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPCANormalEstimation_StaticNew()
{
  return vtkPCANormalEstimation::New();
}

PyObject *PyvtkPCANormalEstimation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPCANormalEstimation_Type, PyvtkPCANormalEstimation_Methods,
    "vtkPCANormalEstimation",
 &PyvtkPCANormalEstimation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPCANormalEstimation_Style_Type);
  PyVTKEnum_Add(&PyvtkPCANormalEstimation_Style_Type, "vtkPCANormalEstimation.Style");

  o = (PyObject *)&PyvtkPCANormalEstimation_Style_Type;
  if (PyDict_SetItemString(d, "Style", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "KNN", vtkPCANormalEstimation::KNN },
        { "RADIUS", vtkPCANormalEstimation::RADIUS },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkPCANormalEstimation::Style cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "AS_COMPUTED", vtkPCANormalEstimation::AS_COMPUTED },
        { "POINT", vtkPCANormalEstimation::POINT },
        { "GRAPH_TRAVERSAL", vtkPCANormalEstimation::GRAPH_TRAVERSAL },
      };

    o = PyvtkPCANormalEstimation_Style_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPCANormalEstimation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPCANormalEstimation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPCANormalEstimation", o) != 0)
  {
    Py_DECREF(o);
  }

}

