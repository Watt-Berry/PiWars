// python wrapper for vtkTransposeTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTransposeTable.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTransposeTable(PyObject *dict); }
extern "C" { PyObject *PyvtkTransposeTable_ClassNew(); }


static PyObject *
PyvtkTransposeTable_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransposeTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransposeTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransposeTable *tempr = vtkTransposeTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransposeTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransposeTable::NewInstance());

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
PyvtkTransposeTable_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTransposeTable::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTransposeTable::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_GetAddIdColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddIdColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAddIdColumn() :
      op->vtkTransposeTable::GetAddIdColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_SetAddIdColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddIdColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddIdColumn(temp0);
    }
    else
    {
      op->vtkTransposeTable::SetAddIdColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_AddIdColumnOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIdColumnOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddIdColumnOn();
    }
    else
    {
      op->vtkTransposeTable::AddIdColumnOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_AddIdColumnOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIdColumnOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddIdColumnOff();
    }
    else
    {
      op->vtkTransposeTable::AddIdColumnOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_GetUseIdColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIdColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseIdColumn() :
      op->vtkTransposeTable::GetUseIdColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_SetUseIdColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIdColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseIdColumn(temp0);
    }
    else
    {
      op->vtkTransposeTable::SetUseIdColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_UseIdColumnOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIdColumnOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseIdColumnOn();
    }
    else
    {
      op->vtkTransposeTable::UseIdColumnOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_UseIdColumnOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIdColumnOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseIdColumnOff();
    }
    else
    {
      op->vtkTransposeTable::UseIdColumnOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_GetIdColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetIdColumnName() :
      op->vtkTransposeTable::GetIdColumnName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransposeTable_SetIdColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeTable *op = static_cast<vtkTransposeTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIdColumnName(temp0);
    }
    else
    {
      op->vtkTransposeTable::SetIdColumnName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTransposeTable_Methods[] = {
  {"IsTypeOf", PyvtkTransposeTable_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTransposeTable_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTransposeTable_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTransposeTable\nC++: static vtkTransposeTable *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTransposeTable_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTransposeTable\nC++: vtkTransposeTable *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTransposeTable_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTransposeTable_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetAddIdColumn", PyvtkTransposeTable_GetAddIdColumn, METH_VARARGS,
   "GetAddIdColumn(self) -> bool\nC++: virtual bool GetAddIdColumn()\n\nThis flag indicates if a column must be inserted at index 0 with\nthe names (ids) of the input columns. Default: true\n"},
  {"SetAddIdColumn", PyvtkTransposeTable_SetAddIdColumn, METH_VARARGS,
   "SetAddIdColumn(self, _arg:bool) -> None\nC++: virtual void SetAddIdColumn(bool _arg)\n\n"},
  {"AddIdColumnOn", PyvtkTransposeTable_AddIdColumnOn, METH_VARARGS,
   "AddIdColumnOn(self) -> None\nC++: virtual void AddIdColumnOn()\n\n"},
  {"AddIdColumnOff", PyvtkTransposeTable_AddIdColumnOff, METH_VARARGS,
   "AddIdColumnOff(self) -> None\nC++: virtual void AddIdColumnOff()\n\n"},
  {"GetUseIdColumn", PyvtkTransposeTable_GetUseIdColumn, METH_VARARGS,
   "GetUseIdColumn(self) -> bool\nC++: virtual bool GetUseIdColumn()\n\nThis flag indicates if the output column must be named using the\nnames listed in the index 0 column. Default: false\n"},
  {"SetUseIdColumn", PyvtkTransposeTable_SetUseIdColumn, METH_VARARGS,
   "SetUseIdColumn(self, _arg:bool) -> None\nC++: virtual void SetUseIdColumn(bool _arg)\n\n"},
  {"UseIdColumnOn", PyvtkTransposeTable_UseIdColumnOn, METH_VARARGS,
   "UseIdColumnOn(self) -> None\nC++: virtual void UseIdColumnOn()\n\n"},
  {"UseIdColumnOff", PyvtkTransposeTable_UseIdColumnOff, METH_VARARGS,
   "UseIdColumnOff(self) -> None\nC++: virtual void UseIdColumnOff()\n\n"},
  {"GetIdColumnName", PyvtkTransposeTable_GetIdColumnName, METH_VARARGS,
   "GetIdColumnName(self) -> str\nC++: virtual char *GetIdColumnName()\n\nGet/Set the name of the id column added by option AddIdColumn.\nDefault: ColName\n"},
  {"SetIdColumnName", PyvtkTransposeTable_SetIdColumnName, METH_VARARGS,
   "SetIdColumnName(self, _arg:str) -> None\nC++: virtual void SetIdColumnName(const char *_arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTransposeTable_Doc =
  "vtkTransposeTable - Transpose an input table.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "This algorithm allows to transpose a vtkTable as a matrix. Columns\n"
  "become rows and vice versa. A new column can be added to the result\n"
  "table at index 0 to collect the name of the initial columns (when\n"
  "AddIdColumn is true). Such a column can be used to name the columns\n"
  "of the result. Note that columns of the output table will have a\n"
  "variant type is the columns of the initial table are not consistent.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTransposeTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkTransposeTable", // tp_name
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
  PyvtkTransposeTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransposeTable_StaticNew()
{
  return vtkTransposeTable::New();
}

PyObject *PyvtkTransposeTable_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTransposeTable_Type, PyvtkTransposeTable_Methods,
    "vtkTransposeTable",
 &PyvtkTransposeTable_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTransposeTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransposeTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransposeTable", o) != 0)
  {
    Py_DECREF(o);
  }

}

