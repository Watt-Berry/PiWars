// python wrapper for vtkIOCesium3DTilesModule
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIOCesium3DTilesModule.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIOCesium3DTilesModule(PyObject *dict); }
void PyVTKAddFile_vtkIOCesium3DTilesModule(
  PyObject * /*dict*/)
{
}

