// python wrapper for vtkArrayCalculator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTuple.h"
#include "vtkArrayCalculator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArrayCalculator(PyObject *dict); }
extern "C" { PyObject *PyvtkArrayCalculator_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkArrayCalculator_FunctionParserTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkArrayCalculator.FunctionParserTypes", // tp_name
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
PyObject *PyvtkArrayCalculator_FunctionParserTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkArrayCalculator_FunctionParserTypes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkArrayCalculator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayCalculator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayCalculator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayCalculator *tempr = vtkArrayCalculator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayCalculator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayCalculator::NewInstance());

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
PyvtkArrayCalculator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkArrayCalculator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkArrayCalculator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFunction(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFunction() :
      op->vtkArrayCalculator::GetFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->AddScalarArrayName(temp0, temp1);
    }
    else
    {
      op->vtkArrayCalculator::AddScalarArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddVectorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVectorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  int temp1 = 0;
  int temp2 = 1;
  int temp3 = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->AddVectorArrayName(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkArrayCalculator::AddVectorArrayName(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddScalarVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddScalarVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->AddScalarVariable(temp0, temp1, temp2);
    }
    else
    {
      op->vtkArrayCalculator::AddScalarVariable(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddVectorVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVectorVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2 = 0;
  int temp3 = 1;
  int temp4 = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->AddVectorVariable(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkArrayCalculator::AddVectorVariable(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddCoordinateScalarVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCoordinateScalarVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->AddCoordinateScalarVariable(temp0, temp1);
    }
    else
    {
      op->vtkArrayCalculator::AddCoordinateScalarVariable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_AddCoordinateVectorVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCoordinateVectorVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  int temp1 = 0;
  int temp2 = 1;
  int temp3 = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->AddCoordinateVectorVariable(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkArrayCalculator::AddCoordinateVectorVariable(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResultArrayName(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetResultArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetResultArrayName() :
      op->vtkArrayCalculator::GetResultArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetResultArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResultArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResultArrayType() :
      op->vtkArrayCalculator::GetResultArrayType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetResultArrayType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResultArrayType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResultArrayType(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetResultArrayType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetCoordinateResults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateResults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateResults() :
      op->vtkArrayCalculator::GetCoordinateResults());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetCoordinateResults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateResults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateResults(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetCoordinateResults(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_CoordinateResultsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoordinateResultsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CoordinateResultsOn();
    }
    else
    {
      op->vtkArrayCalculator::CoordinateResultsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_CoordinateResultsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoordinateResultsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CoordinateResultsOff();
    }
    else
    {
      op->vtkArrayCalculator::CoordinateResultsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetResultNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResultNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetResultNormals() :
      op->vtkArrayCalculator::GetResultNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetResultNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResultNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResultNormals(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetResultNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_ResultNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResultNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResultNormalsOn();
    }
    else
    {
      op->vtkArrayCalculator::ResultNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_ResultNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResultNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResultNormalsOff();
    }
    else
    {
      op->vtkArrayCalculator::ResultNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetResultTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResultTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetResultTCoords() :
      op->vtkArrayCalculator::GetResultTCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetResultTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResultTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResultTCoords(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetResultTCoords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_ResultTCoordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResultTCoordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResultTCoordsOn();
    }
    else
    {
      op->vtkArrayCalculator::ResultTCoordsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_ResultTCoordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResultTCoordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResultTCoordsOff();
    }
    else
    {
      op->vtkArrayCalculator::ResultTCoordsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetAttributeTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeTypeAsString() :
      op->vtkArrayCalculator::GetAttributeTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeType(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeType() :
      op->vtkArrayCalculator::GetAttributeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeTypeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTypeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeTypeToDefault();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeTypeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeTypeToPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTypeToPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeTypeToPointData();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeTypeToPointData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeTypeToCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTypeToCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeTypeToCellData();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeTypeToCellData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeTypeToEdgeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTypeToEdgeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeTypeToEdgeData();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeTypeToEdgeData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeTypeToVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTypeToVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeTypeToVertexData();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeTypeToVertexData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetAttributeTypeToRowData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTypeToRowData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeTypeToRowData();
    }
    else
    {
      op->vtkArrayCalculator::SetAttributeTypeToRowData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_RemoveAllVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllVariables();
    }
    else
    {
      op->vtkArrayCalculator::RemoveAllVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_RemoveScalarVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveScalarVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveScalarVariables();
    }
    else
    {
      op->vtkArrayCalculator::RemoveScalarVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_RemoveVectorVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVectorVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveVectorVariables();
    }
    else
    {
      op->vtkArrayCalculator::RemoveVectorVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_RemoveCoordinateScalarVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCoordinateScalarVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveCoordinateScalarVariables();
    }
    else
    {
      op->vtkArrayCalculator::RemoveCoordinateScalarVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_RemoveCoordinateVectorVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCoordinateVectorVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveCoordinateVectorVariables();
    }
    else
    {
      op->vtkArrayCalculator::RemoveCoordinateVectorVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetScalarArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::vector<std::string> *tempr = (ap.IsBound() ?
      &op->GetScalarArrayNames() :
      &op->vtkArrayCalculator::GetScalarArrayNames());

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetScalarArrayName(temp0) :
      op->vtkArrayCalculator::GetScalarArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetVectorArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::vector<std::string> *tempr = (ap.IsBound() ?
      &op->GetVectorArrayNames() :
      &op->vtkArrayCalculator::GetVectorArrayNames());

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetVectorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetVectorArrayName(temp0) :
      op->vtkArrayCalculator::GetVectorArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetScalarVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::vector<std::string> *tempr = (ap.IsBound() ?
      &op->GetScalarVariableNames() :
      &op->vtkArrayCalculator::GetScalarVariableNames());

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetScalarVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetScalarVariableName(temp0) :
      op->vtkArrayCalculator::GetScalarVariableName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetVectorVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::vector<std::string> *tempr = (ap.IsBound() ?
      &op->GetVectorVariableNames() :
      &op->vtkArrayCalculator::GetVectorVariableNames());

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetVectorVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetVectorVariableName(temp0) :
      op->vtkArrayCalculator::GetVectorVariableName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetSelectedScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::vector<int> *tempr = (ap.IsBound() ?
      &op->GetSelectedScalarComponents() :
      &op->vtkArrayCalculator::GetSelectedScalarComponents());

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetSelectedScalarComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedScalarComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedScalarComponent(temp0) :
      op->vtkArrayCalculator::GetSelectedScalarComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetSelectedVectorComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTuple<int, 3> tempr = (ap.IsBound() ?
      op->GetSelectedVectorComponents(temp0) :
      op->vtkArrayCalculator::GetSelectedVectorComponents(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTuple_IiLi3EE");
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetNumberOfScalarArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarArrays() :
      op->vtkArrayCalculator::GetNumberOfScalarArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetNumberOfVectorArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVectorArrays() :
      op->vtkArrayCalculator::GetNumberOfVectorArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetReplaceInvalidValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceInvalidValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplaceInvalidValues(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetReplaceInvalidValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetReplaceInvalidValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceInvalidValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplaceInvalidValues() :
      op->vtkArrayCalculator::GetReplaceInvalidValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_ReplaceInvalidValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInvalidValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceInvalidValuesOn();
    }
    else
    {
      op->vtkArrayCalculator::ReplaceInvalidValuesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_ReplaceInvalidValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInvalidValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceInvalidValuesOff();
    }
    else
    {
      op->vtkArrayCalculator::ReplaceInvalidValuesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetReplacementValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplacementValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplacementValue(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetReplacementValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetReplacementValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetReplacementValue() :
      op->vtkArrayCalculator::GetReplacementValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetIgnoreMissingArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreMissingArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnoreMissingArrays(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetIgnoreMissingArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetIgnoreMissingArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreMissingArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIgnoreMissingArrays() :
      op->vtkArrayCalculator::GetIgnoreMissingArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_IgnoreMissingArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreMissingArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreMissingArraysOn();
    }
    else
    {
      op->vtkArrayCalculator::IgnoreMissingArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_IgnoreMissingArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreMissingArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreMissingArraysOff();
    }
    else
    {
      op->vtkArrayCalculator::IgnoreMissingArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetFunctionParserType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionParserType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  typedef vtkArrayCalculator::FunctionParserTypes temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkArrayCalculator.FunctionParserTypes"))
  {
    if (ap.IsBound())
    {
      op->SetFunctionParserType(temp0);
    }
    else
    {
      op->vtkArrayCalculator::SetFunctionParserType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetFunctionParserTypeToFunctionParser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionParserTypeToFunctionParser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFunctionParserTypeToFunctionParser();
    }
    else
    {
      op->vtkArrayCalculator::SetFunctionParserTypeToFunctionParser();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_SetFunctionParserTypeToExprTkFunctionParser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionParserTypeToExprTkFunctionParser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFunctionParserTypeToExprTkFunctionParser();
    }
    else
    {
      op->vtkArrayCalculator::SetFunctionParserTypeToExprTkFunctionParser();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetFunctionParserType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunctionParserType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkArrayCalculator::FunctionParserTypes tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetFunctionParserType() :
      op->vtkArrayCalculator::GetFunctionParserType());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkArrayCalculator_FunctionParserTypes_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCalculator_GetDataSetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayCalculator *op = static_cast<vtkArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSetOutput() :
      op->vtkArrayCalculator::GetDataSetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayCalculator_Methods[] = {
  {"IsTypeOf", PyvtkArrayCalculator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayCalculator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayCalculator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkArrayCalculator\nC++: static vtkArrayCalculator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayCalculator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkArrayCalculator\nC++: vtkArrayCalculator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkArrayCalculator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkArrayCalculator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFunction", PyvtkArrayCalculator_SetFunction, METH_VARARGS,
   "SetFunction(self, _arg:str) -> None\nC++: virtual void SetFunction(const char *_arg)\n\nSet/Get the function to be evaluated.\n"},
  {"GetFunction", PyvtkArrayCalculator_GetFunction, METH_VARARGS,
   "GetFunction(self) -> str\nC++: virtual char *GetFunction()\n\n"},
  {"AddScalarArrayName", PyvtkArrayCalculator_AddScalarArrayName, METH_VARARGS,
   "AddScalarArrayName(self, arrayName:str, component:int=0) -> None\nC++: void AddScalarArrayName(const char *arrayName,\n    int component=0)\n\nAdd an array name to the list of arrays used in the function and\nspecify which components of the array to use in evaluating the\nfunction. The array name must match the name in the function. If\nthe array name is not sanitized, the variable name will be the\narray name enclosed in quotes. Use AddScalarVariable or\nAddVectorVariable to use a user defined variable name.\n\note A sanitized variable name is accepted by the following regex:\n^[a-zA-Z][a-zA-Z_0-9]*.\n"},
  {"AddVectorArrayName", PyvtkArrayCalculator_AddVectorArrayName, METH_VARARGS,
   "AddVectorArrayName(self, arrayName:str, component0:int=0,\n    component1:int=1, component2:int=2) -> None\nC++: void AddVectorArrayName(const char *arrayName,\n    int component0=0, int component1=1, int component2=2)\n\n"},
  {"AddScalarVariable", PyvtkArrayCalculator_AddScalarVariable, METH_VARARGS,
   "AddScalarVariable(self, variableName:str, arrayName:str,\n    component:int=0) -> None\nC++: void AddScalarVariable(const char *variableName,\n    const char *arrayName, int component=0)\n\nAdd a variable name, a corresponding array name, and which\ncomponents of the array to use. The variable name should be\nsanitized or in quotes.\n\note A sanitized variable name is accepted by the following regex:\n^[a-zA-Z][a-zA-Z_0-9]*.\n"},
  {"AddVectorVariable", PyvtkArrayCalculator_AddVectorVariable, METH_VARARGS,
   "AddVectorVariable(self, variableName:str, arrayName:str,\n    component0:int=0, component1:int=1, component2:int=2) -> None\nC++: void AddVectorVariable(const char *variableName,\n    const char *arrayName, int component0=0, int component1=1,\n    int component2=2)\n\n"},
  {"AddCoordinateScalarVariable", PyvtkArrayCalculator_AddCoordinateScalarVariable, METH_VARARGS,
   "AddCoordinateScalarVariable(self, variableName:str,\n    component:int=0) -> None\nC++: void AddCoordinateScalarVariable(const char *variableName,\n    int component=0)\n\nAdd a variable name, a corresponding array name, and which\ncomponents of the array to use. The variable name should be\nsanitized or in quotes.\n\note A sanitized variable name is accepted by the following regex:\n^[a-zA-Z][a-zA-Z_0-9]*.\n"},
  {"AddCoordinateVectorVariable", PyvtkArrayCalculator_AddCoordinateVectorVariable, METH_VARARGS,
   "AddCoordinateVectorVariable(self, variableName:str,\n    component0:int=0, component1:int=1, component2:int=2) -> None\nC++: void AddCoordinateVectorVariable(const char *variableName,\n    int component0=0, int component1=1, int component2=2)\n\n"},
  {"SetResultArrayName", PyvtkArrayCalculator_SetResultArrayName, METH_VARARGS,
   "SetResultArrayName(self, _arg:str) -> None\nC++: virtual void SetResultArrayName(const char *_arg)\n\nSet the name of the array in which to store the result of\nevaluating this function.  If this is the name of an existing\narray, that array will be overwritten.  Otherwise a new array\nwill be created with the specified name.\n"},
  {"GetResultArrayName", PyvtkArrayCalculator_GetResultArrayName, METH_VARARGS,
   "GetResultArrayName(self) -> str\nC++: virtual char *GetResultArrayName()\n\n"},
  {"GetResultArrayType", PyvtkArrayCalculator_GetResultArrayType, METH_VARARGS,
   "GetResultArrayType(self) -> int\nC++: virtual int GetResultArrayType()\n\nType of the result array. It is ignored if CoordinateResults is\ntrue. Initial value is VTK_DOUBLE.\n"},
  {"SetResultArrayType", PyvtkArrayCalculator_SetResultArrayType, METH_VARARGS,
   "SetResultArrayType(self, _arg:int) -> None\nC++: virtual void SetResultArrayType(int _arg)\n\n"},
  {"GetCoordinateResults", PyvtkArrayCalculator_GetCoordinateResults, METH_VARARGS,
   "GetCoordinateResults(self) -> int\nC++: virtual vtkTypeBool GetCoordinateResults()\n\nSet whether to output results as coordinates.  ResultArrayName\nwill be ignored.  Outputting as coordinates is only valid with\nvector results and if the AttributeMode is\nAttributeModeToUsePointData. If a valid output can't be made, an\nerror will occur.\n"},
  {"SetCoordinateResults", PyvtkArrayCalculator_SetCoordinateResults, METH_VARARGS,
   "SetCoordinateResults(self, _arg:int) -> None\nC++: virtual void SetCoordinateResults(vtkTypeBool _arg)\n\n"},
  {"CoordinateResultsOn", PyvtkArrayCalculator_CoordinateResultsOn, METH_VARARGS,
   "CoordinateResultsOn(self) -> None\nC++: virtual void CoordinateResultsOn()\n\n"},
  {"CoordinateResultsOff", PyvtkArrayCalculator_CoordinateResultsOff, METH_VARARGS,
   "CoordinateResultsOff(self) -> None\nC++: virtual void CoordinateResultsOff()\n\n"},
  {"GetResultNormals", PyvtkArrayCalculator_GetResultNormals, METH_VARARGS,
   "GetResultNormals(self) -> bool\nC++: virtual bool GetResultNormals()\n\nSet whether to output results as point/cell normals. Outputting\nas normals is only valid with vector results. Point or cell\nnormals are selected using AttributeMode.\n"},
  {"SetResultNormals", PyvtkArrayCalculator_SetResultNormals, METH_VARARGS,
   "SetResultNormals(self, _arg:bool) -> None\nC++: virtual void SetResultNormals(bool _arg)\n\n"},
  {"ResultNormalsOn", PyvtkArrayCalculator_ResultNormalsOn, METH_VARARGS,
   "ResultNormalsOn(self) -> None\nC++: virtual void ResultNormalsOn()\n\n"},
  {"ResultNormalsOff", PyvtkArrayCalculator_ResultNormalsOff, METH_VARARGS,
   "ResultNormalsOff(self) -> None\nC++: virtual void ResultNormalsOff()\n\n"},
  {"GetResultTCoords", PyvtkArrayCalculator_GetResultTCoords, METH_VARARGS,
   "GetResultTCoords(self) -> bool\nC++: virtual bool GetResultTCoords()\n\nSet whether to output results as point/cell texture coordinates.\nPoint or cell texture coordinates are selected using\nAttributeMode. 2-component texture coordinates cannot be\ngenerated at this time.\n"},
  {"SetResultTCoords", PyvtkArrayCalculator_SetResultTCoords, METH_VARARGS,
   "SetResultTCoords(self, _arg:bool) -> None\nC++: virtual void SetResultTCoords(bool _arg)\n\n"},
  {"ResultTCoordsOn", PyvtkArrayCalculator_ResultTCoordsOn, METH_VARARGS,
   "ResultTCoordsOn(self) -> None\nC++: virtual void ResultTCoordsOn()\n\n"},
  {"ResultTCoordsOff", PyvtkArrayCalculator_ResultTCoordsOff, METH_VARARGS,
   "ResultTCoordsOff(self) -> None\nC++: virtual void ResultTCoordsOff()\n\n"},
  {"GetAttributeTypeAsString", PyvtkArrayCalculator_GetAttributeTypeAsString, METH_VARARGS,
   "GetAttributeTypeAsString(self) -> str\nC++: const char *GetAttributeTypeAsString()\n\nReturns a string representation of the calculator's AttributeType\n"},
  {"SetAttributeType", PyvtkArrayCalculator_SetAttributeType, METH_VARARGS,
   "SetAttributeType(self, _arg:int) -> None\nC++: virtual void SetAttributeType(int _arg)\n\nControl which AttributeType the filter operates on (point data or\ncell data for vtkDataSets).  By default the filter uses\nPoint/Vertex/Row data depending on the input data type.  The\ninput value for this function should be one of the constants in\nvtkDataObject::AttributeTypes or DEFAULT_ATTRIBUTE_TYPE for 'default\nbehavior'.\n"},
  {"GetAttributeType", PyvtkArrayCalculator_GetAttributeType, METH_VARARGS,
   "GetAttributeType(self) -> int\nC++: virtual int GetAttributeType()\n\n"},
  {"SetAttributeTypeToDefault", PyvtkArrayCalculator_SetAttributeTypeToDefault, METH_VARARGS,
   "SetAttributeTypeToDefault(self) -> None\nC++: void SetAttributeTypeToDefault()\n\n"},
  {"SetAttributeTypeToPointData", PyvtkArrayCalculator_SetAttributeTypeToPointData, METH_VARARGS,
   "SetAttributeTypeToPointData(self) -> None\nC++: void SetAttributeTypeToPointData()\n\n"},
  {"SetAttributeTypeToCellData", PyvtkArrayCalculator_SetAttributeTypeToCellData, METH_VARARGS,
   "SetAttributeTypeToCellData(self) -> None\nC++: void SetAttributeTypeToCellData()\n\n"},
  {"SetAttributeTypeToEdgeData", PyvtkArrayCalculator_SetAttributeTypeToEdgeData, METH_VARARGS,
   "SetAttributeTypeToEdgeData(self) -> None\nC++: void SetAttributeTypeToEdgeData()\n\n"},
  {"SetAttributeTypeToVertexData", PyvtkArrayCalculator_SetAttributeTypeToVertexData, METH_VARARGS,
   "SetAttributeTypeToVertexData(self) -> None\nC++: void SetAttributeTypeToVertexData()\n\n"},
  {"SetAttributeTypeToRowData", PyvtkArrayCalculator_SetAttributeTypeToRowData, METH_VARARGS,
   "SetAttributeTypeToRowData(self) -> None\nC++: void SetAttributeTypeToRowData()\n\n"},
  {"RemoveAllVariables", PyvtkArrayCalculator_RemoveAllVariables, METH_VARARGS,
   "RemoveAllVariables(self) -> None\nC++: void RemoveAllVariables()\n\nRemove all the variable names and their associated array names.\n"},
  {"RemoveScalarVariables", PyvtkArrayCalculator_RemoveScalarVariables, METH_VARARGS,
   "RemoveScalarVariables(self) -> None\nC++: virtual void RemoveScalarVariables()\n\nRemove all the scalar variable names and their associated array\nnames.\n"},
  {"RemoveVectorVariables", PyvtkArrayCalculator_RemoveVectorVariables, METH_VARARGS,
   "RemoveVectorVariables(self) -> None\nC++: virtual void RemoveVectorVariables()\n\nRemove all the scalar variable names and their associated array\nnames.\n"},
  {"RemoveCoordinateScalarVariables", PyvtkArrayCalculator_RemoveCoordinateScalarVariables, METH_VARARGS,
   "RemoveCoordinateScalarVariables(self) -> None\nC++: virtual void RemoveCoordinateScalarVariables()\n\nRemove all the coordinate variables.\n"},
  {"RemoveCoordinateVectorVariables", PyvtkArrayCalculator_RemoveCoordinateVectorVariables, METH_VARARGS,
   "RemoveCoordinateVectorVariables(self) -> None\nC++: virtual void RemoveCoordinateVectorVariables()\n\nRemove all the coordinate variables.\n"},
  {"GetScalarArrayNames", PyvtkArrayCalculator_GetScalarArrayNames, METH_VARARGS,
   "GetScalarArrayNames(self) -> (str, ...)\nC++: const std::vector<std::string> &GetScalarArrayNames()\n\nMethods to get information about the current variables.\n"},
  {"GetScalarArrayName", PyvtkArrayCalculator_GetScalarArrayName, METH_VARARGS,
   "GetScalarArrayName(self, i:int) -> str\nC++: std::string GetScalarArrayName(int i)\n\n"},
  {"GetVectorArrayNames", PyvtkArrayCalculator_GetVectorArrayNames, METH_VARARGS,
   "GetVectorArrayNames(self) -> (str, ...)\nC++: const std::vector<std::string> &GetVectorArrayNames()\n\n"},
  {"GetVectorArrayName", PyvtkArrayCalculator_GetVectorArrayName, METH_VARARGS,
   "GetVectorArrayName(self, i:int) -> str\nC++: std::string GetVectorArrayName(int i)\n\n"},
  {"GetScalarVariableNames", PyvtkArrayCalculator_GetScalarVariableNames, METH_VARARGS,
   "GetScalarVariableNames(self) -> (str, ...)\nC++: const std::vector<std::string> &GetScalarVariableNames()\n\n"},
  {"GetScalarVariableName", PyvtkArrayCalculator_GetScalarVariableName, METH_VARARGS,
   "GetScalarVariableName(self, i:int) -> str\nC++: std::string GetScalarVariableName(int i)\n\n"},
  {"GetVectorVariableNames", PyvtkArrayCalculator_GetVectorVariableNames, METH_VARARGS,
   "GetVectorVariableNames(self) -> (str, ...)\nC++: const std::vector<std::string> &GetVectorVariableNames()\n\n"},
  {"GetVectorVariableName", PyvtkArrayCalculator_GetVectorVariableName, METH_VARARGS,
   "GetVectorVariableName(self, i:int) -> str\nC++: std::string GetVectorVariableName(int i)\n\n"},
  {"GetSelectedScalarComponents", PyvtkArrayCalculator_GetSelectedScalarComponents, METH_VARARGS,
   "GetSelectedScalarComponents(self) -> (int, ...)\nC++: const std::vector<int> &GetSelectedScalarComponents()\n\n"},
  {"GetSelectedScalarComponent", PyvtkArrayCalculator_GetSelectedScalarComponent, METH_VARARGS,
   "GetSelectedScalarComponent(self, i:int) -> int\nC++: int GetSelectedScalarComponent(int i)\n\n"},
  {"GetSelectedVectorComponents", PyvtkArrayCalculator_GetSelectedVectorComponents, METH_VARARGS,
   "GetSelectedVectorComponents(self, i:int) -> vtkTuple_IiLi3EE\nC++: vtkTuple<int, 3> GetSelectedVectorComponents(int i)\n\n"},
  {"GetNumberOfScalarArrays", PyvtkArrayCalculator_GetNumberOfScalarArrays, METH_VARARGS,
   "GetNumberOfScalarArrays(self) -> int\nC++: int GetNumberOfScalarArrays()\n\n"},
  {"GetNumberOfVectorArrays", PyvtkArrayCalculator_GetNumberOfVectorArrays, METH_VARARGS,
   "GetNumberOfVectorArrays(self) -> int\nC++: int GetNumberOfVectorArrays()\n\n"},
  {"SetReplaceInvalidValues", PyvtkArrayCalculator_SetReplaceInvalidValues, METH_VARARGS,
   "SetReplaceInvalidValues(self, _arg:int) -> None\nC++: virtual void SetReplaceInvalidValues(vtkTypeBool _arg)\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported.\n"},
  {"GetReplaceInvalidValues", PyvtkArrayCalculator_GetReplaceInvalidValues, METH_VARARGS,
   "GetReplaceInvalidValues(self) -> int\nC++: virtual vtkTypeBool GetReplaceInvalidValues()\n\n"},
  {"ReplaceInvalidValuesOn", PyvtkArrayCalculator_ReplaceInvalidValuesOn, METH_VARARGS,
   "ReplaceInvalidValuesOn(self) -> None\nC++: virtual void ReplaceInvalidValuesOn()\n\n"},
  {"ReplaceInvalidValuesOff", PyvtkArrayCalculator_ReplaceInvalidValuesOff, METH_VARARGS,
   "ReplaceInvalidValuesOff(self) -> None\nC++: virtual void ReplaceInvalidValuesOff()\n\n"},
  {"SetReplacementValue", PyvtkArrayCalculator_SetReplacementValue, METH_VARARGS,
   "SetReplacementValue(self, _arg:float) -> None\nC++: virtual void SetReplacementValue(double _arg)\n\n"},
  {"GetReplacementValue", PyvtkArrayCalculator_GetReplacementValue, METH_VARARGS,
   "GetReplacementValue(self) -> float\nC++: virtual double GetReplacementValue()\n\n"},
  {"SetIgnoreMissingArrays", PyvtkArrayCalculator_SetIgnoreMissingArrays, METH_VARARGS,
   "SetIgnoreMissingArrays(self, _arg:bool) -> None\nC++: virtual void SetIgnoreMissingArrays(bool _arg)\n\nWhen this option is set, silently ignore datasets where the\nrequested field data array is not present. When an input array is\nnot present, the result array will not be generated nor added to\nthe output.\n"},
  {"GetIgnoreMissingArrays", PyvtkArrayCalculator_GetIgnoreMissingArrays, METH_VARARGS,
   "GetIgnoreMissingArrays(self) -> bool\nC++: virtual bool GetIgnoreMissingArrays()\n\n"},
  {"IgnoreMissingArraysOn", PyvtkArrayCalculator_IgnoreMissingArraysOn, METH_VARARGS,
   "IgnoreMissingArraysOn(self) -> None\nC++: virtual void IgnoreMissingArraysOn()\n\n"},
  {"IgnoreMissingArraysOff", PyvtkArrayCalculator_IgnoreMissingArraysOff, METH_VARARGS,
   "IgnoreMissingArraysOff(self) -> None\nC++: virtual void IgnoreMissingArraysOff()\n\n"},
  {"SetFunctionParserType", PyvtkArrayCalculator_SetFunctionParserType, METH_VARARGS,
   "SetFunctionParserType(self, _arg:FunctionParserTypes) -> None\nC++: virtual void SetFunctionParserType(FunctionParserTypes _arg)\n\nSet/Get the FunctionParser type that will be used.\nvtkFunctionParser = 0, vtkExprTkFunctionParser = 1. Default is 1.\n"},
  {"SetFunctionParserTypeToFunctionParser", PyvtkArrayCalculator_SetFunctionParserTypeToFunctionParser, METH_VARARGS,
   "SetFunctionParserTypeToFunctionParser(self) -> None\nC++: void SetFunctionParserTypeToFunctionParser()\n\n"},
  {"SetFunctionParserTypeToExprTkFunctionParser", PyvtkArrayCalculator_SetFunctionParserTypeToExprTkFunctionParser, METH_VARARGS,
   "SetFunctionParserTypeToExprTkFunctionParser(self) -> None\nC++: void SetFunctionParserTypeToExprTkFunctionParser()\n\n"},
  {"GetFunctionParserType", PyvtkArrayCalculator_GetFunctionParserType, METH_VARARGS,
   "GetFunctionParserType(self) -> FunctionParserTypes\nC++: virtual FunctionParserTypes GetFunctionParserType()\n\n"},
  {"GetDataSetOutput", PyvtkArrayCalculator_GetDataSetOutput, METH_VARARGS,
   "GetDataSetOutput(self) -> vtkDataSet\nC++: vtkDataSet *GetDataSetOutput()\n\nReturns the output of the filter downcast to a vtkDataSet or\nnullptr if the cast fails.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkArrayCalculator_Doc =
  "vtkArrayCalculator - perform mathematical operations on data in field\ndata arrays\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkArrayCalculator performs operations on vectors or scalars in field\n"
  "data arrays.  It uses vtkFunctionParser/vtkExprTkFunctionParser to do\n"
  "the parsing and to evaluate the function for each entry in the input\n"
  "arrays.  The arrays used in a given function must be all in point\n"
  "data or all in cell data. The resulting array will be stored as a\n"
  "field data array.  The result array can either be stored in a new\n"
  "array or it can overwrite an existing array. vtkArrayCalculator can\n"
  "run in parallel using vtkSMPTools.\n\n"
  "The functions that this array calculator understands is:\n\n"
  "standard operations: +\n"
  "-\n"
  "* / ^ . (only by vtkFunctionParser) build unit vectors: iHat, jHat,\n"
  "   kHat (ie (1,0,0), (0,1,0), (0,0,1)) abs acos asin atan ceil cos\n"
  "   cosh exp floor ln mag min max norm dot (only by\n"
  "   vtkExprTkFunctionParser) cross sign sin sinh sqrt tan tanh\n\n"
  "Note that some of these operations work on scalars, some on vectors,\n"
  "and some on both (e.g., you can multiply a scalar times a vector).\n"
  "The operations are performed tuple-wise (i.e., tuple-by-tuple). The\n"
  "user must specify which arrays to use as vectors and/or scalars, and\n"
  "the name of the output data array.\n\n"
  "@sa\n"
  "For more detailed documentation of the supported functionality see:\n"
  "1) vtkFunctionParser\n"
  "2) vtkExprTkFunctionParser (default)\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkArrayCalculator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkArrayCalculator", // tp_name
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
  PyvtkArrayCalculator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayCalculator_StaticNew()
{
  return vtkArrayCalculator::New();
}

PyObject *PyvtkArrayCalculator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkArrayCalculator_Type, PyvtkArrayCalculator_Methods,
    "vtkArrayCalculator",
 &PyvtkArrayCalculator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkArrayCalculator_FunctionParserTypes_Type);
  PyVTKEnum_Add(&PyvtkArrayCalculator_FunctionParserTypes_Type, "vtkArrayCalculator.FunctionParserTypes");

  o = (PyObject *)&PyvtkArrayCalculator_FunctionParserTypes_Type;
  if (PyDict_SetItemString(d, "FunctionParserTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyLong_FromLong(-1);
  if (o)
  {
    PyDict_SetItemString(d, "DEFAULT_ATTRIBUTE_TYPE", o);
    Py_DECREF(o);
  }
  for (int c = 0; c < 3; c++)
  {
    typedef vtkArrayCalculator::FunctionParserTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "FunctionParser", vtkArrayCalculator::FunctionParser },
        { "ExprTkFunctionParser", vtkArrayCalculator::ExprTkFunctionParser },
        { "NumberOfFunctionParserTypes", vtkArrayCalculator::NumberOfFunctionParserTypes },
      };

    o = PyvtkArrayCalculator_FunctionParserTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArrayCalculator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrayCalculator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkArrayCalculator", o) != 0)
  {
    Py_DECREF(o);
  }

}

