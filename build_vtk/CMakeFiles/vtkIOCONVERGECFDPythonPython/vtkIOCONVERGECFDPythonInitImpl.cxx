// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkCONVERGECFDReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkIOCONVERGECFDModule(PyObject *dict); }

static PyMethodDef PyvtkIOCONVERGECFD_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkIOCONVERGECFD_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkIOCONVERGECFD", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkIOCONVERGECFD_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkIOCONVERGECFD(const char * /*unused*/); }

PyObject *real_initvtkIOCONVERGECFD(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkIOCONVERGECFD_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkIOCONVERGECFD");
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
        "Failed to load vtkIOCONVERGECFD: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkIOCONVERGECFD, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkCONVERGECFDReader(d);
  PyVTKAddFile_vtkIOCONVERGECFDModule(d);

  vtkPythonUtil::AddModule("vtkIOCONVERGECFD");

  return m;
}

