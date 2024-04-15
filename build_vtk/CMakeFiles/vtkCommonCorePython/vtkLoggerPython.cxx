// python wrapper for vtkLogger
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLogger.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLogger(PyObject *dict); }
extern "C" { PyObject *PyvtkLogger_ClassNew(); }

#ifndef DECLARED_PyvtkObjectBase_ClassNew
extern "C" { PyObject *PyvtkObjectBase_ClassNew(); }
#define DECLARED_PyvtkObjectBase_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLogger_Verbosity_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkLogger.Verbosity", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkLogger_Verbosity_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkLogger_Verbosity_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLogger_FileMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkLogger.FileMode", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkLogger_FileMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkLogger_FileMode_Type, static_cast<int>(val));
}


static PyObject *
PyvtkLogger_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLogger::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogger *op = static_cast<vtkLogger *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLogger::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLogger *tempr = vtkLogger::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogger *op = static_cast<vtkLogger *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLogger *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLogger::NewInstance());

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
PyvtkLogger_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLogger::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogger *op = static_cast<vtkLogger *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLogger::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_Init(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Init");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkLogger::Init();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_SetStderrVerbosity(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetStderrVerbosity");

  typedef vtkLogger::Verbosity temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkLogger.Verbosity"))
  {
    vtkLogger::SetStderrVerbosity(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_SetInternalVerbosityLevel(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetInternalVerbosityLevel");

  typedef vtkLogger::Verbosity temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkLogger.Verbosity"))
  {
    vtkLogger::SetInternalVerbosityLevel(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_LogToFile(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "LogToFile");

  const char *temp0 = nullptr;
  typedef vtkLogger::FileMode temp1_type;
  temp1_type temp1;
  typedef vtkLogger::Verbosity temp2_type;
  temp2_type temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetEnumValue(temp1, "vtkLogger.FileMode") &&
      ap.GetEnumValue(temp2, "vtkLogger.Verbosity"))
  {
    vtkLogger::LogToFile(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_EndLogToFile(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "EndLogToFile");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkLogger::EndLogToFile(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_SetThreadName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetThreadName");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkLogger::SetThreadName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_GetThreadName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetThreadName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkLogger::GetThreadName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_GetIdentifier(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetIdentifier");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    std::string tempr = vtkLogger::GetIdentifier(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_RemoveCallback(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RemoveCallback");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkLogger::RemoveCallback(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_IsEnabled(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsEnabled");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkLogger::IsEnabled();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_GetCurrentVerbosityCutoff(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurrentVerbosityCutoff");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    typedef vtkLogger::Verbosity tempr_type;
  tempr_type tempr = vtkLogger::GetCurrentVerbosityCutoff();

    if (!ap.ErrorOccurred())
    {
      result = PyvtkLogger_Verbosity_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_ConvertToVerbosity_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertToVerbosity");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    typedef vtkLogger::Verbosity tempr_type;
  tempr_type tempr = vtkLogger::ConvertToVerbosity(temp0);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkLogger_Verbosity_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLogger_ConvertToVerbosity_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertToVerbosity");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    typedef vtkLogger::Verbosity tempr_type;
  tempr_type tempr = vtkLogger::ConvertToVerbosity(temp0);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkLogger_Verbosity_FromEnum(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLogger_ConvertToVerbosity_Methods[] = {
  {"ConvertToVerbosity", PyvtkLogger_ConvertToVerbosity_s1, METH_VARARGS | METH_STATIC,
   "i"},
  {"ConvertToVerbosity", PyvtkLogger_ConvertToVerbosity_s2, METH_VARARGS | METH_STATIC,
   "z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLogger_ConvertToVerbosity(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLogger_ConvertToVerbosity_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ConvertToVerbosity");
  return nullptr;
}


static PyObject *
PyvtkLogger_Log(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Log");

  typedef vtkLogger::Verbosity temp0_type;
  temp0_type temp0;
  const char *temp1 = nullptr;
  unsigned int temp2;
  const char *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetEnumValue(temp0, "vtkLogger.Verbosity") &&
      ap.GetFilePath(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkLogger::Log(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_StartScope(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "StartScope");

  typedef vtkLogger::Verbosity temp0_type;
  temp0_type temp0;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetEnumValue(temp0, "vtkLogger.Verbosity") &&
      ap.GetValue(temp1) &&
      ap.GetFilePath(temp2) &&
      ap.GetValue(temp3))
  {
    vtkLogger::StartScope(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLogger_EndScope(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "EndScope");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkLogger::EndScope(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLogger_Methods[] = {
  {"IsTypeOf", PyvtkLogger_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLogger_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLogger_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLogger\nC++: static vtkLogger *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLogger_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLogger\nC++: vtkLogger *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLogger_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLogger_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Init", PyvtkLogger_Init, METH_VARARGS,
   "Init() -> None\nC++: static void Init()\n\n"},
  {"SetStderrVerbosity", PyvtkLogger_SetStderrVerbosity, METH_VARARGS,
   "SetStderrVerbosity(level:Verbosity) -> None\nC++: static void SetStderrVerbosity(Verbosity level)\n\nSet the verbosity level for the output logged to stderr.\nEverything with a verbosity equal or less than the level\nspecified will be written to stderr. Set to `VERBOSITY_OFF` to\nwrite nothing to stderr. Default is 0.\n"},
  {"SetInternalVerbosityLevel", PyvtkLogger_SetInternalVerbosityLevel, METH_VARARGS,
   "SetInternalVerbosityLevel(level:Verbosity) -> None\nC++: static void SetInternalVerbosityLevel(Verbosity level)\n\nSet internal messages verbosity level. The library used by VTK,\n`loguru` generates log messages during initialization and at\nexit. These are logged as log level VERBOSITY_1, by default. One\ncan change that using this method. Typically, you want to call\nthis before `vtkLogger::Init`.\n"},
  {"LogToFile", PyvtkLogger_LogToFile, METH_VARARGS,
   "LogToFile(path:str, filemode:FileMode, verbosity:Verbosity)\n    -> None\nC++: static void LogToFile(const char *path, FileMode filemode,\n    Verbosity verbosity)\n\nEnable logging to a file at the given path. Any logging message\nwith verbosity lower or equal to the given verbosity will be\nincluded. This method will create all directories in the 'path'\nif needed. To stop the file logging, call `EndLogToFile` with the\nsame path.\n"},
  {"EndLogToFile", PyvtkLogger_EndLogToFile, METH_VARARGS,
   "EndLogToFile(path:str) -> None\nC++: static void EndLogToFile(const char *path)\n\nStop logging to a file at the given path.\n"},
  {"SetThreadName", PyvtkLogger_SetThreadName, METH_VARARGS,
   "SetThreadName(name:str) -> None\nC++: static void SetThreadName(const std::string &name)\n\nGet/Set the name to identify the current thread in the log\noutput.\n"},
  {"GetThreadName", PyvtkLogger_GetThreadName, METH_VARARGS,
   "GetThreadName() -> str\nC++: static std::string GetThreadName()\n\n"},
  {"GetIdentifier", PyvtkLogger_GetIdentifier, METH_VARARGS,
   "GetIdentifier(obj:vtkObjectBase) -> str\nC++: static std::string GetIdentifier(vtkObjectBase *obj)\n\nReturns a printable string for a vtkObjectBase instance.\n"},
  {"RemoveCallback", PyvtkLogger_RemoveCallback, METH_VARARGS,
   "RemoveCallback(id:str) -> bool\nC++: static bool RemoveCallback(const char *id)\n\nRemove a callback using the id specified. Returns true if and\nonly if the callback was found (and removed).\n"},
  {"IsEnabled", PyvtkLogger_IsEnabled, METH_VARARGS,
   "IsEnabled() -> bool\nC++: static bool IsEnabled()\n\nReturns true if VTK is built with logging support enabled.\n"},
  {"GetCurrentVerbosityCutoff", PyvtkLogger_GetCurrentVerbosityCutoff, METH_VARARGS,
   "GetCurrentVerbosityCutoff() -> Verbosity\nC++: static Verbosity GetCurrentVerbosityCutoff()\n\nReturns the maximum verbosity of all log outputs. A log item for\na verbosity higher than this will not be generated in any of the\ncurrently active outputs.\n"},
  {"ConvertToVerbosity", PyvtkLogger_ConvertToVerbosity, METH_VARARGS,
   "ConvertToVerbosity(value:int) -> Verbosity\nC++: static Verbosity ConvertToVerbosity(int value)\nConvertToVerbosity(text:str) -> Verbosity\nC++: static Verbosity ConvertToVerbosity(const char *text)\n\nConvenience function to convert an integer to matching verbosity\nlevel. If val is less than or equal to\nvtkLogger::VERBOSITY_INVALID, then vtkLogger::VERBOSITY_INVALID\nis returned. If value is greater than vtkLogger::VERBOSITY_MAX,\nthen vtkLogger::VERBOSITY_MAX is returned.\n"},
  {"Log", PyvtkLogger_Log, METH_VARARGS,
   "Log(verbosity:Verbosity, fname:str, lineno:int, txt:str) -> None\nC++: static void Log(Verbosity verbosity, const char *fname,\n    unsigned int lineno, const char *txt)\n\n"},
  {"StartScope", PyvtkLogger_StartScope, METH_VARARGS,
   "StartScope(verbosity:Verbosity, id:str, fname:str, lineno:int)\n    -> None\nC++: static void StartScope(Verbosity verbosity, const char *id,\n    const char *fname, unsigned int lineno)\n\n"},
  {"EndScope", PyvtkLogger_EndScope, METH_VARARGS,
   "EndScope(id:str) -> None\nC++: static void EndScope(const char *id)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLogger_Doc =
  "vtkLogger - logging framework for use in VTK and in applications\nbased on VTK\n\n"
  "Superclass: vtkObjectBase\n\n"
  "vtkLogger acts as the entry point to VTK's logging framework. The\n"
  "implementation uses the loguru (https://github.com/emilk/loguru).\n"
  "vtkLogger provides some static API to initialize and configure\n"
  "logging together with a collection of macros that can be used to add\n"
  "items to the generated log.\n\n"
  "The logging framework is based on verbosity levels. Level 0-9 are\n"
  "supported in addition to named levels such as ERROR, WARNING, and\n"
  "INFO. When a log for a particular verbosity level is being generated,\n"
  "all log additions issued with verbosity level less than or equal to\n"
  "the requested verbosity level will get logged.\n\n"
  "When using any of the logging macros, it must be noted that unless a\n"
  "log output is requesting that verbosity provided (or higher), the\n"
  "call is a no-op and the message stream or printf-style arguments will\n"
  "not be evaluated.\n\n"
  "@section Setup Setup\n\n"
  "To initialize logging, in your application's `main()` you may call\n"
  "`vtkLogger::Init(argv, argc)`. This is totally optional but useful to\n"
  "time-stamp the  start of the  log. Furthermore, it can optionally\n"
  "detect verbosity level on the command line as `-v` (or any another\n"
  "string pass as the optional argument to `Init`) that will be used as\n"
  "the verbosity level for logging on to `stderr`. By default, it is set\n"
  "to `0` (or `INFO`) unless changed by calling\n"
  "`vtkLogger::SetStderrVerbosity`.\n\n"
  "In additional to logging to `stderr`, one can accumulate logs to one\n"
  "or more files using `vtkLogger::LogToFile`. Each log file can be\n"
  "given its own verbosity level.\n\n"
  "For multithreaded applications, you may want to name each of the\n"
  "threads so that the generated log can use human readable names for\n"
  "the threads. For that, use `vtkLogger::SetThreadName`. Calling\n"
  "`vtkLogger::Init` will set the name for the main thread.\n\n"
  "To prevent the logging framework from intercepting signals from your\n"
  "application, you can set the static variable\n"
  "`vtkLogger::EnableUnsafeSignalHandler` to `false` prior to calling\n"
  "`vtkLogger::Init(argc, argv)` or `vtkLogger::Init()`.\n\n"
  "@section Logging Logging\n\n"
  "vtkLogger provides several macros (again, based on `loguru`) that can\n"
  "be used to add the log. Both printf-style and stream-style is\n"
  "supported. All printf-style macros are suffixed with `F` to\n"
  "distinguish them from the stream macros. Another pattern in naming\n"
  "macros is the presence of `V` e.g. `vtkVLog` vs `vtkLog`. A macro\n"
  "with the `V` prefix takes a fully qualified verbosity enum e.g.\n"
  "`vtkLogger::VERBOSITY_INFO` or `vtkLogger::VERBOSITY_0`, while the\n"
  "non-`V` variant takes the verbosity name e.g. `INFO` or `0`.\n\n"
  "Following code snippet provides an overview of the available macros\n"
  "and their usage.\n\n"
  "{.cpp}\n\n\n"
  " // Optional, leaving this as the default value `true` will let the\n"
  "logging\n"
  " // framework log signals such as segmentation faults.\n\n\n"
  " vtkLogger::EnableUnsafeSignalHandler = false;\n\n\n"
  " // Optional, but useful to time-stamp the start of the log.\n"
  " // Will also detect verbosity level on the command line as -v.\n\n\n"
  " vtkLogger::Init(argc, argv);\n\n\n"
  " // Put every log message in \"everything.log\":\n"
  " vtkLogger::LogToFile(\"everything.log\", vtkLogger::APPEND,\n"
  "vtkLogger::VERBOSITY_MAX);\n\n\n"
  " // Only log INFO, WARNING, ERROR to \"latest_readable.log\":\n"
  " vtkLogger::LogToFile(\"latest_readable.log\", vtkLogger::TRUNCATE,\n"
  "vtkLogger::VERBOSITY_INFO);\n\n\n"
  " // Only show most relevant things on stderr:\n"
  " vtkLogger::SetStderrVerbosity(vtkLogger::VERBOSITY_1);\n\n\n"
  " // add a line to log using the verbosity name.\n"
  " vtkLogF(INFO, \"I'm hungry for some %.3f!\", 3.14159);\n"
  " vtkLogF(0, \"same deal\");\n\n\n"
  " // add a line to log using the verbosity enum.\n"
  " vtkVLogF(vtkLogger::VERBOSITY_INFO, \"I'm hungry for some %.3f!\",\n"
  "3.14159);\n"
  " vtkVLogF(vtkLogger::VERBOSITY_0, \"same deal\");\n\n\n"
  " // to add an identifier for a vtkObjectBase or subclass\n"
  " vtkLogF(INFO, \"The object is %s\", vtkLogIdentifier(vtkobject));\n\n\n"
  " // add a line conditionally to log if the condition succeeds:\n"
  " vtkLogIfF(INFO, ptr == nullptr, \"ptr is nullptr (some number:\n"
  "%.3f)\", *  3.14159);\n\n\n"
  " vtkLogScopeF(INFO, \"Will indent all log messages within this\n"
  "scope.\");\n"
  " // in a function, you may use vtkLogScopeFunction(INFO)\n\n\n"
  " // scope can be explicitly started and closed by vtkLogStartScope\n"
  "(or\n"
  " // vtkLogStartScopef) and vtkLogEndScope\n"
  " vtkLogStartScope(INFO, \"id-used-as-message\");\n"
  " vtkLogStartScopeF(INFO, \"id\", \"message-%d\", 1);\n"
  " vtkLogEndScope(\"id\");\n"
  " vtkLogEndScope(\"id-used-as-message\");\n\n\n"
  " // alternatively, you can use streams instead of printf-style\n"
  " vtkLog(INFO, \"I'm hungry for some \" << 3.14159 << \"!\");\n"
  " vtkLogIF(INFO, ptr == nullptr, \"ptr is \" << \"nullptr\");\n\n"
  "@section LoggingAndLegacyMacros Logging and VTK error macros\n\n"
  "VTK has long supported multiple macros to report errors, warnings and\n"
  "debug messages through `vtkErrorMacro`, `vtkWarningMacro`,\n"
  "`vtkDebugMacro`, etc. In addition to performing the traditional\n"
  "message reporting via `vtkOutputWindow`, these macros also log to the\n"
  "logging sub-system with appropriate verbosity levels.\n\n"
  "To avoid the vtkLogger and vtkOutputWindow both posting the message\n"
  "to the standard output streams, vtkOutputWindow now supports an\n"
  "ability to specify terminal display mode, via\n"
  "`vtkOutputWindow::SetDisplayMode`. If display mode is\n"
  "`vtkOutputWindow::DEFAULT` then the output window will not post\n"
  "messages originating from the standard error/warning/debug macros to\n"
  "the standard output if VTK is built with logging support. If VTK is\n"
  "not built with logging support, then vtkOutputWindow will post the\n"
  "messages to the standard output streams, unless disabled explicitly.\n\n"
  "@section Callbacks Custom callbacks/handlers for log messages\n\n"
  "vtkLogger supports ability to register callbacks to call on each\n"
  "logged message. This is useful to show the messages in application\n"
  "specific viewports, e.g. a special message widget.\n\n"
  "To register a callback use `vtkLogger::AddCallback` and to remove a\n"
  "callback use `vtkLogger::RemoveCallback` with the id provided when\n"
  "registering the callback.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLogger_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkLogger", // tp_name
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
  PyvtkLogger_Doc, // tp_doc
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

PyObject *PyvtkLogger_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLogger_Type, PyvtkLogger_Methods,
    "vtkLogger",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObjectBase_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkLogger_Verbosity_Type);
  PyVTKEnum_Add(&PyvtkLogger_Verbosity_Type, "vtkLogger.Verbosity");

  o = (PyObject *)&PyvtkLogger_Verbosity_Type;
  if (PyDict_SetItemString(d, "Verbosity", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkLogger_FileMode_Type);
  PyVTKEnum_Add(&PyvtkLogger_FileMode_Type, "vtkLogger.FileMode");

  o = (PyObject *)&PyvtkLogger_FileMode_Type;
  if (PyDict_SetItemString(d, "FileMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 17; c++)
  {
    typedef vtkLogger::Verbosity cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[17] = {
        { "VERBOSITY_INVALID", vtkLogger::VERBOSITY_INVALID },
        { "VERBOSITY_OFF", vtkLogger::VERBOSITY_OFF },
        { "VERBOSITY_ERROR", vtkLogger::VERBOSITY_ERROR },
        { "VERBOSITY_WARNING", vtkLogger::VERBOSITY_WARNING },
        { "VERBOSITY_INFO", vtkLogger::VERBOSITY_INFO },
        { "VERBOSITY_0", vtkLogger::VERBOSITY_0 },
        { "VERBOSITY_1", vtkLogger::VERBOSITY_1 },
        { "VERBOSITY_2", vtkLogger::VERBOSITY_2 },
        { "VERBOSITY_3", vtkLogger::VERBOSITY_3 },
        { "VERBOSITY_4", vtkLogger::VERBOSITY_4 },
        { "VERBOSITY_5", vtkLogger::VERBOSITY_5 },
        { "VERBOSITY_6", vtkLogger::VERBOSITY_6 },
        { "VERBOSITY_7", vtkLogger::VERBOSITY_7 },
        { "VERBOSITY_8", vtkLogger::VERBOSITY_8 },
        { "VERBOSITY_9", vtkLogger::VERBOSITY_9 },
        { "VERBOSITY_TRACE", vtkLogger::VERBOSITY_TRACE },
        { "VERBOSITY_MAX", vtkLogger::VERBOSITY_MAX },
      };

    o = PyvtkLogger_Verbosity_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkLogger::FileMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "TRUNCATE", vtkLogger::TRUNCATE },
        { "APPEND", vtkLogger::APPEND },
      };

    o = PyvtkLogger_FileMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLogger(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLogger_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLogger", o) != 0)
  {
    Py_DECREF(o);
  }

}

