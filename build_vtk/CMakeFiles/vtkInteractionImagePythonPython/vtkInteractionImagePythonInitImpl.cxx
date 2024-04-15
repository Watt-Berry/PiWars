// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkImageViewer(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageViewer2(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkResliceImageViewer(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkResliceImageViewerMeasurements(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractionImageModule(PyObject *dict); }

static PyMethodDef PyvtkInteractionImage_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkInteractionImage_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkInteractionImage", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkInteractionImage_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkInteractionImage(const char * /*unused*/); }

PyObject *real_initvtkInteractionImage(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkInteractionImage_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkInteractionImage");
  }

  const char *depends[2] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkRenderingCore",
  };

  for (int i = 0; i < 2; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkInteractionImage: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkInteractionImage, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkImageViewer(d);
  PyVTKAddFile_vtkImageViewer2(d);
  PyVTKAddFile_vtkResliceImageViewer(d);
  PyVTKAddFile_vtkResliceImageViewerMeasurements(d);
  PyVTKAddFile_vtkInteractionImageModule(d);

  vtkPythonUtil::AddModule("vtkInteractionImage");

  return m;
}

