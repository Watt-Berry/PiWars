// python wrapper for vtkSQLDatabaseTableSource
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
#include "vtkSQLDatabaseTableSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSQLDatabaseTableSource(PyObject *dict); }
extern "C" { PyObject *PyvtkSQLDatabaseTableSource_ClassNew(); }


static PyObject *
PyvtkSQLDatabaseTableSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSQLDatabaseTableSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSQLDatabaseTableSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSQLDatabaseTableSource *tempr = vtkSQLDatabaseTableSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSQLDatabaseTableSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSQLDatabaseTableSource::NewInstance());

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
PyvtkSQLDatabaseTableSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSQLDatabaseTableSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSQLDatabaseTableSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_GetURL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetURL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetURL() :
      op->vtkSQLDatabaseTableSource::GetURL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_SetURL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetURL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetURL(temp0);
    }
    else
    {
      op->vtkSQLDatabaseTableSource::SetURL(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_SetPassword(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassword");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassword(temp0);
    }
    else
    {
      op->vtkSQLDatabaseTableSource::SetPassword(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_GetQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetQuery() :
      op->vtkSQLDatabaseTableSource::GetQuery());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_SetQuery(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuery");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQuery(temp0);
    }
    else
    {
      op->vtkSQLDatabaseTableSource::SetQuery(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_SetPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPedigreeIdArrayName(temp0);
    }
    else
    {
      op->vtkSQLDatabaseTableSource::SetPedigreeIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_GetPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPedigreeIdArrayName() :
      op->vtkSQLDatabaseTableSource::GetPedigreeIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_SetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePedigreeIds(temp0);
    }
    else
    {
      op->vtkSQLDatabaseTableSource::SetGeneratePedigreeIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_GetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePedigreeIds() :
      op->vtkSQLDatabaseTableSource::GetGeneratePedigreeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_GeneratePedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePedigreeIdsOn();
    }
    else
    {
      op->vtkSQLDatabaseTableSource::GeneratePedigreeIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSQLDatabaseTableSource_GeneratePedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSQLDatabaseTableSource *op = static_cast<vtkSQLDatabaseTableSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePedigreeIdsOff();
    }
    else
    {
      op->vtkSQLDatabaseTableSource::GeneratePedigreeIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSQLDatabaseTableSource_Methods[] = {
  {"IsTypeOf", PyvtkSQLDatabaseTableSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSQLDatabaseTableSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSQLDatabaseTableSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSQLDatabaseTableSource\nC++: static vtkSQLDatabaseTableSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSQLDatabaseTableSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSQLDatabaseTableSource\nC++: vtkSQLDatabaseTableSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSQLDatabaseTableSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSQLDatabaseTableSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetURL", PyvtkSQLDatabaseTableSource_GetURL, METH_VARARGS,
   "GetURL(self) -> str\nC++: vtkStdString GetURL()\n\n"},
  {"SetURL", PyvtkSQLDatabaseTableSource_SetURL, METH_VARARGS,
   "SetURL(self, url:str) -> None\nC++: void SetURL(const vtkStdString &url)\n\n"},
  {"SetPassword", PyvtkSQLDatabaseTableSource_SetPassword, METH_VARARGS,
   "SetPassword(self, password:str) -> None\nC++: void SetPassword(const vtkStdString &password)\n\n"},
  {"GetQuery", PyvtkSQLDatabaseTableSource_GetQuery, METH_VARARGS,
   "GetQuery(self) -> str\nC++: vtkStdString GetQuery()\n\n"},
  {"SetQuery", PyvtkSQLDatabaseTableSource_SetQuery, METH_VARARGS,
   "SetQuery(self, query:str) -> None\nC++: void SetQuery(const vtkStdString &query)\n\n"},
  {"SetPedigreeIdArrayName", PyvtkSQLDatabaseTableSource_SetPedigreeIdArrayName, METH_VARARGS,
   "SetPedigreeIdArrayName(self, _arg:str) -> None\nC++: virtual void SetPedigreeIdArrayName(const char *_arg)\n\nThe name of the array for generating or assigning pedigree ids\n(default \"id\").\n"},
  {"GetPedigreeIdArrayName", PyvtkSQLDatabaseTableSource_GetPedigreeIdArrayName, METH_VARARGS,
   "GetPedigreeIdArrayName(self) -> str\nC++: virtual char *GetPedigreeIdArrayName()\n\n"},
  {"SetGeneratePedigreeIds", PyvtkSQLDatabaseTableSource_SetGeneratePedigreeIds, METH_VARARGS,
   "SetGeneratePedigreeIds(self, _arg:bool) -> None\nC++: virtual void SetGeneratePedigreeIds(bool _arg)\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {"GetGeneratePedigreeIds", PyvtkSQLDatabaseTableSource_GetGeneratePedigreeIds, METH_VARARGS,
   "GetGeneratePedigreeIds(self) -> bool\nC++: virtual bool GetGeneratePedigreeIds()\n\n"},
  {"GeneratePedigreeIdsOn", PyvtkSQLDatabaseTableSource_GeneratePedigreeIdsOn, METH_VARARGS,
   "GeneratePedigreeIdsOn(self) -> None\nC++: virtual void GeneratePedigreeIdsOn()\n\n"},
  {"GeneratePedigreeIdsOff", PyvtkSQLDatabaseTableSource_GeneratePedigreeIdsOff, METH_VARARGS,
   "GeneratePedigreeIdsOff(self) -> None\nC++: virtual void GeneratePedigreeIdsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSQLDatabaseTableSource_Doc =
  "vtkSQLDatabaseTableSource - Generates a vtkTable based on an SQL\nquery.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "This class combines vtkSQLDatabase, vtkSQLQuery, and vtkQueryToTable\n"
  "to provide a convenience class for generating tables from databases.\n"
  "Also this class can be easily wrapped and used within ParaView /\n"
  "OverView.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSQLDatabaseTableSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOSQL.vtkSQLDatabaseTableSource", // tp_name
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
  PyvtkSQLDatabaseTableSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSQLDatabaseTableSource_StaticNew()
{
  return vtkSQLDatabaseTableSource::New();
}

PyObject *PyvtkSQLDatabaseTableSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSQLDatabaseTableSource_Type, PyvtkSQLDatabaseTableSource_Methods,
    "vtkSQLDatabaseTableSource",
 &PyvtkSQLDatabaseTableSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSQLDatabaseTableSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSQLDatabaseTableSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSQLDatabaseTableSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

