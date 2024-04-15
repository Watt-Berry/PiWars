// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkDataEncoder(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkObjectIdMap(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkWebApplication(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkWebInteractionEvent(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkWebUtilities(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkWebCoreModule(PyObject *dict); }

static PyMethodDef PyvtkWebCore_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkWebCore_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkWebCore", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkWebCore_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkWebCore(const char * /*unused*/); }

PyObject *real_initvtkWebCore(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkWebCore_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkWebCore");
  }

  const char *depends[1] = {
    "vtkmodules.vtkCommonCore",
  };

  for (int i = 0; i < 1; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkWebCore: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkWebCore, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkDataEncoder(d);
  PyVTKAddFile_vtkObjectIdMap(d);
  PyVTKAddFile_vtkWebApplication(d);
  PyVTKAddFile_vtkWebInteractionEvent(d);
  PyVTKAddFile_vtkWebUtilities(d);
  PyVTKAddFile_vtkWebCoreModule(d);

  vtkPythonUtil::AddModule("vtkWebCore");

  return m;
}
