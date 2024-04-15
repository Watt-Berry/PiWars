// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkDatabaseToTableReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRowQuery(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRowQueryToTable(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSQLDatabase(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSQLDatabaseSchema(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSQLDatabaseTableSource(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSQLiteDatabase(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSQLiteQuery(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSQLiteToTableReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSQLQuery(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTableToDatabaseWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTableToSQLiteWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkIOSQLModule(PyObject *dict); }

static PyMethodDef PyvtkIOSQL_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkIOSQL_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkIOSQL", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkIOSQL_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkIOSQL(const char * /*unused*/); }

PyObject *real_initvtkIOSQL(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkIOSQL_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkIOSQL");
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
        "Failed to load vtkIOSQL: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkIOSQL, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkDatabaseToTableReader(d);
  PyVTKAddFile_vtkRowQuery(d);
  PyVTKAddFile_vtkRowQueryToTable(d);
  PyVTKAddFile_vtkSQLDatabase(d);
  PyVTKAddFile_vtkSQLDatabaseSchema(d);
  PyVTKAddFile_vtkSQLDatabaseTableSource(d);
  PyVTKAddFile_vtkSQLiteDatabase(d);
  PyVTKAddFile_vtkSQLiteQuery(d);
  PyVTKAddFile_vtkSQLiteToTableReader(d);
  PyVTKAddFile_vtkSQLQuery(d);
  PyVTKAddFile_vtkTableToDatabaseWriter(d);
  PyVTKAddFile_vtkTableToSQLiteWriter(d);
  PyVTKAddFile_vtkIOSQLModule(d);

  vtkPythonUtil::AddModule("vtkIOSQL");

  return m;
}
