// python wrapper for vtkArchiver
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkArchiver.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArchiver(PyObject *dict); }
extern "C" { PyObject *PyvtkArchiver_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkArchiver_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArchiver::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArchiver_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArchiver *op = static_cast<vtkArchiver *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArchiver::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArchiver_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArchiver *tempr = vtkArchiver::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArchiver_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArchiver *op = static_cast<vtkArchiver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArchiver *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArchiver::NewInstance());

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
PyvtkArchiver_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkArchiver::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArchiver_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArchiver *op = static_cast<vtkArchiver *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkArchiver::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArchiver_GetArchiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArchiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArchiver *op = static_cast<vtkArchiver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArchiveName() :
      op->vtkArchiver::GetArchiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArchiver_SetArchiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArchiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArchiver *op = static_cast<vtkArchiver *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArchiveName(temp0);
    }
    else
    {
      op->vtkArchiver::SetArchiveName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArchiver_OpenArchive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenArchive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArchiver *op = static_cast<vtkArchiver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OpenArchive();
    }
    else
    {
      op->vtkArchiver::OpenArchive();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArchiver_CloseArchive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseArchive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArchiver *op = static_cast<vtkArchiver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CloseArchive();
    }
    else
    {
      op->vtkArchiver::CloseArchive();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArchiver_InsertIntoArchive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertIntoArchive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArchiver *op = static_cast<vtkArchiver *>(vp);

  std::string temp0;
  const char *temp1 = nullptr;
  size_t temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->InsertIntoArchive(temp0, temp1, temp2);
    }
    else
    {
      op->vtkArchiver::InsertIntoArchive(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArchiver_Contains(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contains");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArchiver *op = static_cast<vtkArchiver *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->Contains(temp0) :
      op->vtkArchiver::Contains(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArchiver_Methods[] = {
  {"IsTypeOf", PyvtkArchiver_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArchiver_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArchiver_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkArchiver\nC++: static vtkArchiver *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArchiver_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkArchiver\nC++: vtkArchiver *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkArchiver_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkArchiver_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetArchiveName", PyvtkArchiver_GetArchiveName, METH_VARARGS,
   "GetArchiveName(self) -> str\nC++: virtual char *GetArchiveName()\n\nSpecify the name of the archive to generate.\n"},
  {"SetArchiveName", PyvtkArchiver_SetArchiveName, METH_VARARGS,
   "SetArchiveName(self, _arg:str) -> None\nC++: virtual void SetArchiveName(const char *_arg)\n\n"},
  {"OpenArchive", PyvtkArchiver_OpenArchive, METH_VARARGS,
   "OpenArchive(self) -> None\nC++: virtual void OpenArchive()\n\nOpen the archive for writing.\n"},
  {"CloseArchive", PyvtkArchiver_CloseArchive, METH_VARARGS,
   "CloseArchive(self) -> None\nC++: virtual void CloseArchive()\n\nClose the archive.\n"},
  {"InsertIntoArchive", PyvtkArchiver_InsertIntoArchive, METH_VARARGS,
   "InsertIntoArchive(self, relativePath:str, data:str, size:int)\n    -> None\nC++: virtual void InsertIntoArchive(\n    const std::string &relativePath, const char *data,\n    std::size_t size)\n\nInsert data of size size into the archive at relativePath.\n"},
  {"Contains", PyvtkArchiver_Contains, METH_VARARGS,
   "Contains(self, relativePath:str) -> bool\nC++: virtual bool Contains(const std::string &relativePath)\n\nChecks if relativePath represents an entry in the archive.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkArchiver_Doc =
  "vtkArchiver - Writes an archive\n\n"
  "Superclass: vtkObject\n\n"
  "vtkArchiver is a base class for constructing an archive. The default\n"
  "implementation constructs a directory at the location of the\n"
  "ArchiveName and populates it with files and directories as requested\n"
  "by Insert(). Classes that derive from vtkArchiver can customize the\n"
  "output using such features as compression, in-memory serialization\n"
  "and third-party archival tools.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkArchiver_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkArchiver", // tp_name
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
  PyvtkArchiver_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArchiver_StaticNew()
{
  return vtkArchiver::New();
}

PyObject *PyvtkArchiver_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkArchiver_Type, PyvtkArchiver_Methods,
    "vtkArchiver",
 &PyvtkArchiver_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArchiver(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArchiver_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkArchiver", o) != 0)
  {
    Py_DECREF(o);
  }

}

