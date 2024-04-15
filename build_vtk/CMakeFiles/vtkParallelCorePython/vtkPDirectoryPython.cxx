// python wrapper for vtkPDirectory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPDirectory.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPDirectory(PyObject *dict); }
extern "C" { PyObject *PyvtkPDirectory_ClassNew(); }


static PyObject *
PyvtkPDirectory_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPDirectory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPDirectory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPDirectory *tempr = vtkPDirectory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPDirectory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPDirectory::NewInstance());

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
PyvtkPDirectory_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPDirectory::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPDirectory::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_Load(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->Load(temp0) :
      op->vtkPDirectory::Load(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_Open(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Open(temp0) :
      op->vtkPDirectory::Open(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_GetNumberOfFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfFiles() :
      op->vtkPDirectory::GetNumberOfFiles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_GetFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFile(temp0) :
      op->vtkPDirectory::GetFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_FileIsDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FileIsDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->FileIsDirectory(temp0) :
      op->vtkPDirectory::FileIsDirectory(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_GetFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetFiles() :
      op->vtkPDirectory::GetFiles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPath() :
      op->vtkPDirectory::GetPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkPDirectory::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_GetCurrentWorkingDirectory(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurrentWorkingDirectory");

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    const char *tempr = vtkPDirectory::GetCurrentWorkingDirectory(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_MakeDirectory(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeDirectory");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = vtkPDirectory::MakeDirectory(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_DeleteDirectory(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DeleteDirectory");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = vtkPDirectory::DeleteDirectory(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_Rename(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Rename");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetFilePath(temp0) &&
      ap.GetFilePath(temp1))
  {
    int tempr = vtkPDirectory::Rename(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPDirectory_Methods[] = {
  {"IsTypeOf", PyvtkPDirectory_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPDirectory_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPDirectory_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPDirectory\nC++: static vtkPDirectory *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPDirectory_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPDirectory\nC++: vtkPDirectory *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPDirectory_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPDirectory_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Load", PyvtkPDirectory_Load, METH_VARARGS,
   "Load(self, __a:str) -> bool\nC++: bool Load(const std::string &)\n\nOpen/Load the specified directory and load the names of the files\nin that directory. false/0 is returned if the directory can not\nbe opened, true/1 if it is opened. The reason that there are two\nversions of this is that Directory uses Load() and vtkDirectory\nuses Open() for this functionality.\n"},
  {"Open", PyvtkPDirectory_Open, METH_VARARGS,
   "Open(self, dir:str) -> int\nC++: int Open(const char *dir)\n\n"},
  {"GetNumberOfFiles", PyvtkPDirectory_GetNumberOfFiles, METH_VARARGS,
   "GetNumberOfFiles(self) -> int\nC++: vtkIdType GetNumberOfFiles()\n\nReturn the number of files in the current directory.\n"},
  {"GetFile", PyvtkPDirectory_GetFile, METH_VARARGS,
   "GetFile(self, index:int) -> str\nC++: const char *GetFile(vtkIdType index)\n\nReturn the file at the given index, the indexing is 0 based\n"},
  {"FileIsDirectory", PyvtkPDirectory_FileIsDirectory, METH_VARARGS,
   "FileIsDirectory(self, name:str) -> int\nC++: int FileIsDirectory(const char *name)\n\nReturn true if the file is a directory.  If the file is not an\nabsolute path, it is assumed to be relative to the opened\ndirectory. If no directory has been opened, it is assumed to be\nrelative to the current working directory.\n"},
  {"GetFiles", PyvtkPDirectory_GetFiles, METH_VARARGS,
   "GetFiles(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetFiles()\n\nGet an array that contains all the file names.\n"},
  {"GetPath", PyvtkPDirectory_GetPath, METH_VARARGS,
   "GetPath(self) -> str\nC++: const char *GetPath()\n\nReturn the path to Open'ed directory\n"},
  {"Clear", PyvtkPDirectory_Clear, METH_VARARGS,
   "Clear(self) -> None\nC++: void Clear()\n\nClear the internal structure. Used internally at beginning of\nLoad(...) to clear the cache.\n"},
  {"GetCurrentWorkingDirectory", PyvtkPDirectory_GetCurrentWorkingDirectory, METH_VARARGS,
   "GetCurrentWorkingDirectory(buf:str, len:int) -> str\nC++: static const char *GetCurrentWorkingDirectory(char *buf,\n    unsigned int len)\n\nGet the current working directory.\n"},
  {"MakeDirectory", PyvtkPDirectory_MakeDirectory, METH_VARARGS,
   "MakeDirectory(dir:str) -> int\nC++: static int MakeDirectory(const char *dir)\n\nCreate directory.\n"},
  {"DeleteDirectory", PyvtkPDirectory_DeleteDirectory, METH_VARARGS,
   "DeleteDirectory(dir:str) -> int\nC++: static int DeleteDirectory(const char *dir)\n\nRemove a directory.\n"},
  {"Rename", PyvtkPDirectory_Rename, METH_VARARGS,
   "Rename(oldname:str, newname:str) -> int\nC++: static int Rename(const char *oldname, const char *newname)\n\nRename a file or directory.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPDirectory_Doc =
  "vtkPDirectory - vtkPDirectory provides a portable way of finding the\nnames of the files in a system directory where process 0 finds the\ninformation and broadcasts it to other processes.\n\n"
  "Superclass: vtkObject\n\n"
  "It tries to replicate the API for both Directory and vtkDirectory\n"
  "though there are slight mismatches between the two. This is a\n"
  "blocking collective operation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPDirectory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkParallelCore.vtkPDirectory", // tp_name
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
  PyvtkPDirectory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPDirectory_StaticNew()
{
  return vtkPDirectory::New();
}

PyObject *PyvtkPDirectory_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPDirectory_Type, PyvtkPDirectory_Methods,
    "vtkPDirectory",
 &PyvtkPDirectory_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPDirectory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPDirectory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPDirectory", o) != 0)
  {
    Py_DECREF(o);
  }

}

