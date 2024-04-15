// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkAVSucdReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkBYUReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkBYUWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkChacoReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFacetWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFLUENTReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGAMBITReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGLTFDocumentLoader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGLTFReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGLTFWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHoudiniPolyDataWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkIVWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMCubesReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMCubesWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMFIXReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkOBJReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkOBJWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkOpenFOAMReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParticleReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkProStarReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPTSReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSTLReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSTLWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTecplotReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkWindBladeReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkIOGeometryModule(PyObject *dict); }

static PyMethodDef PyvtkIOGeometry_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkIOGeometry_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkIOGeometry", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkIOGeometry_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkIOGeometry(const char * /*unused*/); }

PyObject *real_initvtkIOGeometry(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkIOGeometry_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkIOGeometry");
  }

  const char *depends[5] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkCommonDataModel",
    "vtkmodules.vtkCommonExecutionModel",
    "vtkmodules.vtkIOCore",
    "vtkmodules.vtkIOLegacy",
  };

  for (int i = 0; i < 5; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkIOGeometry: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkIOGeometry, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkAVSucdReader(d);
  PyVTKAddFile_vtkBYUReader(d);
  PyVTKAddFile_vtkBYUWriter(d);
  PyVTKAddFile_vtkChacoReader(d);
  PyVTKAddFile_vtkFacetWriter(d);
  PyVTKAddFile_vtkFLUENTReader(d);
  PyVTKAddFile_vtkGAMBITReader(d);
  PyVTKAddFile_vtkGLTFDocumentLoader(d);
  PyVTKAddFile_vtkGLTFReader(d);
  PyVTKAddFile_vtkGLTFWriter(d);
  PyVTKAddFile_vtkHoudiniPolyDataWriter(d);
  PyVTKAddFile_vtkIVWriter(d);
  PyVTKAddFile_vtkMCubesReader(d);
  PyVTKAddFile_vtkMCubesWriter(d);
  PyVTKAddFile_vtkMFIXReader(d);
  PyVTKAddFile_vtkOBJReader(d);
  PyVTKAddFile_vtkOBJWriter(d);
  PyVTKAddFile_vtkOpenFOAMReader(d);
  PyVTKAddFile_vtkParticleReader(d);
  PyVTKAddFile_vtkProStarReader(d);
  PyVTKAddFile_vtkPTSReader(d);
  PyVTKAddFile_vtkSTLReader(d);
  PyVTKAddFile_vtkSTLWriter(d);
  PyVTKAddFile_vtkTecplotReader(d);
  PyVTKAddFile_vtkWindBladeReader(d);
  PyVTKAddFile_vtkIOGeometryModule(d);

  vtkPythonUtil::AddModule("vtkIOGeometry");

  return m;
}
