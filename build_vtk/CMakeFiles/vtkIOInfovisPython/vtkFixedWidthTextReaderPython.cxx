// python wrapper for vtkFixedWidthTextReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFixedWidthTextReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFixedWidthTextReader(PyObject *dict); }
extern "C" { PyObject *PyvtkFixedWidthTextReader_ClassNew(); }


static PyObject *
PyvtkFixedWidthTextReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFixedWidthTextReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFixedWidthTextReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFixedWidthTextReader *tempr = vtkFixedWidthTextReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFixedWidthTextReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFixedWidthTextReader::NewInstance());

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
PyvtkFixedWidthTextReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFixedWidthTextReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFixedWidthTextReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkFixedWidthTextReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkFixedWidthTextReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_SetFieldWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldWidth(temp0);
    }
    else
    {
      op->vtkFixedWidthTextReader::SetFieldWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_GetFieldWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldWidth() :
      op->vtkFixedWidthTextReader::GetFieldWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_SetStripWhiteSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStripWhiteSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStripWhiteSpace(temp0);
    }
    else
    {
      op->vtkFixedWidthTextReader::SetStripWhiteSpace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_GetStripWhiteSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStripWhiteSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetStripWhiteSpace() :
      op->vtkFixedWidthTextReader::GetStripWhiteSpace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_StripWhiteSpaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StripWhiteSpaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StripWhiteSpaceOn();
    }
    else
    {
      op->vtkFixedWidthTextReader::StripWhiteSpaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_StripWhiteSpaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StripWhiteSpaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StripWhiteSpaceOff();
    }
    else
    {
      op->vtkFixedWidthTextReader::StripWhiteSpaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_GetHaveHeaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHaveHeaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHaveHeaders() :
      op->vtkFixedWidthTextReader::GetHaveHeaders());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_SetHaveHeaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHaveHeaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHaveHeaders(temp0);
    }
    else
    {
      op->vtkFixedWidthTextReader::SetHaveHeaders(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_HaveHeadersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HaveHeadersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HaveHeadersOn();
    }
    else
    {
      op->vtkFixedWidthTextReader::HaveHeadersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_HaveHeadersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HaveHeadersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HaveHeadersOff();
    }
    else
    {
      op->vtkFixedWidthTextReader::HaveHeadersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_SetTableErrorObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableErrorObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  vtkCommand *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommand"))
  {
    if (ap.IsBound())
    {
      op->SetTableErrorObserver(temp0);
    }
    else
    {
      op->vtkFixedWidthTextReader::SetTableErrorObserver(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedWidthTextReader_GetTableErrorObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableErrorObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedWidthTextReader *op = static_cast<vtkFixedWidthTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCommand *tempr = (ap.IsBound() ?
      op->GetTableErrorObserver() :
      op->vtkFixedWidthTextReader::GetTableErrorObserver());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFixedWidthTextReader_Methods[] = {
  {"IsTypeOf", PyvtkFixedWidthTextReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFixedWidthTextReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFixedWidthTextReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFixedWidthTextReader\nC++: static vtkFixedWidthTextReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFixedWidthTextReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFixedWidthTextReader\nC++: vtkFixedWidthTextReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFixedWidthTextReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFixedWidthTextReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetFileName", PyvtkFixedWidthTextReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetFileName", PyvtkFixedWidthTextReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\n"},
  {"SetFieldWidth", PyvtkFixedWidthTextReader_SetFieldWidth, METH_VARARGS,
   "SetFieldWidth(self, _arg:int) -> None\nC++: virtual void SetFieldWidth(int _arg)\n\nSet/get the field width\n"},
  {"GetFieldWidth", PyvtkFixedWidthTextReader_GetFieldWidth, METH_VARARGS,
   "GetFieldWidth(self) -> int\nC++: virtual int GetFieldWidth()\n\n"},
  {"SetStripWhiteSpace", PyvtkFixedWidthTextReader_SetStripWhiteSpace, METH_VARARGS,
   "SetStripWhiteSpace(self, _arg:bool) -> None\nC++: virtual void SetStripWhiteSpace(bool _arg)\n\nIf set, this flag will cause the reader to strip whitespace from\nthe beginning and ending of each field.  Defaults to off.\n"},
  {"GetStripWhiteSpace", PyvtkFixedWidthTextReader_GetStripWhiteSpace, METH_VARARGS,
   "GetStripWhiteSpace(self) -> bool\nC++: virtual bool GetStripWhiteSpace()\n\n"},
  {"StripWhiteSpaceOn", PyvtkFixedWidthTextReader_StripWhiteSpaceOn, METH_VARARGS,
   "StripWhiteSpaceOn(self) -> None\nC++: virtual void StripWhiteSpaceOn()\n\n"},
  {"StripWhiteSpaceOff", PyvtkFixedWidthTextReader_StripWhiteSpaceOff, METH_VARARGS,
   "StripWhiteSpaceOff(self) -> None\nC++: virtual void StripWhiteSpaceOff()\n\n"},
  {"GetHaveHeaders", PyvtkFixedWidthTextReader_GetHaveHeaders, METH_VARARGS,
   "GetHaveHeaders(self) -> bool\nC++: virtual bool GetHaveHeaders()\n\nSet/get whether to treat the first line of the file as headers.\n"},
  {"SetHaveHeaders", PyvtkFixedWidthTextReader_SetHaveHeaders, METH_VARARGS,
   "SetHaveHeaders(self, _arg:bool) -> None\nC++: virtual void SetHaveHeaders(bool _arg)\n\n"},
  {"HaveHeadersOn", PyvtkFixedWidthTextReader_HaveHeadersOn, METH_VARARGS,
   "HaveHeadersOn(self) -> None\nC++: virtual void HaveHeadersOn()\n\n"},
  {"HaveHeadersOff", PyvtkFixedWidthTextReader_HaveHeadersOff, METH_VARARGS,
   "HaveHeadersOff(self) -> None\nC++: virtual void HaveHeadersOff()\n\n"},
  {"SetTableErrorObserver", PyvtkFixedWidthTextReader_SetTableErrorObserver, METH_VARARGS,
   "SetTableErrorObserver(self, __a:vtkCommand) -> None\nC++: void SetTableErrorObserver(vtkCommand *)\n\nSet/get the ErrorObserver for the internal vtkTable This is\nuseful for applications that want to catch error messages.\n"},
  {"GetTableErrorObserver", PyvtkFixedWidthTextReader_GetTableErrorObserver, METH_VARARGS,
   "GetTableErrorObserver(self) -> vtkCommand\nC++: virtual vtkCommand *GetTableErrorObserver()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFixedWidthTextReader_Doc =
  "vtkFixedWidthTextReader - reader for pulling in text files with\nfixed-width fields\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkFixedWidthTextReader reads in a table from a text file where each\n"
  "column occupies a certain number of characters.\n\n"
  "This class emits ProgressEvent for every 100 lines it reads.\n\n"
  "@warning\n"
  "This first version of the reader will assume that all fields have the\n"
  "same width.  It also assumes that the first line in the file has at\n"
  "least as many fields (i.e. at least as many characters) as any other\n"
  "line in the file.\n\n"
  "@par Thanks: Thanks to Andy Wilson from Sandia National Laboratories\n"
  "for implementing this class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFixedWidthTextReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOInfovis.vtkFixedWidthTextReader", // tp_name
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
  PyvtkFixedWidthTextReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFixedWidthTextReader_StaticNew()
{
  return vtkFixedWidthTextReader::New();
}

PyObject *PyvtkFixedWidthTextReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFixedWidthTextReader_Type, PyvtkFixedWidthTextReader_Methods,
    "vtkFixedWidthTextReader",
 &PyvtkFixedWidthTextReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFixedWidthTextReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFixedWidthTextReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFixedWidthTextReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

