// python wrapper for vtkOpenGLRenderTimerLog
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLRenderTimerLog.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLRenderTimerLog(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLRenderTimerLog_ClassNew(); }


static PyObject *
PyvtkOpenGLRenderTimerLog_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLRenderTimerLog::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLRenderTimerLog::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLRenderTimerLog *tempr = vtkOpenGLRenderTimerLog::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLRenderTimerLog *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLRenderTimerLog::NewInstance());

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
PyvtkOpenGLRenderTimerLog_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLRenderTimerLog::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLRenderTimerLog::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_IsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSupported() :
      op->vtkOpenGLRenderTimerLog::IsSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_GetLoggingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoggingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLoggingEnabled() :
      op->vtkOpenGLRenderTimerLog::GetLoggingEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_MarkFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkFrame();
    }
    else
    {
      op->vtkOpenGLRenderTimerLog::MarkFrame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_MarkStartEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkStartEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->MarkStartEvent(temp0);
    }
    else
    {
      op->vtkOpenGLRenderTimerLog::MarkStartEvent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_MarkEndEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkEndEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkEndEvent();
    }
    else
    {
      op->vtkOpenGLRenderTimerLog::MarkEndEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_FrameReady(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrameReady");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->FrameReady() :
      op->vtkOpenGLRenderTimerLog::FrameReady());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources();
    }
    else
    {
      op->vtkOpenGLRenderTimerLog::ReleaseGraphicsResources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_SetMinTimerPoolSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinTimerPoolSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinTimerPoolSize(temp0);
    }
    else
    {
      op->vtkOpenGLRenderTimerLog::SetMinTimerPoolSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimerLog_GetMinTimerPoolSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinTimerPoolSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRenderTimerLog *op = static_cast<vtkOpenGLRenderTimerLog *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetMinTimerPoolSize() :
      op->vtkOpenGLRenderTimerLog::GetMinTimerPoolSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderTimerLog_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLRenderTimerLog_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLRenderTimerLog_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLRenderTimerLog_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLRenderTimerLog\nC++: static vtkOpenGLRenderTimerLog *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLRenderTimerLog_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLRenderTimerLog\nC++: vtkOpenGLRenderTimerLog *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLRenderTimerLog_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLRenderTimerLog_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsSupported", PyvtkOpenGLRenderTimerLog_IsSupported, METH_VARARGS,
   "IsSupported(self) -> bool\nC++: bool IsSupported() override;\n\nReturns true if stream timings are implemented for the current\ngraphics backend.\n"},
  {"GetLoggingEnabled", PyvtkOpenGLRenderTimerLog_GetLoggingEnabled, METH_VARARGS,
   "GetLoggingEnabled(self) -> bool\nC++: bool GetLoggingEnabled() override;\n\nOverridden to do support check before returning.\n"},
  {"MarkFrame", PyvtkOpenGLRenderTimerLog_MarkFrame, METH_VARARGS,
   "MarkFrame(self) -> None\nC++: void MarkFrame() override;\n\nCall to mark the start of a new frame, or the end of an old one.\nDoes nothing if no events have been recorded in the current\nframe.\n"},
  {"MarkStartEvent", PyvtkOpenGLRenderTimerLog_MarkStartEvent, METH_VARARGS,
   "MarkStartEvent(self, name:str) -> None\nC++: void MarkStartEvent(const std::string &name) override;\n\n"},
  {"MarkEndEvent", PyvtkOpenGLRenderTimerLog_MarkEndEvent, METH_VARARGS,
   "MarkEndEvent(self) -> None\nC++: void MarkEndEvent() override;\n\n"},
  {"FrameReady", PyvtkOpenGLRenderTimerLog_FrameReady, METH_VARARGS,
   "FrameReady(self) -> bool\nC++: bool FrameReady() override;\n\nReturns true if there are any frames ready with complete timing\ninfo.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLRenderTimerLog_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self) -> None\nC++: void ReleaseGraphicsResources() override;\n\nReleases any resources allocated on the graphics device.\n"},
  {"SetMinTimerPoolSize", PyvtkOpenGLRenderTimerLog_SetMinTimerPoolSize, METH_VARARGS,
   "SetMinTimerPoolSize(self, _arg:int) -> None\nC++: virtual void SetMinTimerPoolSize(size_t _arg)\n\nThis implementations keeps a pool of vtkRenderTimers around,\nrecycling them to avoid constantly allocating/freeing them. The\npool is sometimes trimmed to free up memory if the number of\ntimers in the pool is much greater the the number of timers\ncurrently used. This setting controls the minimum number of\ntimers that will be kept. More may be kept if they are being\nused, but the pool will never be trimmed below this amount.\n\nDefault value is 32, but can be adjusted for specific use cases.\n"},
  {"GetMinTimerPoolSize", PyvtkOpenGLRenderTimerLog_GetMinTimerPoolSize, METH_VARARGS,
   "GetMinTimerPoolSize(self) -> int\nC++: virtual size_t GetMinTimerPoolSize()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLRenderTimerLog_Doc =
  "vtkOpenGLRenderTimerLog - OpenGL2 override for vtkRenderTimerLog.\n\n"
  "Superclass: vtkRenderTimerLog\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLRenderTimerLog_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLRenderTimerLog", // tp_name
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
  PyvtkOpenGLRenderTimerLog_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLRenderTimerLog_StaticNew()
{
  return vtkOpenGLRenderTimerLog::New();
}

PyObject *PyvtkOpenGLRenderTimerLog_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLRenderTimerLog_Type, PyvtkOpenGLRenderTimerLog_Methods,
    "vtkOpenGLRenderTimerLog",
 &PyvtkOpenGLRenderTimerLog_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkRenderTimerLog");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLRenderTimerLog(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLRenderTimerLog_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLRenderTimerLog", o) != 0)
  {
    Py_DECREF(o);
  }

}

