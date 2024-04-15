// python wrapper for vtkAxisActor2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAxisActor2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAxisActor2D(PyObject *dict); }
extern "C" { PyObject *PyvtkAxisActor2D_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxisActor2D_LabelMax_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkAxisActor2D.LabelMax", // tp_name
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
PyObject *PyvtkAxisActor2D_LabelMax_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAxisActor2D_LabelMax_Type, static_cast<int>(val));
}


static PyObject *
PyvtkAxisActor2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAxisActor2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxisActor2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAxisActor2D *tempr = vtkAxisActor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxisActor2D::NewInstance());

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
PyvtkAxisActor2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAxisActor2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAxisActor2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetPoint1Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPoint1Coordinate() :
      op->vtkAxisActor2D::GetPoint1Coordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPoint1(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetPoint1(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor2D_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPoint1(temp0, temp1);
    }
    else
    {
      op->vtkAxisActor2D::SetPoint1(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor2D_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxisActor2D_SetPoint1_s1(self, args);
    case 2:
      return PyvtkAxisActor2D_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}


static PyObject *
PyvtkAxisActor2D_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkAxisActor2D::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetPoint2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPoint2Coordinate() :
      op->vtkAxisActor2D::GetPoint2Coordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPoint2(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetPoint2(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor2D_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPoint2(temp0, temp1);
    }
    else
    {
      op->vtkAxisActor2D::SetPoint2(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor2D_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxisActor2D_SetPoint2_s1(self, args);
    case 2:
      return PyvtkAxisActor2D_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}


static PyObject *
PyvtkAxisActor2D_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkAxisActor2D::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0, temp1);
    }
    else
    {
      op->vtkAxisActor2D::SetRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor2D_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor2D_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAxisActor2D_SetRange_s1(self, args);
    case 1:
      return PyvtkAxisActor2D_SetRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return nullptr;
}


static PyObject *
PyvtkAxisActor2D_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkAxisActor2D::GetRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetRulerMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRulerMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRulerMode(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetRulerMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetRulerMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRulerMode() :
      op->vtkAxisActor2D::GetRulerMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_RulerModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RulerModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RulerModeOn();
    }
    else
    {
      op->vtkAxisActor2D::RulerModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_RulerModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RulerModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RulerModeOff();
    }
    else
    {
      op->vtkAxisActor2D::RulerModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetRulerDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRulerDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRulerDistance(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetRulerDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetRulerDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRulerDistanceMinValue() :
      op->vtkAxisActor2D::GetRulerDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetRulerDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRulerDistanceMaxValue() :
      op->vtkAxisActor2D::GetRulerDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetRulerDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRulerDistance() :
      op->vtkAxisActor2D::GetRulerDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLabels(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetNumberOfLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetNumberOfLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsMinValue() :
      op->vtkAxisActor2D::GetNumberOfLabelsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetNumberOfLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsMaxValue() :
      op->vtkAxisActor2D::GetNumberOfLabelsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabels() :
      op->vtkAxisActor2D::GetNumberOfLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelFormat(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkAxisActor2D::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetAdjustLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdjustLabels(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetAdjustLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetAdjustLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAdjustLabels() :
      op->vtkAxisActor2D::GetAdjustLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_AdjustLabelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustLabelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdjustLabelsOn();
    }
    else
    {
      op->vtkAxisActor2D::AdjustLabelsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_AdjustLabelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustLabelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdjustLabelsOff();
    }
    else
    {
      op->vtkAxisActor2D::AdjustLabelsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetAdjustedRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustedRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAdjustedRange() :
      op->vtkAxisActor2D::GetAdjustedRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor2D_GetAdjustedRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustedRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetAdjustedRange(temp0, temp1);
    }
    else
    {
      op->vtkAxisActor2D::GetAdjustedRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor2D_GetAdjustedRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustedRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetAdjustedRange(temp0);
    }
    else
    {
      op->vtkAxisActor2D::GetAdjustedRange(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor2D_GetAdjustedRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAxisActor2D_GetAdjustedRange_s1(self, args);
    case 2:
      return PyvtkAxisActor2D_GetAdjustedRange_s2(self, args);
    case 1:
      return PyvtkAxisActor2D_GetAdjustedRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAdjustedRange");
  return nullptr;
}


static PyObject *
PyvtkAxisActor2D_GetAdjustedNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustedNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAdjustedNumberOfLabels() :
      op->vtkAxisActor2D::GetAdjustedNumberOfLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkAxisActor2D::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTitleTextProperty(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty() :
      op->vtkAxisActor2D::GetTitleTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLabelTextProperty(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkAxisActor2D::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetTickLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTickLength(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetTickLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTickLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLengthMinValue() :
      op->vtkAxisActor2D::GetTickLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTickLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLengthMaxValue() :
      op->vtkAxisActor2D::GetTickLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTickLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLength() :
      op->vtkAxisActor2D::GetTickLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetNumberOfMinorTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfMinorTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfMinorTicks(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetNumberOfMinorTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetNumberOfMinorTicksMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMinorTicksMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMinorTicksMinValue() :
      op->vtkAxisActor2D::GetNumberOfMinorTicksMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetNumberOfMinorTicksMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMinorTicksMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMinorTicksMaxValue() :
      op->vtkAxisActor2D::GetNumberOfMinorTicksMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetNumberOfMinorTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMinorTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMinorTicks() :
      op->vtkAxisActor2D::GetNumberOfMinorTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetMinorTickLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorTickLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinorTickLength(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetMinorTickLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetMinorTickLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorTickLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinorTickLengthMinValue() :
      op->vtkAxisActor2D::GetMinorTickLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetMinorTickLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorTickLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinorTickLengthMaxValue() :
      op->vtkAxisActor2D::GetMinorTickLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetMinorTickLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorTickLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinorTickLength() :
      op->vtkAxisActor2D::GetMinorTickLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetTickOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTickOffset(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetTickOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTickOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickOffsetMinValue() :
      op->vtkAxisActor2D::GetTickOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTickOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickOffsetMaxValue() :
      op->vtkAxisActor2D::GetTickOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTickOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickOffset() :
      op->vtkAxisActor2D::GetTickOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisVisibility(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisVisibility() :
      op->vtkAxisActor2D::GetAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_AxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxisVisibilityOn();
    }
    else
    {
      op->vtkAxisActor2D::AxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_AxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxisVisibilityOff();
    }
    else
    {
      op->vtkAxisActor2D::AxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTickVisibility(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickVisibility() :
      op->vtkAxisActor2D::GetTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_TickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TickVisibilityOn();
    }
    else
    {
      op->vtkAxisActor2D::TickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_TickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TickVisibilityOff();
    }
    else
    {
      op->vtkAxisActor2D::TickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelVisibility(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelVisibility() :
      op->vtkAxisActor2D::GetLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOn();
    }
    else
    {
      op->vtkAxisActor2D::LabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOff();
    }
    else
    {
      op->vtkAxisActor2D::LabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleVisibility(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetTitleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleVisibility() :
      op->vtkAxisActor2D::GetTitleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_TitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TitleVisibilityOn();
    }
    else
    {
      op->vtkAxisActor2D::TitleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_TitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TitleVisibilityOff();
    }
    else
    {
      op->vtkAxisActor2D::TitleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitlePosition(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetTitlePosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTitlePosition() :
      op->vtkAxisActor2D::GetTitlePosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetFontFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFontFactor(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetFontFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetFontFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFontFactorMinValue() :
      op->vtkAxisActor2D::GetFontFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetFontFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFontFactorMaxValue() :
      op->vtkAxisActor2D::GetFontFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetFontFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFontFactor() :
      op->vtkAxisActor2D::GetFontFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetLabelFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelFactor(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetLabelFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetLabelFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelFactorMinValue() :
      op->vtkAxisActor2D::GetLabelFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetLabelFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelFactorMaxValue() :
      op->vtkAxisActor2D::GetLabelFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetLabelFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelFactor() :
      op->vtkAxisActor2D::GetLabelFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkAxisActor2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkAxisActor2D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkAxisActor2D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkAxisActor2D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

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
      op->vtkAxisActor2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_ComputeRange(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeRange");

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  int temp2;
  int temp3;
  double temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkAxisActor2D::ComputeRange(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetSizeFontRelativeToAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeFontRelativeToAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSizeFontRelativeToAxis(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetSizeFontRelativeToAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetSizeFontRelativeToAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeFontRelativeToAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSizeFontRelativeToAxis() :
      op->vtkAxisActor2D::GetSizeFontRelativeToAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SizeFontRelativeToAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SizeFontRelativeToAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SizeFontRelativeToAxisOn();
    }
    else
    {
      op->vtkAxisActor2D::SizeFontRelativeToAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SizeFontRelativeToAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SizeFontRelativeToAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SizeFontRelativeToAxisOff();
    }
    else
    {
      op->vtkAxisActor2D::SizeFontRelativeToAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_SetUseFontSizeFromProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFontSizeFromProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseFontSizeFromProperty(temp0);
    }
    else
    {
      op->vtkAxisActor2D::SetUseFontSizeFromProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_GetUseFontSizeFromProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseFontSizeFromProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseFontSizeFromProperty() :
      op->vtkAxisActor2D::GetUseFontSizeFromProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_UseFontSizeFromPropertyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFontSizeFromPropertyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseFontSizeFromPropertyOn();
    }
    else
    {
      op->vtkAxisActor2D::UseFontSizeFromPropertyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_UseFontSizeFromPropertyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFontSizeFromPropertyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseFontSizeFromPropertyOff();
    }
    else
    {
      op->vtkAxisActor2D::UseFontSizeFromPropertyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor2D *op = static_cast<vtkAxisActor2D *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkAxisActor2D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAxisActor2D_Methods[] = {
  {"IsTypeOf", PyvtkAxisActor2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAxisActor2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAxisActor2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAxisActor2D\nC++: static vtkAxisActor2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAxisActor2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAxisActor2D\nC++: vtkAxisActor2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAxisActor2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAxisActor2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetPoint1Coordinate", PyvtkAxisActor2D_GetPoint1Coordinate, METH_VARARGS,
   "GetPoint1Coordinate(self) -> vtkCoordinate\nC++: virtual vtkCoordinate *GetPoint1Coordinate()\n\nSpecify the position of the first point defining the axis. Note:\nbackward compatibility only, use vtkActor2D's Position instead.\n"},
  {"SetPoint1", PyvtkAxisActor2D_SetPoint1, METH_VARARGS,
   "SetPoint1(self, x:[float, float]) -> None\nC++: virtual void SetPoint1(double x[2])\nSetPoint1(self, x:float, y:float) -> None\nC++: virtual void SetPoint1(double x, double y)\n\n"},
  {"GetPoint1", PyvtkAxisActor2D_GetPoint1, METH_VARARGS,
   "GetPoint1(self) -> Pointer\nC++: virtual double *GetPoint1()\n\n"},
  {"GetPoint2Coordinate", PyvtkAxisActor2D_GetPoint2Coordinate, METH_VARARGS,
   "GetPoint2Coordinate(self) -> vtkCoordinate\nC++: virtual vtkCoordinate *GetPoint2Coordinate()\n\nSpecify the position of the second point defining the axis. Note\nthat the order from Point1 to Point2 controls which side the tick\nmarks are drawn on (ticks are drawn on the right, if visible).\nNote: backward compatibility only, use vtkActor2D's Position2\ninstead.\n"},
  {"SetPoint2", PyvtkAxisActor2D_SetPoint2, METH_VARARGS,
   "SetPoint2(self, x:[float, float]) -> None\nC++: virtual void SetPoint2(double x[2])\nSetPoint2(self, x:float, y:float) -> None\nC++: virtual void SetPoint2(double x, double y)\n\n"},
  {"GetPoint2", PyvtkAxisActor2D_GetPoint2, METH_VARARGS,
   "GetPoint2(self) -> Pointer\nC++: virtual double *GetPoint2()\n\n"},
  {"SetRange", PyvtkAxisActor2D_SetRange, METH_VARARGS,
   "SetRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetRange(double _arg1, double _arg2)\nSetRange(self, _arg:(float, float)) -> None\nC++: void SetRange(const double _arg[2])\n\nSpecify the (min,max) axis range. This will be used in the\ngeneration of labels, if labels are visible.\n"},
  {"GetRange", PyvtkAxisActor2D_GetRange, METH_VARARGS,
   "GetRange(self) -> (float, float)\nC++: virtual double *GetRange()\n\n"},
  {"SetRulerMode", PyvtkAxisActor2D_SetRulerMode, METH_VARARGS,
   "SetRulerMode(self, _arg:int) -> None\nC++: virtual void SetRulerMode(vtkTypeBool _arg)\n\nSpecify whether this axis should act like a measuring tape (or\nruler) with specified major tick spacing. If enabled, the\ndistance between major ticks is controlled by the RulerDistance\nivar.\n"},
  {"GetRulerMode", PyvtkAxisActor2D_GetRulerMode, METH_VARARGS,
   "GetRulerMode(self) -> int\nC++: virtual vtkTypeBool GetRulerMode()\n\n"},
  {"RulerModeOn", PyvtkAxisActor2D_RulerModeOn, METH_VARARGS,
   "RulerModeOn(self) -> None\nC++: virtual void RulerModeOn()\n\n"},
  {"RulerModeOff", PyvtkAxisActor2D_RulerModeOff, METH_VARARGS,
   "RulerModeOff(self) -> None\nC++: virtual void RulerModeOff()\n\n"},
  {"SetRulerDistance", PyvtkAxisActor2D_SetRulerDistance, METH_VARARGS,
   "SetRulerDistance(self, _arg:float) -> None\nC++: virtual void SetRulerDistance(double _arg)\n\nSpecify the RulerDistance which indicates the spacing of the\nmajor ticks. This ivar only has effect when the RulerMode is on.\n"},
  {"GetRulerDistanceMinValue", PyvtkAxisActor2D_GetRulerDistanceMinValue, METH_VARARGS,
   "GetRulerDistanceMinValue(self) -> float\nC++: virtual double GetRulerDistanceMinValue()\n\n"},
  {"GetRulerDistanceMaxValue", PyvtkAxisActor2D_GetRulerDistanceMaxValue, METH_VARARGS,
   "GetRulerDistanceMaxValue(self) -> float\nC++: virtual double GetRulerDistanceMaxValue()\n\n"},
  {"GetRulerDistance", PyvtkAxisActor2D_GetRulerDistance, METH_VARARGS,
   "GetRulerDistance(self) -> float\nC++: virtual double GetRulerDistance()\n\n"},
  {"SetNumberOfLabels", PyvtkAxisActor2D_SetNumberOfLabels, METH_VARARGS,
   "SetNumberOfLabels(self, _arg:int) -> None\nC++: virtual void SetNumberOfLabels(int _arg)\n\nSet/Get the number of annotation labels to show. This also\ncontrols the number of major ticks shown. Note that this ivar\nonly holds meaning if the RulerMode is off.\n"},
  {"GetNumberOfLabelsMinValue", PyvtkAxisActor2D_GetNumberOfLabelsMinValue, METH_VARARGS,
   "GetNumberOfLabelsMinValue(self) -> int\nC++: virtual int GetNumberOfLabelsMinValue()\n\n"},
  {"GetNumberOfLabelsMaxValue", PyvtkAxisActor2D_GetNumberOfLabelsMaxValue, METH_VARARGS,
   "GetNumberOfLabelsMaxValue(self) -> int\nC++: virtual int GetNumberOfLabelsMaxValue()\n\n"},
  {"GetNumberOfLabels", PyvtkAxisActor2D_GetNumberOfLabels, METH_VARARGS,
   "GetNumberOfLabels(self) -> int\nC++: virtual int GetNumberOfLabels()\n\n"},
  {"SetLabelFormat", PyvtkAxisActor2D_SetLabelFormat, METH_VARARGS,
   "SetLabelFormat(self, _arg:str) -> None\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the labels on the scalar\nbar.\n"},
  {"GetLabelFormat", PyvtkAxisActor2D_GetLabelFormat, METH_VARARGS,
   "GetLabelFormat(self) -> str\nC++: virtual char *GetLabelFormat()\n\n"},
  {"SetAdjustLabels", PyvtkAxisActor2D_SetAdjustLabels, METH_VARARGS,
   "SetAdjustLabels(self, _arg:int) -> None\nC++: virtual void SetAdjustLabels(vtkTypeBool _arg)\n\nSet/Get the flag that controls whether the labels and ticks are\nadjusted for \"nice\" numerical values to make it easier to read\nthe labels. The adjustment is based in the Range instance\nvariable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to\nget the adjusted range and number of labels. Note that if\nRulerMode is on, then the number of labels is a function of the\nrange and ruler distance.\n"},
  {"GetAdjustLabels", PyvtkAxisActor2D_GetAdjustLabels, METH_VARARGS,
   "GetAdjustLabels(self) -> int\nC++: virtual vtkTypeBool GetAdjustLabels()\n\n"},
  {"AdjustLabelsOn", PyvtkAxisActor2D_AdjustLabelsOn, METH_VARARGS,
   "AdjustLabelsOn(self) -> None\nC++: virtual void AdjustLabelsOn()\n\n"},
  {"AdjustLabelsOff", PyvtkAxisActor2D_AdjustLabelsOff, METH_VARARGS,
   "AdjustLabelsOff(self) -> None\nC++: virtual void AdjustLabelsOff()\n\n"},
  {"GetAdjustedRange", PyvtkAxisActor2D_GetAdjustedRange, METH_VARARGS,
   "GetAdjustedRange(self) -> Pointer\nC++: virtual double *GetAdjustedRange()\nGetAdjustedRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void GetAdjustedRange(double &_arg1, double &_arg2)\nGetAdjustedRange(self, _arg:[float, float]) -> None\nC++: virtual void GetAdjustedRange(double _arg[2])\n\n"},
  {"GetAdjustedNumberOfLabels", PyvtkAxisActor2D_GetAdjustedNumberOfLabels, METH_VARARGS,
   "GetAdjustedNumberOfLabels(self) -> int\nC++: virtual int GetAdjustedNumberOfLabels()\n\n"},
  {"SetTitle", PyvtkAxisActor2D_SetTitle, METH_VARARGS,
   "SetTitle(self, _arg:str) -> None\nC++: virtual void SetTitle(const char *_arg)\n\nSet/Get the title of the scalar bar actor,\n"},
  {"GetTitle", PyvtkAxisActor2D_GetTitle, METH_VARARGS,
   "GetTitle(self) -> str\nC++: virtual char *GetTitle()\n\n"},
  {"SetTitleTextProperty", PyvtkAxisActor2D_SetTitleTextProperty, METH_VARARGS,
   "SetTitleTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property.\n"},
  {"GetTitleTextProperty", PyvtkAxisActor2D_GetTitleTextProperty, METH_VARARGS,
   "GetTitleTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTitleTextProperty()\n\n"},
  {"SetLabelTextProperty", PyvtkAxisActor2D_SetLabelTextProperty, METH_VARARGS,
   "SetLabelTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property.\n"},
  {"GetLabelTextProperty", PyvtkAxisActor2D_GetLabelTextProperty, METH_VARARGS,
   "GetLabelTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty()\n\n"},
  {"SetTickLength", PyvtkAxisActor2D_SetTickLength, METH_VARARGS,
   "SetTickLength(self, _arg:int) -> None\nC++: virtual void SetTickLength(int _arg)\n\nSet/Get the length of the tick marks (expressed in pixels or\ndisplay coordinates).\n"},
  {"GetTickLengthMinValue", PyvtkAxisActor2D_GetTickLengthMinValue, METH_VARARGS,
   "GetTickLengthMinValue(self) -> int\nC++: virtual int GetTickLengthMinValue()\n\n"},
  {"GetTickLengthMaxValue", PyvtkAxisActor2D_GetTickLengthMaxValue, METH_VARARGS,
   "GetTickLengthMaxValue(self) -> int\nC++: virtual int GetTickLengthMaxValue()\n\n"},
  {"GetTickLength", PyvtkAxisActor2D_GetTickLength, METH_VARARGS,
   "GetTickLength(self) -> int\nC++: virtual int GetTickLength()\n\n"},
  {"SetNumberOfMinorTicks", PyvtkAxisActor2D_SetNumberOfMinorTicks, METH_VARARGS,
   "SetNumberOfMinorTicks(self, _arg:int) -> None\nC++: virtual void SetNumberOfMinorTicks(int _arg)\n\nNumber of minor ticks to be displayed between each tick. Default\nis 0.\n"},
  {"GetNumberOfMinorTicksMinValue", PyvtkAxisActor2D_GetNumberOfMinorTicksMinValue, METH_VARARGS,
   "GetNumberOfMinorTicksMinValue(self) -> int\nC++: virtual int GetNumberOfMinorTicksMinValue()\n\n"},
  {"GetNumberOfMinorTicksMaxValue", PyvtkAxisActor2D_GetNumberOfMinorTicksMaxValue, METH_VARARGS,
   "GetNumberOfMinorTicksMaxValue(self) -> int\nC++: virtual int GetNumberOfMinorTicksMaxValue()\n\n"},
  {"GetNumberOfMinorTicks", PyvtkAxisActor2D_GetNumberOfMinorTicks, METH_VARARGS,
   "GetNumberOfMinorTicks(self) -> int\nC++: virtual int GetNumberOfMinorTicks()\n\n"},
  {"SetMinorTickLength", PyvtkAxisActor2D_SetMinorTickLength, METH_VARARGS,
   "SetMinorTickLength(self, _arg:int) -> None\nC++: virtual void SetMinorTickLength(int _arg)\n\nSet/Get the length of the minor tick marks (expressed in pixels\nor display coordinates).\n"},
  {"GetMinorTickLengthMinValue", PyvtkAxisActor2D_GetMinorTickLengthMinValue, METH_VARARGS,
   "GetMinorTickLengthMinValue(self) -> int\nC++: virtual int GetMinorTickLengthMinValue()\n\n"},
  {"GetMinorTickLengthMaxValue", PyvtkAxisActor2D_GetMinorTickLengthMaxValue, METH_VARARGS,
   "GetMinorTickLengthMaxValue(self) -> int\nC++: virtual int GetMinorTickLengthMaxValue()\n\n"},
  {"GetMinorTickLength", PyvtkAxisActor2D_GetMinorTickLength, METH_VARARGS,
   "GetMinorTickLength(self) -> int\nC++: virtual int GetMinorTickLength()\n\n"},
  {"SetTickOffset", PyvtkAxisActor2D_SetTickOffset, METH_VARARGS,
   "SetTickOffset(self, _arg:int) -> None\nC++: virtual void SetTickOffset(int _arg)\n\nSet/Get the offset of the labels (expressed in pixels or display\ncoordinates). The offset is the distance of labels from tick\nmarks or other objects.\n"},
  {"GetTickOffsetMinValue", PyvtkAxisActor2D_GetTickOffsetMinValue, METH_VARARGS,
   "GetTickOffsetMinValue(self) -> int\nC++: virtual int GetTickOffsetMinValue()\n\n"},
  {"GetTickOffsetMaxValue", PyvtkAxisActor2D_GetTickOffsetMaxValue, METH_VARARGS,
   "GetTickOffsetMaxValue(self) -> int\nC++: virtual int GetTickOffsetMaxValue()\n\n"},
  {"GetTickOffset", PyvtkAxisActor2D_GetTickOffset, METH_VARARGS,
   "GetTickOffset(self) -> int\nC++: virtual int GetTickOffset()\n\n"},
  {"SetAxisVisibility", PyvtkAxisActor2D_SetAxisVisibility, METH_VARARGS,
   "SetAxisVisibility(self, _arg:int) -> None\nC++: virtual void SetAxisVisibility(vtkTypeBool _arg)\n\nSet/Get visibility of the axis line.\n"},
  {"GetAxisVisibility", PyvtkAxisActor2D_GetAxisVisibility, METH_VARARGS,
   "GetAxisVisibility(self) -> int\nC++: virtual vtkTypeBool GetAxisVisibility()\n\n"},
  {"AxisVisibilityOn", PyvtkAxisActor2D_AxisVisibilityOn, METH_VARARGS,
   "AxisVisibilityOn(self) -> None\nC++: virtual void AxisVisibilityOn()\n\n"},
  {"AxisVisibilityOff", PyvtkAxisActor2D_AxisVisibilityOff, METH_VARARGS,
   "AxisVisibilityOff(self) -> None\nC++: virtual void AxisVisibilityOff()\n\n"},
  {"SetTickVisibility", PyvtkAxisActor2D_SetTickVisibility, METH_VARARGS,
   "SetTickVisibility(self, _arg:int) -> None\nC++: virtual void SetTickVisibility(vtkTypeBool _arg)\n\nSet/Get visibility of the axis tick marks.\n"},
  {"GetTickVisibility", PyvtkAxisActor2D_GetTickVisibility, METH_VARARGS,
   "GetTickVisibility(self) -> int\nC++: virtual vtkTypeBool GetTickVisibility()\n\n"},
  {"TickVisibilityOn", PyvtkAxisActor2D_TickVisibilityOn, METH_VARARGS,
   "TickVisibilityOn(self) -> None\nC++: virtual void TickVisibilityOn()\n\n"},
  {"TickVisibilityOff", PyvtkAxisActor2D_TickVisibilityOff, METH_VARARGS,
   "TickVisibilityOff(self) -> None\nC++: virtual void TickVisibilityOff()\n\n"},
  {"SetLabelVisibility", PyvtkAxisActor2D_SetLabelVisibility, METH_VARARGS,
   "SetLabelVisibility(self, _arg:int) -> None\nC++: virtual void SetLabelVisibility(vtkTypeBool _arg)\n\nSet/Get visibility of the axis labels.\n"},
  {"GetLabelVisibility", PyvtkAxisActor2D_GetLabelVisibility, METH_VARARGS,
   "GetLabelVisibility(self) -> int\nC++: virtual vtkTypeBool GetLabelVisibility()\n\n"},
  {"LabelVisibilityOn", PyvtkAxisActor2D_LabelVisibilityOn, METH_VARARGS,
   "LabelVisibilityOn(self) -> None\nC++: virtual void LabelVisibilityOn()\n\n"},
  {"LabelVisibilityOff", PyvtkAxisActor2D_LabelVisibilityOff, METH_VARARGS,
   "LabelVisibilityOff(self) -> None\nC++: virtual void LabelVisibilityOff()\n\n"},
  {"SetTitleVisibility", PyvtkAxisActor2D_SetTitleVisibility, METH_VARARGS,
   "SetTitleVisibility(self, _arg:int) -> None\nC++: virtual void SetTitleVisibility(vtkTypeBool _arg)\n\nSet/Get visibility of the axis title.\n"},
  {"GetTitleVisibility", PyvtkAxisActor2D_GetTitleVisibility, METH_VARARGS,
   "GetTitleVisibility(self) -> int\nC++: virtual vtkTypeBool GetTitleVisibility()\n\n"},
  {"TitleVisibilityOn", PyvtkAxisActor2D_TitleVisibilityOn, METH_VARARGS,
   "TitleVisibilityOn(self) -> None\nC++: virtual void TitleVisibilityOn()\n\n"},
  {"TitleVisibilityOff", PyvtkAxisActor2D_TitleVisibilityOff, METH_VARARGS,
   "TitleVisibilityOff(self) -> None\nC++: virtual void TitleVisibilityOff()\n\n"},
  {"SetTitlePosition", PyvtkAxisActor2D_SetTitlePosition, METH_VARARGS,
   "SetTitlePosition(self, _arg:float) -> None\nC++: virtual void SetTitlePosition(double _arg)\n\nSet/Get position of the axis title. 0 is at the start of the axis\nwhereas 1 is at the end.\n"},
  {"GetTitlePosition", PyvtkAxisActor2D_GetTitlePosition, METH_VARARGS,
   "GetTitlePosition(self) -> float\nC++: virtual double GetTitlePosition()\n\n"},
  {"SetFontFactor", PyvtkAxisActor2D_SetFontFactor, METH_VARARGS,
   "SetFontFactor(self, _arg:float) -> None\nC++: virtual void SetFontFactor(double _arg)\n\nSet/Get the factor that controls the overall size of the fonts\nused to label and title the axes. This ivar used in conjunction\nwith the LabelFactor can be used to control font sizes.\n"},
  {"GetFontFactorMinValue", PyvtkAxisActor2D_GetFontFactorMinValue, METH_VARARGS,
   "GetFontFactorMinValue(self) -> float\nC++: virtual double GetFontFactorMinValue()\n\n"},
  {"GetFontFactorMaxValue", PyvtkAxisActor2D_GetFontFactorMaxValue, METH_VARARGS,
   "GetFontFactorMaxValue(self) -> float\nC++: virtual double GetFontFactorMaxValue()\n\n"},
  {"GetFontFactor", PyvtkAxisActor2D_GetFontFactor, METH_VARARGS,
   "GetFontFactor(self) -> float\nC++: virtual double GetFontFactor()\n\n"},
  {"SetLabelFactor", PyvtkAxisActor2D_SetLabelFactor, METH_VARARGS,
   "SetLabelFactor(self, _arg:float) -> None\nC++: virtual void SetLabelFactor(double _arg)\n\nSet/Get the factor that controls the relative size of the axis\nlabels to the axis title.\n"},
  {"GetLabelFactorMinValue", PyvtkAxisActor2D_GetLabelFactorMinValue, METH_VARARGS,
   "GetLabelFactorMinValue(self) -> float\nC++: virtual double GetLabelFactorMinValue()\n\n"},
  {"GetLabelFactorMaxValue", PyvtkAxisActor2D_GetLabelFactorMaxValue, METH_VARARGS,
   "GetLabelFactorMaxValue(self) -> float\nC++: virtual double GetLabelFactorMaxValue()\n\n"},
  {"GetLabelFactor", PyvtkAxisActor2D_GetLabelFactor, METH_VARARGS,
   "GetLabelFactor(self) -> float\nC++: virtual double GetLabelFactor()\n\n"},
  {"RenderOverlay", PyvtkAxisActor2D_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nDraw the axis.\n"},
  {"RenderOpaqueGeometry", PyvtkAxisActor2D_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkAxisActor2D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkAxisActor2D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"ReleaseGraphicsResources", PyvtkAxisActor2D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"ComputeRange", PyvtkAxisActor2D_ComputeRange, METH_VARARGS,
   "ComputeRange(inRange:[float, float], outRange:[float, float],\n    inNumTicks:int, outNumTicks:int, interval:float) -> None\nC++: static void ComputeRange(double inRange[2],\n    double outRange[2], int inNumTicks, int &outNumTicks,\n    double &interval)\n\nThis method computes the range of the axis given an input range.\nIt also computes the number of tick marks given a suggested\nnumber. (The number of tick marks includes end ticks as well.)\nThe number of tick marks computed (in conjunction with the output\nrange) will yield \"nice\" tick values. For example, if the input\nrange is (0.25,96.7) and the number of ticks requested is 10, the\noutput range will be (0,100) with the number of computed ticks to\n11 to yield tick values of (0,10,20,...,100).\n"},
  {"SetSizeFontRelativeToAxis", PyvtkAxisActor2D_SetSizeFontRelativeToAxis, METH_VARARGS,
   "SetSizeFontRelativeToAxis(self, _arg:int) -> None\nC++: virtual void SetSizeFontRelativeToAxis(vtkTypeBool _arg)\n\nSpecify whether to size the fonts relative to the viewport or\nrelative to length of the axis. By default, fonts are resized\nrelative to the viewport.\n"},
  {"GetSizeFontRelativeToAxis", PyvtkAxisActor2D_GetSizeFontRelativeToAxis, METH_VARARGS,
   "GetSizeFontRelativeToAxis(self) -> int\nC++: virtual vtkTypeBool GetSizeFontRelativeToAxis()\n\n"},
  {"SizeFontRelativeToAxisOn", PyvtkAxisActor2D_SizeFontRelativeToAxisOn, METH_VARARGS,
   "SizeFontRelativeToAxisOn(self) -> None\nC++: virtual void SizeFontRelativeToAxisOn()\n\n"},
  {"SizeFontRelativeToAxisOff", PyvtkAxisActor2D_SizeFontRelativeToAxisOff, METH_VARARGS,
   "SizeFontRelativeToAxisOff(self) -> None\nC++: virtual void SizeFontRelativeToAxisOff()\n\n"},
  {"SetUseFontSizeFromProperty", PyvtkAxisActor2D_SetUseFontSizeFromProperty, METH_VARARGS,
   "SetUseFontSizeFromProperty(self, _arg:int) -> None\nC++: virtual void SetUseFontSizeFromProperty(vtkTypeBool _arg)\n\nBy default the AxisActor controls the font size of the axis\nlabel.  If this option is set to true, it will instead use\nwhatever font size is set in the vtkTextProperty, allowing\nexternal control of the axis size.\n"},
  {"GetUseFontSizeFromProperty", PyvtkAxisActor2D_GetUseFontSizeFromProperty, METH_VARARGS,
   "GetUseFontSizeFromProperty(self) -> int\nC++: virtual vtkTypeBool GetUseFontSizeFromProperty()\n\n"},
  {"UseFontSizeFromPropertyOn", PyvtkAxisActor2D_UseFontSizeFromPropertyOn, METH_VARARGS,
   "UseFontSizeFromPropertyOn(self) -> None\nC++: virtual void UseFontSizeFromPropertyOn()\n\n"},
  {"UseFontSizeFromPropertyOff", PyvtkAxisActor2D_UseFontSizeFromPropertyOff, METH_VARARGS,
   "UseFontSizeFromPropertyOff(self) -> None\nC++: virtual void UseFontSizeFromPropertyOff()\n\n"},
  {"ShallowCopy", PyvtkAxisActor2D_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of an axis actor. Overloads the virtual vtkProp\nmethod.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAxisActor2D_Doc =
  "vtkAxisActor2D - Create an axis with tick marks and labels\n\n"
  "Superclass: vtkActor2D\n\n"
  "vtkAxisActor2D creates an axis with tick marks, labels, and/or a\n"
  "title, depending on the particular instance variable settings.\n"
  "vtkAxisActor2D is a 2D actor; that is, it is drawn on the overlay\n"
  "plane and is not occluded by 3D geometry. To use this class, you\n"
  "typically specify two points defining the start and end points of the\n"
  "line (x-y definition using vtkCoordinate class), the number of\n"
  "labels, and the data range (min,max). You can also control what parts\n"
  "of the axis are visible including the line, the tick marks, the\n"
  "labels, and the title.  You can also specify the label format (a\n"
  "printf style format).\n\n"
  "This class decides what font size to use and how to locate the\n"
  "labels. It also decides how to create reasonable tick marks and\n"
  "labels. The number of labels and the range of values may not match\n"
  "the number specified, but should be close.\n\n"
  "Labels are drawn on the \"right\" side of the axis. The \"right\" side is\n"
  "the side of the axis on the right as you move from Position to\n"
  "Position2. The way the labels and title line up with the axis and\n"
  "tick marks depends on whether the line is considered horizontal or\n"
  "vertical.\n\n"
  "The vtkActor2D instance variables Position and Position2 are\n"
  "instances of vtkCoordinate. Note that the Position2 is an absolute\n"
  "position in that class (it was by default relative to Position in\n"
  "vtkActor2D).\n\n"
  "What this means is that you can specify the axis in a variety of\n"
  "coordinate systems. Also, the axis does not have to be either\n"
  "horizontal or vertical. The tick marks are created so that they are\n"
  "perpendicular to the axis.\n\n"
  "Set the text property/attributes of the title and the labels through\n"
  "the vtkTextProperty objects associated to this actor.\n\n"
  "@sa\n"
  "vtkCubeAxesActor2D can be used to create axes in world coordinate\n"
  "space.\n\n"
  "@sa\n"
  "vtkActor2D vtkTextMapper vtkPolyDataMapper2D vtkScalarBarActor\n"
  "vtkCoordinate vtkTextProperty\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxisActor2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkAxisActor2D", // tp_name
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
  PyvtkAxisActor2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAxisActor2D_StaticNew()
{
  return vtkAxisActor2D::New();
}

PyObject *PyvtkAxisActor2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAxisActor2D_Type, PyvtkAxisActor2D_Methods,
    "vtkAxisActor2D",
 &PyvtkAxisActor2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkActor2D");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAxisActor2D_LabelMax_Type);
  PyVTKEnum_Add(&PyvtkAxisActor2D_LabelMax_Type, "vtkAxisActor2D.LabelMax");

  o = (PyObject *)&PyvtkAxisActor2D_LabelMax_Type;
  if (PyDict_SetItemString(d, "LabelMax", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkAxisActor2D_LabelMax_FromEnum(vtkAxisActor2D::VTK_MAX_LABELS);
  if (o)
  {
    PyDict_SetItemString(d, "VTK_MAX_LABELS", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAxisActor2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAxisActor2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAxisActor2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

