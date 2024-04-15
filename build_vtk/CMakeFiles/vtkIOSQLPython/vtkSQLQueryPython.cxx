// python wrapper for vtkSQLQuery
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
#include "vtkSQLQuery.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSQLQuery(PyObject *dict); }
extern "C" { PyObject *PyvtkSQLQuery_ClassNew(); }

#ifndef DECLARED_PyvtkRowQuery_ClassNew
extern "C" { PyObject *PyvtkRowQuery_ClassNew(); }
#define DECLARED_PyvtkRowQuery_ClassNew
#endif

static PyObject *
PyvtkSQLQuery_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSQLQuery::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLQuery_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSQLQuery::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLQuery_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSQLQuery *tempr = vtkSQLQuery::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLQuery_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSQLQuery *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSQLQuery::NewInstance());

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
PyvtkSQLQuery_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSQLQuery::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLQuery_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSQLQuery::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLQuery_SetQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetQuery(temp0) :
      op->vtkSQLQuery::SetQuery(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLQuery_GetQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetQuery() :
      op->vtkSQLQuery::GetQuery());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLQuery_IsActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsActive() :
      op->vtkSQLQuery::IsActive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLQuery_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->Execute();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLQuery_BeginTransaction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginTransaction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->BeginTransaction() :
      op->vtkSQLQuery::BeginTransaction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLQuery_CommitTransaction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CommitTransaction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CommitTransaction() :
      op->vtkSQLQuery::CommitTransaction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLQuery_RollbackTransaction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RollbackTransaction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->RollbackTransaction() :
      op->vtkSQLQuery::RollbackTransaction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLQuery_GetDatabase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDatabase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSQLDatabase *tempr = (ap.IsBound() ?
      op->GetDatabase() :
      op->vtkSQLQuery::GetDatabase());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLQuery_BindParameter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->BindParameter(temp0, temp1) :
      op->vtkSQLQuery::BindParameter(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLQuery_BindParameter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  int temp0;
  long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->BindParameter(temp0, temp1) :
      op->vtkSQLQuery::BindParameter(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLQuery_BindParameter_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  int temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->BindParameter(temp0, temp1) :
      op->vtkSQLQuery::BindParameter(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLQuery_BindParameter_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->BindParameter(temp0, temp1) :
      op->vtkSQLQuery::BindParameter(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLQuery_BindParameter_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  size_t temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->BindParameter(temp0, temp1, temp2) :
      op->vtkSQLQuery::BindParameter(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLQuery_BindParameter_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  int temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->BindParameter(temp0, temp1) :
      op->vtkSQLQuery::BindParameter(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLQuery_BindParameter_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  int temp0;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    bool tempr = (ap.IsBound() ?
      op->BindParameter(temp0, *temp1) :
      op->vtkSQLQuery::BindParameter(temp0, *temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkSQLQuery_BindParameter_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  int temp0;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  size_t temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->BindParameter(temp0, temp1, temp2) :
      op->vtkSQLQuery::BindParameter(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}

static PyMethodDef PyvtkSQLQuery_BindParameter_Methods[] = {
  {"BindParameter", PyvtkSQLQuery_BindParameter_s1, METH_VARARGS,
   "@ii"},
  {"BindParameter", PyvtkSQLQuery_BindParameter_s2, METH_VARARGS,
   "@il"},
  {"BindParameter", PyvtkSQLQuery_BindParameter_s3, METH_VARARGS,
   "@ik"},
  {"BindParameter", PyvtkSQLQuery_BindParameter_s4, METH_VARARGS,
   "@id"},
  {"BindParameter", PyvtkSQLQuery_BindParameter_s5, METH_VARARGS,
   "@izK"},
  {"BindParameter", PyvtkSQLQuery_BindParameter_s6, METH_VARARGS,
   "@is"},
  {"BindParameter", PyvtkSQLQuery_BindParameter_s7, METH_VARARGS,
   "@iW vtkVariant"},
  {"BindParameter", PyvtkSQLQuery_BindParameter_s8, METH_VARARGS,
   "@ivK"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSQLQuery_BindParameter(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSQLQuery_BindParameter_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "BindParameter");
  return nullptr;
}


static PyObject *
PyvtkSQLQuery_ClearParameterBindings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearParameterBindings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->ClearParameterBindings() :
      op->vtkSQLQuery::ClearParameterBindings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLQuery_EscapeString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EscapeString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLQuery *op = static_cast<vtkSQLQuery *>(vp);

  vtkStdString temp0;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->EscapeString(temp0, temp1) :
      op->vtkSQLQuery::EscapeString(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSQLQuery_Methods[] = {
  {"IsTypeOf", PyvtkSQLQuery_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSQLQuery_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSQLQuery_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSQLQuery\nC++: static vtkSQLQuery *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSQLQuery_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSQLQuery\nC++: vtkSQLQuery *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSQLQuery_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSQLQuery_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetQuery", PyvtkSQLQuery_SetQuery, METH_VARARGS,
   "SetQuery(self, query:str) -> bool\nC++: virtual bool SetQuery(const char *query)\n\nThe query string to be executed.  Since some databases will\nprocess the query string as soon as it's set, this method returns\na boolean to indicate success or failure.\n"},
  {"GetQuery", PyvtkSQLQuery_GetQuery, METH_VARARGS,
   "GetQuery(self) -> str\nC++: virtual const char *GetQuery()\n\n"},
  {"IsActive", PyvtkSQLQuery_IsActive, METH_VARARGS,
   "IsActive(self) -> bool\nC++: bool IsActive() override;\n\nReturn true if the query is active (i.e. execution was successful\nand results are ready to be fetched).  Returns false on error or\ninactive query.\n"},
  {"Execute", PyvtkSQLQuery_Execute, METH_VARARGS,
   "Execute(self) -> bool\nC++: bool Execute() override = 0;\n\nExecute the query.  This must be performed before any field name\nor data access functions are used.\n"},
  {"BeginTransaction", PyvtkSQLQuery_BeginTransaction, METH_VARARGS,
   "BeginTransaction(self) -> bool\nC++: virtual bool BeginTransaction()\n\nBegin, commit, or roll back a transaction.  If the underlying\ndatabase does not support transactions these calls will do\nnothing.\n"},
  {"CommitTransaction", PyvtkSQLQuery_CommitTransaction, METH_VARARGS,
   "CommitTransaction(self) -> bool\nC++: virtual bool CommitTransaction()\n\n"},
  {"RollbackTransaction", PyvtkSQLQuery_RollbackTransaction, METH_VARARGS,
   "RollbackTransaction(self) -> bool\nC++: virtual bool RollbackTransaction()\n\n"},
  {"GetDatabase", PyvtkSQLQuery_GetDatabase, METH_VARARGS,
   "GetDatabase(self) -> vtkSQLDatabase\nC++: virtual vtkSQLDatabase *GetDatabase()\n\nReturn the database associated with the query.\n"},
  {"BindParameter", PyvtkSQLQuery_BindParameter, METH_VARARGS,
   "BindParameter(self, index:int, value:int) -> bool\nC++: virtual bool BindParameter(int index, int value)\nBindParameter(self, index:int, value:int) -> bool\nC++: virtual bool BindParameter(int index, long value)\nBindParameter(self, index:int, value:int) -> bool\nC++: virtual bool BindParameter(int index, long long value)\nBindParameter(self, index:int, value:float) -> bool\nC++: virtual bool BindParameter(int index, double value)\nBindParameter(self, index:int, stringValue:str, length:int)\n    -> bool\nC++: virtual bool BindParameter(int index,\n    const char *stringValue, size_t length)\nBindParameter(self, index:int, string:str) -> bool\nC++: virtual bool BindParameter(int index,\n    const vtkStdString &string)\nBindParameter(self, index:int, var:vtkVariant) -> bool\nC++: virtual bool BindParameter(int index, vtkVariant var)\nBindParameter(self, index:int, data:Pointer, length:int) -> bool\nC++: virtual bool BindParameter(int index, const void *data,\n    size_t length)\n\n"},
  {"ClearParameterBindings", PyvtkSQLQuery_ClearParameterBindings, METH_VARARGS,
   "ClearParameterBindings(self) -> bool\nC++: virtual bool ClearParameterBindings()\n\nReset all parameter bindings to nullptr.\n"},
  {"EscapeString", PyvtkSQLQuery_EscapeString, METH_VARARGS,
   "EscapeString(self, s:str, addSurroundingQuotes:bool=True) -> str\nC++: virtual vtkStdString EscapeString(vtkStdString s,\n    bool addSurroundingQuotes=true)\n\nEscape a string for inclusion into an SQL query. If\naddSurroundingQuotes is true, then quotation marks appropriate to\nthe backend database will be added to enclose the escaped string.\nThis argument defaults to true.\n\n* A default, simple-minded implementation is provided for\n* database backends that do not provde a way to escape\n* strings for use inside queries.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSQLQuery_Doc =
  "vtkSQLQuery - executes an sql query and retrieves results\n\n"
  "Superclass: vtkRowQuery\n\n"
  "The abstract superclass of SQL query classes.  Instances of\n"
  "subclasses of vtkSQLQuery are created using the GetQueryInstance()\n"
  "function in vtkSQLDatabase.  To implement a query connection for a\n"
  "new database type, subclass both vtkSQLDatabase and vtkSQLQuery, and\n"
  "implement the required functions.  For the query class, this involves\n"
  "the following:\n\n"
  "Execute() - Execute the query on the database.  No results need to be\n"
  "            retrieved at this point, unless you are performing\n"
  "caching.\n\n"
  "GetNumberOfFields() - After Execute() is performed, returns the\n"
  "number\n"
  "                      of fields in the query results.\n\n"
  "GetFieldName() - The name of the field at an index.\n\n"
  "GetFieldType() - The data type of the field at an index.\n\n"
  "NextRow() - Advances the query results by one row, and returns\n"
  "whether\n"
  "            there are more rows left in the query.\n\n"
  "DataValue() - Extract a single data value from the current row.\n\n"
  "Begin/Rollback/CommitTransaction() - These methods are optional but\n"
  "recommended if the database supports transactions.\n\n"
  "@par Thanks: Thanks to Andrew Wilson from Sandia National\n"
  "Laboratories for his work on the database classes.\n\n"
  "@sa\n"
  "vtkSQLDatabase\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSQLQuery_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOSQL.vtkSQLQuery", // tp_name
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
  PyvtkSQLQuery_Doc, // tp_doc
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

PyObject *PyvtkSQLQuery_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSQLQuery_Type, PyvtkSQLQuery_Methods,
    "vtkSQLQuery",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkRowQuery_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSQLQuery(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSQLQuery_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSQLQuery", o) != 0)
  {
    Py_DECREF(o);
  }

}

