// python wrapper for vtkNumberToString
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkNumberToString.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNumberToString(PyObject *dict); }

static PyObject *
PyvtkNumberToString_SetLowExponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowExponent");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkNumberToString *op = static_cast<vtkNumberToString *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetLowExponent(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNumberToString_GetLowExponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowExponent");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkNumberToString *op = static_cast<vtkNumberToString *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetLowExponent();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNumberToString_SetHighExponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighExponent");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkNumberToString *op = static_cast<vtkNumberToString *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetHighExponent(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNumberToString_GetHighExponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighExponent");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkNumberToString *op = static_cast<vtkNumberToString *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->GetHighExponent();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNumberToString_Convert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Convert");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkNumberToString *op = static_cast<vtkNumberToString *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = op->Convert(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkNumberToString_Methods[] = {
  {"SetLowExponent", PyvtkNumberToString_SetLowExponent, METH_VARARGS,
   "SetLowExponent(self, lowExponent:int) -> None\nC++: void SetLowExponent(int lowExponent)\n\nSet/Get the LowExponent for string conversion. It correspond to\nthe closest to zero exponent value that will use fixed point\nnotation in the returned string instead of a scientific notation.\neg: LowExponent = 6, 1e-6 -> \"0.000001\" LowExponent = 5, 1e-6 ->\n\"1e-6\"\n"},
  {"GetLowExponent", PyvtkNumberToString_GetLowExponent, METH_VARARGS,
   "GetLowExponent(self) -> int\nC++: int GetLowExponent()\n\n"},
  {"SetHighExponent", PyvtkNumberToString_SetHighExponent, METH_VARARGS,
   "SetHighExponent(self, highExponent:int) -> None\nC++: void SetHighExponent(int highExponent)\n\nSet/Get the HighExponent for string conversion. HighExponent\ncorrespond to the highest exponent value that will use fixed\npoint notation in the returned string instead of a scientific\nnotation. HighExponent = 6, 1e6 -> \"1000000\" HighExponent = 5,\n1e6 -> \"1e6\"\n"},
  {"GetHighExponent", PyvtkNumberToString_GetHighExponent, METH_VARARGS,
   "GetHighExponent(self) -> int\nC++: int GetHighExponent()\n\n"},
  {"Convert", PyvtkNumberToString_Convert, METH_VARARGS,
   "Convert(self, val:float) -> str\nC++: std::string Convert(double val)\n\nConvert a number to an accurate string representation of that\nnumber. A templated generic implementation is provided, which\nrely on std::to_string for types other than double or float.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkNumberToString_vtkNumberToString_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkNumberToString");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkNumberToString *op = new vtkNumberToString();

    result = PyVTKSpecialObject_New("vtkNumberToString", op);
  }

  return result;
}

static PyObject *
PyvtkNumberToString_vtkNumberToString_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkNumberToString");

  vtkNumberToString *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkNumberToString"))
  {
    vtkNumberToString *op = new vtkNumberToString(*temp0);

    result = PyVTKSpecialObject_New("vtkNumberToString", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkNumberToString_vtkNumberToString_Methods[] = {
  {"vtkNumberToString", PyvtkNumberToString_vtkNumberToString_s2, METH_VARARGS,
   "@W vtkNumberToString"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkNumberToString_vtkNumberToString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkNumberToString_vtkNumberToString_s1(self, args);
    case 1:
      return PyvtkNumberToString_vtkNumberToString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkNumberToString");
  return nullptr;
}


static const char *PyvtkNumberToString_Doc =

  "vtkNumberToString() -> vtkNumberToString\nC++: vtkNumberToString()\nvtkNumberToString(__a:vtkNumberToString) -> vtkNumberToString\nC++: vtkNumberToString(const &vtkNumberToString)\n""\n"
  "vtkNumberToString - Convert floating and fixed point numbers to\nstrings\n\n"
  "This class uses the double-conversion library to convert float and\n"
  "double numbers to std::string without numerical precision errors. It\n"
  "is possible to specify the low and high exponent where the string\n"
  "representation will switch to scientific notation instead of fixed\n"
  "point notation.\n\n"
  "For other types, this class rely on std::to_string.\n\n"
  "Typical use:\n\n"
  "{cpp}\n"
  "#include \"vtkNumberToString.h\"\n"
  " float a = 1.0f/3.0f;\n"
  " vtkNumberToString converter;\n"
  " std::cout << converter.Convert(a) << std::endl;\n\n"
  "{cpp}\n"
  "#include \"vtkNumberToString.h\"\n"
  " double a = 1e7*vtkMath::PI();\n"
  " vtkNumberToString converter;\n"
  " converter.SetLowExponent(-6);\n"
  " converter.SetHighExponent(6);\n"
  " std::cout << converter.Convert(a) << std::endl;\n\n";

static PyObject *
PyvtkNumberToString_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkNumberToString_vtkNumberToString(nullptr, args);
}

static void PyvtkNumberToString_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkNumberToString *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkNumberToString_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkNumberToString_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCore.vtkNumberToString", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkNumberToString_Delete, // tp_dealloc
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
  PyvtkNumberToString_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkNumberToString_Doc, // tp_doc
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
  PyvtkNumberToString_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkNumberToString_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkNumberToString(*static_cast<const vtkNumberToString*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkNumberToString_TypeNew
extern "C" { PyObject *PyvtkNumberToString_TypeNew(); }
#define DECLARED_PyvtkNumberToString_TypeNew
#endif

PyObject *PyvtkNumberToString_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkNumberToString_Type,
    PyvtkNumberToString_Methods,
    PyvtkNumberToString_vtkNumberToString_Methods,
    &PyvtkNumberToString_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNumberToString(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNumberToString_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkNumberToString", o) != 0)
  {
    Py_DECREF(o);
  }

}

