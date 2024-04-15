// python wrapper for vtkDatabaseToTableReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDatabaseToTableReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDatabaseToTableReader(PyObject *dict); }
extern "C" { PyObject *PyvtkDatabaseToTableReader_ClassNew(); }


static PyObject *
PyvtkDatabaseToTableReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDatabaseToTableReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDatabaseToTableReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDatabaseToTableReader *op = static_cast<vtkDatabaseToTableReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDatabaseToTableReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDatabaseToTableReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDatabaseToTableReader *tempr = vtkDatabaseToTableReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDatabaseToTableReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDatabaseToTableReader *op = static_cast<vtkDatabaseToTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDatabaseToTableReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDatabaseToTableReader::NewInstance());

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
PyvtkDatabaseToTableReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDatabaseToTableReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDatabaseToTableReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDatabaseToTableReader *op = static_cast<vtkDatabaseToTableReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDatabaseToTableReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDatabaseToTableReader_SetDatabase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDatabase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDatabaseToTableReader *op = static_cast<vtkDatabaseToTableReader *>(vp);

  vtkSQLDatabase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSQLDatabase"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetDatabase(temp0) :
      op->vtkDatabaseToTableReader::SetDatabase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDatabaseToTableReader_SetTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDatabaseToTableReader *op = static_cast<vtkDatabaseToTableReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetTableName(temp0) :
      op->vtkDatabaseToTableReader::SetTableName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDatabaseToTableReader_CheckIfTableExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckIfTableExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDatabaseToTableReader *op = static_cast<vtkDatabaseToTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CheckIfTableExists() :
      op->vtkDatabaseToTableReader::CheckIfTableExists());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDatabaseToTableReader_GetDatabase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDatabase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDatabaseToTableReader *op = static_cast<vtkDatabaseToTableReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSQLDatabase *tempr = (ap.IsBound() ?
      op->GetDatabase() :
      op->vtkDatabaseToTableReader::GetDatabase());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDatabaseToTableReader_Methods[] = {
  {"IsTypeOf", PyvtkDatabaseToTableReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDatabaseToTableReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDatabaseToTableReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDatabaseToTableReader\nC++: static vtkDatabaseToTableReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDatabaseToTableReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDatabaseToTableReader\nC++: vtkDatabaseToTableReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDatabaseToTableReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDatabaseToTableReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDatabase", PyvtkDatabaseToTableReader_SetDatabase, METH_VARARGS,
   "SetDatabase(self, db:vtkSQLDatabase) -> bool\nC++: bool SetDatabase(vtkSQLDatabase *db)\n\nSet the database associated with this reader\n"},
  {"SetTableName", PyvtkDatabaseToTableReader_SetTableName, METH_VARARGS,
   "SetTableName(self, name:str) -> bool\nC++: bool SetTableName(const char *name)\n\nSet the name of the table that you'd like to convert to a\nvtkTable Returns false if the specified table does not exist in\nthe database.\n"},
  {"CheckIfTableExists", PyvtkDatabaseToTableReader_CheckIfTableExists, METH_VARARGS,
   "CheckIfTableExists(self) -> bool\nC++: bool CheckIfTableExists()\n\nCheck if the currently specified table name exists in the\ndatabase.\n"},
  {"GetDatabase", PyvtkDatabaseToTableReader_GetDatabase, METH_VARARGS,
   "GetDatabase(self) -> vtkSQLDatabase\nC++: vtkSQLDatabase *GetDatabase()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDatabaseToTableReader_Doc =
  "vtkDatabaseToTableReader - Read an SQL table as a vtkTable\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkDatabaseToTableReader reads a table from an SQL database,\n"
  "outputting it as a vtkTable.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDatabaseToTableReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOSQL.vtkDatabaseToTableReader", // tp_name
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
  PyvtkDatabaseToTableReader_Doc, // tp_doc
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

PyObject *PyvtkDatabaseToTableReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDatabaseToTableReader_Type, PyvtkDatabaseToTableReader_Methods,
    "vtkDatabaseToTableReader",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDatabaseToTableReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDatabaseToTableReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDatabaseToTableReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

