// python wrapper for vtkRenderingCoreEnums
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkRenderingCoreEnums.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderingCoreEnums(PyObject *dict); }
void PyVTKAddFile_vtkRenderingCoreEnums(
  PyObject *dict)
{
  PyObject *o;
  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "VTK_MARKER_NONE", VTK_MARKER_NONE },
        { "VTK_MARKER_CROSS", VTK_MARKER_CROSS },
        { "VTK_MARKER_PLUS", VTK_MARKER_PLUS },
        { "VTK_MARKER_SQUARE", VTK_MARKER_SQUARE },
        { "VTK_MARKER_CIRCLE", VTK_MARKER_CIRCLE },
        { "VTK_MARKER_DIAMOND", VTK_MARKER_DIAMOND },
        { "VTK_MARKER_UNKNOWN", VTK_MARKER_UNKNOWN },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

