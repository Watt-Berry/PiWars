// python wrapper for vtkSQLiteQuery
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
#include "vtkSQLiteQuery.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSQLiteQuery(PyObject *dict); }
extern "C" { PyObject *PyvtkSQLiteQuery_ClassNew(); }

#ifndef DECLARED_PyvtkSQLQuery_ClassNew
extern "C" { PyObject *PyvtkSQLQuery_ClassNew(); }
#define DECLARED_PyvtkSQLQuery_ClassNew
#endif

static PyObject *
PyvtkSQLiteQuery_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSQLiteQuery::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSQLiteQuery::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSQLiteQuery *tempr = vtkSQLiteQuery::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSQLiteQuery *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSQLiteQuery::NewInstance());

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
PyvtkSQLiteQuery_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSQLiteQuery::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSQLiteQuery::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_SetQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetQuery(temp0) :
      op->vtkSQLiteQuery::SetQuery(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Execute() :
      op->vtkSQLiteQuery::Execute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_GetNumberOfFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFields() :
      op->vtkSQLiteQuery::GetNumberOfFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_GetFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFieldName(temp0) :
      op->vtkSQLiteQuery::GetFieldName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldType(temp0) :
      op->vtkSQLiteQuery::GetFieldType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_NextRow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NextRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->NextRow() :
      op->vtkSQLiteQuery::NextRow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_HasError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasError() :
      op->vtkSQLiteQuery::HasError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_BeginTransaction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginTransaction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->BeginTransaction() :
      op->vtkSQLiteQuery::BeginTransaction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_RollbackTransaction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RollbackTransaction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->RollbackTransaction() :
      op->vtkSQLiteQuery::RollbackTransaction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_CommitTransaction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CommitTransaction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CommitTransaction() :
      op->vtkSQLiteQuery::CommitTransaction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_DataValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->DataValue(temp0) :
      op->vtkSQLiteQuery::DataValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_GetLastErrorText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastErrorText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLastErrorText() :
      op->vtkSQLiteQuery::GetLastErrorText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLiteQuery_BindParameter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->BindParameter(temp0, temp1) :
      op->vtkSQLiteQuery::BindParameter(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLiteQuery_BindParameter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  int temp0;
  long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->BindParameter(temp0, temp1) :
      op->vtkSQLiteQuery::BindParameter(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLiteQuery_BindParameter_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  int temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->BindParameter(temp0, temp1) :
      op->vtkSQLiteQuery::BindParameter(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLiteQuery_BindParameter_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->BindParameter(temp0, temp1) :
      op->vtkSQLiteQuery::BindParameter(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLiteQuery_BindParameter_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      op->vtkSQLiteQuery::BindParameter(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLiteQuery_BindParameter_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  int temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->BindParameter(temp0, temp1) :
      op->vtkSQLiteQuery::BindParameter(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSQLiteQuery_BindParameter_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      op->vtkSQLiteQuery::BindParameter(temp0, *temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkSQLiteQuery_BindParameter_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

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
      op->vtkSQLiteQuery::BindParameter(temp0, temp1, temp2));

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

static PyMethodDef PyvtkSQLiteQuery_BindParameter_Methods[] = {
  {"BindParameter", PyvtkSQLiteQuery_BindParameter_s1, METH_VARARGS,
   "@ii"},
  {"BindParameter", PyvtkSQLiteQuery_BindParameter_s2, METH_VARARGS,
   "@il"},
  {"BindParameter", PyvtkSQLiteQuery_BindParameter_s3, METH_VARARGS,
   "@ik"},
  {"BindParameter", PyvtkSQLiteQuery_BindParameter_s4, METH_VARARGS,
   "@id"},
  {"BindParameter", PyvtkSQLiteQuery_BindParameter_s5, METH_VARARGS,
   "@izK"},
  {"BindParameter", PyvtkSQLiteQuery_BindParameter_s6, METH_VARARGS,
   "@is"},
  {"BindParameter", PyvtkSQLiteQuery_BindParameter_s7, METH_VARARGS,
   "@iW vtkVariant"},
  {"BindParameter", PyvtkSQLiteQuery_BindParameter_s8, METH_VARARGS,
   "@ivK"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSQLiteQuery_BindParameter(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSQLiteQuery_BindParameter_Methods;
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
PyvtkSQLiteQuery_ClearParameterBindings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearParameterBindings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLiteQuery *op = static_cast<vtkSQLiteQuery *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->ClearParameterBindings() :
      op->vtkSQLiteQuery::ClearParameterBindings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSQLiteQuery_Methods[] = {
  {"IsTypeOf", PyvtkSQLiteQuery_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSQLiteQuery_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSQLiteQuery_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSQLiteQuery\nC++: static vtkSQLiteQuery *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSQLiteQuery_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSQLiteQuery\nC++: vtkSQLiteQuery *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSQLiteQuery_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSQLiteQuery_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetQuery", PyvtkSQLiteQuery_SetQuery, METH_VARARGS,
   "SetQuery(self, query:str) -> bool\nC++: bool SetQuery(const char *query) override;\n\nSet the SQL query string.  This must be performed before\nExecute() or BindParameter() can be called.\n"},
  {"Execute", PyvtkSQLiteQuery_Execute, METH_VARARGS,
   "Execute(self) -> bool\nC++: bool Execute() override;\n\nExecute the query.  This must be performed before any field name\nor data access functions are used.\n"},
  {"GetNumberOfFields", PyvtkSQLiteQuery_GetNumberOfFields, METH_VARARGS,
   "GetNumberOfFields(self) -> int\nC++: int GetNumberOfFields() override;\n\nThe number of fields in the query result.\n"},
  {"GetFieldName", PyvtkSQLiteQuery_GetFieldName, METH_VARARGS,
   "GetFieldName(self, i:int) -> str\nC++: const char *GetFieldName(int i) override;\n\nReturn the name of the specified query field.\n"},
  {"GetFieldType", PyvtkSQLiteQuery_GetFieldType, METH_VARARGS,
   "GetFieldType(self, i:int) -> int\nC++: int GetFieldType(int i) override;\n\nReturn the type of the field, using the constants defined in\nvtkType.h.\n"},
  {"NextRow", PyvtkSQLiteQuery_NextRow, METH_VARARGS,
   "NextRow(self) -> bool\nC++: bool NextRow() override;\n\nAdvance row, return false if past end.\n"},
  {"HasError", PyvtkSQLiteQuery_HasError, METH_VARARGS,
   "HasError(self) -> bool\nC++: bool HasError() override;\n\nReturn true if there is an error on the current query.\n"},
  {"BeginTransaction", PyvtkSQLiteQuery_BeginTransaction, METH_VARARGS,
   "BeginTransaction(self) -> bool\nC++: bool BeginTransaction() override;\n\nBegin, abort (roll back), or commit a transaction.\n"},
  {"RollbackTransaction", PyvtkSQLiteQuery_RollbackTransaction, METH_VARARGS,
   "RollbackTransaction(self) -> bool\nC++: bool RollbackTransaction() override;\n\n"},
  {"CommitTransaction", PyvtkSQLiteQuery_CommitTransaction, METH_VARARGS,
   "CommitTransaction(self) -> bool\nC++: bool CommitTransaction() override;\n\n"},
  {"DataValue", PyvtkSQLiteQuery_DataValue, METH_VARARGS,
   "DataValue(self, c:int) -> vtkVariant\nC++: vtkVariant DataValue(vtkIdType c) override;\n\nReturn data in current row, field c\n"},
  {"GetLastErrorText", PyvtkSQLiteQuery_GetLastErrorText, METH_VARARGS,
   "GetLastErrorText(self) -> str\nC++: const char *GetLastErrorText() override;\n\nGet the last error text from the query\n"},
  {"BindParameter", PyvtkSQLiteQuery_BindParameter, METH_VARARGS,
   "BindParameter(self, index:int, value:int) -> bool\nC++: bool BindParameter(int index, int value) override;\nBindParameter(self, index:int, value:int) -> bool\nC++: bool BindParameter(int index, long value) override;\nBindParameter(self, index:int, value:int) -> bool\nC++: bool BindParameter(int index, long long value) override;\nBindParameter(self, index:int, value:float) -> bool\nC++: bool BindParameter(int index, double value) override;\nBindParameter(self, index:int, stringValue:str, length:int)\n    -> bool\nC++: bool BindParameter(int index, const char *stringValue,\n    size_t length) override;\nBindParameter(self, index:int, string:str) -> bool\nC++: bool BindParameter(int index, const vtkStdString &string)\n    override;\nBindParameter(self, index:int, value:vtkVariant) -> bool\nC++: bool BindParameter(int index, vtkVariant value) override;\nBindParameter(self, index:int, data:Pointer, length:int) -> bool\nC++: bool BindParameter(int index, const void *data,\n    size_t length) override;\n\n"},
  {"ClearParameterBindings", PyvtkSQLiteQuery_ClearParameterBindings, METH_VARARGS,
   "ClearParameterBindings(self) -> bool\nC++: bool ClearParameterBindings() override;\n\nReset all parameter bindings to nullptr.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSQLiteQuery_Doc =
  "vtkSQLiteQuery - vtkSQLQuery implementation for SQLite databases\n\n"
  "Superclass: vtkSQLQuery\n\n"
  "This is an implementation of vtkSQLQuery for SQLite databases.  See\n"
  "the documentation for vtkSQLQuery for information about what the\n"
  "methods do.\n\n"
  "@bug Sometimes Execute() will return false (meaning an error) but\n"
  "GetLastErrorText() winds up null.  I am not certain why this is\n"
  "happening.\n\n"
  "@par Thanks: Thanks to Andrew Wilson from Sandia National\n"
  "Laboratories for implementing this class.\n\n"
  "@sa\n"
  "vtkSQLDatabase vtkSQLQuery vtkSQLiteDatabase\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSQLiteQuery_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOSQL.vtkSQLiteQuery", // tp_name
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
  PyvtkSQLiteQuery_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSQLiteQuery_StaticNew()
{
  return vtkSQLiteQuery::New();
}

PyObject *PyvtkSQLiteQuery_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSQLiteQuery_Type, PyvtkSQLiteQuery_Methods,
    "vtkSQLiteQuery",
 &PyvtkSQLiteQuery_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkSQLQuery_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSQLiteQuery(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSQLiteQuery_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSQLiteQuery", o) != 0)
  {
    Py_DECREF(o);
  }

}

