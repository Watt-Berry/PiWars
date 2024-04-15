// python wrapper for LSDynaFamily
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "LSDynaFamily.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_LSDynaFamily(PyObject *dict); }
void PyVTKAddFile_LSDynaFamily(
  PyObject *dict)
{
  PyObject *o;
  o = PyLong_FromLong(-1);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_LSDYNA_BADFILE", o);
    Py_DECREF(o);
  }
}

