// python wrapper for vtkTemplateAliasMacro
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkTemplateAliasMacro.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTemplateAliasMacro(PyObject *dict); }
void PyVTKAddFile_vtkTemplateAliasMacro(
  PyObject *dict)
{
  PyObject *o;
  for (int c = 0; c < 10; c++)
  {
    static const struct { const char *name; int value; }
      constants[10] = {
        { "VTK_USE_INT8", 1 },
        { "VTK_USE_UINT8", 1 },
        { "VTK_USE_INT16", 1 },
        { "VTK_USE_UINT16", 1 },
        { "VTK_USE_INT32", 1 },
        { "VTK_USE_UINT32", 1 },
        { "VTK_USE_INT64", 1 },
        { "VTK_USE_UINT64", 1 },
        { "VTK_USE_FLOAT32", 1 },
        { "VTK_USE_FLOAT64", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

