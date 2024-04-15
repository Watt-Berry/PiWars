// python wrapper for vtkSQLiteDatabase
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
#include "vtkSQLiteDatabase.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSQLiteDatabase(PyObject *dict); }
extern "C" { PyObject *PyvtkSQLiteDatabase_ClassNew(); }

#ifndef DECLARED_PyvtkSQLDatabase_ClassNew
extern "C" { PyObject *PyvtkSQLDatabase_ClassNew(); }
#define DECLARED_PyvtkSQLDatabase_ClassNew
#endif

static PyObject *
PyvtkSQLiteDatabase_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSQLiteDatabase::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSQLiteDatabase::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSQLiteDatabase *tempr = vtkSQLiteDatabase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSQLiteDatabase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSQLiteDatabase::NewInstance());

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
PyvtkSQLiteDatabase_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSQLiteDatabase::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSQLiteDatabase::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_Open_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->Open(temp0) :
      op->vtkSQLiteDatabase::Open(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLiteDatabase_Open_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->Open(temp0, temp1) :
      op->vtkSQLiteDatabase::Open(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLiteDatabase_Open(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSQLiteDatabase_Open_s1(self, args);
    case 2:
      return PyvtkSQLiteDatabase_Open_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Open");
  return nullptr;
}


static PyObject *
PyvtkSQLiteDatabase_Close(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Close");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Close();
    }
    else
    {
      op->vtkSQLiteDatabase::Close();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_IsOpen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOpen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsOpen() :
      op->vtkSQLiteDatabase::IsOpen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_GetQueryInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQueryInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSQLQuery *tempr = (ap.IsBound() ?
      op->GetQueryInstance() :
      op->vtkSQLiteDatabase::GetQueryInstance());

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
PyvtkSQLiteDatabase_GetTables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetTables() :
      op->vtkSQLiteDatabase::GetTables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_GetRecord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetRecord(temp0) :
      op->vtkSQLiteDatabase::GetRecord(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_IsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSupported(temp0) :
      op->vtkSQLiteDatabase::IsSupported(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_HasError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasError() :
      op->vtkSQLiteDatabase::HasError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_GetLastErrorText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastErrorText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLastErrorText() :
      op->vtkSQLiteDatabase::GetLastErrorText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_GetDatabaseType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDatabaseType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDatabaseType() :
      op->vtkSQLiteDatabase::GetDatabaseType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_GetDatabaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDatabaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDatabaseFileName() :
      op->vtkSQLiteDatabase::GetDatabaseFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_SetDatabaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDatabaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDatabaseFileName(temp0);
    }
    else
    {
      op->vtkSQLiteDatabase::SetDatabaseFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_GetURL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetURL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetURL() :
      op->vtkSQLiteDatabase::GetURL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteDatabase_GetColumnSpecification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnSpecification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteDatabase *op = static_cast<vtkSQLiteDatabase *>(vp);

  vtkSQLDatabaseSchema *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSQLDatabaseSchema") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetColumnSpecification(temp0, temp1, temp2) :
      op->vtkSQLiteDatabase::GetColumnSpecification(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSQLiteDatabase_Methods[] = {
  {"IsTypeOf", PyvtkSQLiteDatabase_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSQLiteDatabase_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSQLiteDatabase_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSQLiteDatabase\nC++: static vtkSQLiteDatabase *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSQLiteDatabase_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSQLiteDatabase\nC++: vtkSQLiteDatabase *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSQLiteDatabase_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSQLiteDatabase_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Open", PyvtkSQLiteDatabase_Open, METH_VARARGS,
   "Open(self, password:str) -> bool\nC++: bool Open(const char *password) override;\nOpen(self, password:str, mode:int) -> bool\nC++: bool Open(const char *password, int mode)\n\nOpen a new connection to the database.  You need to set the\nfilename before calling this function.  Returns true if the\ndatabase was opened successfully; false otherwise.\n- USE_EXISTING (default) - Fail if the file does not exist.\n- USE_EXISTING_OR_CREATE - Create a new file if necessary.\n- CREATE_OR_CLEAR - Create new or clear existing file.\n- CREATE - Create new, fail if file exists.\n"},
  {"Close", PyvtkSQLiteDatabase_Close, METH_VARARGS,
   "Close(self) -> None\nC++: void Close() override;\n\nClose the connection to the database.\n"},
  {"IsOpen", PyvtkSQLiteDatabase_IsOpen, METH_VARARGS,
   "IsOpen(self) -> bool\nC++: bool IsOpen() override;\n\nReturn whether the database has an open connection\n"},
  {"GetQueryInstance", PyvtkSQLiteDatabase_GetQueryInstance, METH_VARARGS,
   "GetQueryInstance(self) -> vtkSQLQuery\nC++: vtkSQLQuery *GetQueryInstance() override;\n\nReturn an empty query on this database.\n"},
  {"GetTables", PyvtkSQLiteDatabase_GetTables, METH_VARARGS,
   "GetTables(self) -> vtkStringArray\nC++: vtkStringArray *GetTables() override;\n\nGet the list of tables from the database\n"},
  {"GetRecord", PyvtkSQLiteDatabase_GetRecord, METH_VARARGS,
   "GetRecord(self, table:str) -> vtkStringArray\nC++: vtkStringArray *GetRecord(const char *table) override;\n\nGet the list of fields for a particular table\n"},
  {"IsSupported", PyvtkSQLiteDatabase_IsSupported, METH_VARARGS,
   "IsSupported(self, feature:int) -> bool\nC++: bool IsSupported(int feature) override;\n\nReturn whether a feature is supported by the database.\n"},
  {"HasError", PyvtkSQLiteDatabase_HasError, METH_VARARGS,
   "HasError(self) -> bool\nC++: bool HasError() override;\n\nDid the last operation generate an error\n"},
  {"GetLastErrorText", PyvtkSQLiteDatabase_GetLastErrorText, METH_VARARGS,
   "GetLastErrorText(self) -> str\nC++: const char *GetLastErrorText() override;\n\nGet the last error text from the database\n"},
  {"GetDatabaseType", PyvtkSQLiteDatabase_GetDatabaseType, METH_VARARGS,
   "GetDatabaseType(self) -> str\nC++: const char *GetDatabaseType() override;\n\nString representing database type (e.g. \"sqlite\").\n"},
  {"GetDatabaseFileName", PyvtkSQLiteDatabase_GetDatabaseFileName, METH_VARARGS,
   "GetDatabaseFileName(self) -> str\nC++: virtual char *GetDatabaseFileName()\n\nString representing the database filename.\n"},
  {"SetDatabaseFileName", PyvtkSQLiteDatabase_SetDatabaseFileName, METH_VARARGS,
   "SetDatabaseFileName(self, _arg:str) -> None\nC++: virtual void SetDatabaseFileName(const char *_arg)\n\n"},
  {"GetURL", PyvtkSQLiteDatabase_GetURL, METH_VARARGS,
   "GetURL(self) -> str\nC++: vtkStdString GetURL() override;\n\nGet the URL of the database.\n"},
  {"GetColumnSpecification", PyvtkSQLiteDatabase_GetColumnSpecification, METH_VARARGS,
   "GetColumnSpecification(self, schema:vtkSQLDatabaseSchema,\n    tblHandle:int, colHandle:int) -> str\nC++: vtkStdString GetColumnSpecification(\n    vtkSQLDatabaseSchema *schema, int tblHandle, int colHandle)\n    override;\n\nReturn the SQL string with the syntax to create a column inside a \"CREATE\nTABLE\" SQL statement. NB: this method implements the\nSQLite-specific syntax:<column name> <column type> <column\nattributes>\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSQLiteDatabase_Doc =
  "vtkSQLiteDatabase - maintain a connection to an SQLite database\n\n"
  "Superclass: vtkSQLDatabase\n\n"
  "SQLite (http://www.sqlite.org) is a public-domain SQL database\n"
  "written in C++.  It's small, fast, and can be easily embedded inside\n"
  "other applications.  Its databases are stored in files.\n\n"
  "This class provides a VTK interface to SQLite.  You do not need to\n"
  "download any external libraries: we include a copy of SQLite 3.3.16\n"
  "in VTK/Utilities/vtksqlite.\n\n"
  "If you want to open a database that stays in memory and never gets\n"
  "written to disk, pass in the URL sqlite://:memory:; otherwise,\n"
  "specify the file path by passing the URL sqlite://<file_path>.\n\n"
  "@par Thanks: Thanks to Andrew Wilson and Philippe Pebay from Sandia\n"
  "National Laboratories for implementing this class.\n\n"
  "@sa\n"
  "vtkSQLiteQuery\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSQLiteDatabase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOSQL.vtkSQLiteDatabase", // tp_name
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
  PyvtkSQLiteDatabase_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSQLiteDatabase_StaticNew()
{
  return vtkSQLiteDatabase::New();
}

PyObject *PyvtkSQLiteDatabase_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSQLiteDatabase_Type, PyvtkSQLiteDatabase_Methods,
    "vtkSQLiteDatabase",
 &PyvtkSQLiteDatabase_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkSQLDatabase_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "USE_EXISTING", vtkSQLiteDatabase::USE_EXISTING },
        { "USE_EXISTING_OR_CREATE", vtkSQLiteDatabase::USE_EXISTING_OR_CREATE },
        { "CREATE_OR_CLEAR", vtkSQLiteDatabase::CREATE_OR_CLEAR },
        { "CREATE", vtkSQLiteDatabase::CREATE },
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

void PyVTKAddFile_vtkSQLiteDatabase(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSQLiteDatabase_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSQLiteDatabase", o) != 0)
  {
    Py_DECREF(o);
  }

}

