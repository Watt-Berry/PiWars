// python wrapper for vtkSQLDatabase
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
#include "vtkSQLDatabase.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSQLDatabase(PyObject *dict); }
extern "C" { PyObject *PyvtkSQLDatabase_ClassNew(); }


static PyObject *
PyvtkSQLDatabase_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSQLDatabase::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSQLDatabase::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSQLDatabase *tempr = vtkSQLDatabase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSQLDatabase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSQLDatabase::NewInstance());

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
PyvtkSQLDatabase_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSQLDatabase::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSQLDatabase::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_Open(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = op->Open(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_Close(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Close");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Close();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_IsOpen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOpen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->IsOpen();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetQueryInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQueryInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkSQLQuery *tempr = op->GetQueryInstance();

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
PyvtkSQLDatabase_HasError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->HasError();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetLastErrorText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastErrorText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetLastErrorText();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetDatabaseType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDatabaseType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetDatabaseType();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetTables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = op->GetTables();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetRecord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStringArray *tempr = op->GetRecord(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_IsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSupported(temp0) :
      op->vtkSQLDatabase::IsSupported(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetURL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetURL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkStdString tempr = op->GetURL();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetTablePreamble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTablePreamble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTablePreamble(temp0) :
      op->vtkSQLDatabase::GetTablePreamble(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetColumnSpecification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnSpecification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

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
      op->vtkSQLDatabase::GetColumnSpecification(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetIndexSpecification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexSpecification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  vtkSQLDatabaseSchema *temp0 = nullptr;
  int temp1;
  int temp2;
  bool temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSQLDatabaseSchema") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetIndexSpecification(temp0, temp1, temp2, temp3) :
      op->vtkSQLDatabase::GetIndexSpecification(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_GetTriggerSpecification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriggerSpecification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

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
      op->GetTriggerSpecification(temp0, temp1, temp2) :
      op->vtkSQLDatabase::GetTriggerSpecification(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_CreateFromURL(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateFromURL");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSQLDatabase *tempr = vtkSQLDatabase::CreateFromURL(temp0);

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
PyvtkSQLDatabase_EffectSchema(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EffectSchema");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabase *op = static_cast<vtkSQLDatabase *>(vp);

  vtkSQLDatabaseSchema *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSQLDatabaseSchema") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->EffectSchema(temp0, temp1) :
      op->vtkSQLDatabase::EffectSchema(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_UnRegisterAllCreateFromURLCallbacks(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UnRegisterAllCreateFromURLCallbacks");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSQLDatabase::UnRegisterAllCreateFromURLCallbacks();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabase_DATABASE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DATABASE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationObjectBaseKey *tempr = vtkSQLDatabase::DATABASE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSQLDatabase_Methods[] = {
  {"IsTypeOf", PyvtkSQLDatabase_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSQLDatabase_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSQLDatabase_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSQLDatabase\nC++: static vtkSQLDatabase *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSQLDatabase_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSQLDatabase\nC++: vtkSQLDatabase *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSQLDatabase_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSQLDatabase_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Open", PyvtkSQLDatabase_Open, METH_VARARGS,
   "Open(self, password:str) -> bool\nC++: virtual bool Open(const char *password)\n\nOpen a new connection to the database. You need to set up any\ndatabase parameters before calling this function. For database\nconnections that do not require a password, pass an empty string.\nReturns true is the database was opened successfully, and false\notherwise.\n"},
  {"Close", PyvtkSQLDatabase_Close, METH_VARARGS,
   "Close(self) -> None\nC++: virtual void Close()\n\nClose the connection to the database.\n"},
  {"IsOpen", PyvtkSQLDatabase_IsOpen, METH_VARARGS,
   "IsOpen(self) -> bool\nC++: virtual bool IsOpen()\n\nReturn whether the database has an open connection.\n"},
  {"GetQueryInstance", PyvtkSQLDatabase_GetQueryInstance, METH_VARARGS,
   "GetQueryInstance(self) -> vtkSQLQuery\nC++: virtual vtkSQLQuery *GetQueryInstance()\n\nReturn an empty query on this database.\n"},
  {"HasError", PyvtkSQLDatabase_HasError, METH_VARARGS,
   "HasError(self) -> bool\nC++: virtual bool HasError()\n\nDid the last operation generate an error\n"},
  {"GetLastErrorText", PyvtkSQLDatabase_GetLastErrorText, METH_VARARGS,
   "GetLastErrorText(self) -> str\nC++: virtual const char *GetLastErrorText()\n\nGet the last error text from the database I'm using const so that\npeople do NOT use the standard vtkGetStringMacro in their\nimplementation, because 99% of the time that will not be the\ncorrect thing to do...\n"},
  {"GetDatabaseType", PyvtkSQLDatabase_GetDatabaseType, METH_VARARGS,
   "GetDatabaseType(self) -> str\nC++: virtual const char *GetDatabaseType()\n\nGet the type of the database (e.g. mysql, psql,..).\n"},
  {"GetTables", PyvtkSQLDatabase_GetTables, METH_VARARGS,
   "GetTables(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetTables()\n\nGet the list of tables from the database.\n"},
  {"GetRecord", PyvtkSQLDatabase_GetRecord, METH_VARARGS,
   "GetRecord(self, table:str) -> vtkStringArray\nC++: virtual vtkStringArray *GetRecord(const char *table)\n\nGet the list of fields for a particular table.\n"},
  {"IsSupported", PyvtkSQLDatabase_IsSupported, METH_VARARGS,
   "IsSupported(self, feature:int) -> bool\nC++: virtual bool IsSupported(int feature)\n\nReturn whether a feature is supported by the database.\n"},
  {"GetURL", PyvtkSQLDatabase_GetURL, METH_VARARGS,
   "GetURL(self) -> str\nC++: virtual vtkStdString GetURL()\n\nGet the URL of the database.\n"},
  {"GetTablePreamble", PyvtkSQLDatabase_GetTablePreamble, METH_VARARGS,
   "GetTablePreamble(self, __a:bool) -> str\nC++: virtual vtkStdString GetTablePreamble(bool)\n\nReturn the SQL string with the syntax of the preamble following a \"CREATE\nTABLE\" SQL statement. NB: by default, this method returns an\nempty string. It must be overwritten for those SQL backends which\nallow such preambles such as, e.g., MySQL.\n"},
  {"GetColumnSpecification", PyvtkSQLDatabase_GetColumnSpecification, METH_VARARGS,
   "GetColumnSpecification(self, schema:vtkSQLDatabaseSchema,\n    tblHandle:int, colHandle:int) -> str\nC++: virtual vtkStdString GetColumnSpecification(\n    vtkSQLDatabaseSchema *schema, int tblHandle, int colHandle)\n\nReturn the SQL string with the syntax to create a column inside a \"CREATE\nTABLE\" SQL statement. NB: this method implements the following\nminimally-portable syntax:<column name> <column type> <column\nattributes>\nIt must be overwritten for those SQL backends which have a\ndifferent syntax such as, e.g., MySQL.\n"},
  {"GetIndexSpecification", PyvtkSQLDatabase_GetIndexSpecification, METH_VARARGS,
   "GetIndexSpecification(self, schema:vtkSQLDatabaseSchema,\n    tblHandle:int, idxHandle:int, skipped:bool) -> str\nC++: virtual vtkStdString GetIndexSpecification(\n    vtkSQLDatabaseSchema *schema, int tblHandle, int idxHandle,\n    bool &skipped)\n\nReturn the SQL string with the syntax to create an index inside a \"CREATE\nTABLE\" SQL statement. NB1: this method implements the following\nminimally-portable syntax:<index type> [<index name>] (<column\nname 1>,... )\nIt must be overwritten for those SQL backends which have a\ndifferent syntax such as, e.g., MySQL. NB2: this method does not\nassume that INDEX creation is supported within a CREATE TABLE\nstatement. Therefore, should such an INDEX arise in the schema, a\nCREATE INDEX statement is returned and skipped is set to true.\nOtherwise, skipped will always be returned false.\n"},
  {"GetTriggerSpecification", PyvtkSQLDatabase_GetTriggerSpecification, METH_VARARGS,
   "GetTriggerSpecification(self, schema:vtkSQLDatabaseSchema,\n    tblHandle:int, trgHandle:int) -> str\nC++: virtual vtkStdString GetTriggerSpecification(\n    vtkSQLDatabaseSchema *schema, int tblHandle, int trgHandle)\n\nReturn the SQL string with the syntax to create a trigger using a \"CREATE\nTRIGGER\" SQL statement. NB1: support is contingent on\nVTK_FEATURE_TRIGGERS being recognized as a supported feature. Not\nall backends (e.g., SQLite) support it. NB2: this method\nimplements the following minimally-portable syntax:<trigger name>\n{BEFORE | AFTER} ON <table name> FOR EACH ROW <trigger action>\nIt must be overwritten for those SQL backends which have a\ndifferent syntax such as, e.g., PostgreSQL.\n"},
  {"CreateFromURL", PyvtkSQLDatabase_CreateFromURL, METH_VARARGS,
   "CreateFromURL(URL:str) -> vtkSQLDatabase\nC++: static vtkSQLDatabase *CreateFromURL(const char *URL)\n\nCreate a the proper subclass given a URL. The URL format for SQL\ndatabases is a true URL of the form:\n'protocol://'[[username[':'password]'@']hostname[':'port]]'/'[dbna\nme] .\n"},
  {"EffectSchema", PyvtkSQLDatabase_EffectSchema, METH_VARARGS,
   "EffectSchema(self, __a:vtkSQLDatabaseSchema,\n    dropIfExists:bool=False) -> bool\nC++: virtual bool EffectSchema(vtkSQLDatabaseSchema *,\n    bool dropIfExists=false)\n\nEffect a database schema.\n"},
  {"UnRegisterAllCreateFromURLCallbacks", PyvtkSQLDatabase_UnRegisterAllCreateFromURLCallbacks, METH_VARARGS,
   "UnRegisterAllCreateFromURLCallbacks() -> None\nC++: static void UnRegisterAllCreateFromURLCallbacks()\n\n"},
  {"DATABASE", PyvtkSQLDatabase_DATABASE, METH_VARARGS,
   "DATABASE() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *DATABASE()\n\nStores the database class pointer as an information key. This is\ncurrently used to store database pointers as part of 'data on\ndemand' data objects. For example: The application may have a\ntable/tree/whatever of documents, the data structure is storing\nthe meta-data but not the full text. Further down the pipeline\nalgorithms or views may want to retrieve additional information\n(full text)for specific documents.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSQLDatabase_Doc =
  "vtkSQLDatabase - maintain a connection to an sql database\n\n"
  "Superclass: vtkObject\n\n"
  "Abstract base class for all SQL database connection classes. Manages\n"
  "a connection to the database, and is responsible for creating\n"
  "instances of the associated vtkSQLQuery objects associated with this\n"
  "class in order to perform execute queries on the database. To allow\n"
  "connections to a new type of database, create both a subclass of this\n"
  "class and vtkSQLQuery, and implement the required functions:\n\n"
  "Open() - open the database connection, if possible. Close() - close\n"
  "the connection. GetQueryInstance() - create and return an instance of\n"
  "the vtkSQLQuery\n"
  "                     subclass associated with the database type.\n\n"
  "The subclass should also provide API to set connection parameters.\n\n"
  "This class also provides the function EffectSchema to transform a\n"
  "database schema into a SQL database.\n\n"
  "@par Thanks: Thanks to Andrew Wilson from Sandia National\n"
  "Laboratories for his work on the database classes and for the SQLite\n"
  "example. Thanks to David Thompson and Philippe Pebay from Sandia\n"
  "National Laboratories for implementing this class.\n\n"
  "@sa\n"
  "vtkSQLQuery vtkSQLDatabaseSchema\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSQLDatabase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOSQL.vtkSQLDatabase", // tp_name
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
  PyvtkSQLDatabase_Doc, // tp_doc
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

PyObject *PyvtkSQLDatabase_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSQLDatabase_Type, PyvtkSQLDatabase_Methods,
    "vtkSQLDatabase",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSQLDatabase(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSQLDatabase_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSQLDatabase", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 11; c++)
  {
    static const struct { const char *name; int value; }
      constants[11] = {
        { "VTK_SQL_FEATURE_TRANSACTIONS", 1000 },
        { "VTK_SQL_FEATURE_QUERY_SIZE", 1001 },
        { "VTK_SQL_FEATURE_BLOB", 1002 },
        { "VTK_SQL_FEATURE_UNICODE", 1003 },
        { "VTK_SQL_FEATURE_PREPARED_QUERIES", 1004 },
        { "VTK_SQL_FEATURE_NAMED_PLACEHOLDERS", 1005 },
        { "VTK_SQL_FEATURE_POSITIONAL_PLACEHOLDERS", 1006 },
        { "VTK_SQL_FEATURE_LAST_INSERT_ID", 1007 },
        { "VTK_SQL_FEATURE_BATCH_OPERATIONS", 1008 },
        { "VTK_SQL_FEATURE_TRIGGERS", 1009 },
        { "VTK_SQL_DEFAULT_COLUMN_SIZE", 32 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

