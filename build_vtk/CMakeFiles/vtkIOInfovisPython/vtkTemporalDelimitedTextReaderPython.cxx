// python wrapper for vtkTemporalDelimitedTextReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTemporalDelimitedTextReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTemporalDelimitedTextReader(PyObject *dict); }
extern "C" { PyObject *PyvtkTemporalDelimitedTextReader_ClassNew(); }

#ifndef DECLARED_PyvtkDelimitedTextReader_ClassNew
extern "C" { PyObject *PyvtkDelimitedTextReader_ClassNew(); }
#define DECLARED_PyvtkDelimitedTextReader_ClassNew
#endif

static PyObject *
PyvtkTemporalDelimitedTextReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTemporalDelimitedTextReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalDelimitedTextReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDelimitedTextReader *op = static_cast<vtkTemporalDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalDelimitedTextReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalDelimitedTextReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTemporalDelimitedTextReader *tempr = vtkTemporalDelimitedTextReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalDelimitedTextReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDelimitedTextReader *op = static_cast<vtkTemporalDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTemporalDelimitedTextReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalDelimitedTextReader::NewInstance());

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
PyvtkTemporalDelimitedTextReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTemporalDelimitedTextReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalDelimitedTextReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDelimitedTextReader *op = static_cast<vtkTemporalDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTemporalDelimitedTextReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalDelimitedTextReader_GetTimeColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDelimitedTextReader *op = static_cast<vtkTemporalDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetTimeColumnName() :
      op->vtkTemporalDelimitedTextReader::GetTimeColumnName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalDelimitedTextReader_SetTimeColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDelimitedTextReader *op = static_cast<vtkTemporalDelimitedTextReader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeColumnName(temp0);
    }
    else
    {
      op->vtkTemporalDelimitedTextReader::SetTimeColumnName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalDelimitedTextReader_GetTimeColumnId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeColumnId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDelimitedTextReader *op = static_cast<vtkTemporalDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeColumnId() :
      op->vtkTemporalDelimitedTextReader::GetTimeColumnId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalDelimitedTextReader_SetTimeColumnId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeColumnId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDelimitedTextReader *op = static_cast<vtkTemporalDelimitedTextReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeColumnId(temp0);
    }
    else
    {
      op->vtkTemporalDelimitedTextReader::SetTimeColumnId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalDelimitedTextReader_GetRemoveTimeStepColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveTimeStepColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDelimitedTextReader *op = static_cast<vtkTemporalDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveTimeStepColumn() :
      op->vtkTemporalDelimitedTextReader::GetRemoveTimeStepColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalDelimitedTextReader_SetRemoveTimeStepColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveTimeStepColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDelimitedTextReader *op = static_cast<vtkTemporalDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoveTimeStepColumn(temp0);
    }
    else
    {
      op->vtkTemporalDelimitedTextReader::SetRemoveTimeStepColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalDelimitedTextReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDelimitedTextReader *op = static_cast<vtkTemporalDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTemporalDelimitedTextReader::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalDelimitedTextReader_Methods[] = {
  {"IsTypeOf", PyvtkTemporalDelimitedTextReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTemporalDelimitedTextReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTemporalDelimitedTextReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTemporalDelimitedTextReader\nC++: static vtkTemporalDelimitedTextReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTemporalDelimitedTextReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTemporalDelimitedTextReader\nC++: vtkTemporalDelimitedTextReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTemporalDelimitedTextReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTemporalDelimitedTextReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetTimeColumnName", PyvtkTemporalDelimitedTextReader_GetTimeColumnName, METH_VARARGS,
   "GetTimeColumnName(self) -> str\nC++: virtual std::string GetTimeColumnName()\n\nGet/Set the name of the column to use as time indicator. Ignored\nif TimeColumnId is not equal to -1. If no column has been chosen\nusing either the TimeColumnId or the TimeColumnName the whole\ninput file is outputted. Default to empty string.\n"},
  {"SetTimeColumnName", PyvtkTemporalDelimitedTextReader_SetTimeColumnName, METH_VARARGS,
   "SetTimeColumnName(self, name:str) -> None\nC++: void SetTimeColumnName(std::string name)\n\n"},
  {"GetTimeColumnId", PyvtkTemporalDelimitedTextReader_GetTimeColumnId, METH_VARARGS,
   "GetTimeColumnId(self) -> int\nC++: virtual int GetTimeColumnId()\n\nGet/Set the column to use as time indicator. It the TimeColumnId\nis equal to -1, the TimeColumnName will be used instead. If no\ncolumn has been chosen using either the TimeColumnId or the\nTimeColumnName the whole input file is outputted. Default to -1.\n"},
  {"SetTimeColumnId", PyvtkTemporalDelimitedTextReader_SetTimeColumnId, METH_VARARGS,
   "SetTimeColumnId(self, idx:int) -> None\nC++: void SetTimeColumnId(int idx)\n\n"},
  {"GetRemoveTimeStepColumn", PyvtkTemporalDelimitedTextReader_GetRemoveTimeStepColumn, METH_VARARGS,
   "GetRemoveTimeStepColumn(self) -> bool\nC++: virtual bool GetRemoveTimeStepColumn()\n\nSet the RemoveTimeStepColumn flag If this boolean is true, the\noutput will not contain the Time step column. Default to true.\n"},
  {"SetRemoveTimeStepColumn", PyvtkTemporalDelimitedTextReader_SetRemoveTimeStepColumn, METH_VARARGS,
   "SetRemoveTimeStepColumn(self, rts:bool) -> None\nC++: void SetRemoveTimeStepColumn(bool rts)\n\n"},
  {"GetMTime", PyvtkTemporalDelimitedTextReader_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nInternal fields of this reader use a specific MTime\n(InternalMTime). This mechanism ensures the actual data is only\nre-read when necessary. Here, we ensure the GetMTime of this\nreader stay consistent by returning the latest between the MTime\nof this reader and the internal one.\n\n@see InternalModified\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTemporalDelimitedTextReader_Doc =
  "vtkTemporalDelimitedTextReader - reads a delimited ascii or unicode\ntext files and and output a temporal vtkTable.\n\n"
  "Superclass: vtkDelimitedTextReader\n\n"
  "This reader requires that FieldDelimiterCharacters is set before the\n"
  "pipeline is executed, otherwise it will produce an empty output.\n\n"
  "A column can be selected as time step indicator using the\n"
  "SetTimeColumnName or SetTimeColumnId functions. If so, for a given\n"
  "time step 's' only the lines where the time step indicator column\n"
  "have the value 's' are present. To control if the time step indicator\n"
  "column should be present in the output, a RemoveTimeStepColumn option\n"
  "is available. If no time step indicator column is given by the user,\n"
  "the whole file it outputted.\n\n"
  "This reader assume the time step column is numeric. A warning is set\n"
  "otherwise. The DetectNumericColumns field is set to on, do not change\n"
  "this field unless you really know what you are doing.\n\n"
  "@see vtkDelimitedTextReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTemporalDelimitedTextReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOInfovis.vtkTemporalDelimitedTextReader", // tp_name
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
  PyvtkTemporalDelimitedTextReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTemporalDelimitedTextReader_StaticNew()
{
  return vtkTemporalDelimitedTextReader::New();
}

PyObject *PyvtkTemporalDelimitedTextReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTemporalDelimitedTextReader_Type, PyvtkTemporalDelimitedTextReader_Methods,
    "vtkTemporalDelimitedTextReader",
 &PyvtkTemporalDelimitedTextReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDelimitedTextReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTemporalDelimitedTextReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTemporalDelimitedTextReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTemporalDelimitedTextReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

