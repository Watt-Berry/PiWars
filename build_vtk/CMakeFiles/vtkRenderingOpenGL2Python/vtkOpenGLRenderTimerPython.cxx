// python wrapper for vtkOpenGLRenderTimer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkOpenGLRenderTimer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLRenderTimer(PyObject *dict); }

static PyObject *
PyvtkOpenGLRenderTimer_IsSupported(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkOpenGLRenderTimer::IsSupported();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimer_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLRenderTimer *op = static_cast<vtkOpenGLRenderTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Reset();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimer_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLRenderTimer *op = static_cast<vtkOpenGLRenderTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Start();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimer_Stop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stop");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLRenderTimer *op = static_cast<vtkOpenGLRenderTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Stop();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimer_Started(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Started");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLRenderTimer *op = static_cast<vtkOpenGLRenderTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->Started();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimer_Stopped(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Stopped");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLRenderTimer *op = static_cast<vtkOpenGLRenderTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->Stopped();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimer_Ready(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Ready");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLRenderTimer *op = static_cast<vtkOpenGLRenderTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->Ready();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimer_GetElapsedSeconds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElapsedSeconds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLRenderTimer *op = static_cast<vtkOpenGLRenderTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = op->GetElapsedSeconds();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimer_GetElapsedMilliseconds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElapsedMilliseconds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLRenderTimer *op = static_cast<vtkOpenGLRenderTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = op->GetElapsedMilliseconds();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimer_GetElapsedNanoseconds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElapsedNanoseconds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLRenderTimer *op = static_cast<vtkOpenGLRenderTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = op->GetElapsedNanoseconds();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimer_ReusableStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReusableStart");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLRenderTimer *op = static_cast<vtkOpenGLRenderTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ReusableStart();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimer_ReusableStop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReusableStop");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLRenderTimer *op = static_cast<vtkOpenGLRenderTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ReusableStop();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimer_GetReusableElapsedSeconds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReusableElapsedSeconds");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLRenderTimer *op = static_cast<vtkOpenGLRenderTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = op->GetReusableElapsedSeconds();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimer_GetStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartTime");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLRenderTimer *op = static_cast<vtkOpenGLRenderTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = op->GetStartTime();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimer_GetStopTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStopTime");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLRenderTimer *op = static_cast<vtkOpenGLRenderTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = op->GetStopTime();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRenderTimer_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkOpenGLRenderTimer *op = static_cast<vtkOpenGLRenderTimer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->ReleaseGraphicsResources();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderTimer_Methods[] = {
  {"IsSupported", PyvtkOpenGLRenderTimer_IsSupported, METH_VARARGS,
   "IsSupported() -> bool\nC++: static bool IsSupported()\n\nReturns true if timer events are supported by the current OpenGL\nimplementation.\n"},
  {"Reset", PyvtkOpenGLRenderTimer_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nClear out any previous results and prepare for a new query.\n"},
  {"Start", PyvtkOpenGLRenderTimer_Start, METH_VARARGS,
   "Start(self) -> None\nC++: void Start()\n\nMark the start of a timed event.\n"},
  {"Stop", PyvtkOpenGLRenderTimer_Stop, METH_VARARGS,
   "Stop(self) -> None\nC++: void Stop()\n\nMark the end of a timed event.\n"},
  {"Started", PyvtkOpenGLRenderTimer_Started, METH_VARARGS,
   "Started(self) -> bool\nC++: bool Started()\n\nReturns true if the timer has been started. The query may not be\nready yet.\n"},
  {"Stopped", PyvtkOpenGLRenderTimer_Stopped, METH_VARARGS,
   "Stopped(self) -> bool\nC++: bool Stopped()\n\nReturns true if the timer has been stopped. The query may not be\nready yet.\n"},
  {"Ready", PyvtkOpenGLRenderTimer_Ready, METH_VARARGS,
   "Ready(self) -> bool\nC++: bool Ready()\n\nReturns true when the timing results are available.\n"},
  {"GetElapsedSeconds", PyvtkOpenGLRenderTimer_GetElapsedSeconds, METH_VARARGS,
   "GetElapsedSeconds(self) -> float\nC++: float GetElapsedSeconds()\n\nIf Ready() returns true, get the elapsed time in the requested\nunits.\n"},
  {"GetElapsedMilliseconds", PyvtkOpenGLRenderTimer_GetElapsedMilliseconds, METH_VARARGS,
   "GetElapsedMilliseconds(self) -> float\nC++: float GetElapsedMilliseconds()\n\n"},
  {"GetElapsedNanoseconds", PyvtkOpenGLRenderTimer_GetElapsedNanoseconds, METH_VARARGS,
   "GetElapsedNanoseconds(self) -> int\nC++: vtkTypeUInt64 GetElapsedNanoseconds()\n\n"},
  {"ReusableStart", PyvtkOpenGLRenderTimer_ReusableStart, METH_VARARGS,
   "ReusableStart(self) -> None\nC++: void ReusableStart()\n\nThis class can also be used in a reusable manner where the start\nand stop events stay in flight until they are both completed.\nCalling ReusableStart while they are in flight is ignored. The\nElapsed time is always the result from the most recently\ncompleted flight. Typical usage is\n\nrender loop\n  timer->ReusableStart();\n  // do some rendering\n  timer->ReusableStop();\n  time = timer->GetReusableElapsedSeconds();\n\nthe elapsed seconds will return zero until a flight has\ncompleted.\n\nThe idea being that with OpenGL render commands are asynchronous.\nYou might render multiple times before the first render on the\nGPU is completed. These reusable methods provide a method for\nprovinding a constant measure of the time required for a command\nwith the efficiency of only having one timing in process/flight\nat a time. Making this a lightweight timer in terms of OpenGL API\ncalls.\n\nThese reusable methods are not meant to be mixed with other\nmethods in this class.\n"},
  {"ReusableStop", PyvtkOpenGLRenderTimer_ReusableStop, METH_VARARGS,
   "ReusableStop(self) -> None\nC++: void ReusableStop()\n\n"},
  {"GetReusableElapsedSeconds", PyvtkOpenGLRenderTimer_GetReusableElapsedSeconds, METH_VARARGS,
   "GetReusableElapsedSeconds(self) -> float\nC++: float GetReusableElapsedSeconds()\n\n"},
  {"GetStartTime", PyvtkOpenGLRenderTimer_GetStartTime, METH_VARARGS,
   "GetStartTime(self) -> int\nC++: vtkTypeUInt64 GetStartTime()\n\n"},
  {"GetStopTime", PyvtkOpenGLRenderTimer_GetStopTime, METH_VARARGS,
   "GetStopTime(self) -> int\nC++: vtkTypeUInt64 GetStopTime()\n\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLRenderTimer_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self) -> None\nC++: void ReleaseGraphicsResources()\n\nSimply calls Reset() to ensure that query ids are freed. All\nstored timing information will be lost.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkOpenGLRenderTimer_vtkOpenGLRenderTimer(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkOpenGLRenderTimer");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkOpenGLRenderTimer *op = new vtkOpenGLRenderTimer();

    result = PyVTKSpecialObject_New("vtkOpenGLRenderTimer", op);
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRenderTimer_vtkOpenGLRenderTimer_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkOpenGLRenderTimer_Doc =

  "vtkOpenGLRenderTimer() -> vtkOpenGLRenderTimer\nC++: vtkOpenGLRenderTimer()\n""\n"
  "vtkOpenGLRenderTimer - Asynchronously measures GPU execution time for\na single event.\n\n"
  "This class posts events to the OpenGL server to measure execution\n"
  "times of GPU processes. The queries are asynchronous and multiple\n"
  "vtkOpenGLRenderTimers may overlap / be nested.\n\n"
  "This uses GL_TIMESTAMP rather than GL_ELAPSED_TIME, since only one\n"
  "GL_ELAPSED_TIME query may be active at a time. Since GL_TIMESTAMP is\n"
  "not available on OpenGL ES, timings will not be available on those\n"
  "platforms. Use the static IsSupported() method to determine if the\n"
  "timer is available.\n\n";

static PyObject *
PyvtkOpenGLRenderTimer_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkOpenGLRenderTimer_vtkOpenGLRenderTimer(nullptr, args);
}

static void PyvtkOpenGLRenderTimer_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkOpenGLRenderTimer *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkOpenGLRenderTimer_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLRenderTimer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLRenderTimer", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkOpenGLRenderTimer_Delete, // tp_dealloc
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
  PyvtkOpenGLRenderTimer_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkOpenGLRenderTimer_Doc, // tp_doc
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
  PyvtkOpenGLRenderTimer_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkOpenGLRenderTimer_TypeNew
extern "C" { PyObject *PyvtkOpenGLRenderTimer_TypeNew(); }
#define DECLARED_PyvtkOpenGLRenderTimer_TypeNew
#endif

PyObject *PyvtkOpenGLRenderTimer_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkOpenGLRenderTimer_Type,
    PyvtkOpenGLRenderTimer_Methods,
    PyvtkOpenGLRenderTimer_vtkOpenGLRenderTimer_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLRenderTimer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLRenderTimer_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLRenderTimer", o) != 0)
  {
    Py_DECREF(o);
  }

}

