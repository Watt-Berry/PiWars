// python wrapper for vtkSQLDatabaseSchema
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSQLDatabaseSchema.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSQLDatabaseSchema(PyObject *dict); }
extern "C" { PyObject *PyvtkSQLDatabaseSchema_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSQLDatabaseSchema_DatabaseColumnType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOSQL.vtkSQLDatabaseSchema.DatabaseColumnType", // tp_name
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
PyObject *PyvtkSQLDatabaseSchema_DatabaseColumnType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSQLDatabaseSchema_DatabaseColumnType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSQLDatabaseSchema_DatabaseIndexType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOSQL.vtkSQLDatabaseSchema.DatabaseIndexType", // tp_name
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
PyObject *PyvtkSQLDatabaseSchema_DatabaseIndexType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSQLDatabaseSchema_DatabaseIndexType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSQLDatabaseSchema_DatabaseTriggerType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOSQL.vtkSQLDatabaseSchema.DatabaseTriggerType", // tp_name
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
PyObject *PyvtkSQLDatabaseSchema_DatabaseTriggerType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSQLDatabaseSchema_DatabaseTriggerType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSQLDatabaseSchema_VarargTokens_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOSQL.vtkSQLDatabaseSchema.VarargTokens", // tp_name
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
PyObject *PyvtkSQLDatabaseSchema_VarargTokens_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSQLDatabaseSchema_VarargTokens_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSQLDatabaseSchema_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSQLDatabaseSchema::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSQLDatabaseSchema::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSQLDatabaseSchema *tempr = vtkSQLDatabaseSchema::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSQLDatabaseSchema *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSQLDatabaseSchema::NewInstance());

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
PyvtkSQLDatabaseSchema_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSQLDatabaseSchema::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSQLDatabaseSchema::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_AddPreamble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPreamble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = VTK_SQL_ALLBACKENDS;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->AddPreamble(temp0, temp1, temp2) :
      op->vtkSQLDatabaseSchema::AddPreamble(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_AddTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->AddTable(temp0) :
      op->vtkSQLDatabaseSchema::AddTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_AddColumnToTable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumnToTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  const char *temp2 = nullptr;
  int temp3;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->AddColumnToTable(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSQLDatabaseSchema::AddColumnToTable(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLDatabaseSchema_AddColumnToTable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumnToTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  const char *temp2 = nullptr;
  int temp3;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->AddColumnToTable(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSQLDatabaseSchema::AddColumnToTable(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSQLDatabaseSchema_AddColumnToTable_Methods[] = {
  {"AddColumnToTable", PyvtkSQLDatabaseSchema_AddColumnToTable_s1, METH_VARARGS,
   "@iiziz"},
  {"AddColumnToTable", PyvtkSQLDatabaseSchema_AddColumnToTable_s2, METH_VARARGS,
   "@ziziz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSQLDatabaseSchema_AddColumnToTable(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSQLDatabaseSchema_AddColumnToTable_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddColumnToTable");
  return nullptr;
}


static PyObject *
PyvtkSQLDatabaseSchema_AddIndexToTable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIndexToTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->AddIndexToTable(temp0, temp1, temp2) :
      op->vtkSQLDatabaseSchema::AddIndexToTable(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLDatabaseSchema_AddIndexToTable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIndexToTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->AddIndexToTable(temp0, temp1, temp2) :
      op->vtkSQLDatabaseSchema::AddIndexToTable(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSQLDatabaseSchema_AddIndexToTable_Methods[] = {
  {"AddIndexToTable", PyvtkSQLDatabaseSchema_AddIndexToTable_s1, METH_VARARGS,
   "@iiz"},
  {"AddIndexToTable", PyvtkSQLDatabaseSchema_AddIndexToTable_s2, METH_VARARGS,
   "@ziz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSQLDatabaseSchema_AddIndexToTable(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSQLDatabaseSchema_AddIndexToTable_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddIndexToTable");
  return nullptr;
}


static PyObject *
PyvtkSQLDatabaseSchema_AddColumnToIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumnToIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->AddColumnToIndex(temp0, temp1, temp2) :
      op->vtkSQLDatabaseSchema::AddColumnToIndex(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLDatabaseSchema_AddColumnToIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumnToIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->AddColumnToIndex(temp0, temp1, temp2) :
      op->vtkSQLDatabaseSchema::AddColumnToIndex(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSQLDatabaseSchema_AddColumnToIndex_Methods[] = {
  {"AddColumnToIndex", PyvtkSQLDatabaseSchema_AddColumnToIndex_s1, METH_VARARGS,
   "@iii"},
  {"AddColumnToIndex", PyvtkSQLDatabaseSchema_AddColumnToIndex_s2, METH_VARARGS,
   "@zzz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSQLDatabaseSchema_AddColumnToIndex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSQLDatabaseSchema_AddColumnToIndex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddColumnToIndex");
  return nullptr;
}


static PyObject *
PyvtkSQLDatabaseSchema_AddTriggerToTable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTriggerToTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  const char *temp2 = nullptr;
  const char *temp3 = nullptr;
  const char *temp4 = VTK_SQL_ALLBACKENDS;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    int tempr = (ap.IsBound() ?
      op->AddTriggerToTable(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSQLDatabaseSchema::AddTriggerToTable(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLDatabaseSchema_AddTriggerToTable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTriggerToTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  const char *temp2 = nullptr;
  const char *temp3 = nullptr;
  const char *temp4 = VTK_SQL_ALLBACKENDS;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    int tempr = (ap.IsBound() ?
      op->AddTriggerToTable(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSQLDatabaseSchema::AddTriggerToTable(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSQLDatabaseSchema_AddTriggerToTable_Methods[] = {
  {"AddTriggerToTable", PyvtkSQLDatabaseSchema_AddTriggerToTable_s1, METH_VARARGS,
   "@iizz|z"},
  {"AddTriggerToTable", PyvtkSQLDatabaseSchema_AddTriggerToTable_s2, METH_VARARGS,
   "@zizz|z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSQLDatabaseSchema_AddTriggerToTable(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSQLDatabaseSchema_AddTriggerToTable_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddTriggerToTable");
  return nullptr;
}


static PyObject *
PyvtkSQLDatabaseSchema_AddOptionToTable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOptionToTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  const char *temp2 = VTK_SQL_ALLBACKENDS;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->AddOptionToTable(temp0, temp1, temp2) :
      op->vtkSQLDatabaseSchema::AddOptionToTable(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLDatabaseSchema_AddOptionToTable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOptionToTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = VTK_SQL_ALLBACKENDS;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->AddOptionToTable(temp0, temp1, temp2) :
      op->vtkSQLDatabaseSchema::AddOptionToTable(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSQLDatabaseSchema_AddOptionToTable_Methods[] = {
  {"AddOptionToTable", PyvtkSQLDatabaseSchema_AddOptionToTable_s1, METH_VARARGS,
   "@iz|z"},
  {"AddOptionToTable", PyvtkSQLDatabaseSchema_AddOptionToTable_s2, METH_VARARGS,
   "@zz|z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSQLDatabaseSchema_AddOptionToTable(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSQLDatabaseSchema_AddOptionToTable_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddOptionToTable");
  return nullptr;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetPreambleHandleFromName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreambleHandleFromName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreambleHandleFromName(temp0) :
      op->vtkSQLDatabaseSchema::GetPreambleHandleFromName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetPreambleNameFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreambleNameFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPreambleNameFromHandle(temp0) :
      op->vtkSQLDatabaseSchema::GetPreambleNameFromHandle(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetPreambleActionFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreambleActionFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPreambleActionFromHandle(temp0) :
      op->vtkSQLDatabaseSchema::GetPreambleActionFromHandle(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetPreambleBackendFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreambleBackendFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPreambleBackendFromHandle(temp0) :
      op->vtkSQLDatabaseSchema::GetPreambleBackendFromHandle(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetTableHandleFromName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableHandleFromName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTableHandleFromName(temp0) :
      op->vtkSQLDatabaseSchema::GetTableHandleFromName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetTableNameFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableNameFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTableNameFromHandle(temp0) :
      op->vtkSQLDatabaseSchema::GetTableNameFromHandle(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetIndexHandleFromName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexHandleFromName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndexHandleFromName(temp0, temp1) :
      op->vtkSQLDatabaseSchema::GetIndexHandleFromName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetIndexNameFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexNameFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIndexNameFromHandle(temp0, temp1) :
      op->vtkSQLDatabaseSchema::GetIndexNameFromHandle(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetIndexTypeFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexTypeFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndexTypeFromHandle(temp0, temp1) :
      op->vtkSQLDatabaseSchema::GetIndexTypeFromHandle(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetIndexColumnNameFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexColumnNameFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIndexColumnNameFromHandle(temp0, temp1, temp2) :
      op->vtkSQLDatabaseSchema::GetIndexColumnNameFromHandle(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetColumnHandleFromName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnHandleFromName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetColumnHandleFromName(temp0, temp1) :
      op->vtkSQLDatabaseSchema::GetColumnHandleFromName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetColumnNameFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnNameFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColumnNameFromHandle(temp0, temp1) :
      op->vtkSQLDatabaseSchema::GetColumnNameFromHandle(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetColumnTypeFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnTypeFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetColumnTypeFromHandle(temp0, temp1) :
      op->vtkSQLDatabaseSchema::GetColumnTypeFromHandle(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetColumnSizeFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnSizeFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetColumnSizeFromHandle(temp0, temp1) :
      op->vtkSQLDatabaseSchema::GetColumnSizeFromHandle(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetColumnAttributesFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnAttributesFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColumnAttributesFromHandle(temp0, temp1) :
      op->vtkSQLDatabaseSchema::GetColumnAttributesFromHandle(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetTriggerHandleFromName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriggerHandleFromName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetTriggerHandleFromName(temp0, temp1) :
      op->vtkSQLDatabaseSchema::GetTriggerHandleFromName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetTriggerNameFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriggerNameFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTriggerNameFromHandle(temp0, temp1) :
      op->vtkSQLDatabaseSchema::GetTriggerNameFromHandle(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetTriggerTypeFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriggerTypeFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetTriggerTypeFromHandle(temp0, temp1) :
      op->vtkSQLDatabaseSchema::GetTriggerTypeFromHandle(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetTriggerActionFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriggerActionFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTriggerActionFromHandle(temp0, temp1) :
      op->vtkSQLDatabaseSchema::GetTriggerActionFromHandle(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetTriggerBackendFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriggerBackendFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTriggerBackendFromHandle(temp0, temp1) :
      op->vtkSQLDatabaseSchema::GetTriggerBackendFromHandle(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetOptionTextFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOptionTextFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOptionTextFromHandle(temp0, temp1) :
      op->vtkSQLDatabaseSchema::GetOptionTextFromHandle(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetOptionBackendFromHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOptionBackendFromHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOptionBackendFromHandle(temp0, temp1) :
      op->vtkSQLDatabaseSchema::GetOptionBackendFromHandle(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkSQLDatabaseSchema::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetNumberOfPreambles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPreambles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPreambles() :
      op->vtkSQLDatabaseSchema::GetNumberOfPreambles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetNumberOfTables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTables() :
      op->vtkSQLDatabaseSchema::GetNumberOfTables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetNumberOfColumnsInTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumnsInTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColumnsInTable(temp0) :
      op->vtkSQLDatabaseSchema::GetNumberOfColumnsInTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetNumberOfIndicesInTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIndicesInTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIndicesInTable(temp0) :
      op->vtkSQLDatabaseSchema::GetNumberOfIndicesInTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetNumberOfColumnNamesInIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumnNamesInIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColumnNamesInIndex(temp0, temp1) :
      op->vtkSQLDatabaseSchema::GetNumberOfColumnNamesInIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetNumberOfTriggersInTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTriggersInTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTriggersInTable(temp0) :
      op->vtkSQLDatabaseSchema::GetNumberOfTriggersInTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetNumberOfOptionsInTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOptionsInTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfOptionsInTable(temp0) :
      op->vtkSQLDatabaseSchema::GetNumberOfOptionsInTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetName(temp0);
    }
    else
    {
      op->vtkSQLDatabaseSchema::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkSQLDatabaseSchema::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseSchema_AddTableMultipleArguments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTableMultipleArguments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseSchema *op = static_cast<vtkSQLDatabaseSchema *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->AddTableMultipleArguments(temp0) :
      op->vtkSQLDatabaseSchema::AddTableMultipleArguments(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSQLDatabaseSchema_Methods[] = {
  {"IsTypeOf", PyvtkSQLDatabaseSchema_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSQLDatabaseSchema_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSQLDatabaseSchema_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSQLDatabaseSchema\nC++: static vtkSQLDatabaseSchema *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSQLDatabaseSchema_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSQLDatabaseSchema\nC++: vtkSQLDatabaseSchema *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSQLDatabaseSchema_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSQLDatabaseSchema_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddPreamble", PyvtkSQLDatabaseSchema_AddPreamble, METH_VARARGS,
   "AddPreamble(self, preName:str, preAction:str, preBackend:str=...)\n    -> int\nC++: virtual int AddPreamble(const char *preName,\n    const char *preAction,\n    const char *preBackend=VTK_SQL_ALLBACKENDS)\n\nAdd a preamble to the schema This can be used, in particular, to\ncreate functions and/or load languages in a backend-specific\nmanner. Example usage: vtkSQLDatabaseSchema* schema =\nvtkSQLDatabaseSchema::New(); schema->SetName( \"Example\" );\nschema->AddPreamble( \"dropPLPGSQL\", \"DROP LANGUAGE IF EXISTS PLPGSQL\nCASCADE\", VTK_SQL_POSTGRESQL ); schema->AddPreamble(\n\"loadPLPGSQL\", \"CREATE LANGUAGE PLPGSQL\", VTK_SQL_POSTGRESQL );\nschema->AddPreamble( \"createsomefunction\", \"CREATE OR REPLACE\nFUNCTION somefunction() RETURNS TRIGGER AS $btable$ \" \"BEGIN \"\n\"INSERT INTO btable (somevalue) VALUES (NEW.somenmbr); \" \"RETURN\nNEW; \" \"END; $btable$ LANGUAGE PLPGSQL\", VTK_SQL_POSTGRESQL );\n"},
  {"AddTable", PyvtkSQLDatabaseSchema_AddTable, METH_VARARGS,
   "AddTable(self, tblName:str) -> int\nC++: virtual int AddTable(const char *tblName)\n\nAdd a table to the schema\n"},
  {"AddColumnToTable", PyvtkSQLDatabaseSchema_AddColumnToTable, METH_VARARGS,
   "AddColumnToTable(self, tblHandle:int, colType:int, colName:str,\n    colSize:int, colOpts:str) -> int\nC++: virtual int AddColumnToTable(int tblHandle, int colType,\n    const char *colName, int colSize, const char *colOpts)\nAddColumnToTable(self, tblName:str, colType:int, colName:str,\n    colSize:int, colAttribs:str) -> int\nC++: virtual int AddColumnToTable(const char *tblName,\n    int colType, const char *colName, int colSize,\n    const char *colAttribs)\n\nAdd a column to table.\n\n* The returned value is a column handle or -1 if an error\n  occurred.\n"},
  {"AddIndexToTable", PyvtkSQLDatabaseSchema_AddIndexToTable, METH_VARARGS,
   "AddIndexToTable(self, tblHandle:int, idxType:int, idxName:str)\n    -> int\nC++: virtual int AddIndexToTable(int tblHandle, int idxType,\n    const char *idxName)\nAddIndexToTable(self, tblName:str, idxType:int, idxName:str)\n    -> int\nC++: virtual int AddIndexToTable(const char *tblName, int idxType,\n     const char *idxName)\n\nAdd an index to table.\n\n* The returned value is an index handle or -1 if an error\n  occurred.\n"},
  {"AddColumnToIndex", PyvtkSQLDatabaseSchema_AddColumnToIndex, METH_VARARGS,
   "AddColumnToIndex(self, tblHandle:int, idxHandle:int,\n    colHandle:int) -> int\nC++: virtual int AddColumnToIndex(int tblHandle, int idxHandle,\n    int colHandle)\nAddColumnToIndex(self, tblName:str, idxName:str, colName:str)\n    -> int\nC++: virtual int AddColumnToIndex(const char *tblName,\n    const char *idxName, const char *colName)\n\nAdd a column to a table index.\n\n* The returned value is an index-column handle or -1 if an error\n  occurred.\n"},
  {"AddTriggerToTable", PyvtkSQLDatabaseSchema_AddTriggerToTable, METH_VARARGS,
   "AddTriggerToTable(self, tblHandle:int, trgType:int, trgName:str,\n    trgAction:str, trgBackend:str=...) -> int\nC++: virtual int AddTriggerToTable(int tblHandle, int trgType,\n    const char *trgName, const char *trgAction,\n    const char *trgBackend=VTK_SQL_ALLBACKENDS)\nAddTriggerToTable(self, tblName:str, trgType:int, trgName:str,\n    trgAction:str, trgBackend:str=...) -> int\nC++: virtual int AddTriggerToTable(const char *tblName,\n    int trgType, const char *trgName, const char *trgAction,\n    const char *trgBackend=VTK_SQL_ALLBACKENDS)\n\nAdd a (possibly backend-specific) trigger action to a table.\n\n* Triggers must be given unique, non-nullptr names as some\n  database backends require them.\n* The returned value is a trigger handle or -1 if an error\n  occurred.\n"},
  {"AddOptionToTable", PyvtkSQLDatabaseSchema_AddOptionToTable, METH_VARARGS,
   "AddOptionToTable(self, tblHandle:int, optText:str,\n    optBackend:str=...) -> int\nC++: virtual int AddOptionToTable(int tblHandle,\n    const char *optText,\n    const char *optBackend=VTK_SQL_ALLBACKENDS)\nAddOptionToTable(self, tblName:str, optStr:str,\n    optBackend:str=...) -> int\nC++: virtual int AddOptionToTable(const char *tblName,\n    const char *optStr,\n    const char *optBackend=VTK_SQL_ALLBACKENDS)\n\nAdd (possibly backend-specific) text to the end of a CREATE TABLE\n(...) statement.\n\n* This is most useful for specifying storage semantics of tables\n* that are specific to the backend. For example, table options\n* can be used to specify the TABLESPACE of a PostgreSQL table or\n* the ENGINE of a MySQL table.\n\n* The returned value is an option handle or -1 if an error\n  occurred.\n"},
  {"GetPreambleHandleFromName", PyvtkSQLDatabaseSchema_GetPreambleHandleFromName, METH_VARARGS,
   "GetPreambleHandleFromName(self, preName:str) -> int\nC++: int GetPreambleHandleFromName(const char *preName)\n\nGiven a preamble name, get its handle.\n"},
  {"GetPreambleNameFromHandle", PyvtkSQLDatabaseSchema_GetPreambleNameFromHandle, METH_VARARGS,
   "GetPreambleNameFromHandle(self, preHandle:int) -> str\nC++: const char *GetPreambleNameFromHandle(int preHandle)\n\nGiven a preamble handle, get its name.\n"},
  {"GetPreambleActionFromHandle", PyvtkSQLDatabaseSchema_GetPreambleActionFromHandle, METH_VARARGS,
   "GetPreambleActionFromHandle(self, preHandle:int) -> str\nC++: const char *GetPreambleActionFromHandle(int preHandle)\n\nGiven a preamble handle, get its action.\n"},
  {"GetPreambleBackendFromHandle", PyvtkSQLDatabaseSchema_GetPreambleBackendFromHandle, METH_VARARGS,
   "GetPreambleBackendFromHandle(self, preHandle:int) -> str\nC++: const char *GetPreambleBackendFromHandle(int preHandle)\n\nGiven a preamble handle, get its backend.\n"},
  {"GetTableHandleFromName", PyvtkSQLDatabaseSchema_GetTableHandleFromName, METH_VARARGS,
   "GetTableHandleFromName(self, tblName:str) -> int\nC++: int GetTableHandleFromName(const char *tblName)\n\nGiven a table name, get its handle.\n"},
  {"GetTableNameFromHandle", PyvtkSQLDatabaseSchema_GetTableNameFromHandle, METH_VARARGS,
   "GetTableNameFromHandle(self, tblHandle:int) -> str\nC++: const char *GetTableNameFromHandle(int tblHandle)\n\nGiven a table handle, get its name.\n"},
  {"GetIndexHandleFromName", PyvtkSQLDatabaseSchema_GetIndexHandleFromName, METH_VARARGS,
   "GetIndexHandleFromName(self, tblName:str, idxName:str) -> int\nC++: int GetIndexHandleFromName(const char *tblName,\n    const char *idxName)\n\nGiven the names of a table and an index, get the handle of the\nindex in this table.\n"},
  {"GetIndexNameFromHandle", PyvtkSQLDatabaseSchema_GetIndexNameFromHandle, METH_VARARGS,
   "GetIndexNameFromHandle(self, tblHandle:int, idxHandle:int) -> str\nC++: const char *GetIndexNameFromHandle(int tblHandle,\n    int idxHandle)\n\nGiven the handles of a table and an index, get the name of the\nindex.\n"},
  {"GetIndexTypeFromHandle", PyvtkSQLDatabaseSchema_GetIndexTypeFromHandle, METH_VARARGS,
   "GetIndexTypeFromHandle(self, tblHandle:int, idxHandle:int) -> int\nC++: int GetIndexTypeFromHandle(int tblHandle, int idxHandle)\n\nGiven the handles of a table and an index, get the type of the\nindex.\n"},
  {"GetIndexColumnNameFromHandle", PyvtkSQLDatabaseSchema_GetIndexColumnNameFromHandle, METH_VARARGS,
   "GetIndexColumnNameFromHandle(self, tblHandle:int, idxHandle:int,\n    cnmHandle:int) -> str\nC++: const char *GetIndexColumnNameFromHandle(int tblHandle,\n    int idxHandle, int cnmHandle)\n\nGiven the handles of a table, an index, and a column name, get\nthe column name.\n"},
  {"GetColumnHandleFromName", PyvtkSQLDatabaseSchema_GetColumnHandleFromName, METH_VARARGS,
   "GetColumnHandleFromName(self, tblName:str, colName:str) -> int\nC++: int GetColumnHandleFromName(const char *tblName,\n    const char *colName)\n\nGiven the names of a table and a column, get the handle of the\ncolumn in this table.\n"},
  {"GetColumnNameFromHandle", PyvtkSQLDatabaseSchema_GetColumnNameFromHandle, METH_VARARGS,
   "GetColumnNameFromHandle(self, tblHandle:int, colHandle:int) -> str\nC++: const char *GetColumnNameFromHandle(int tblHandle,\n    int colHandle)\n\nGiven the handles of a table and a column, get the name of the\ncolumn.\n"},
  {"GetColumnTypeFromHandle", PyvtkSQLDatabaseSchema_GetColumnTypeFromHandle, METH_VARARGS,
   "GetColumnTypeFromHandle(self, tblHandle:int, colHandle:int) -> int\nC++: int GetColumnTypeFromHandle(int tblHandle, int colHandle)\n\nGiven the handles of a table and a column, get the type of the\ncolumn.\n"},
  {"GetColumnSizeFromHandle", PyvtkSQLDatabaseSchema_GetColumnSizeFromHandle, METH_VARARGS,
   "GetColumnSizeFromHandle(self, tblHandle:int, colHandle:int) -> int\nC++: int GetColumnSizeFromHandle(int tblHandle, int colHandle)\n\nGiven the handles of a table and a column, get the size of the\ncolumn.\n"},
  {"GetColumnAttributesFromHandle", PyvtkSQLDatabaseSchema_GetColumnAttributesFromHandle, METH_VARARGS,
   "GetColumnAttributesFromHandle(self, tblHandle:int, colHandle:int)\n    -> str\nC++: const char *GetColumnAttributesFromHandle(int tblHandle,\n    int colHandle)\n\nGiven the handles of a table and a column, get the attributes of\nthe column.\n"},
  {"GetTriggerHandleFromName", PyvtkSQLDatabaseSchema_GetTriggerHandleFromName, METH_VARARGS,
   "GetTriggerHandleFromName(self, tblName:str, trgName:str) -> int\nC++: int GetTriggerHandleFromName(const char *tblName,\n    const char *trgName)\n\nGiven the names of a trigger and a table, get the handle of the\ntrigger in this table.\n"},
  {"GetTriggerNameFromHandle", PyvtkSQLDatabaseSchema_GetTriggerNameFromHandle, METH_VARARGS,
   "GetTriggerNameFromHandle(self, tblHandle:int, trgHandle:int)\n    -> str\nC++: const char *GetTriggerNameFromHandle(int tblHandle,\n    int trgHandle)\n\nGiven the handles of a table and a trigger, get the name of the\ntrigger.\n"},
  {"GetTriggerTypeFromHandle", PyvtkSQLDatabaseSchema_GetTriggerTypeFromHandle, METH_VARARGS,
   "GetTriggerTypeFromHandle(self, tblHandle:int, trgHandle:int)\n    -> int\nC++: int GetTriggerTypeFromHandle(int tblHandle, int trgHandle)\n\nGiven the handles of a table and a trigger, get the type of the\ntrigger.\n"},
  {"GetTriggerActionFromHandle", PyvtkSQLDatabaseSchema_GetTriggerActionFromHandle, METH_VARARGS,
   "GetTriggerActionFromHandle(self, tblHandle:int, trgHandle:int)\n    -> str\nC++: const char *GetTriggerActionFromHandle(int tblHandle,\n    int trgHandle)\n\nGiven the handles of a table and a trigger, get the action of the\ntrigger.\n"},
  {"GetTriggerBackendFromHandle", PyvtkSQLDatabaseSchema_GetTriggerBackendFromHandle, METH_VARARGS,
   "GetTriggerBackendFromHandle(self, tblHandle:int, trgHandle:int)\n    -> str\nC++: const char *GetTriggerBackendFromHandle(int tblHandle,\n    int trgHandle)\n\nGiven the handles of a table and a trigger, get the backend of\nthe trigger.\n"},
  {"GetOptionTextFromHandle", PyvtkSQLDatabaseSchema_GetOptionTextFromHandle, METH_VARARGS,
   "GetOptionTextFromHandle(self, tblHandle:int, optHandle:int) -> str\nC++: const char *GetOptionTextFromHandle(int tblHandle,\n    int optHandle)\n\nGiven the handles of a table and one of its options, return the\ntext of the option.\n"},
  {"GetOptionBackendFromHandle", PyvtkSQLDatabaseSchema_GetOptionBackendFromHandle, METH_VARARGS,
   "GetOptionBackendFromHandle(self, tblHandle:int, optHandle:int)\n    -> str\nC++: const char *GetOptionBackendFromHandle(int tblHandle,\n    int optHandle)\n\nGiven the handles of a table and one of its options, get the\nbackend of the option.\n"},
  {"Reset", PyvtkSQLDatabaseSchema_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nReset the schema to its initial, empty state.\n"},
  {"GetNumberOfPreambles", PyvtkSQLDatabaseSchema_GetNumberOfPreambles, METH_VARARGS,
   "GetNumberOfPreambles(self) -> int\nC++: int GetNumberOfPreambles()\n\nGet the number of preambles.\n"},
  {"GetNumberOfTables", PyvtkSQLDatabaseSchema_GetNumberOfTables, METH_VARARGS,
   "GetNumberOfTables(self) -> int\nC++: int GetNumberOfTables()\n\nGet the number of tables.\n"},
  {"GetNumberOfColumnsInTable", PyvtkSQLDatabaseSchema_GetNumberOfColumnsInTable, METH_VARARGS,
   "GetNumberOfColumnsInTable(self, tblHandle:int) -> int\nC++: int GetNumberOfColumnsInTable(int tblHandle)\n\nGet the number of columns in a particular table .\n"},
  {"GetNumberOfIndicesInTable", PyvtkSQLDatabaseSchema_GetNumberOfIndicesInTable, METH_VARARGS,
   "GetNumberOfIndicesInTable(self, tblHandle:int) -> int\nC++: int GetNumberOfIndicesInTable(int tblHandle)\n\nGet the number of indices in a particular table .\n"},
  {"GetNumberOfColumnNamesInIndex", PyvtkSQLDatabaseSchema_GetNumberOfColumnNamesInIndex, METH_VARARGS,
   "GetNumberOfColumnNamesInIndex(self, tblHandle:int, idxHandle:int)\n    -> int\nC++: int GetNumberOfColumnNamesInIndex(int tblHandle,\n    int idxHandle)\n\nGet the number of column names associated to a particular index\nin a particular table .\n"},
  {"GetNumberOfTriggersInTable", PyvtkSQLDatabaseSchema_GetNumberOfTriggersInTable, METH_VARARGS,
   "GetNumberOfTriggersInTable(self, tblHandle:int) -> int\nC++: int GetNumberOfTriggersInTable(int tblHandle)\n\nGet the number of triggers defined for a particular table.\n"},
  {"GetNumberOfOptionsInTable", PyvtkSQLDatabaseSchema_GetNumberOfOptionsInTable, METH_VARARGS,
   "GetNumberOfOptionsInTable(self, tblHandle:int) -> int\nC++: int GetNumberOfOptionsInTable(int tblHandle)\n\nGet the number of options associated with a particular table.\n"},
  {"SetName", PyvtkSQLDatabaseSchema_SetName, METH_VARARGS,
   "SetName(self, _arg:str) -> None\nC++: virtual void SetName(const char *_arg)\n\nSet/Get the name of the schema.\n"},
  {"GetName", PyvtkSQLDatabaseSchema_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: virtual char *GetName()\n\n"},
  {"AddTableMultipleArguments", PyvtkSQLDatabaseSchema_AddTableMultipleArguments, METH_VARARGS,
   "AddTableMultipleArguments(self, tblName:str) -> int\nC++: int AddTableMultipleArguments(const char *tblName, ...)\n\nAn unwrappable but useful routine to construct built-in schema.\nExample usage: int main() { vtkSQLDatabaseSchema* schema =\nvtkSQLDatabaseSchema::New(); schema->SetName( \"Example\" );\nschema->AddTableMultipleArguments( \"atable\",\nvtkSQLDatabaseSchema::COLUMN_TOKEN,\nvtkSQLDatabaseSchema::INTEGER, \"tablekey\",  0, \"\",\nvtkSQLDatabaseSchema::COLUMN_TOKEN,\nvtkSQLDatabaseSchema::VARCHAR, \"somename\", 11, \"NOT nullptr\", vtkSQLDatabaseSchema::COLUMN_TOKEN, vtkSQLDatabaseSchema::BIGINT, \n\"somenmbr\", 17, \"DEFAULT 0\", vtkSQLDatabaseSchema::INDEX_TOKEN,\nvtkSQLDatabaseSchema::PRIMARY_KEY, \"bigkey\",\nvtkSQLDatabaseSchema::INDEX_COLUMN_TOKEN, \"tablekey\",\nvtkSQLDatabaseSchema::END_INDEX_TOKEN,\nvtkSQLDatabaseSchema::INDEX_TOKEN,  vtkSQLDatabaseSchema::UNIQUE,\n\"reverselookup\", vtkSQLDatabaseSchema::INDEX_COLUMN_TOKEN,\n\"somename\", vtkSQLDatabaseSchema::INDEX_COLUMN_TOKEN, \"somenmbr\",\nvtkSQLDatabaseSchema::END_INDEX_TOKEN,\nvtkSQLDatabaseSchema::TRIGGER_TOKEN, \nvtkSQLDatabaseSchema::AFTER_INSERT, \"InsertTrigger\", \"DO\nNOTHING\", VTK_SQL_SQLITE, vtkSQLDatabaseSchema::TRIGGER_TOKEN, \nvtkSQLDatabaseSchema::AFTER_INSERT, \"InsertTrigger\", \"FOR EACH ROW EXECUTE PROCEDURE somefunction\n()\", VTK_SQL_POSTGRESQL, vtkSQLDatabaseSchema::TRIGGER_TOKEN, \nvtkSQLDatabaseSchema::AFTER_INSERT, \"InsertTrigger\", \"FOR EACH ROW INSERT INTO btable SET SomeValue =\nNEW.SomeNmbr\", VTK_SQL_MYSQL,\nvtkSQLDatabaseSchema::END_TABLE_TOKEN ); return 0; }\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSQLDatabaseSchema_Doc =
  "vtkSQLDatabaseSchema - represent an SQL database schema\n\n"
  "Superclass: vtkObject\n\n"
  "This class stores the information required to create an SQL database\n"
  "from scratch. Information on each table's columns, indices, and\n"
  "triggers is stored. You may also store an arbitrary number of\n"
  "preamble statements, intended to be executed before any tables are\n"
  "created; this provides a way to create procedures or functions that\n"
  "may be invoked as part of a trigger action. Triggers and table\n"
  "options may be specified differently for each backend database type\n"
  "you wish to support.\n\n"
  "@par Thanks: Thanks to Philippe Pebay and David Thompson from Sandia\n"
  "National Laboratories for implementing this class.\n\n"
  "@sa\n"
  "vtkSQLDatabase\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSQLDatabaseSchema_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOSQL.vtkSQLDatabaseSchema", // tp_name
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
  PyvtkSQLDatabaseSchema_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSQLDatabaseSchema_StaticNew()
{
  return vtkSQLDatabaseSchema::New();
}

PyObject *PyvtkSQLDatabaseSchema_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSQLDatabaseSchema_Type, PyvtkSQLDatabaseSchema_Methods,
    "vtkSQLDatabaseSchema",
 &PyvtkSQLDatabaseSchema_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSQLDatabaseSchema_DatabaseColumnType_Type);
  PyVTKEnum_Add(&PyvtkSQLDatabaseSchema_DatabaseColumnType_Type, "vtkSQLDatabaseSchema.DatabaseColumnType");

  o = (PyObject *)&PyvtkSQLDatabaseSchema_DatabaseColumnType_Type;
  if (PyDict_SetItemString(d, "DatabaseColumnType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkSQLDatabaseSchema_DatabaseIndexType_Type);
  PyVTKEnum_Add(&PyvtkSQLDatabaseSchema_DatabaseIndexType_Type, "vtkSQLDatabaseSchema.DatabaseIndexType");

  o = (PyObject *)&PyvtkSQLDatabaseSchema_DatabaseIndexType_Type;
  if (PyDict_SetItemString(d, "DatabaseIndexType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkSQLDatabaseSchema_DatabaseTriggerType_Type);
  PyVTKEnum_Add(&PyvtkSQLDatabaseSchema_DatabaseTriggerType_Type, "vtkSQLDatabaseSchema.DatabaseTriggerType");

  o = (PyObject *)&PyvtkSQLDatabaseSchema_DatabaseTriggerType_Type;
  if (PyDict_SetItemString(d, "DatabaseTriggerType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkSQLDatabaseSchema_VarargTokens_Type);
  PyVTKEnum_Add(&PyvtkSQLDatabaseSchema_VarargTokens_Type, "vtkSQLDatabaseSchema.VarargTokens");

  o = (PyObject *)&PyvtkSQLDatabaseSchema_VarargTokens_Type;
  if (PyDict_SetItemString(d, "VarargTokens", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 12; c++)
  {
    typedef vtkSQLDatabaseSchema::DatabaseColumnType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[12] = {
        { "SERIAL", vtkSQLDatabaseSchema::SERIAL },
        { "SMALLINT", vtkSQLDatabaseSchema::SMALLINT },
        { "INTEGER", vtkSQLDatabaseSchema::INTEGER },
        { "BIGINT", vtkSQLDatabaseSchema::BIGINT },
        { "VARCHAR", vtkSQLDatabaseSchema::VARCHAR },
        { "TEXT", vtkSQLDatabaseSchema::TEXT },
        { "REAL", vtkSQLDatabaseSchema::REAL },
        { "DOUBLE", vtkSQLDatabaseSchema::DOUBLE },
        { "BLOB", vtkSQLDatabaseSchema::BLOB },
        { "TIME", vtkSQLDatabaseSchema::TIME },
        { "DATE", vtkSQLDatabaseSchema::DATE },
        { "TIMESTAMP", vtkSQLDatabaseSchema::TIMESTAMP },
      };

    o = PyvtkSQLDatabaseSchema_DatabaseColumnType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSQLDatabaseSchema::DatabaseIndexType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "INDEX", vtkSQLDatabaseSchema::INDEX },
        { "UNIQUE", vtkSQLDatabaseSchema::UNIQUE },
        { "PRIMARY_KEY", vtkSQLDatabaseSchema::PRIMARY_KEY },
      };

    o = PyvtkSQLDatabaseSchema_DatabaseIndexType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkSQLDatabaseSchema::DatabaseTriggerType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "BEFORE_INSERT", vtkSQLDatabaseSchema::BEFORE_INSERT },
        { "AFTER_INSERT", vtkSQLDatabaseSchema::AFTER_INSERT },
        { "BEFORE_UPDATE", vtkSQLDatabaseSchema::BEFORE_UPDATE },
        { "AFTER_UPDATE", vtkSQLDatabaseSchema::AFTER_UPDATE },
        { "BEFORE_DELETE", vtkSQLDatabaseSchema::BEFORE_DELETE },
        { "AFTER_DELETE", vtkSQLDatabaseSchema::AFTER_DELETE },
      };

    o = PyvtkSQLDatabaseSchema_DatabaseTriggerType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkSQLDatabaseSchema::VarargTokens cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "COLUMN_TOKEN", vtkSQLDatabaseSchema::COLUMN_TOKEN },
        { "INDEX_TOKEN", vtkSQLDatabaseSchema::INDEX_TOKEN },
        { "INDEX_COLUMN_TOKEN", vtkSQLDatabaseSchema::INDEX_COLUMN_TOKEN },
        { "END_INDEX_TOKEN", vtkSQLDatabaseSchema::END_INDEX_TOKEN },
        { "TRIGGER_TOKEN", vtkSQLDatabaseSchema::TRIGGER_TOKEN },
        { "OPTION_TOKEN", vtkSQLDatabaseSchema::OPTION_TOKEN },
        { "END_TABLE_TOKEN", vtkSQLDatabaseSchema::END_TABLE_TOKEN },
      };

    o = PyvtkSQLDatabaseSchema_VarargTokens_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSQLDatabaseSchema(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSQLDatabaseSchema_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSQLDatabaseSchema", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyUnicode_FromString("*");
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_SQL_ALLBACKENDS", o);
    Py_DECREF(o);
  }
  o = PyUnicode_FromString("vtkMySQLDatabase");
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_SQL_MYSQL", o);
    Py_DECREF(o);
  }
  o = PyUnicode_FromString("vtkPostgreSQLDatabase");
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_SQL_POSTGRESQL", o);
    Py_DECREF(o);
  }
  o = PyUnicode_FromString("vtkSQLiteDatabase");
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_SQL_SQLITE", o);
    Py_DECREF(o);
  }
}

