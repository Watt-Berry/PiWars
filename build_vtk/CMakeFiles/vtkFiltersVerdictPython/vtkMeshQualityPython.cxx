// python wrapper for vtkMeshQuality
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMeshQuality.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMeshQuality(PyObject *dict); }
extern "C" { PyObject *PyvtkMeshQuality_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMeshQuality_QualityMeasureTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersVerdict.vtkMeshQuality.QualityMeasureTypes", // tp_name
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
PyObject *PyvtkMeshQuality_QualityMeasureTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMeshQuality_QualityMeasureTypes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMeshQuality_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMeshQuality::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMeshQuality::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMeshQuality *tempr = vtkMeshQuality::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMeshQuality *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMeshQuality::NewInstance());

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
PyvtkMeshQuality_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMeshQuality::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMeshQuality::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetSaveCellQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveCellQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSaveCellQuality(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetSaveCellQuality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetSaveCellQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveCellQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSaveCellQuality() :
      op->vtkMeshQuality::GetSaveCellQuality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SaveCellQualityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveCellQualityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveCellQualityOn();
    }
    else
    {
      op->vtkMeshQuality::SaveCellQualityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SaveCellQualityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveCellQualityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveCellQualityOff();
    }
    else
    {
      op->vtkMeshQuality::SaveCellQualityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetLinearApproximation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinearApproximation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLinearApproximation(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetLinearApproximation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetLinearApproximation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinearApproximation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLinearApproximation() :
      op->vtkMeshQuality::GetLinearApproximation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_LinearApproximationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LinearApproximationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LinearApproximationOn();
    }
    else
    {
      op->vtkMeshQuality::LinearApproximationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_LinearApproximationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LinearApproximationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LinearApproximationOff();
    }
    else
    {
      op->vtkMeshQuality::LinearApproximationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasure_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  typedef vtkMeshQuality::QualityMeasureTypes temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkMeshQuality.QualityMeasureTypes"))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasure(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasure_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasure(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMeshQuality_SetTriangleQualityMeasure_Methods[] = {
  {"SetTriangleQualityMeasure", PyvtkMeshQuality_SetTriangleQualityMeasure_s1, METH_VARARGS,
   "@E vtkMeshQuality.QualityMeasureTypes"},
  {"SetTriangleQualityMeasure", PyvtkMeshQuality_SetTriangleQualityMeasure_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasure(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMeshQuality_SetTriangleQualityMeasure_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTriangleQualityMeasure");
  return nullptr;
}


static PyObject *
PyvtkMeshQuality_GetTriangleQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangleQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkMeshQuality::QualityMeasureTypes tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetTriangleQualityMeasure() :
      op->vtkMeshQuality::GetTriangleQualityMeasure());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkMeshQuality_QualityMeasureTypes_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToArea();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToArea();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToEdgeRatio();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToEdgeRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToAspectRatio();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToAspectRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToRadiusRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToRadiusRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToRadiusRatio();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToRadiusRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToAspectFrobenius();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToMinAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToMinAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToMinAngle();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToMinAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToMaxAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToMaxAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToMaxAngle();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToMaxAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToCondition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToCondition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToCondition();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToCondition();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToScaledJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToScaledJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToRelativeSizeSquared(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToRelativeSizeSquared");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToRelativeSizeSquared();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToRelativeSizeSquared();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToShape();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToShape();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToShapeAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToShapeAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToShapeAndSize();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToShapeAndSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToDistortion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToDistortion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToDistortion();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToDistortion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToEquiangleSkew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToEquiangleSkew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToEquiangleSkew();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToEquiangleSkew();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTriangleQualityMeasureToNormalizedInradius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangleQualityMeasureToNormalizedInradius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangleQualityMeasureToNormalizedInradius();
    }
    else
    {
      op->vtkMeshQuality::SetTriangleQualityMeasureToNormalizedInradius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasure_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  typedef vtkMeshQuality::QualityMeasureTypes temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkMeshQuality.QualityMeasureTypes"))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasure(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasure_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasure(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMeshQuality_SetQuadQualityMeasure_Methods[] = {
  {"SetQuadQualityMeasure", PyvtkMeshQuality_SetQuadQualityMeasure_s1, METH_VARARGS,
   "@E vtkMeshQuality.QualityMeasureTypes"},
  {"SetQuadQualityMeasure", PyvtkMeshQuality_SetQuadQualityMeasure_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasure(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMeshQuality_SetQuadQualityMeasure_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetQuadQualityMeasure");
  return nullptr;
}


static PyObject *
PyvtkMeshQuality_GetQuadQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkMeshQuality::QualityMeasureTypes tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetQuadQualityMeasure() :
      op->vtkMeshQuality::GetQuadQualityMeasure());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkMeshQuality_QualityMeasureTypes_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToEdgeRatio();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToEdgeRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToAspectRatio();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToAspectRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToRadiusRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToRadiusRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToRadiusRatio();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToRadiusRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToMedAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToMedAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToMedAspectFrobenius();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToMedAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToMaxAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToMaxAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToMaxAspectFrobenius();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToMaxAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToMaxEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToMaxEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToMaxEdgeRatio();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToMaxEdgeRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToSkew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToSkew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToSkew();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToSkew();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToTaper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToTaper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToTaper();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToTaper();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToWarpage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToWarpage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToWarpage();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToWarpage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToArea();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToArea();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToStretch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToStretch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToStretch();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToStretch();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToMinAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToMinAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToMinAngle();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToMinAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToMaxAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToMaxAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToMaxAngle();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToMaxAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToOddy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToOddy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToOddy();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToOddy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToCondition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToCondition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToCondition();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToCondition();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToScaledJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToScaledJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToShear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToShear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToShear();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToShear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToShape();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToShape();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToRelativeSizeSquared(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToRelativeSizeSquared");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToRelativeSizeSquared();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToRelativeSizeSquared();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToShapeAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToShapeAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToShapeAndSize();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToShapeAndSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToShearAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToShearAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToShearAndSize();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToShearAndSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToDistortion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToDistortion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToDistortion();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToDistortion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetQuadQualityMeasureToEquiangleSkew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadQualityMeasureToEquiangleSkew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQuadQualityMeasureToEquiangleSkew();
    }
    else
    {
      op->vtkMeshQuality::SetQuadQualityMeasureToEquiangleSkew();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasure_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  typedef vtkMeshQuality::QualityMeasureTypes temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkMeshQuality.QualityMeasureTypes"))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasure(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMeshQuality_SetTetQualityMeasure_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasure(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMeshQuality_SetTetQualityMeasure_Methods[] = {
  {"SetTetQualityMeasure", PyvtkMeshQuality_SetTetQualityMeasure_s1, METH_VARARGS,
   "@E vtkMeshQuality.QualityMeasureTypes"},
  {"SetTetQualityMeasure", PyvtkMeshQuality_SetTetQualityMeasure_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMeshQuality_SetTetQualityMeasure(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMeshQuality_SetTetQualityMeasure_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTetQualityMeasure");
  return nullptr;
}


static PyObject *
PyvtkMeshQuality_GetTetQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTetQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkMeshQuality::QualityMeasureTypes tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetTetQualityMeasure() :
      op->vtkMeshQuality::GetTetQualityMeasure());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkMeshQuality_QualityMeasureTypes_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToEdgeRatio();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToEdgeRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToAspectRatio();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToAspectRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToRadiusRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToRadiusRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToRadiusRatio();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToRadiusRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToAspectFrobenius();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToMinAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToMinAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToMinAngle();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToMinAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToCollapseRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToCollapseRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToCollapseRatio();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToCollapseRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToAspectGamma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToAspectGamma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToAspectGamma();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToAspectGamma();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToVolume();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToVolume();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToCondition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToCondition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToCondition();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToCondition();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToScaledJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToScaledJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToShape();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToShape();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToRelativeSizeSquared(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToRelativeSizeSquared");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToRelativeSizeSquared();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToRelativeSizeSquared();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToShapeAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToShapeAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToShapeAndSize();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToShapeAndSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToDistortion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToDistortion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToDistortion();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToDistortion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToEquiangleSkew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToEquiangleSkew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToEquiangleSkew();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToEquiangleSkew();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToEquivolumeSkew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToEquivolumeSkew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToEquivolumeSkew();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToEquivolumeSkew();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToMeanRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToMeanRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToMeanRatio();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToMeanRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToNormalizedInradius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToNormalizedInradius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToNormalizedInradius();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToNormalizedInradius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetTetQualityMeasureToSquishIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetQualityMeasureToSquishIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTetQualityMeasureToSquishIndex();
    }
    else
    {
      op->vtkMeshQuality::SetTetQualityMeasureToSquishIndex();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetPyramidQualityMeasure_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPyramidQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  typedef vtkMeshQuality::QualityMeasureTypes temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkMeshQuality.QualityMeasureTypes"))
  {
    if (ap.IsBound())
    {
      op->SetPyramidQualityMeasure(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetPyramidQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMeshQuality_SetPyramidQualityMeasure_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPyramidQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPyramidQualityMeasure(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetPyramidQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMeshQuality_SetPyramidQualityMeasure_Methods[] = {
  {"SetPyramidQualityMeasure", PyvtkMeshQuality_SetPyramidQualityMeasure_s1, METH_VARARGS,
   "@E vtkMeshQuality.QualityMeasureTypes"},
  {"SetPyramidQualityMeasure", PyvtkMeshQuality_SetPyramidQualityMeasure_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMeshQuality_SetPyramidQualityMeasure(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMeshQuality_SetPyramidQualityMeasure_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPyramidQualityMeasure");
  return nullptr;
}


static PyObject *
PyvtkMeshQuality_GetPyramidQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPyramidQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkMeshQuality::QualityMeasureTypes tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetPyramidQualityMeasure() :
      op->vtkMeshQuality::GetPyramidQualityMeasure());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkMeshQuality_QualityMeasureTypes_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetPyramidQualityMeasureToEquiangleSkew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPyramidQualityMeasureToEquiangleSkew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPyramidQualityMeasureToEquiangleSkew();
    }
    else
    {
      op->vtkMeshQuality::SetPyramidQualityMeasureToEquiangleSkew();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetPyramidQualityMeasureToJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPyramidQualityMeasureToJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPyramidQualityMeasureToJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetPyramidQualityMeasureToJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetPyramidQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPyramidQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPyramidQualityMeasureToScaledJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetPyramidQualityMeasureToScaledJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetPyramidQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPyramidQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPyramidQualityMeasureToShape();
    }
    else
    {
      op->vtkMeshQuality::SetPyramidQualityMeasureToShape();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetPyramidQualityMeasureToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPyramidQualityMeasureToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPyramidQualityMeasureToVolume();
    }
    else
    {
      op->vtkMeshQuality::SetPyramidQualityMeasureToVolume();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetWedgeQualityMeasure_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWedgeQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  typedef vtkMeshQuality::QualityMeasureTypes temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkMeshQuality.QualityMeasureTypes"))
  {
    if (ap.IsBound())
    {
      op->SetWedgeQualityMeasure(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetWedgeQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMeshQuality_SetWedgeQualityMeasure_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWedgeQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWedgeQualityMeasure(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetWedgeQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMeshQuality_SetWedgeQualityMeasure_Methods[] = {
  {"SetWedgeQualityMeasure", PyvtkMeshQuality_SetWedgeQualityMeasure_s1, METH_VARARGS,
   "@E vtkMeshQuality.QualityMeasureTypes"},
  {"SetWedgeQualityMeasure", PyvtkMeshQuality_SetWedgeQualityMeasure_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMeshQuality_SetWedgeQualityMeasure(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMeshQuality_SetWedgeQualityMeasure_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWedgeQualityMeasure");
  return nullptr;
}


static PyObject *
PyvtkMeshQuality_GetWedgeQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWedgeQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkMeshQuality::QualityMeasureTypes tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetWedgeQualityMeasure() :
      op->vtkMeshQuality::GetWedgeQualityMeasure());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkMeshQuality_QualityMeasureTypes_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetWedgeQualityMeasureToCondition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWedgeQualityMeasureToCondition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWedgeQualityMeasureToCondition();
    }
    else
    {
      op->vtkMeshQuality::SetWedgeQualityMeasureToCondition();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetWedgeQualityMeasureToDistortion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWedgeQualityMeasureToDistortion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWedgeQualityMeasureToDistortion();
    }
    else
    {
      op->vtkMeshQuality::SetWedgeQualityMeasureToDistortion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetWedgeQualityMeasureToEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWedgeQualityMeasureToEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWedgeQualityMeasureToEdgeRatio();
    }
    else
    {
      op->vtkMeshQuality::SetWedgeQualityMeasureToEdgeRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetWedgeQualityMeasureToEquiangleSkew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWedgeQualityMeasureToEquiangleSkew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWedgeQualityMeasureToEquiangleSkew();
    }
    else
    {
      op->vtkMeshQuality::SetWedgeQualityMeasureToEquiangleSkew();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetWedgeQualityMeasureToJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWedgeQualityMeasureToJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWedgeQualityMeasureToJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetWedgeQualityMeasureToJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetWedgeQualityMeasureToMaxAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWedgeQualityMeasureToMaxAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWedgeQualityMeasureToMaxAspectFrobenius();
    }
    else
    {
      op->vtkMeshQuality::SetWedgeQualityMeasureToMaxAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetWedgeQualityMeasureToMaxStretch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWedgeQualityMeasureToMaxStretch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWedgeQualityMeasureToMaxStretch();
    }
    else
    {
      op->vtkMeshQuality::SetWedgeQualityMeasureToMaxStretch();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetWedgeQualityMeasureToMeanAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWedgeQualityMeasureToMeanAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWedgeQualityMeasureToMeanAspectFrobenius();
    }
    else
    {
      op->vtkMeshQuality::SetWedgeQualityMeasureToMeanAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetWedgeQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWedgeQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWedgeQualityMeasureToScaledJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetWedgeQualityMeasureToScaledJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetWedgeQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWedgeQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWedgeQualityMeasureToShape();
    }
    else
    {
      op->vtkMeshQuality::SetWedgeQualityMeasureToShape();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetWedgeQualityMeasureToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWedgeQualityMeasureToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWedgeQualityMeasureToVolume();
    }
    else
    {
      op->vtkMeshQuality::SetWedgeQualityMeasureToVolume();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasure_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  typedef vtkMeshQuality::QualityMeasureTypes temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkMeshQuality.QualityMeasureTypes"))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasure(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMeshQuality_SetHexQualityMeasure_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasure(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMeshQuality_SetHexQualityMeasure_Methods[] = {
  {"SetHexQualityMeasure", PyvtkMeshQuality_SetHexQualityMeasure_s1, METH_VARARGS,
   "@E vtkMeshQuality.QualityMeasureTypes"},
  {"SetHexQualityMeasure", PyvtkMeshQuality_SetHexQualityMeasure_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMeshQuality_SetHexQualityMeasure(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMeshQuality_SetHexQualityMeasure_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHexQualityMeasure");
  return nullptr;
}


static PyObject *
PyvtkMeshQuality_GetHexQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHexQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkMeshQuality::QualityMeasureTypes tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetHexQualityMeasure() :
      op->vtkMeshQuality::GetHexQualityMeasure());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkMeshQuality_QualityMeasureTypes_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToEdgeRatio();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToEdgeRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToMedAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToMedAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToMedAspectFrobenius();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToMedAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToMaxAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToMaxAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToMaxAspectFrobenius();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToMaxAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToMaxEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToMaxEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToMaxEdgeRatio();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToMaxEdgeRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToSkew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToSkew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToSkew();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToSkew();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToTaper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToTaper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToTaper();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToTaper();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToVolume();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToVolume();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToStretch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToStretch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToStretch();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToStretch();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToDiagonal();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToDiagonal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToDimension();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToDimension();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToOddy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToOddy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToOddy();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToOddy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToCondition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToCondition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToCondition();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToCondition();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToScaledJacobian();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToScaledJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToShear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToShear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToShear();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToShear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToShape();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToShape();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToRelativeSizeSquared(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToRelativeSizeSquared");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToRelativeSizeSquared();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToRelativeSizeSquared();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToShapeAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToShapeAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToShapeAndSize();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToShapeAndSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToShearAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToShearAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToShearAndSize();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToShearAndSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToDistortion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToDistortion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToDistortion();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToDistortion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToEquiangleSkew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToEquiangleSkew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToEquiangleSkew();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToEquiangleSkew();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetHexQualityMeasureToNodalJacobianRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHexQualityMeasureToNodalJacobianRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHexQualityMeasureToNodalJacobianRatio();
    }
    else
    {
      op->vtkMeshQuality::SetHexQualityMeasureToNodalJacobianRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleArea(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleArea");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleArea(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleEdgeRatio(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleEdgeRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleAspectRatio(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleAspectRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleAspectRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleRadiusRatio(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleRadiusRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleRadiusRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleAspectFrobenius(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleAspectFrobenius");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleMinAngle(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleMinAngle");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleMinAngle(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleMaxAngle(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleMaxAngle");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleMaxAngle(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleCondition(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleCondition");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleCondition(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleScaledJacobian(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleScaledJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleScaledJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleRelativeSizeSquared(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleRelativeSizeSquared");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleRelativeSizeSquared(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleShape(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleShape");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleShape(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleShapeAndSize(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleShapeAndSize");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleShapeAndSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleDistortion(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleDistortion");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleDistortion(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleEquiangleSkew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleEquiangleSkew");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleEquiangleSkew(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TriangleNormalizedInradius(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TriangleNormalizedInradius");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TriangleNormalizedInradius(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadEdgeRatio(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadEdgeRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadAspectRatio(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadAspectRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadAspectRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadRadiusRatio(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadRadiusRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadRadiusRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadMedAspectFrobenius(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadMedAspectFrobenius");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadMedAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadMaxAspectFrobenius(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadMaxAspectFrobenius");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadMaxAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadMinAngle(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadMinAngle");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadMinAngle(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadMaxEdgeRatio(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadMaxEdgeRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadMaxEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadSkew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadSkew");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadSkew(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadTaper(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadTaper");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadTaper(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadWarpage(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadWarpage");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadWarpage(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadArea(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadArea");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadArea(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadStretch(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadStretch");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadStretch(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadMaxAngle(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadMaxAngle");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadMaxAngle(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadOddy(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadOddy");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadOddy(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadCondition(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadCondition");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadCondition(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadJacobian(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadScaledJacobian(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadScaledJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadScaledJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadShear(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadShear");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadShear(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadShape(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadShape");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadShape(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadRelativeSizeSquared(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadRelativeSizeSquared");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadRelativeSizeSquared(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadShapeAndSize(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadShapeAndSize");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadShapeAndSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadShearAndSize(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadShearAndSize");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadShearAndSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadDistortion(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadDistortion");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadDistortion(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_QuadEquiangleSkew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadEquiangleSkew");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::QuadEquiangleSkew(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetEdgeRatio(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetEdgeRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetAspectRatio(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetAspectRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetAspectRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetRadiusRatio(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetRadiusRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetRadiusRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetAspectFrobenius(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetAspectFrobenius");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetMinAngle(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetMinAngle");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetMinAngle(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetCollapseRatio(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetCollapseRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetCollapseRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetAspectGamma(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetAspectGamma");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetAspectGamma(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetVolume(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetVolume");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetVolume(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetCondition(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetCondition");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetCondition(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetJacobian(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetScaledJacobian(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetScaledJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetScaledJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetShape(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetShape");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetShape(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetRelativeSizeSquared(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetRelativeSizeSquared");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetRelativeSizeSquared(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetShapeAndSize(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetShapeAndSize");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetShapeAndSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetDistortion(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetDistortion");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetDistortion(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetEquiangleSkew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetEquiangleSkew");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetEquiangleSkew(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetEquivolumeSkew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetEquivolumeSkew");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetEquivolumeSkew(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetMeanRatio(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetMeanRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetMeanRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetNormalizedInradius(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetNormalizedInradius");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetNormalizedInradius(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_TetSquishIndex(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TetSquishIndex");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::TetSquishIndex(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_PyramidEquiangleSkew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PyramidEquiangleSkew");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::PyramidEquiangleSkew(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_PyramidJacobian(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PyramidJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::PyramidJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_PyramidScaledJacobian(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PyramidScaledJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::PyramidScaledJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_PyramidShape(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PyramidShape");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::PyramidShape(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_PyramidVolume(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PyramidVolume");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::PyramidVolume(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_WedgeCondition(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "WedgeCondition");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::WedgeCondition(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_WedgeDistortion(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "WedgeDistortion");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::WedgeDistortion(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_WedgeEdgeRatio(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "WedgeEdgeRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::WedgeEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_WedgeEquiangleSkew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "WedgeEquiangleSkew");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::WedgeEquiangleSkew(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_WedgeJacobian(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "WedgeJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::WedgeJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_WedgeMaxAspectFrobenius(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "WedgeMaxAspectFrobenius");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::WedgeMaxAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_WedgeMaxStretch(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "WedgeMaxStretch");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::WedgeMaxStretch(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_WedgeMeanAspectFrobenius(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "WedgeMeanAspectFrobenius");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::WedgeMeanAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_WedgeScaledJacobian(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "WedgeScaledJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::WedgeScaledJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_WedgeShape(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "WedgeShape");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::WedgeShape(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_WedgeVolume(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "WedgeVolume");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::WedgeVolume(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexEdgeRatio(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexEdgeRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexMedAspectFrobenius(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexMedAspectFrobenius");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexMedAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexMaxAspectFrobenius(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexMaxAspectFrobenius");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexMaxAspectFrobenius(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexMaxEdgeRatio(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexMaxEdgeRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexMaxEdgeRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexSkew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexSkew");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexSkew(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexTaper(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexTaper");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexTaper(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexVolume(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexVolume");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexVolume(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexStretch(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexStretch");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexStretch(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexDiagonal(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexDiagonal");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexDiagonal(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexDimension(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexDimension");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexDimension(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexOddy(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexOddy");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexOddy(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexCondition(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexCondition");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexCondition(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexJacobian(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexScaledJacobian(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexScaledJacobian");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexScaledJacobian(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexShear(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexShear");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexShear(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexShape(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexShape");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexShape(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexRelativeSizeSquared(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexRelativeSizeSquared");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexRelativeSizeSquared(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexShapeAndSize(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexShapeAndSize");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexShapeAndSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexShearAndSize(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexShearAndSize");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexShearAndSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexDistortion(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexDistortion");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexDistortion(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexEquiangleSkew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexEquiangleSkew");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexEquiangleSkew(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_HexNodalJacobianRatio(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HexNodalJacobianRatio");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = vtkMeshQuality::HexNodalJacobianRatio(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRatio(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRatio() :
      op->vtkMeshQuality::GetRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_RatioOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RatioOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RatioOn();
    }
    else
    {
      op->vtkMeshQuality::RatioOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_RatioOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RatioOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RatioOff();
    }
    else
    {
      op->vtkMeshQuality::RatioOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetVolume(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetVolume."
    " (" "Part of deprecating compatibility mode for this filter" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolume(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetVolume(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetVolume."
    " (" "Part of deprecating compatibility mode for this filter" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVolume() :
      op->vtkMeshQuality::GetVolume());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_VolumeOn(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method VolumeOn."
    " (" "Part of deprecating compatibility mode for this filter" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "VolumeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VolumeOn();
    }
    else
    {
      op->vtkMeshQuality::VolumeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_VolumeOff(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method VolumeOff."
    " (" "Part of deprecating compatibility mode for this filter" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "VolumeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VolumeOff();
    }
    else
    {
      op->vtkMeshQuality::VolumeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_SetCompatibilityMode(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetCompatibilityMode."
    " (" "Deprecating compatibility mode for this filter" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetCompatibilityMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompatibilityMode(temp0);
    }
    else
    {
      op->vtkMeshQuality::SetCompatibilityMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_GetCompatibilityMode(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetCompatibilityMode."
    " (" "Deprecating compatibility mode for this filter" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetCompatibilityMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompatibilityMode() :
      op->vtkMeshQuality::GetCompatibilityMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_CompatibilityModeOn(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method CompatibilityModeOn."
    " (" "Deprecating compatibility mode for this filter" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "CompatibilityModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompatibilityModeOn();
    }
    else
    {
      op->vtkMeshQuality::CompatibilityModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeshQuality_CompatibilityModeOff(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method CompatibilityModeOff."
    " (" "Part of deprecating compatibility mode for this filter" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "CompatibilityModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeshQuality *op = static_cast<vtkMeshQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompatibilityModeOff();
    }
    else
    {
      op->vtkMeshQuality::CompatibilityModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMeshQuality_Methods[] = {
  {"IsTypeOf", PyvtkMeshQuality_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMeshQuality_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMeshQuality_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMeshQuality\nC++: static vtkMeshQuality *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMeshQuality_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMeshQuality\nC++: vtkMeshQuality *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMeshQuality_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMeshQuality_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSaveCellQuality", PyvtkMeshQuality_SetSaveCellQuality, METH_VARARGS,
   "SetSaveCellQuality(self, _arg:int) -> None\nC++: virtual void SetSaveCellQuality(vtkTypeBool _arg)\n\nThis variable controls whether or not cell quality is stored as\ncell data in the resulting mesh or discarded (leaving only the\naggregate quality average of the entire mesh, recorded in the\nFieldData).\n"},
  {"GetSaveCellQuality", PyvtkMeshQuality_GetSaveCellQuality, METH_VARARGS,
   "GetSaveCellQuality(self) -> int\nC++: virtual vtkTypeBool GetSaveCellQuality()\n\n"},
  {"SaveCellQualityOn", PyvtkMeshQuality_SaveCellQualityOn, METH_VARARGS,
   "SaveCellQualityOn(self) -> None\nC++: virtual void SaveCellQualityOn()\n\n"},
  {"SaveCellQualityOff", PyvtkMeshQuality_SaveCellQualityOff, METH_VARARGS,
   "SaveCellQualityOff(self) -> None\nC++: virtual void SaveCellQualityOff()\n\n"},
  {"SetLinearApproximation", PyvtkMeshQuality_SetLinearApproximation, METH_VARARGS,
   "SetLinearApproximation(self, _arg:bool) -> None\nC++: virtual void SetLinearApproximation(bool _arg)\n\nIf set to true, then this filter will output 2 quality arrays\ninstead of one. The second array is names \"Quality (Linear\nApprox)\" and features measure for all non-linear cells in\naddition to the linear ones, but treated like if they were\nlinear.\n\note In the array \"Quality\", any non-linear cell quality is set to\nNaN.\n"},
  {"GetLinearApproximation", PyvtkMeshQuality_GetLinearApproximation, METH_VARARGS,
   "GetLinearApproximation(self) -> bool\nC++: virtual bool GetLinearApproximation()\n\n"},
  {"LinearApproximationOn", PyvtkMeshQuality_LinearApproximationOn, METH_VARARGS,
   "LinearApproximationOn(self) -> None\nC++: virtual void LinearApproximationOn()\n\n"},
  {"LinearApproximationOff", PyvtkMeshQuality_LinearApproximationOff, METH_VARARGS,
   "LinearApproximationOff(self) -> None\nC++: virtual void LinearApproximationOff()\n\n"},
  {"SetTriangleQualityMeasure", PyvtkMeshQuality_SetTriangleQualityMeasure, METH_VARARGS,
   "SetTriangleQualityMeasure(self, _arg:QualityMeasureTypes) -> None\nC++: virtual void SetTriangleQualityMeasure(\n    QualityMeasureTypes _arg)\nSetTriangleQualityMeasure(self, measure:int) -> None\nC++: virtual void SetTriangleQualityMeasure(int measure)\n\nSet/Get the particular estimator used to function the quality of\ntriangles. The default is RADIUS_RATIO and valid values also\ninclude ASPECT_RATIO, ASPECT_FROBENIUS, and EDGE_RATIO,\nMIN_ANGLE, MAX_ANGLE, CONDITION, SCALED_JACOBIAN,\nRELATIVE_SIZE_SQUARED, SHAPE, SHAPE_AND_SIZE, DISTORTION,\nEQUIANGLE_SKEW, and NORMALIZED_INRADIUS.\n"},
  {"GetTriangleQualityMeasure", PyvtkMeshQuality_GetTriangleQualityMeasure, METH_VARARGS,
   "GetTriangleQualityMeasure(self) -> QualityMeasureTypes\nC++: virtual QualityMeasureTypes GetTriangleQualityMeasure()\n\n"},
  {"SetTriangleQualityMeasureToArea", PyvtkMeshQuality_SetTriangleQualityMeasureToArea, METH_VARARGS,
   "SetTriangleQualityMeasureToArea(self) -> None\nC++: void SetTriangleQualityMeasureToArea()\n\n"},
  {"SetTriangleQualityMeasureToEdgeRatio", PyvtkMeshQuality_SetTriangleQualityMeasureToEdgeRatio, METH_VARARGS,
   "SetTriangleQualityMeasureToEdgeRatio(self) -> None\nC++: void SetTriangleQualityMeasureToEdgeRatio()\n\n"},
  {"SetTriangleQualityMeasureToAspectRatio", PyvtkMeshQuality_SetTriangleQualityMeasureToAspectRatio, METH_VARARGS,
   "SetTriangleQualityMeasureToAspectRatio(self) -> None\nC++: void SetTriangleQualityMeasureToAspectRatio()\n\n"},
  {"SetTriangleQualityMeasureToRadiusRatio", PyvtkMeshQuality_SetTriangleQualityMeasureToRadiusRatio, METH_VARARGS,
   "SetTriangleQualityMeasureToRadiusRatio(self) -> None\nC++: void SetTriangleQualityMeasureToRadiusRatio()\n\n"},
  {"SetTriangleQualityMeasureToAspectFrobenius", PyvtkMeshQuality_SetTriangleQualityMeasureToAspectFrobenius, METH_VARARGS,
   "SetTriangleQualityMeasureToAspectFrobenius(self) -> None\nC++: void SetTriangleQualityMeasureToAspectFrobenius()\n\n"},
  {"SetTriangleQualityMeasureToMinAngle", PyvtkMeshQuality_SetTriangleQualityMeasureToMinAngle, METH_VARARGS,
   "SetTriangleQualityMeasureToMinAngle(self) -> None\nC++: void SetTriangleQualityMeasureToMinAngle()\n\n"},
  {"SetTriangleQualityMeasureToMaxAngle", PyvtkMeshQuality_SetTriangleQualityMeasureToMaxAngle, METH_VARARGS,
   "SetTriangleQualityMeasureToMaxAngle(self) -> None\nC++: void SetTriangleQualityMeasureToMaxAngle()\n\n"},
  {"SetTriangleQualityMeasureToCondition", PyvtkMeshQuality_SetTriangleQualityMeasureToCondition, METH_VARARGS,
   "SetTriangleQualityMeasureToCondition(self) -> None\nC++: void SetTriangleQualityMeasureToCondition()\n\n"},
  {"SetTriangleQualityMeasureToScaledJacobian", PyvtkMeshQuality_SetTriangleQualityMeasureToScaledJacobian, METH_VARARGS,
   "SetTriangleQualityMeasureToScaledJacobian(self) -> None\nC++: void SetTriangleQualityMeasureToScaledJacobian()\n\n"},
  {"SetTriangleQualityMeasureToRelativeSizeSquared", PyvtkMeshQuality_SetTriangleQualityMeasureToRelativeSizeSquared, METH_VARARGS,
   "SetTriangleQualityMeasureToRelativeSizeSquared(self) -> None\nC++: void SetTriangleQualityMeasureToRelativeSizeSquared()\n\n"},
  {"SetTriangleQualityMeasureToShape", PyvtkMeshQuality_SetTriangleQualityMeasureToShape, METH_VARARGS,
   "SetTriangleQualityMeasureToShape(self) -> None\nC++: void SetTriangleQualityMeasureToShape()\n\n"},
  {"SetTriangleQualityMeasureToShapeAndSize", PyvtkMeshQuality_SetTriangleQualityMeasureToShapeAndSize, METH_VARARGS,
   "SetTriangleQualityMeasureToShapeAndSize(self) -> None\nC++: void SetTriangleQualityMeasureToShapeAndSize()\n\n"},
  {"SetTriangleQualityMeasureToDistortion", PyvtkMeshQuality_SetTriangleQualityMeasureToDistortion, METH_VARARGS,
   "SetTriangleQualityMeasureToDistortion(self) -> None\nC++: void SetTriangleQualityMeasureToDistortion()\n\n"},
  {"SetTriangleQualityMeasureToEquiangleSkew", PyvtkMeshQuality_SetTriangleQualityMeasureToEquiangleSkew, METH_VARARGS,
   "SetTriangleQualityMeasureToEquiangleSkew(self) -> None\nC++: void SetTriangleQualityMeasureToEquiangleSkew()\n\n"},
  {"SetTriangleQualityMeasureToNormalizedInradius", PyvtkMeshQuality_SetTriangleQualityMeasureToNormalizedInradius, METH_VARARGS,
   "SetTriangleQualityMeasureToNormalizedInradius(self) -> None\nC++: void SetTriangleQualityMeasureToNormalizedInradius()\n\n"},
  {"SetQuadQualityMeasure", PyvtkMeshQuality_SetQuadQualityMeasure, METH_VARARGS,
   "SetQuadQualityMeasure(self, _arg:QualityMeasureTypes) -> None\nC++: virtual void SetQuadQualityMeasure(QualityMeasureTypes _arg)\nSetQuadQualityMeasure(self, measure:int) -> None\nC++: virtual void SetQuadQualityMeasure(int measure)\n\nSet/Get the particular estimator used to measure the quality of\nquadrilaterals. The default is EDGE_RATIO and valid values also\ninclude RADIUS_RATIO, ASPECT_RATIO, MAX_EDGE_RATIO SKEW, TAPER,\nWARPAGE, AREA, STRETCH, MIN_ANGLE, MAX_ANGLE, ODDY, CONDITION,\nJACOBIAN, SCALED_JACOBIAN, SHEAR, SHAPE, RELATIVE_SIZE_SQUARED,\nSHAPE_AND_SIZE, SHEAR_AND_SIZE, DISTORTION, and EQUIANGLE_SKEW.\n\nScope: Except for EDGE_RATIO, these estimators are intended for\nplanar quadrilaterals only; use at your own risk if you really\nwant to assess non-planar quadrilateral quality with those.\n"},
  {"GetQuadQualityMeasure", PyvtkMeshQuality_GetQuadQualityMeasure, METH_VARARGS,
   "GetQuadQualityMeasure(self) -> QualityMeasureTypes\nC++: virtual QualityMeasureTypes GetQuadQualityMeasure()\n\n"},
  {"SetQuadQualityMeasureToEdgeRatio", PyvtkMeshQuality_SetQuadQualityMeasureToEdgeRatio, METH_VARARGS,
   "SetQuadQualityMeasureToEdgeRatio(self) -> None\nC++: void SetQuadQualityMeasureToEdgeRatio()\n\n"},
  {"SetQuadQualityMeasureToAspectRatio", PyvtkMeshQuality_SetQuadQualityMeasureToAspectRatio, METH_VARARGS,
   "SetQuadQualityMeasureToAspectRatio(self) -> None\nC++: void SetQuadQualityMeasureToAspectRatio()\n\n"},
  {"SetQuadQualityMeasureToRadiusRatio", PyvtkMeshQuality_SetQuadQualityMeasureToRadiusRatio, METH_VARARGS,
   "SetQuadQualityMeasureToRadiusRatio(self) -> None\nC++: void SetQuadQualityMeasureToRadiusRatio()\n\n"},
  {"SetQuadQualityMeasureToMedAspectFrobenius", PyvtkMeshQuality_SetQuadQualityMeasureToMedAspectFrobenius, METH_VARARGS,
   "SetQuadQualityMeasureToMedAspectFrobenius(self) -> None\nC++: void SetQuadQualityMeasureToMedAspectFrobenius()\n\n"},
  {"SetQuadQualityMeasureToMaxAspectFrobenius", PyvtkMeshQuality_SetQuadQualityMeasureToMaxAspectFrobenius, METH_VARARGS,
   "SetQuadQualityMeasureToMaxAspectFrobenius(self) -> None\nC++: void SetQuadQualityMeasureToMaxAspectFrobenius()\n\n"},
  {"SetQuadQualityMeasureToMaxEdgeRatio", PyvtkMeshQuality_SetQuadQualityMeasureToMaxEdgeRatio, METH_VARARGS,
   "SetQuadQualityMeasureToMaxEdgeRatio(self) -> None\nC++: void SetQuadQualityMeasureToMaxEdgeRatio()\n\n"},
  {"SetQuadQualityMeasureToSkew", PyvtkMeshQuality_SetQuadQualityMeasureToSkew, METH_VARARGS,
   "SetQuadQualityMeasureToSkew(self) -> None\nC++: void SetQuadQualityMeasureToSkew()\n\n"},
  {"SetQuadQualityMeasureToTaper", PyvtkMeshQuality_SetQuadQualityMeasureToTaper, METH_VARARGS,
   "SetQuadQualityMeasureToTaper(self) -> None\nC++: void SetQuadQualityMeasureToTaper()\n\n"},
  {"SetQuadQualityMeasureToWarpage", PyvtkMeshQuality_SetQuadQualityMeasureToWarpage, METH_VARARGS,
   "SetQuadQualityMeasureToWarpage(self) -> None\nC++: void SetQuadQualityMeasureToWarpage()\n\n"},
  {"SetQuadQualityMeasureToArea", PyvtkMeshQuality_SetQuadQualityMeasureToArea, METH_VARARGS,
   "SetQuadQualityMeasureToArea(self) -> None\nC++: void SetQuadQualityMeasureToArea()\n\n"},
  {"SetQuadQualityMeasureToStretch", PyvtkMeshQuality_SetQuadQualityMeasureToStretch, METH_VARARGS,
   "SetQuadQualityMeasureToStretch(self) -> None\nC++: void SetQuadQualityMeasureToStretch()\n\n"},
  {"SetQuadQualityMeasureToMinAngle", PyvtkMeshQuality_SetQuadQualityMeasureToMinAngle, METH_VARARGS,
   "SetQuadQualityMeasureToMinAngle(self) -> None\nC++: void SetQuadQualityMeasureToMinAngle()\n\n"},
  {"SetQuadQualityMeasureToMaxAngle", PyvtkMeshQuality_SetQuadQualityMeasureToMaxAngle, METH_VARARGS,
   "SetQuadQualityMeasureToMaxAngle(self) -> None\nC++: void SetQuadQualityMeasureToMaxAngle()\n\n"},
  {"SetQuadQualityMeasureToOddy", PyvtkMeshQuality_SetQuadQualityMeasureToOddy, METH_VARARGS,
   "SetQuadQualityMeasureToOddy(self) -> None\nC++: void SetQuadQualityMeasureToOddy()\n\n"},
  {"SetQuadQualityMeasureToCondition", PyvtkMeshQuality_SetQuadQualityMeasureToCondition, METH_VARARGS,
   "SetQuadQualityMeasureToCondition(self) -> None\nC++: void SetQuadQualityMeasureToCondition()\n\n"},
  {"SetQuadQualityMeasureToJacobian", PyvtkMeshQuality_SetQuadQualityMeasureToJacobian, METH_VARARGS,
   "SetQuadQualityMeasureToJacobian(self) -> None\nC++: void SetQuadQualityMeasureToJacobian()\n\n"},
  {"SetQuadQualityMeasureToScaledJacobian", PyvtkMeshQuality_SetQuadQualityMeasureToScaledJacobian, METH_VARARGS,
   "SetQuadQualityMeasureToScaledJacobian(self) -> None\nC++: void SetQuadQualityMeasureToScaledJacobian()\n\n"},
  {"SetQuadQualityMeasureToShear", PyvtkMeshQuality_SetQuadQualityMeasureToShear, METH_VARARGS,
   "SetQuadQualityMeasureToShear(self) -> None\nC++: void SetQuadQualityMeasureToShear()\n\n"},
  {"SetQuadQualityMeasureToShape", PyvtkMeshQuality_SetQuadQualityMeasureToShape, METH_VARARGS,
   "SetQuadQualityMeasureToShape(self) -> None\nC++: void SetQuadQualityMeasureToShape()\n\n"},
  {"SetQuadQualityMeasureToRelativeSizeSquared", PyvtkMeshQuality_SetQuadQualityMeasureToRelativeSizeSquared, METH_VARARGS,
   "SetQuadQualityMeasureToRelativeSizeSquared(self) -> None\nC++: void SetQuadQualityMeasureToRelativeSizeSquared()\n\n"},
  {"SetQuadQualityMeasureToShapeAndSize", PyvtkMeshQuality_SetQuadQualityMeasureToShapeAndSize, METH_VARARGS,
   "SetQuadQualityMeasureToShapeAndSize(self) -> None\nC++: void SetQuadQualityMeasureToShapeAndSize()\n\n"},
  {"SetQuadQualityMeasureToShearAndSize", PyvtkMeshQuality_SetQuadQualityMeasureToShearAndSize, METH_VARARGS,
   "SetQuadQualityMeasureToShearAndSize(self) -> None\nC++: void SetQuadQualityMeasureToShearAndSize()\n\n"},
  {"SetQuadQualityMeasureToDistortion", PyvtkMeshQuality_SetQuadQualityMeasureToDistortion, METH_VARARGS,
   "SetQuadQualityMeasureToDistortion(self) -> None\nC++: void SetQuadQualityMeasureToDistortion()\n\n"},
  {"SetQuadQualityMeasureToEquiangleSkew", PyvtkMeshQuality_SetQuadQualityMeasureToEquiangleSkew, METH_VARARGS,
   "SetQuadQualityMeasureToEquiangleSkew(self) -> None\nC++: void SetQuadQualityMeasureToEquiangleSkew()\n\n"},
  {"SetTetQualityMeasure", PyvtkMeshQuality_SetTetQualityMeasure, METH_VARARGS,
   "SetTetQualityMeasure(self, _arg:QualityMeasureTypes) -> None\nC++: virtual void SetTetQualityMeasure(QualityMeasureTypes _arg)\nSetTetQualityMeasure(self, measure:int) -> None\nC++: virtual void SetTetQualityMeasure(int measure)\n\nSet/Get the particular estimator used to measure the quality of\ntetrahedra. The default is RADIUS_RATIO and valid values also\ninclude ASPECT_RATIO, ASPECT_FROBENIUS, EDGE_RATIO,\nCOLLAPSE_RATIO, ASPECT_GAMMA, VOLUME, CONDITION, JACOBIAN,\nSCALED_JACOBIAN, SHAPE, RELATIVE_SIZE_SQUARED, SHAPE_AND_SIZE,\nDISTORTION, EQUIANGLE_SKEW, EQUIVOLUME_SKEW, MEAN_RATIO,\nNORMALIZED_INRADIUS, and SQUISH_INDEX.\n"},
  {"GetTetQualityMeasure", PyvtkMeshQuality_GetTetQualityMeasure, METH_VARARGS,
   "GetTetQualityMeasure(self) -> QualityMeasureTypes\nC++: virtual QualityMeasureTypes GetTetQualityMeasure()\n\n"},
  {"SetTetQualityMeasureToEdgeRatio", PyvtkMeshQuality_SetTetQualityMeasureToEdgeRatio, METH_VARARGS,
   "SetTetQualityMeasureToEdgeRatio(self) -> None\nC++: void SetTetQualityMeasureToEdgeRatio()\n\n"},
  {"SetTetQualityMeasureToAspectRatio", PyvtkMeshQuality_SetTetQualityMeasureToAspectRatio, METH_VARARGS,
   "SetTetQualityMeasureToAspectRatio(self) -> None\nC++: void SetTetQualityMeasureToAspectRatio()\n\n"},
  {"SetTetQualityMeasureToRadiusRatio", PyvtkMeshQuality_SetTetQualityMeasureToRadiusRatio, METH_VARARGS,
   "SetTetQualityMeasureToRadiusRatio(self) -> None\nC++: void SetTetQualityMeasureToRadiusRatio()\n\n"},
  {"SetTetQualityMeasureToAspectFrobenius", PyvtkMeshQuality_SetTetQualityMeasureToAspectFrobenius, METH_VARARGS,
   "SetTetQualityMeasureToAspectFrobenius(self) -> None\nC++: void SetTetQualityMeasureToAspectFrobenius()\n\n"},
  {"SetTetQualityMeasureToMinAngle", PyvtkMeshQuality_SetTetQualityMeasureToMinAngle, METH_VARARGS,
   "SetTetQualityMeasureToMinAngle(self) -> None\nC++: void SetTetQualityMeasureToMinAngle()\n\n"},
  {"SetTetQualityMeasureToCollapseRatio", PyvtkMeshQuality_SetTetQualityMeasureToCollapseRatio, METH_VARARGS,
   "SetTetQualityMeasureToCollapseRatio(self) -> None\nC++: void SetTetQualityMeasureToCollapseRatio()\n\n"},
  {"SetTetQualityMeasureToAspectGamma", PyvtkMeshQuality_SetTetQualityMeasureToAspectGamma, METH_VARARGS,
   "SetTetQualityMeasureToAspectGamma(self) -> None\nC++: void SetTetQualityMeasureToAspectGamma()\n\n"},
  {"SetTetQualityMeasureToVolume", PyvtkMeshQuality_SetTetQualityMeasureToVolume, METH_VARARGS,
   "SetTetQualityMeasureToVolume(self) -> None\nC++: void SetTetQualityMeasureToVolume()\n\n"},
  {"SetTetQualityMeasureToCondition", PyvtkMeshQuality_SetTetQualityMeasureToCondition, METH_VARARGS,
   "SetTetQualityMeasureToCondition(self) -> None\nC++: void SetTetQualityMeasureToCondition()\n\n"},
  {"SetTetQualityMeasureToJacobian", PyvtkMeshQuality_SetTetQualityMeasureToJacobian, METH_VARARGS,
   "SetTetQualityMeasureToJacobian(self) -> None\nC++: void SetTetQualityMeasureToJacobian()\n\n"},
  {"SetTetQualityMeasureToScaledJacobian", PyvtkMeshQuality_SetTetQualityMeasureToScaledJacobian, METH_VARARGS,
   "SetTetQualityMeasureToScaledJacobian(self) -> None\nC++: void SetTetQualityMeasureToScaledJacobian()\n\n"},
  {"SetTetQualityMeasureToShape", PyvtkMeshQuality_SetTetQualityMeasureToShape, METH_VARARGS,
   "SetTetQualityMeasureToShape(self) -> None\nC++: void SetTetQualityMeasureToShape()\n\n"},
  {"SetTetQualityMeasureToRelativeSizeSquared", PyvtkMeshQuality_SetTetQualityMeasureToRelativeSizeSquared, METH_VARARGS,
   "SetTetQualityMeasureToRelativeSizeSquared(self) -> None\nC++: void SetTetQualityMeasureToRelativeSizeSquared()\n\n"},
  {"SetTetQualityMeasureToShapeAndSize", PyvtkMeshQuality_SetTetQualityMeasureToShapeAndSize, METH_VARARGS,
   "SetTetQualityMeasureToShapeAndSize(self) -> None\nC++: void SetTetQualityMeasureToShapeAndSize()\n\n"},
  {"SetTetQualityMeasureToDistortion", PyvtkMeshQuality_SetTetQualityMeasureToDistortion, METH_VARARGS,
   "SetTetQualityMeasureToDistortion(self) -> None\nC++: void SetTetQualityMeasureToDistortion()\n\n"},
  {"SetTetQualityMeasureToEquiangleSkew", PyvtkMeshQuality_SetTetQualityMeasureToEquiangleSkew, METH_VARARGS,
   "SetTetQualityMeasureToEquiangleSkew(self) -> None\nC++: void SetTetQualityMeasureToEquiangleSkew()\n\n"},
  {"SetTetQualityMeasureToEquivolumeSkew", PyvtkMeshQuality_SetTetQualityMeasureToEquivolumeSkew, METH_VARARGS,
   "SetTetQualityMeasureToEquivolumeSkew(self) -> None\nC++: void SetTetQualityMeasureToEquivolumeSkew()\n\n"},
  {"SetTetQualityMeasureToMeanRatio", PyvtkMeshQuality_SetTetQualityMeasureToMeanRatio, METH_VARARGS,
   "SetTetQualityMeasureToMeanRatio(self) -> None\nC++: void SetTetQualityMeasureToMeanRatio()\n\n"},
  {"SetTetQualityMeasureToNormalizedInradius", PyvtkMeshQuality_SetTetQualityMeasureToNormalizedInradius, METH_VARARGS,
   "SetTetQualityMeasureToNormalizedInradius(self) -> None\nC++: void SetTetQualityMeasureToNormalizedInradius()\n\n"},
  {"SetTetQualityMeasureToSquishIndex", PyvtkMeshQuality_SetTetQualityMeasureToSquishIndex, METH_VARARGS,
   "SetTetQualityMeasureToSquishIndex(self) -> None\nC++: void SetTetQualityMeasureToSquishIndex()\n\n"},
  {"SetPyramidQualityMeasure", PyvtkMeshQuality_SetPyramidQualityMeasure, METH_VARARGS,
   "SetPyramidQualityMeasure(self, _arg:QualityMeasureTypes) -> None\nC++: virtual void SetPyramidQualityMeasure(\n    QualityMeasureTypes _arg)\nSetPyramidQualityMeasure(self, measure:int) -> None\nC++: virtual void SetPyramidQualityMeasure(int measure)\n\nSet/Get the particular estimator used to measure the quality of\npyramids. The default is SHAPE and valid values also include\nEQUIANGLE_SKEW, JACOBIAN, SCALED_JACOBIAN, and VOLUME.\n"},
  {"GetPyramidQualityMeasure", PyvtkMeshQuality_GetPyramidQualityMeasure, METH_VARARGS,
   "GetPyramidQualityMeasure(self) -> QualityMeasureTypes\nC++: virtual QualityMeasureTypes GetPyramidQualityMeasure()\n\n"},
  {"SetPyramidQualityMeasureToEquiangleSkew", PyvtkMeshQuality_SetPyramidQualityMeasureToEquiangleSkew, METH_VARARGS,
   "SetPyramidQualityMeasureToEquiangleSkew(self) -> None\nC++: void SetPyramidQualityMeasureToEquiangleSkew()\n\n"},
  {"SetPyramidQualityMeasureToJacobian", PyvtkMeshQuality_SetPyramidQualityMeasureToJacobian, METH_VARARGS,
   "SetPyramidQualityMeasureToJacobian(self) -> None\nC++: void SetPyramidQualityMeasureToJacobian()\n\n"},
  {"SetPyramidQualityMeasureToScaledJacobian", PyvtkMeshQuality_SetPyramidQualityMeasureToScaledJacobian, METH_VARARGS,
   "SetPyramidQualityMeasureToScaledJacobian(self) -> None\nC++: void SetPyramidQualityMeasureToScaledJacobian()\n\n"},
  {"SetPyramidQualityMeasureToShape", PyvtkMeshQuality_SetPyramidQualityMeasureToShape, METH_VARARGS,
   "SetPyramidQualityMeasureToShape(self) -> None\nC++: void SetPyramidQualityMeasureToShape()\n\n"},
  {"SetPyramidQualityMeasureToVolume", PyvtkMeshQuality_SetPyramidQualityMeasureToVolume, METH_VARARGS,
   "SetPyramidQualityMeasureToVolume(self) -> None\nC++: void SetPyramidQualityMeasureToVolume()\n\n"},
  {"SetWedgeQualityMeasure", PyvtkMeshQuality_SetWedgeQualityMeasure, METH_VARARGS,
   "SetWedgeQualityMeasure(self, _arg:QualityMeasureTypes) -> None\nC++: virtual void SetWedgeQualityMeasure(QualityMeasureTypes _arg)\nSetWedgeQualityMeasure(self, measure:int) -> None\nC++: virtual void SetWedgeQualityMeasure(int measure)\n\nSet/Get the particular estimator used to measure the quality of\nwedges. The default is EDGE_RATIO and valid values also include\nCONDITION, DISTORTION, EQUIANGLE_SKEW, JACOBIAN,\nMAX_ASPECT_FROBENIUS, MAX_STRETCH, MEAN_ASPECT_FROBENIUS,\nSCALED_JACOBIAN, SHAPE, and VOLUME.\n"},
  {"GetWedgeQualityMeasure", PyvtkMeshQuality_GetWedgeQualityMeasure, METH_VARARGS,
   "GetWedgeQualityMeasure(self) -> QualityMeasureTypes\nC++: virtual QualityMeasureTypes GetWedgeQualityMeasure()\n\n"},
  {"SetWedgeQualityMeasureToCondition", PyvtkMeshQuality_SetWedgeQualityMeasureToCondition, METH_VARARGS,
   "SetWedgeQualityMeasureToCondition(self) -> None\nC++: void SetWedgeQualityMeasureToCondition()\n\n"},
  {"SetWedgeQualityMeasureToDistortion", PyvtkMeshQuality_SetWedgeQualityMeasureToDistortion, METH_VARARGS,
   "SetWedgeQualityMeasureToDistortion(self) -> None\nC++: void SetWedgeQualityMeasureToDistortion()\n\n"},
  {"SetWedgeQualityMeasureToEdgeRatio", PyvtkMeshQuality_SetWedgeQualityMeasureToEdgeRatio, METH_VARARGS,
   "SetWedgeQualityMeasureToEdgeRatio(self) -> None\nC++: void SetWedgeQualityMeasureToEdgeRatio()\n\n"},
  {"SetWedgeQualityMeasureToEquiangleSkew", PyvtkMeshQuality_SetWedgeQualityMeasureToEquiangleSkew, METH_VARARGS,
   "SetWedgeQualityMeasureToEquiangleSkew(self) -> None\nC++: void SetWedgeQualityMeasureToEquiangleSkew()\n\n"},
  {"SetWedgeQualityMeasureToJacobian", PyvtkMeshQuality_SetWedgeQualityMeasureToJacobian, METH_VARARGS,
   "SetWedgeQualityMeasureToJacobian(self) -> None\nC++: void SetWedgeQualityMeasureToJacobian()\n\n"},
  {"SetWedgeQualityMeasureToMaxAspectFrobenius", PyvtkMeshQuality_SetWedgeQualityMeasureToMaxAspectFrobenius, METH_VARARGS,
   "SetWedgeQualityMeasureToMaxAspectFrobenius(self) -> None\nC++: void SetWedgeQualityMeasureToMaxAspectFrobenius()\n\n"},
  {"SetWedgeQualityMeasureToMaxStretch", PyvtkMeshQuality_SetWedgeQualityMeasureToMaxStretch, METH_VARARGS,
   "SetWedgeQualityMeasureToMaxStretch(self) -> None\nC++: void SetWedgeQualityMeasureToMaxStretch()\n\n"},
  {"SetWedgeQualityMeasureToMeanAspectFrobenius", PyvtkMeshQuality_SetWedgeQualityMeasureToMeanAspectFrobenius, METH_VARARGS,
   "SetWedgeQualityMeasureToMeanAspectFrobenius(self) -> None\nC++: void SetWedgeQualityMeasureToMeanAspectFrobenius()\n\n"},
  {"SetWedgeQualityMeasureToScaledJacobian", PyvtkMeshQuality_SetWedgeQualityMeasureToScaledJacobian, METH_VARARGS,
   "SetWedgeQualityMeasureToScaledJacobian(self) -> None\nC++: void SetWedgeQualityMeasureToScaledJacobian()\n\n"},
  {"SetWedgeQualityMeasureToShape", PyvtkMeshQuality_SetWedgeQualityMeasureToShape, METH_VARARGS,
   "SetWedgeQualityMeasureToShape(self) -> None\nC++: void SetWedgeQualityMeasureToShape()\n\n"},
  {"SetWedgeQualityMeasureToVolume", PyvtkMeshQuality_SetWedgeQualityMeasureToVolume, METH_VARARGS,
   "SetWedgeQualityMeasureToVolume(self) -> None\nC++: void SetWedgeQualityMeasureToVolume()\n\n"},
  {"SetHexQualityMeasure", PyvtkMeshQuality_SetHexQualityMeasure, METH_VARARGS,
   "SetHexQualityMeasure(self, _arg:QualityMeasureTypes) -> None\nC++: virtual void SetHexQualityMeasure(QualityMeasureTypes _arg)\nSetHexQualityMeasure(self, measure:int) -> None\nC++: virtual void SetHexQualityMeasure(int measure)\n\nSet/Get the particular estimator used to measure the quality of\nhexahedra. The default is MAX_ASPECT_FROBENIUS and valid values\nalso include EDGE_RATIO, MAX_ASPECT_FROBENIUS, MAX_EDGE_RATIO,\nSKEW, TAPER, VOLUME, STRETCH, DIAGONAL, DIMENSION, ODDY,\nCONDITION, JACOBIAN, SCALED_JACOBIAN, SHEAR, SHAPE,\nRELATIVE_SIZE_SQUARED, SHAPE_AND_SIZE, SHEAR_AND_SIZE,\nDISTORTION, EQUIANGLE_SKEW, and NODAL_JACOBIAN_RATIO.\n"},
  {"GetHexQualityMeasure", PyvtkMeshQuality_GetHexQualityMeasure, METH_VARARGS,
   "GetHexQualityMeasure(self) -> QualityMeasureTypes\nC++: virtual QualityMeasureTypes GetHexQualityMeasure()\n\n"},
  {"SetHexQualityMeasureToEdgeRatio", PyvtkMeshQuality_SetHexQualityMeasureToEdgeRatio, METH_VARARGS,
   "SetHexQualityMeasureToEdgeRatio(self) -> None\nC++: void SetHexQualityMeasureToEdgeRatio()\n\n"},
  {"SetHexQualityMeasureToMedAspectFrobenius", PyvtkMeshQuality_SetHexQualityMeasureToMedAspectFrobenius, METH_VARARGS,
   "SetHexQualityMeasureToMedAspectFrobenius(self) -> None\nC++: void SetHexQualityMeasureToMedAspectFrobenius()\n\n"},
  {"SetHexQualityMeasureToMaxAspectFrobenius", PyvtkMeshQuality_SetHexQualityMeasureToMaxAspectFrobenius, METH_VARARGS,
   "SetHexQualityMeasureToMaxAspectFrobenius(self) -> None\nC++: void SetHexQualityMeasureToMaxAspectFrobenius()\n\n"},
  {"SetHexQualityMeasureToMaxEdgeRatio", PyvtkMeshQuality_SetHexQualityMeasureToMaxEdgeRatio, METH_VARARGS,
   "SetHexQualityMeasureToMaxEdgeRatio(self) -> None\nC++: void SetHexQualityMeasureToMaxEdgeRatio()\n\n"},
  {"SetHexQualityMeasureToSkew", PyvtkMeshQuality_SetHexQualityMeasureToSkew, METH_VARARGS,
   "SetHexQualityMeasureToSkew(self) -> None\nC++: void SetHexQualityMeasureToSkew()\n\n"},
  {"SetHexQualityMeasureToTaper", PyvtkMeshQuality_SetHexQualityMeasureToTaper, METH_VARARGS,
   "SetHexQualityMeasureToTaper(self) -> None\nC++: void SetHexQualityMeasureToTaper()\n\n"},
  {"SetHexQualityMeasureToVolume", PyvtkMeshQuality_SetHexQualityMeasureToVolume, METH_VARARGS,
   "SetHexQualityMeasureToVolume(self) -> None\nC++: void SetHexQualityMeasureToVolume()\n\n"},
  {"SetHexQualityMeasureToStretch", PyvtkMeshQuality_SetHexQualityMeasureToStretch, METH_VARARGS,
   "SetHexQualityMeasureToStretch(self) -> None\nC++: void SetHexQualityMeasureToStretch()\n\n"},
  {"SetHexQualityMeasureToDiagonal", PyvtkMeshQuality_SetHexQualityMeasureToDiagonal, METH_VARARGS,
   "SetHexQualityMeasureToDiagonal(self) -> None\nC++: void SetHexQualityMeasureToDiagonal()\n\n"},
  {"SetHexQualityMeasureToDimension", PyvtkMeshQuality_SetHexQualityMeasureToDimension, METH_VARARGS,
   "SetHexQualityMeasureToDimension(self) -> None\nC++: void SetHexQualityMeasureToDimension()\n\n"},
  {"SetHexQualityMeasureToOddy", PyvtkMeshQuality_SetHexQualityMeasureToOddy, METH_VARARGS,
   "SetHexQualityMeasureToOddy(self) -> None\nC++: void SetHexQualityMeasureToOddy()\n\n"},
  {"SetHexQualityMeasureToCondition", PyvtkMeshQuality_SetHexQualityMeasureToCondition, METH_VARARGS,
   "SetHexQualityMeasureToCondition(self) -> None\nC++: void SetHexQualityMeasureToCondition()\n\n"},
  {"SetHexQualityMeasureToJacobian", PyvtkMeshQuality_SetHexQualityMeasureToJacobian, METH_VARARGS,
   "SetHexQualityMeasureToJacobian(self) -> None\nC++: void SetHexQualityMeasureToJacobian()\n\n"},
  {"SetHexQualityMeasureToScaledJacobian", PyvtkMeshQuality_SetHexQualityMeasureToScaledJacobian, METH_VARARGS,
   "SetHexQualityMeasureToScaledJacobian(self) -> None\nC++: void SetHexQualityMeasureToScaledJacobian()\n\n"},
  {"SetHexQualityMeasureToShear", PyvtkMeshQuality_SetHexQualityMeasureToShear, METH_VARARGS,
   "SetHexQualityMeasureToShear(self) -> None\nC++: void SetHexQualityMeasureToShear()\n\n"},
  {"SetHexQualityMeasureToShape", PyvtkMeshQuality_SetHexQualityMeasureToShape, METH_VARARGS,
   "SetHexQualityMeasureToShape(self) -> None\nC++: void SetHexQualityMeasureToShape()\n\n"},
  {"SetHexQualityMeasureToRelativeSizeSquared", PyvtkMeshQuality_SetHexQualityMeasureToRelativeSizeSquared, METH_VARARGS,
   "SetHexQualityMeasureToRelativeSizeSquared(self) -> None\nC++: void SetHexQualityMeasureToRelativeSizeSquared()\n\n"},
  {"SetHexQualityMeasureToShapeAndSize", PyvtkMeshQuality_SetHexQualityMeasureToShapeAndSize, METH_VARARGS,
   "SetHexQualityMeasureToShapeAndSize(self) -> None\nC++: void SetHexQualityMeasureToShapeAndSize()\n\n"},
  {"SetHexQualityMeasureToShearAndSize", PyvtkMeshQuality_SetHexQualityMeasureToShearAndSize, METH_VARARGS,
   "SetHexQualityMeasureToShearAndSize(self) -> None\nC++: void SetHexQualityMeasureToShearAndSize()\n\n"},
  {"SetHexQualityMeasureToDistortion", PyvtkMeshQuality_SetHexQualityMeasureToDistortion, METH_VARARGS,
   "SetHexQualityMeasureToDistortion(self) -> None\nC++: void SetHexQualityMeasureToDistortion()\n\n"},
  {"SetHexQualityMeasureToEquiangleSkew", PyvtkMeshQuality_SetHexQualityMeasureToEquiangleSkew, METH_VARARGS,
   "SetHexQualityMeasureToEquiangleSkew(self) -> None\nC++: void SetHexQualityMeasureToEquiangleSkew()\n\n"},
  {"SetHexQualityMeasureToNodalJacobianRatio", PyvtkMeshQuality_SetHexQualityMeasureToNodalJacobianRatio, METH_VARARGS,
   "SetHexQualityMeasureToNodalJacobianRatio(self) -> None\nC++: void SetHexQualityMeasureToNodalJacobianRatio()\n\n"},
  {"TriangleArea", PyvtkMeshQuality_TriangleArea, METH_VARARGS,
   "TriangleArea(cell:vtkCell) -> float\nC++: static double TriangleArea(vtkCell *cell)\n\nCalculate the area of a triangle.\n"},
  {"TriangleEdgeRatio", PyvtkMeshQuality_TriangleEdgeRatio, METH_VARARGS,
   "TriangleEdgeRatio(cell:vtkCell) -> float\nC++: static double TriangleEdgeRatio(vtkCell *cell)\n\nCalculate the edge ratio of a triangle. The edge ratio of a\ntriangle $t $ is:$\\frac{|t|_\\infty}{|t|_0} $, where $|t|_\\infty $\nand $|t|_0 $ respectively denote the greatest and the smallest\nedge lengths of $t $.\n"},
  {"TriangleAspectRatio", PyvtkMeshQuality_TriangleAspectRatio, METH_VARARGS,
   "TriangleAspectRatio(cell:vtkCell) -> float\nC++: static double TriangleAspectRatio(vtkCell *cell)\n\nCalculate the aspect ratio of a triangle. The aspect ratio of a\ntriangle $t $ is:$\\frac{|t|_\\infty}{2\\sqrt{3}r} $, where\n$|t|_\\infty $ and $r $ respectively denote the greatest edge\nlength and the inradius of $t $.\n"},
  {"TriangleRadiusRatio", PyvtkMeshQuality_TriangleRadiusRatio, METH_VARARGS,
   "TriangleRadiusRatio(cell:vtkCell) -> float\nC++: static double TriangleRadiusRatio(vtkCell *cell)\n\nCalculate the radius ratio of a triangle. The radius ratio of a\ntriangle $t $ is:$\\frac{R}{2r} $, where $R $ and $r $\nrespectively denote the circumradius and the inradius of $t $.\n"},
  {"TriangleAspectFrobenius", PyvtkMeshQuality_TriangleAspectFrobenius, METH_VARARGS,
   "TriangleAspectFrobenius(cell:vtkCell) -> float\nC++: static double TriangleAspectFrobenius(vtkCell *cell)\n\nCalculate the Frobenius condition number of the transformation\nmatrix from an equilateral triangle to a triangle. The Frobenius\naspect of a triangle $t $, when the reference element is\nequilateral, is:$\\frac{|t|^2_2}{2\\sqrt{3}{\\cal A}} $, where\n$|t|^2_2 $ and $\\cal A $ respectively denote the sum of the\nsquared edge lengths and the area of $t $.\n"},
  {"TriangleMinAngle", PyvtkMeshQuality_TriangleMinAngle, METH_VARARGS,
   "TriangleMinAngle(cell:vtkCell) -> float\nC++: static double TriangleMinAngle(vtkCell *cell)\n\nCalculate the minimal (nonoriented) angle of a triangle,\nexpressed in degrees.\n"},
  {"TriangleMaxAngle", PyvtkMeshQuality_TriangleMaxAngle, METH_VARARGS,
   "TriangleMaxAngle(cell:vtkCell) -> float\nC++: static double TriangleMaxAngle(vtkCell *cell)\n\nCalculate the maximal (nonoriented) angle of a triangle,\nexpressed in degrees.\n"},
  {"TriangleCondition", PyvtkMeshQuality_TriangleCondition, METH_VARARGS,
   "TriangleCondition(cell:vtkCell) -> float\nC++: static double TriangleCondition(vtkCell *cell)\n\nCalculate the condition number of a triangle.\n"},
  {"TriangleScaledJacobian", PyvtkMeshQuality_TriangleScaledJacobian, METH_VARARGS,
   "TriangleScaledJacobian(cell:vtkCell) -> float\nC++: static double TriangleScaledJacobian(vtkCell *cell)\n\nCalculate the scaled Jacobian of a triangle.\n"},
  {"TriangleRelativeSizeSquared", PyvtkMeshQuality_TriangleRelativeSizeSquared, METH_VARARGS,
   "TriangleRelativeSizeSquared(cell:vtkCell) -> float\nC++: static double TriangleRelativeSizeSquared(vtkCell *cell)\n\nCalculate the square of the relative size of a triangle.\n\nNote: TriangleRelativeSizeSquared will return 0.0 if the\nMeshQuality filter has NOT been executed, because it relies on\nthe average triangle size.\n"},
  {"TriangleShape", PyvtkMeshQuality_TriangleShape, METH_VARARGS,
   "TriangleShape(cell:vtkCell) -> float\nC++: static double TriangleShape(vtkCell *cell)\n\nCalculate the shape of a triangle.\n"},
  {"TriangleShapeAndSize", PyvtkMeshQuality_TriangleShapeAndSize, METH_VARARGS,
   "TriangleShapeAndSize(cell:vtkCell) -> float\nC++: static double TriangleShapeAndSize(vtkCell *cell)\n\nCalculate the product of shape and relative size of a triangle.\n\nNote: TriangleShapeAndSize will return 0.0 if the MeshQuality\nfilter has NOT been executed, because it relies on the average\ntriangle size.\n"},
  {"TriangleDistortion", PyvtkMeshQuality_TriangleDistortion, METH_VARARGS,
   "TriangleDistortion(cell:vtkCell) -> float\nC++: static double TriangleDistortion(vtkCell *cell)\n\nCalculate the distortion of a triangle.\n"},
  {"TriangleEquiangleSkew", PyvtkMeshQuality_TriangleEquiangleSkew, METH_VARARGS,
   "TriangleEquiangleSkew(cell:vtkCell) -> float\nC++: static double TriangleEquiangleSkew(vtkCell *cell)\n\nCalculate the equiangle skew of a triangle.\n"},
  {"TriangleNormalizedInradius", PyvtkMeshQuality_TriangleNormalizedInradius, METH_VARARGS,
   "TriangleNormalizedInradius(cell:vtkCell) -> float\nC++: static double TriangleNormalizedInradius(vtkCell *cell)\n\nCalculate the normalized in-radius of a triangle. The minimum\nnormalized in-radius of a triangle is the ratio of the minimum\nsub-triangle inner radius to the outer triangle radius.\n"},
  {"QuadEdgeRatio", PyvtkMeshQuality_QuadEdgeRatio, METH_VARARGS,
   "QuadEdgeRatio(cell:vtkCell) -> float\nC++: static double QuadEdgeRatio(vtkCell *cell)\n\nCalculate the edge ratio of a quadrilateral. The edge ratio of a\nquadrilateral $q $ is:$\\frac{|q|_\\infty}{|q|_0} $, where\n$|q|_\\infty $ and $|q|_0 $ respectively denote the greatest and\nthe smallest edge lengths of $q $.\n"},
  {"QuadAspectRatio", PyvtkMeshQuality_QuadAspectRatio, METH_VARARGS,
   "QuadAspectRatio(cell:vtkCell) -> float\nC++: static double QuadAspectRatio(vtkCell *cell)\n\nCalculate the aspect ratio of a planar quadrilateral. The aspect\nratio of a planar quadrilateral $q $\nis:$\\frac{|q|_1|q|_\\infty}{4{\\cal A}} $, where $|q|_1 $,\n$|q|_\\infty $ and ${\\cal A} $ respectively denote the perimeter,\nthe greatest edge length and the area of $q $.\n"},
  {"QuadRadiusRatio", PyvtkMeshQuality_QuadRadiusRatio, METH_VARARGS,
   "QuadRadiusRatio(cell:vtkCell) -> float\nC++: static double QuadRadiusRatio(vtkCell *cell)\n\nCalculate the radius ratio of a planar quadrilateral. The name is\nonly used by analogy with the triangle radius ratio, because in\ngeneral a quadrilateral does not have a circumcircle nor an\nincircle. The radius ratio of a planar quadrilateral $q $\nis:$\\frac{|q|_2h_{\\max}}{\\min_i{\\cal A}_i} $, where $|q|_2 $,\n$h_{\\max} $ and $\\min{\\cal A}_i $ respectively denote the sum of\nthe squared edge lengths, the greatest amongst diagonal and edge\nlengths and the smallest area of the 4 triangles extractable from\n$q $.\n"},
  {"QuadMedAspectFrobenius", PyvtkMeshQuality_QuadMedAspectFrobenius, METH_VARARGS,
   "QuadMedAspectFrobenius(cell:vtkCell) -> float\nC++: static double QuadMedAspectFrobenius(vtkCell *cell)\n\nCalculate the average Frobenius aspect of the 4 corner triangles\nof a planar quadrilateral, when the reference triangle elements\nare right isosceles at the quadrangle vertices. The Frobenius\naspect of a triangle $t $, when the reference element is right\nisosceles at vertex $V $, is:$\\frac{f^2+g^2}{4{\\cal A}} $, where\n$f^2+g^2 $ and $\\cal A $ respectively denote the sum of the\nsquared lengths of the edges attached to $V $ and the area of $t\n$.\n"},
  {"QuadMaxAspectFrobenius", PyvtkMeshQuality_QuadMaxAspectFrobenius, METH_VARARGS,
   "QuadMaxAspectFrobenius(cell:vtkCell) -> float\nC++: static double QuadMaxAspectFrobenius(vtkCell *cell)\n\nCalculate the maximal Frobenius aspect of the 4 corner triangles\nof a planar quadrilateral, when the reference triangle elements\nare right isosceles at the quadrangle vertices. The Frobenius\naspect of a triangle $t $, when the reference element is right\nisosceles at vertex $V $, is:$\\frac{f^2+g^2}{4{\\cal A}} $, where\n$f^2+g^2 $ and $\\cal A $ respectively denote the sum of the\nsquared lengths of the edges attached to $V $ and the area of $t\n$.\n"},
  {"QuadMinAngle", PyvtkMeshQuality_QuadMinAngle, METH_VARARGS,
   "QuadMinAngle(cell:vtkCell) -> float\nC++: static double QuadMinAngle(vtkCell *cell)\n\nCalculate the minimal (nonoriented) angle of a quadrilateral,\nexpressed in degrees.\n"},
  {"QuadMaxEdgeRatio", PyvtkMeshQuality_QuadMaxEdgeRatio, METH_VARARGS,
   "QuadMaxEdgeRatio(cell:vtkCell) -> float\nC++: static double QuadMaxEdgeRatio(vtkCell *cell)\n\nCalculate the maximum edge length ratio of a quadrilateral at\nquad center.\n"},
  {"QuadSkew", PyvtkMeshQuality_QuadSkew, METH_VARARGS,
   "QuadSkew(cell:vtkCell) -> float\nC++: static double QuadSkew(vtkCell *cell)\n\nCalculate the skew of a quadrilateral. The skew of a\nquadrilateral is the maximum |cos A|, where A is the angle\nbetween edges at the quad center.\n"},
  {"QuadTaper", PyvtkMeshQuality_QuadTaper, METH_VARARGS,
   "QuadTaper(cell:vtkCell) -> float\nC++: static double QuadTaper(vtkCell *cell)\n\nCalculate the taper of a quadrilateral. The taper of a\nquadrilateral is the ratio of lengths derived from opposite\nedges.\n"},
  {"QuadWarpage", PyvtkMeshQuality_QuadWarpage, METH_VARARGS,
   "QuadWarpage(cell:vtkCell) -> float\nC++: static double QuadWarpage(vtkCell *cell)\n\nCalculate the warpage of a quadrilateral. The warpage of a\nquadrilateral is the cosine of Minimum Dihedral Angle formed by\nPlanes Intersecting in Diagonals.\n"},
  {"QuadArea", PyvtkMeshQuality_QuadArea, METH_VARARGS,
   "QuadArea(cell:vtkCell) -> float\nC++: static double QuadArea(vtkCell *cell)\n\nCalculate the area of a quadrilateral. The area of a\nquadrilateral is the Jacobian at quad center.\n"},
  {"QuadStretch", PyvtkMeshQuality_QuadStretch, METH_VARARGS,
   "QuadStretch(cell:vtkCell) -> float\nC++: static double QuadStretch(vtkCell *cell)\n\nCalculate the stretch of a quadrilateral. The stretch of a\nquadrilateral is Sqrt(2) * minimum edge length / maximum diagonal\nlength.\n"},
  {"QuadMaxAngle", PyvtkMeshQuality_QuadMaxAngle, METH_VARARGS,
   "QuadMaxAngle(cell:vtkCell) -> float\nC++: static double QuadMaxAngle(vtkCell *cell)\n\nCalculate the maximum (nonoriented) angle of a quadrilateral,\nexpressed in degrees.\n"},
  {"QuadOddy", PyvtkMeshQuality_QuadOddy, METH_VARARGS,
   "QuadOddy(cell:vtkCell) -> float\nC++: static double QuadOddy(vtkCell *cell)\n\nCalculate the oddy of a quadrilateral. The oddy of a\nquadrilateral is the general distortion measure based on left\nCauchy-Green Tensor.\n"},
  {"QuadCondition", PyvtkMeshQuality_QuadCondition, METH_VARARGS,
   "QuadCondition(cell:vtkCell) -> float\nC++: static double QuadCondition(vtkCell *cell)\n\nCalculate the condition number of a quadrilateral. The condition\nnumber of a quadrilateral is the (maximum) condition number of\nthe Jacobian matrix at the 4 corners.\n"},
  {"QuadJacobian", PyvtkMeshQuality_QuadJacobian, METH_VARARGS,
   "QuadJacobian(cell:vtkCell) -> float\nC++: static double QuadJacobian(vtkCell *cell)\n\nCalculate the Jacobian of a quadrilateral. The Jacobian of a\nquadrilateral is the minimum point-wise volume of local map at 4\ncorners & center of quad.\n"},
  {"QuadScaledJacobian", PyvtkMeshQuality_QuadScaledJacobian, METH_VARARGS,
   "QuadScaledJacobian(cell:vtkCell) -> float\nC++: static double QuadScaledJacobian(vtkCell *cell)\n\nCalculate the scaled Jacobian of a quadrilateral. The scaled\nJacobian of a quadrilateral is the minimum Jacobian divided by\nthe lengths of the 2 edge vectors.\n"},
  {"QuadShear", PyvtkMeshQuality_QuadShear, METH_VARARGS,
   "QuadShear(cell:vtkCell) -> float\nC++: static double QuadShear(vtkCell *cell)\n\nCalculate the shear of a quadrilateral. The shear of a\nquadrilateral is 2 / Condition number of Jacobian Skew matrix.\n"},
  {"QuadShape", PyvtkMeshQuality_QuadShape, METH_VARARGS,
   "QuadShape(cell:vtkCell) -> float\nC++: static double QuadShape(vtkCell *cell)\n\nCalculate the shear of a quadrilateral. The shear of a\nquadrilateral is 2 / Condition number of weighted Jacobian\nmatrix.\n"},
  {"QuadRelativeSizeSquared", PyvtkMeshQuality_QuadRelativeSizeSquared, METH_VARARGS,
   "QuadRelativeSizeSquared(cell:vtkCell) -> float\nC++: static double QuadRelativeSizeSquared(vtkCell *cell)\n\nCalculate the relative size squared of a quadrilateral. The\nrelative size squared of a quadrilateral is the Min(J, 1 / J),\nwhere J is the determinant of weighted Jacobian matrix.\n\nNote: QuadRelativeSizeSquared will return 0.0 if the MeshQuality\nfilter has NOT been executed, because it relies on the average\nquad size.\n"},
  {"QuadShapeAndSize", PyvtkMeshQuality_QuadShapeAndSize, METH_VARARGS,
   "QuadShapeAndSize(cell:vtkCell) -> float\nC++: static double QuadShapeAndSize(vtkCell *cell)\n\nCalculate the shape and size of a quadrilateral. The shape and\nsize of a quadrilateral is product of shape and average size.\n\nNote: QuadShapeAndSize will return 0.0 if the MeshQuality filter\nhas NOT been executed, because it relies on the average triangle\nsize.\n"},
  {"QuadShearAndSize", PyvtkMeshQuality_QuadShearAndSize, METH_VARARGS,
   "QuadShearAndSize(cell:vtkCell) -> float\nC++: static double QuadShearAndSize(vtkCell *cell)\n\nCalculate the shear and size of a quadrilateral. The shear and\nsize of a quadrilateral is product of shear and average size.\n\nNote: QuadShearAndSize will return 0.0 if the MeshQuality filter\nhas NOT been executed, because it relies on the average triangle\nsize.\n"},
  {"QuadDistortion", PyvtkMeshQuality_QuadDistortion, METH_VARARGS,
   "QuadDistortion(cell:vtkCell) -> float\nC++: static double QuadDistortion(vtkCell *cell)\n\nCalculate the distortion of a quadrilateral. The distortion of a\nquadrilateral is {min(|J|)/actual area} * parent area, parent\narea = 4 for quad.\n"},
  {"QuadEquiangleSkew", PyvtkMeshQuality_QuadEquiangleSkew, METH_VARARGS,
   "QuadEquiangleSkew(cell:vtkCell) -> float\nC++: static double QuadEquiangleSkew(vtkCell *cell)\n\nCalculate the equiangle skew of a quadrilateral.\n"},
  {"TetEdgeRatio", PyvtkMeshQuality_TetEdgeRatio, METH_VARARGS,
   "TetEdgeRatio(cell:vtkCell) -> float\nC++: static double TetEdgeRatio(vtkCell *cell)\n\nCalculate the edge ratio of a tetrahedron. The edge ratio of a\ntetrahedron $K $ is:$\\frac{|K|_\\infty}{|K|_0} $, where\n$|K|_\\infty $ and $|K|_0 $ respectively denote the greatest and\nthe smallest edge lengths of $K $.\n"},
  {"TetAspectRatio", PyvtkMeshQuality_TetAspectRatio, METH_VARARGS,
   "TetAspectRatio(cell:vtkCell) -> float\nC++: static double TetAspectRatio(vtkCell *cell)\n\nCalculate the aspect ratio of a tetrahedron. The aspect ratio of\na tetrahedron $K $ is:$\\frac{|K|_\\infty}{2\\sqrt{6}r} $, where\n$|K|_\\infty $ and $r $ respectively denote the greatest edge\nlength and the inradius of $K $.\n"},
  {"TetRadiusRatio", PyvtkMeshQuality_TetRadiusRatio, METH_VARARGS,
   "TetRadiusRatio(cell:vtkCell) -> float\nC++: static double TetRadiusRatio(vtkCell *cell)\n\nCalculate the radius ratio of a tetrahedron. The radius ratio of\na tetrahedron $K $ is:$\\frac{R}{3r} $, where $R $ and $r $\nrespectively denote the circumradius and the inradius of $K $.\n"},
  {"TetAspectFrobenius", PyvtkMeshQuality_TetAspectFrobenius, METH_VARARGS,
   "TetAspectFrobenius(cell:vtkCell) -> float\nC++: static double TetAspectFrobenius(vtkCell *cell)\n\nCalculate the Frobenius condition number of the transformation\nmatrix from a regular tetrahedron to a tetrahedron. The Frobenius\naspect of a tetrahedron $K $, when the reference element is\nregular, is:$\\frac{\\frac{3}{2}(l_{11}+l_{22}+l_{33}) -\n(l_{12}+l_{13}+l_{23})} {3(\\sqrt{2}\\det{T})^\\frac{2}{3}} $, where\n$T $ and $l_{ij} $ respectively denote the edge matrix of $K $\nand the entries of $L=T^t\\,T $.\n"},
  {"TetMinAngle", PyvtkMeshQuality_TetMinAngle, METH_VARARGS,
   "TetMinAngle(cell:vtkCell) -> float\nC++: static double TetMinAngle(vtkCell *cell)\n\nCalculate the minimal (nonoriented) dihedral angle of a\ntetrahedron, expressed in degrees.\n"},
  {"TetCollapseRatio", PyvtkMeshQuality_TetCollapseRatio, METH_VARARGS,
   "TetCollapseRatio(cell:vtkCell) -> float\nC++: static double TetCollapseRatio(vtkCell *cell)\n\nCalculate the collapse ratio of a tetrahedron. The collapse ratio\nis a dimensionless number defined as the smallest ratio of the\nheight of a vertex above its opposing triangle to the longest\nedge of that opposing triangle across all vertices of the\ntetrahedron.\n"},
  {"TetAspectGamma", PyvtkMeshQuality_TetAspectGamma, METH_VARARGS,
   "TetAspectGamma(cell:vtkCell) -> float\nC++: static double TetAspectGamma(vtkCell *cell)\n\nCalculate the aspect gamma of a tetrahedron. The aspect gamma of\na tetrahedron is: Srms**3 / (8.479670*V) where Srms =\nsqrt(Sum(Si**2)/6), Si = edge length.\n"},
  {"TetVolume", PyvtkMeshQuality_TetVolume, METH_VARARGS,
   "TetVolume(cell:vtkCell) -> float\nC++: static double TetVolume(vtkCell *cell)\n\nCalculate the volume of a tetrahedron. The volume of a\ntetrahedron is (1/6) * Jacobian at corner node.\n"},
  {"TetCondition", PyvtkMeshQuality_TetCondition, METH_VARARGS,
   "TetCondition(cell:vtkCell) -> float\nC++: static double TetCondition(vtkCell *cell)\n\nCalculate the condition number of a tetrahedron. The condition\nnumber of a tetrahedron is Condition number of the Jacobian\nmatrix at any corner.\n"},
  {"TetJacobian", PyvtkMeshQuality_TetJacobian, METH_VARARGS,
   "TetJacobian(cell:vtkCell) -> float\nC++: static double TetJacobian(vtkCell *cell)\n\nCalculate the Jacobian of a tetrahedron. The jacobian of a\ntetrahedron is the minimum point-wise volume at any corner.\n"},
  {"TetScaledJacobian", PyvtkMeshQuality_TetScaledJacobian, METH_VARARGS,
   "TetScaledJacobian(cell:vtkCell) -> float\nC++: static double TetScaledJacobian(vtkCell *cell)\n\nCalculate the scaled Jacobian of a tetrahedron. The scaled\njacobian of a tetrahedron is the minimum Jacobian divided by the\nlengths of 3 edge vectors.\n"},
  {"TetShape", PyvtkMeshQuality_TetShape, METH_VARARGS,
   "TetShape(cell:vtkCell) -> float\nC++: static double TetShape(vtkCell *cell)\n\nCalculate the shape of a tetrahedron. The shape of a tetrahedron\nis 3 / Mean Ratio of weighted Jacobian matrix.\n"},
  {"TetRelativeSizeSquared", PyvtkMeshQuality_TetRelativeSizeSquared, METH_VARARGS,
   "TetRelativeSizeSquared(cell:vtkCell) -> float\nC++: static double TetRelativeSizeSquared(vtkCell *cell)\n\nCalculate the relative size squared of a tetrahedron. The\nrelative size squared of a tetrahedron is Min(J, 1 / J), where J\nis determinant of weighted Jacobian matrix.\n\nNote: TetRelativeSizeSquared will return 0.0 if the MeshQuality\nfilter has NOT been executed, because it relies on the average\ntet size.\n"},
  {"TetShapeAndSize", PyvtkMeshQuality_TetShapeAndSize, METH_VARARGS,
   "TetShapeAndSize(cell:vtkCell) -> float\nC++: static double TetShapeAndSize(vtkCell *cell)\n\nCalculate the shape and size of a tetrahedron. The shape and size\nof a tetrahedron is product of shape and average size.\n\nNote: TetShapeAndSize will return 0.0 if the MeshQuality filter\nhas NOT been executed, because it relies on the average tet size.\n"},
  {"TetDistortion", PyvtkMeshQuality_TetDistortion, METH_VARARGS,
   "TetDistortion(cell:vtkCell) -> float\nC++: static double TetDistortion(vtkCell *cell)\n\nCalculate the distortion of a tetrahedron. The distortion of a\nquadrilateral is {min(|J|)/actual volume} * parent volume, parent\nvolume = 1 / 6 for a tetrahedron.\n"},
  {"TetEquiangleSkew", PyvtkMeshQuality_TetEquiangleSkew, METH_VARARGS,
   "TetEquiangleSkew(cell:vtkCell) -> float\nC++: static double TetEquiangleSkew(vtkCell *cell)\n\nCalculate the equiangle skew of a tetrahedron.\n"},
  {"TetEquivolumeSkew", PyvtkMeshQuality_TetEquivolumeSkew, METH_VARARGS,
   "TetEquivolumeSkew(cell:vtkCell) -> float\nC++: static double TetEquivolumeSkew(vtkCell *cell)\n\nCalculate the equivolume skew of a tetrahedron.\n"},
  {"TetMeanRatio", PyvtkMeshQuality_TetMeanRatio, METH_VARARGS,
   "TetMeanRatio(cell:vtkCell) -> float\nC++: static double TetMeanRatio(vtkCell *cell)\n\nCalculate the mean ratio of a tetrahedron. The mean ratio of a\ntetrahedron is the ratio of tetrahedron volume over the volume of\nan equilateral tetrahedron with the same RMS edge length.\n"},
  {"TetNormalizedInradius", PyvtkMeshQuality_TetNormalizedInradius, METH_VARARGS,
   "TetNormalizedInradius(cell:vtkCell) -> float\nC++: static double TetNormalizedInradius(vtkCell *cell)\n\nCalculate the normalized in-radius of a tetrahedron. The minimum\nnormalized in-radius of a tetrahedron is the ratio of the minimum\nsub-tetrahedron inner radius to the outer tetrahedron radius.\n"},
  {"TetSquishIndex", PyvtkMeshQuality_TetSquishIndex, METH_VARARGS,
   "TetSquishIndex(cell:vtkCell) -> float\nC++: static double TetSquishIndex(vtkCell *cell)\n\nCalculate the squish index of a tetrahedron.\n"},
  {"PyramidEquiangleSkew", PyvtkMeshQuality_PyramidEquiangleSkew, METH_VARARGS,
   "PyramidEquiangleSkew(cell:vtkCell) -> float\nC++: static double PyramidEquiangleSkew(vtkCell *cell)\n\nCalculate the equiangle skew of a pyramid.\n"},
  {"PyramidJacobian", PyvtkMeshQuality_PyramidJacobian, METH_VARARGS,
   "PyramidJacobian(cell:vtkCell) -> float\nC++: static double PyramidJacobian(vtkCell *cell)\n\nCalculate the Jacobian of a pyramid. The jacobian of a\ntetrahedron is the minimum point-wise volume at any corner.\n"},
  {"PyramidScaledJacobian", PyvtkMeshQuality_PyramidScaledJacobian, METH_VARARGS,
   "PyramidScaledJacobian(cell:vtkCell) -> float\nC++: static double PyramidScaledJacobian(vtkCell *cell)\n\nCalculate the Jacobian of a pyramid. The jacobian of a\ntetrahedron is the minimum point-wise volume at any corner.\n"},
  {"PyramidShape", PyvtkMeshQuality_PyramidShape, METH_VARARGS,
   "PyramidShape(cell:vtkCell) -> float\nC++: static double PyramidShape(vtkCell *cell)\n\nCalculate the shape of a pyramid. The shape of a pyramid is 4\ndivided by the minimum mean ratio of the Jacobian matrix at each\nelement corner.\n"},
  {"PyramidVolume", PyvtkMeshQuality_PyramidVolume, METH_VARARGS,
   "PyramidVolume(cell:vtkCell) -> float\nC++: static double PyramidVolume(vtkCell *cell)\n\nCalculate the volume of a pyramid.\n"},
  {"WedgeCondition", PyvtkMeshQuality_WedgeCondition, METH_VARARGS,
   "WedgeCondition(cell:vtkCell) -> float\nC++: static double WedgeCondition(vtkCell *cell)\n\nCalculate the condition number of a wedge. The condition number\nof a wedge is equivalent to the max aspect Frobenius.\n"},
  {"WedgeDistortion", PyvtkMeshQuality_WedgeDistortion, METH_VARARGS,
   "WedgeDistortion(cell:vtkCell) -> float\nC++: static double WedgeDistortion(vtkCell *cell)\n\nCalculate the distortion of a wedge. The distortion of a wedge is\n{min(|J|) / actual volume } * parent volume.\n"},
  {"WedgeEdgeRatio", PyvtkMeshQuality_WedgeEdgeRatio, METH_VARARGS,
   "WedgeEdgeRatio(cell:vtkCell) -> float\nC++: static double WedgeEdgeRatio(vtkCell *cell)\n\nCalculate the edge ratio of a wedge. The edge ratio of a wedge is\nHmax / Hmin, where Hmax and Hmin are respectively the maximum and\nthe minimum edge lengths.\n"},
  {"WedgeEquiangleSkew", PyvtkMeshQuality_WedgeEquiangleSkew, METH_VARARGS,
   "WedgeEquiangleSkew(cell:vtkCell) -> float\nC++: static double WedgeEquiangleSkew(vtkCell *cell)\n\nCalculate the equiangle skew of a wedge.\n"},
  {"WedgeJacobian", PyvtkMeshQuality_WedgeJacobian, METH_VARARGS,
   "WedgeJacobian(cell:vtkCell) -> float\nC++: static double WedgeJacobian(vtkCell *cell)\n\nCalculate the Jacobian of a wedge. The jacobian of a wedge is the\nmin{((L_2 X L_0) * L_3)_k}.\n"},
  {"WedgeMaxAspectFrobenius", PyvtkMeshQuality_WedgeMaxAspectFrobenius, METH_VARARGS,
   "WedgeMaxAspectFrobenius(cell:vtkCell) -> float\nC++: static double WedgeMaxAspectFrobenius(vtkCell *cell)\n\nCalculate the max aspect Frobenius of a wedge. The max aspect\nFrobenius of a wedge is max(F_0123, F_1204, F_2015, F_3540,\nF_4351, F_5432).\n"},
  {"WedgeMaxStretch", PyvtkMeshQuality_WedgeMaxStretch, METH_VARARGS,
   "WedgeMaxStretch(cell:vtkCell) -> float\nC++: static double WedgeMaxStretch(vtkCell *cell)\n\nCalculate the max stretch of a wedge. The maximum stretch of a\nwedge is maximum stretch (S) of the three quadrilateral faces: q\n= max[S_1043, S_1254, S_2035]\n"},
  {"WedgeMeanAspectFrobenius", PyvtkMeshQuality_WedgeMeanAspectFrobenius, METH_VARARGS,
   "WedgeMeanAspectFrobenius(cell:vtkCell) -> float\nC++: static double WedgeMeanAspectFrobenius(vtkCell *cell)\n\nCalculate the mean aspect Frobenius of a wedge. The mean aspect\nFrobenius of a wedge is: 1/6 * (F_0123 + F_1204 + F+2015 + F_3540\n+ F_4351 + F_5432).\n"},
  {"WedgeScaledJacobian", PyvtkMeshQuality_WedgeScaledJacobian, METH_VARARGS,
   "WedgeScaledJacobian(cell:vtkCell) -> float\nC++: static double WedgeScaledJacobian(vtkCell *cell)\n\nCalculate the scaled Jacobian a wedge. The jacobian of a wedge is\nthe minimum point-wise volume at any corner divided by the\ncorresponding edge lengths and normalized to the unit wedge: q =\nmin(  2 / sqrt(3) * ((L_2 X L_0) * L_3)_k / sqrt(mag(L_2) *\nmag(L_0) * mag(L_3))), where ((L_2 X L_0) * L_3)_k is the\ndeterminant of the Jacobian of the tetrahedron defined at the kth\ncorner node, and L_2, L_0 and L_3 are the edges defined according\nto the standard for tetrahedral elements.\n"},
  {"WedgeShape", PyvtkMeshQuality_WedgeShape, METH_VARARGS,
   "WedgeShape(cell:vtkCell) -> float\nC++: static double WedgeShape(vtkCell *cell)\n\nCalculate the shape of a wedge. The shape of a wedge is 3 divided\nby the minimum mean ratio of the Jacobian matrix at each element\ncorner.\n"},
  {"WedgeVolume", PyvtkMeshQuality_WedgeVolume, METH_VARARGS,
   "WedgeVolume(cell:vtkCell) -> float\nC++: static double WedgeVolume(vtkCell *cell)\n\nCalculate the volume of a wedge.\n"},
  {"HexEdgeRatio", PyvtkMeshQuality_HexEdgeRatio, METH_VARARGS,
   "HexEdgeRatio(cell:vtkCell) -> float\nC++: static double HexEdgeRatio(vtkCell *cell)\n\nCalculate the edge ratio of a hexahedron. The edge ratio of a\nhexahedron $H $ is:$\\frac{|H|_\\infty}{|H|_0} $, where $|H|_\\infty $\nand $|H|_0 $ respectively denote the greatest and the smallest\nedge lengths of $H $.\n"},
  {"HexMedAspectFrobenius", PyvtkMeshQuality_HexMedAspectFrobenius, METH_VARARGS,
   "HexMedAspectFrobenius(cell:vtkCell) -> float\nC++: static double HexMedAspectFrobenius(vtkCell *cell)\n\nCalculate the average Frobenius aspect of the 8 corner tetrahedra\nof a hexahedron, when the reference tetrahedral elements are\nright isosceles at the hexahedron vertices.\n"},
  {"HexMaxAspectFrobenius", PyvtkMeshQuality_HexMaxAspectFrobenius, METH_VARARGS,
   "HexMaxAspectFrobenius(cell:vtkCell) -> float\nC++: static double HexMaxAspectFrobenius(vtkCell *cell)\n\nCalculate the maximal Frobenius aspect of the 8 corner tetrahedra\nof a hexahedron, when the reference tetrahedral elements are\nright isosceles at the hexahedron vertices.\n"},
  {"HexMaxEdgeRatio", PyvtkMeshQuality_HexMaxEdgeRatio, METH_VARARGS,
   "HexMaxEdgeRatio(cell:vtkCell) -> float\nC++: static double HexMaxEdgeRatio(vtkCell *cell)\n\nCalculate the maximum edge ratio of a hexahedron at its center.\n"},
  {"HexSkew", PyvtkMeshQuality_HexSkew, METH_VARARGS,
   "HexSkew(cell:vtkCell) -> float\nC++: static double HexSkew(vtkCell *cell)\n\nCalculate the skew of a hexahedron. The skew of a hexahedron is\nthe maximum |cos A|, where A is the angle between edges at the\nhexahedron center.\n"},
  {"HexTaper", PyvtkMeshQuality_HexTaper, METH_VARARGS,
   "HexTaper(cell:vtkCell) -> float\nC++: static double HexTaper(vtkCell *cell)\n\nCalculate the taper of a hexahedron. The taper of a hexahedron is\nthe ratio of lengths derived from opposite edges.\n"},
  {"HexVolume", PyvtkMeshQuality_HexVolume, METH_VARARGS,
   "HexVolume(cell:vtkCell) -> float\nC++: static double HexVolume(vtkCell *cell)\n\nCalculate the volume of a hexahedron. The volume of a hexahedron\nis the Jacobian at the hexahedron center.\n"},
  {"HexStretch", PyvtkMeshQuality_HexStretch, METH_VARARGS,
   "HexStretch(cell:vtkCell) -> float\nC++: static double HexStretch(vtkCell *cell)\n\nCalculate the stretch of a hexahedron. The stretch of a\nhexahedron is Sqrt(3) * minimum edge length / maximum diagonal\nlength.\n"},
  {"HexDiagonal", PyvtkMeshQuality_HexDiagonal, METH_VARARGS,
   "HexDiagonal(cell:vtkCell) -> float\nC++: static double HexDiagonal(vtkCell *cell)\n\nCalculate the diagonal of a hexahedron. The diagonal of a\nhexahedron Minimum diagonal length / maximum diagonal length.\n"},
  {"HexDimension", PyvtkMeshQuality_HexDimension, METH_VARARGS,
   "HexDimension(cell:vtkCell) -> float\nC++: static double HexDimension(vtkCell *cell)\n\nCalculate the dimension of a hexahedron. The dimension of a\nhexahedron is the Pronto-specific characteristic length for\nstable time step calculation, where characteristic length =\nVolume / 2 grad Volume.\n"},
  {"HexOddy", PyvtkMeshQuality_HexOddy, METH_VARARGS,
   "HexOddy(cell:vtkCell) -> float\nC++: static double HexOddy(vtkCell *cell)\n\nCalculate the oddy of a hexahedron. The oddy of a hexahedron is\nthe general distortion measure based on left Cauchy-Green Tensor.\n"},
  {"HexCondition", PyvtkMeshQuality_HexCondition, METH_VARARGS,
   "HexCondition(cell:vtkCell) -> float\nC++: static double HexCondition(vtkCell *cell)\n\nCalculate the condition of a hexahedron. The condition of a\nhexahedron is equivalent to HexMaxAspectFrobenius.\n"},
  {"HexJacobian", PyvtkMeshQuality_HexJacobian, METH_VARARGS,
   "HexJacobian(cell:vtkCell) -> float\nC++: static double HexJacobian(vtkCell *cell)\n\nCalculate the Jacobian of a hexahedron. The jacobian of a\nhexahedron is the minimum point-wise of local map at 8 corners &\ncenter of the hexahedron.\n"},
  {"HexScaledJacobian", PyvtkMeshQuality_HexScaledJacobian, METH_VARARGS,
   "HexScaledJacobian(cell:vtkCell) -> float\nC++: static double HexScaledJacobian(vtkCell *cell)\n\nCalculate the scaled Jacobian of a hexahedron. The scaled\njacobian of a hexahedron is the minimum Jacobian divided by the\nlengths of 3 edge vectors.\n"},
  {"HexShear", PyvtkMeshQuality_HexShear, METH_VARARGS,
   "HexShear(cell:vtkCell) -> float\nC++: static double HexShear(vtkCell *cell)\n\nCalculate the shear of a hexahedron. The shear of a hexahedron is\n3 / Mean Ratio of Jacobian Skew matrix.\n"},
  {"HexShape", PyvtkMeshQuality_HexShape, METH_VARARGS,
   "HexShape(cell:vtkCell) -> float\nC++: static double HexShape(vtkCell *cell)\n\nCalculate the shape of a hexahedron. The shape of a hexahedron is\n3 / Mean Ratio of weighted Jacobian matrix.\n"},
  {"HexRelativeSizeSquared", PyvtkMeshQuality_HexRelativeSizeSquared, METH_VARARGS,
   "HexRelativeSizeSquared(cell:vtkCell) -> float\nC++: static double HexRelativeSizeSquared(vtkCell *cell)\n\nCalculate the relative size squared of a hexahedron. The relative\nsize squared of a hexahedron is Min(J, 1 / J), where J is\ndeterminant of weighted Jacobian matrix.\n\nNote: HexRelativeSizeSquared will return 0.0 if the MeshQuality\nfilter has NOT been executed, because it relies on the average\nhex size.\n"},
  {"HexShapeAndSize", PyvtkMeshQuality_HexShapeAndSize, METH_VARARGS,
   "HexShapeAndSize(cell:vtkCell) -> float\nC++: static double HexShapeAndSize(vtkCell *cell)\n\nCalculate the shape and size of a hexahedron. The shape and size\nof a hexahedron is product of shape and average size.\n\nNote: HexShapeAndSize will return 0.0 if the MeshQuality filter\nhas NOT been executed, because it relies on the average hex size.\n"},
  {"HexShearAndSize", PyvtkMeshQuality_HexShearAndSize, METH_VARARGS,
   "HexShearAndSize(cell:vtkCell) -> float\nC++: static double HexShearAndSize(vtkCell *cell)\n\nCalculate the shear and size of a hexahedron. The shear and size\nof a hexahedron is product of shear and average size.\n\nNote: HexShearAndSize will return 0.0 if the MeshQuality filter\nhas NOT been executed, because it relies on the average hex size.\n"},
  {"HexDistortion", PyvtkMeshQuality_HexDistortion, METH_VARARGS,
   "HexDistortion(cell:vtkCell) -> float\nC++: static double HexDistortion(vtkCell *cell)\n\nCalculate the distortion of a hexahedron. The distortion of a\nhexahedron is {min(|J|)/actual volume} * parent volume, parent\nvolume = 8 for a hexahedron.\n"},
  {"HexEquiangleSkew", PyvtkMeshQuality_HexEquiangleSkew, METH_VARARGS,
   "HexEquiangleSkew(cell:vtkCell) -> float\nC++: static double HexEquiangleSkew(vtkCell *cell)\n\nCalculate the equiangle skew of a hexahedron.\n"},
  {"HexNodalJacobianRatio", PyvtkMeshQuality_HexNodalJacobianRatio, METH_VARARGS,
   "HexNodalJacobianRatio(cell:vtkCell) -> float\nC++: static double HexNodalJacobianRatio(vtkCell *cell)\n\nCalculate the nodal Jacobian ratio of a hexahedron. The nodal\nJacobian ratio of a hexahedron is min(Jacobian) / max(Jacobian)\nover all nodes.\n"},
  {"SetRatio", PyvtkMeshQuality_SetRatio, METH_VARARGS,
   "SetRatio(self, r:int) -> None\nC++: virtual void SetRatio(vtkTypeBool r)\n\nThese methods are deprecated. Use Get/SetSaveCellQuality()\ninstead.\n\nFormerly, SetRatio could be used to disable computation of the\ntetrahedral radius ratio so that volume alone could be computed.\nNow, cell quality is always computed, but you may decide not to\nstore the result for each cell. This allows average cell quality\nof a mesh to be calculated without requiring per-cell storage.\n"},
  {"GetRatio", PyvtkMeshQuality_GetRatio, METH_VARARGS,
   "GetRatio(self) -> int\nC++: vtkTypeBool GetRatio()\n\n"},
  {"RatioOn", PyvtkMeshQuality_RatioOn, METH_VARARGS,
   "RatioOn(self) -> None\nC++: virtual void RatioOn()\n\n"},
  {"RatioOff", PyvtkMeshQuality_RatioOff, METH_VARARGS,
   "RatioOff(self) -> None\nC++: virtual void RatioOff()\n\n"},
  {"SetVolume", PyvtkMeshQuality_SetVolume, METH_VARARGS,
   "SetVolume(self, cv:int) -> None\nC++: virtual void SetVolume(vtkTypeBool cv)\n\nThese methods are deprecated. The functionality of computing cell\nvolume is being removed until it can be computed for any 3D cell.\n(The previous implementation only worked for tetrahedra.)\n\n* For now, turning on the volume computation will put this\n* filter into \"compatibility mode,\" where tetrahedral cell\n* volume is stored in first component of each output tuple and\n* the radius ratio is stored in the second component. You may\n* also use CompatibilityModeOn()/Off() to enter this mode.\n* In this mode, cells other than tetrahedra will have report\n* a volume of 0.0 (if volume computation is enabled).\n\n* By default, volume computation is disabled and compatibility\n* mode is off, since it does not make a lot of sense for\n* meshes with non-tetrahedral cells.\n"},
  {"GetVolume", PyvtkMeshQuality_GetVolume, METH_VARARGS,
   "GetVolume(self) -> int\nC++: vtkTypeBool GetVolume()\n\n"},
  {"VolumeOn", PyvtkMeshQuality_VolumeOn, METH_VARARGS,
   "VolumeOn(self) -> None\nC++: void VolumeOn()\n\n"},
  {"VolumeOff", PyvtkMeshQuality_VolumeOff, METH_VARARGS,
   "VolumeOff(self) -> None\nC++: void VolumeOff()\n\n"},
  {"SetCompatibilityMode", PyvtkMeshQuality_SetCompatibilityMode, METH_VARARGS,
   "SetCompatibilityMode(self, cm:int) -> None\nC++: virtual void SetCompatibilityMode(vtkTypeBool cm)\n\nCompatibilityMode governs whether, when both a quality function\nand cell volume are to be stored as cell data, the two values are\nstored in a single array. When compatibility mode is off (the\ndefault), two separate arrays are used -- one labeled \"Quality\"\nand the other labeled \"Volume\". When compatibility mode is on,\nboth values are stored in a single array, with volume as the\nfirst component and quality as the second component.\n\n* Enabling CompatibilityMode changes the default tetrahedral\n* quality function to RADIUS_RATIO and turns volume\n* computation on. (This matches the default behavior of the\n* initial implementation of vtkMeshQuality.) You may change\n* quality function and volume computation without leaving\n* compatibility mode.\n\n* Disabling compatibility mode does not affect the current\n* volume computation or tetrahedral quality function settings.\n\n* The final caveat to CompatibilityMode is that regardless of\n* its setting, the resulting array will be of type vtkDoubleArray\n* rather than the original vtkFloatArray.\n* This is a safety function to keep the authors from\n* diving off of the Combinatorial Coding Cliff into\n* Certain Insanity.\n"},
  {"GetCompatibilityMode", PyvtkMeshQuality_GetCompatibilityMode, METH_VARARGS,
   "GetCompatibilityMode(self) -> int\nC++: virtual vtkTypeBool GetCompatibilityMode()\n\n"},
  {"CompatibilityModeOn", PyvtkMeshQuality_CompatibilityModeOn, METH_VARARGS,
   "CompatibilityModeOn(self) -> None\nC++: void CompatibilityModeOn()\n\n"},
  {"CompatibilityModeOff", PyvtkMeshQuality_CompatibilityModeOff, METH_VARARGS,
   "CompatibilityModeOff(self) -> None\nC++: void CompatibilityModeOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMeshQuality_Doc =
  "vtkMeshQuality - Calculate functions of quality of the elements of a\nmesh\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkMeshQuality computes one or more functions of (geometric) quality\n"
  "for each 2-D and 3-D cell (triangle, quadrilateral, tetrahedron,\n"
  "pyramid, wedge, or hexahedron) of a mesh. These functions of quality\n"
  "are then averaged over the entire mesh. The minimum, average,\n"
  "maximum, and unbiased variance of quality for each type of cell is\n"
  "stored in the output mesh's FieldData. The FieldData arrays are named\n"
  "\"Mesh Triangle Quality,\" \"Mesh Quadrilateral Quality,\" \"Mesh Tetrahedron\n"
  "Quality,\" \"Mesh Pyramid Quality,\" \"Mesh Wedge Quality,\" and \"Mesh Hexahedron\n"
  "Quality.\" Each array has a single tuple with 5 components. The first\n"
  "4 components are the quality statistics mentioned above; the final\n"
  "value is the number of cells of the given type. This final component\n"
  "makes aggregation of statistics for distributed mesh data possible.\n\n"
  "By default, the per-cell quality is added to the mesh's cell data, in\n"
  "an array named \"Quality.\" Cell types not supported by this filter\n"
  "will have an entry of 0. Use SaveCellQualityOff() to store only the\n"
  "final statistics.\n\n"
  "This version of the filter written by Philippe Pebay and David\n"
  "Thompson overtakes an older version written by Leila Baghdadi, Hanif\n"
  "Ladak, and David Steinman at the Imaging Research Labs, Robarts\n"
  "Research Institute. That version only supported tetrahedral radius\n"
  "ratio. See the CompatibilityModeOn() member for information on how to\n"
  "make this filter behave like the previous implementation. For more\n"
  "information on the triangle quality functions of this class, cf.\n"
  "Pebay & Baker 2003, Analysis of triangle quality measures, Math Comp\n"
  "72:244. For more information on the quadrangle quality functions of\n"
  "this class, cf. Pebay 2004, Planar Quadrangle Quality Measures, Eng\n"
  "Comp 20:2.\n\n"
  "@warning\n"
  "While more general than before, this class does not address many cell\n"
  "types, including triangle strips and fans in 2D (among others). Most\n"
  "quadrilateral quality functions are intended for planar\n"
  "quadrilaterals only. The minimal angle is not, strictly speaking, a\n"
  "quality function, but it is provided because of its usage by many\n"
  "authors.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMeshQuality_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersVerdict.vtkMeshQuality", // tp_name
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
  PyvtkMeshQuality_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMeshQuality_StaticNew()
{
  return vtkMeshQuality::New();
}

PyObject *PyvtkMeshQuality_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMeshQuality_Type, PyvtkMeshQuality_Methods,
    "vtkMeshQuality",
 &PyvtkMeshQuality_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMeshQuality_QualityMeasureTypes_Type);
  // members of vtkMeshQuality::QualityMeasureTypes
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkMeshQuality_QualityMeasureTypes_Type.tp_dict = enumdict;

    typedef vtkMeshQuality::QualityMeasureTypes cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[39] = {
      { "AREA", cxx_enum_type::AREA },
      { "ASPECT_FROBENIUS", cxx_enum_type::ASPECT_FROBENIUS },
      { "ASPECT_GAMMA", cxx_enum_type::ASPECT_GAMMA },
      { "ASPECT_RATIO", cxx_enum_type::ASPECT_RATIO },
      { "COLLAPSE_RATIO", cxx_enum_type::COLLAPSE_RATIO },
      { "CONDITION", cxx_enum_type::CONDITION },
      { "DIAGONAL", cxx_enum_type::DIAGONAL },
      { "DIMENSION", cxx_enum_type::DIMENSION },
      { "DISTORTION", cxx_enum_type::DISTORTION },
      { "EDGE_RATIO", cxx_enum_type::EDGE_RATIO },
      { "EQUIANGLE_SKEW", cxx_enum_type::EQUIANGLE_SKEW },
      { "EQUIVOLUME_SKEW", cxx_enum_type::EQUIVOLUME_SKEW },
      { "JACOBIAN", cxx_enum_type::JACOBIAN },
      { "MAX_ANGLE", cxx_enum_type::MAX_ANGLE },
      { "MAX_ASPECT_FROBENIUS", cxx_enum_type::MAX_ASPECT_FROBENIUS },
      { "MAX_EDGE_RATIO", cxx_enum_type::MAX_EDGE_RATIO },
      { "MAX_STRETCH", cxx_enum_type::MAX_STRETCH },
      { "MEAN_ASPECT_FROBENIUS", cxx_enum_type::MEAN_ASPECT_FROBENIUS },
      { "MEAN_RATIO", cxx_enum_type::MEAN_RATIO },
      { "MED_ASPECT_FROBENIUS", cxx_enum_type::MED_ASPECT_FROBENIUS },
      { "MIN_ANGLE", cxx_enum_type::MIN_ANGLE },
      { "NODAL_JACOBIAN_RATIO", cxx_enum_type::NODAL_JACOBIAN_RATIO },
      { "NORMALIZED_INRADIUS", cxx_enum_type::NORMALIZED_INRADIUS },
      { "ODDY", cxx_enum_type::ODDY },
      { "RADIUS_RATIO", cxx_enum_type::RADIUS_RATIO },
      { "RELATIVE_SIZE_SQUARED", cxx_enum_type::RELATIVE_SIZE_SQUARED },
      { "SCALED_JACOBIAN", cxx_enum_type::SCALED_JACOBIAN },
      { "SHAPE", cxx_enum_type::SHAPE },
      { "SHAPE_AND_SIZE", cxx_enum_type::SHAPE_AND_SIZE },
      { "SHEAR", cxx_enum_type::SHEAR },
      { "SHEAR_AND_SIZE", cxx_enum_type::SHEAR_AND_SIZE },
      { "SKEW", cxx_enum_type::SKEW },
      { "SQUISH_INDEX", cxx_enum_type::SQUISH_INDEX },
      { "STRETCH", cxx_enum_type::STRETCH },
      { "TAPER", cxx_enum_type::TAPER },
      { "VOLUME", cxx_enum_type::VOLUME },
      { "WARPAGE", cxx_enum_type::WARPAGE },
      { "TOTAL_QUALITY_MEASURE_TYPES", cxx_enum_type::TOTAL_QUALITY_MEASURE_TYPES },
      { "NONE", cxx_enum_type::NONE },
    };

    for (int c = 0; c < 39; c++)
    {
      enumval = PyvtkMeshQuality_QualityMeasureTypes_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkMeshQuality_QualityMeasureTypes_Type, "vtkMeshQuality.QualityMeasureTypes");

  o = (PyObject *)&PyvtkMeshQuality_QualityMeasureTypes_Type;
  if (PyDict_SetItemString(d, "QualityMeasureTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMeshQuality(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMeshQuality_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMeshQuality", o) != 0)
  {
    Py_DECREF(o);
  }

}

