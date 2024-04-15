// python wrapper for vtkBilinearQuadIntersection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkVector.h"
#include "vtkBilinearQuadIntersection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBilinearQuadIntersection(PyObject *dict); }

static PyObject *
PyvtkBilinearQuadIntersection_GetP00Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetP00Data");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBilinearQuadIntersection *op = static_cast<vtkBilinearQuadIntersection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetP00Data();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBilinearQuadIntersection_GetP01Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetP01Data");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBilinearQuadIntersection *op = static_cast<vtkBilinearQuadIntersection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetP01Data();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBilinearQuadIntersection_GetP10Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetP10Data");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBilinearQuadIntersection *op = static_cast<vtkBilinearQuadIntersection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetP10Data();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBilinearQuadIntersection_GetP11Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetP11Data");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBilinearQuadIntersection *op = static_cast<vtkBilinearQuadIntersection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = op->GetP11Data();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBilinearQuadIntersection_ComputeCartesianCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCartesianCoordinates");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBilinearQuadIntersection *op = static_cast<vtkBilinearQuadIntersection *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVector3d tempr = op->ComputeCartesianCoordinates(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}


static PyObject *
PyvtkBilinearQuadIntersection_RayIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RayIntersection");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBilinearQuadIntersection *op = static_cast<vtkBilinearQuadIntersection *>(vp);

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector3d *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkVector3d *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector3d") &&
      ap.GetSpecialObject(temp2, "vtkVector3d"))
  {
    bool tempr = op->RayIntersection(*temp0, *temp1, *temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyMethodDef PyvtkBilinearQuadIntersection_Methods[] = {
  {"GetP00Data", PyvtkBilinearQuadIntersection_GetP00Data, METH_VARARGS,
   "GetP00Data(self) -> Pointer\nC++: double *GetP00Data()\n\nGet direct access to the underlying point data\n"},
  {"GetP01Data", PyvtkBilinearQuadIntersection_GetP01Data, METH_VARARGS,
   "GetP01Data(self) -> Pointer\nC++: double *GetP01Data()\n\n"},
  {"GetP10Data", PyvtkBilinearQuadIntersection_GetP10Data, METH_VARARGS,
   "GetP10Data(self) -> Pointer\nC++: double *GetP10Data()\n\n"},
  {"GetP11Data", PyvtkBilinearQuadIntersection_GetP11Data, METH_VARARGS,
   "GetP11Data(self) -> Pointer\nC++: double *GetP11Data()\n\n"},
  {"ComputeCartesianCoordinates", PyvtkBilinearQuadIntersection_ComputeCartesianCoordinates, METH_VARARGS,
   "ComputeCartesianCoordinates(self, u:float, v:float) -> vtkVector3d\nC++: vtkVector3d ComputeCartesianCoordinates(double u, double v)\n\nCompute cartesian coordinates of point in the quad using\nparameteric coordinates\n"},
  {"RayIntersection", PyvtkBilinearQuadIntersection_RayIntersection, METH_VARARGS,
   "RayIntersection(self, r:vtkVector3d, q:vtkVector3d,\n    uv:vtkVector3d) -> bool\nC++: bool RayIntersection(const vtkVector3d &r,\n    const vtkVector3d &q, vtkVector3d &uv)\n\nCompute the intersection between a ray r->q and the quad\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkBilinearQuadIntersection_vtkBilinearQuadIntersection_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkBilinearQuadIntersection");

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector3d *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkVector3d *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  vtkVector3d *temp3 = nullptr;
  PyObject *pobj3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector3d") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVector3d") &&
      ap.GetSpecialObject(temp3, pobj3, "vtkVector3d"))
  {
    vtkBilinearQuadIntersection *op = new vtkBilinearQuadIntersection(*temp0, *temp1, *temp2, *temp3);

    result = PyVTKSpecialObject_New("vtkBilinearQuadIntersection", op);
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);
  Py_XDECREF(pobj3);

  return result;
}

static PyObject *
PyvtkBilinearQuadIntersection_vtkBilinearQuadIntersection_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkBilinearQuadIntersection");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkBilinearQuadIntersection *op = new vtkBilinearQuadIntersection();

    result = PyVTKSpecialObject_New("vtkBilinearQuadIntersection", op);
  }

  return result;
}

static PyObject *
PyvtkBilinearQuadIntersection_vtkBilinearQuadIntersection_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkBilinearQuadIntersection");

  vtkBilinearQuadIntersection *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBilinearQuadIntersection"))
  {
    vtkBilinearQuadIntersection *op = new vtkBilinearQuadIntersection(*temp0);

    result = PyVTKSpecialObject_New("vtkBilinearQuadIntersection", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkBilinearQuadIntersection_vtkBilinearQuadIntersection_Methods[] = {
  {"vtkBilinearQuadIntersection", PyvtkBilinearQuadIntersection_vtkBilinearQuadIntersection_s3, METH_VARARGS,
   "@W vtkBilinearQuadIntersection"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBilinearQuadIntersection_vtkBilinearQuadIntersection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkBilinearQuadIntersection_vtkBilinearQuadIntersection_s1(self, args);
    case 0:
      return PyvtkBilinearQuadIntersection_vtkBilinearQuadIntersection_s2(self, args);
    case 1:
      return PyvtkBilinearQuadIntersection_vtkBilinearQuadIntersection_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkBilinearQuadIntersection");
  return nullptr;
}


static const char *PyvtkBilinearQuadIntersection_Doc =

  "vtkBilinearQuadIntersection(pt00:vtkVector3d, Pt01:vtkVector3d,\n    Pt10:vtkVector3d, Pt11:vtkVector3d) -> vtkBilinearQuadIntersection\nC++: vtkBilinearQuadIntersection(const vtkVector3d &pt00,\n    const vtkVector3d &Pt01, const vtkVector3d &Pt10,\n    const vtkVector3d &Pt11)\nvtkBilinearQuadIntersection() -> vtkBilinearQuadIntersection\nC++: vtkBilinearQuadIntersection()\nvtkBilinearQuadIntersection(__a:vtkBilinearQuadIntersection)\n    -> vtkBilinearQuadIntersection\nC++: vtkBilinearQuadIntersection(const &vtkBilinearQuadIntersection)\n""\n"
  "vtkBilinearQuadIntersection - Class to perform non planar quad\nintersection\n\n"
  "Class for non planar quad intersection. This class is an updated and\n"
  "fixed version of the code by Ramsey et al.\n"
  "(http://shaunramsey.com/research/bp/).\n\n";

static PyObject *
PyvtkBilinearQuadIntersection_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkBilinearQuadIntersection_vtkBilinearQuadIntersection(nullptr, args);
}

static void PyvtkBilinearQuadIntersection_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkBilinearQuadIntersection *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkBilinearQuadIntersection_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBilinearQuadIntersection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonComputationalGeometry.vtkBilinearQuadIntersection", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkBilinearQuadIntersection_Delete, // tp_dealloc
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
  PyvtkBilinearQuadIntersection_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkBilinearQuadIntersection_Doc, // tp_doc
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
  PyvtkBilinearQuadIntersection_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkBilinearQuadIntersection_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkBilinearQuadIntersection(*static_cast<const vtkBilinearQuadIntersection*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkBilinearQuadIntersection_TypeNew
extern "C" { PyObject *PyvtkBilinearQuadIntersection_TypeNew(); }
#define DECLARED_PyvtkBilinearQuadIntersection_TypeNew
#endif

PyObject *PyvtkBilinearQuadIntersection_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkBilinearQuadIntersection_Type,
    PyvtkBilinearQuadIntersection_Methods,
    PyvtkBilinearQuadIntersection_vtkBilinearQuadIntersection_Methods,
    &PyvtkBilinearQuadIntersection_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBilinearQuadIntersection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBilinearQuadIntersection_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkBilinearQuadIntersection", o) != 0)
  {
    Py_DECREF(o);
  }

}

