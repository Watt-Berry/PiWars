// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkCMLMoleculeReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGaussianCubeReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGaussianCubeReader2(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMoleculeReaderBase(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPDBReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkVASPAnimationReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkVASPTessellationReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkXYZMolReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkXYZMolReader2(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkIOChemistryModule(PyObject *dict); }

static PyMethodDef PyvtkIOChemistry_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkIOChemistry_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkIOChemistry", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkIOChemistry_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkIOChemistry(const char * /*unused*/); }

PyObject *real_initvtkIOChemistry(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkIOChemistry_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkIOChemistry");
  }

  const char *depends[4] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkCommonDataModel",
    "vtkmodules.vtkCommonExecutionModel",
    "vtkmodules.vtkIOCore",
  };

  for (int i = 0; i < 4; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkIOChemistry: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkIOChemistry, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkCMLMoleculeReader(d);
  PyVTKAddFile_vtkGaussianCubeReader(d);
  PyVTKAddFile_vtkGaussianCubeReader2(d);
  PyVTKAddFile_vtkMoleculeReaderBase(d);
  PyVTKAddFile_vtkPDBReader(d);
  PyVTKAddFile_vtkVASPAnimationReader(d);
  PyVTKAddFile_vtkVASPTessellationReader(d);
  PyVTKAddFile_vtkXYZMolReader(d);
  PyVTKAddFile_vtkXYZMolReader2(d);
  PyVTKAddFile_vtkIOChemistryModule(d);

  vtkPythonUtil::AddModule("vtkIOChemistry");

  return m;
}
