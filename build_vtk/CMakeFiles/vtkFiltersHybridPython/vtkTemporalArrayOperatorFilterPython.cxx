// python wrapper for vtkTemporalArrayOperatorFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTemporalArrayOperatorFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTemporalArrayOperatorFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkTemporalArrayOperatorFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTemporalArrayOperatorFilter_OperatorType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkTemporalArrayOperatorFilter.OperatorType", // tp_name
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
PyObject *PyvtkTemporalArrayOperatorFilter_OperatorType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkTemporalArrayOperatorFilter_OperatorType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTemporalArrayOperatorFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalArrayOperatorFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTemporalArrayOperatorFilter *tempr = vtkTemporalArrayOperatorFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTemporalArrayOperatorFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalArrayOperatorFilter::NewInstance());

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
PyvtkTemporalArrayOperatorFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTemporalArrayOperatorFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTemporalArrayOperatorFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_SetOperator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOperator(temp0);
    }
    else
    {
      op->vtkTemporalArrayOperatorFilter::SetOperator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_GetOperator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperator() :
      op->vtkTemporalArrayOperatorFilter::GetOperator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_SetFirstTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFirstTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFirstTimeStepIndex(temp0);
    }
    else
    {
      op->vtkTemporalArrayOperatorFilter::SetFirstTimeStepIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_GetFirstTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFirstTimeStepIndex() :
      op->vtkTemporalArrayOperatorFilter::GetFirstTimeStepIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_SetSecondTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSecondTimeStepIndex(temp0);
    }
    else
    {
      op->vtkTemporalArrayOperatorFilter::SetSecondTimeStepIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_GetSecondTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSecondTimeStepIndex() :
      op->vtkTemporalArrayOperatorFilter::GetSecondTimeStepIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_SetOutputArrayNameSuffix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayNameSuffix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputArrayNameSuffix(temp0);
    }
    else
    {
      op->vtkTemporalArrayOperatorFilter::SetOutputArrayNameSuffix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalArrayOperatorFilter_GetOutputArrayNameSuffix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputArrayNameSuffix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalArrayOperatorFilter *op = static_cast<vtkTemporalArrayOperatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOutputArrayNameSuffix() :
      op->vtkTemporalArrayOperatorFilter::GetOutputArrayNameSuffix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalArrayOperatorFilter_Methods[] = {
  {"IsTypeOf", PyvtkTemporalArrayOperatorFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTemporalArrayOperatorFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTemporalArrayOperatorFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTemporalArrayOperatorFilter\nC++: static vtkTemporalArrayOperatorFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTemporalArrayOperatorFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTemporalArrayOperatorFilter\nC++: vtkTemporalArrayOperatorFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTemporalArrayOperatorFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTemporalArrayOperatorFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOperator", PyvtkTemporalArrayOperatorFilter_SetOperator, METH_VARARGS,
   "SetOperator(self, _arg:int) -> None\nC++: virtual void SetOperator(int _arg)\n\nSet/Get the operator to apply. Default is ADD (0).\n"},
  {"GetOperator", PyvtkTemporalArrayOperatorFilter_GetOperator, METH_VARARGS,
   "GetOperator(self) -> int\nC++: virtual int GetOperator()\n\n"},
  {"SetFirstTimeStepIndex", PyvtkTemporalArrayOperatorFilter_SetFirstTimeStepIndex, METH_VARARGS,
   "SetFirstTimeStepIndex(self, _arg:int) -> None\nC++: virtual void SetFirstTimeStepIndex(int _arg)\n\nSet/Get the first time step.\n"},
  {"GetFirstTimeStepIndex", PyvtkTemporalArrayOperatorFilter_GetFirstTimeStepIndex, METH_VARARGS,
   "GetFirstTimeStepIndex(self) -> int\nC++: virtual int GetFirstTimeStepIndex()\n\n"},
  {"SetSecondTimeStepIndex", PyvtkTemporalArrayOperatorFilter_SetSecondTimeStepIndex, METH_VARARGS,
   "SetSecondTimeStepIndex(self, _arg:int) -> None\nC++: virtual void SetSecondTimeStepIndex(int _arg)\n\nSet/Get the second time step.\n"},
  {"GetSecondTimeStepIndex", PyvtkTemporalArrayOperatorFilter_GetSecondTimeStepIndex, METH_VARARGS,
   "GetSecondTimeStepIndex(self) -> int\nC++: virtual int GetSecondTimeStepIndex()\n\n"},
  {"SetOutputArrayNameSuffix", PyvtkTemporalArrayOperatorFilter_SetOutputArrayNameSuffix, METH_VARARGS,
   "SetOutputArrayNameSuffix(self, _arg:str) -> None\nC++: virtual void SetOutputArrayNameSuffix(const char *_arg)\n\nSet/Get the suffix to be append to the output array name.\nIf not specified, output will be suffixed with '_' and the\noperation type (eg. myarrayname_add).\n"},
  {"GetOutputArrayNameSuffix", PyvtkTemporalArrayOperatorFilter_GetOutputArrayNameSuffix, METH_VARARGS,
   "GetOutputArrayNameSuffix(self) -> str\nC++: virtual char *GetOutputArrayNameSuffix()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTemporalArrayOperatorFilter_Doc =
  "vtkTemporalArrayOperatorFilter - perform simple mathematical\noperation on a data array at different time\n\n"
  "Superclass: vtkMultiTimeStepAlgorithm\n\n"
  "This filter computes a simple operation between two time steps of one\n"
  "data array.\n\n"
  "@sa\n"
  "vtkArrayCalulator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTemporalArrayOperatorFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkTemporalArrayOperatorFilter", // tp_name
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
  PyvtkTemporalArrayOperatorFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTemporalArrayOperatorFilter_StaticNew()
{
  return vtkTemporalArrayOperatorFilter::New();
}

PyObject *PyvtkTemporalArrayOperatorFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTemporalArrayOperatorFilter_Type, PyvtkTemporalArrayOperatorFilter_Methods,
    "vtkTemporalArrayOperatorFilter",
 &PyvtkTemporalArrayOperatorFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiTimeStepAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkTemporalArrayOperatorFilter_OperatorType_Type);
  PyVTKEnum_Add(&PyvtkTemporalArrayOperatorFilter_OperatorType_Type, "vtkTemporalArrayOperatorFilter.OperatorType");

  o = (PyObject *)&PyvtkTemporalArrayOperatorFilter_OperatorType_Type;
  if (PyDict_SetItemString(d, "OperatorType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkTemporalArrayOperatorFilter::OperatorType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "ADD", vtkTemporalArrayOperatorFilter::ADD },
        { "SUB", vtkTemporalArrayOperatorFilter::SUB },
        { "MUL", vtkTemporalArrayOperatorFilter::MUL },
        { "DIV", vtkTemporalArrayOperatorFilter::DIV },
      };

    o = PyvtkTemporalArrayOperatorFilter_OperatorType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTemporalArrayOperatorFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTemporalArrayOperatorFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTemporalArrayOperatorFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

