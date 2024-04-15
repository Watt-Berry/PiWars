// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkIOVideoConfigure(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkVideoSource(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkIOVideoModule(PyObject *dict); }

static PyMethodDef PyvtkIOVideo_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkIOVideo_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkIOVideo", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkIOVideo_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkIOVideo(const char * /*unused*/); }

PyObject *real_initvtkIOVideo(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkIOVideo_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkIOVideo");
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
        "Failed to load vtkIOVideo: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkIOVideo, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkIOVideoConfigure(d);
  PyVTKAddFile_vtkVideoSource(d);
  PyVTKAddFile_vtkIOVideoModule(d);

  vtkPythonUtil::AddModule("vtkIOVideo");

  return m;
}
