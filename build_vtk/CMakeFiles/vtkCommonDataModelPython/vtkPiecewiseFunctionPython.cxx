// python wrapper for vtkPiecewiseFunction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPiecewiseFunction.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPiecewiseFunction(PyObject *dict); }
extern "C" { PyObject *PyvtkPiecewiseFunction_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPiecewiseFunction_SearchMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkPiecewiseFunction.SearchMethod", // tp_name
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
PyObject *PyvtkPiecewiseFunction_SearchMethod_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPiecewiseFunction_SearchMethod_Type, static_cast<int>(val));
}


static PyObject *
PyvtkPiecewiseFunction_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPiecewiseFunction::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPiecewiseFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPiecewiseFunction *tempr = vtkPiecewiseFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPiecewiseFunction::NewInstance());

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
PyvtkPiecewiseFunction_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPiecewiseFunction::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPiecewiseFunction::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkPiecewiseFunction::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkPiecewiseFunction::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkPiecewiseFunction::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkPiecewiseFunction::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_AddPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->AddPoint(temp0, temp1) :
      op->vtkPiecewiseFunction::AddPoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPiecewiseFunction_AddPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->AddPoint(temp0, temp1, temp2, temp3) :
      op->vtkPiecewiseFunction::AddPoint(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPiecewiseFunction_AddPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPiecewiseFunction_AddPoint_s1(self, args);
    case 4:
      return PyvtkPiecewiseFunction_AddPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddPoint");
  return nullptr;
}


static PyObject *
PyvtkPiecewiseFunction_RemovePointByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePointByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemovePointByIndex(temp0) :
      op->vtkPiecewiseFunction::RemovePointByIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_RemovePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->RemovePoint(temp0) :
      op->vtkPiecewiseFunction::RemovePoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPiecewiseFunction_RemovePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->RemovePoint(temp0, temp1) :
      op->vtkPiecewiseFunction::RemovePoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPiecewiseFunction_RemovePoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPiecewiseFunction_RemovePoint_s1(self, args);
    case 2:
      return PyvtkPiecewiseFunction_RemovePoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemovePoint");
  return nullptr;
}


static PyObject *
PyvtkPiecewiseFunction_RemoveAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllPoints();
    }
    else
    {
      op->vtkPiecewiseFunction::RemoveAllPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_AddSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddSegment(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPiecewiseFunction::AddSegment(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkPiecewiseFunction::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetNodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int temp0;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNodeValue(temp0, temp1) :
      op->vtkPiecewiseFunction::GetNodeValue(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_SetNodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int temp0;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetNodeValue(temp0, temp1) :
      op->vtkPiecewiseFunction::SetNodeValue(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetDataPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataPointer() :
      op->vtkPiecewiseFunction::GetDataPointer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_FillFromDataPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillFromDataPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->FillFromDataPointer(temp0, temp1);
    }
    else
    {
      op->vtkPiecewiseFunction::FillFromDataPointer(temp0, temp1);
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
PyvtkPiecewiseFunction_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkPiecewiseFunction::GetRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_AdjustRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AdjustRange(temp0) :
      op->vtkPiecewiseFunction::AdjustRange(temp0));

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
PyvtkPiecewiseFunction_GetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  double temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  int temp4 = 1;
  int temp5 = 0;
  double temp6 = 1e-5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->GetTable(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkPiecewiseFunction::GetTable(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
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
PyvtkPiecewiseFunction_BuildFunctionFromTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildFunctionFromTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  double temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  int temp4 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->BuildFunctionFromTable(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPiecewiseFunction::BuildFunctionFromTable(temp0, temp1, temp2, temp3, temp4);
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
PyvtkPiecewiseFunction_SetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClamping(temp0);
    }
    else
    {
      op->vtkPiecewiseFunction::SetClamping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClamping() :
      op->vtkPiecewiseFunction::GetClamping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_ClampingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampingOn();
    }
    else
    {
      op->vtkPiecewiseFunction::ClampingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_ClampingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampingOff();
    }
    else
    {
      op->vtkPiecewiseFunction::ClampingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_SetUseLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseLogScale(temp0);
    }
    else
    {
      op->vtkPiecewiseFunction::SetUseLogScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetUseLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseLogScale() :
      op->vtkPiecewiseFunction::GetUseLogScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_UseLogScaleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLogScaleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLogScaleOn();
    }
    else
    {
      op->vtkPiecewiseFunction::UseLogScaleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_UseLogScaleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLogScaleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLogScaleOff();
    }
    else
    {
      op->vtkPiecewiseFunction::UseLogScaleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetType() :
      op->vtkPiecewiseFunction::GetType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetFirstNonZeroValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstNonZeroValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFirstNonZeroValue() :
      op->vtkPiecewiseFunction::GetFirstNonZeroValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPiecewiseFunction::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkPiecewiseFunction *tempr = vtkPiecewiseFunction::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPiecewiseFunction_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkPiecewiseFunction *tempr = vtkPiecewiseFunction::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPiecewiseFunction_GetData_Methods[] = {
  {"GetData", PyvtkPiecewiseFunction_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkPiecewiseFunction_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPiecewiseFunction_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPiecewiseFunction_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkPiecewiseFunction_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyObject *
PyvtkPiecewiseFunction_SetAllowDuplicateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowDuplicateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowDuplicateScalars(temp0);
    }
    else
    {
      op->vtkPiecewiseFunction::SetAllowDuplicateScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetAllowDuplicateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowDuplicateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllowDuplicateScalars() :
      op->vtkPiecewiseFunction::GetAllowDuplicateScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_AllowDuplicateScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowDuplicateScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowDuplicateScalarsOn();
    }
    else
    {
      op->vtkPiecewiseFunction::AllowDuplicateScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_AllowDuplicateScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowDuplicateScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowDuplicateScalarsOff();
    }
    else
    {
      op->vtkPiecewiseFunction::AllowDuplicateScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_EstimateMinNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EstimateMinNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->EstimateMinNumberOfSamples(temp0, temp1) :
      op->vtkPiecewiseFunction::EstimateMinNumberOfSamples(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_UpdateSearchMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSearchMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  double temp0 = 1e-12;
  double temp1 = 1e-4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->UpdateSearchMethod(temp0, temp1);
    }
    else
    {
      op->vtkPiecewiseFunction::UpdateSearchMethod(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetAutomaticSearchMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticSearchMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticSearchMethod() :
      op->vtkPiecewiseFunction::GetAutomaticSearchMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_SetUseCustomSearchMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomSearchMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCustomSearchMethod(temp0);
    }
    else
    {
      op->vtkPiecewiseFunction::SetUseCustomSearchMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_SetCustomSearchMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomSearchMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCustomSearchMethod(temp0);
    }
    else
    {
      op->vtkPiecewiseFunction::SetCustomSearchMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPiecewiseFunction_GetCustomSearchMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomSearchMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPiecewiseFunction *op = static_cast<vtkPiecewiseFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCustomSearchMethod() :
      op->vtkPiecewiseFunction::GetCustomSearchMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPiecewiseFunction_Methods[] = {
  {"IsTypeOf", PyvtkPiecewiseFunction_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPiecewiseFunction_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPiecewiseFunction_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPiecewiseFunction\nC++: static vtkPiecewiseFunction *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPiecewiseFunction_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPiecewiseFunction\nC++: vtkPiecewiseFunction *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPiecewiseFunction_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPiecewiseFunction_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DeepCopy", PyvtkPiecewiseFunction_DeepCopy, METH_VARARGS,
   "DeepCopy(self, f:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *f) override;\n\nThe goal of the method is to copy the complete data from src into\nthis object. The implementation is delegated to the differenent\nsubclasses. If you want to copy the data up to the array pointers\nonly, @see ShallowCopy.\n\nThis method deep copy the field data and copy the internal\nstructure.\n"},
  {"ShallowCopy", PyvtkPiecewiseFunction_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, f:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *f) override;\n\nThe goal of the method is to copy the data up to the array\npointers only. The implementation is delegated to the differenent\nsubclasses. If you want to copy the actual data, @see DeepCopy.\n\nThis method shallow copy the field data and copy the internal\nstructure.\n"},
  {"GetDataObjectType", PyvtkPiecewiseFunction_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"GetSize", PyvtkPiecewiseFunction_GetSize, METH_VARARGS,
   "GetSize(self) -> int\nC++: int GetSize()\n\nGet the number of points used to specify the function\n"},
  {"AddPoint", PyvtkPiecewiseFunction_AddPoint, METH_VARARGS,
   "AddPoint(self, x:float, y:float) -> int\nC++: int AddPoint(double x, double y)\nAddPoint(self, x:float, y:float, midpoint:float, sharpness:float)\n    -> int\nC++: int AddPoint(double x, double y, double midpoint,\n    double sharpness)\n\nAdd points to the function. If a duplicate point is added then\nthe previous point is removed unless AllowDuplicateScalars is set\nto true Return the index of the point (0 based), or -1 on error.\n"},
  {"RemovePointByIndex", PyvtkPiecewiseFunction_RemovePointByIndex, METH_VARARGS,
   "RemovePointByIndex(self, id:int) -> bool\nC++: bool RemovePointByIndex(size_t id)\n\nRemove a point from the function at a given id Return true if\npoint has been found and removed, false other wise\n"},
  {"RemovePoint", PyvtkPiecewiseFunction_RemovePoint, METH_VARARGS,
   "RemovePoint(self, x:float) -> int\nC++: int RemovePoint(double x)\nRemovePoint(self, x:float, y:float) -> int\nC++: int RemovePoint(double x, double y)\n\nRemove the first point found at the given x location Return the\nindex of the remove point if any, -1 otherwise\n"},
  {"RemoveAllPoints", PyvtkPiecewiseFunction_RemoveAllPoints, METH_VARARGS,
   "RemoveAllPoints(self) -> None\nC++: void RemoveAllPoints()\n\nRemoves all points from the function.\n"},
  {"AddSegment", PyvtkPiecewiseFunction_AddSegment, METH_VARARGS,
   "AddSegment(self, x1:float, y1:float, x2:float, y2:float) -> None\nC++: void AddSegment(double x1, double y1, double x2, double y2)\n\nAdd a line segment to the function. All points defined between\nthe two points specified are removed from the function. To\nspecify the sharpness and midpoint values, use AddPoint method\ninstead.\n"},
  {"GetValue", PyvtkPiecewiseFunction_GetValue, METH_VARARGS,
   "GetValue(self, x:float) -> float\nC++: double GetValue(double x)\n\nReturns the value of the function at the specified location using\nthe specified interpolation.\n"},
  {"GetNodeValue", PyvtkPiecewiseFunction_GetNodeValue, METH_VARARGS,
   "GetNodeValue(self, index:int, val:[float, float, float, float])\n    -> int\nC++: int GetNodeValue(int index, double val[4])\n\nFor the node specified by index, set/get the location (X), value\n(Y), midpoint, and sharpness values at the node. Returns -1 if\nthe index is out of range, returns 1 otherwise.\n"},
  {"SetNodeValue", PyvtkPiecewiseFunction_SetNodeValue, METH_VARARGS,
   "SetNodeValue(self, index:int, val:[float, float, float, float])\n    -> int\nC++: int SetNodeValue(int index, double val[4])\n\n"},
  {"GetDataPointer", PyvtkPiecewiseFunction_GetDataPointer, METH_VARARGS,
   "GetDataPointer(self) -> Pointer\nC++: double *GetDataPointer()\n\nReturns a pointer to the data stored in the table. Fills from a\npointer to data stored in a similar table. These are legacy\nmethods which will be maintained for compatibility - however,\nnote that the vtkPiecewiseFunction no longer stores the nodes in\na double array internally.\n"},
  {"FillFromDataPointer", PyvtkPiecewiseFunction_FillFromDataPointer, METH_VARARGS,
   "FillFromDataPointer(self, __a:int, __b:[float, ...]) -> None\nC++: void FillFromDataPointer(int, double *)\n\n"},
  {"GetRange", PyvtkPiecewiseFunction_GetRange, METH_VARARGS,
   "GetRange(self) -> (float, float)\nC++: virtual double *GetRange()\n\nReturns the min and max node locations of the function.\n"},
  {"AdjustRange", PyvtkPiecewiseFunction_AdjustRange, METH_VARARGS,
   "AdjustRange(self, range:[float, float]) -> int\nC++: int AdjustRange(double range[2])\n\nRemove all points out of the new range, and make sure there is a\npoint at each end of that range. Return 1 on success, 0\notherwise.\n"},
  {"GetTable", PyvtkPiecewiseFunction_GetTable, METH_VARARGS,
   "GetTable(self, x1:float, x2:float, size:int, table:[float, ...],\n    stride:int=1, logIncrements:int=0, epsilon:float=1e-5) -> None\nC++: void GetTable(double x1, double x2, int size, double *table,\n    int stride=1, int logIncrements=0, double epsilon=1e-5)\n\n"},
  {"BuildFunctionFromTable", PyvtkPiecewiseFunction_BuildFunctionFromTable, METH_VARARGS,
   "BuildFunctionFromTable(self, x1:float, x2:float, size:int,\n    table:[float, ...], stride:int=1) -> None\nC++: void BuildFunctionFromTable(double x1, double x2, int size,\n    double *table, int stride=1)\n\nConstructs a piecewise function from a table.  Function range is\nis set to [x1, x2], function size is set to size, and function\npoints are regularly spaced between x1 and x2.  Parameter\n\"stride\" is is step through the input table.\n"},
  {"SetClamping", PyvtkPiecewiseFunction_SetClamping, METH_VARARGS,
   "SetClamping(self, _arg:int) -> None\nC++: virtual void SetClamping(vtkTypeBool _arg)\n\nWhen zero range clamping is Off, GetValue() returns 0.0 when a\nvalue is requested outside of the points specified. When zero\nrange clamping is On, GetValue() returns the value at the value\nat the lowest point for a request below all points specified and\nreturns the value at the highest point for a request above all\npoints specified. On is the default.\n"},
  {"GetClamping", PyvtkPiecewiseFunction_GetClamping, METH_VARARGS,
   "GetClamping(self) -> int\nC++: virtual vtkTypeBool GetClamping()\n\n"},
  {"ClampingOn", PyvtkPiecewiseFunction_ClampingOn, METH_VARARGS,
   "ClampingOn(self) -> None\nC++: virtual void ClampingOn()\n\n"},
  {"ClampingOff", PyvtkPiecewiseFunction_ClampingOff, METH_VARARGS,
   "ClampingOff(self) -> None\nC++: virtual void ClampingOff()\n\n"},
  {"SetUseLogScale", PyvtkPiecewiseFunction_SetUseLogScale, METH_VARARGS,
   "SetUseLogScale(self, _arg:bool) -> None\nC++: virtual void SetUseLogScale(bool _arg)\n\n"},
  {"GetUseLogScale", PyvtkPiecewiseFunction_GetUseLogScale, METH_VARARGS,
   "GetUseLogScale(self) -> bool\nC++: virtual bool GetUseLogScale()\n\n"},
  {"UseLogScaleOn", PyvtkPiecewiseFunction_UseLogScaleOn, METH_VARARGS,
   "UseLogScaleOn(self) -> None\nC++: virtual void UseLogScaleOn()\n\n"},
  {"UseLogScaleOff", PyvtkPiecewiseFunction_UseLogScaleOff, METH_VARARGS,
   "UseLogScaleOff(self) -> None\nC++: virtual void UseLogScaleOff()\n\n"},
  {"GetType", PyvtkPiecewiseFunction_GetType, METH_VARARGS,
   "GetType(self) -> str\nC++: const char *GetType()\n\nReturn the type of function: Function Types: 0 : Constant       \n(No change in slope between end points) 1 : NonDecreasing  \n(Always increasing or zero slope) 2 : NonIncreasing   (Always\ndecreasing or zero slope) 3 : Varied          (Contains both\ndecreasing and increasing slopes)\n"},
  {"GetFirstNonZeroValue", PyvtkPiecewiseFunction_GetFirstNonZeroValue, METH_VARARGS,
   "GetFirstNonZeroValue(self) -> float\nC++: double GetFirstNonZeroValue()\n\nReturns the first point location which precedes a non-zero\nsegment of the function. Note that the value at this point may be\nzero.\n"},
  {"Initialize", PyvtkPiecewiseFunction_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nClears out the current function. A newly created\nvtkPiecewiseFunction is already initialized, so there is no need\nto call this method which in turn simply calls RemoveAllPoints()\n"},
  {"GetData", PyvtkPiecewiseFunction_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkPiecewiseFunction\nC++: static vtkPiecewiseFunction *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkPiecewiseFunction\nC++: static vtkPiecewiseFunction *GetData(vtkInformationVector *v,\n     int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"SetAllowDuplicateScalars", PyvtkPiecewiseFunction_SetAllowDuplicateScalars, METH_VARARGS,
   "SetAllowDuplicateScalars(self, _arg:int) -> None\nC++: virtual void SetAllowDuplicateScalars(vtkTypeBool _arg)\n\nToggle whether to allow duplicate scalar values in the piecewise\nfunction (off by default).\n"},
  {"GetAllowDuplicateScalars", PyvtkPiecewiseFunction_GetAllowDuplicateScalars, METH_VARARGS,
   "GetAllowDuplicateScalars(self) -> int\nC++: virtual vtkTypeBool GetAllowDuplicateScalars()\n\n"},
  {"AllowDuplicateScalarsOn", PyvtkPiecewiseFunction_AllowDuplicateScalarsOn, METH_VARARGS,
   "AllowDuplicateScalarsOn(self) -> None\nC++: virtual void AllowDuplicateScalarsOn()\n\n"},
  {"AllowDuplicateScalarsOff", PyvtkPiecewiseFunction_AllowDuplicateScalarsOff, METH_VARARGS,
   "AllowDuplicateScalarsOff(self) -> None\nC++: virtual void AllowDuplicateScalarsOff()\n\n"},
  {"EstimateMinNumberOfSamples", PyvtkPiecewiseFunction_EstimateMinNumberOfSamples, METH_VARARGS,
   "EstimateMinNumberOfSamples(self, x1:float, x2:float) -> int\nC++: int EstimateMinNumberOfSamples(double const &x1,\n    double const &x2)\n\nEstimates the minimum size of a table such that it would\ncorrectly sample this function. The returned value should be\npassed as parameter 'n' when calling GetTable().\n"},
  {"UpdateSearchMethod", PyvtkPiecewiseFunction_UpdateSearchMethod, METH_VARARGS,
   "UpdateSearchMethod(self, epsilon:float=1e-12, thresh:float=1e-4)\n    -> None\nC++: void UpdateSearchMethod(double epsilon=1e-12,\n    double thresh=1e-4)\n\nAnalyses the point distribution and automatically updates the\nsearch method to optimize the time processing This method assumes\nthat the vector of nodes has been sorted\n"},
  {"GetAutomaticSearchMethod", PyvtkPiecewiseFunction_GetAutomaticSearchMethod, METH_VARARGS,
   "GetAutomaticSearchMethod(self) -> int\nC++: int GetAutomaticSearchMethod()\n\nMethods to set / get the search method used. By default the\nsearch method used is the one automatically updated each time the\ndata is modified. This behavior can be overriden by using\nSetUseCustomSearchMethod() and SetCustomSearchMethod()\n"},
  {"SetUseCustomSearchMethod", PyvtkPiecewiseFunction_SetUseCustomSearchMethod, METH_VARARGS,
   "SetUseCustomSearchMethod(self, use:bool) -> None\nC++: void SetUseCustomSearchMethod(bool use)\n\nMethods to set / get the search method used. By default the\nsearch method used is the one automatically updated each time the\ndata is modified. This behavior can be overriden by using\nSetUseCustomSearchMethod() and SetCustomSearchMethod()\n"},
  {"SetCustomSearchMethod", PyvtkPiecewiseFunction_SetCustomSearchMethod, METH_VARARGS,
   "SetCustomSearchMethod(self, type:int) -> None\nC++: void SetCustomSearchMethod(int type)\n\nMethods to set / get the search method used. By default the\nsearch method used is the one automatically updated each time the\ndata is modified. This behavior can be overriden by using\nSetUseCustomSearchMethod() and SetCustomSearchMethod()\n"},
  {"GetCustomSearchMethod", PyvtkPiecewiseFunction_GetCustomSearchMethod, METH_VARARGS,
   "GetCustomSearchMethod(self) -> int\nC++: int GetCustomSearchMethod()\n\nMethods to set / get the search method used. By default the\nsearch method used is the one automatically updated each time the\ndata is modified. This behavior can be overriden by using\nSetUseCustomSearchMethod() and SetCustomSearchMethod()\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPiecewiseFunction_Doc =
  "vtkPiecewiseFunction - Defines a 1D piecewise function.\n\n"
  "Superclass: vtkDataObject\n\n"
  "Defines a piecewise function mapping. This mapping allows the\n"
  "addition of control points, and allows the user to control the\n"
  "function between the control points. A piecewise hermite curve is\n"
  "used between control points, based on the sharpness and midpoint\n"
  "parameters. A sharpness of 0 yields a piecewise linear function and a\n"
  "sharpness of 1 yields a piecewise constant function. The midpoint is\n"
  "the normalized distance between control points at which the curve\n"
  "reaches the median Y value. The midpoint and sharpness values\n"
  "specified when adding a node are used to control the transition to\n"
  "the next node (the last node's values are ignored) Outside the range\n"
  "of nodes, the values are 0 if Clamping is off, or the nearest node\n"
  "point if Clamping is on. Using the legacy methods for adding points \n"
  "(which do not have Sharpness and Midpoint parameters) will default to\n"
  "Midpoint = 0.5 (halfway between the control points) and Sharpness =\n"
  "0.0 (linear).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPiecewiseFunction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkPiecewiseFunction", // tp_name
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
  PyvtkPiecewiseFunction_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPiecewiseFunction_StaticNew()
{
  return vtkPiecewiseFunction::New();
}

PyObject *PyvtkPiecewiseFunction_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPiecewiseFunction_Type, PyvtkPiecewiseFunction_Methods,
    "vtkPiecewiseFunction",
 &PyvtkPiecewiseFunction_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPiecewiseFunction_SearchMethod_Type);
  PyVTKEnum_Add(&PyvtkPiecewiseFunction_SearchMethod_Type, "vtkPiecewiseFunction.SearchMethod");

  o = (PyObject *)&PyvtkPiecewiseFunction_SearchMethod_Type;
  if (PyDict_SetItemString(d, "SearchMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkPiecewiseFunction::SearchMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "BINARY_SEARCH", vtkPiecewiseFunction::BINARY_SEARCH },
        { "INTERPOLATION_SEARCH", vtkPiecewiseFunction::INTERPOLATION_SEARCH },
        { "MAX_ENUM", vtkPiecewiseFunction::MAX_ENUM },
      };

    o = PyvtkPiecewiseFunction_SearchMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPiecewiseFunction(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPiecewiseFunction_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPiecewiseFunction", o) != 0)
  {
    Py_DECREF(o);
  }

}

