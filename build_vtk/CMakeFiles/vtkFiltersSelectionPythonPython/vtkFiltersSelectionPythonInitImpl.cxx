// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkCellDistanceSelector(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkKdTreeSelector(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkLinearSelector(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFiltersSelectionModule(PyObject *dict); }

static PyMethodDef PyvtkFiltersSelection_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkFiltersSelection_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkFiltersSelection", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkFiltersSelection_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkFiltersSelection(const char * /*unused*/); }

PyObject *real_initvtkFiltersSelection(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkFiltersSelection_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkFiltersSelection");
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
        "Failed to load vtkFiltersSelection: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkFiltersSelection, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkCellDistanceSelector(d);
  PyVTKAddFile_vtkKdTreeSelector(d);
  PyVTKAddFile_vtkLinearSelector(d);
  PyVTKAddFile_vtkFiltersSelectionModule(d);

  vtkPythonUtil::AddModule("vtkFiltersSelection");

  return m;
}
