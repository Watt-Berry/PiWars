// python wrapper for vtkTDxMotionEventInfo
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkTDxMotionEventInfo.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTDxMotionEventInfo(PyObject *dict); }
static PyMethodDef PyvtkTDxMotionEventInfo_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTDxMotionEventInfo_vtkTDxMotionEventInfo_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTDxMotionEventInfo");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTDxMotionEventInfo *op = new vtkTDxMotionEventInfo();

    result = PyVTKSpecialObject_New("vtkTDxMotionEventInfo", op);
  }

  return result;
}

static PyObject *
PyvtkTDxMotionEventInfo_vtkTDxMotionEventInfo_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTDxMotionEventInfo");

  vtkTDxMotionEventInfo *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTDxMotionEventInfo"))
  {
    vtkTDxMotionEventInfo *op = new vtkTDxMotionEventInfo(*temp0);

    result = PyVTKSpecialObject_New("vtkTDxMotionEventInfo", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTDxMotionEventInfo_vtkTDxMotionEventInfo_Methods[] = {
  {"vtkTDxMotionEventInfo", PyvtkTDxMotionEventInfo_vtkTDxMotionEventInfo_s2, METH_VARARGS,
   "@W vtkTDxMotionEventInfo"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTDxMotionEventInfo_vtkTDxMotionEventInfo(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTDxMotionEventInfo_vtkTDxMotionEventInfo_s1(self, args);
    case 1:
      return PyvtkTDxMotionEventInfo_vtkTDxMotionEventInfo_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTDxMotionEventInfo");
  return nullptr;
}


static const char *PyvtkTDxMotionEventInfo_Doc =

  "vtkTDxMotionEventInfo() -> vtkTDxMotionEventInfo\nC++: vtkTDxMotionEventInfo()\nvtkTDxMotionEventInfo(__a:vtkTDxMotionEventInfo)\n    -> vtkTDxMotionEventInfo\nC++: vtkTDxMotionEventInfo(const &vtkTDxMotionEventInfo)\n""\n"
  "vtkTDxMotionEventInfo - Store motion information from a 3DConnexion\ninput device\n\n"
  "vtkTDxMotionEventInfo is a data structure that stores the information\n"
  "about a motion event from a 3DConnexion input device.\n\n"
  "@sa\n"
  "vtkTDxDevice\n\n";

static PyObject *
PyvtkTDxMotionEventInfo_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTDxMotionEventInfo_vtkTDxMotionEventInfo(nullptr, args);
}

static void PyvtkTDxMotionEventInfo_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTDxMotionEventInfo *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkTDxMotionEventInfo_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTDxMotionEventInfo_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkTDxMotionEventInfo", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTDxMotionEventInfo_Delete, // tp_dealloc
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
  PyvtkTDxMotionEventInfo_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTDxMotionEventInfo_Doc, // tp_doc
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
  PyvtkTDxMotionEventInfo_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTDxMotionEventInfo_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTDxMotionEventInfo(*static_cast<const vtkTDxMotionEventInfo*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkTDxMotionEventInfo_TypeNew
extern "C" { PyObject *PyvtkTDxMotionEventInfo_TypeNew(); }
#define DECLARED_PyvtkTDxMotionEventInfo_TypeNew
#endif

PyObject *PyvtkTDxMotionEventInfo_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkTDxMotionEventInfo_Type,
    PyvtkTDxMotionEventInfo_Methods,
    PyvtkTDxMotionEventInfo_vtkTDxMotionEventInfo_Methods,
    &PyvtkTDxMotionEventInfo_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTDxMotionEventInfo(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTDxMotionEventInfo_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkTDxMotionEventInfo", o) != 0)
  {
    Py_DECREF(o);
  }

}

