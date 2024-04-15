// python wrapper for vtkStringArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkStringArray.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStringArray(PyObject *dict); }
extern "C" { PyObject *PyvtkStringArray_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractArray_ClassNew
extern "C" { PyObject *PyvtkAbstractArray_ClassNew(); }
#define DECLARED_PyvtkAbstractArray_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStringArray_DeleteMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkStringArray.DeleteMethod", // tp_name
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
PyObject *PyvtkStringArray_DeleteMethod_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkStringArray_DeleteMethod_Type, static_cast<int>(val));
}


static PyObject *
PyvtkStringArray_ExtendedNew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExtendedNew");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = vtkStringArray::ExtendedNew();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStringArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStringArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStringArray *tempr = vtkStringArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStringArray::NewInstance());

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
PyvtkStringArray_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStringArray::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStringArray::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkStringArray::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_IsNumeric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNumeric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsNumeric() :
      op->vtkStringArray::IsNumeric());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkStringArray::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkStringArray::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkStringArray::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Resize(temp0) :
      op->vtkStringArray::Resize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_SetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::SetTuple(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_InsertTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::InsertTuple(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_InsertTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::InsertTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStringArray_InsertTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::InsertTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStringArray_InsertTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkStringArray_InsertTuples_s1(self, args);
    case 4:
      return PyvtkStringArray_InsertTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertTuples");
  return nullptr;
}


static PyObject *
PyvtkStringArray_InsertTuplesStartingAt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuplesStartingAt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::InsertTuplesStartingAt(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_InsertNextTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  long long temp0;
  vtkAbstractArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextTuple(temp0, temp1) :
      op->vtkStringArray::InsertNextTuple(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_InterpolateTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  vtkAbstractArray *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkAbstractArray") &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->InterpolateTuple(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkStringArray::InterpolateTuple(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStringArray_InterpolateTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  long long temp0;
  long long temp1;
  vtkAbstractArray *temp2 = nullptr;
  long long temp3;
  vtkAbstractArray *temp4 = nullptr;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkAbstractArray") &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkAbstractArray") &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->InterpolateTuple(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkStringArray::InterpolateTuple(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStringArray_InterpolateTuple(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkStringArray_InterpolateTuple_s1(self, args);
    case 6:
      return PyvtkStringArray_InterpolateTuple_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InterpolateTuple");
  return nullptr;
}


static PyObject *
PyvtkStringArray_GetTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkAbstractArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->GetTuples(temp0, temp1);
    }
    else
    {
      op->vtkStringArray::GetTuples(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStringArray_GetTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->GetTuples(temp0, temp1, temp2);
    }
    else
    {
      op->vtkStringArray::GetTuples(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStringArray_GetTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkStringArray_GetTuples_s1(self, args);
    case 3:
      return PyvtkStringArray_GetTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTuples");
  return nullptr;
}


static PyObject *
PyvtkStringArray_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  long long temp0;
  long long temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkStringArray::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= id && id < this->GetNumberOfValues()"))
  {
    vtkStdString *tempr = (ap.IsBound() ?
      &op->GetValue(temp0) :
      &op->vtkStringArray::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  long long temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfValues()),
                      "0 <= id && id < this->GetNumberOfValues()"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkStringArray::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::SetNumberOfTuples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkStringArray::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_GetNumberOfElementComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElementComponents() :
      op->vtkStringArray::GetNumberOfElementComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_GetElementComponentSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementComponentSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElementComponentSize() :
      op->vtkStringArray::GetElementComponentSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_InsertValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  long long temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.CheckPrecond((0 <= temp0), "0 <= id"))
  {
    if (ap.IsBound())
    {
      op->InsertValue(temp0, temp1);
    }
    else
    {
      op->vtkStringArray::InsertValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_SetVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::SetVariantValue(temp0, *temp1);
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
PyvtkStringArray_InsertVariantValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertVariantValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::InsertVariantValue(temp0, *temp1);
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
PyvtkStringArray_InsertNextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextValue(temp0) :
      op->vtkStringArray::InsertNextValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkStringArray::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_SetVoidArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::SetVoidArray(temp0, temp1, temp2);
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
PyvtkStringArray_SetVoidArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::SetVoidArray(temp0, temp1, temp2, temp3);
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
PyvtkStringArray_SetVoidArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkStringArray_SetVoidArray_s1(self, args);
    case 4:
      return PyvtkStringArray_SetVoidArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVoidArray");
  return nullptr;
}


static PyObject *
PyvtkStringArray_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkStringArray::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkStringArray::NewIterator());

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
PyvtkStringArray_GetDataSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetDataSize() :
      op->vtkStringArray::GetDataSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_LookupValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    long long tempr = (ap.IsBound() ?
      op->LookupValue(*temp0) :
      op->vtkStringArray::LookupValue(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkStringArray_LookupValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

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
      op->vtkStringArray::LookupValue(*temp0, temp1);
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
PyvtkStringArray_LookupValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->LookupValue(temp0) :
      op->vtkStringArray::LookupValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStringArray_LookupValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  vtkStdString temp0;
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
      op->vtkStringArray::LookupValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStringArray_LookupValue_Methods[] = {
  {"LookupValue", PyvtkStringArray_LookupValue_s1, METH_VARARGS,
   "@W vtkVariant"},
  {"LookupValue", PyvtkStringArray_LookupValue_s2, METH_VARARGS,
   "@WV vtkVariant *vtkIdList"},
  {"LookupValue", PyvtkStringArray_LookupValue_s3, METH_VARARGS,
   "@s"},
  {"LookupValue", PyvtkStringArray_LookupValue_s4, METH_VARARGS,
   "@sV *vtkIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkStringArray_LookupValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStringArray_LookupValue_Methods;
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
PyvtkStringArray_DataChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DataChanged();
    }
    else
    {
      op->vtkStringArray::DataChanged();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_DataElementChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataElementChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DataElementChanged(temp0);
    }
    else
    {
      op->vtkStringArray::DataElementChanged(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStringArray_ClearLookup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLookup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStringArray *op = static_cast<vtkStringArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLookup();
    }
    else
    {
      op->vtkStringArray::ClearLookup();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStringArray_Methods[] = {
  {"ExtendedNew", PyvtkStringArray_ExtendedNew, METH_VARARGS,
   "ExtendedNew() -> vtkStringArray\nC++: static vtkStringArray *ExtendedNew()\n\n"},
  {"IsTypeOf", PyvtkStringArray_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStringArray_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStringArray_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStringArray\nC++: static vtkStringArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStringArray_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStringArray\nC++: vtkStringArray *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStringArray_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStringArray_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataType", PyvtkStringArray_GetDataType, METH_VARARGS,
   "GetDataType(self) -> int\nC++: int GetDataType() override;\n\nGet the data type.\n"},
  {"IsNumeric", PyvtkStringArray_IsNumeric, METH_VARARGS,
   "IsNumeric(self) -> int\nC++: int IsNumeric() override;\n\nThis method is here to make backward compatibility easier.  It\nmust return true if and only if an array contains numeric data.\n"},
  {"Initialize", PyvtkStringArray_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nRelease storage and reset array to initial state.\n"},
  {"GetDataTypeSize", PyvtkStringArray_GetDataTypeSize, METH_VARARGS,
   "GetDataTypeSize(self) -> int\nC++: int GetDataTypeSize() override;\n\nReturn the size of the data type.  WARNING: This may not mean\nwhat you expect with strings.  It will return sizeof(std::string)\nand not take into account the data included in any particular\nstring.\n"},
  {"Squeeze", PyvtkStringArray_Squeeze, METH_VARARGS,
   "Squeeze(self) -> None\nC++: void Squeeze() override;\n\nFree any unnecessary memory. Resize object to just fit data\nrequirement. Reclaims extra memory.\n"},
  {"Resize", PyvtkStringArray_Resize, METH_VARARGS,
   "Resize(self, numTuples:int) -> int\nC++: vtkTypeBool Resize(vtkIdType numTuples) override;\n\nResize the array while conserving the data.\n"},
  {"SetTuple", PyvtkStringArray_SetTuple, METH_VARARGS,
   "SetTuple(self, i:int, j:int, source:vtkAbstractArray) -> None\nC++: void SetTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source) override;\n\nSet the tuple at the ith location using the jth tuple in the\nsource array. This method assumes that the two arrays have the\nsame type and structure. Note that range checking and memory\nallocation is not performed; use in conjunction with\nSetNumberOfTuples() to allocate space.\n"},
  {"InsertTuple", PyvtkStringArray_InsertTuple, METH_VARARGS,
   "InsertTuple(self, i:int, j:int, source:vtkAbstractArray) -> None\nC++: void InsertTuple(vtkIdType i, vtkIdType j,\n    vtkAbstractArray *source) override;\n\nInsert the jth tuple in the source array, at ith location in this\narray. Note that memory allocation is performed as necessary to\nhold the data.\n"},
  {"InsertTuples", PyvtkStringArray_InsertTuples, METH_VARARGS,
   "InsertTuples(self, dstIds:vtkIdList, srcIds:vtkIdList,\n    source:vtkAbstractArray) -> None\nC++: void InsertTuples(vtkIdList *dstIds, vtkIdList *srcIds,\n    vtkAbstractArray *source) override;\nInsertTuples(self, dstStart:int, n:int, srcStart:int,\n    source:vtkAbstractArray) -> None\nC++: void InsertTuples(vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart, vtkAbstractArray *source) override;\n\nCopy the tuples indexed in srcIds from the source array to the\ntuple locations indexed by dstIds in this array. Note that memory\nallocation is performed as necessary to hold the data.\n"},
  {"InsertTuplesStartingAt", PyvtkStringArray_InsertTuplesStartingAt, METH_VARARGS,
   "InsertTuplesStartingAt(self, dstStart:int, srcIds:vtkIdList,\n    source:vtkAbstractArray) -> None\nC++: void InsertTuplesStartingAt(vtkIdType dstStart,\n    vtkIdList *srcIds, vtkAbstractArray *source) override;\n\nCopy the tuples indexed in srcIds from the source array to the\ntuple locations starting at index dstStart. Note that memory\nallocation is performed as necessary to hold the data.\n"},
  {"InsertNextTuple", PyvtkStringArray_InsertNextTuple, METH_VARARGS,
   "InsertNextTuple(self, j:int, source:vtkAbstractArray) -> int\nC++: vtkIdType InsertNextTuple(vtkIdType j,\n    vtkAbstractArray *source) override;\n\nInsert the jth tuple in the source array, at the end in this\narray. Note that memory allocation is performed as necessary to\nhold the data. Returns the location at which the data was\ninserted.\n"},
  {"InterpolateTuple", PyvtkStringArray_InterpolateTuple, METH_VARARGS,
   "InterpolateTuple(self, i:int, ptIndices:vtkIdList,\n    source:vtkAbstractArray, weights:[float, ...]) -> None\nC++: void InterpolateTuple(vtkIdType i, vtkIdList *ptIndices,\n    vtkAbstractArray *source, double *weights) override;\nInterpolateTuple(self, i:int, id1:int, source1:vtkAbstractArray,\n    id2:int, source2:vtkAbstractArray, t:float) -> None\nC++: void InterpolateTuple(vtkIdType i, vtkIdType id1,\n    vtkAbstractArray *source1, vtkIdType id2,\n    vtkAbstractArray *source2, double t) override;\n\nSet the ith tuple in this array as the interpolated tuple value,\ngiven the ptIndices in the source array and associated\ninterpolation weights. This method assumes that the two arrays\nare of the same type and structure.\n"},
  {"GetTuples", PyvtkStringArray_GetTuples, METH_VARARGS,
   "GetTuples(self, ptIds:vtkIdList, output:vtkAbstractArray) -> None\nC++: void GetTuples(vtkIdList *ptIds, vtkAbstractArray *output)\n    override;\nGetTuples(self, p1:int, p2:int, output:vtkAbstractArray) -> None\nC++: void GetTuples(vtkIdType p1, vtkIdType p2,\n    vtkAbstractArray *output) override;\n\nGiven a list of indices, return an array of values.  You must\nensure that the output array has been previously allocated with\nenough space to hold the data and that the types match\nsufficiently to allow conversion (if necessary).\n"},
  {"Allocate", PyvtkStringArray_Allocate, METH_VARARGS,
   "Allocate(self, sz:int, ext:int=1000) -> int\nC++: vtkTypeBool Allocate(vtkIdType sz, vtkIdType ext=1000)\n    override;\n\nAllocate memory for this array. Delete old storage only if\nnecessary. Note that ext is no longer used.\n"},
  {"GetValue", PyvtkStringArray_GetValue, METH_VARARGS,
   "GetValue(self, id:int) -> str\nC++: vtkStdString &GetValue(vtkIdType id)\n\nGet the string at a particular index.\n"},
  {"SetValue", PyvtkStringArray_SetValue, METH_VARARGS,
   "SetValue(self, id:int, value:str) -> None\nC++: void SetValue(vtkIdType id, vtkStdString value)\n\nSet the data at a particular index. Does not do range checking.\nMake sure you use the method SetNumberOfValues() before inserting\ndata.\n"},
  {"SetNumberOfTuples", PyvtkStringArray_SetNumberOfTuples, METH_VARARGS,
   "SetNumberOfTuples(self, number:int) -> None\nC++: void SetNumberOfTuples(vtkIdType number) override;\n\nSet the number of tuples (a component group) in the array. Note\nthat this may allocate space depending on the number of\ncomponents.\n"},
  {"GetNumberOfValues", PyvtkStringArray_GetNumberOfValues, METH_VARARGS,
   "GetNumberOfValues(self) -> int\nC++: vtkIdType GetNumberOfValues()\n\nReturn the number of values in the array.\n"},
  {"GetNumberOfElementComponents", PyvtkStringArray_GetNumberOfElementComponents, METH_VARARGS,
   "GetNumberOfElementComponents(self) -> int\nC++: int GetNumberOfElementComponents()\n\n"},
  {"GetElementComponentSize", PyvtkStringArray_GetElementComponentSize, METH_VARARGS,
   "GetElementComponentSize(self) -> int\nC++: int GetElementComponentSize() override;\n\nReturn the size, in bytes, of the lowest-level element of an\narray.  For vtkDataArray and subclasses this is the size of the\ndata type.  For vtkStringArray, this is\nsizeof(vtkStdString::value_type), which winds up being\nsizeof(char).\n"},
  {"InsertValue", PyvtkStringArray_InsertValue, METH_VARARGS,
   "InsertValue(self, id:int, f:str) -> None\nC++: void InsertValue(vtkIdType id, vtkStdString f)\n\nInsert data at a specified position in the array.\n"},
  {"SetVariantValue", PyvtkStringArray_SetVariantValue, METH_VARARGS,
   "SetVariantValue(self, idx:int, value:vtkVariant) -> None\nC++: void SetVariantValue(vtkIdType idx, vtkVariant value)\n    override;\n\nSet a value in the array form a variant. Insert a value into the\narray from a variant.\n"},
  {"InsertVariantValue", PyvtkStringArray_InsertVariantValue, METH_VARARGS,
   "InsertVariantValue(self, idx:int, value:vtkVariant) -> None\nC++: void InsertVariantValue(vtkIdType idx, vtkVariant value)\n    override;\n\nSafely set a value in the array form a variant. Safely insert a\nvalue into the array from a variant.\n"},
  {"InsertNextValue", PyvtkStringArray_InsertNextValue, METH_VARARGS,
   "InsertNextValue(self, f:str) -> int\nC++: vtkIdType InsertNextValue(vtkStdString f)\n\nInsert data at the end of the array. Return its location in the\narray.\n"},
  {"GetVoidPointer", PyvtkStringArray_GetVoidPointer, METH_VARARGS,
   "GetVoidPointer(self, id:int) -> Pointer\nC++: void *GetVoidPointer(vtkIdType id) override;\n\nReturn a void pointer. For image pipeline interface and other\nspecial pointer manipulation. Use of this method is discouraged,\nas newer arrays require a deep-copy of the array data in order to\nreturn a suitable pointer. See vtkArrayDispatch for a safer\nalternative for fast data access.\n"},
  {"DeepCopy", PyvtkStringArray_DeepCopy, METH_VARARGS,
   "DeepCopy(self, aa:vtkAbstractArray) -> None\nC++: void DeepCopy(vtkAbstractArray *aa) override;\n\nDeep copy of another string array.  Will complain and change\nnothing if the array passed in is not a vtkStringArray.\n"},
  {"SetVoidArray", PyvtkStringArray_SetVoidArray, METH_VARARGS,
   "SetVoidArray(self, array:Pointer, size:int, save:int) -> None\nC++: void SetVoidArray(void *array, vtkIdType size, int save)\n    override;\nSetVoidArray(self, array:Pointer, size:int, save:int,\n    deleteMethod:int) -> None\nC++: void SetVoidArray(void *array, vtkIdType size, int save,\n    int deleteMethod) override;\n\nThis method lets the user specify data to be held by the array. \nThe array argument is a pointer to the data.  size is the size of\nthe array supplied by the user.  Set save to 1 to keep the class\nfrom deleting the array when it cleans up or reallocates memory. \nThe class uses the actual array provided; it does not copy the\ndata from the supplied array. If specified, the delete method\ndetermines how the data array will be deallocated. If the delete\nmethod is VTK_DATA_ARRAY_FREE, free() will be used. If the delete\nmethod is VTK_DATA_ARRAY_DELETE, delete[] will be used. If the\ndelete method is VTK_DATA_ARRAY_ALIGNED_FREE _aligned_free() will\nbe used on windows, while free() will be used everywhere else. If\nthe delete method is VTK_DATA_ARRAY_USER_DEFINED a custom free\nfunction can be assigned to be called using SetArrayFreeFunction,\nif no custom function is assigned we will default to free(). The\ndefault is FREE. (Note not all subclasses can support\ndeleteMethod.)\n"},
  {"GetActualMemorySize", PyvtkStringArray_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the memory in kibibytes (1024 bytes) consumed by this data\narray. Used to support streaming and reading/writing data. The\nvalue returned is guaranteed to be greater than or equal to the\nmemory required to actually represent the data represented by\nthis object. The information returned is valid only after the\npipeline has been updated.\n\n* This function takes into account the size of the contents of\n  the\n* strings as well as the string containers themselves.\n"},
  {"NewIterator", PyvtkStringArray_NewIterator, METH_VARARGS,
   "NewIterator(self) -> vtkArrayIterator\nC++: vtkArrayIterator *NewIterator() override;\n\nReturns a vtkArrayIteratorTemplate.\n"},
  {"GetDataSize", PyvtkStringArray_GetDataSize, METH_VARARGS,
   "GetDataSize(self) -> int\nC++: vtkIdType GetDataSize() override;\n\nReturns the size of the data in DataTypeSize units. Thus, the\nnumber of bytes for the data can be computed by GetDataSize() *\nGetDataTypeSize(). The size computation includes the string\ntermination character for each string.\n"},
  {"LookupValue", PyvtkStringArray_LookupValue, METH_VARARGS,
   "LookupValue(self, value:vtkVariant) -> int\nC++: vtkIdType LookupValue(vtkVariant value) override;\nLookupValue(self, value:vtkVariant, ids:vtkIdList) -> None\nC++: void LookupValue(vtkVariant value, vtkIdList *ids) override;\nLookupValue(self, value:str) -> int\nC++: vtkIdType LookupValue(const vtkStdString &value)\nLookupValue(self, value:str, ids:vtkIdList) -> None\nC++: void LookupValue(const vtkStdString &value, vtkIdList *ids)\n\nReturn the indices where a specific value appears.\n"},
  {"DataChanged", PyvtkStringArray_DataChanged, METH_VARARGS,
   "DataChanged(self) -> None\nC++: void DataChanged() override;\n\nTell the array explicitly that the data has changed. This is only\nnecessary to call when you modify the array contents without\nusing the array's API (i.e. you retrieve a pointer to the data\nand modify the array contents).  You need to call this so that\nthe fast lookup will know to rebuild itself.  Otherwise, the\nlookup functions will give incorrect results.\n"},
  {"DataElementChanged", PyvtkStringArray_DataElementChanged, METH_VARARGS,
   "DataElementChanged(self, id:int) -> None\nC++: virtual void DataElementChanged(vtkIdType id)\n\nTell the array explicitly that a single data element has changed.\nLike DataChanged(), then is only necessary when you modify the\narray contents without using the array's API.\n"},
  {"ClearLookup", PyvtkStringArray_ClearLookup, METH_VARARGS,
   "ClearLookup(self) -> None\nC++: void ClearLookup() override;\n\nDelete the associated fast lookup data structure on this array,\nif it exists.  The lookup will be rebuilt on the next call to a\nlookup function.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStringArray_Doc =
  "vtkStringArray - a vtkAbstractArray subclass for strings\n\n"
  "Superclass: vtkAbstractArray\n\n"
  "Points and cells may sometimes have associated data that are stored\n"
  "as strings, e.g. labels for information visualization projects. This\n"
  "class provides a clean way to store and access those strings.@par\n"
  "Thanks: Andy Wilson (atwilso@sandia.gov) wrote this class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStringArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkStringArray", // tp_name
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
  PyvtkStringArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStringArray_StaticNew()
{
  return vtkStringArray::New();
}

PyObject *PyvtkStringArray_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStringArray_Type, PyvtkStringArray_Methods,
    "vtkStringArray",
 &PyvtkStringArray_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractArray_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkStringArray_DeleteMethod_Type);
  PyVTKEnum_Add(&PyvtkStringArray_DeleteMethod_Type, "vtkStringArray.DeleteMethod");

  o = (PyObject *)&PyvtkStringArray_DeleteMethod_Type;
  if (PyDict_SetItemString(d, "DeleteMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkStringArray::DeleteMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_DATA_ARRAY_FREE", vtkStringArray::VTK_DATA_ARRAY_FREE },
        { "VTK_DATA_ARRAY_DELETE", vtkStringArray::VTK_DATA_ARRAY_DELETE },
        { "VTK_DATA_ARRAY_ALIGNED_FREE", vtkStringArray::VTK_DATA_ARRAY_ALIGNED_FREE },
        { "VTK_DATA_ARRAY_USER_DEFINED", vtkStringArray::VTK_DATA_ARRAY_USER_DEFINED },
      };

    o = PyvtkStringArray_DeleteMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStringArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStringArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStringArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

