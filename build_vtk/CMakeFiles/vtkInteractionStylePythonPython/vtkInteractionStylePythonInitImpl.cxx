// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkInteractorStyleDrawPolygon(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractorStyleFlight(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractorStyleImage(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractorStyleJoystickActor(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractorStyleJoystickCamera(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractorStyleMultiTouchCamera(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractorStyleRubberBand2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractorStyleRubberBand3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractorStyleRubberBandPick(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractorStyleRubberBandZoom(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractorStyleTerrain(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractorStyleTrackball(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractorStyleTrackballActor(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractorStyleTrackballCamera(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractorStyleUnicam(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractorStyleUser(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractorStyleSwitch(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParallelCoordinatesInteractorStyle(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInteractionStyleModule(PyObject *dict); }

static PyMethodDef PyvtkInteractionStyle_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkInteractionStyle_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkInteractionStyle", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkInteractionStyle_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkInteractionStyle(const char * /*unused*/); }

PyObject *real_initvtkInteractionStyle(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkInteractionStyle_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkInteractionStyle");
  }

  const char *depends[2] = {
    "vtkmodules.vtkCommonDataModel",
    "vtkmodules.vtkRenderingCore",
  };

  for (int i = 0; i < 2; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkInteractionStyle: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkInteractionStyle, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkInteractorStyleDrawPolygon(d);
  PyVTKAddFile_vtkInteractorStyleFlight(d);
  PyVTKAddFile_vtkInteractorStyleImage(d);
  PyVTKAddFile_vtkInteractorStyleJoystickActor(d);
  PyVTKAddFile_vtkInteractorStyleJoystickCamera(d);
  PyVTKAddFile_vtkInteractorStyleMultiTouchCamera(d);
  PyVTKAddFile_vtkInteractorStyleRubberBand2D(d);
  PyVTKAddFile_vtkInteractorStyleRubberBand3D(d);
  PyVTKAddFile_vtkInteractorStyleRubberBandPick(d);
  PyVTKAddFile_vtkInteractorStyleRubberBandZoom(d);
  PyVTKAddFile_vtkInteractorStyleTerrain(d);
  PyVTKAddFile_vtkInteractorStyleTrackball(d);
  PyVTKAddFile_vtkInteractorStyleTrackballActor(d);
  PyVTKAddFile_vtkInteractorStyleTrackballCamera(d);
  PyVTKAddFile_vtkInteractorStyleUnicam(d);
  PyVTKAddFile_vtkInteractorStyleUser(d);
  PyVTKAddFile_vtkInteractorStyleSwitch(d);
  PyVTKAddFile_vtkParallelCoordinatesInteractorStyle(d);
  PyVTKAddFile_vtkInteractionStyleModule(d);

  vtkPythonUtil::AddModule("vtkInteractionStyle");

  return m;
}
