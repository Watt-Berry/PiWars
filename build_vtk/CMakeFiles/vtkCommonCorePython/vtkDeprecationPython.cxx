// python wrapper for vtkDeprecation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkDeprecation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDeprecation(PyObject *dict); }
void PyVTKAddFile_vtkDeprecation(
  PyObject *dict)
{
  PyObject *o;
  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; long long value; }
      constants[2] = {
        { "VTK_DEPRECATION_LEVEL", VTK_VERSION_NUMBER },
        { "VTK_MINIMUM_DEPRECATION_LEVEL", VTK_VERSION_CHECK(9, 1, 0) },
      };

    o = PyLong_FromLongLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

