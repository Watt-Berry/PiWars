// python wrapper for vtkSMP
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkSMP.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMP(PyObject *dict); }
void PyVTKAddFile_vtkSMP(
  PyObject *dict)
{
  PyObject *o;
  o = PyUnicode_FromString("Sequential");
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_SMP_BACKEND", o);
    Py_DECREF(o);
  }
  for (int c = 0; c < 8; c++)
  {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "VTK_SMP_ENABLE_OPENMP", 0 },
        { "VTK_SMP_ENABLE_SEQUENTIAL", 1 },
        { "VTK_SMP_ENABLE_STDTHREAD", 1 },
        { "VTK_SMP_ENABLE_TBB", 0 },
        { "VTK_SMP_DEFAULT_IMPLEMENTATION_OPENMP", 0 },
        { "VTK_SMP_DEFAULT_IMPLEMENTATION_SEQUENTIAL", 1 },
        { "VTK_SMP_DEFAULT_IMPLEMENTATION_STDTHREAD", 0 },
        { "VTK_SMP_DEFAULT_IMPLEMENTATION_TBB", 0 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

