// python wrapper for vtkCellDataToPointData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellDataToPointData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellDataToPointData(PyObject *dict); }
extern "C" { PyObject *PyvtkCellDataToPointData_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellDataToPointData_ContributingCellEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkCellDataToPointData.ContributingCellEnum", // tp_name
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
PyObject *PyvtkCellDataToPointData_ContributingCellEnum_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCellDataToPointData_ContributingCellEnum_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCellDataToPointData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellDataToPointData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellDataToPointData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellDataToPointData *tempr = vtkCellDataToPointData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellDataToPointData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellDataToPointData::NewInstance());

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
PyvtkCellDataToPointData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellDataToPointData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellDataToPointData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_SetPassCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassCellData(temp0);
    }
    else
    {
      op->vtkCellDataToPointData::SetPassCellData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_GetPassCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassCellData() :
      op->vtkCellDataToPointData::GetPassCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_PassCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellDataOn();
    }
    else
    {
      op->vtkCellDataToPointData::PassCellDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_PassCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellDataOff();
    }
    else
    {
      op->vtkCellDataToPointData::PassCellDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_SetContributingCellOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContributingCellOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContributingCellOption(temp0);
    }
    else
    {
      op->vtkCellDataToPointData::SetContributingCellOption(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_GetContributingCellOptionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContributingCellOptionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContributingCellOptionMinValue() :
      op->vtkCellDataToPointData::GetContributingCellOptionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_GetContributingCellOptionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContributingCellOptionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContributingCellOptionMaxValue() :
      op->vtkCellDataToPointData::GetContributingCellOptionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_GetContributingCellOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContributingCellOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContributingCellOption() :
      op->vtkCellDataToPointData::GetContributingCellOption());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_SetProcessAllArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessAllArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessAllArrays(temp0);
    }
    else
    {
      op->vtkCellDataToPointData::SetProcessAllArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_GetProcessAllArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessAllArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProcessAllArrays() :
      op->vtkCellDataToPointData::GetProcessAllArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_ProcessAllArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessAllArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessAllArraysOn();
    }
    else
    {
      op->vtkCellDataToPointData::ProcessAllArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_ProcessAllArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessAllArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessAllArraysOff();
    }
    else
    {
      op->vtkCellDataToPointData::ProcessAllArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPieceInvariant(temp0);
    }
    else
    {
      op->vtkCellDataToPointData::SetPieceInvariant(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPieceInvariant() :
      op->vtkCellDataToPointData::GetPieceInvariant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_PieceInvariantOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOn();
    }
    else
    {
      op->vtkCellDataToPointData::PieceInvariantOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_PieceInvariantOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOff();
    }
    else
    {
      op->vtkCellDataToPointData::PieceInvariantOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_AddCellDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddCellDataArray(temp0);
    }
    else
    {
      op->vtkCellDataToPointData::AddCellDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_RemoveCellDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCellDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveCellDataArray(temp0);
    }
    else
    {
      op->vtkCellDataToPointData::RemoveCellDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDataToPointData_ClearCellDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCellDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDataToPointData *op = static_cast<vtkCellDataToPointData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearCellDataArrays();
    }
    else
    {
      op->vtkCellDataToPointData::ClearCellDataArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCellDataToPointData_Methods[] = {
  {"IsTypeOf", PyvtkCellDataToPointData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellDataToPointData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellDataToPointData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellDataToPointData\nC++: static vtkCellDataToPointData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellDataToPointData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellDataToPointData\nC++: vtkCellDataToPointData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellDataToPointData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellDataToPointData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPassCellData", PyvtkCellDataToPointData_SetPassCellData, METH_VARARGS,
   "SetPassCellData(self, _arg:bool) -> None\nC++: virtual void SetPassCellData(bool _arg)\n\nControl whether the input cell data is to be passed to the\noutput. If on, then the input cell data is passed through to the\noutput; otherwise, only generated point data is placed into the\noutput. The default is false.\n"},
  {"GetPassCellData", PyvtkCellDataToPointData_GetPassCellData, METH_VARARGS,
   "GetPassCellData(self) -> bool\nC++: virtual bool GetPassCellData()\n\n"},
  {"PassCellDataOn", PyvtkCellDataToPointData_PassCellDataOn, METH_VARARGS,
   "PassCellDataOn(self) -> None\nC++: virtual void PassCellDataOn()\n\n"},
  {"PassCellDataOff", PyvtkCellDataToPointData_PassCellDataOff, METH_VARARGS,
   "PassCellDataOff(self) -> None\nC++: virtual void PassCellDataOff()\n\n"},
  {"SetContributingCellOption", PyvtkCellDataToPointData_SetContributingCellOption, METH_VARARGS,
   "SetContributingCellOption(self, _arg:int) -> None\nC++: virtual void SetContributingCellOption(int _arg)\n\nOption to specify what cells to include in the cell-averaging\ncomputation. Options are all cells (All, Patch and DataSetMax).\nThe default is All.\n"},
  {"GetContributingCellOptionMinValue", PyvtkCellDataToPointData_GetContributingCellOptionMinValue, METH_VARARGS,
   "GetContributingCellOptionMinValue(self) -> int\nC++: virtual int GetContributingCellOptionMinValue()\n\n"},
  {"GetContributingCellOptionMaxValue", PyvtkCellDataToPointData_GetContributingCellOptionMaxValue, METH_VARARGS,
   "GetContributingCellOptionMaxValue(self) -> int\nC++: virtual int GetContributingCellOptionMaxValue()\n\n"},
  {"GetContributingCellOption", PyvtkCellDataToPointData_GetContributingCellOption, METH_VARARGS,
   "GetContributingCellOption(self) -> int\nC++: virtual int GetContributingCellOption()\n\n"},
  {"SetProcessAllArrays", PyvtkCellDataToPointData_SetProcessAllArrays, METH_VARARGS,
   "SetProcessAllArrays(self, _arg:bool) -> None\nC++: virtual void SetProcessAllArrays(bool _arg)\n\nActivate selective processing of arrays. If false, only arrays\nselected by the user will be considered by this filter. The\ndefault is true.\n"},
  {"GetProcessAllArrays", PyvtkCellDataToPointData_GetProcessAllArrays, METH_VARARGS,
   "GetProcessAllArrays(self) -> bool\nC++: virtual bool GetProcessAllArrays()\n\n"},
  {"ProcessAllArraysOn", PyvtkCellDataToPointData_ProcessAllArraysOn, METH_VARARGS,
   "ProcessAllArraysOn(self) -> None\nC++: virtual void ProcessAllArraysOn()\n\n"},
  {"ProcessAllArraysOff", PyvtkCellDataToPointData_ProcessAllArraysOff, METH_VARARGS,
   "ProcessAllArraysOff(self) -> None\nC++: virtual void ProcessAllArraysOff()\n\n"},
  {"SetPieceInvariant", PyvtkCellDataToPointData_SetPieceInvariant, METH_VARARGS,
   "SetPieceInvariant(self, _arg:bool) -> None\nC++: virtual void SetPieceInvariant(bool _arg)\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {"GetPieceInvariant", PyvtkCellDataToPointData_GetPieceInvariant, METH_VARARGS,
   "GetPieceInvariant(self) -> bool\nC++: virtual bool GetPieceInvariant()\n\n"},
  {"PieceInvariantOn", PyvtkCellDataToPointData_PieceInvariantOn, METH_VARARGS,
   "PieceInvariantOn(self) -> None\nC++: virtual void PieceInvariantOn()\n\n"},
  {"PieceInvariantOff", PyvtkCellDataToPointData_PieceInvariantOff, METH_VARARGS,
   "PieceInvariantOff(self) -> None\nC++: virtual void PieceInvariantOff()\n\n"},
  {"AddCellDataArray", PyvtkCellDataToPointData_AddCellDataArray, METH_VARARGS,
   "AddCellDataArray(self, name:str) -> None\nC++: virtual void AddCellDataArray(const char *name)\n\nAdds an array to be processed. This only has an effect if the\nProcessAllArrays option is turned off. If a name is already\npresent, nothing happens.\n"},
  {"RemoveCellDataArray", PyvtkCellDataToPointData_RemoveCellDataArray, METH_VARARGS,
   "RemoveCellDataArray(self, name:str) -> None\nC++: virtual void RemoveCellDataArray(const char *name)\n\nRemoves an array to be processed. This only has an effect if the\nProcessAllArrays option is turned off. If the specified name is\nnot present, nothing happens.\n"},
  {"ClearCellDataArrays", PyvtkCellDataToPointData_ClearCellDataArrays, METH_VARARGS,
   "ClearCellDataArrays(self) -> None\nC++: virtual void ClearCellDataArrays()\n\nRemoves all arrays to be processed from the list. This only has\nan effect if the ProcessAllArrays option is turned off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCellDataToPointData_Doc =
  "vtkCellDataToPointData - map cell data to point data\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkCellDataToPointData is a filter that transforms cell data (i.e.,\n"
  "data specified per cell) into point data (i.e., data specified at\n"
  "cell points). The method of transformation is based on averaging the\n"
  "data values of all cells using each point. For large datasets with\n"
  "several cell data arrays, the filter optionally supports selective\n"
  "processing to speed up processing. Optionally, the input cell data\n"
  "can be passed through to the output as well.\n\n"
  "Options exist to control which cells are used to perform the\n"
  "averaging operation. Since unstructured grids and polydata can\n"
  "contain cells of different dimensions, in some cases it is desirable\n"
  "to perform cell averaging using cells of a specified dimension. The\n"
  "available options to control this functionality are All (default),\n"
  "Patch and DataSetMax. Patch uses only the highest dimension cells\n"
  "attached to a point. DataSetMax uses the highest cell dimension in\n"
  "the entire data set.\n\n"
  "@warning\n"
  "This filter is an abstract filter, that is, the output is an abstract\n"
  "type (i.e., vtkDataSet). Use the convenience methods (e.g.,\n"
  "GetPolyDataOutput(), GetStructuredPointsOutput(), etc.) to get the\n"
  "type of output you want.\n\n"
  "@warning\n"
  "For maximum performance, use the ContributingCellOption=All. Other\n"
  "options significantly, negatively impact performance (on the order of\n"
  ">10x).\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential execution type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkPointData vtkCellData vtkPointDataToCellData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellDataToPointData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkCellDataToPointData", // tp_name
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
  PyvtkCellDataToPointData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellDataToPointData_StaticNew()
{
  return vtkCellDataToPointData::New();
}

PyObject *PyvtkCellDataToPointData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellDataToPointData_Type, PyvtkCellDataToPointData_Methods,
    "vtkCellDataToPointData",
 &PyvtkCellDataToPointData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCellDataToPointData_ContributingCellEnum_Type);
  PyVTKEnum_Add(&PyvtkCellDataToPointData_ContributingCellEnum_Type, "vtkCellDataToPointData.ContributingCellEnum");

  o = (PyObject *)&PyvtkCellDataToPointData_ContributingCellEnum_Type;
  if (PyDict_SetItemString(d, "ContributingCellEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkCellDataToPointData::ContributingCellEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "All", vtkCellDataToPointData::All },
        { "Patch", vtkCellDataToPointData::Patch },
        { "DataSetMax", vtkCellDataToPointData::DataSetMax },
      };

    o = PyvtkCellDataToPointData_ContributingCellEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellDataToPointData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellDataToPointData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellDataToPointData", o) != 0)
  {
    Py_DECREF(o);
  }

}

