// python wrapper for vtkSphericalPointIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSphericalPointIterator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSphericalPointIterator(PyObject *dict); }
extern "C" { PyObject *PyvtkSphericalPointIterator_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSphericalPointIterator_AxesType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkSphericalPointIterator.AxesType", // tp_name
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
PyObject *PyvtkSphericalPointIterator_AxesType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSphericalPointIterator_AxesType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSphericalPointIterator_SortType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkSphericalPointIterator.SortType", // tp_name
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
PyObject *PyvtkSphericalPointIterator_SortType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSphericalPointIterator_SortType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSphericalPointIterator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSphericalPointIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSphericalPointIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSphericalPointIterator *tempr = vtkSphericalPointIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSphericalPointIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSphericalPointIterator::NewInstance());

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
PyvtkSphericalPointIterator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSphericalPointIterator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSphericalPointIterator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetDataSet(temp0);
    }
    else
    {
      op->vtkSphericalPointIterator::SetDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet() :
      op->vtkSphericalPointIterator::GetDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_SetAxes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->SetAxes(temp0);
    }
    else
    {
      op->vtkSphericalPointIterator::SetAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphericalPointIterator_SetAxes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  int temp0;
  int temp1 = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetAxes(temp0, temp1);
    }
    else
    {
      op->vtkSphericalPointIterator::SetAxes(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSphericalPointIterator_SetAxes_Methods[] = {
  {"SetAxes", PyvtkSphericalPointIterator_SetAxes_s1, METH_VARARGS,
   "@V *vtkDoubleArray"},
  {"SetAxes", PyvtkSphericalPointIterator_SetAxes_s2, METH_VARARGS,
   "@i|i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSphericalPointIterator_SetAxes(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSphericalPointIterator_SetAxes_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSphericalPointIterator_SetAxes_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxes");
  return nullptr;
}


static PyObject *
PyvtkSphericalPointIterator_GetAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetAxes() :
      op->vtkSphericalPointIterator::GetAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_SetSorting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSorting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSorting(temp0);
    }
    else
    {
      op->vtkSphericalPointIterator::SetSorting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_GetSortingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortingMinValue() :
      op->vtkSphericalPointIterator::GetSortingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_GetSortingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortingMaxValue() :
      op->vtkSphericalPointIterator::GetSortingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_GetSorting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSorting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSorting() :
      op->vtkSphericalPointIterator::GetSorting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_SetSortTypeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortTypeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSortTypeToNone();
    }
    else
    {
      op->vtkSphericalPointIterator::SetSortTypeToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_SetSortTypeToAscending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortTypeToAscending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSortTypeToAscending();
    }
    else
    {
      op->vtkSphericalPointIterator::SetSortTypeToAscending();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_SetSortTypeToDescending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortTypeToDescending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSortTypeToDescending();
    }
    else
    {
      op->vtkSphericalPointIterator::SetSortTypeToDescending();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->Initialize(temp0, temp1) :
      op->vtkSphericalPointIterator::Initialize(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSphericalPointIterator_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->Initialize(temp0, temp1, temp2) :
      op->vtkSphericalPointIterator::Initialize(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSphericalPointIterator_Initialize_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->Initialize(temp0) :
      op->vtkSphericalPointIterator::Initialize(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSphericalPointIterator_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSphericalPointIterator_Initialize_s1(self, args);
    case 3:
      return PyvtkSphericalPointIterator_Initialize_s2(self, args);
    case 1:
      return PyvtkSphericalPointIterator_Initialize_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return nullptr;
}


static PyObject *
PyvtkSphericalPointIterator_GoToFirstPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToFirstPoint();
    }
    else
    {
      op->vtkSphericalPointIterator::GoToFirstPoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkSphericalPointIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_GoToNextPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToNextPoint();
    }
    else
    {
      op->vtkSphericalPointIterator::GoToNextPoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_GetCurrentPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  long long temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetCurrentPoint(temp0, temp1);
    }
    else
    {
      op->vtkSphericalPointIterator::GetCurrentPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphericalPointIterator_GetCurrentPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCurrentPoint() :
      op->vtkSphericalPointIterator::GetCurrentPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSphericalPointIterator_GetCurrentPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSphericalPointIterator_GetCurrentPoint_s1(self, args);
    case 0:
      return PyvtkSphericalPointIterator_GetCurrentPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCurrentPoint");
  return nullptr;
}


static PyObject *
PyvtkSphericalPointIterator_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPoint(temp0, temp1) :
      op->vtkSphericalPointIterator::GetPoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_GetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfAxes() :
      op->vtkSphericalPointIterator::GetNumberOfAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_GetAxisPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  int temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  const long long *temp2c = temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->GetAxisPoints(temp0, temp1, temp2c);
    }
    else
    {
      op->vtkSphericalPointIterator::GetAxisPoints(temp0, temp1, temp2c);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2c, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphericalPointIterator_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphericalPointIterator *op = static_cast<vtkSphericalPointIterator *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation(temp0);
    }
    else
    {
      op->vtkSphericalPointIterator::BuildRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSphericalPointIterator_Methods[] = {
  {"IsTypeOf", PyvtkSphericalPointIterator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSphericalPointIterator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSphericalPointIterator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSphericalPointIterator\nC++: static vtkSphericalPointIterator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSphericalPointIterator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSphericalPointIterator\nC++: vtkSphericalPointIterator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSphericalPointIterator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSphericalPointIterator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDataSet", PyvtkSphericalPointIterator_SetDataSet, METH_VARARGS,
   "SetDataSet(self, _arg:vtkDataSet) -> None\nC++: virtual void SetDataSet(vtkDataSet *_arg)\n\nDefine the dataset and its associated points over which to\niterate.\n"},
  {"GetDataSet", PyvtkSphericalPointIterator_GetDataSet, METH_VARARGS,
   "GetDataSet(self) -> vtkDataSet\nC++: virtual vtkDataSet *GetDataSet()\n\n"},
  {"SetAxes", PyvtkSphericalPointIterator_SetAxes, METH_VARARGS,
   "SetAxes(self, _arg:vtkDoubleArray) -> None\nC++: virtual void SetAxes(vtkDoubleArray *_arg)\nSetAxes(self, axesType:int, resolution:int=6) -> None\nC++: void SetAxes(int axesType, int resolution=6)\n\nDefine the axes for the point iterator. This only needs to be\ndefined once (typically immediately after instantiation). The\naxes data array must be a 3-component array, where each 3-tuple\ndefines a vector defining a axis. The number of axes is limited\nto 100,000 or less (typically the numbers of axes are <=20). The\norder in which the axes are defined determines the order in which\nthe axes are traversed. Depending on the order, it's possible to\ncreate a variety of traversal patterns, ranging from\nclockwise/counterclockwise to spiral to ping pong (e.g., -x,+x,\n-y,+y, -z,+z). Note: the defining axes need not be normalized,\nthey are normalized and copied into internal iterator storage in\nthe Initialize() method.\n"},
  {"GetAxes", PyvtkSphericalPointIterator_GetAxes, METH_VARARGS,
   "GetAxes(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetAxes()\n\n"},
  {"SetSorting", PyvtkSphericalPointIterator_SetSorting, METH_VARARGS,
   "SetSorting(self, _arg:int) -> None\nC++: virtual void SetSorting(int _arg)\n\nSpecify whether points along each axis are radially sorted, and\nif so, whether in an ascending or descending direction. (Note\nthat some operators such as the locator query\nFindClosestNPoints() return radially sorted neighborhoods in\nascending direction and often do not need sorting - this can save\nsignificant time.)\n"},
  {"GetSortingMinValue", PyvtkSphericalPointIterator_GetSortingMinValue, METH_VARARGS,
   "GetSortingMinValue(self) -> int\nC++: virtual int GetSortingMinValue()\n\n"},
  {"GetSortingMaxValue", PyvtkSphericalPointIterator_GetSortingMaxValue, METH_VARARGS,
   "GetSortingMaxValue(self) -> int\nC++: virtual int GetSortingMaxValue()\n\n"},
  {"GetSorting", PyvtkSphericalPointIterator_GetSorting, METH_VARARGS,
   "GetSorting(self) -> int\nC++: virtual int GetSorting()\n\n"},
  {"SetSortTypeToNone", PyvtkSphericalPointIterator_SetSortTypeToNone, METH_VARARGS,
   "SetSortTypeToNone(self) -> None\nC++: void SetSortTypeToNone()\n\n"},
  {"SetSortTypeToAscending", PyvtkSphericalPointIterator_SetSortTypeToAscending, METH_VARARGS,
   "SetSortTypeToAscending(self) -> None\nC++: void SetSortTypeToAscending()\n\n"},
  {"SetSortTypeToDescending", PyvtkSphericalPointIterator_SetSortTypeToDescending, METH_VARARGS,
   "SetSortTypeToDescending(self) -> None\nC++: void SetSortTypeToDescending()\n\n"},
  {"Initialize", PyvtkSphericalPointIterator_Initialize, METH_VARARGS,
   "Initialize(self, center:[float, float, float],\n    neighborhood:vtkIdList) -> bool\nC++: bool Initialize(double center[3], vtkIdList *neighborhood)\nInitialize(self, center:[float, float, float], numNei:int,\n    neighborhood:[int, ...]) -> bool\nC++: bool Initialize(double center[3], vtkIdType numNei,\n    vtkIdType *neighborhood)\nInitialize(self, center:[float, float, float]) -> bool\nC++: bool Initialize(double center[3])\n\nInitialize the iteration process around a position [x], over a\nset of points (the neighborhood) defined by a list of numNei\npoint ids. (The point ids refer to the points contained in the\ndataset.) If initialization fails (because the Axes or the\nDataSet have not been defined) then false is returned; true\notherwise. One of the Initialize() variants enables iteration\nover all points in the dataset.\n"},
  {"GoToFirstPoint", PyvtkSphericalPointIterator_GoToFirstPoint, METH_VARARGS,
   "GoToFirstPoint(self) -> None\nC++: void GoToFirstPoint()\n\nBegin iterating over the neighborhood of points. It is possible\nthat not all points are iterated over - those points not\nprojecting onto any axis with a positive dot product are not\nvisited.\n"},
  {"IsDoneWithTraversal", PyvtkSphericalPointIterator_IsDoneWithTraversal, METH_VARARGS,
   "IsDoneWithTraversal(self) -> bool\nC++: bool IsDoneWithTraversal()\n\nReturn true if set traversal is completed. Otherwise false.\n"},
  {"GoToNextPoint", PyvtkSphericalPointIterator_GoToNextPoint, METH_VARARGS,
   "GoToNextPoint(self) -> None\nC++: void GoToNextPoint()\n\nGo to the next point in the neighborhood. This is only valid when\nIsDoneWithTraversal() returns false;\n"},
  {"GetCurrentPoint", PyvtkSphericalPointIterator_GetCurrentPoint, METH_VARARGS,
   "GetCurrentPoint(self, ptId:int, x:[float, float, float]) -> None\nC++: void GetCurrentPoint(vtkIdType &ptId, double x[3])\nGetCurrentPoint(self) -> int\nC++: vtkIdType GetCurrentPoint()\n\nGet the current point (point id and coordinates) during forward\niteration.\n"},
  {"GetPoint", PyvtkSphericalPointIterator_GetPoint, METH_VARARGS,
   "GetPoint(self, axis:int, ptIdx:int) -> int\nC++: vtkIdType GetPoint(int axis, int ptIdx)\n\nProvide random access to the jth point of the ith axis. Returns\nthe point id located at (axis,ptIdx); or a value <0 if the\nrequested point does not exist.\n"},
  {"GetNumberOfAxes", PyvtkSphericalPointIterator_GetNumberOfAxes, METH_VARARGS,
   "GetNumberOfAxes(self) -> int\nC++: vtkIdType GetNumberOfAxes()\n\nReturn the number of axes defined. The value returned is valid\nonly after Initialize() is invoked.\n"},
  {"GetAxisPoints", PyvtkSphericalPointIterator_GetAxisPoints, METH_VARARGS,
   "GetAxisPoints(self, axis:int, npts:int, pts:(int, ...)) -> None\nC++: void GetAxisPoints(int axis, vtkIdType &npts,\n    const vtkIdType *&pts)\n\nReturn the list of points along the specified ith axis.\n"},
  {"BuildRepresentation", PyvtkSphericalPointIterator_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self, pd:vtkPolyData) -> None\nC++: void BuildRepresentation(vtkPolyData *pd)\n\nA convenience method that produces a geometric representation of\nthe iterator (e.g., axes + center). The representation simply\ndraws lines for each of the axes emanating from the center point.\nEach line (or line cell) is assigned cell data which is the axis\nnumber. This is typically used for debugging or educational\npurposes. Note that the method is valid only after Initialize()\nhas been invoked.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSphericalPointIterator_Doc =
  "vtkSphericalPointIterator - Traverse a collection of points in\nspherical ordering.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSphericalPointIterator is a state-based iterator for traversing a\n"
  "set of points (i.e., a neighborhood of points) in a dataset,\n"
  "providing a point traversal order across user-defined \"axes\" which\n"
  "span a 2D or 3D space (typically a circle or sphere). The points\n"
  "along each axes may be sorted in increasing radial order. To define\n"
  "the points, specify a dataset (i.e., its associated points, whether\n"
  "the points are represented implicitly or explicitly) and an\n"
  "associated neighborhood over which to iterate. Methods for iterating\n"
  "over the points are provided.\n\n"
  "For example, consider the axes of iteration to be the four rays\n"
  "emanating from the center of a square and passing through the center\n"
  "of each of the four edges of the square. Points to be iterated over\n"
  "are associated (using a dot product) with each of the four axes, and\n"
  "then can be sorted along each axis. Then the order of iteration is\n"
  "then: (axis0,pt0), (axis1,pt0), (axis2,pt0), (axis3,pt0),\n"
  "(axis0,pt1), (axis1,pt1), (axis2,pt1), (axis3,pt1), (axis0,pt2),\n"
  "(axis1,pt2), (axis2,pt2), (axis3,pt2), and so on in a \"spiraling\"\n"
  "fashion until all points are visited. Thus the order of visitation\n"
  "is: iteration i visits all N axes in order, returning the jth point\n"
  "sorted along each of the N axes (i.e., i increases the fastest).\n"
  "Alternatively, methods exist to randomly access points, or points\n"
  "associated with an axes, so that custom iteration methods can be\n"
  "defined.\n\n"
  "The iterator can be defined with any number of axes (defined by 3D\n"
  "vectors). The axes must not be coincident, and typically are equally\n"
  "spaced from one another. The order which the axes are defined\n"
  "determines the order in which the axes (and hence the points) are\n"
  "traversed. So for example, in a 2D sphere, four axes in the\n"
  "(-x,+x,-y,+y) directions would provide a \"ping pong\" iteration, while\n"
  "four axes ordered in the (+x,+y,-x,-y) directions would provide a\n"
  "counterclockwise rotation iteration.\n\n"
  "The iterator provides thread-safe iteration of dataset points. It\n"
  "supports both random and forward iteration.\n\n"
  "@warning\n"
  "The behavior of the iterator depends on the ordering of the iteration\n"
  "axes. It is possible to obtain a wide variety of iteration patterns\n"
  "depending on these axes. For example, if only one axis is defined,\n"
  "then a \"linear\" pattern is possible (i.e., visiting points in the\n"
  "half space defined by the vector); if two axes, then a \"diagonal\"\n"
  "iteration pattern; and so on. Note that points are sorted along the\n"
  "iteration axes depending on the their projection onto them (e.g.,\n"
  "using the dot product). Because only points with positive projection\n"
  "are associated with an axis, it is possible that some points in the\n"
  "neighborhood will not be processed (i.e., if a point in the\n"
  "neighborhood does not positively project onto any of the axes, then\n"
  "it will not be iterated over). Thus if all points are to be iterated\n"
  "over, then the axes must form a basis which covers all points using\n"
  "positive projections.\n\n"
  "@sa\n"
  "vtkVoronoi2D vtkVoronoi3D vtkStaticPointLocator vtkPointLocator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSphericalPointIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkSphericalPointIterator", // tp_name
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
  PyvtkSphericalPointIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSphericalPointIterator_StaticNew()
{
  return vtkSphericalPointIterator::New();
}

PyObject *PyvtkSphericalPointIterator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSphericalPointIterator_Type, PyvtkSphericalPointIterator_Methods,
    "vtkSphericalPointIterator",
 &PyvtkSphericalPointIterator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSphericalPointIterator_AxesType_Type);
  PyVTKEnum_Add(&PyvtkSphericalPointIterator_AxesType_Type, "vtkSphericalPointIterator.AxesType");

  o = (PyObject *)&PyvtkSphericalPointIterator_AxesType_Type;
  if (PyDict_SetItemString(d, "AxesType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkSphericalPointIterator_SortType_Type);
  PyVTKEnum_Add(&PyvtkSphericalPointIterator_SortType_Type, "vtkSphericalPointIterator.SortType");

  o = (PyObject *)&PyvtkSphericalPointIterator_SortType_Type;
  if (PyDict_SetItemString(d, "SortType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkSphericalPointIterator::AxesType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "XY_CW_AXES", vtkSphericalPointIterator::XY_CW_AXES },
        { "XY_CCW_AXES", vtkSphericalPointIterator::XY_CCW_AXES },
        { "XY_SQUARE_AXES", vtkSphericalPointIterator::XY_SQUARE_AXES },
        { "CUBE_AXES", vtkSphericalPointIterator::CUBE_AXES },
        { "OCTAHEDRON_AXES", vtkSphericalPointIterator::OCTAHEDRON_AXES },
        { "CUBE_OCTAHEDRON_AXES", vtkSphericalPointIterator::CUBE_OCTAHEDRON_AXES },
        { "DODECAHEDRON_AXES", vtkSphericalPointIterator::DODECAHEDRON_AXES },
        { "ICOSAHEDRON_AXES", vtkSphericalPointIterator::ICOSAHEDRON_AXES },
      };

    o = PyvtkSphericalPointIterator_AxesType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSphericalPointIterator::SortType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "SORT_NONE", vtkSphericalPointIterator::SORT_NONE },
        { "SORT_ASCENDING", vtkSphericalPointIterator::SORT_ASCENDING },
        { "SORT_DESCENDING", vtkSphericalPointIterator::SORT_DESCENDING },
      };

    o = PyvtkSphericalPointIterator_SortType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSphericalPointIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSphericalPointIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSphericalPointIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

