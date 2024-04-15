// python wrapper for vtkThreads
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkThreads.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkThreads(PyObject *dict); }
void PyVTKAddFile_vtkThreads(
  PyObject *dict)
{
  PyObject *o;
  o = PyLong_FromLong(64);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MAX_THREADS", o);
    Py_DECREF(o);
  }
  Py_INCREF(Py_None);
  o = Py_None;
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_THREAD_RETURN_VALUE", o);
    Py_DECREF(o);
  }
}

