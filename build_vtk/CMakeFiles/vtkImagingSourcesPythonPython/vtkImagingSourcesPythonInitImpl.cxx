// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkImageCanvasSource2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageEllipsoidSource(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageGaussianSource(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageGridSource(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageMandelbrotSource(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageNoiseSource(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageSinusoidSource(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImagingSourcesModule(PyObject *dict); }

static PyMethodDef PyvtkImagingSources_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkImagingSources_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkImagingSources", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkImagingSources_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkImagingSources(const char * /*unused*/); }

PyObject *real_initvtkImagingSources(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkImagingSources_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkImagingSources");
  }

  const char *depends[1] = {
    "vtkmodules.vtkCommonExecutionModel",
  };

  for (int i = 0; i < 1; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkImagingSources: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkImagingSources, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkImageCanvasSource2D(d);
  PyVTKAddFile_vtkImageEllipsoidSource(d);
  PyVTKAddFile_vtkImageGaussianSource(d);
  PyVTKAddFile_vtkImageGridSource(d);
  PyVTKAddFile_vtkImageMandelbrotSource(d);
  PyVTKAddFile_vtkImageNoiseSource(d);
  PyVTKAddFile_vtkImageSinusoidSource(d);
  PyVTKAddFile_vtkImagingSourcesModule(d);

  vtkPythonUtil::AddModule("vtkImagingSources");

  return m;
}

