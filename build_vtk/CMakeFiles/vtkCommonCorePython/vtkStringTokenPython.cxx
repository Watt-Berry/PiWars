// python wrapper for vtkStringToken
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkStringToken.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStringToken(PyObject *dict); }

static PyObject *
PyvtkStringToken_Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Data");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkStringToken *op = static_cast<vtkStringToken *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = &op->Data();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStringToken_GetManager(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetManager");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const vtkStringManager *tempr = vtkStringToken::GetManager();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStringToken_Methods[] = {
  {"Data", PyvtkStringToken_Data, METH_VARARGS,
   "Data(self) -> str\nC++: const std::string &Data()\n\nReturn the string corresponding to the token.\n"},
  {"GetManager", PyvtkStringToken_GetManager, METH_VARARGS,
   "GetManager() -> vtkStringManager\nC++: static const vtkStringManager *GetManager()\n\nReturn the database of strings and their tokens (hashes).\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkStringToken_vtkStringToken_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStringToken");

  const char *temp0 = nullptr;
  size_t temp1 = std::string::npos;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkStringToken *op = new vtkStringToken(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkStringToken", op);
  }

  return result;
}

static PyObject *
PyvtkStringToken_vtkStringToken_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStringToken");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStringToken *op = new vtkStringToken(temp0);

    result = PyVTKSpecialObject_New("vtkStringToken", op);
  }

  return result;
}

static PyObject *
PyvtkStringToken_vtkStringToken_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStringToken");

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    vtkStringToken *op = new vtkStringToken(*temp0);

    result = PyVTKSpecialObject_New("vtkStringToken", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkStringToken_vtkStringToken_Methods[] = {
  {"vtkStringToken", PyvtkStringToken_vtkStringToken_s1, METH_VARARGS,
   "@|zK"},
  {"vtkStringToken", PyvtkStringToken_vtkStringToken_s2, METH_VARARGS,
   "@s"},
  {"vtkStringToken", PyvtkStringToken_vtkStringToken_s3, METH_VARARGS,
   "@W vtkStringToken"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkStringToken_vtkStringToken(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStringToken_vtkStringToken_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
    case 2:
      return PyvtkStringToken_vtkStringToken_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkStringToken");
  return nullptr;
}


static const char *PyvtkStringToken_Doc =

  "vtkStringToken(data:str=..., size:int=...) -> vtkStringToken\nC++: vtkStringToken(const char *data=nullptr,\n    std::size_t size=std::string::npos)\nvtkStringToken(data:str) -> vtkStringToken\nC++: vtkStringToken(const std::string &data)\nvtkStringToken(__a:vtkStringToken) -> vtkStringToken\nC++: vtkStringToken(const &vtkStringToken)\n""\n"
  "vtkStringToken - Represent a string by its integer hash.\n\n"
  "This class does not inherit vtkObject; it is a lightweight object for\n"
  "representing a string as a 32-bit integer token. Tokens can be\n"
  "constructed at compile-time (via the \"\"_token string-literal operator\n"
  "below) or run-time (via the constructor).\n\n"
  "Equality comparisons are simple integer tests, while inequality\n"
  "operators attempt to locate the original source strings and compare\n"
  "them alphanumerically to preserve lexicographic ordering.\n\n"
  "This class can be used inside ordered and unordered STL containers.\n\n";

static PyObject *
PyvtkStringToken_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkStringToken_vtkStringToken(nullptr, args);
}

static void PyvtkStringToken_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkStringToken *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static int PyvtkStringToken_CheckExact(PyObject *ob);

static PyObject *PyvtkStringToken_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkStringToken *so1 = nullptr;
  const vtkStringToken *so2 = nullptr;
  int result = -1;

  if (PyvtkStringToken_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkStringToken *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkStringToken *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkStringToken", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkStringToken_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkStringToken *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkStringToken *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkStringToken", &n2));
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
      result = ((*so1) < (*so2));
      break;
    case Py_LE:
      result = ((*so1) <= (*so2));
      break;
    case Py_EQ:
      result = ((*so1) == (*so2));
      break;
    case Py_NE:
      result = ((*so1) != (*so2));
      break;
    case Py_GT:
      result = ((*so1) > (*so2));
      break;
    case Py_GE:
      result = ((*so1) >= (*so2));
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

static Py_hash_t PyvtkStringToken_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStringToken_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkStringToken", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkStringToken_Delete, // tp_dealloc
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
  PyvtkStringToken_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkStringToken_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkStringToken_RichCompare, // tp_richcompare
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
  PyvtkStringToken_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkStringToken_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkStringToken_Type);
}

static void *PyvtkStringToken_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkStringToken(*static_cast<const vtkStringToken*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkStringToken_TypeNew
extern "C" { PyObject *PyvtkStringToken_TypeNew(); }
#define DECLARED_PyvtkStringToken_TypeNew
#endif

PyObject *PyvtkStringToken_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkStringToken_Type,
    PyvtkStringToken_Methods,
    PyvtkStringToken_vtkStringToken_Methods,
    &PyvtkStringToken_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStringToken(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStringToken_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkStringToken", o) != 0)
  {
    Py_DECREF(o);
  }

}

