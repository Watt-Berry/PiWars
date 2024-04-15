// python wrapper for vtkThresholdTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkThresholdTable.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkThresholdTable(PyObject *dict); }
extern "C" { PyObject *PyvtkThresholdTable_ClassNew(); }


static PyObject *
PyvtkThresholdTable_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkThresholdTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThresholdTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkThresholdTable *tempr = vtkThresholdTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkThresholdTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThresholdTable::NewInstance());

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
PyvtkThresholdTable_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkThresholdTable::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkThresholdTable::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMode(temp0);
    }
    else
    {
      op->vtkThresholdTable::SetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_GetModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMinValue() :
      op->vtkThresholdTable::GetModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_GetModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMaxValue() :
      op->vtkThresholdTable::GetModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkThresholdTable::GetMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_SetMinValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetMinValue(*temp0);
    }
    else
    {
      op->vtkThresholdTable::SetMinValue(*temp0);
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
PyvtkThresholdTable_SetMinValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinValue(temp0);
    }
    else
    {
      op->vtkThresholdTable::SetMinValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkThresholdTable_SetMinValue_Methods[] = {
  {"SetMinValue", PyvtkThresholdTable_SetMinValue_s1, METH_VARARGS,
   "@W vtkVariant"},
  {"SetMinValue", PyvtkThresholdTable_SetMinValue_s2, METH_VARARGS,
   "@d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkThresholdTable_SetMinValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkThresholdTable_SetMinValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMinValue");
  return nullptr;
}


static PyObject *
PyvtkThresholdTable_GetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetMinValue() :
      op->vtkThresholdTable::GetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_SetMaxValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetMaxValue(*temp0);
    }
    else
    {
      op->vtkThresholdTable::SetMaxValue(*temp0);
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
PyvtkThresholdTable_SetMaxValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxValue(temp0);
    }
    else
    {
      op->vtkThresholdTable::SetMaxValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkThresholdTable_SetMaxValue_Methods[] = {
  {"SetMaxValue", PyvtkThresholdTable_SetMaxValue_s1, METH_VARARGS,
   "@W vtkVariant"},
  {"SetMaxValue", PyvtkThresholdTable_SetMaxValue_s2, METH_VARARGS,
   "@d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkThresholdTable_SetMaxValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkThresholdTable_SetMaxValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaxValue");
  return nullptr;
}


static PyObject *
PyvtkThresholdTable_GetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetMaxValue() :
      op->vtkThresholdTable::GetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkThresholdTable_ThresholdBetween_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->ThresholdBetween(*temp0, *temp1);
    }
    else
    {
      op->vtkThresholdTable::ThresholdBetween(*temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkThresholdTable_ThresholdBetween_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ThresholdBetween(temp0, temp1);
    }
    else
    {
      op->vtkThresholdTable::ThresholdBetween(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkThresholdTable_ThresholdBetween_Methods[] = {
  {"ThresholdBetween", PyvtkThresholdTable_ThresholdBetween_s1, METH_VARARGS,
   "@WW vtkVariant vtkVariant"},
  {"ThresholdBetween", PyvtkThresholdTable_ThresholdBetween_s2, METH_VARARGS,
   "@dd"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkThresholdTable_ThresholdBetween(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkThresholdTable_ThresholdBetween_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ThresholdBetween");
  return nullptr;
}


static PyObject *
PyvtkThresholdTable_IsValueAcceptable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValueAcceptable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsValueAcceptable(*temp0) :
      op->vtkThresholdTable::IsValueAcceptable(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkThresholdTable_Methods[] = {
  {"IsTypeOf", PyvtkThresholdTable_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkThresholdTable_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkThresholdTable_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkThresholdTable\nC++: static vtkThresholdTable *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkThresholdTable_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkThresholdTable\nC++: vtkThresholdTable *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkThresholdTable_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkThresholdTable_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMode", PyvtkThresholdTable_SetMode, METH_VARARGS,
   "SetMode(self, _arg:int) -> None\nC++: virtual void SetMode(int _arg)\n\nThe mode of the threshold filter.  Options are: ACCEPT_LESS_THAN\n(0) accepts rows with values < MaxValue; ACCEPT_GREATER_THAN (1)\naccepts rows with values > MinValue; ACCEPT_BETWEEN (2) accepts\nrows with values > MinValue and < MaxValue; ACCEPT_OUTSIDE (3)\naccepts rows with values < MinValue or > MaxValue.\n"},
  {"GetModeMinValue", PyvtkThresholdTable_GetModeMinValue, METH_VARARGS,
   "GetModeMinValue(self) -> int\nC++: virtual int GetModeMinValue()\n\n"},
  {"GetModeMaxValue", PyvtkThresholdTable_GetModeMaxValue, METH_VARARGS,
   "GetModeMaxValue(self) -> int\nC++: virtual int GetModeMaxValue()\n\n"},
  {"GetMode", PyvtkThresholdTable_GetMode, METH_VARARGS,
   "GetMode(self) -> int\nC++: virtual int GetMode()\n\n"},
  {"SetMinValue", PyvtkThresholdTable_SetMinValue, METH_VARARGS,
   "SetMinValue(self, v:vtkVariant) -> None\nC++: virtual void SetMinValue(vtkVariant v)\nSetMinValue(self, v:float) -> None\nC++: void SetMinValue(double v)\n\nThe minimum value for the threshold. This may be any data type\nstored in a vtkVariant.\n"},
  {"GetMinValue", PyvtkThresholdTable_GetMinValue, METH_VARARGS,
   "GetMinValue(self) -> vtkVariant\nC++: virtual vtkVariant GetMinValue()\n\n"},
  {"SetMaxValue", PyvtkThresholdTable_SetMaxValue, METH_VARARGS,
   "SetMaxValue(self, v:vtkVariant) -> None\nC++: virtual void SetMaxValue(vtkVariant v)\nSetMaxValue(self, v:float) -> None\nC++: void SetMaxValue(double v)\n\nThe maximum value for the threshold. This may be any data type\nstored in a vtkVariant.\n"},
  {"GetMaxValue", PyvtkThresholdTable_GetMaxValue, METH_VARARGS,
   "GetMaxValue(self) -> vtkVariant\nC++: virtual vtkVariant GetMaxValue()\n\n"},
  {"ThresholdBetween", PyvtkThresholdTable_ThresholdBetween, METH_VARARGS,
   "ThresholdBetween(self, lower:vtkVariant, upper:vtkVariant) -> None\nC++: void ThresholdBetween(vtkVariant lower, vtkVariant upper)\nThresholdBetween(self, lower:float, upper:float) -> None\nC++: void ThresholdBetween(double lower, double upper)\n\nCriterion is rows whose scalars are between lower and upper\nthresholds (inclusive of the end values).\n"},
  {"IsValueAcceptable", PyvtkThresholdTable_IsValueAcceptable, METH_VARARGS,
   "IsValueAcceptable(self, value:vtkVariant) -> bool\nC++: bool IsValueAcceptable(vtkVariant value)\n\nReturn true if value, converted to double, matches the criteria\nof the current Mode.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkThresholdTable_Doc =
  "vtkThresholdTable - Thresholds table rows.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkThresholdTable uses minimum and/or maximum values to threshold\n"
  "table rows based on the values in a particular column. The column to\n"
  "threshold is specified using SetInputArrayToProcess(0, ...).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkThresholdTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisCore.vtkThresholdTable", // tp_name
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
  PyvtkThresholdTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkThresholdTable_StaticNew()
{
  return vtkThresholdTable::New();
}

PyObject *PyvtkThresholdTable_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkThresholdTable_Type, PyvtkThresholdTable_Methods,
    "vtkThresholdTable",
 &PyvtkThresholdTable_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "ACCEPT_LESS_THAN", vtkThresholdTable::ACCEPT_LESS_THAN },
        { "ACCEPT_GREATER_THAN", vtkThresholdTable::ACCEPT_GREATER_THAN },
        { "ACCEPT_BETWEEN", vtkThresholdTable::ACCEPT_BETWEEN },
        { "ACCEPT_OUTSIDE", vtkThresholdTable::ACCEPT_OUTSIDE },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkThresholdTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkThresholdTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkThresholdTable", o) != 0)
  {
    Py_DECREF(o);
  }

}

