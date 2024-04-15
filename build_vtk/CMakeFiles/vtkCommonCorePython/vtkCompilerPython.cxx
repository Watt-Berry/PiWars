// python wrapper for vtkCompiler
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkCompiler.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompiler(PyObject *dict); }
void PyVTKAddFile_vtkCompiler(
  PyObject *dict)
{
  PyObject *o;
  o = PyLong_FromLong((__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__));
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_COMPILER_GCC_VERSION", o);
    Py_DECREF(o);
  }
}

