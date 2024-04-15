// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkAbstractGridConnectivity(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkAttributeSmoothingFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCompositeDataGeometryFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDataSetRegionSurfaceFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDataSetSurfaceFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkExplicitStructuredGridSurfaceFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGeometryFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHierarchicalDataSetGeometryFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageDataGeometryFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageDataToUniformGrid(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkLinearToQuadraticCellsFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMarkBoundaryFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkProjectSphereFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRecoverGeometryWireframe(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRectilinearGridGeometryFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRectilinearGridPartitioner(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStructuredAMRGridConnectivity(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStructuredAMRNeighbor(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStructuredGridConnectivity(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStructuredGridGeometryFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStructuredGridPartitioner(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStructuredNeighbor(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStructuredPointsGeometryFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkUnstructuredGridGeometryFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFiltersGeometryModule(PyObject *dict); }

static PyMethodDef PyvtkFiltersGeometry_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkFiltersGeometry_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkFiltersGeometry", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkFiltersGeometry_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkFiltersGeometry(const char * /*unused*/); }

PyObject *real_initvtkFiltersGeometry(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkFiltersGeometry_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkFiltersGeometry");
  }

  const char *depends[3] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkCommonDataModel",
    "vtkmodules.vtkCommonExecutionModel",
  };

  for (int i = 0; i < 3; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkFiltersGeometry: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkFiltersGeometry, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkAbstractGridConnectivity(d);
  PyVTKAddFile_vtkAttributeSmoothingFilter(d);
  PyVTKAddFile_vtkCompositeDataGeometryFilter(d);
  PyVTKAddFile_vtkDataSetRegionSurfaceFilter(d);
  PyVTKAddFile_vtkDataSetSurfaceFilter(d);
  PyVTKAddFile_vtkExplicitStructuredGridSurfaceFilter(d);
  PyVTKAddFile_vtkGeometryFilter(d);
  PyVTKAddFile_vtkHierarchicalDataSetGeometryFilter(d);
  PyVTKAddFile_vtkImageDataGeometryFilter(d);
  PyVTKAddFile_vtkImageDataToUniformGrid(d);
  PyVTKAddFile_vtkLinearToQuadraticCellsFilter(d);
  PyVTKAddFile_vtkMarkBoundaryFilter(d);
  PyVTKAddFile_vtkProjectSphereFilter(d);
  PyVTKAddFile_vtkRecoverGeometryWireframe(d);
  PyVTKAddFile_vtkRectilinearGridGeometryFilter(d);
  PyVTKAddFile_vtkRectilinearGridPartitioner(d);
  PyVTKAddFile_vtkStructuredAMRGridConnectivity(d);
  PyVTKAddFile_vtkStructuredAMRNeighbor(d);
  PyVTKAddFile_vtkStructuredGridConnectivity(d);
  PyVTKAddFile_vtkStructuredGridGeometryFilter(d);
  PyVTKAddFile_vtkStructuredGridPartitioner(d);
  PyVTKAddFile_vtkStructuredNeighbor(d);
  PyVTKAddFile_vtkStructuredPointsGeometryFilter(d);
  PyVTKAddFile_vtkUnstructuredGridGeometryFilter(d);
  PyVTKAddFile_vtkFiltersGeometryModule(d);

  vtkPythonUtil::AddModule("vtkFiltersGeometry");

  return m;
}
