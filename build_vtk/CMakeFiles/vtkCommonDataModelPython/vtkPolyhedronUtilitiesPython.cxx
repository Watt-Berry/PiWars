// python wrapper for vtkPolyhedronUtilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkSmartPointer.h"
#include "vtkPolyhedronUtilities.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyhedronUtilities(PyObject *dict); }

static PyObject *
PyvtkPolyhedronUtilities_Decompose(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Decompose");

  vtkPolyhedron *temp0 = nullptr;
  vtkPointData *temp1 = nullptr;
  long long temp2;
  vtkCellData *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPolyhedron") &&
      ap.GetVTKObject(temp1, "vtkPointData") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkCellData"))
  {
    vtkSmartPointer<vtkUnstructuredGrid> tempr = vtkPolyhedronUtilities::Decompose(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyhedronUtilities_Methods[] = {
  {"Decompose", PyvtkPolyhedronUtilities_Decompose, METH_VARARGS,
   "Decompose(polyhedron:vtkPolyhedron, inPd:vtkPointData, cellId:int,\n     inCd:vtkCellData) -> vtkUnstructuredGrid\nC++: static vtkSmartPointer<vtkUnstructuredGrid> Decompose(\n    vtkPolyhedron *polyhedron, vtkPointData *inPd,\n    vtkIdType cellId, vtkCellData *inCd)\n\nDecompose the input polyhedron into tetrahedrons. This method\nwill generate new points on each faces (faces barycenters) and\nanother that is the barycenter of the cell. These new points are\nused to create the tetrahedrons and will lead to better result\nwhen applying filters (for example contours) on the output if the\ninput polyhedron contains concave faces. The user can give point\ndata and cell data to be passed through the decomposition. The\npoint data on the new points (barycenters) correspond to the mean\nvalue of the respective data on the faces points. The point data\non the barycenter of the cell correspond to the mean value of the\nrespective data on all points. The cell data at given cellId will\nsimply be copied to each output tetrahedron.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkPolyhedronUtilities_vtkPolyhedronUtilities(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPolyhedronUtilities");

  vtkPolyhedronUtilities *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPolyhedronUtilities"))
  {
    vtkPolyhedronUtilities *op = new vtkPolyhedronUtilities(*temp0);

    result = PyVTKSpecialObject_New("vtkPolyhedronUtilities", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPolyhedronUtilities_vtkPolyhedronUtilities_Methods[] = {
  {"vtkPolyhedronUtilities", PyvtkPolyhedronUtilities_vtkPolyhedronUtilities, METH_VARARGS,
   "@W vtkPolyhedronUtilities"},
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkPolyhedronUtilities_Doc =

  "vtkPolyhedronUtilities(__a:vtkPolyhedronUtilities)\n    -> vtkPolyhedronUtilities\nC++: vtkPolyhedronUtilities(const &vtkPolyhedronUtilities)\n""\n"
  "vtkPolyhedronUtilities - vtkPolyhedron utilities\n\n"
  "This class contains specific methods used to process vtkPolyhedron.\n"
  "These methods are intended to improve filters behavior over\n"
  "bad-shaped or degenerated polyhedrons (for example, non-planar ones).\n\n"
  "@sa\n"
  "vtkPolyhedron\n\n";

static PyObject *
PyvtkPolyhedronUtilities_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkPolyhedronUtilities_vtkPolyhedronUtilities(nullptr, args);
}

static void PyvtkPolyhedronUtilities_Delete(PyObject *self)
{
  PyObject_Del(self);
}

static Py_hash_t PyvtkPolyhedronUtilities_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolyhedronUtilities_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkPolyhedronUtilities", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPolyhedronUtilities_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkPolyhedronUtilities_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPolyhedronUtilities_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkPolyhedronUtilities_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkPolyhedronUtilities_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkPolyhedronUtilities(*static_cast<const vtkPolyhedronUtilities*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkPolyhedronUtilities_TypeNew
extern "C" { PyObject *PyvtkPolyhedronUtilities_TypeNew(); }
#define DECLARED_PyvtkPolyhedronUtilities_TypeNew
#endif

PyObject *PyvtkPolyhedronUtilities_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkPolyhedronUtilities_Type,
    PyvtkPolyhedronUtilities_Methods,
    PyvtkPolyhedronUtilities_vtkPolyhedronUtilities_Methods,
    &PyvtkPolyhedronUtilities_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyhedronUtilities(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyhedronUtilities_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyhedronUtilities", o) != 0)
  {
    Py_DECREF(o);
  }

}

