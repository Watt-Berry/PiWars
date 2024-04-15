// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkActorNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCameraNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkLightNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMapperNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPolyDataMapperNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRendererNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkViewNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkViewNodeFactory(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkVolumeMapperNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkVolumeNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkWindowNode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRenderingSceneGraphModule(PyObject *dict); }

static PyMethodDef PyvtkRenderingSceneGraph_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkRenderingSceneGraph_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkRenderingSceneGraph", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkRenderingSceneGraph_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkRenderingSceneGraph(const char * /*unused*/); }

PyObject *real_initvtkRenderingSceneGraph(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkRenderingSceneGraph_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkRenderingSceneGraph");
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
        "Failed to load vtkRenderingSceneGraph: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkRenderingSceneGraph, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkActorNode(d);
  PyVTKAddFile_vtkCameraNode(d);
  PyVTKAddFile_vtkLightNode(d);
  PyVTKAddFile_vtkMapperNode(d);
  PyVTKAddFile_vtkPolyDataMapperNode(d);
  PyVTKAddFile_vtkRendererNode(d);
  PyVTKAddFile_vtkViewNode(d);
  PyVTKAddFile_vtkViewNodeFactory(d);
  PyVTKAddFile_vtkVolumeMapperNode(d);
  PyVTKAddFile_vtkVolumeNode(d);
  PyVTKAddFile_vtkWindowNode(d);
  PyVTKAddFile_vtkRenderingSceneGraphModule(d);

  vtkPythonUtil::AddModule("vtkRenderingSceneGraph");

  return m;
}
