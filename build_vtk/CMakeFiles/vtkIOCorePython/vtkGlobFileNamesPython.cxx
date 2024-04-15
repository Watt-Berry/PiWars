// python wrapper for vtkGlobFileNames
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGlobFileNames.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGlobFileNames(PyObject *dict); }
extern "C" { PyObject *PyvtkGlobFileNames_ClassNew(); }


static PyObject *
PyvtkGlobFileNames_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGlobFileNames::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGlobFileNames::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGlobFileNames *tempr = vtkGlobFileNames::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGlobFileNames *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGlobFileNames::NewInstance());

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
PyvtkGlobFileNames_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGlobFileNames::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGlobFileNames::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkGlobFileNames::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_SetDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirectory(temp0);
    }
    else
    {
      op->vtkGlobFileNames::SetDirectory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_GetDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDirectory() :
      op->vtkGlobFileNames::GetDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_AddFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->AddFileNames(temp0) :
      op->vtkGlobFileNames::AddFileNames(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_SetRecurse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRecurse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRecurse(temp0);
    }
    else
    {
      op->vtkGlobFileNames::SetRecurse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_RecurseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecurseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecurseOn();
    }
    else
    {
      op->vtkGlobFileNames::RecurseOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_RecurseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecurseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecurseOff();
    }
    else
    {
      op->vtkGlobFileNames::RecurseOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_GetRecurse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecurse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRecurse() :
      op->vtkGlobFileNames::GetRecurse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_GetNumberOfFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFileNames() :
      op->vtkGlobFileNames::GetNumberOfFileNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_GetNthFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthFileName(temp0) :
      op->vtkGlobFileNames::GetNthFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGlobFileNames_GetFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGlobFileNames *op = static_cast<vtkGlobFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetFileNames() :
      op->vtkGlobFileNames::GetFileNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGlobFileNames_Methods[] = {
  {"IsTypeOf", PyvtkGlobFileNames_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGlobFileNames_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGlobFileNames_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGlobFileNames\nC++: static vtkGlobFileNames *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGlobFileNames_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGlobFileNames\nC++: vtkGlobFileNames *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGlobFileNames_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGlobFileNames_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Reset", PyvtkGlobFileNames_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nReset the glob by clearing the list of output filenames.\n"},
  {"SetDirectory", PyvtkGlobFileNames_SetDirectory, METH_VARARGS,
   "SetDirectory(self, _arg:str) -> None\nC++: virtual void SetDirectory(const char *_arg)\n\nSet the directory in which to perform the glob.  If this is not\nset, then the current directory will be used.  Also, if you use a\nglob pattern that contains absolute path (one that starts with\n\"/\" or a drive letter) then that absolute path will be used and\nDirectory will be ignored.\n"},
  {"GetDirectory", PyvtkGlobFileNames_GetDirectory, METH_VARARGS,
   "GetDirectory(self) -> str\nC++: virtual char *GetDirectory()\n\n"},
  {"AddFileNames", PyvtkGlobFileNames_AddFileNames, METH_VARARGS,
   "AddFileNames(self, pattern:str) -> int\nC++: int AddFileNames(const char *pattern)\n\nSearch for all files that match the given expression, sort them,\nand add them to the output.  This method can be called repeatedly\nto add files matching additional patterns. Returns 1 if\nsuccessful, otherwise returns zero.\n"},
  {"SetRecurse", PyvtkGlobFileNames_SetRecurse, METH_VARARGS,
   "SetRecurse(self, _arg:int) -> None\nC++: virtual void SetRecurse(vtkTypeBool _arg)\n\nRecurse into subdirectories.\n"},
  {"RecurseOn", PyvtkGlobFileNames_RecurseOn, METH_VARARGS,
   "RecurseOn(self) -> None\nC++: virtual void RecurseOn()\n\n"},
  {"RecurseOff", PyvtkGlobFileNames_RecurseOff, METH_VARARGS,
   "RecurseOff(self) -> None\nC++: virtual void RecurseOff()\n\n"},
  {"GetRecurse", PyvtkGlobFileNames_GetRecurse, METH_VARARGS,
   "GetRecurse(self) -> int\nC++: virtual vtkTypeBool GetRecurse()\n\n"},
  {"GetNumberOfFileNames", PyvtkGlobFileNames_GetNumberOfFileNames, METH_VARARGS,
   "GetNumberOfFileNames(self) -> int\nC++: int GetNumberOfFileNames()\n\nReturn the number of files found.\n"},
  {"GetNthFileName", PyvtkGlobFileNames_GetNthFileName, METH_VARARGS,
   "GetNthFileName(self, index:int) -> str\nC++: const char *GetNthFileName(int index)\n\nReturn the file at the given index, the indexing is 0 based.\n"},
  {"GetFileNames", PyvtkGlobFileNames_GetFileNames, METH_VARARGS,
   "GetFileNames(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetFileNames()\n\nGet an array that contains all the file names.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGlobFileNames_Doc =
  "vtkGlobFileNames - find files that match a wildcard pattern\n\n"
  "Superclass: vtkObject\n\n"
  "vtkGlobFileNames is a utility for finding files and directories that\n"
  "match a given wildcard pattern.  Allowed wildcards are\n"
  "*, ?, [...], [!...]. The \"*\" wildcard matches any substring, the \"?\"\n"
  "   matches any single character, the [...] matches any one of the\n"
  "   enclosed characters, e.g. [abc] will match one of a, b, or c,\n"
  "   while [0-9] will match any digit, and [!...] will match any single\n"
  "   character except for the ones within the brackets.  Special\n"
  "   treatment is given to \"/\" (or \"\\\" on Windows) because these are\n"
  "   path separators.  These are never matched by a wildcard, they are\n"
  "   only matched with another file separator.\n"
  "@warning\n"
  "This function performs case-sensitive matches on UNIX and\n"
  "case-insensitive matches on Windows.\n"
  "@sa\n"
  "vtkDirectory\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGlobFileNames_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCore.vtkGlobFileNames", // tp_name
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
  PyvtkGlobFileNames_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGlobFileNames_StaticNew()
{
  return vtkGlobFileNames::New();
}

PyObject *PyvtkGlobFileNames_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGlobFileNames_Type, PyvtkGlobFileNames_Methods,
    "vtkGlobFileNames",
 &PyvtkGlobFileNames_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGlobFileNames(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGlobFileNames_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGlobFileNames", o) != 0)
  {
    Py_DECREF(o);
  }

}

