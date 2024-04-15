// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkAutoCorrelativeStatistics(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkBivariateLinearTableThreshold(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkComputeQuantiles(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkComputeQuartiles(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkContingencyStatistics(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCorrelativeStatistics(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDescriptiveStatistics(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkExtractFunctionalBagPlot(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkExtractHistogram(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHighestDensityRegionsStatistics(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkKMeansDistanceFunctor(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkKMeansDistanceFunctorCalculator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkKMeansStatistics(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkLengthDistribution(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMultiCorrelativeStatistics(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkOrderStatistics(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPCAStatistics(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStatisticsAlgorithm(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStrahlerMetric(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStreamingStatistics(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFiltersStatisticsModule(PyObject *dict); }

static PyMethodDef PyvtkFiltersStatistics_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkFiltersStatistics_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkFiltersStatistics", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkFiltersStatistics_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkFiltersStatistics(const char * /*unused*/); }

PyObject *real_initvtkFiltersStatistics(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkFiltersStatistics_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkFiltersStatistics");
  }

  const char *depends[2] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkCommonExecutionModel",
  };

  for (int i = 0; i < 2; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkFiltersStatistics: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkFiltersStatistics, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkAutoCorrelativeStatistics(d);
  PyVTKAddFile_vtkBivariateLinearTableThreshold(d);
  PyVTKAddFile_vtkComputeQuantiles(d);
  PyVTKAddFile_vtkComputeQuartiles(d);
  PyVTKAddFile_vtkContingencyStatistics(d);
  PyVTKAddFile_vtkCorrelativeStatistics(d);
  PyVTKAddFile_vtkDescriptiveStatistics(d);
  PyVTKAddFile_vtkExtractFunctionalBagPlot(d);
  PyVTKAddFile_vtkExtractHistogram(d);
  PyVTKAddFile_vtkHighestDensityRegionsStatistics(d);
  PyVTKAddFile_vtkKMeansDistanceFunctor(d);
  PyVTKAddFile_vtkKMeansDistanceFunctorCalculator(d);
  PyVTKAddFile_vtkKMeansStatistics(d);
  PyVTKAddFile_vtkLengthDistribution(d);
  PyVTKAddFile_vtkMultiCorrelativeStatistics(d);
  PyVTKAddFile_vtkOrderStatistics(d);
  PyVTKAddFile_vtkPCAStatistics(d);
  PyVTKAddFile_vtkStatisticsAlgorithm(d);
  PyVTKAddFile_vtkStrahlerMetric(d);
  PyVTKAddFile_vtkStreamingStatistics(d);
  PyVTKAddFile_vtkFiltersStatisticsModule(d);

  vtkPythonUtil::AddModule("vtkFiltersStatistics");

  return m;
}

