// python wrapper for vtkPOutlineFilterInternals
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPOutlineFilterInternals.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPOutlineFilterInternals(PyObject *dict); }

static PyObject *
PyvtkPOutlineFilterInternals_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPOutlineFilterInternals *op = static_cast<vtkPOutlineFilterInternals *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    op->SetController(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPOutlineFilterInternals_SetIsCornerSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsCornerSource");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPOutlineFilterInternals *op = static_cast<vtkPOutlineFilterInternals *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetIsCornerSource(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPOutlineFilterInternals_SetCornerFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerFactor");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPOutlineFilterInternals *op = static_cast<vtkPOutlineFilterInternals *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetCornerFactor(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPOutlineFilterInternals_Methods[] = {
  {"SetController", PyvtkPOutlineFilterInternals_SetController, METH_VARARGS,
   "SetController(self, __a:vtkMultiProcessController) -> None\nC++: void SetController(vtkMultiProcessController *)\n\nSet the controller to be used. Default is nullptr.\n"},
  {"SetIsCornerSource", PyvtkPOutlineFilterInternals_SetIsCornerSource, METH_VARARGS,
   "SetIsCornerSource(self, value:bool) -> None\nC++: void SetIsCornerSource(bool value)\n\nSet whether or not to generate a corner outline. Default is\nfalse.\n"},
  {"SetCornerFactor", PyvtkPOutlineFilterInternals_SetCornerFactor, METH_VARARGS,
   "SetCornerFactor(self, cornerFactor:float) -> None\nC++: void SetCornerFactor(double cornerFactor)\n\nSet the corner factor to use when creating corner outline.\nDefault is 0.2.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkPOutlineFilterInternals_vtkPOutlineFilterInternals(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPOutlineFilterInternals");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPOutlineFilterInternals *op = new vtkPOutlineFilterInternals();

    result = PyVTKSpecialObject_New("vtkPOutlineFilterInternals", op);
  }

  return result;
}

static PyMethodDef PyvtkPOutlineFilterInternals_vtkPOutlineFilterInternals_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkPOutlineFilterInternals_Doc =

  "vtkPOutlineFilterInternals() -> vtkPOutlineFilterInternals\nC++: vtkPOutlineFilterInternals()\n""\n"
  "vtkPOutlineFilterInternals - create wireframe outline (or corners)\nfor arbitrary data set\n\n"
  "vtkPOutlineFilterInternals has common code for vtkOutlineFilter and\n"
  "vtkOutlineCornerFilter. It assumes the filter is operated in a data\n"
  "parallel pipeline.\n\n"
  "This class does not inherit from vtkObject and is not intended to be\n"
  "used outside of VTK.\n\n";

static PyObject *
PyvtkPOutlineFilterInternals_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkPOutlineFilterInternals_vtkPOutlineFilterInternals(nullptr, args);
}

static void PyvtkPOutlineFilterInternals_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPOutlineFilterInternals *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkPOutlineFilterInternals_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPOutlineFilterInternals_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallel.vtkPOutlineFilterInternals", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPOutlineFilterInternals_Delete, // tp_dealloc
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
  PyvtkPOutlineFilterInternals_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPOutlineFilterInternals_Doc, // tp_doc
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
  PyvtkPOutlineFilterInternals_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkPOutlineFilterInternals_TypeNew
extern "C" { PyObject *PyvtkPOutlineFilterInternals_TypeNew(); }
#define DECLARED_PyvtkPOutlineFilterInternals_TypeNew
#endif

PyObject *PyvtkPOutlineFilterInternals_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkPOutlineFilterInternals_Type,
    PyvtkPOutlineFilterInternals_Methods,
    PyvtkPOutlineFilterInternals_vtkPOutlineFilterInternals_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPOutlineFilterInternals(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPOutlineFilterInternals_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPOutlineFilterInternals", o) != 0)
  {
    Py_DECREF(o);
  }

}

