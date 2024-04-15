// python wrapper for vtkJoinTables
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkJoinTables.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkJoinTables(PyObject *dict); }
extern "C" { PyObject *PyvtkJoinTables_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkJoinTables_JoinMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkJoinTables.JoinMode", // tp_name
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
PyObject *PyvtkJoinTables_JoinMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkJoinTables_JoinMode_Type, static_cast<int>(val));
}


static PyObject *
PyvtkJoinTables_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkJoinTables::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJoinTables_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJoinTables *op = static_cast<vtkJoinTables *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkJoinTables::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJoinTables_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkJoinTables *tempr = vtkJoinTables::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJoinTables_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJoinTables *op = static_cast<vtkJoinTables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkJoinTables *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkJoinTables::NewInstance());

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
PyvtkJoinTables_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkJoinTables::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJoinTables_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJoinTables *op = static_cast<vtkJoinTables *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkJoinTables::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJoinTables_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJoinTables *op = static_cast<vtkJoinTables *>(vp);

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
      op->vtkJoinTables::SetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJoinTables_GetModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJoinTables *op = static_cast<vtkJoinTables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMinValue() :
      op->vtkJoinTables::GetModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJoinTables_GetModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJoinTables *op = static_cast<vtkJoinTables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMaxValue() :
      op->vtkJoinTables::GetModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJoinTables_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJoinTables *op = static_cast<vtkJoinTables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkJoinTables::GetMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJoinTables_SetReplacementValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplacementValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJoinTables *op = static_cast<vtkJoinTables *>(vp);

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
      op->vtkJoinTables::SetReplacementValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJoinTables_GetReplacementValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJoinTables *op = static_cast<vtkJoinTables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetReplacementValue() :
      op->vtkJoinTables::GetReplacementValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJoinTables_SetLeftKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJoinTables *op = static_cast<vtkJoinTables *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftKey(temp0);
    }
    else
    {
      op->vtkJoinTables::SetLeftKey(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJoinTables_GetLeftKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJoinTables *op = static_cast<vtkJoinTables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLeftKey() :
      op->vtkJoinTables::GetLeftKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJoinTables_SetRightKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJoinTables *op = static_cast<vtkJoinTables *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightKey(temp0);
    }
    else
    {
      op->vtkJoinTables::SetRightKey(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJoinTables_GetRightKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJoinTables *op = static_cast<vtkJoinTables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRightKey() :
      op->vtkJoinTables::GetRightKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJoinTables_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJoinTables *op = static_cast<vtkJoinTables *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkJoinTables::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJoinTables_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJoinTables *op = static_cast<vtkJoinTables *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkJoinTables::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkJoinTables_Methods[] = {
  {"IsTypeOf", PyvtkJoinTables_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkJoinTables_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkJoinTables_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkJoinTables\nC++: static vtkJoinTables *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkJoinTables_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkJoinTables\nC++: vtkJoinTables *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkJoinTables_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkJoinTables_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMode", PyvtkJoinTables_SetMode, METH_VARARGS,
   "SetMode(self, _arg:int) -> None\nC++: virtual void SetMode(int _arg)\n\nThe mode of the Join Tables filter. This is meaningful when the\ntwo key columns do not share exactly the same set of values. The\ndifferent Join modes that this filter implements are :\n- INTERSECTION : Keeps only the keys that are in both columns.\n- UNION : Keeps all of the keys from both tables.\n- LEFT : Keeps the keys from the left table.\n- RIGHT : Keeps the keys from the right table.\n"},
  {"GetModeMinValue", PyvtkJoinTables_GetModeMinValue, METH_VARARGS,
   "GetModeMinValue(self) -> int\nC++: virtual int GetModeMinValue()\n\n"},
  {"GetModeMaxValue", PyvtkJoinTables_GetModeMaxValue, METH_VARARGS,
   "GetModeMaxValue(self) -> int\nC++: virtual int GetModeMaxValue()\n\n"},
  {"GetMode", PyvtkJoinTables_GetMode, METH_VARARGS,
   "GetMode(self) -> int\nC++: virtual int GetMode()\n\n"},
  {"SetReplacementValue", PyvtkJoinTables_SetReplacementValue, METH_VARARGS,
   "SetReplacementValue(self, _arg:float) -> None\nC++: virtual void SetReplacementValue(double _arg)\n\nValue to be imputed in numeric columns of the output when the\ndata for a given key in a given column is unknown.\n"},
  {"GetReplacementValue", PyvtkJoinTables_GetReplacementValue, METH_VARARGS,
   "GetReplacementValue(self) -> float\nC++: virtual double GetReplacementValue()\n\n"},
  {"SetLeftKey", PyvtkJoinTables_SetLeftKey, METH_VARARGS,
   "SetLeftKey(self, arg:str) -> None\nC++: virtual void SetLeftKey(const char *arg)\n\nSpecifies which column of the left table to use for the join\noperation.\n"},
  {"GetLeftKey", PyvtkJoinTables_GetLeftKey, METH_VARARGS,
   "GetLeftKey(self) -> str\nC++: virtual const char *GetLeftKey()\n\n"},
  {"SetRightKey", PyvtkJoinTables_SetRightKey, METH_VARARGS,
   "SetRightKey(self, arg:str) -> None\nC++: virtual void SetRightKey(const char *arg)\n\nSpecifies which column of the right table to use for the join\noperation.\n"},
  {"GetRightKey", PyvtkJoinTables_GetRightKey, METH_VARARGS,
   "GetRightKey(self) -> str\nC++: virtual const char *GetRightKey()\n\n"},
  {"SetSourceConnection", PyvtkJoinTables_SetSourceConnection, METH_VARARGS,
   "SetSourceConnection(self, source:vtkAlgorithmOutput) -> None\nC++: void SetSourceConnection(vtkAlgorithmOutput *source)\n\nSet a pipeline connection on port 1 for the right table. This\nmethod is equivalent to SetInputConnection(1, source).\n"},
  {"SetSourceData", PyvtkJoinTables_SetSourceData, METH_VARARGS,
   "SetSourceData(self, source:vtkTable) -> None\nC++: void SetSourceData(vtkTable *source)\n\nSpecify input data on port 1 for the right table. This method is\nequivalent to SetInputData(1, source).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkJoinTables_Doc =
  "vtkJoinTables - SQL-style Join operation on two tables.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkJoinTables is a filter that operates on two vtkTable objects to\n"
  "perform an SQL-style Join operation. It outputs one vtkTable object.\n"
  "The goal is to combine the rows of both tables into one bigger table\n"
  "based on a related column between them (both inputs have their \"key\n"
  "column\"). The two input tables are referred to as left and right. In\n"
  "each input table, the values in the key column act like unique IDs\n"
  "for their respective  rows. During the merge, the attributes of each\n"
  "item will be given with respect to its ID.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkJoinTables_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkJoinTables", // tp_name
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
  PyvtkJoinTables_Doc, // tp_doc
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

static vtkObjectBase *PyvtkJoinTables_StaticNew()
{
  return vtkJoinTables::New();
}

PyObject *PyvtkJoinTables_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkJoinTables_Type, PyvtkJoinTables_Methods,
    "vtkJoinTables",
 &PyvtkJoinTables_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkJoinTables_JoinMode_Type);
  PyVTKEnum_Add(&PyvtkJoinTables_JoinMode_Type, "vtkJoinTables.JoinMode");

  o = (PyObject *)&PyvtkJoinTables_JoinMode_Type;
  if (PyDict_SetItemString(d, "JoinMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkJoinTables::JoinMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "INTERSECTION", vtkJoinTables::INTERSECTION },
        { "UNION", vtkJoinTables::UNION },
        { "LEFT", vtkJoinTables::LEFT },
        { "RIGHT", vtkJoinTables::RIGHT },
      };

    o = PyvtkJoinTables_JoinMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkJoinTables(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkJoinTables_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkJoinTables", o) != 0)
  {
    Py_DECREF(o);
  }

}

