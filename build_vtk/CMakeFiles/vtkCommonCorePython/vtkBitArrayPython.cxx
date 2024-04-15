// python wrapper for vtkBitArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBitArray.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBitArray(PyObject *dict); }
extern "C" { PyObject *PyvtkBitArray_ClassNew(); }

#ifndef DECLARED_PyvtkDataArray_ClassNew
extern "C" { PyObject *PyvtkDataArray_ClassNew(); }
#define DECLARED_PyvtkDataArray_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBitArray_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkBitArray.DeleteMethod", // tp_name
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
PyObject *PyvtkBitArray_DeleteMethod_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkBitArray_DeleteMethod_Type, static_cast<int>(val));
}


static PyObject *
PyvtkBitArray_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBitArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBitArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBitArray *tempr = vtkBitArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBitArray::NewInstance());

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
PyvtkBitArray_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBitArray::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBitArray::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  long long temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkBitArray::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkBitArray::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkBitArray::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkBitArray::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfTuples(temp0);
    }
    else
    {
      op->vtkBitArray::SetNumberOfTuples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetNumberOfValues(temp0) :
      op->vtkBitArray::SetNumberOfValues(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_SetTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  long long temp1;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->SetTuple(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBitArray::SetTuple(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_SetTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= i && i < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->SetTuple(temp0, temp1);
    }
    else
    {
      op->vtkBitArray::SetTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_SetTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBitArray_SetTuple_s1(self, args);
    case 2:
      return PyvtkBitArray_SetTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTuple");
  return nullptr;
}


static PyObject *
PyvtkBitArray_InsertTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  long long temp1;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuple(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBitArray::InsertTuple(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_InsertTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0), "0 <= i"))
  {
    if (ap.IsBound())
    {
      op->InsertTuple(temp0, temp1);
    }
    else
    {
      op->vtkBitArray::InsertTuple(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_InsertTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBitArray_InsertTuple_s1(self, args);
    case 2:
      return PyvtkBitArray_InsertTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuple");
  return nullptr;
}


static PyObject *
PyvtkBitArray_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBitArray::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  long long temp1;
  long long temp2;
  vtkAbstractArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBitArray::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBitArray_InsertTuples_s1(self, args);
    case 4:
      return PyvtkBitArray_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}


static PyObject *
PyvtkBitArray_InsertTuplesStartingAt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuplesStartingAt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->InsertTuplesStartingAt(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBitArray::InsertTuplesStartingAt(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_InsertNextTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  vtkAbstractArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextTuple(temp0, temp1) :
      op->vtkBitArray::InsertNextTuple(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_InsertNextTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0) &&
      ap.CheckSizeHint(0, size0, op->GetNumberOfComponents()))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextTuple(temp0) :
      op->vtkBitArray::InsertNextTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_InsertNextTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBitArray_InsertNextTuple_s1(self, args);
    case 1:
      return PyvtkBitArray_InsertNextTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextTuple");
  return nullptr;
}


static PyObject *
PyvtkBitArray_GetTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= i && i < GetNumberOfTuples()"))
  {
    size_t sizer = op->GetNumberOfComponents();
    double *tempr = (ap.IsBound() ?
      op->GetTuple(temp0) :
      op->vtkBitArray::GetTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_GetTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, op->GetNumberOfComponents()) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= i && i < GetNumberOfTuples()"))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTuple(temp0, temp1);
    }
    else
    {
      op->vtkBitArray::GetTuple(temp0, temp1);
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
PyvtkBitArray_GetTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBitArray_GetTuple_s1(self, args);
    case 2:
      return PyvtkBitArray_GetTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTuple");
  return nullptr;
}


static PyObject *
PyvtkBitArray_RemoveTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= id && id < GetNumberOfTuples()"))
  {
    if (ap.IsBound())
    {
      op->RemoveTuple(temp0);
    }
    else
    {
      op->vtkBitArray::RemoveTuple(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_RemoveFirstTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFirstTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveFirstTuple();
    }
    else
    {
      op->vtkBitArray::RemoveFirstTuple();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_RemoveLastTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLastTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveLastTuple();
    }
    else
    {
      op->vtkBitArray::RemoveLastTuple();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfTuples()),
                      "0 <= i && i < GetNumberOfTuples()") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= j && j < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->SetComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBitArray::SetComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkBitArray::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Resize(temp0) :
      op->vtkBitArray::Resize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkBitArray::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkBitArray::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->InsertValue(temp0, temp1);
    }
    else
    {
      op->vtkBitArray::InsertValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_SetVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= idx && idx < GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkBitArray::SetVariantValue(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkBitArray_InsertVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      ap.CheckPrecond((0 <= temp0), "0 <= idx"))
  {
    if (ap.IsBound())
    {
      op->InsertVariantValue(temp0, *temp1);
    }
    else
    {
      op->vtkBitArray::InsertVariantValue(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkBitArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextValue(temp0) :
      op->vtkBitArray::InsertNextValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_InsertComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.CheckPrecond((0 <= temp0), "0 <= i") &&
      ap.CheckPrecond((0 <= temp1 && temp1 < op->GetNumberOfComponents()),
                      "0 <= j && j < GetNumberOfComponents()"))
  {
    if (ap.IsBound())
    {
      op->InsertComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBitArray::InsertComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetPointer(temp0) :
      op->vtkBitArray::GetPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_WritePointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WritePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->WritePointer(temp0, temp1) :
      op->vtkBitArray::WritePointer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_WriteVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    void  *tempr = (ap.IsBound() ?
      op->WriteVoidPointer(temp0, temp1) :
      op->vtkBitArray::WriteVoidPointer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkBitArray::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_DeepCopy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkBitArray::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_DeepCopy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkBitArray::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBitArray_DeepCopy_Methods[] = {
  {"DeepCopy", PyvtkBitArray_DeepCopy_s1, METH_VARARGS,
   "@V *vtkDataArray"},
  {"DeepCopy", PyvtkBitArray_DeepCopy_s2, METH_VARARGS,
   "@V *vtkAbstractArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBitArray_DeepCopy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBitArray_DeepCopy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DeepCopy");
  return nullptr;
}


static PyObject *
PyvtkBitArray_SetVoidArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetVoidArray(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBitArray::SetVoidArray(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}

static PyObject *
PyvtkBitArray_SetVoidArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetVoidArray(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBitArray::SetVoidArray(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}

static PyObject *
PyvtkBitArray_SetVoidArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBitArray_SetVoidArray_s1(self, args);
    case 4:
      return PyvtkBitArray_SetVoidArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVoidArray");
  return nullptr;
}


static PyObject *
PyvtkBitArray_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkBitArray::NewIterator());

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
PyvtkBitArray_LookupValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    long long tempr = (ap.IsBound() ?
      op->LookupValue(*temp0) :
      op->vtkBitArray::LookupValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkBitArray_LookupValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->LookupValue(*temp0, temp1);
    }
    else
    {
      op->vtkBitArray::LookupValue(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkBitArray_LookupValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->LookupValue(temp0) :
      op->vtkBitArray::LookupValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBitArray_LookupValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  int temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->LookupValue(temp0, temp1);
    }
    else
    {
      op->vtkBitArray::LookupValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBitArray_LookupValue_Methods[] = {
  {"LookupValue", PyvtkBitArray_LookupValue_s1, METH_VARARGS,
   "@W vtkVariant"},
  {"LookupValue", PyvtkBitArray_LookupValue_s2, METH_VARARGS,
   "@WV vtkVariant *vtkIdList"},
  {"LookupValue", PyvtkBitArray_LookupValue_s3, METH_VARARGS,
   "@i"},
  {"LookupValue", PyvtkBitArray_LookupValue_s4, METH_VARARGS,
   "@iV *vtkIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBitArray_LookupValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBitArray_LookupValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "LookupValue");
  return nullptr;
}


static PyObject *
PyvtkBitArray_DataChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DataChanged();
    }
    else
    {
      op->vtkBitArray::DataChanged();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBitArray_ClearLookup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLookup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBitArray *op = static_cast<vtkBitArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLookup();
    }
    else
    {
      op->vtkBitArray::ClearLookup();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBitArray_Methods[] = {
  {"IsTypeOf", PyvtkBitArray_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBitArray_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBitArray_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBitArray\nC++: static vtkBitArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBitArray_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBitArray\nC++: vtkBitArray *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBitArray_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBitArray_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Allocate", PyvtkBitArray_Allocate, METH_VARARGS,
   "Allocate(self, sz:int, ext:int=1000) -> int\nC++: vtkTypeBool Allocate(vtkIdType sz, vtkIdType ext=1000)\n    override;\n\nAllocate memory for this array. Delete old storage only if\nnecessary. Note that ext is no longer used.\n"},
  {"Initialize", PyvtkBitArray_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nRelease storage and reset array to initial state.\n"},
  {"GetDataType", PyvtkBitArray_GetDataType, METH_VARARGS,
   "GetDataType(self) -> int\nC++: int GetDataType() override;\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkType.h.\n"},
  {"GetDataTypeSize", PyvtkBitArray_GetDataTypeSize, METH_VARARGS,
   "GetDataTypeSize(self) -> int\nC++: int GetDataTypeSize() override;\n\nReturn the size of the underlying data type.  For a bit, 0 is\nreturned.  For string 0 is returned. Arrays with variable length\ncomponents return 0.\n"},
  {"SetNumberOfTuples", PyvtkBitArray_SetNumberOfTuples, METH_VARARGS,
   "SetNumberOfTuples(self, number:int) -> None\nC++: void SetNumberOfTuples(vtkIdType number) override;\n\nSet the number of n-tuples in the array.\n"},
  {"SetNumberOfValues", PyvtkBitArray_SetNumberOfValues, METH_VARARGS,
   "SetNumberOfValues(self, number:int) -> bool\nC++: bool SetNumberOfValues(vtkIdType number) override;\n\nIn addition to setting the number of values, this method also\nsets the unused bits of the last byte of the array.\n"},
  {"SetTuple", PyvtkBitArray_SetTuple, METH_VARARGS,
   "SetTuple(self, i:int, j:int, source:vtkAbstractArray) -> None\nC++: void SetTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source) override;\nSetTuple(self, i:int, tuple:(float, ...)) -> None\nC++: void SetTuple(vtkIdType i, const double *tuple) override;\n\nSet the tuple at the ith location using the jth tuple in the\nsource array. This method assumes that the two arrays have the\nsame type and structure. Note that range checking and memory\nallocation is not performed; use in conjunction with\nSetNumberOfTuples() to allocate space.\n\nNOT THREAD-SAFE\n"},
  {"InsertTuple", PyvtkBitArray_InsertTuple, METH_VARARGS,
   "InsertTuple(self, i:int, j:int, source:vtkAbstractArray) -> None\nC++: void InsertTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source) override;\nInsertTuple(self, i:int, tuple:(float, ...)) -> None\nC++: void InsertTuple(vtkIdType i, const double *tuple) override;\n\nInsert the jth tuple in the source array, at ith location in this\narray. Note that memory allocation is performed as necessary to\nhold the data.\n\nNOT THREAD-SAFE\n"},
  {"InsertTuples", PyvtkBitArray_InsertTuples, METH_VARARGS,
   "InsertTuples(self, dstIds:vtkIdList, srcIds:vtkIdList,\n    source:vtkAbstractArray) -> None\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\nInsertTuples(self, dstStart:int, n:int, srcStart:int,\n    source:vtkAbstractArray) -> None\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\n\nCopy the tuples indexed in srcIds from the source array to the\ntuple locations indexed by dstIds in this array. Note that memory\nallocation is performed as necessary to hold the data.\n\nNOT THREAD-SAFE\n"},
  {"InsertTuplesStartingAt", PyvtkBitArray_InsertTuplesStartingAt, METH_VARARGS,
   "InsertTuplesStartingAt(self, dstStart:int, srcIds:vtkIdList,\n    source:vtkAbstractArray) -> None\nC++: void InsertTuplesStartingAt(vtkIdType dstStart,\n    vtkIdList *srcIds, vtkAbstractArray *source) override;\n\nCopy the tuples indexed in srcIds from the source array to the\ntuple locations starting at index dstStart. Note that memory\nallocation is performed as necessary to hold the data.\n\nNOT THREAD-SAFE\n"},
  {"InsertNextTuple", PyvtkBitArray_InsertNextTuple, METH_VARARGS,
   "InsertNextTuple(self, j:int, source:vtkAbstractArray) -> int\nC++: vtkIdType InsertNextTuple(vtkIdType j,\n    vtkAbstractArray *source) override;\nInsertNextTuple(self, tuple:(float, ...)) -> int\nC++: vtkIdType InsertNextTuple(const double *tuple) override;\n\nInsert the jth tuple in the source array, at the end in this\narray. Note that memory allocation is performed as necessary to\nhold the data. Returns the location at which the data was\ninserted.\n\nNOT THREAD-SAFE\n"},
  {"GetTuple", PyvtkBitArray_GetTuple, METH_VARARGS,
   "GetTuple(self, i:int) -> (float, ...)\nC++: double *GetTuple(vtkIdType i) override;\nGetTuple(self, i:int, tuple:[float, ...]) -> None\nC++: void GetTuple(vtkIdType i, double *tuple) override;\n\nGet a pointer to a tuple at the ith location. This is a dangerous\nmethod (it is not thread safe since a pointer is returned).\n"},
  {"RemoveTuple", PyvtkBitArray_RemoveTuple, METH_VARARGS,
   "RemoveTuple(self, id:int) -> None\nC++: void RemoveTuple(vtkIdType id) override;\n\nThese methods remove tuples from the data array. They shift data\nand resize array, so the data array is still valid after this\noperation. Note, this operation is fairly slow.\n\nNOT THREAD-SAFE\n"},
  {"RemoveFirstTuple", PyvtkBitArray_RemoveFirstTuple, METH_VARARGS,
   "RemoveFirstTuple(self) -> None\nC++: void RemoveFirstTuple() override;\n\n"},
  {"RemoveLastTuple", PyvtkBitArray_RemoveLastTuple, METH_VARARGS,
   "RemoveLastTuple(self) -> None\nC++: void RemoveLastTuple() override;\n\n"},
  {"SetComponent", PyvtkBitArray_SetComponent, METH_VARARGS,
   "SetComponent(self, i:int, j:int, c:float) -> None\nC++: void SetComponent(vtkIdType i, int j, double c) override;\n\nSet the data component at the ith tuple and jth component\nlocation. Note that i is less then NumberOfTuples and j is less\nthen NumberOfComponents. Make sure enough memory has been\nallocated (use SetNumberOfTuples() and  SetNumberOfComponents()).\n\nNOT THREAD-SAFE\n"},
  {"Squeeze", PyvtkBitArray_Squeeze, METH_VARARGS,
   "Squeeze(self) -> None\nC++: void Squeeze() override;\n\nFree any unneeded memory.\n"},
  {"Resize", PyvtkBitArray_Resize, METH_VARARGS,
   "Resize(self, numTuples:int) -> int\nC++: vtkTypeBool Resize(vtkIdType numTuples) override;\n\nResize the array while conserving the data.\n"},
  {"GetValue", PyvtkBitArray_GetValue, METH_VARARGS,
   "GetValue(self, id:int) -> int\nC++: int GetValue(vtkIdType id)\n\nGet the data at a particular index.\n"},
  {"SetValue", PyvtkBitArray_SetValue, METH_VARARGS,
   "SetValue(self, id:int, value:int) -> None\nC++: void SetValue(vtkIdType id, int value)\n\nSet the data at a particular index. Does not do range checking.\nMake sure you use the method SetNumberOfValues() before inserting\ndata.\n\nNOT THREAD-SAFE\n"},
  {"InsertValue", PyvtkBitArray_InsertValue, METH_VARARGS,
   "InsertValue(self, id:int, i:int) -> None\nC++: void InsertValue(vtkIdType id, int i)\n\nInserts values and checks to make sure there is enough memory\n\nNOT THREAD-SAFE\n"},
  {"SetVariantValue", PyvtkBitArray_SetVariantValue, METH_VARARGS,
   "SetVariantValue(self, idx:int, value:vtkVariant) -> None\nC++: void SetVariantValue(vtkIdType idx, vtkVariant value)\n    override;\n\nSet a value in the array from a variant.\n\nNOT THREAD-SAFE\n"},
  {"InsertVariantValue", PyvtkBitArray_InsertVariantValue, METH_VARARGS,
   "InsertVariantValue(self, idx:int, value:vtkVariant) -> None\nC++: void InsertVariantValue(vtkIdType idx, vtkVariant value)\n    override;\n\nInserts values from a variant and checks to ensure there is\nenough memory\n\nNOT THREAD-SAFE\n"},
  {"InsertNextValue", PyvtkBitArray_InsertNextValue, METH_VARARGS,
   "InsertNextValue(self, i:int) -> int\nC++: vtkIdType InsertNextValue(int i)\n\n"},
  {"InsertComponent", PyvtkBitArray_InsertComponent, METH_VARARGS,
   "InsertComponent(self, i:int, j:int, c:float) -> None\nC++: void InsertComponent(vtkIdType i, int j, double c) override;\n\nInsert the data component at ith tuple and jth component\nlocation. Note that memory allocation is performed as necessary\nto hold the data.\n\nNOT THREAD-SAFE\n"},
  {"GetPointer", PyvtkBitArray_GetPointer, METH_VARARGS,
   "GetPointer(self, id:int) -> Pointer\nC++: unsigned char *GetPointer(vtkIdType id)\n\nDirect manipulation of the underlying data.\n"},
  {"WritePointer", PyvtkBitArray_WritePointer, METH_VARARGS,
   "WritePointer(self, id:int, number:int) -> Pointer\nC++: unsigned char *WritePointer(vtkIdType id, vtkIdType number)\n\nGet the address of a particular data index. Make sure data is\nallocated for the number of items requested. Set MaxId according\nto the number of data values requested.\n"},
  {"WriteVoidPointer", PyvtkBitArray_WriteVoidPointer, METH_VARARGS,
   "WriteVoidPointer(self, id:int, number:int) -> Pointer\nC++: void *WriteVoidPointer(vtkIdType id, vtkIdType number)\n    override;\n\nGet the address of a particular data index. Make sure data is\nallocated for the number of items requested. If needed, increase\nMaxId to mark any new value ranges as in-use.\n"},
  {"GetVoidPointer", PyvtkBitArray_GetVoidPointer, METH_VARARGS,
   "GetVoidPointer(self, id:int) -> Pointer\nC++: void *GetVoidPointer(vtkIdType id) override;\n\nReturn a void pointer. For image pipeline interface and other\nspecial pointer manipulation. Use of this method is discouraged,\nas newer arrays require a deep-copy of the array data in order to\nreturn a suitable pointer. See vtkArrayDispatch for a safer\nalternative for fast data access.\n"},
  {"DeepCopy", PyvtkBitArray_DeepCopy, METH_VARARGS,
   "DeepCopy(self, da:vtkDataArray) -> None\nC++: void DeepCopy(vtkDataArray *da) override;\nDeepCopy(self, aa:vtkAbstractArray) -> None\nC++: void DeepCopy(vtkAbstractArray *aa) override;\n\nDeep copy of another bit array.\n"},
  {"SetVoidArray", PyvtkBitArray_SetVoidArray, METH_VARARGS,
   "SetVoidArray(self, array:Pointer, size:int, save:int) -> None\nC++: void SetVoidArray(void *array, vtkIdType size, int save)\n    override;\nSetVoidArray(self, array:Pointer, size:int, save:int,\n    deleteMethod:int) -> None\nC++: void SetVoidArray(void *array, vtkIdType size, int save,\n    int deleteMethod) override;\n\nThis method lets the user specify data to be held by the array. \nThe array argument is a pointer to the data.  size is the size of\nthe array supplied by the user.  Set save to 1 to keep the class\nfrom deleting the array when it cleans up or reallocates memory.\nThe class uses the actual array provided; it does not copy the\ndata from the supplied array. If the delete method is\nVTK_DATA_ARRAY_USER_DEFINED a custom free function can be\nassigned to be called using SetArrayFreeFunction, if no custom\nfunction is assigned we will default to delete[].\n"},
  {"NewIterator", PyvtkBitArray_NewIterator, METH_VARARGS,
   "NewIterator(self) -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nReturns a new vtkBitArrayIterator instance.\n"},
  {"LookupValue", PyvtkBitArray_LookupValue, METH_VARARGS,
   "LookupValue(self, value:vtkVariant) -> int\nC++: vtkIdType LookupValue(vtkVariant value) override;\nLookupValue(self, value:vtkVariant, ids:vtkIdList) -> None\nC++: void LookupValue(vtkVariant value, vtkIdList *ids) override;\nLookupValue(self, value:int) -> int\nC++: vtkIdType LookupValue(int value)\nLookupValue(self, value:int, ids:vtkIdList) -> None\nC++: void LookupValue(int value, vtkIdList *ids)\n\nReturn the indices where a specific value appears.\n"},
  {"DataChanged", PyvtkBitArray_DataChanged, METH_VARARGS,
   "DataChanged(self) -> None\nC++: void DataChanged() override;\n\nTell the array explicitly that the data has changed. This is only\nnecessary to call when you modify the array contents without\nusing the array's API (i.e. you retrieve a pointer to the data\nand modify the array contents).  You need to call this so that\nthe fast lookup will know to rebuild itself.  Otherwise, the\nlookup functions will give incorrect results.\n"},
  {"ClearLookup", PyvtkBitArray_ClearLookup, METH_VARARGS,
   "ClearLookup(self) -> None\nC++: void ClearLookup() override;\n\nDelete the associated fast lookup data structure on this array,\nif it exists.  The lookup will be rebuilt on the next call to a\nlookup function.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBitArray_Doc =
  "vtkBitArray - dynamic, self-adjusting array of bits\n\n"
  "Superclass: vtkDataArray\n\n"
  "vtkBitArray is an array of bits (0/1 data value). The array is packed\n"
  "so that each byte stores eight bits. vtkBitArray provides methods for\n"
  "insertion and retrieval of bits, and will automatically resize itself\n"
  "to hold new data.\n\n"
  "> WARNING > This class is not thread-safe during write access\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBitArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkBitArray", // tp_name
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
  PyvtkBitArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBitArray_StaticNew()
{
  return vtkBitArray::New();
}

PyObject *PyvtkBitArray_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBitArray_Type, PyvtkBitArray_Methods,
    "vtkBitArray",
 &PyvtkBitArray_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataArray_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkBitArray_DeleteMethod_Type);
  PyVTKEnum_Add(&PyvtkBitArray_DeleteMethod_Type, "vtkBitArray.DeleteMethod");

  o = (PyObject *)&PyvtkBitArray_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkBitArray::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkBitArray::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkBitArray::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkBitArray::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkBitArray::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkBitArray_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBitArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBitArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBitArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

