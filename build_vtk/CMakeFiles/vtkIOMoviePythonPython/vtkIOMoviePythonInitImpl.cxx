// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkIOMovieConfigure(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGenericMovieWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkIOMovieModule(PyObject *dict); }

static PyMethodDef PyvtkIOMovie_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkIOMovie_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkIOMovie", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkIOMovie_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkIOMovie(const char * /*unused*/); }

PyObject *real_initvtkIOMovie(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkIOMovie_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkIOMovie");
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
        "Failed to load vtkIOMovie: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkIOMovie, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkIOMovieConfigure(d);
  PyVTKAddFile_vtkGenericMovieWriter(d);
  PyVTKAddFile_vtkIOMovieModule(d);

  vtkPythonUtil::AddModule("vtkIOMovie");

  return m;
}
