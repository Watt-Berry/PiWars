// python wrapper for vtkStateStorage
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkStateStorage.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStateStorage(PyObject *dict); }

static PyObject *
PyvtkStateStorage_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkStateStorage *op = static_cast<vtkStateStorage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Clear();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStateStorage_Methods[] = {
  {"Clear", PyvtkStateStorage_Clear, METH_VARARGS,
   "Clear(self) -> None\nC++: void Clear()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkStateStorage_vtkStateStorage(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStateStorage");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkStateStorage *op = new vtkStateStorage();

    result = PyVTKSpecialObject_New("vtkStateStorage", op);
  }

  return result;
}

static PyMethodDef PyvtkStateStorage_vtkStateStorage_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkStateStorage_Doc =

  "vtkStateStorage() -> vtkStateStorage\nC++: vtkStateStorage()\n""\n"
  "vtkStateStorage - Class to make storing and comparing state quick and\neasy\n\n"
  "vtkStateStorage is just a thin wrapper around std::vector<unsigned\n"
  "char> It is best to use this class as an ivar so that allocs do not\n"
  "happen too often.\n\n"
  "Example usage:// compute the new state in a temp ivar\n"
  "// note that clear does not free memory\n"
  "this->TempState.Clear();\n"
  "this->TempState.Append(act->GetProperty()->GetMTime(), \"property\n"
  "mtime\");\n"
  "this->TempState.Append(\n"
  "  this->CurrentInput ? this->CurrentInput->GetMTime() : 0, \"input\n"
  "mtime\");\n"
  "this->TempState.Append(\n"
  "  act->GetTexture() ? act->GetTexture()->GetMTime() : 0, \"texture\n"
  "mtime\");\n\n"
  "// now compare against the last state value\n\n"
  "if (this->VBOBuildState != this->TempState) {\n"
  "  // set the ivar to the new state\n"
  "  this->VBOBuildState = this->TempState;\n"
  "  do something... }\n\n";

static PyObject *
PyvtkStateStorage_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkStateStorage_vtkStateStorage(nullptr, args);
}

static void PyvtkStateStorage_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkStateStorage *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static int PyvtkStateStorage_CheckExact(PyObject *ob);

static PyObject *PyvtkStateStorage_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkStateStorage *so1 = nullptr;
  const vtkStateStorage *so2 = nullptr;
  int result = -1;

  if (PyvtkStateStorage_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkStateStorage *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkStateStorage *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkStateStorage", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkStateStorage_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkStateStorage *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkStateStorage *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkStateStorage", &n2));
    if (so2 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  switch (opid)
  {
    case Py_LT:
      break;
    case Py_LE:
      break;
    case Py_EQ:
      break;
    case Py_NE:
      result = ((*so1) != (*so2));
      break;
    case Py_GT:
      break;
    case Py_GE:
      break;
  }

  if (n1)
  {
    Py_DECREF(n1);
  }
  else if (n2)
  {
    Py_DECREF(n2);
  }

  if (result == -1)
  {
    PyErr_SetString(PyExc_TypeError, "operation not available");
    return nullptr;
  }

  // avoids aliasing issues with Py_INCREF(Py_False)
  return PyBool_FromLong((long)result);
}

static Py_hash_t PyvtkStateStorage_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStateStorage_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkStateStorage", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkStateStorage_Delete, // tp_dealloc
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
  PyvtkStateStorage_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkStateStorage_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkStateStorage_RichCompare, // tp_richcompare
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
  PyvtkStateStorage_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkStateStorage_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkStateStorage_Type);
}

#ifndef DECLARED_PyvtkStateStorage_TypeNew
extern "C" { PyObject *PyvtkStateStorage_TypeNew(); }
#define DECLARED_PyvtkStateStorage_TypeNew
#endif

PyObject *PyvtkStateStorage_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkStateStorage_Type,
    PyvtkStateStorage_Methods,
    PyvtkStateStorage_vtkStateStorage_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStateStorage(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStateStorage_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkStateStorage", o) != 0)
  {
    Py_DECREF(o);
  }

}

