// python wrapper for vtkTimerLog
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTimerLog.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTimerLog(PyObject *dict); }
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTimerLogEntry_LogEntryType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonSystem.vtkTimerLogEntry.LogEntryType", // tp_name
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
PyObject *PyvtkTimerLogEntry_LogEntryType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkTimerLogEntry_LogEntryType_Type, static_cast<int>(val));
}

static PyMethodDef PyvtkTimerLogEntry_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTimerLogEntry_vtkTimerLogEntry_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTimerLogEntry");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTimerLogEntry *op = new vtkTimerLogEntry();

    result = PyVTKSpecialObject_New("vtkTimerLogEntry", op);
  }

  return result;
}

static PyObject *
PyvtkTimerLogEntry_vtkTimerLogEntry_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTimerLogEntry");

  vtkTimerLogEntry *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTimerLogEntry"))
  {
    vtkTimerLogEntry *op = new vtkTimerLogEntry(*temp0);

    result = PyVTKSpecialObject_New("vtkTimerLogEntry", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTimerLogEntry_vtkTimerLogEntry_Methods[] = {
  {"vtkTimerLogEntry", PyvtkTimerLogEntry_vtkTimerLogEntry_s2, METH_VARARGS,
   "@W vtkTimerLogEntry"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTimerLogEntry_vtkTimerLogEntry(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTimerLogEntry_vtkTimerLogEntry_s1(self, args);
    case 1:
      return PyvtkTimerLogEntry_vtkTimerLogEntry_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTimerLogEntry");
  return nullptr;
}


static const char *PyvtkTimerLogEntry_Doc =

  "vtkTimerLogEntry() -> vtkTimerLogEntry\nC++: vtkTimerLogEntry()\nvtkTimerLogEntry(__a:vtkTimerLogEntry) -> vtkTimerLogEntry\nC++: vtkTimerLogEntry(const &vtkTimerLogEntry)\n""\n"
  "vtkTimerLogEntry - no description provided.\n\n"
;

static PyObject *
PyvtkTimerLogEntry_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTimerLogEntry_vtkTimerLogEntry(nullptr, args);
}

static void PyvtkTimerLogEntry_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTimerLogEntry *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkTimerLogEntry_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTimerLogEntry_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonSystem.vtkTimerLogEntry", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTimerLogEntry_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTimerLogEntry_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTimerLogEntry_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkTimerLogEntry_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTimerLogEntry_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTimerLogEntry(*static_cast<const vtkTimerLogEntry*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkTimerLogEntry_TypeNew
extern "C" { PyObject *PyvtkTimerLogEntry_TypeNew(); }
#define DECLARED_PyvtkTimerLogEntry_TypeNew
#endif

PyObject *PyvtkTimerLogEntry_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkTimerLogEntry_Type,
    PyvtkTimerLogEntry_Methods,
    PyvtkTimerLogEntry_vtkTimerLogEntry_Methods,
    &PyvtkTimerLogEntry_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkTimerLogEntry_LogEntryType_Type);
  PyVTKEnum_Add(&PyvtkTimerLogEntry_LogEntryType_Type, "vtkTimerLogEntry.LogEntryType");

  o = (PyObject *)&PyvtkTimerLogEntry_LogEntryType_Type;
  if (PyDict_SetItemString(d, "LogEntryType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkTimerLogEntry::LogEntryType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "INVALID", vtkTimerLogEntry::INVALID },
        { "STANDALONE", vtkTimerLogEntry::STANDALONE },
        { "START", vtkTimerLogEntry::START },
        { "END", vtkTimerLogEntry::END },
        { "INSERTED", vtkTimerLogEntry::INSERTED },
      };

    o = PyvtkTimerLogEntry_LogEntryType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkTimerLog_ClassNew(); }


static PyObject *
PyvtkTimerLog_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTimerLog::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTimerLog::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTimerLog *tempr = vtkTimerLog::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimerLog *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTimerLog::NewInstance());

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
PyvtkTimerLog_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTimerLog::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTimerLog::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_SetLogging(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetLogging");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTimerLog::SetLogging(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_GetLogging(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLogging");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkTimerLog::GetLogging();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_LoggingOn(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "LoggingOn");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTimerLog::LoggingOn();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_LoggingOff(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "LoggingOff");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTimerLog::LoggingOff();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_SetMaxEntries(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetMaxEntries");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTimerLog::SetMaxEntries(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_GetMaxEntries(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMaxEntries");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkTimerLog::GetMaxEntries();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_DumpLog(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DumpLog");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    vtkTimerLog::DumpLog(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_MarkStartEvent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MarkStartEvent");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTimerLog::MarkStartEvent(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_MarkEndEvent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MarkEndEvent");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTimerLog::MarkEndEvent(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_InsertTimedEvent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "InsertTimedEvent");

  const char *temp0 = nullptr;
  double temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkTimerLog::InsertTimedEvent(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_GetNumberOfEvents(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfEvents");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkTimerLog::GetNumberOfEvents();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_GetEventIndent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventIndent");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTimerLog::GetEventIndent(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_GetEventWallTime(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventWallTime");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = vtkTimerLog::GetEventWallTime(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_GetEventString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkTimerLog::GetEventString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_GetEventType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventType");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTimerLogEntry::LogEntryType tempr = vtkTimerLog::GetEventType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkTimerLogEntry.LogEntryType");
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_MarkEvent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MarkEvent");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTimerLog::MarkEvent(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_ResetLog(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ResetLog");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTimerLog::ResetLog();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_CleanupLog(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CleanupLog");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTimerLog::CleanupLog();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_GetUniversalTime(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUniversalTime");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double tempr = vtkTimerLog::GetUniversalTime();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_GetCPUTime(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCPUTime");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double tempr = vtkTimerLog::GetCPUTime();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_StartTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartTimer();
    }
    else
    {
      op->vtkTimerLog::StartTimer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_StopTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StopTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StopTimer();
    }
    else
    {
      op->vtkTimerLog::StopTimer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimerLog_GetElapsedTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElapsedTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimerLog *op = static_cast<vtkTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetElapsedTime() :
      op->vtkTimerLog::GetElapsedTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTimerLog_Methods[] = {
  {"IsTypeOf", PyvtkTimerLog_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTimerLog_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTimerLog_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTimerLog\nC++: static vtkTimerLog *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTimerLog_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTimerLog\nC++: vtkTimerLog *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTimerLog_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTimerLog_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLogging", PyvtkTimerLog_SetLogging, METH_VARARGS,
   "SetLogging(v:int) -> None\nC++: static void SetLogging(int v)\n\nThis flag will turn logging of events off or on. By default,\nlogging is on.\n"},
  {"GetLogging", PyvtkTimerLog_GetLogging, METH_VARARGS,
   "GetLogging() -> int\nC++: static int GetLogging()\n\n"},
  {"LoggingOn", PyvtkTimerLog_LoggingOn, METH_VARARGS,
   "LoggingOn() -> None\nC++: static void LoggingOn()\n\n"},
  {"LoggingOff", PyvtkTimerLog_LoggingOff, METH_VARARGS,
   "LoggingOff() -> None\nC++: static void LoggingOff()\n\n"},
  {"SetMaxEntries", PyvtkTimerLog_SetMaxEntries, METH_VARARGS,
   "SetMaxEntries(a:int) -> None\nC++: static void SetMaxEntries(int a)\n\nSet/Get the maximum number of entries allowed in the timer log\n"},
  {"GetMaxEntries", PyvtkTimerLog_GetMaxEntries, METH_VARARGS,
   "GetMaxEntries() -> int\nC++: static int GetMaxEntries()\n\n"},
  {"DumpLog", PyvtkTimerLog_DumpLog, METH_VARARGS,
   "DumpLog(filename:str) -> None\nC++: static void DumpLog(const char *filename)\n\nWrite the timing table out to a file.  Calculate some helpful\nstatistics (deltas and percentages) in the process.\n"},
  {"MarkStartEvent", PyvtkTimerLog_MarkStartEvent, METH_VARARGS,
   "MarkStartEvent(EventString:str) -> None\nC++: static void MarkStartEvent(const char *EventString)\n\nI want to time events, so I am creating this interface to mark\nevents that have a start and an end.  These events can be,\nnested. The standard Dumplog ignores the indents.\n"},
  {"MarkEndEvent", PyvtkTimerLog_MarkEndEvent, METH_VARARGS,
   "MarkEndEvent(EventString:str) -> None\nC++: static void MarkEndEvent(const char *EventString)\n\n"},
  {"InsertTimedEvent", PyvtkTimerLog_InsertTimedEvent, METH_VARARGS,
   "InsertTimedEvent(EventString:str, time:float, cpuTicks:int)\n    -> None\nC++: static void InsertTimedEvent(const char *EventString,\n    double time, int cpuTicks)\n\nInsert an event with a known wall time value (in seconds) and\ncpuTicks.\n"},
  {"GetNumberOfEvents", PyvtkTimerLog_GetNumberOfEvents, METH_VARARGS,
   "GetNumberOfEvents() -> int\nC++: static int GetNumberOfEvents()\n\nProgrammatic access to events.  Indexed from 0 to num-1.\n"},
  {"GetEventIndent", PyvtkTimerLog_GetEventIndent, METH_VARARGS,
   "GetEventIndent(i:int) -> int\nC++: static int GetEventIndent(int i)\n\n"},
  {"GetEventWallTime", PyvtkTimerLog_GetEventWallTime, METH_VARARGS,
   "GetEventWallTime(i:int) -> float\nC++: static double GetEventWallTime(int i)\n\n"},
  {"GetEventString", PyvtkTimerLog_GetEventString, METH_VARARGS,
   "GetEventString(i:int) -> str\nC++: static const char *GetEventString(int i)\n\n"},
  {"GetEventType", PyvtkTimerLog_GetEventType, METH_VARARGS,
   "GetEventType(i:int) -> vtkTimerLogEntry.LogEntryType\nC++: static vtkTimerLogEntry::LogEntryType GetEventType(int i)\n\n"},
  {"MarkEvent", PyvtkTimerLog_MarkEvent, METH_VARARGS,
   "MarkEvent(EventString:str) -> None\nC++: static void MarkEvent(const char *EventString)\n\nRecord a timing event and capture wall time and cpu ticks.\n"},
  {"ResetLog", PyvtkTimerLog_ResetLog, METH_VARARGS,
   "ResetLog() -> None\nC++: static void ResetLog()\n\nClear the timing table.  walltime and cputime will also be set to\nzero when the first new event is recorded.\n"},
  {"CleanupLog", PyvtkTimerLog_CleanupLog, METH_VARARGS,
   "CleanupLog() -> None\nC++: static void CleanupLog()\n\nRemove timer log.\n"},
  {"GetUniversalTime", PyvtkTimerLog_GetUniversalTime, METH_VARARGS,
   "GetUniversalTime() -> float\nC++: static double GetUniversalTime()\n\nReturns the elapsed number of seconds since 00:00:00 Coordinated\nUniversal Time (UTC), Thursday, 1 January 1970. This is also\ncalled Unix Time.\n"},
  {"GetCPUTime", PyvtkTimerLog_GetCPUTime, METH_VARARGS,
   "GetCPUTime() -> float\nC++: static double GetCPUTime()\n\nReturns the CPU time for this process On Win32 platforms this\nactually returns wall time.\n"},
  {"StartTimer", PyvtkTimerLog_StartTimer, METH_VARARGS,
   "StartTimer(self) -> None\nC++: void StartTimer()\n\nSet the StartTime to the current time. Used with\nGetElapsedTime().\n"},
  {"StopTimer", PyvtkTimerLog_StopTimer, METH_VARARGS,
   "StopTimer(self) -> None\nC++: void StopTimer()\n\nSets EndTime to the current time. Used with GetElapsedTime().\n"},
  {"GetElapsedTime", PyvtkTimerLog_GetElapsedTime, METH_VARARGS,
   "GetElapsedTime(self) -> float\nC++: double GetElapsedTime()\n\nReturns the difference between StartTime and EndTime as a\ndoubleing point value indicating the elapsed time in seconds.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTimerLog_Doc =
  "vtkTimerLog - Timer support and logging\n\n"
  "Superclass: vtkObject\n\n"
  "vtkTimerLog contains walltime and cputime measurements associated\n"
  "with a given event.  These results can be later analyzed when \"dumping\n"
  "out\" the table.\n\n"
  "In addition, vtkTimerLog allows the user to simply get the current\n"
  "time, and to start/stop a simple timer separate from the timing table\n"
  "logging.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTimerLog_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonSystem.vtkTimerLog", // tp_name
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
  PyvtkTimerLog_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTimerLog_StaticNew()
{
  return vtkTimerLog::New();
}

PyObject *PyvtkTimerLog_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTimerLog_Type, PyvtkTimerLog_Methods,
    "vtkTimerLog",
 &PyvtkTimerLog_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkTimerLogScope_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTimerLogScope_vtkTimerLogScope(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTimerLogScope");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTimerLogScope *op = new vtkTimerLogScope(temp0);

    result = PyVTKSpecialObject_New("vtkTimerLogScope", op);
  }

  return result;
}

static PyMethodDef PyvtkTimerLogScope_vtkTimerLogScope_Methods[] = {
  {"vtkTimerLogScope", PyvtkTimerLogScope_vtkTimerLogScope, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkTimerLogScope_Doc =

  "vtkTimerLogScope(eventString:str) -> vtkTimerLogScope\nC++: vtkTimerLogScope(const char *eventString)\n""\n"
  "vtkTimerLogScope - Helper class to log time within scope\n\n"
;

static PyObject *
PyvtkTimerLogScope_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTimerLogScope_vtkTimerLogScope(nullptr, args);
}

static void PyvtkTimerLogScope_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTimerLogScope *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkTimerLogScope_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTimerLogScope_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonSystem.vtkTimerLogScope", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTimerLogScope_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTimerLogScope_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTimerLogScope_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkTimerLogScope_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkTimerLogScope_TypeNew
extern "C" { PyObject *PyvtkTimerLogScope_TypeNew(); }
#define DECLARED_PyvtkTimerLogScope_TypeNew
#endif

PyObject *PyvtkTimerLogScope_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkTimerLogScope_Type,
    PyvtkTimerLogScope_Methods,
    PyvtkTimerLogScope_vtkTimerLogScope_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkTimerLogCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTimerLogCleanup_vtkTimerLogCleanup(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTimerLogCleanup");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTimerLogCleanup *op = new vtkTimerLogCleanup();

    result = PyVTKSpecialObject_New("vtkTimerLogCleanup", op);
  }

  return result;
}

static PyMethodDef PyvtkTimerLogCleanup_vtkTimerLogCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkTimerLogCleanup_Doc =

  "vtkTimerLogCleanup() -> vtkTimerLogCleanup\nC++: vtkTimerLogCleanup()\n""\n"
  "vtkTimerLogCleanup - no description provided.\n\n"
;

static PyObject *
PyvtkTimerLogCleanup_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTimerLogCleanup_vtkTimerLogCleanup(nullptr, args);
}

static void PyvtkTimerLogCleanup_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTimerLogCleanup *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkTimerLogCleanup_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTimerLogCleanup_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonSystem.vtkTimerLogCleanup", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTimerLogCleanup_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTimerLogCleanup_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTimerLogCleanup_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkTimerLogCleanup_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkTimerLogCleanup_TypeNew
extern "C" { PyObject *PyvtkTimerLogCleanup_TypeNew(); }
#define DECLARED_PyvtkTimerLogCleanup_TypeNew
#endif

PyObject *PyvtkTimerLogCleanup_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkTimerLogCleanup_Type,
    PyvtkTimerLogCleanup_Methods,
    PyvtkTimerLogCleanup_vtkTimerLogCleanup_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTimerLog(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTimerLogEntry_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkTimerLogEntry", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTimerLog_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTimerLog", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTimerLogScope_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkTimerLogScope", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTimerLogCleanup_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkTimerLogCleanup", o) != 0)
  {
    Py_DECREF(o);
  }

}

