// python wrapper for vtkDepthSortPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDepthSortPolyData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDepthSortPolyData(PyObject *dict); }
extern "C" { PyObject *PyvtkDepthSortPolyData_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDepthSortPolyData_Directions_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkDepthSortPolyData.Directions", // tp_name
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
PyObject *PyvtkDepthSortPolyData_Directions_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDepthSortPolyData_Directions_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDepthSortPolyData_SortMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkDepthSortPolyData.SortMode", // tp_name
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
PyObject *PyvtkDepthSortPolyData_SortMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDepthSortPolyData_SortMode_Type, static_cast<int>(val));
}


static PyObject *
PyvtkDepthSortPolyData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDepthSortPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDepthSortPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDepthSortPolyData *tempr = vtkDepthSortPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDepthSortPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDepthSortPolyData::NewInstance());

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
PyvtkDepthSortPolyData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDepthSortPolyData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDepthSortPolyData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirection(temp0);
    }
    else
    {
      op->vtkDepthSortPolyData::SetDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_GetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDirection() :
      op->vtkDepthSortPolyData::GetDirection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetDirectionToFrontToBack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToFrontToBack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionToFrontToBack();
    }
    else
    {
      op->vtkDepthSortPolyData::SetDirectionToFrontToBack();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetDirectionToBackToFront(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToBackToFront");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionToBackToFront();
    }
    else
    {
      op->vtkDepthSortPolyData::SetDirectionToBackToFront();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetDirectionToSpecifiedVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToSpecifiedVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionToSpecifiedVector();
    }
    else
    {
      op->vtkDepthSortPolyData::SetDirectionToSpecifiedVector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetDepthSortMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthSortMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepthSortMode(temp0);
    }
    else
    {
      op->vtkDepthSortPolyData::SetDepthSortMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_GetDepthSortMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthSortMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDepthSortMode() :
      op->vtkDepthSortPolyData::GetDepthSortMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetDepthSortModeToFirstPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthSortModeToFirstPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDepthSortModeToFirstPoint();
    }
    else
    {
      op->vtkDepthSortPolyData::SetDepthSortModeToFirstPoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetDepthSortModeToBoundsCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthSortModeToBoundsCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDepthSortModeToBoundsCenter();
    }
    else
    {
      op->vtkDepthSortPolyData::SetDepthSortModeToBoundsCenter();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetDepthSortModeToParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthSortModeToParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDepthSortModeToParametricCenter();
    }
    else
    {
      op->vtkDepthSortPolyData::SetDepthSortModeToParametricCenter();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->SetCamera(temp0);
    }
    else
    {
      op->vtkDepthSortPolyData::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkDepthSortPolyData::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  vtkProp3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
  {
    if (ap.IsBound())
    {
      op->SetProp3D(temp0);
    }
    else
    {
      op->vtkDepthSortPolyData::SetProp3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_GetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3D *tempr = (ap.IsBound() ?
      op->GetProp3D() :
      op->vtkDepthSortPolyData::GetProp3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

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
      op->SetVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDepthSortPolyData::SetVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDepthSortPolyData_SetVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetVector(temp0);
    }
    else
    {
      op->vtkDepthSortPolyData::SetVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDepthSortPolyData_SetVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDepthSortPolyData_SetVector_s1(self, args);
    case 1:
      return PyvtkDepthSortPolyData_SetVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVector");
  return nullptr;
}


static PyObject *
PyvtkDepthSortPolyData_GetVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVector() :
      op->vtkDepthSortPolyData::GetVector());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDepthSortPolyData::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDepthSortPolyData_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkDepthSortPolyData::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDepthSortPolyData_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDepthSortPolyData_SetOrigin_s1(self, args);
    case 1:
      return PyvtkDepthSortPolyData_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkDepthSortPolyData_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkDepthSortPolyData::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SetSortScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSortScalars(temp0);
    }
    else
    {
      op->vtkDepthSortPolyData::SetSortScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_GetSortScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortScalars() :
      op->vtkDepthSortPolyData::GetSortScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SortScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SortScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SortScalarsOn();
    }
    else
    {
      op->vtkDepthSortPolyData::SortScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_SortScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SortScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SortScalarsOff();
    }
    else
    {
      op->vtkDepthSortPolyData::SortScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthSortPolyData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthSortPolyData *op = static_cast<vtkDepthSortPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDepthSortPolyData::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDepthSortPolyData_Methods[] = {
  {"IsTypeOf", PyvtkDepthSortPolyData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDepthSortPolyData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDepthSortPolyData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDepthSortPolyData\nC++: static vtkDepthSortPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDepthSortPolyData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDepthSortPolyData\nC++: vtkDepthSortPolyData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDepthSortPolyData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDepthSortPolyData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDirection", PyvtkDepthSortPolyData_SetDirection, METH_VARARGS,
   "SetDirection(self, _arg:int) -> None\nC++: virtual void SetDirection(int _arg)\n\nSpecify the sort method for the polygonal primitives. By default,\nthe poly data is sorted from back to front.\n"},
  {"GetDirection", PyvtkDepthSortPolyData_GetDirection, METH_VARARGS,
   "GetDirection(self) -> int\nC++: virtual int GetDirection()\n\n"},
  {"SetDirectionToFrontToBack", PyvtkDepthSortPolyData_SetDirectionToFrontToBack, METH_VARARGS,
   "SetDirectionToFrontToBack(self) -> None\nC++: void SetDirectionToFrontToBack()\n\n"},
  {"SetDirectionToBackToFront", PyvtkDepthSortPolyData_SetDirectionToBackToFront, METH_VARARGS,
   "SetDirectionToBackToFront(self) -> None\nC++: void SetDirectionToBackToFront()\n\n"},
  {"SetDirectionToSpecifiedVector", PyvtkDepthSortPolyData_SetDirectionToSpecifiedVector, METH_VARARGS,
   "SetDirectionToSpecifiedVector(self) -> None\nC++: void SetDirectionToSpecifiedVector()\n\n"},
  {"SetDepthSortMode", PyvtkDepthSortPolyData_SetDepthSortMode, METH_VARARGS,
   "SetDepthSortMode(self, _arg:int) -> None\nC++: virtual void SetDepthSortMode(int _arg)\n\nSpecify the point to use when sorting. The fastest is to just\ntake the first cell point. Other options are to take the bounding\nbox center or the parametric center of the cell. By default, the\nfirst cell point is used.\n"},
  {"GetDepthSortMode", PyvtkDepthSortPolyData_GetDepthSortMode, METH_VARARGS,
   "GetDepthSortMode(self) -> int\nC++: virtual int GetDepthSortMode()\n\n"},
  {"SetDepthSortModeToFirstPoint", PyvtkDepthSortPolyData_SetDepthSortModeToFirstPoint, METH_VARARGS,
   "SetDepthSortModeToFirstPoint(self) -> None\nC++: void SetDepthSortModeToFirstPoint()\n\n"},
  {"SetDepthSortModeToBoundsCenter", PyvtkDepthSortPolyData_SetDepthSortModeToBoundsCenter, METH_VARARGS,
   "SetDepthSortModeToBoundsCenter(self) -> None\nC++: void SetDepthSortModeToBoundsCenter()\n\n"},
  {"SetDepthSortModeToParametricCenter", PyvtkDepthSortPolyData_SetDepthSortModeToParametricCenter, METH_VARARGS,
   "SetDepthSortModeToParametricCenter(self) -> None\nC++: void SetDepthSortModeToParametricCenter()\n\n"},
  {"SetCamera", PyvtkDepthSortPolyData_SetCamera, METH_VARARGS,
   "SetCamera(self, __a:vtkCamera) -> None\nC++: virtual void SetCamera(vtkCamera *)\n\nSpecify a camera that is used to define a view direction along\nwhich the cells are sorted. This ivar only has effect if the\ndirection is set to front-to-back or back-to-front, and a camera\nis specified.\n"},
  {"GetCamera", PyvtkDepthSortPolyData_GetCamera, METH_VARARGS,
   "GetCamera(self) -> vtkCamera\nC++: virtual vtkCamera *GetCamera()\n\n"},
  {"SetProp3D", PyvtkDepthSortPolyData_SetProp3D, METH_VARARGS,
   "SetProp3D(self, __a:vtkProp3D) -> None\nC++: void SetProp3D(vtkProp3D *)\n\nSpecify a transformation matrix (via the vtkProp3D::GetMatrix()\nmethod) that is used to include the effects of transformation.\nThis ivar only has effect if the direction is set to\nfront-to-back or back-to-front, and a camera is specified.\nSpecifying the vtkProp3D is optional.\n"},
  {"GetProp3D", PyvtkDepthSortPolyData_GetProp3D, METH_VARARGS,
   "GetProp3D(self) -> vtkProp3D\nC++: vtkProp3D *GetProp3D()\n\n"},
  {"SetVector", PyvtkDepthSortPolyData_SetVector, METH_VARARGS,
   "SetVector(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetVector(double _arg1, double _arg2,\n    double _arg3)\nSetVector(self, _arg:(float, float, float)) -> None\nC++: virtual void SetVector(const double _arg[3])\n\nSet/Get the sort direction. This ivar only has effect if the sort\ndirection is set to SetDirectionToSpecifiedVector(). The sort\noccurs in the direction of the vector.\n"},
  {"GetVector", PyvtkDepthSortPolyData_GetVector, METH_VARARGS,
   "GetVector(self) -> (float, float, float)\nC++: virtual double *GetVector()\n\n"},
  {"SetOrigin", PyvtkDepthSortPolyData_SetOrigin, METH_VARARGS,
   "SetOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOrigin(const double _arg[3])\n\nSet/Get the sort origin. This ivar only has effect if the sort\ndirection is set to SetDirectionToSpecifiedVector(). The sort\noccurs in the direction of the vector, with this point specifying\nthe origin.\n"},
  {"GetOrigin", PyvtkDepthSortPolyData_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetSortScalars", PyvtkDepthSortPolyData_SetSortScalars, METH_VARARGS,
   "SetSortScalars(self, _arg:int) -> None\nC++: virtual void SetSortScalars(vtkTypeBool _arg)\n\nSet/Get a flag that controls the generation of scalar values\ncorresponding to the sort order. If enabled, the output of this\nfilter will include scalar values that range from 0 to\n(ncells-1), where 0 is closest to the sort direction.\n"},
  {"GetSortScalars", PyvtkDepthSortPolyData_GetSortScalars, METH_VARARGS,
   "GetSortScalars(self) -> int\nC++: virtual vtkTypeBool GetSortScalars()\n\n"},
  {"SortScalarsOn", PyvtkDepthSortPolyData_SortScalarsOn, METH_VARARGS,
   "SortScalarsOn(self) -> None\nC++: virtual void SortScalarsOn()\n\n"},
  {"SortScalarsOff", PyvtkDepthSortPolyData_SortScalarsOff, METH_VARARGS,
   "SortScalarsOff(self) -> None\nC++: virtual void SortScalarsOff()\n\n"},
  {"GetMTime", PyvtkDepthSortPolyData_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn MTime also considering the dependent objects: the camera\nand/or the prop3D.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDepthSortPolyData_Doc =
  "vtkDepthSortPolyData - sort poly data along camera view direction\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkDepthSortPolyData rearranges the order of cells so that certain\n"
  "rendering operations (e.g., transparency or Painter's algorithms)\n"
  "generate correct results. To use this filter you must specify the\n"
  "direction vector along which to sort the cells. You can do this by\n"
  "specifying a camera and/or prop to define a view direction; or\n"
  "explicitly set a view direction.\n\n"
  "@warning\n"
  "The sort operation will not work well for long, thin primitives, or\n"
  "cells that intersect, overlap, or interpenetrate each other.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDepthSortPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkDepthSortPolyData", // tp_name
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
  PyvtkDepthSortPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDepthSortPolyData_StaticNew()
{
  return vtkDepthSortPolyData::New();
}

PyObject *PyvtkDepthSortPolyData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDepthSortPolyData_Type, PyvtkDepthSortPolyData_Methods,
    "vtkDepthSortPolyData",
 &PyvtkDepthSortPolyData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDepthSortPolyData_Directions_Type);
  PyVTKEnum_Add(&PyvtkDepthSortPolyData_Directions_Type, "vtkDepthSortPolyData.Directions");

  o = (PyObject *)&PyvtkDepthSortPolyData_Directions_Type;
  if (PyDict_SetItemString(d, "Directions", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkDepthSortPolyData_SortMode_Type);
  PyVTKEnum_Add(&PyvtkDepthSortPolyData_SortMode_Type, "vtkDepthSortPolyData.SortMode");

  o = (PyObject *)&PyvtkDepthSortPolyData_SortMode_Type;
  if (PyDict_SetItemString(d, "SortMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkDepthSortPolyData::Directions cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "VTK_DIRECTION_BACK_TO_FRONT", vtkDepthSortPolyData::VTK_DIRECTION_BACK_TO_FRONT },
        { "VTK_DIRECTION_FRONT_TO_BACK", vtkDepthSortPolyData::VTK_DIRECTION_FRONT_TO_BACK },
        { "VTK_DIRECTION_SPECIFIED_VECTOR", vtkDepthSortPolyData::VTK_DIRECTION_SPECIFIED_VECTOR },
      };

    o = PyvtkDepthSortPolyData_Directions_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkDepthSortPolyData::SortMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "VTK_SORT_FIRST_POINT", vtkDepthSortPolyData::VTK_SORT_FIRST_POINT },
        { "VTK_SORT_BOUNDS_CENTER", vtkDepthSortPolyData::VTK_SORT_BOUNDS_CENTER },
        { "VTK_SORT_PARAMETRIC_CENTER", vtkDepthSortPolyData::VTK_SORT_PARAMETRIC_CENTER },
      };

    o = PyvtkDepthSortPolyData_SortMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDepthSortPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDepthSortPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDepthSortPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

