// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkMPASReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkNetCDFCAMReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkNetCDFCFReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkNetCDFCFWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkNetCDFPOPReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkNetCDFReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkNetCDFUGRIDReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSLACParticleReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSLACReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkIONetCDFModule(PyObject *dict); }

static PyMethodDef PyvtkIONetCDF_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkIONetCDF_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkIONetCDF", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkIONetCDF_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkIONetCDF(const char * /*unused*/); }

PyObject *real_initvtkIONetCDF(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkIONetCDF_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkIONetCDF");
  }

  const char *depends[3] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkCommonExecutionModel",
    "vtkmodules.vtkIOCore",
  };

  for (int i = 0; i < 3; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkIONetCDF: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkIONetCDF, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkMPASReader(d);
  PyVTKAddFile_vtkNetCDFCAMReader(d);
  PyVTKAddFile_vtkNetCDFCFReader(d);
  PyVTKAddFile_vtkNetCDFCFWriter(d);
  PyVTKAddFile_vtkNetCDFPOPReader(d);
  PyVTKAddFile_vtkNetCDFReader(d);
  PyVTKAddFile_vtkNetCDFUGRIDReader(d);
  PyVTKAddFile_vtkSLACParticleReader(d);
  PyVTKAddFile_vtkSLACReader(d);
  PyVTKAddFile_vtkIONetCDFModule(d);

  vtkPythonUtil::AddModule("vtkIONetCDF");

  return m;
}

