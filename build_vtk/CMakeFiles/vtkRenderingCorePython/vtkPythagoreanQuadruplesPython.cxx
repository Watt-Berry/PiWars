// python wrapper for vtkPythagoreanQuadruples
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPythagoreanQuadruples.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPythagoreanQuadruples(PyObject *dict); }
void PyVTKAddFile_vtkPythagoreanQuadruples(
  PyObject *dict)
{
  PyObject *o;
  o = PyLong_FromLong(sizeof(vtkPythagoreanQuadruples) / sizeof(vtkPythagoreanQuadruples[0]) / 4 - 1);
  if (o)
  {
    PyDict_SetItemString(dict, "vtkMaxPythagoreanQuadrupleId", o);
    Py_DECREF(o);
  }
}

