// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkHyperTreeGridAxisClip(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHyperTreeGridAxisCut(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHyperTreeGridAxisReflection(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHyperTreeGridCellCenters(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHyperTreeGridContour(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHyperTreeGridDepthLimiter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHyperTreeGridEvaluateCoarse(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHyperTreeGridGeometry(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHyperTreeGridGradient(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHyperTreeGridPlaneCutter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHyperTreeGridThreshold(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHyperTreeGridToDualGrid(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHyperTreeGridToUnstructuredGrid(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageDataToHyperTreeGrid(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFiltersHyperTreeModule(PyObject *dict); }

static PyMethodDef PyvtkFiltersHyperTree_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkFiltersHyperTree_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkFiltersHyperTree", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkFiltersHyperTree_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkFiltersHyperTree(const char * /*unused*/); }

PyObject *real_initvtkFiltersHyperTree(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkFiltersHyperTree_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkFiltersHyperTree");
  }

  const char *depends[5] = {
    "vtkmodules.vtkCommonDataModel",
    "vtkmodules.vtkCommonExecutionModel",
    "vtkmodules.vtkCommonMisc",
    "vtkmodules.vtkFiltersCore",
    "vtkmodules.vtkFiltersGeneral",
  };

  for (int i = 0; i < 5; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkFiltersHyperTree: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkFiltersHyperTree, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkHyperTreeGridAxisClip(d);
  PyVTKAddFile_vtkHyperTreeGridAxisCut(d);
  PyVTKAddFile_vtkHyperTreeGridAxisReflection(d);
  PyVTKAddFile_vtkHyperTreeGridCellCenters(d);
  PyVTKAddFile_vtkHyperTreeGridContour(d);
  PyVTKAddFile_vtkHyperTreeGridDepthLimiter(d);
  PyVTKAddFile_vtkHyperTreeGridEvaluateCoarse(d);
  PyVTKAddFile_vtkHyperTreeGridGeometry(d);
  PyVTKAddFile_vtkHyperTreeGridGradient(d);
  PyVTKAddFile_vtkHyperTreeGridPlaneCutter(d);
  PyVTKAddFile_vtkHyperTreeGridThreshold(d);
  PyVTKAddFile_vtkHyperTreeGridToDualGrid(d);
  PyVTKAddFile_vtkHyperTreeGridToUnstructuredGrid(d);
  PyVTKAddFile_vtkImageDataToHyperTreeGrid(d);
  PyVTKAddFile_vtkFiltersHyperTreeModule(d);

  vtkPythonUtil::AddModule("vtkFiltersHyperTree");

  return m;
}
