// python wrapper for vtkResourceFileLocator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkResourceFileLocator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResourceFileLocator(PyObject *dict); }
extern "C" { PyObject *PyvtkResourceFileLocator_ClassNew(); }


static PyObject *
PyvtkResourceFileLocator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResourceFileLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceFileLocator *op = static_cast<vtkResourceFileLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResourceFileLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResourceFileLocator *tempr = vtkResourceFileLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceFileLocator *op = static_cast<vtkResourceFileLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResourceFileLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResourceFileLocator::NewInstance());

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
PyvtkResourceFileLocator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkResourceFileLocator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceFileLocator *op = static_cast<vtkResourceFileLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkResourceFileLocator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_SetLogVerbosity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogVerbosity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceFileLocator *op = static_cast<vtkResourceFileLocator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLogVerbosity(temp0);
    }
    else
    {
      op->vtkResourceFileLocator::SetLogVerbosity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_GetLogVerbosity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogVerbosity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceFileLocator *op = static_cast<vtkResourceFileLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLogVerbosity() :
      op->vtkResourceFileLocator::GetLogVerbosity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_Locate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Locate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceFileLocator *op = static_cast<vtkResourceFileLocator *>(vp);

  std::string temp0;
  std::string temp1;
  std::string temp2 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    std::string tempr = (ap.IsBound() ?
      op->Locate(temp0, temp1, temp2) :
      op->vtkResourceFileLocator::Locate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkResourceFileLocator_Locate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Locate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceFileLocator *op = static_cast<vtkResourceFileLocator *>(vp);

  std::string temp0;
  std::vector<std::string> temp1(ap.GetArgSize(1));
  std::string temp2;
  std::string temp3 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    std::string tempr = (ap.IsBound() ?
      op->Locate(temp0, temp1, temp2, temp3) :
      op->vtkResourceFileLocator::Locate(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkResourceFileLocator_Locate_Methods[] = {
  {"Locate", PyvtkResourceFileLocator_Locate_s1, METH_VARARGS,
   "@ss|s"},
  {"Locate", PyvtkResourceFileLocator_Locate_s2, METH_VARARGS,
   "@sTs|s s"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkResourceFileLocator_Locate(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkResourceFileLocator_Locate_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkResourceFileLocator_Locate_s1(self, args);
    case 4:
      return PyvtkResourceFileLocator_Locate_s2(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Locate");
  return nullptr;
}


static PyObject *
PyvtkResourceFileLocator_GetLibraryPathForSymbolUnix(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLibraryPathForSymbolUnix");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkResourceFileLocator::GetLibraryPathForSymbolUnix(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceFileLocator_GetLibraryPathForSymbolWin32(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLibraryPathForSymbolWin32");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    std::string tempr = vtkResourceFileLocator::GetLibraryPathForSymbolWin32(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}

static PyMethodDef PyvtkResourceFileLocator_Methods[] = {
  {"IsTypeOf", PyvtkResourceFileLocator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkResourceFileLocator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkResourceFileLocator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkResourceFileLocator\nC++: static vtkResourceFileLocator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkResourceFileLocator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkResourceFileLocator\nC++: vtkResourceFileLocator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkResourceFileLocator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkResourceFileLocator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLogVerbosity", PyvtkResourceFileLocator_SetLogVerbosity, METH_VARARGS,
   "SetLogVerbosity(self, _arg:int) -> None\nC++: virtual void SetLogVerbosity(int _arg)\n\nThe log verbosity to use when logging information about the\nresource searching. Default is `vtkLogger::VERBOSITY_TRACE`.\n"},
  {"GetLogVerbosity", PyvtkResourceFileLocator_GetLogVerbosity, METH_VARARGS,
   "GetLogVerbosity(self) -> int\nC++: virtual int GetLogVerbosity()\n\n"},
  {"Locate", PyvtkResourceFileLocator_Locate, METH_VARARGS,
   "Locate(self, anchor:str, landmark:str, defaultDir:str=...) -> str\nC++: virtual std::string Locate(const std::string &anchor,\n    const std::string &landmark,\n    const std::string &defaultDir=std::string())\nLocate(self, anchor:str, landmark_prefixes:(str, ...),\n    landmark:str, defaultDir:str=...) -> str\nC++: virtual std::string Locate(const std::string &anchor,\n    const std::vector<std::string> &landmark_prefixes,\n    const std::string &landmark,\n    const std::string &defaultDir=std::string())\n\nGiven a starting anchor directory, look for the landmark file\nrelative to the anchor. If found return the anchor. If not found,\ngo one directory up and then look the landmark file again.\n"},
  {"GetLibraryPathForSymbolUnix", PyvtkResourceFileLocator_GetLibraryPathForSymbolUnix, METH_VARARGS,
   "GetLibraryPathForSymbolUnix(symbolname:str) -> str\nC++: static std::string GetLibraryPathForSymbolUnix(\n    const char *symbolname)\n\nReturns the name of the library providing the symbol. For\nexample, if you want to locate where the VTK libraries located\ncall `GetLibraryPathForSymbolUnix(\"GetVTKVersion\")` on Unixes and\n`GetLibraryPathForSymbolWin32(GetVTKVersion)` on Windows.\nAlternatively, you can simply use the\n`vtkGetLibraryPathForSymbol(GetVTKVersion)` macro that makes the\nappropriate call as per the current platform.\n"},
  {"GetLibraryPathForSymbolWin32", PyvtkResourceFileLocator_GetLibraryPathForSymbolWin32, METH_VARARGS,
   "GetLibraryPathForSymbolWin32(fptr:Pointer) -> str\nC++: static std::string GetLibraryPathForSymbolWin32(\n    const void *fptr)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkResourceFileLocator_Doc =
  "vtkResourceFileLocator - utility to locate resource files.\n\n"
  "Superclass: vtkObject\n\n"
  "VTK based application often need to locate resource files, such\n"
  "configuration files, Python modules, etc. vtkResourceFileLocator\n"
  "provides methods that can be used to locate such resource files at\n"
  "runtime.\n\n"
  "Using `Locate`, one can locate files relative to an anchor directory\n"
  "such as the executable directory, or the library directory.\n\n"
  "`GetLibraryPathForSymbolUnix` and `GetLibraryPathForSymbolWin32`\n"
  "methods can be used to locate the library that provides a particular\n"
  "symbol. For example, this is used by `vtkPythonInterpreter` to ensure\n"
  "that the `vtk` Python package is located relative the VTK libraries,\n"
  "irrespective of the application location.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkResourceFileLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonMisc.vtkResourceFileLocator", // tp_name
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
  PyvtkResourceFileLocator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResourceFileLocator_StaticNew()
{
  return vtkResourceFileLocator::New();
}

PyObject *PyvtkResourceFileLocator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkResourceFileLocator_Type, PyvtkResourceFileLocator_Methods,
    "vtkResourceFileLocator",
 &PyvtkResourceFileLocator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkResourceFileLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResourceFileLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResourceFileLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

