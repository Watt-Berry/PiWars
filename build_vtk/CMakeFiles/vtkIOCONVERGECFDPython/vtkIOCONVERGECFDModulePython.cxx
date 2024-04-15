// python wrapper for vtkIOCONVERGECFDModule
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIOCONVERGECFDModule.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIOCONVERGECFDModule(PyObject *dict); }
void PyVTKAddFile_vtkIOCONVERGECFDModule(
  PyObject * /*dict*/)
{
}

