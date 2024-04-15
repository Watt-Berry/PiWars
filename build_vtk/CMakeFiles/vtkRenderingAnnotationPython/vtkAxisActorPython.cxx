// python wrapper for vtkAxisActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAxisActor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAxisActor(PyObject *dict); }
extern "C" { PyObject *PyvtkAxisActor_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxisActor_TickLocation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkAxisActor.TickLocation", // tp_name
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
PyObject *PyvtkAxisActor_TickLocation_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAxisActor_TickLocation_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxisActor_AlignLocation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkAxisActor.AlignLocation", // tp_name
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
PyObject *PyvtkAxisActor_AlignLocation_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAxisActor_AlignLocation_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxisActor_AxisType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkAxisActor.AxisType", // tp_name
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
PyObject *PyvtkAxisActor_AxisType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAxisActor_AxisType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxisActor_AxisPosition_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkAxisActor.AxisPosition", // tp_name
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
PyObject *PyvtkAxisActor_AxisPosition_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAxisActor_AxisPosition_Type, static_cast<int>(val));
}


static PyObject *
PyvtkAxisActor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAxisActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxisActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAxisActor *tempr = vtkAxisActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxisActor::NewInstance());

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
PyvtkAxisActor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAxisActor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAxisActor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetPoint1Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPoint1Coordinate() :
      op->vtkAxisActor::GetPoint1Coordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
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
      op->vtkAxisActor::SetPoint1(temp0);
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
PyvtkAxisActor_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAxisActor::SetPoint1(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxisActor_SetPoint1_s1(self, args);
    case 3:
      return PyvtkAxisActor_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}


static PyObject *
PyvtkAxisActor_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkAxisActor::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetPoint2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPoint2Coordinate() :
      op->vtkAxisActor::GetPoint2Coordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
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
      op->vtkAxisActor::SetPoint2(temp0);
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
PyvtkAxisActor_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAxisActor::SetPoint2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxisActor_SetPoint2_s1(self, args);
    case 3:
      return PyvtkAxisActor_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}


static PyObject *
PyvtkAxisActor_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkAxisActor::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAxisActor_SetRange_s1(self, args);
    case 1:
      return PyvtkAxisActor_SetRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return nullptr;
}


static PyObject *
PyvtkAxisActor_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkAxisActor::GetRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkAxisActor::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkAxisActor::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxisActor_SetBounds_s1(self, args);
    case 6:
      return PyvtkAxisActor_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}


static PyObject *
PyvtkAxisActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAxisActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkAxisActor::GetBounds(temp0);
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
PyvtkAxisActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAxisActor_GetBounds_s1(self, args);
    case 1:
      return PyvtkAxisActor_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkAxisActor_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkAxisActor::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetUseTextActor3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTextActor3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseTextActor3D(temp0);
    }
    else
    {
      op->vtkAxisActor::SetUseTextActor3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetUseTextActor3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTextActor3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseTextActor3D() :
      op->vtkAxisActor::GetUseTextActor3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMinorTicksVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorTicksVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinorTicksVisible(temp0);
    }
    else
    {
      op->vtkAxisActor::SetMinorTicksVisible(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMinorTicksVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorTicksVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMinorTicksVisible() :
      op->vtkAxisActor::GetMinorTicksVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_MinorTicksVisibleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MinorTicksVisibleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MinorTicksVisibleOn();
    }
    else
    {
      op->vtkAxisActor::MinorTicksVisibleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_MinorTicksVisibleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MinorTicksVisibleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MinorTicksVisibleOff();
    }
    else
    {
      op->vtkAxisActor::MinorTicksVisibleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkAxisActor::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetExponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExponent(temp0);
    }
    else
    {
      op->vtkAxisActor::SetExponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetExponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetExponent() :
      op->vtkAxisActor::GetExponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMajorTickSize(temp0);
    }
    else
    {
      op->vtkAxisActor::SetMajorTickSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMajorTickSize() :
      op->vtkAxisActor::GetMajorTickSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMinorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinorTickSize(temp0);
    }
    else
    {
      op->vtkAxisActor::SetMinorTickSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMinorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinorTickSize() :
      op->vtkAxisActor::GetMinorTickSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTickLocation(temp0);
    }
    else
    {
      op->vtkAxisActor::SetTickLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTickLocationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLocationMinValue() :
      op->vtkAxisActor::GetTickLocationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTickLocationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLocationMaxValue() :
      op->vtkAxisActor::GetTickLocationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTickLocation() :
      op->vtkAxisActor::GetTickLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickLocationToInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTickLocationToInside();
    }
    else
    {
      op->vtkAxisActor::SetTickLocationToInside();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickLocationToOutside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToOutside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTickLocationToOutside();
    }
    else
    {
      op->vtkAxisActor::SetTickLocationToOutside();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickLocationToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTickLocationToBoth();
    }
    else
    {
      op->vtkAxisActor::SetTickLocationToBoth();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
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
      op->vtkAxisActor::SetAxisVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAxisVisibility() :
      op->vtkAxisActor::GetAxisVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_AxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxisVisibilityOn();
    }
    else
    {
      op->vtkAxisActor::AxisVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_AxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxisVisibilityOff();
    }
    else
    {
      op->vtkAxisActor::AxisVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
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
      op->vtkAxisActor::SetTickVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTickVisibility() :
      op->vtkAxisActor::GetTickVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_TickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TickVisibilityOn();
    }
    else
    {
      op->vtkAxisActor::TickVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_TickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TickVisibilityOff();
    }
    else
    {
      op->vtkAxisActor::TickVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
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
      op->vtkAxisActor::SetLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLabelVisibility() :
      op->vtkAxisActor::GetLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOn();
    }
    else
    {
      op->vtkAxisActor::LabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOff();
    }
    else
    {
      op->vtkAxisActor::LabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
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
      op->vtkAxisActor::SetTitleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTitleVisibility() :
      op->vtkAxisActor::GetTitleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_TitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TitleVisibilityOn();
    }
    else
    {
      op->vtkAxisActor::TitleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_TitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TitleVisibilityOff();
    }
    else
    {
      op->vtkAxisActor::TitleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetExponentVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExponentVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExponentVisibility(temp0);
    }
    else
    {
      op->vtkAxisActor::SetExponentVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetExponentVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetExponentVisibility() :
      op->vtkAxisActor::GetExponentVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_ExponentVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExponentVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExponentVisibilityOn();
    }
    else
    {
      op->vtkAxisActor::ExponentVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_ExponentVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExponentVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExponentVisibilityOff();
    }
    else
    {
      op->vtkAxisActor::ExponentVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLastMajorTickPointCorrection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastMajorTickPointCorrection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastMajorTickPointCorrection(temp0);
    }
    else
    {
      op->vtkAxisActor::SetLastMajorTickPointCorrection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLastMajorTickPointCorrection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastMajorTickPointCorrection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLastMajorTickPointCorrection() :
      op->vtkAxisActor::GetLastMajorTickPointCorrection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_LastMajorTickPointCorrectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LastMajorTickPointCorrectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LastMajorTickPointCorrectionOn();
    }
    else
    {
      op->vtkAxisActor::LastMajorTickPointCorrectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_LastMajorTickPointCorrectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LastMajorTickPointCorrectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LastMajorTickPointCorrectionOff();
    }
    else
    {
      op->vtkAxisActor::LastMajorTickPointCorrectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitleAlignLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleAlignLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleAlignLocation(temp0);
    }
    else
    {
      op->vtkAxisActor::SetTitleAlignLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleAlignLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleAlignLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTitleAlignLocation() :
      op->vtkAxisActor::GetTitleAlignLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetExponentLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExponentLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExponentLocation(temp0);
    }
    else
    {
      op->vtkAxisActor::SetExponentLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetExponentLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExponentLocation() :
      op->vtkAxisActor::GetExponentLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty() :
      op->vtkAxisActor::GetTitleTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkAxisActor::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAxisLinesProperty(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisLinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetAxisLinesProperty() :
      op->vtkAxisActor::GetAxisLinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisMainLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisMainLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAxisMainLineProperty(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisMainLineProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisMainLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMainLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetAxisMainLineProperty() :
      op->vtkAxisActor::GetAxisMainLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisMajorTicksProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisMajorTicksProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAxisMajorTicksProperty(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisMajorTicksProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisMajorTicksProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMajorTicksProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetAxisMajorTicksProperty() :
      op->vtkAxisActor::GetAxisMajorTicksProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisMinorTicksProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisMinorTicksProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAxisMinorTicksProperty(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisMinorTicksProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisMinorTicksProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMinorTicksProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetAxisMinorTicksProperty() :
      op->vtkAxisActor::GetAxisMinorTicksProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetGridlinesProperty(temp0);
    }
    else
    {
      op->vtkAxisActor::SetGridlinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetGridlinesProperty() :
      op->vtkAxisActor::GetGridlinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetInnerGridlinesProperty(temp0);
    }
    else
    {
      op->vtkAxisActor::SetInnerGridlinesProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetInnerGridlinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerGridlinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetInnerGridlinesProperty() :
      op->vtkAxisActor::GetInnerGridlinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetGridpolysProperty(temp0);
    }
    else
    {
      op->vtkAxisActor::SetGridpolysProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridpolysProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridpolysProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetGridpolysProperty() :
      op->vtkAxisActor::GetGridpolysProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDrawGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawGridlines(temp0);
    }
    else
    {
      op->vtkAxisActor::SetDrawGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDrawGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawGridlines() :
      op->vtkAxisActor::GetDrawGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawGridlinesOn();
    }
    else
    {
      op->vtkAxisActor::DrawGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawGridlinesOff();
    }
    else
    {
      op->vtkAxisActor::DrawGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDrawGridlinesOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawGridlinesOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawGridlinesOnly(temp0);
    }
    else
    {
      op->vtkAxisActor::SetDrawGridlinesOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDrawGridlinesOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawGridlinesOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawGridlinesOnly() :
      op->vtkAxisActor::GetDrawGridlinesOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridlinesOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridlinesOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawGridlinesOnlyOn();
    }
    else
    {
      op->vtkAxisActor::DrawGridlinesOnlyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridlinesOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridlinesOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawGridlinesOnlyOff();
    }
    else
    {
      op->vtkAxisActor::DrawGridlinesOnlyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDrawGridlinesLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawGridlinesLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawGridlinesLocation(temp0);
    }
    else
    {
      op->vtkAxisActor::SetDrawGridlinesLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDrawGridlinesLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawGridlinesLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawGridlinesLocation() :
      op->vtkAxisActor::GetDrawGridlinesLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDrawInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawInnerGridlines(temp0);
    }
    else
    {
      op->vtkAxisActor::SetDrawInnerGridlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDrawInnerGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawInnerGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawInnerGridlines() :
      op->vtkAxisActor::GetDrawInnerGridlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawInnerGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawInnerGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawInnerGridlinesOn();
    }
    else
    {
      op->vtkAxisActor::DrawInnerGridlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawInnerGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawInnerGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawInnerGridlinesOff();
    }
    else
    {
      op->vtkAxisActor::DrawInnerGridlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridlineXLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridlineXLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridlineXLength(temp0);
    }
    else
    {
      op->vtkAxisActor::SetGridlineXLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridlineXLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridlineXLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGridlineXLength() :
      op->vtkAxisActor::GetGridlineXLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridlineYLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridlineYLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridlineYLength(temp0);
    }
    else
    {
      op->vtkAxisActor::SetGridlineYLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridlineYLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridlineYLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGridlineYLength() :
      op->vtkAxisActor::GetGridlineYLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridlineZLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridlineZLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridlineZLength(temp0);
    }
    else
    {
      op->vtkAxisActor::SetGridlineZLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridlineZLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridlineZLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGridlineZLength() :
      op->vtkAxisActor::GetGridlineZLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDrawGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawGridpolys(temp0);
    }
    else
    {
      op->vtkAxisActor::SetDrawGridpolys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDrawGridpolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawGridpolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawGridpolys() :
      op->vtkAxisActor::GetDrawGridpolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridpolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridpolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawGridpolysOn();
    }
    else
    {
      op->vtkAxisActor::DrawGridpolysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridpolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridpolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawGridpolysOff();
    }
    else
    {
      op->vtkAxisActor::DrawGridpolysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisType(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisTypeMinValue() :
      op->vtkAxisActor::GetAxisTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisTypeMaxValue() :
      op->vtkAxisActor::GetAxisTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisType() :
      op->vtkAxisActor::GetAxisType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisTypeToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTypeToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTypeToX();
    }
    else
    {
      op->vtkAxisActor::SetAxisTypeToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisTypeToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTypeToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTypeToY();
    }
    else
    {
      op->vtkAxisActor::SetAxisTypeToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisTypeToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTypeToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTypeToZ();
    }
    else
    {
      op->vtkAxisActor::SetAxisTypeToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLog(temp0);
    }
    else
    {
      op->vtkAxisActor::SetLog(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLog() :
      op->vtkAxisActor::GetLog());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_LogOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogOn();
    }
    else
    {
      op->vtkAxisActor::LogOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_LogOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogOff();
    }
    else
    {
      op->vtkAxisActor::LogOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisPosition(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisPositionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisPositionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisPositionMinValue() :
      op->vtkAxisActor::GetAxisPositionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisPositionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisPositionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisPositionMaxValue() :
      op->vtkAxisActor::GetAxisPositionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisPosition() :
      op->vtkAxisActor::GetAxisPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPositionToMinMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPositionToMinMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisPositionToMinMin();
    }
    else
    {
      op->vtkAxisActor::SetAxisPositionToMinMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPositionToMinMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPositionToMinMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisPositionToMinMax();
    }
    else
    {
      op->vtkAxisActor::SetAxisPositionToMinMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPositionToMaxMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPositionToMaxMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisPositionToMaxMax();
    }
    else
    {
      op->vtkAxisActor::SetAxisPositionToMaxMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPositionToMaxMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPositionToMaxMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisPositionToMaxMin();
    }
    else
    {
      op->vtkAxisActor::SetAxisPositionToMaxMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkAxisActor::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkAxisActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_RenderTranslucentGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentGeometry(temp0) :
      op->vtkAxisActor::RenderTranslucentGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkAxisActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkAxisActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkAxisActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_ComputeMaxLabelLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMaxLabelLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double tempr = (ap.IsBound() ?
      op->ComputeMaxLabelLength(temp0) :
      op->vtkAxisActor::ComputeMaxLabelLength(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_ComputeTitleLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeTitleLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double tempr = (ap.IsBound() ?
      op->ComputeTitleLength(temp0) :
      op->vtkAxisActor::ComputeTitleLength(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabelScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelScale(temp0);
    }
    else
    {
      op->vtkAxisActor::SetLabelScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetLabelScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLabelScale(temp0, temp1);
    }
    else
    {
      op->vtkAxisActor::SetLabelScale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetLabelScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxisActor_SetLabelScale_s1(self, args);
    case 2:
      return PyvtkAxisActor_SetLabelScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLabelScale");
  return nullptr;
}


static PyObject *
PyvtkAxisActor_SetTitleScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleScale(temp0);
    }
    else
    {
      op->vtkAxisActor::SetTitleScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMinorStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinorStart(temp0);
    }
    else
    {
      op->vtkAxisActor::SetMinorStart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMinorStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinorStart() :
      op->vtkAxisActor::GetMinorStart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMajorStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMajorStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMajorStart(temp0) :
      op->vtkAxisActor::GetMajorStart(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMajorStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMajorStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMajorStart(temp0, temp1);
    }
    else
    {
      op->vtkAxisActor::SetMajorStart(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDeltaMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeltaMinor(temp0);
    }
    else
    {
      op->vtkAxisActor::SetDeltaMinor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDeltaMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaMinor() :
      op->vtkAxisActor::GetDeltaMinor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDeltaMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaMajor(temp0) :
      op->vtkAxisActor::GetDeltaMajor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDeltaMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDeltaMajor(temp0, temp1);
    }
    else
    {
      op->vtkAxisActor::SetDeltaMajor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMinorRangeStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorRangeStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinorRangeStart(temp0);
    }
    else
    {
      op->vtkAxisActor::SetMinorRangeStart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMinorRangeStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorRangeStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinorRangeStart() :
      op->vtkAxisActor::GetMinorRangeStart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMajorRangeStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMajorRangeStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMajorRangeStart(temp0);
    }
    else
    {
      op->vtkAxisActor::SetMajorRangeStart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMajorRangeStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMajorRangeStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMajorRangeStart() :
      op->vtkAxisActor::GetMajorRangeStart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDeltaRangeMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaRangeMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeltaRangeMinor(temp0);
    }
    else
    {
      op->vtkAxisActor::SetDeltaRangeMinor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDeltaRangeMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRangeMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaRangeMinor() :
      op->vtkAxisActor::GetDeltaRangeMinor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDeltaRangeMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaRangeMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeltaRangeMajor(temp0);
    }
    else
    {
      op->vtkAxisActor::SetDeltaRangeMajor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDeltaRangeMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRangeMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaRangeMajor() :
      op->vtkAxisActor::GetDeltaRangeMajor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetLabels(temp0);
    }
    else
    {
      op->vtkAxisActor::SetLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_BuildAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->BuildAxis(temp0, temp1);
    }
    else
    {
      op->vtkAxisActor::BuildAxis(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisFollower *tempr = (ap.IsBound() ?
      op->GetTitleActor() :
      op->vtkAxisActor::GetTitleActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetExponentActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisFollower *tempr = (ap.IsBound() ?
      op->GetExponentActor() :
      op->vtkAxisActor::GetExponentActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3DAxisFollower *tempr = (ap.IsBound() ?
      op->GetTitleProp3D() :
      op->vtkAxisActor::GetTitleProp3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetExponentProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3DAxisFollower *tempr = (ap.IsBound() ?
      op->GetExponentProp3D() :
      op->vtkAxisActor::GetExponentProp3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetNumberOfLabelsBuilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsBuilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsBuilt() :
      op->vtkAxisActor::GetNumberOfLabelsBuilt());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetCalculateTitleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalculateTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCalculateTitleOffset(temp0);
    }
    else
    {
      op->vtkAxisActor::SetCalculateTitleOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetCalculateTitleOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalculateTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCalculateTitleOffset() :
      op->vtkAxisActor::GetCalculateTitleOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_CalculateTitleOffsetOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateTitleOffsetOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateTitleOffsetOn();
    }
    else
    {
      op->vtkAxisActor::CalculateTitleOffsetOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_CalculateTitleOffsetOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateTitleOffsetOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateTitleOffsetOff();
    }
    else
    {
      op->vtkAxisActor::CalculateTitleOffsetOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetCalculateLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalculateLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCalculateLabelOffset(temp0);
    }
    else
    {
      op->vtkAxisActor::SetCalculateLabelOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetCalculateLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalculateLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCalculateLabelOffset() :
      op->vtkAxisActor::GetCalculateLabelOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_CalculateLabelOffsetOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateLabelOffsetOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateLabelOffsetOn();
    }
    else
    {
      op->vtkAxisActor::CalculateLabelOffsetOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_CalculateLabelOffsetOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateLabelOffsetOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateLabelOffsetOff();
    }
    else
    {
      op->vtkAxisActor::CalculateLabelOffsetOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetUse2DMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUse2DMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUse2DMode(temp0);
    }
    else
    {
      op->vtkAxisActor::SetUse2DMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetUse2DMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUse2DMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUse2DMode() :
      op->vtkAxisActor::GetUse2DMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetVerticalOffsetXTitle2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalOffsetXTitle2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalOffsetXTitle2D(temp0);
    }
    else
    {
      op->vtkAxisActor::SetVerticalOffsetXTitle2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetVerticalOffsetXTitle2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalOffsetXTitle2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVerticalOffsetXTitle2D() :
      op->vtkAxisActor::GetVerticalOffsetXTitle2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetHorizontalOffsetYTitle2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHorizontalOffsetYTitle2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHorizontalOffsetYTitle2D(temp0);
    }
    else
    {
      op->vtkAxisActor::SetHorizontalOffsetYTitle2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetHorizontalOffsetYTitle2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHorizontalOffsetYTitle2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHorizontalOffsetYTitle2D() :
      op->vtkAxisActor::GetHorizontalOffsetYTitle2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetSaveTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSaveTitlePosition(temp0);
    }
    else
    {
      op->vtkAxisActor::SetSaveTitlePosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetSaveTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSaveTitlePosition() :
      op->vtkAxisActor::GetSaveTitlePosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisBaseForX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetAxisBaseForX(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAxisActor::SetAxisBaseForX(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisBaseForX(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisBaseForX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAxisActor_SetAxisBaseForX_s1(self, args);
    case 1:
      return PyvtkAxisActor_SetAxisBaseForX_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForX");
  return nullptr;
}


static PyObject *
PyvtkAxisActor_GetAxisBaseForX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForX() :
      op->vtkAxisActor::GetAxisBaseForX());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisBaseForY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetAxisBaseForY(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAxisActor::SetAxisBaseForY(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisBaseForY(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisBaseForY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAxisActor_SetAxisBaseForY_s1(self, args);
    case 1:
      return PyvtkAxisActor_SetAxisBaseForY_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForY");
  return nullptr;
}


static PyObject *
PyvtkAxisActor_GetAxisBaseForY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForY() :
      op->vtkAxisActor::GetAxisBaseForY());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisBaseForZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetAxisBaseForZ(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAxisActor::SetAxisBaseForZ(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisBaseForZ(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisBaseForZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetAxisBaseForZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAxisActor_SetAxisBaseForZ_s1(self, args);
    case 1:
      return PyvtkAxisActor_SetAxisBaseForZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisBaseForZ");
  return nullptr;
}


static PyObject *
PyvtkAxisActor_GetAxisBaseForZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisBaseForZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisBaseForZ() :
      op->vtkAxisActor::GetAxisBaseForZ());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisOnOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisOnOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisOnOrigin(temp0);
    }
    else
    {
      op->vtkAxisActor::SetAxisOnOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisOnOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisOnOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAxisOnOrigin() :
      op->vtkAxisActor::GetAxisOnOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScreenSize(temp0);
    }
    else
    {
      op->vtkAxisActor::SetScreenSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkAxisActor::GetScreenSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelOffset(temp0);
    }
    else
    {
      op->vtkAxisActor::SetLabelOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLabelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelOffset() :
      op->vtkAxisActor::GetLabelOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetExponentOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExponentOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExponentOffset(temp0);
    }
    else
    {
      op->vtkAxisActor::SetExponentOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_GetExponentOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetExponentOffset() :
      op->vtkAxisActor::GetExponentOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitleOffset_s1(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetTitleOffset."
    " (" "Use SetTitleOffset(double, double) as it's now a 2d vector" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleOffset(temp0);
    }
    else
    {
      op->vtkAxisActor::SetTitleOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetTitleOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTitleOffset(temp0, temp1);
    }
    else
    {
      op->vtkAxisActor::SetTitleOffset(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_SetTitleOffset_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTitleOffset(temp0);
    }
    else
    {
      op->vtkAxisActor::SetTitleOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAxisActor_SetTitleOffset_Methods[] = {
  {"SetTitleOffset", PyvtkAxisActor_SetTitleOffset_s1, METH_VARARGS,
   "@d"},
  {"SetTitleOffset", PyvtkAxisActor_SetTitleOffset_s3, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAxisActor_SetTitleOffset(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAxisActor_SetTitleOffset_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAxisActor_SetTitleOffset_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTitleOffset");
  return nullptr;
}


static PyObject *
PyvtkAxisActor_GetTitleOffset_s1(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetTitleOffset."
    " (" "Use GetTitleOffset(double&, double&) as it's now a 2d vector" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTitleOffset() :
      op->vtkAxisActor::GetTitleOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAxisActor_GetTitleOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetTitleOffset(temp0, temp1);
    }
    else
    {
      op->vtkAxisActor::GetTitleOffset(temp0, temp1);
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
PyvtkAxisActor_GetTitleOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAxisActor_GetTitleOffset_s1(self, args);
    case 2:
      return PyvtkAxisActor_GetTitleOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTitleOffset");
  return nullptr;
}

static PyMethodDef PyvtkAxisActor_Methods[] = {
  {"IsTypeOf", PyvtkAxisActor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAxisActor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAxisActor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAxisActor\nC++: static vtkAxisActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAxisActor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAxisActor\nC++: vtkAxisActor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAxisActor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAxisActor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetPoint1Coordinate", PyvtkAxisActor_GetPoint1Coordinate, METH_VARARGS,
   "GetPoint1Coordinate(self) -> vtkCoordinate\nC++: virtual vtkCoordinate *GetPoint1Coordinate()\n\nSpecify the position of the first point defining the axis.\n"},
  {"SetPoint1", PyvtkAxisActor_SetPoint1, METH_VARARGS,
   "SetPoint1(self, x:[float, float, float]) -> None\nC++: virtual void SetPoint1(double x[3])\nSetPoint1(self, x:float, y:float, z:float) -> None\nC++: virtual void SetPoint1(double x, double y, double z)\n\n"},
  {"GetPoint1", PyvtkAxisActor_GetPoint1, METH_VARARGS,
   "GetPoint1(self) -> Pointer\nC++: virtual double *GetPoint1()\n\n"},
  {"GetPoint2Coordinate", PyvtkAxisActor_GetPoint2Coordinate, METH_VARARGS,
   "GetPoint2Coordinate(self) -> vtkCoordinate\nC++: virtual vtkCoordinate *GetPoint2Coordinate()\n\nSpecify the position of the second point defining the axis.\n"},
  {"SetPoint2", PyvtkAxisActor_SetPoint2, METH_VARARGS,
   "SetPoint2(self, x:[float, float, float]) -> None\nC++: virtual void SetPoint2(double x[3])\nSetPoint2(self, x:float, y:float, z:float) -> None\nC++: virtual void SetPoint2(double x, double y, double z)\n\n"},
  {"GetPoint2", PyvtkAxisActor_GetPoint2, METH_VARARGS,
   "GetPoint2(self) -> Pointer\nC++: virtual double *GetPoint2()\n\n"},
  {"SetRange", PyvtkAxisActor_SetRange, METH_VARARGS,
   "SetRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetRange(double _arg1, double _arg2)\nSetRange(self, _arg:(float, float)) -> None\nC++: void SetRange(const double _arg[2])\n\nSpecify the (min,max) axis range. This will be used in the\ngeneration of labels, if labels are visible. Default: (0.0, 1.0).\n"},
  {"GetRange", PyvtkAxisActor_GetRange, METH_VARARGS,
   "GetRange(self) -> (float, float)\nC++: virtual double *GetRange()\n\n"},
  {"SetBounds", PyvtkAxisActor_SetBounds, METH_VARARGS,
   "SetBounds(self, bounds:(float, float, float, float, float, float))\n     -> None\nC++: void SetBounds(const double bounds[6])\nSetBounds(self, xmin:float, xmax:float, ymin:float, ymax:float,\n    zmin:float, zmax:float) -> None\nC++: void SetBounds(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nSet or get the bounds for this Actor as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax). Default: (-1, 1, -1, 1, -1, 1).\n"},
  {"GetBounds", PyvtkAxisActor_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nGet the bounds for this Prop as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\nin world coordinates. NULL means that the bounds are not defined.\n"},
  {"SetLabelFormat", PyvtkAxisActor_SetLabelFormat, METH_VARARGS,
   "SetLabelFormat(self, _arg:str) -> None\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the labels on the axis.\n"},
  {"GetLabelFormat", PyvtkAxisActor_GetLabelFormat, METH_VARARGS,
   "GetLabelFormat(self) -> str\nC++: virtual char *GetLabelFormat()\n\n"},
  {"SetUseTextActor3D", PyvtkAxisActor_SetUseTextActor3D, METH_VARARGS,
   "SetUseTextActor3D(self, _arg:bool) -> None\nC++: virtual void SetUseTextActor3D(bool _arg)\n\nRender text as polygons (vtkVectorText) or as sprites\n(vtkTextActor3D). In 2D mode, the value is ignored and text is\nrendered as vtkTextActor. False(0) by default. See Also:\nGetUse2DMode(), SetUse2DMode\n"},
  {"GetUseTextActor3D", PyvtkAxisActor_GetUseTextActor3D, METH_VARARGS,
   "GetUseTextActor3D(self) -> bool\nC++: virtual bool GetUseTextActor3D()\n\n"},
  {"SetMinorTicksVisible", PyvtkAxisActor_SetMinorTicksVisible, METH_VARARGS,
   "SetMinorTicksVisible(self, _arg:bool) -> None\nC++: virtual void SetMinorTicksVisible(bool _arg)\n\nSet/Get the flag that controls whether the minor ticks are\nvisible. Default: true.\n"},
  {"GetMinorTicksVisible", PyvtkAxisActor_GetMinorTicksVisible, METH_VARARGS,
   "GetMinorTicksVisible(self) -> bool\nC++: virtual bool GetMinorTicksVisible()\n\n"},
  {"MinorTicksVisibleOn", PyvtkAxisActor_MinorTicksVisibleOn, METH_VARARGS,
   "MinorTicksVisibleOn(self) -> None\nC++: virtual void MinorTicksVisibleOn()\n\n"},
  {"MinorTicksVisibleOff", PyvtkAxisActor_MinorTicksVisibleOff, METH_VARARGS,
   "MinorTicksVisibleOff(self) -> None\nC++: virtual void MinorTicksVisibleOff()\n\n"},
  {"SetTitle", PyvtkAxisActor_SetTitle, METH_VARARGS,
   "SetTitle(self, t:str) -> None\nC++: void SetTitle(const char *t)\n\nSet/Get the title of the axis actor.\n"},
  {"GetTitle", PyvtkAxisActor_GetTitle, METH_VARARGS,
   "GetTitle(self) -> str\nC++: virtual char *GetTitle()\n\n"},
  {"SetExponent", PyvtkAxisActor_SetExponent, METH_VARARGS,
   "SetExponent(self, t:str) -> None\nC++: void SetExponent(const char *t)\n\nSet/Get the common exponent of the labels values.\n"},
  {"GetExponent", PyvtkAxisActor_GetExponent, METH_VARARGS,
   "GetExponent(self) -> str\nC++: virtual char *GetExponent()\n\n"},
  {"SetMajorTickSize", PyvtkAxisActor_SetMajorTickSize, METH_VARARGS,
   "SetMajorTickSize(self, _arg:float) -> None\nC++: virtual void SetMajorTickSize(double _arg)\n\nSet/Get the size of major tick marks. Default: 1.0.\n"},
  {"GetMajorTickSize", PyvtkAxisActor_GetMajorTickSize, METH_VARARGS,
   "GetMajorTickSize(self) -> float\nC++: virtual double GetMajorTickSize()\n\n"},
  {"SetMinorTickSize", PyvtkAxisActor_SetMinorTickSize, METH_VARARGS,
   "SetMinorTickSize(self, _arg:float) -> None\nC++: virtual void SetMinorTickSize(double _arg)\n\nSet/Get the size of minor tick marks. Default: 0.5.\n"},
  {"GetMinorTickSize", PyvtkAxisActor_GetMinorTickSize, METH_VARARGS,
   "GetMinorTickSize(self) -> float\nC++: virtual double GetMinorTickSize()\n\n"},
  {"SetTickLocation", PyvtkAxisActor_SetTickLocation, METH_VARARGS,
   "SetTickLocation(self, _arg:int) -> None\nC++: virtual void SetTickLocation(int _arg)\n\nSet/Get the location of the ticks. Inside: tick end toward\npositive direction of perpendicular axes. Outside: tick end\ntoward negative direction of perpendicular axes. Default:\nVTK_TICKS_INSIDE.\n"},
  {"GetTickLocationMinValue", PyvtkAxisActor_GetTickLocationMinValue, METH_VARARGS,
   "GetTickLocationMinValue(self) -> int\nC++: virtual int GetTickLocationMinValue()\n\n"},
  {"GetTickLocationMaxValue", PyvtkAxisActor_GetTickLocationMaxValue, METH_VARARGS,
   "GetTickLocationMaxValue(self) -> int\nC++: virtual int GetTickLocationMaxValue()\n\n"},
  {"GetTickLocation", PyvtkAxisActor_GetTickLocation, METH_VARARGS,
   "GetTickLocation(self) -> int\nC++: virtual int GetTickLocation()\n\n"},
  {"SetTickLocationToInside", PyvtkAxisActor_SetTickLocationToInside, METH_VARARGS,
   "SetTickLocationToInside(self) -> None\nC++: void SetTickLocationToInside()\n\n"},
  {"SetTickLocationToOutside", PyvtkAxisActor_SetTickLocationToOutside, METH_VARARGS,
   "SetTickLocationToOutside(self) -> None\nC++: void SetTickLocationToOutside()\n\n"},
  {"SetTickLocationToBoth", PyvtkAxisActor_SetTickLocationToBoth, METH_VARARGS,
   "SetTickLocationToBoth(self) -> None\nC++: void SetTickLocationToBoth()\n\n"},
  {"SetAxisVisibility", PyvtkAxisActor_SetAxisVisibility, METH_VARARGS,
   "SetAxisVisibility(self, _arg:bool) -> None\nC++: virtual void SetAxisVisibility(bool _arg)\n\nSet/Get visibility of the axis line. Default: true.\n"},
  {"GetAxisVisibility", PyvtkAxisActor_GetAxisVisibility, METH_VARARGS,
   "GetAxisVisibility(self) -> bool\nC++: virtual bool GetAxisVisibility()\n\n"},
  {"AxisVisibilityOn", PyvtkAxisActor_AxisVisibilityOn, METH_VARARGS,
   "AxisVisibilityOn(self) -> None\nC++: virtual void AxisVisibilityOn()\n\n"},
  {"AxisVisibilityOff", PyvtkAxisActor_AxisVisibilityOff, METH_VARARGS,
   "AxisVisibilityOff(self) -> None\nC++: virtual void AxisVisibilityOff()\n\n"},
  {"SetTickVisibility", PyvtkAxisActor_SetTickVisibility, METH_VARARGS,
   "SetTickVisibility(self, _arg:bool) -> None\nC++: virtual void SetTickVisibility(bool _arg)\n\nSet/Get visibility of the axis major tick marks. Default: true.\n"},
  {"GetTickVisibility", PyvtkAxisActor_GetTickVisibility, METH_VARARGS,
   "GetTickVisibility(self) -> bool\nC++: virtual bool GetTickVisibility()\n\n"},
  {"TickVisibilityOn", PyvtkAxisActor_TickVisibilityOn, METH_VARARGS,
   "TickVisibilityOn(self) -> None\nC++: virtual void TickVisibilityOn()\n\n"},
  {"TickVisibilityOff", PyvtkAxisActor_TickVisibilityOff, METH_VARARGS,
   "TickVisibilityOff(self) -> None\nC++: virtual void TickVisibilityOff()\n\n"},
  {"SetLabelVisibility", PyvtkAxisActor_SetLabelVisibility, METH_VARARGS,
   "SetLabelVisibility(self, _arg:bool) -> None\nC++: virtual void SetLabelVisibility(bool _arg)\n\nSet/Get visibility of the axis labels. Default: true.\n"},
  {"GetLabelVisibility", PyvtkAxisActor_GetLabelVisibility, METH_VARARGS,
   "GetLabelVisibility(self) -> bool\nC++: virtual bool GetLabelVisibility()\n\n"},
  {"LabelVisibilityOn", PyvtkAxisActor_LabelVisibilityOn, METH_VARARGS,
   "LabelVisibilityOn(self) -> None\nC++: virtual void LabelVisibilityOn()\n\n"},
  {"LabelVisibilityOff", PyvtkAxisActor_LabelVisibilityOff, METH_VARARGS,
   "LabelVisibilityOff(self) -> None\nC++: virtual void LabelVisibilityOff()\n\n"},
  {"SetTitleVisibility", PyvtkAxisActor_SetTitleVisibility, METH_VARARGS,
   "SetTitleVisibility(self, _arg:bool) -> None\nC++: virtual void SetTitleVisibility(bool _arg)\n\nSet/Get visibility of the axis title. Default: true.\n"},
  {"GetTitleVisibility", PyvtkAxisActor_GetTitleVisibility, METH_VARARGS,
   "GetTitleVisibility(self) -> bool\nC++: virtual bool GetTitleVisibility()\n\n"},
  {"TitleVisibilityOn", PyvtkAxisActor_TitleVisibilityOn, METH_VARARGS,
   "TitleVisibilityOn(self) -> None\nC++: virtual void TitleVisibilityOn()\n\n"},
  {"TitleVisibilityOff", PyvtkAxisActor_TitleVisibilityOff, METH_VARARGS,
   "TitleVisibilityOff(self) -> None\nC++: virtual void TitleVisibilityOff()\n\n"},
  {"SetExponentVisibility", PyvtkAxisActor_SetExponentVisibility, METH_VARARGS,
   "SetExponentVisibility(self, _arg:bool) -> None\nC++: virtual void SetExponentVisibility(bool _arg)\n\nSet/Get visibility of the axis detached exponent. Default: false.\n"},
  {"GetExponentVisibility", PyvtkAxisActor_GetExponentVisibility, METH_VARARGS,
   "GetExponentVisibility(self) -> bool\nC++: virtual bool GetExponentVisibility()\n\n"},
  {"ExponentVisibilityOn", PyvtkAxisActor_ExponentVisibilityOn, METH_VARARGS,
   "ExponentVisibilityOn(self) -> None\nC++: virtual void ExponentVisibilityOn()\n\n"},
  {"ExponentVisibilityOff", PyvtkAxisActor_ExponentVisibilityOff, METH_VARARGS,
   "ExponentVisibilityOff(self) -> None\nC++: virtual void ExponentVisibilityOff()\n\n"},
  {"SetLastMajorTickPointCorrection", PyvtkAxisActor_SetLastMajorTickPointCorrection, METH_VARARGS,
   "SetLastMajorTickPointCorrection(self, _arg:bool) -> None\nC++: virtual void SetLastMajorTickPointCorrection(bool _arg)\n\nSet/Get visibility of the axis detached exponent. Default: false.\n"},
  {"GetLastMajorTickPointCorrection", PyvtkAxisActor_GetLastMajorTickPointCorrection, METH_VARARGS,
   "GetLastMajorTickPointCorrection(self) -> bool\nC++: virtual bool GetLastMajorTickPointCorrection()\n\n"},
  {"LastMajorTickPointCorrectionOn", PyvtkAxisActor_LastMajorTickPointCorrectionOn, METH_VARARGS,
   "LastMajorTickPointCorrectionOn(self) -> None\nC++: virtual void LastMajorTickPointCorrectionOn()\n\n"},
  {"LastMajorTickPointCorrectionOff", PyvtkAxisActor_LastMajorTickPointCorrectionOff, METH_VARARGS,
   "LastMajorTickPointCorrectionOff(self) -> None\nC++: virtual void LastMajorTickPointCorrectionOff()\n\n"},
  {"SetTitleAlignLocation", PyvtkAxisActor_SetTitleAlignLocation, METH_VARARGS,
   "SetTitleAlignLocation(self, location:int) -> None\nC++: virtual void SetTitleAlignLocation(int location)\n\nGet/Set the alignment of the title related to the axis. Possible\nAlignment: VTK_ALIGN_TOP, VTK_ALIGN_BOTTOM, VTK_ALIGN_POINT1,\nVTK_ALIGN_POINT2. Default: VTK_ALIGN_BOTTOM.\n"},
  {"GetTitleAlignLocation", PyvtkAxisActor_GetTitleAlignLocation, METH_VARARGS,
   "GetTitleAlignLocation(self) -> int\nC++: virtual int GetTitleAlignLocation()\n\n"},
  {"SetExponentLocation", PyvtkAxisActor_SetExponentLocation, METH_VARARGS,
   "SetExponentLocation(self, location:int) -> None\nC++: virtual void SetExponentLocation(int location)\n\nGet/Set the location of the Detached Exponent related to the\naxis. Possible Location: VTK_ALIGN_TOP, VTK_ALIGN_BOTTOM,\nVTK_ALIGN_POINT1, VTK_ALIGN_POINT2. Default: VTK_ALIGN_POINT2.\n"},
  {"GetExponentLocation", PyvtkAxisActor_GetExponentLocation, METH_VARARGS,
   "GetExponentLocation(self) -> int\nC++: virtual int GetExponentLocation()\n\n"},
  {"SetTitleTextProperty", PyvtkAxisActor_SetTitleTextProperty, METH_VARARGS,
   "SetTitleTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the axis title text property.\n"},
  {"GetTitleTextProperty", PyvtkAxisActor_GetTitleTextProperty, METH_VARARGS,
   "GetTitleTextProperty(self) -> vtkTextProperty\nC++: vtkTextProperty *GetTitleTextProperty()\n\n"},
  {"SetLabelTextProperty", PyvtkAxisActor_SetLabelTextProperty, METH_VARARGS,
   "SetLabelTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the axis labels text property.\n"},
  {"GetLabelTextProperty", PyvtkAxisActor_GetLabelTextProperty, METH_VARARGS,
   "GetLabelTextProperty(self) -> vtkTextProperty\nC++: vtkTextProperty *GetLabelTextProperty()\n\n"},
  {"SetAxisLinesProperty", PyvtkAxisActor_SetAxisLinesProperty, METH_VARARGS,
   "SetAxisLinesProperty(self, __a:vtkProperty) -> None\nC++: void SetAxisLinesProperty(vtkProperty *)\n\nGet/Set axis actor property (axis and its ticks) (kept for\ncompatibility)\n"},
  {"GetAxisLinesProperty", PyvtkAxisActor_GetAxisLinesProperty, METH_VARARGS,
   "GetAxisLinesProperty(self) -> vtkProperty\nC++: vtkProperty *GetAxisLinesProperty()\n\n"},
  {"SetAxisMainLineProperty", PyvtkAxisActor_SetAxisMainLineProperty, METH_VARARGS,
   "SetAxisMainLineProperty(self, __a:vtkProperty) -> None\nC++: void SetAxisMainLineProperty(vtkProperty *)\n\nGet/Set main line axis actor property\n"},
  {"GetAxisMainLineProperty", PyvtkAxisActor_GetAxisMainLineProperty, METH_VARARGS,
   "GetAxisMainLineProperty(self) -> vtkProperty\nC++: vtkProperty *GetAxisMainLineProperty()\n\n"},
  {"SetAxisMajorTicksProperty", PyvtkAxisActor_SetAxisMajorTicksProperty, METH_VARARGS,
   "SetAxisMajorTicksProperty(self, __a:vtkProperty) -> None\nC++: void SetAxisMajorTicksProperty(vtkProperty *)\n\nGet/Set axis actor property (axis and its ticks)\n"},
  {"GetAxisMajorTicksProperty", PyvtkAxisActor_GetAxisMajorTicksProperty, METH_VARARGS,
   "GetAxisMajorTicksProperty(self) -> vtkProperty\nC++: vtkProperty *GetAxisMajorTicksProperty()\n\n"},
  {"SetAxisMinorTicksProperty", PyvtkAxisActor_SetAxisMinorTicksProperty, METH_VARARGS,
   "SetAxisMinorTicksProperty(self, __a:vtkProperty) -> None\nC++: void SetAxisMinorTicksProperty(vtkProperty *)\n\nGet/Set axis actor property (axis and its ticks)\n"},
  {"GetAxisMinorTicksProperty", PyvtkAxisActor_GetAxisMinorTicksProperty, METH_VARARGS,
   "GetAxisMinorTicksProperty(self) -> vtkProperty\nC++: vtkProperty *GetAxisMinorTicksProperty()\n\n"},
  {"SetGridlinesProperty", PyvtkAxisActor_SetGridlinesProperty, METH_VARARGS,
   "SetGridlinesProperty(self, __a:vtkProperty) -> None\nC++: void SetGridlinesProperty(vtkProperty *)\n\nGet/Set gridlines actor property (outer grid lines)\n"},
  {"GetGridlinesProperty", PyvtkAxisActor_GetGridlinesProperty, METH_VARARGS,
   "GetGridlinesProperty(self) -> vtkProperty\nC++: vtkProperty *GetGridlinesProperty()\n\n"},
  {"SetInnerGridlinesProperty", PyvtkAxisActor_SetInnerGridlinesProperty, METH_VARARGS,
   "SetInnerGridlinesProperty(self, __a:vtkProperty) -> None\nC++: void SetInnerGridlinesProperty(vtkProperty *)\n\nGet/Set inner gridlines actor property\n"},
  {"GetInnerGridlinesProperty", PyvtkAxisActor_GetInnerGridlinesProperty, METH_VARARGS,
   "GetInnerGridlinesProperty(self) -> vtkProperty\nC++: vtkProperty *GetInnerGridlinesProperty()\n\n"},
  {"SetGridpolysProperty", PyvtkAxisActor_SetGridpolysProperty, METH_VARARGS,
   "SetGridpolysProperty(self, __a:vtkProperty) -> None\nC++: void SetGridpolysProperty(vtkProperty *)\n\nGet/Set gridPolys actor property (grid quads)\n"},
  {"GetGridpolysProperty", PyvtkAxisActor_GetGridpolysProperty, METH_VARARGS,
   "GetGridpolysProperty(self) -> vtkProperty\nC++: vtkProperty *GetGridpolysProperty()\n\n"},
  {"SetDrawGridlines", PyvtkAxisActor_SetDrawGridlines, METH_VARARGS,
   "SetDrawGridlines(self, _arg:bool) -> None\nC++: virtual void SetDrawGridlines(bool _arg)\n\nSet/Get whether gridlines should be drawn. Default: false.\n"},
  {"GetDrawGridlines", PyvtkAxisActor_GetDrawGridlines, METH_VARARGS,
   "GetDrawGridlines(self) -> bool\nC++: virtual bool GetDrawGridlines()\n\n"},
  {"DrawGridlinesOn", PyvtkAxisActor_DrawGridlinesOn, METH_VARARGS,
   "DrawGridlinesOn(self) -> None\nC++: virtual void DrawGridlinesOn()\n\n"},
  {"DrawGridlinesOff", PyvtkAxisActor_DrawGridlinesOff, METH_VARARGS,
   "DrawGridlinesOff(self) -> None\nC++: virtual void DrawGridlinesOff()\n\n"},
  {"SetDrawGridlinesOnly", PyvtkAxisActor_SetDrawGridlinesOnly, METH_VARARGS,
   "SetDrawGridlinesOnly(self, _arg:bool) -> None\nC++: virtual void SetDrawGridlinesOnly(bool _arg)\n\nSet/Get whether ONLY the gridlines should be drawn. This will\nonly draw GridLines and will skip any other part of the rendering\nsuch as Axis/Tick/Title/... Default: false.\n"},
  {"GetDrawGridlinesOnly", PyvtkAxisActor_GetDrawGridlinesOnly, METH_VARARGS,
   "GetDrawGridlinesOnly(self) -> bool\nC++: virtual bool GetDrawGridlinesOnly()\n\n"},
  {"DrawGridlinesOnlyOn", PyvtkAxisActor_DrawGridlinesOnlyOn, METH_VARARGS,
   "DrawGridlinesOnlyOn(self) -> None\nC++: virtual void DrawGridlinesOnlyOn()\n\n"},
  {"DrawGridlinesOnlyOff", PyvtkAxisActor_DrawGridlinesOnlyOff, METH_VARARGS,
   "DrawGridlinesOnlyOff(self) -> None\nC++: virtual void DrawGridlinesOnlyOff()\n\n"},
  {"SetDrawGridlinesLocation", PyvtkAxisActor_SetDrawGridlinesLocation, METH_VARARGS,
   "SetDrawGridlinesLocation(self, _arg:int) -> None\nC++: virtual void SetDrawGridlinesLocation(int _arg)\n\n"},
  {"GetDrawGridlinesLocation", PyvtkAxisActor_GetDrawGridlinesLocation, METH_VARARGS,
   "GetDrawGridlinesLocation(self) -> int\nC++: virtual int GetDrawGridlinesLocation()\n\n"},
  {"SetDrawInnerGridlines", PyvtkAxisActor_SetDrawInnerGridlines, METH_VARARGS,
   "SetDrawInnerGridlines(self, _arg:bool) -> None\nC++: virtual void SetDrawInnerGridlines(bool _arg)\n\nSet/Get whether inner gridlines should be drawn. Default: false.\n"},
  {"GetDrawInnerGridlines", PyvtkAxisActor_GetDrawInnerGridlines, METH_VARARGS,
   "GetDrawInnerGridlines(self) -> bool\nC++: virtual bool GetDrawInnerGridlines()\n\n"},
  {"DrawInnerGridlinesOn", PyvtkAxisActor_DrawInnerGridlinesOn, METH_VARARGS,
   "DrawInnerGridlinesOn(self) -> None\nC++: virtual void DrawInnerGridlinesOn()\n\n"},
  {"DrawInnerGridlinesOff", PyvtkAxisActor_DrawInnerGridlinesOff, METH_VARARGS,
   "DrawInnerGridlinesOff(self) -> None\nC++: virtual void DrawInnerGridlinesOff()\n\n"},
  {"SetGridlineXLength", PyvtkAxisActor_SetGridlineXLength, METH_VARARGS,
   "SetGridlineXLength(self, _arg:float) -> None\nC++: virtual void SetGridlineXLength(double _arg)\n\nSet/Get the length to use when drawing gridlines. Default: 1.0.\n"},
  {"GetGridlineXLength", PyvtkAxisActor_GetGridlineXLength, METH_VARARGS,
   "GetGridlineXLength(self) -> float\nC++: virtual double GetGridlineXLength()\n\n"},
  {"SetGridlineYLength", PyvtkAxisActor_SetGridlineYLength, METH_VARARGS,
   "SetGridlineYLength(self, _arg:float) -> None\nC++: virtual void SetGridlineYLength(double _arg)\n\n"},
  {"GetGridlineYLength", PyvtkAxisActor_GetGridlineYLength, METH_VARARGS,
   "GetGridlineYLength(self) -> float\nC++: virtual double GetGridlineYLength()\n\n"},
  {"SetGridlineZLength", PyvtkAxisActor_SetGridlineZLength, METH_VARARGS,
   "SetGridlineZLength(self, _arg:float) -> None\nC++: virtual void SetGridlineZLength(double _arg)\n\n"},
  {"GetGridlineZLength", PyvtkAxisActor_GetGridlineZLength, METH_VARARGS,
   "GetGridlineZLength(self) -> float\nC++: virtual double GetGridlineZLength()\n\n"},
  {"SetDrawGridpolys", PyvtkAxisActor_SetDrawGridpolys, METH_VARARGS,
   "SetDrawGridpolys(self, _arg:bool) -> None\nC++: virtual void SetDrawGridpolys(bool _arg)\n\nSet/Get whether gridpolys should be drawn. Default: false.\n"},
  {"GetDrawGridpolys", PyvtkAxisActor_GetDrawGridpolys, METH_VARARGS,
   "GetDrawGridpolys(self) -> bool\nC++: virtual bool GetDrawGridpolys()\n\n"},
  {"DrawGridpolysOn", PyvtkAxisActor_DrawGridpolysOn, METH_VARARGS,
   "DrawGridpolysOn(self) -> None\nC++: virtual void DrawGridpolysOn()\n\n"},
  {"DrawGridpolysOff", PyvtkAxisActor_DrawGridpolysOff, METH_VARARGS,
   "DrawGridpolysOff(self) -> None\nC++: virtual void DrawGridpolysOff()\n\n"},
  {"SetAxisType", PyvtkAxisActor_SetAxisType, METH_VARARGS,
   "SetAxisType(self, _arg:int) -> None\nC++: virtual void SetAxisType(int _arg)\n\nSet/Get the type of this axis. Default: VTK_AXIS_TYPE_X.\n"},
  {"GetAxisTypeMinValue", PyvtkAxisActor_GetAxisTypeMinValue, METH_VARARGS,
   "GetAxisTypeMinValue(self) -> int\nC++: virtual int GetAxisTypeMinValue()\n\n"},
  {"GetAxisTypeMaxValue", PyvtkAxisActor_GetAxisTypeMaxValue, METH_VARARGS,
   "GetAxisTypeMaxValue(self) -> int\nC++: virtual int GetAxisTypeMaxValue()\n\n"},
  {"GetAxisType", PyvtkAxisActor_GetAxisType, METH_VARARGS,
   "GetAxisType(self) -> int\nC++: virtual int GetAxisType()\n\n"},
  {"SetAxisTypeToX", PyvtkAxisActor_SetAxisTypeToX, METH_VARARGS,
   "SetAxisTypeToX(self) -> None\nC++: void SetAxisTypeToX()\n\n"},
  {"SetAxisTypeToY", PyvtkAxisActor_SetAxisTypeToY, METH_VARARGS,
   "SetAxisTypeToY(self) -> None\nC++: void SetAxisTypeToY()\n\n"},
  {"SetAxisTypeToZ", PyvtkAxisActor_SetAxisTypeToZ, METH_VARARGS,
   "SetAxisTypeToZ(self) -> None\nC++: void SetAxisTypeToZ()\n\n"},
  {"SetLog", PyvtkAxisActor_SetLog, METH_VARARGS,
   "SetLog(self, _arg:bool) -> None\nC++: virtual void SetLog(bool _arg)\n\nSet/Get The type of scale, enable logarithmic scale or linear by\ndefault. Default: false.\n"},
  {"GetLog", PyvtkAxisActor_GetLog, METH_VARARGS,
   "GetLog(self) -> bool\nC++: virtual bool GetLog()\n\n"},
  {"LogOn", PyvtkAxisActor_LogOn, METH_VARARGS,
   "LogOn(self) -> None\nC++: virtual void LogOn()\n\n"},
  {"LogOff", PyvtkAxisActor_LogOff, METH_VARARGS,
   "LogOff(self) -> None\nC++: virtual void LogOff()\n\n"},
  {"SetAxisPosition", PyvtkAxisActor_SetAxisPosition, METH_VARARGS,
   "SetAxisPosition(self, _arg:int) -> None\nC++: virtual void SetAxisPosition(int _arg)\n\nSet/Get the position of this axis (in relation to an an assumed\nbounding box).  For an x-type axis, MINMIN corresponds to the\nx-edge in the bounding box where Y values are minimum and Z\nvalues are minimum. For a y-type axis, MAXMIN corresponds to the\ny-edge where X values are maximum and Z values are minimum.\nDefault: VTK_AXIS_POS_MINMIN.\n"},
  {"GetAxisPositionMinValue", PyvtkAxisActor_GetAxisPositionMinValue, METH_VARARGS,
   "GetAxisPositionMinValue(self) -> int\nC++: virtual int GetAxisPositionMinValue()\n\n"},
  {"GetAxisPositionMaxValue", PyvtkAxisActor_GetAxisPositionMaxValue, METH_VARARGS,
   "GetAxisPositionMaxValue(self) -> int\nC++: virtual int GetAxisPositionMaxValue()\n\n"},
  {"GetAxisPosition", PyvtkAxisActor_GetAxisPosition, METH_VARARGS,
   "GetAxisPosition(self) -> int\nC++: virtual int GetAxisPosition()\n\n"},
  {"SetAxisPositionToMinMin", PyvtkAxisActor_SetAxisPositionToMinMin, METH_VARARGS,
   "SetAxisPositionToMinMin(self) -> None\nC++: void SetAxisPositionToMinMin()\n\n"},
  {"SetAxisPositionToMinMax", PyvtkAxisActor_SetAxisPositionToMinMax, METH_VARARGS,
   "SetAxisPositionToMinMax(self) -> None\nC++: void SetAxisPositionToMinMax()\n\n"},
  {"SetAxisPositionToMaxMax", PyvtkAxisActor_SetAxisPositionToMaxMax, METH_VARARGS,
   "SetAxisPositionToMaxMax(self) -> None\nC++: void SetAxisPositionToMaxMax()\n\n"},
  {"SetAxisPositionToMaxMin", PyvtkAxisActor_SetAxisPositionToMaxMin, METH_VARARGS,
   "SetAxisPositionToMaxMin(self) -> None\nC++: void SetAxisPositionToMaxMin()\n\n"},
  {"SetCamera", PyvtkAxisActor_SetCamera, METH_VARARGS,
   "SetCamera(self, __a:vtkCamera) -> None\nC++: virtual void SetCamera(vtkCamera *)\n\nSet/Get the camera for this axis.  The camera is used by the\nlabels to 'follow' the camera and be legible from any viewpoint.\n"},
  {"GetCamera", PyvtkAxisActor_GetCamera, METH_VARARGS,
   "GetCamera(self) -> vtkCamera\nC++: vtkCamera *GetCamera()\n\n"},
  {"RenderOpaqueGeometry", PyvtkAxisActor_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nDraw the axis.\n"},
  {"RenderTranslucentGeometry", PyvtkAxisActor_RenderTranslucentGeometry, METH_VARARGS,
   "RenderTranslucentGeometry(self, viewport:vtkViewport) -> int\nC++: virtual int RenderTranslucentGeometry(vtkViewport *viewport)\n\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkAxisActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"RenderOverlay", PyvtkAxisActor_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkAxisActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some opaque/translucent polygonal geometry?\n"},
  {"ReleaseGraphicsResources", PyvtkAxisActor_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"ComputeMaxLabelLength", PyvtkAxisActor_ComputeMaxLabelLength, METH_VARARGS,
   "ComputeMaxLabelLength(self, __a:(float, float, float)) -> float\nC++: double ComputeMaxLabelLength(const double[3])\n\n"},
  {"ComputeTitleLength", PyvtkAxisActor_ComputeTitleLength, METH_VARARGS,
   "ComputeTitleLength(self, __a:(float, float, float)) -> float\nC++: double ComputeTitleLength(const double[3])\n\n"},
  {"SetLabelScale", PyvtkAxisActor_SetLabelScale, METH_VARARGS,
   "SetLabelScale(self, scale:float) -> None\nC++: void SetLabelScale(double scale)\nSetLabelScale(self, labelIndex:int, scale:float) -> None\nC++: void SetLabelScale(int labelIndex, double scale)\n\n"},
  {"SetTitleScale", PyvtkAxisActor_SetTitleScale, METH_VARARGS,
   "SetTitleScale(self, scale:float) -> None\nC++: void SetTitleScale(double scale)\n\n"},
  {"SetMinorStart", PyvtkAxisActor_SetMinorStart, METH_VARARGS,
   "SetMinorStart(self, _arg:float) -> None\nC++: virtual void SetMinorStart(double _arg)\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {"GetMinorStart", PyvtkAxisActor_GetMinorStart, METH_VARARGS,
   "GetMinorStart(self) -> float\nC++: virtual double GetMinorStart()\n\n"},
  {"GetMajorStart", PyvtkAxisActor_GetMajorStart, METH_VARARGS,
   "GetMajorStart(self, axis:int) -> float\nC++: double GetMajorStart(int axis)\n\n"},
  {"SetMajorStart", PyvtkAxisActor_SetMajorStart, METH_VARARGS,
   "SetMajorStart(self, axis:int, value:float) -> None\nC++: void SetMajorStart(int axis, double value)\n\n"},
  {"SetDeltaMinor", PyvtkAxisActor_SetDeltaMinor, METH_VARARGS,
   "SetDeltaMinor(self, _arg:float) -> None\nC++: virtual void SetDeltaMinor(double _arg)\n\n"},
  {"GetDeltaMinor", PyvtkAxisActor_GetDeltaMinor, METH_VARARGS,
   "GetDeltaMinor(self) -> float\nC++: virtual double GetDeltaMinor()\n\n"},
  {"GetDeltaMajor", PyvtkAxisActor_GetDeltaMajor, METH_VARARGS,
   "GetDeltaMajor(self, axis:int) -> float\nC++: double GetDeltaMajor(int axis)\n\n"},
  {"SetDeltaMajor", PyvtkAxisActor_SetDeltaMajor, METH_VARARGS,
   "SetDeltaMajor(self, axis:int, value:float) -> None\nC++: void SetDeltaMajor(int axis, double value)\n\n"},
  {"SetMinorRangeStart", PyvtkAxisActor_SetMinorRangeStart, METH_VARARGS,
   "SetMinorRangeStart(self, _arg:float) -> None\nC++: virtual void SetMinorRangeStart(double _arg)\n\nSet/Get the starting position for minor and major tick points on\nthe range. The range and the position need not be identical. ie\nthe displayed values need not match the actual positions in 3D\nspace. Default: 0.0.\n"},
  {"GetMinorRangeStart", PyvtkAxisActor_GetMinorRangeStart, METH_VARARGS,
   "GetMinorRangeStart(self) -> float\nC++: virtual double GetMinorRangeStart()\n\n"},
  {"SetMajorRangeStart", PyvtkAxisActor_SetMajorRangeStart, METH_VARARGS,
   "SetMajorRangeStart(self, _arg:float) -> None\nC++: virtual void SetMajorRangeStart(double _arg)\n\n"},
  {"GetMajorRangeStart", PyvtkAxisActor_GetMajorRangeStart, METH_VARARGS,
   "GetMajorRangeStart(self) -> float\nC++: virtual double GetMajorRangeStart()\n\n"},
  {"SetDeltaRangeMinor", PyvtkAxisActor_SetDeltaRangeMinor, METH_VARARGS,
   "SetDeltaRangeMinor(self, _arg:float) -> None\nC++: virtual void SetDeltaRangeMinor(double _arg)\n\nSet/Get the delta range for minor and major tick points that\ndetermine their spacing. Default: 1.0.\n"},
  {"GetDeltaRangeMinor", PyvtkAxisActor_GetDeltaRangeMinor, METH_VARARGS,
   "GetDeltaRangeMinor(self) -> float\nC++: virtual double GetDeltaRangeMinor()\n\n"},
  {"SetDeltaRangeMajor", PyvtkAxisActor_SetDeltaRangeMajor, METH_VARARGS,
   "SetDeltaRangeMajor(self, _arg:float) -> None\nC++: virtual void SetDeltaRangeMajor(double _arg)\n\n"},
  {"GetDeltaRangeMajor", PyvtkAxisActor_GetDeltaRangeMajor, METH_VARARGS,
   "GetDeltaRangeMajor(self) -> float\nC++: virtual double GetDeltaRangeMajor()\n\n"},
  {"SetLabels", PyvtkAxisActor_SetLabels, METH_VARARGS,
   "SetLabels(self, labels:vtkStringArray) -> None\nC++: void SetLabels(vtkStringArray *labels)\n\n"},
  {"BuildAxis", PyvtkAxisActor_BuildAxis, METH_VARARGS,
   "BuildAxis(self, viewport:vtkViewport, __b:bool) -> None\nC++: void BuildAxis(vtkViewport *viewport, bool)\n\n"},
  {"GetTitleActor", PyvtkAxisActor_GetTitleActor, METH_VARARGS,
   "GetTitleActor(self) -> vtkAxisFollower\nC++: virtual vtkAxisFollower *GetTitleActor()\n\nGet title actor and it is responsible for drawing title text.\n"},
  {"GetExponentActor", PyvtkAxisActor_GetExponentActor, METH_VARARGS,
   "GetExponentActor(self) -> vtkAxisFollower\nC++: virtual vtkAxisFollower *GetExponentActor()\n\nGet exponent follower actor\n"},
  {"GetTitleProp3D", PyvtkAxisActor_GetTitleProp3D, METH_VARARGS,
   "GetTitleProp3D(self) -> vtkProp3DAxisFollower\nC++: virtual vtkProp3DAxisFollower *GetTitleProp3D()\n\nGet title actor and it is responsible for drawing title text.\n"},
  {"GetExponentProp3D", PyvtkAxisActor_GetExponentProp3D, METH_VARARGS,
   "GetExponentProp3D(self) -> vtkProp3DAxisFollower\nC++: virtual vtkProp3DAxisFollower *GetExponentProp3D()\n\nGet title actor and it is responsible for drawing title text.\n"},
  {"GetNumberOfLabelsBuilt", PyvtkAxisActor_GetNumberOfLabelsBuilt, METH_VARARGS,
   "GetNumberOfLabelsBuilt(self) -> int\nC++: virtual int GetNumberOfLabelsBuilt()\n\nGet total number of labels built. Once built this count does not\nchange.\n"},
  {"SetCalculateTitleOffset", PyvtkAxisActor_SetCalculateTitleOffset, METH_VARARGS,
   "SetCalculateTitleOffset(self, _arg:bool) -> None\nC++: virtual void SetCalculateTitleOffset(bool _arg)\n\nSet/Get flag whether to calculate title offset. Default: false.\n"},
  {"GetCalculateTitleOffset", PyvtkAxisActor_GetCalculateTitleOffset, METH_VARARGS,
   "GetCalculateTitleOffset(self) -> bool\nC++: virtual bool GetCalculateTitleOffset()\n\n"},
  {"CalculateTitleOffsetOn", PyvtkAxisActor_CalculateTitleOffsetOn, METH_VARARGS,
   "CalculateTitleOffsetOn(self) -> None\nC++: virtual void CalculateTitleOffsetOn()\n\n"},
  {"CalculateTitleOffsetOff", PyvtkAxisActor_CalculateTitleOffsetOff, METH_VARARGS,
   "CalculateTitleOffsetOff(self) -> None\nC++: virtual void CalculateTitleOffsetOff()\n\n"},
  {"SetCalculateLabelOffset", PyvtkAxisActor_SetCalculateLabelOffset, METH_VARARGS,
   "SetCalculateLabelOffset(self, _arg:bool) -> None\nC++: virtual void SetCalculateLabelOffset(bool _arg)\n\nSet/Get flag whether to calculate label offset. Default: false.\n"},
  {"GetCalculateLabelOffset", PyvtkAxisActor_GetCalculateLabelOffset, METH_VARARGS,
   "GetCalculateLabelOffset(self) -> bool\nC++: virtual bool GetCalculateLabelOffset()\n\n"},
  {"CalculateLabelOffsetOn", PyvtkAxisActor_CalculateLabelOffsetOn, METH_VARARGS,
   "CalculateLabelOffsetOn(self) -> None\nC++: virtual void CalculateLabelOffsetOn()\n\n"},
  {"CalculateLabelOffsetOff", PyvtkAxisActor_CalculateLabelOffsetOff, METH_VARARGS,
   "CalculateLabelOffsetOff(self) -> None\nC++: virtual void CalculateLabelOffsetOff()\n\n"},
  {"SetUse2DMode", PyvtkAxisActor_SetUse2DMode, METH_VARARGS,
   "SetUse2DMode(self, _arg:bool) -> None\nC++: virtual void SetUse2DMode(bool _arg)\n\nSet/Get the 2D mode. Default: false.\n"},
  {"GetUse2DMode", PyvtkAxisActor_GetUse2DMode, METH_VARARGS,
   "GetUse2DMode(self) -> bool\nC++: virtual bool GetUse2DMode()\n\n"},
  {"SetVerticalOffsetXTitle2D", PyvtkAxisActor_SetVerticalOffsetXTitle2D, METH_VARARGS,
   "SetVerticalOffsetXTitle2D(self, _arg:float) -> None\nC++: virtual void SetVerticalOffsetXTitle2D(double _arg)\n\nSet/Get the 2D mode the vertical offset for X title in 2D mode.\nDefault: -40.0.\n"},
  {"GetVerticalOffsetXTitle2D", PyvtkAxisActor_GetVerticalOffsetXTitle2D, METH_VARARGS,
   "GetVerticalOffsetXTitle2D(self) -> float\nC++: virtual double GetVerticalOffsetXTitle2D()\n\n"},
  {"SetHorizontalOffsetYTitle2D", PyvtkAxisActor_SetHorizontalOffsetYTitle2D, METH_VARARGS,
   "SetHorizontalOffsetYTitle2D(self, _arg:float) -> None\nC++: virtual void SetHorizontalOffsetYTitle2D(double _arg)\n\nSet/Get the 2D mode the horizontal offset for Y title in 2D mode.\nDefault: -50.0.\n"},
  {"GetHorizontalOffsetYTitle2D", PyvtkAxisActor_GetHorizontalOffsetYTitle2D, METH_VARARGS,
   "GetHorizontalOffsetYTitle2D(self) -> float\nC++: virtual double GetHorizontalOffsetYTitle2D()\n\n"},
  {"SetSaveTitlePosition", PyvtkAxisActor_SetSaveTitlePosition, METH_VARARGS,
   "SetSaveTitlePosition(self, _arg:int) -> None\nC++: virtual void SetSaveTitlePosition(int _arg)\n\nSet/Get whether title position must be saved in 2D mode. Default:\n0.\n"},
  {"GetSaveTitlePosition", PyvtkAxisActor_GetSaveTitlePosition, METH_VARARGS,
   "GetSaveTitlePosition(self) -> int\nC++: virtual int GetSaveTitlePosition()\n\n"},
  {"SetAxisBaseForX", PyvtkAxisActor_SetAxisBaseForX, METH_VARARGS,
   "SetAxisBaseForX(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetAxisBaseForX(double _arg1, double _arg2,\n    double _arg3)\nSetAxisBaseForX(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAxisBaseForX(const double _arg[3])\n\nProvide real vector for non aligned axis. Default: (1.0, 0.0,\n0.0).\n"},
  {"GetAxisBaseForX", PyvtkAxisActor_GetAxisBaseForX, METH_VARARGS,
   "GetAxisBaseForX(self) -> (float, float, float)\nC++: virtual double *GetAxisBaseForX()\n\n"},
  {"SetAxisBaseForY", PyvtkAxisActor_SetAxisBaseForY, METH_VARARGS,
   "SetAxisBaseForY(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetAxisBaseForY(double _arg1, double _arg2,\n    double _arg3)\nSetAxisBaseForY(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAxisBaseForY(const double _arg[3])\n\nProvide real vector for non aligned axis. Default: (0.0, 1.0,\n0.0).\n"},
  {"GetAxisBaseForY", PyvtkAxisActor_GetAxisBaseForY, METH_VARARGS,
   "GetAxisBaseForY(self) -> (float, float, float)\nC++: virtual double *GetAxisBaseForY()\n\n"},
  {"SetAxisBaseForZ", PyvtkAxisActor_SetAxisBaseForZ, METH_VARARGS,
   "SetAxisBaseForZ(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetAxisBaseForZ(double _arg1, double _arg2,\n    double _arg3)\nSetAxisBaseForZ(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAxisBaseForZ(const double _arg[3])\n\nProvide real vector for non aligned axis. Default: (0.0, 0.0,\n1.0).\n"},
  {"GetAxisBaseForZ", PyvtkAxisActor_GetAxisBaseForZ, METH_VARARGS,
   "GetAxisBaseForZ(self) -> (float, float, float)\nC++: virtual double *GetAxisBaseForZ()\n\n"},
  {"SetAxisOnOrigin", PyvtkAxisActor_SetAxisOnOrigin, METH_VARARGS,
   "SetAxisOnOrigin(self, _arg:bool) -> None\nC++: virtual void SetAxisOnOrigin(bool _arg)\n\nNotify the axes that is not part of a cube anymore. Default:\nfalse.\n"},
  {"GetAxisOnOrigin", PyvtkAxisActor_GetAxisOnOrigin, METH_VARARGS,
   "GetAxisOnOrigin(self) -> bool\nC++: virtual bool GetAxisOnOrigin()\n\n"},
  {"SetScreenSize", PyvtkAxisActor_SetScreenSize, METH_VARARGS,
   "SetScreenSize(self, _arg:float) -> None\nC++: virtual void SetScreenSize(double _arg)\n\nSet/Get size factor for text, used for offsets. Default: 10.0.\n"},
  {"GetScreenSize", PyvtkAxisActor_GetScreenSize, METH_VARARGS,
   "GetScreenSize(self) -> float\nC++: virtual double GetScreenSize()\n\n"},
  {"SetLabelOffset", PyvtkAxisActor_SetLabelOffset, METH_VARARGS,
   "SetLabelOffset(self, _arg:float) -> None\nC++: virtual void SetLabelOffset(double _arg)\n\nSet/Get the Y-offset used to position label. Default: 30.0.\n"},
  {"GetLabelOffset", PyvtkAxisActor_GetLabelOffset, METH_VARARGS,
   "GetLabelOffset(self) -> float\nC++: virtual double GetLabelOffset()\n\n"},
  {"SetExponentOffset", PyvtkAxisActor_SetExponentOffset, METH_VARARGS,
   "SetExponentOffset(self, _arg:float) -> None\nC++: virtual void SetExponentOffset(double _arg)\n\nSet/Get the Y-offset used to position exponent. Default: 20.0.\n"},
  {"GetExponentOffset", PyvtkAxisActor_GetExponentOffset, METH_VARARGS,
   "GetExponentOffset(self) -> float\nC++: virtual double GetExponentOffset()\n\n"},
  {"SetTitleOffset", PyvtkAxisActor_SetTitleOffset, METH_VARARGS,
   "SetTitleOffset(self, titleOffsetY:float) -> None\nC++: void SetTitleOffset(double titleOffsetY)\nSetTitleOffset(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetTitleOffset(double _arg1, double _arg2)\nSetTitleOffset(self, _arg:(float, float)) -> None\nC++: void SetTitleOffset(const double _arg[2])\n\nSet/Get the 2D-offsets used to position title texts. X-component\nis applied only when not center aligned Center aligned <=>\nVTK_ALIGN_TOP and VTK_ALIGN_BOTTOM Y-component is the same than\nother offsets. Default: (20.0, 20.0).\n"},
  {"GetTitleOffset", PyvtkAxisActor_GetTitleOffset, METH_VARARGS,
   "GetTitleOffset(self) -> float\nC++: double GetTitleOffset()\nGetTitleOffset(self, titleOffsetX:float, titleOffsetY:float)\n    -> None\nC++: void GetTitleOffset(double &titleOffsetX,\n    double &titleOffsetY)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAxisActor_Doc =
  "vtkAxisActor - Create an axis with tick marks and labels\n\n"
  "Superclass: vtkActor\n\n"
  "vtkAxisActor creates an axis with tick marks, labels, and/or a title,\n"
  "depending on the particular instance variable settings. It is assumed\n"
  "that the axes is part of a bounding box and is orthogonal to one of\n"
  "the coordinate axes.  To use this class, you typically specify two\n"
  "points defining the start and end points of the line (xyz definition\n"
  "using vtkCoordinate class), the axis type (X, Y or Z), the axis\n"
  "location in relation to the bounding box, the bounding box, the\n"
  "number of labels, and the data range (min,max). You can also control\n"
  "what parts of the axis are visible including the line, the tick\n"
  "marks, the labels, and the title. It is also possible to control\n"
  "gridlines, and specify on which 'side' the tickmarks are drawn (again\n"
  "with respect to the underlying assumed bounding box). You can also\n"
  "specify the label format (a printf style format).\n\n"
  "This class decides how to locate the labels, and how to create\n"
  "reasonable tick marks and labels.\n\n"
  "Labels follow the camera so as to be legible from any viewpoint.\n\n"
  "The instance variables Point1 and Point2 are instances of\n"
  "vtkCoordinate. All calculations and references are in World\n"
  "Coordinates.\n\n"
  "@par Thanks: This class was written by: Hank Childs, Kathleen\n"
  "Bonnell, Amy Squillacote, Brad Whitlock, Eric Brugger, Claire\n"
  "Guilbaud, Nicolas Dolegieviez, Will Schroeder, Karthik Krishnan,\n"
  "Aashish Chaudhary, Philippe Pebay, David Gobbi, David Partyka,\n"
  "Utkarsh Ayachit David Cole, Francois Bertel, and Mark Olesen Part of\n"
  "this work was supported by CEA/DIF - Commissariat a l'Energie\n"
  "Atomique, Centre DAM Ile-De-France, BP12, F-91297 Arpajon, France.\n\n"
  "@sa\n"
  "vtkActor vtkVectorText vtkPolyDataMapper vtkAxisActor2D vtkCoordinate\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxisActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkAxisActor", // tp_name
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
  PyvtkAxisActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAxisActor_StaticNew()
{
  return vtkAxisActor::New();
}

PyObject *PyvtkAxisActor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAxisActor_Type, PyvtkAxisActor_Methods,
    "vtkAxisActor",
 &PyvtkAxisActor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkActor");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAxisActor_TickLocation_Type);
  PyVTKEnum_Add(&PyvtkAxisActor_TickLocation_Type, "vtkAxisActor.TickLocation");

  o = (PyObject *)&PyvtkAxisActor_TickLocation_Type;
  if (PyDict_SetItemString(d, "TickLocation", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkAxisActor_AlignLocation_Type);
  PyVTKEnum_Add(&PyvtkAxisActor_AlignLocation_Type, "vtkAxisActor.AlignLocation");

  o = (PyObject *)&PyvtkAxisActor_AlignLocation_Type;
  if (PyDict_SetItemString(d, "AlignLocation", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkAxisActor_AxisType_Type);
  PyVTKEnum_Add(&PyvtkAxisActor_AxisType_Type, "vtkAxisActor.AxisType");

  o = (PyObject *)&PyvtkAxisActor_AxisType_Type;
  if (PyDict_SetItemString(d, "AxisType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkAxisActor_AxisPosition_Type);
  PyVTKEnum_Add(&PyvtkAxisActor_AxisPosition_Type, "vtkAxisActor.AxisPosition");

  o = (PyObject *)&PyvtkAxisActor_AxisPosition_Type;
  if (PyDict_SetItemString(d, "AxisPosition", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_TICKS_INSIDE", vtkAxisActor::VTK_TICKS_INSIDE },
        { "VTK_TICKS_OUTSIDE", vtkAxisActor::VTK_TICKS_OUTSIDE },
        { "VTK_TICKS_BOTH", vtkAxisActor::VTK_TICKS_BOTH },
      };

    o = PyvtkAxisActor_TickLocation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkAxisActor::AlignLocation cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_ALIGN_TOP", vtkAxisActor::VTK_ALIGN_TOP },
        { "VTK_ALIGN_BOTTOM", vtkAxisActor::VTK_ALIGN_BOTTOM },
        { "VTK_ALIGN_POINT1", vtkAxisActor::VTK_ALIGN_POINT1 },
        { "VTK_ALIGN_POINT2", vtkAxisActor::VTK_ALIGN_POINT2 },
      };

    o = PyvtkAxisActor_AlignLocation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_AXIS_TYPE_X", vtkAxisActor::VTK_AXIS_TYPE_X },
        { "VTK_AXIS_TYPE_Y", vtkAxisActor::VTK_AXIS_TYPE_Y },
        { "VTK_AXIS_TYPE_Z", vtkAxisActor::VTK_AXIS_TYPE_Z },
      };

    o = PyvtkAxisActor_AxisType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_AXIS_POS_MINMIN", vtkAxisActor::VTK_AXIS_POS_MINMIN },
        { "VTK_AXIS_POS_MINMAX", vtkAxisActor::VTK_AXIS_POS_MINMAX },
        { "VTK_AXIS_POS_MAXMAX", vtkAxisActor::VTK_AXIS_POS_MAXMAX },
        { "VTK_AXIS_POS_MAXMIN", vtkAxisActor::VTK_AXIS_POS_MAXMIN },
      };

    o = PyvtkAxisActor_AxisPosition_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAxisActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAxisActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAxisActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

