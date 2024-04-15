// python wrapper for vtkVector
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkVector.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVector(PyObject *dict); }

static PyObject *
PyvtkVector_IdLi4EE_SquaredNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquaredNorm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<double, 4> *op = static_cast<vtkVector<double, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->SquaredNorm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IdLi4EE_Norm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Norm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<double, 4> *op = static_cast<vtkVector<double, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Norm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IdLi4EE_Normalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<double, 4> *op = static_cast<vtkVector<double, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Normalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IdLi4EE_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<double, 4> *op = static_cast<vtkVector<double, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<double, 4> tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IdLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IdLi4EE_Dot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dot");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<double, 4> *op = static_cast<vtkVector<double, 4> *>(vp);

  vtkVector<double, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IdLi4EE"))
  {
    double tempr = op->Dot(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IdLi4EE_Methods[] = {
  {"SquaredNorm", PyvtkVector_IdLi4EE_SquaredNorm, METH_VARARGS,
   "SquaredNorm(self) -> float\nC++: double SquaredNorm()\n\nGet the squared norm of the vector.\n"},
  {"Norm", PyvtkVector_IdLi4EE_Norm, METH_VARARGS,
   "Norm(self) -> float\nC++: double Norm()\n\nGet the norm of the vector, i.e. its length.\n"},
  {"Normalize", PyvtkVector_IdLi4EE_Normalize, METH_VARARGS,
   "Normalize(self) -> float\nC++: double Normalize()\n\nNormalize the vector in place.\n\\return The length of the vector.\n"},
  {"Normalized", PyvtkVector_IdLi4EE_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector_IdLi4EE\nC++: vtkVector<double, 4> Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {"Dot", PyvtkVector_IdLi4EE_Dot, METH_VARARGS,
   "Dot(self, other:vtkVector_IdLi4EE) -> float\nC++: double Dot(const vtkVector<double, 4> &other)\n\nThe dot product of this and the supplied vector.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector_IdLi4EE_vtkVector_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector<double, 4> *op = new vtkVector<double, 4>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkVector_IdLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IdLi4EE_vtkVector_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector<double, 4> *op = new vtkVector<double, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IdLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IdLi4EE_vtkVector_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector<double, 4> *op = new vtkVector<double, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IdLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IdLi4EE_vtkVector_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<double, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IdLi4EE"))
  {
    vtkVector<double, 4> *op = new vtkVector<double, 4>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IdLi4EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IdLi4EE_vtkVector_Methods[] = {
  {"vtkVector", PyvtkVector_IdLi4EE_vtkVector_s2, METH_VARARGS,
   "-@d"},
  {"vtkVector", PyvtkVector_IdLi4EE_vtkVector_s3, METH_VARARGS,
   "-@P *d"},
  {"vtkVector", PyvtkVector_IdLi4EE_vtkVector_s4, METH_VARARGS,
   "@W vtkVector_IdLi4EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector_IdLi4EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IdLi4EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector_IdLi4EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return nullptr;
}


static const char *PyvtkVector_IdLi4EE_Doc =

  "vtkVector() -> vtkVector\nC++: vtkVector()\nvtkVector(scalar:float) -> vtkVector\nC++: explicit vtkVector(const double &scalar)\nvtkVector(init:(float, float, float, float)) -> vtkVector\nC++: explicit vtkVector(const double *init)\nvtkVector(__a:vtkVector_IdLi4EE) -> vtkVector\nC++: vtkVector(const &vtkVector<double, 4>)\n""\n"
  "vtkVector<double, 4> - templated base type for storage of vectors.\n\n"
  "Superclass: vtkTuple[float64,4]\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "fixed size vectors, which can be used to represent two and three\n"
  "dimensional points. The memory layout is a contiguous array of the\n"
  "specified type, such that a float[2] can be cast to a vtkVector2f and\n"
  "manipulated. Also a float[6] could be cast and used as a\n"
  "vtkVector2f[3].\n\n";

static PyObject *
PyvtkVector_IdLi4EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector_IdLi4EE_vtkVector(nullptr, args);
}

static void PyvtkVector_IdLi4EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector<double, 4> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector_IdLi4EE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector_IdLi4EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector_IdLi4EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IdLi4EE_Delete, // tp_dealloc
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
  PyvtkVector_IdLi4EE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector_IdLi4EE_Doc, // tp_doc
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
  PyvtkVector_IdLi4EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector_IdLi4EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector<double, 4>(*static_cast<const vtkVector<double, 4>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector_IdLi4EE_TypeNew
extern "C" { PyObject *PyvtkVector_IdLi4EE_TypeNew(); }
#define DECLARED_PyvtkVector_IdLi4EE_TypeNew
#endif

PyObject *PyvtkVector_IdLi4EE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector_IdLi4EE_Type,
    PyvtkVector_IdLi4EE_Methods,
    PyvtkVector_IdLi4EE_vtkVector_Methods,
    &PyvtkVector_IdLi4EE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindSpecialTypeObject("vtkTuple_IdLi4EE");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector_IfLi4EE_SquaredNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquaredNorm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<float, 4> *op = static_cast<vtkVector<float, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = op->SquaredNorm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IfLi4EE_Norm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Norm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<float, 4> *op = static_cast<vtkVector<float, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Norm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IfLi4EE_Normalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<float, 4> *op = static_cast<vtkVector<float, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Normalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IfLi4EE_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<float, 4> *op = static_cast<vtkVector<float, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<float, 4> tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IfLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IfLi4EE_Dot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dot");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<float, 4> *op = static_cast<vtkVector<float, 4> *>(vp);

  vtkVector<float, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IfLi4EE"))
  {
    float tempr = op->Dot(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IfLi4EE_Methods[] = {
  {"SquaredNorm", PyvtkVector_IfLi4EE_SquaredNorm, METH_VARARGS,
   "SquaredNorm(self) -> float\nC++: float SquaredNorm()\n\nGet the squared norm of the vector.\n"},
  {"Norm", PyvtkVector_IfLi4EE_Norm, METH_VARARGS,
   "Norm(self) -> float\nC++: double Norm()\n\nGet the norm of the vector, i.e. its length.\n"},
  {"Normalize", PyvtkVector_IfLi4EE_Normalize, METH_VARARGS,
   "Normalize(self) -> float\nC++: double Normalize()\n\nNormalize the vector in place.\n\\return The length of the vector.\n"},
  {"Normalized", PyvtkVector_IfLi4EE_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector_IfLi4EE\nC++: vtkVector<float, 4> Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {"Dot", PyvtkVector_IfLi4EE_Dot, METH_VARARGS,
   "Dot(self, other:vtkVector_IfLi4EE) -> float\nC++: float Dot(const vtkVector<float, 4> &other)\n\nThe dot product of this and the supplied vector.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector_IfLi4EE_vtkVector_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector<float, 4> *op = new vtkVector<float, 4>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkVector_IfLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IfLi4EE_vtkVector_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector<float, 4> *op = new vtkVector<float, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IfLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IfLi4EE_vtkVector_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  const size_t size0 = 4;
  float temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector<float, 4> *op = new vtkVector<float, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IfLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IfLi4EE_vtkVector_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<float, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IfLi4EE"))
  {
    vtkVector<float, 4> *op = new vtkVector<float, 4>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IfLi4EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IfLi4EE_vtkVector_Methods[] = {
  {"vtkVector", PyvtkVector_IfLi4EE_vtkVector_s2, METH_VARARGS,
   "-@f"},
  {"vtkVector", PyvtkVector_IfLi4EE_vtkVector_s3, METH_VARARGS,
   "-@P *f"},
  {"vtkVector", PyvtkVector_IfLi4EE_vtkVector_s4, METH_VARARGS,
   "@W vtkVector_IfLi4EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector_IfLi4EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IfLi4EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector_IfLi4EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return nullptr;
}


static const char *PyvtkVector_IfLi4EE_Doc =

  "vtkVector() -> vtkVector\nC++: vtkVector()\nvtkVector(scalar:float) -> vtkVector\nC++: explicit vtkVector(const float &scalar)\nvtkVector(init:(float, float, float, float)) -> vtkVector\nC++: explicit vtkVector(const float *init)\nvtkVector(__a:vtkVector_IfLi4EE) -> vtkVector\nC++: vtkVector(const &vtkVector<float, 4>)\n""\n"
  "vtkVector<float, 4> - templated base type for storage of vectors.\n\n"
  "Superclass: vtkTuple[float32,4]\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "fixed size vectors, which can be used to represent two and three\n"
  "dimensional points. The memory layout is a contiguous array of the\n"
  "specified type, such that a float[2] can be cast to a vtkVector2f and\n"
  "manipulated. Also a float[6] could be cast and used as a\n"
  "vtkVector2f[3].\n\n";

static PyObject *
PyvtkVector_IfLi4EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector_IfLi4EE_vtkVector(nullptr, args);
}

static void PyvtkVector_IfLi4EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector<float, 4> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector_IfLi4EE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector_IfLi4EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector_IfLi4EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IfLi4EE_Delete, // tp_dealloc
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
  PyvtkVector_IfLi4EE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector_IfLi4EE_Doc, // tp_doc
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
  PyvtkVector_IfLi4EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector_IfLi4EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector<float, 4>(*static_cast<const vtkVector<float, 4>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector_IfLi4EE_TypeNew
extern "C" { PyObject *PyvtkVector_IfLi4EE_TypeNew(); }
#define DECLARED_PyvtkVector_IfLi4EE_TypeNew
#endif

PyObject *PyvtkVector_IfLi4EE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector_IfLi4EE_Type,
    PyvtkVector_IfLi4EE_Methods,
    PyvtkVector_IfLi4EE_vtkVector_Methods,
    &PyvtkVector_IfLi4EE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindSpecialTypeObject("vtkTuple_IfLi4EE");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector_IiLi4EE_SquaredNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquaredNorm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<int, 4> *op = static_cast<vtkVector<int, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->SquaredNorm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IiLi4EE_Norm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Norm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<int, 4> *op = static_cast<vtkVector<int, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Norm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IiLi4EE_Normalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<int, 4> *op = static_cast<vtkVector<int, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Normalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IiLi4EE_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<int, 4> *op = static_cast<vtkVector<int, 4> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<int, 4> tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IiLi4EE");
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IiLi4EE_Dot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dot");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<int, 4> *op = static_cast<vtkVector<int, 4> *>(vp);

  vtkVector<int, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IiLi4EE"))
  {
    int tempr = op->Dot(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IiLi4EE_Methods[] = {
  {"SquaredNorm", PyvtkVector_IiLi4EE_SquaredNorm, METH_VARARGS,
   "SquaredNorm(self) -> int\nC++: int SquaredNorm()\n\nGet the squared norm of the vector.\n"},
  {"Norm", PyvtkVector_IiLi4EE_Norm, METH_VARARGS,
   "Norm(self) -> float\nC++: double Norm()\n\nGet the norm of the vector, i.e. its length.\n"},
  {"Normalize", PyvtkVector_IiLi4EE_Normalize, METH_VARARGS,
   "Normalize(self) -> float\nC++: double Normalize()\n\nNormalize the vector in place.\n\\return The length of the vector.\n"},
  {"Normalized", PyvtkVector_IiLi4EE_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector_IiLi4EE\nC++: vtkVector<int, 4> Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {"Dot", PyvtkVector_IiLi4EE_Dot, METH_VARARGS,
   "Dot(self, other:vtkVector_IiLi4EE) -> int\nC++: int Dot(const vtkVector<int, 4> &other)\n\nThe dot product of this and the supplied vector.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector_IiLi4EE_vtkVector_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector<int, 4> *op = new vtkVector<int, 4>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkVector_IiLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IiLi4EE_vtkVector_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector<int, 4> *op = new vtkVector<int, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IiLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IiLi4EE_vtkVector_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  const size_t size0 = 4;
  int temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector<int, 4> *op = new vtkVector<int, 4>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IiLi4EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IiLi4EE_vtkVector_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<int, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IiLi4EE"))
  {
    vtkVector<int, 4> *op = new vtkVector<int, 4>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IiLi4EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IiLi4EE_vtkVector_Methods[] = {
  {"vtkVector", PyvtkVector_IiLi4EE_vtkVector_s2, METH_VARARGS,
   "-@i"},
  {"vtkVector", PyvtkVector_IiLi4EE_vtkVector_s3, METH_VARARGS,
   "-@P *i"},
  {"vtkVector", PyvtkVector_IiLi4EE_vtkVector_s4, METH_VARARGS,
   "@W vtkVector_IiLi4EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector_IiLi4EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IiLi4EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector_IiLi4EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return nullptr;
}


static const char *PyvtkVector_IiLi4EE_Doc =

  "vtkVector() -> vtkVector\nC++: vtkVector()\nvtkVector(scalar:int) -> vtkVector\nC++: explicit vtkVector(const int &scalar)\nvtkVector(init:(int, int, int, int)) -> vtkVector\nC++: explicit vtkVector(const int *init)\nvtkVector(__a:vtkVector_IiLi4EE) -> vtkVector\nC++: vtkVector(const &vtkVector<int, 4>)\n""\n"
  "vtkVector<int, 4> - templated base type for storage of vectors.\n\n"
  "Superclass: vtkTuple[int32,4]\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "fixed size vectors, which can be used to represent two and three\n"
  "dimensional points. The memory layout is a contiguous array of the\n"
  "specified type, such that a float[2] can be cast to a vtkVector2f and\n"
  "manipulated. Also a float[6] could be cast and used as a\n"
  "vtkVector2f[3].\n\n";

static PyObject *
PyvtkVector_IiLi4EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector_IiLi4EE_vtkVector(nullptr, args);
}

static void PyvtkVector_IiLi4EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector<int, 4> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector_IiLi4EE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector_IiLi4EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector_IiLi4EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IiLi4EE_Delete, // tp_dealloc
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
  PyvtkVector_IiLi4EE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector_IiLi4EE_Doc, // tp_doc
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
  PyvtkVector_IiLi4EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector_IiLi4EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector<int, 4>(*static_cast<const vtkVector<int, 4>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector_IiLi4EE_TypeNew
extern "C" { PyObject *PyvtkVector_IiLi4EE_TypeNew(); }
#define DECLARED_PyvtkVector_IiLi4EE_TypeNew
#endif

PyObject *PyvtkVector_IiLi4EE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector_IiLi4EE_Type,
    PyvtkVector_IiLi4EE_Methods,
    PyvtkVector_IiLi4EE_vtkVector_Methods,
    &PyvtkVector_IiLi4EE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindSpecialTypeObject("vtkTuple_IiLi4EE");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector_IdLi2EE_SquaredNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquaredNorm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<double, 2> *op = static_cast<vtkVector<double, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->SquaredNorm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IdLi2EE_Norm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Norm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<double, 2> *op = static_cast<vtkVector<double, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Norm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IdLi2EE_Normalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<double, 2> *op = static_cast<vtkVector<double, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Normalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IdLi2EE_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<double, 2> *op = static_cast<vtkVector<double, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<double, 2> tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IdLi2EE");
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IdLi2EE_Dot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dot");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<double, 2> *op = static_cast<vtkVector<double, 2> *>(vp);

  vtkVector<double, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IdLi2EE"))
  {
    double tempr = op->Dot(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IdLi2EE_Methods[] = {
  {"SquaredNorm", PyvtkVector_IdLi2EE_SquaredNorm, METH_VARARGS,
   "SquaredNorm(self) -> float\nC++: double SquaredNorm()\n\nGet the squared norm of the vector.\n"},
  {"Norm", PyvtkVector_IdLi2EE_Norm, METH_VARARGS,
   "Norm(self) -> float\nC++: double Norm()\n\nGet the norm of the vector, i.e. its length.\n"},
  {"Normalize", PyvtkVector_IdLi2EE_Normalize, METH_VARARGS,
   "Normalize(self) -> float\nC++: double Normalize()\n\nNormalize the vector in place.\n\\return The length of the vector.\n"},
  {"Normalized", PyvtkVector_IdLi2EE_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector_IdLi2EE\nC++: vtkVector<double, 2> Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {"Dot", PyvtkVector_IdLi2EE_Dot, METH_VARARGS,
   "Dot(self, other:vtkVector_IdLi2EE) -> float\nC++: double Dot(const vtkVector<double, 2> &other)\n\nThe dot product of this and the supplied vector.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector_IdLi2EE_vtkVector_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector<double, 2> *op = new vtkVector<double, 2>();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkVector_IdLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IdLi2EE_vtkVector_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector<double, 2> *op = new vtkVector<double, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IdLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IdLi2EE_vtkVector_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector<double, 2> *op = new vtkVector<double, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IdLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IdLi2EE_vtkVector_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<double, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IdLi2EE"))
  {
    vtkVector<double, 2> *op = new vtkVector<double, 2>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IdLi2EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IdLi2EE_vtkVector_Methods[] = {
  {"vtkVector", PyvtkVector_IdLi2EE_vtkVector_s2, METH_VARARGS,
   "-@d"},
  {"vtkVector", PyvtkVector_IdLi2EE_vtkVector_s3, METH_VARARGS,
   "-@P *d"},
  {"vtkVector", PyvtkVector_IdLi2EE_vtkVector_s4, METH_VARARGS,
   "@W vtkVector_IdLi2EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector_IdLi2EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IdLi2EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector_IdLi2EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return nullptr;
}


static const char *PyvtkVector_IdLi2EE_Doc =

  "vtkVector() -> vtkVector\nC++: vtkVector()\nvtkVector(scalar:float) -> vtkVector\nC++: explicit vtkVector(const double &scalar)\nvtkVector(init:(float, float)) -> vtkVector\nC++: explicit vtkVector(const double *init)\nvtkVector(__a:vtkVector_IdLi2EE) -> vtkVector\nC++: vtkVector(const &vtkVector<double, 2>)\n""\n"
  "vtkVector<double, 2> - templated base type for storage of vectors.\n\n"
  "Superclass: vtkTuple[float64,2]\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "fixed size vectors, which can be used to represent two and three\n"
  "dimensional points. The memory layout is a contiguous array of the\n"
  "specified type, such that a float[2] can be cast to a vtkVector2f and\n"
  "manipulated. Also a float[6] could be cast and used as a\n"
  "vtkVector2f[3].\n\n";

static PyObject *
PyvtkVector_IdLi2EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector_IdLi2EE_vtkVector(nullptr, args);
}

static void PyvtkVector_IdLi2EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector<double, 2> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector_IdLi2EE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector_IdLi2EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector_IdLi2EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IdLi2EE_Delete, // tp_dealloc
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
  PyvtkVector_IdLi2EE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector_IdLi2EE_Doc, // tp_doc
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
  PyvtkVector_IdLi2EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector_IdLi2EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector<double, 2>(*static_cast<const vtkVector<double, 2>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector_IdLi2EE_TypeNew
extern "C" { PyObject *PyvtkVector_IdLi2EE_TypeNew(); }
#define DECLARED_PyvtkVector_IdLi2EE_TypeNew
#endif

PyObject *PyvtkVector_IdLi2EE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector_IdLi2EE_Type,
    PyvtkVector_IdLi2EE_Methods,
    PyvtkVector_IdLi2EE_vtkVector_Methods,
    &PyvtkVector_IdLi2EE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindSpecialTypeObject("vtkTuple_IdLi2EE");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector_IfLi2EE_SquaredNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquaredNorm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<float, 2> *op = static_cast<vtkVector<float, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = op->SquaredNorm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IfLi2EE_Norm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Norm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<float, 2> *op = static_cast<vtkVector<float, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Norm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IfLi2EE_Normalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<float, 2> *op = static_cast<vtkVector<float, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Normalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IfLi2EE_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<float, 2> *op = static_cast<vtkVector<float, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<float, 2> tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IfLi2EE");
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IfLi2EE_Dot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dot");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<float, 2> *op = static_cast<vtkVector<float, 2> *>(vp);

  vtkVector<float, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IfLi2EE"))
  {
    float tempr = op->Dot(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IfLi2EE_Methods[] = {
  {"SquaredNorm", PyvtkVector_IfLi2EE_SquaredNorm, METH_VARARGS,
   "SquaredNorm(self) -> float\nC++: float SquaredNorm()\n\nGet the squared norm of the vector.\n"},
  {"Norm", PyvtkVector_IfLi2EE_Norm, METH_VARARGS,
   "Norm(self) -> float\nC++: double Norm()\n\nGet the norm of the vector, i.e. its length.\n"},
  {"Normalize", PyvtkVector_IfLi2EE_Normalize, METH_VARARGS,
   "Normalize(self) -> float\nC++: double Normalize()\n\nNormalize the vector in place.\n\\return The length of the vector.\n"},
  {"Normalized", PyvtkVector_IfLi2EE_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector_IfLi2EE\nC++: vtkVector<float, 2> Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {"Dot", PyvtkVector_IfLi2EE_Dot, METH_VARARGS,
   "Dot(self, other:vtkVector_IfLi2EE) -> float\nC++: float Dot(const vtkVector<float, 2> &other)\n\nThe dot product of this and the supplied vector.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector_IfLi2EE_vtkVector_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector<float, 2> *op = new vtkVector<float, 2>();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkVector_IfLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IfLi2EE_vtkVector_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector<float, 2> *op = new vtkVector<float, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IfLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IfLi2EE_vtkVector_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  const size_t size0 = 2;
  float temp0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector<float, 2> *op = new vtkVector<float, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IfLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IfLi2EE_vtkVector_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<float, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IfLi2EE"))
  {
    vtkVector<float, 2> *op = new vtkVector<float, 2>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IfLi2EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IfLi2EE_vtkVector_Methods[] = {
  {"vtkVector", PyvtkVector_IfLi2EE_vtkVector_s2, METH_VARARGS,
   "-@f"},
  {"vtkVector", PyvtkVector_IfLi2EE_vtkVector_s3, METH_VARARGS,
   "-@P *f"},
  {"vtkVector", PyvtkVector_IfLi2EE_vtkVector_s4, METH_VARARGS,
   "@W vtkVector_IfLi2EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector_IfLi2EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IfLi2EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector_IfLi2EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return nullptr;
}


static const char *PyvtkVector_IfLi2EE_Doc =

  "vtkVector() -> vtkVector\nC++: vtkVector()\nvtkVector(scalar:float) -> vtkVector\nC++: explicit vtkVector(const float &scalar)\nvtkVector(init:(float, float)) -> vtkVector\nC++: explicit vtkVector(const float *init)\nvtkVector(__a:vtkVector_IfLi2EE) -> vtkVector\nC++: vtkVector(const &vtkVector<float, 2>)\n""\n"
  "vtkVector<float, 2> - templated base type for storage of vectors.\n\n"
  "Superclass: vtkTuple[float32,2]\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "fixed size vectors, which can be used to represent two and three\n"
  "dimensional points. The memory layout is a contiguous array of the\n"
  "specified type, such that a float[2] can be cast to a vtkVector2f and\n"
  "manipulated. Also a float[6] could be cast and used as a\n"
  "vtkVector2f[3].\n\n";

static PyObject *
PyvtkVector_IfLi2EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector_IfLi2EE_vtkVector(nullptr, args);
}

static void PyvtkVector_IfLi2EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector<float, 2> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector_IfLi2EE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector_IfLi2EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector_IfLi2EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IfLi2EE_Delete, // tp_dealloc
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
  PyvtkVector_IfLi2EE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector_IfLi2EE_Doc, // tp_doc
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
  PyvtkVector_IfLi2EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector_IfLi2EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector<float, 2>(*static_cast<const vtkVector<float, 2>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector_IfLi2EE_TypeNew
extern "C" { PyObject *PyvtkVector_IfLi2EE_TypeNew(); }
#define DECLARED_PyvtkVector_IfLi2EE_TypeNew
#endif

PyObject *PyvtkVector_IfLi2EE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector_IfLi2EE_Type,
    PyvtkVector_IfLi2EE_Methods,
    PyvtkVector_IfLi2EE_vtkVector_Methods,
    &PyvtkVector_IfLi2EE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindSpecialTypeObject("vtkTuple_IfLi2EE");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector_IiLi2EE_SquaredNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquaredNorm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<int, 2> *op = static_cast<vtkVector<int, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->SquaredNorm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IiLi2EE_Norm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Norm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<int, 2> *op = static_cast<vtkVector<int, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Norm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IiLi2EE_Normalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<int, 2> *op = static_cast<vtkVector<int, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Normalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IiLi2EE_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<int, 2> *op = static_cast<vtkVector<int, 2> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<int, 2> tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IiLi2EE");
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IiLi2EE_Dot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dot");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<int, 2> *op = static_cast<vtkVector<int, 2> *>(vp);

  vtkVector<int, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IiLi2EE"))
  {
    int tempr = op->Dot(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IiLi2EE_Methods[] = {
  {"SquaredNorm", PyvtkVector_IiLi2EE_SquaredNorm, METH_VARARGS,
   "SquaredNorm(self) -> int\nC++: int SquaredNorm()\n\nGet the squared norm of the vector.\n"},
  {"Norm", PyvtkVector_IiLi2EE_Norm, METH_VARARGS,
   "Norm(self) -> float\nC++: double Norm()\n\nGet the norm of the vector, i.e. its length.\n"},
  {"Normalize", PyvtkVector_IiLi2EE_Normalize, METH_VARARGS,
   "Normalize(self) -> float\nC++: double Normalize()\n\nNormalize the vector in place.\n\\return The length of the vector.\n"},
  {"Normalized", PyvtkVector_IiLi2EE_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector_IiLi2EE\nC++: vtkVector<int, 2> Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {"Dot", PyvtkVector_IiLi2EE_Dot, METH_VARARGS,
   "Dot(self, other:vtkVector_IiLi2EE) -> int\nC++: int Dot(const vtkVector<int, 2> &other)\n\nThe dot product of this and the supplied vector.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector_IiLi2EE_vtkVector_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector<int, 2> *op = new vtkVector<int, 2>();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkVector_IiLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IiLi2EE_vtkVector_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector<int, 2> *op = new vtkVector<int, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IiLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IiLi2EE_vtkVector_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector<int, 2> *op = new vtkVector<int, 2>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IiLi2EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IiLi2EE_vtkVector_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<int, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IiLi2EE"))
  {
    vtkVector<int, 2> *op = new vtkVector<int, 2>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IiLi2EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IiLi2EE_vtkVector_Methods[] = {
  {"vtkVector", PyvtkVector_IiLi2EE_vtkVector_s2, METH_VARARGS,
   "-@i"},
  {"vtkVector", PyvtkVector_IiLi2EE_vtkVector_s3, METH_VARARGS,
   "-@P *i"},
  {"vtkVector", PyvtkVector_IiLi2EE_vtkVector_s4, METH_VARARGS,
   "@W vtkVector_IiLi2EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector_IiLi2EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IiLi2EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector_IiLi2EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return nullptr;
}


static const char *PyvtkVector_IiLi2EE_Doc =

  "vtkVector() -> vtkVector\nC++: vtkVector()\nvtkVector(scalar:int) -> vtkVector\nC++: explicit vtkVector(const int &scalar)\nvtkVector(init:(int, int)) -> vtkVector\nC++: explicit vtkVector(const int *init)\nvtkVector(__a:vtkVector_IiLi2EE) -> vtkVector\nC++: vtkVector(const &vtkVector<int, 2>)\n""\n"
  "vtkVector<int, 2> - templated base type for storage of vectors.\n\n"
  "Superclass: vtkTuple[int32,2]\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "fixed size vectors, which can be used to represent two and three\n"
  "dimensional points. The memory layout is a contiguous array of the\n"
  "specified type, such that a float[2] can be cast to a vtkVector2f and\n"
  "manipulated. Also a float[6] could be cast and used as a\n"
  "vtkVector2f[3].\n\n";

static PyObject *
PyvtkVector_IiLi2EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector_IiLi2EE_vtkVector(nullptr, args);
}

static void PyvtkVector_IiLi2EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector<int, 2> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector_IiLi2EE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector_IiLi2EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector_IiLi2EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IiLi2EE_Delete, // tp_dealloc
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
  PyvtkVector_IiLi2EE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector_IiLi2EE_Doc, // tp_doc
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
  PyvtkVector_IiLi2EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector_IiLi2EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector<int, 2>(*static_cast<const vtkVector<int, 2>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector_IiLi2EE_TypeNew
extern "C" { PyObject *PyvtkVector_IiLi2EE_TypeNew(); }
#define DECLARED_PyvtkVector_IiLi2EE_TypeNew
#endif

PyObject *PyvtkVector_IiLi2EE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector_IiLi2EE_Type,
    PyvtkVector_IiLi2EE_Methods,
    PyvtkVector_IiLi2EE_vtkVector_Methods,
    &PyvtkVector_IiLi2EE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindSpecialTypeObject("vtkTuple_IiLi2EE");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector_IdLi3EE_SquaredNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquaredNorm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<double, 3> *op = static_cast<vtkVector<double, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->SquaredNorm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IdLi3EE_Norm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Norm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<double, 3> *op = static_cast<vtkVector<double, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Norm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IdLi3EE_Normalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<double, 3> *op = static_cast<vtkVector<double, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Normalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IdLi3EE_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<double, 3> *op = static_cast<vtkVector<double, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<double, 3> tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IdLi3EE");
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IdLi3EE_Dot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dot");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<double, 3> *op = static_cast<vtkVector<double, 3> *>(vp);

  vtkVector<double, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IdLi3EE"))
  {
    double tempr = op->Dot(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IdLi3EE_Methods[] = {
  {"SquaredNorm", PyvtkVector_IdLi3EE_SquaredNorm, METH_VARARGS,
   "SquaredNorm(self) -> float\nC++: double SquaredNorm()\n\nGet the squared norm of the vector.\n"},
  {"Norm", PyvtkVector_IdLi3EE_Norm, METH_VARARGS,
   "Norm(self) -> float\nC++: double Norm()\n\nGet the norm of the vector, i.e. its length.\n"},
  {"Normalize", PyvtkVector_IdLi3EE_Normalize, METH_VARARGS,
   "Normalize(self) -> float\nC++: double Normalize()\n\nNormalize the vector in place.\n\\return The length of the vector.\n"},
  {"Normalized", PyvtkVector_IdLi3EE_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector_IdLi3EE\nC++: vtkVector<double, 3> Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {"Dot", PyvtkVector_IdLi3EE_Dot, METH_VARARGS,
   "Dot(self, other:vtkVector_IdLi3EE) -> float\nC++: double Dot(const vtkVector<double, 3> &other)\n\nThe dot product of this and the supplied vector.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector_IdLi3EE_vtkVector_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector<double, 3> *op = new vtkVector<double, 3>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkVector_IdLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IdLi3EE_vtkVector_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector<double, 3> *op = new vtkVector<double, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IdLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IdLi3EE_vtkVector_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector<double, 3> *op = new vtkVector<double, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IdLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IdLi3EE_vtkVector_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<double, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IdLi3EE"))
  {
    vtkVector<double, 3> *op = new vtkVector<double, 3>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IdLi3EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IdLi3EE_vtkVector_Methods[] = {
  {"vtkVector", PyvtkVector_IdLi3EE_vtkVector_s2, METH_VARARGS,
   "-@d"},
  {"vtkVector", PyvtkVector_IdLi3EE_vtkVector_s3, METH_VARARGS,
   "-@P *d"},
  {"vtkVector", PyvtkVector_IdLi3EE_vtkVector_s4, METH_VARARGS,
   "@W vtkVector_IdLi3EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector_IdLi3EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IdLi3EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector_IdLi3EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return nullptr;
}


static const char *PyvtkVector_IdLi3EE_Doc =

  "vtkVector() -> vtkVector\nC++: vtkVector()\nvtkVector(scalar:float) -> vtkVector\nC++: explicit vtkVector(const double &scalar)\nvtkVector(init:(float, float, float)) -> vtkVector\nC++: explicit vtkVector(const double *init)\nvtkVector(__a:vtkVector_IdLi3EE) -> vtkVector\nC++: vtkVector(const &vtkVector<double, 3>)\n""\n"
  "vtkVector<double, 3> - templated base type for storage of vectors.\n\n"
  "Superclass: vtkTuple[float64,3]\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "fixed size vectors, which can be used to represent two and three\n"
  "dimensional points. The memory layout is a contiguous array of the\n"
  "specified type, such that a float[2] can be cast to a vtkVector2f and\n"
  "manipulated. Also a float[6] could be cast and used as a\n"
  "vtkVector2f[3].\n\n";

static PyObject *
PyvtkVector_IdLi3EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector_IdLi3EE_vtkVector(nullptr, args);
}

static void PyvtkVector_IdLi3EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector<double, 3> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector_IdLi3EE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector_IdLi3EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector_IdLi3EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IdLi3EE_Delete, // tp_dealloc
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
  PyvtkVector_IdLi3EE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector_IdLi3EE_Doc, // tp_doc
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
  PyvtkVector_IdLi3EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector_IdLi3EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector<double, 3>(*static_cast<const vtkVector<double, 3>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector_IdLi3EE_TypeNew
extern "C" { PyObject *PyvtkVector_IdLi3EE_TypeNew(); }
#define DECLARED_PyvtkVector_IdLi3EE_TypeNew
#endif

PyObject *PyvtkVector_IdLi3EE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector_IdLi3EE_Type,
    PyvtkVector_IdLi3EE_Methods,
    PyvtkVector_IdLi3EE_vtkVector_Methods,
    &PyvtkVector_IdLi3EE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindSpecialTypeObject("vtkTuple_IdLi3EE");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector_IfLi3EE_SquaredNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquaredNorm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<float, 3> *op = static_cast<vtkVector<float, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = op->SquaredNorm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IfLi3EE_Norm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Norm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<float, 3> *op = static_cast<vtkVector<float, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Norm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IfLi3EE_Normalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<float, 3> *op = static_cast<vtkVector<float, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Normalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IfLi3EE_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<float, 3> *op = static_cast<vtkVector<float, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<float, 3> tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IfLi3EE");
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IfLi3EE_Dot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dot");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<float, 3> *op = static_cast<vtkVector<float, 3> *>(vp);

  vtkVector<float, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IfLi3EE"))
  {
    float tempr = op->Dot(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IfLi3EE_Methods[] = {
  {"SquaredNorm", PyvtkVector_IfLi3EE_SquaredNorm, METH_VARARGS,
   "SquaredNorm(self) -> float\nC++: float SquaredNorm()\n\nGet the squared norm of the vector.\n"},
  {"Norm", PyvtkVector_IfLi3EE_Norm, METH_VARARGS,
   "Norm(self) -> float\nC++: double Norm()\n\nGet the norm of the vector, i.e. its length.\n"},
  {"Normalize", PyvtkVector_IfLi3EE_Normalize, METH_VARARGS,
   "Normalize(self) -> float\nC++: double Normalize()\n\nNormalize the vector in place.\n\\return The length of the vector.\n"},
  {"Normalized", PyvtkVector_IfLi3EE_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector_IfLi3EE\nC++: vtkVector<float, 3> Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {"Dot", PyvtkVector_IfLi3EE_Dot, METH_VARARGS,
   "Dot(self, other:vtkVector_IfLi3EE) -> float\nC++: float Dot(const vtkVector<float, 3> &other)\n\nThe dot product of this and the supplied vector.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector_IfLi3EE_vtkVector_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector<float, 3> *op = new vtkVector<float, 3>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkVector_IfLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IfLi3EE_vtkVector_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector<float, 3> *op = new vtkVector<float, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IfLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IfLi3EE_vtkVector_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  const size_t size0 = 3;
  float temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector<float, 3> *op = new vtkVector<float, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IfLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IfLi3EE_vtkVector_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<float, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IfLi3EE"))
  {
    vtkVector<float, 3> *op = new vtkVector<float, 3>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IfLi3EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IfLi3EE_vtkVector_Methods[] = {
  {"vtkVector", PyvtkVector_IfLi3EE_vtkVector_s2, METH_VARARGS,
   "-@f"},
  {"vtkVector", PyvtkVector_IfLi3EE_vtkVector_s3, METH_VARARGS,
   "-@P *f"},
  {"vtkVector", PyvtkVector_IfLi3EE_vtkVector_s4, METH_VARARGS,
   "@W vtkVector_IfLi3EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector_IfLi3EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IfLi3EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector_IfLi3EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return nullptr;
}


static const char *PyvtkVector_IfLi3EE_Doc =

  "vtkVector() -> vtkVector\nC++: vtkVector()\nvtkVector(scalar:float) -> vtkVector\nC++: explicit vtkVector(const float &scalar)\nvtkVector(init:(float, float, float)) -> vtkVector\nC++: explicit vtkVector(const float *init)\nvtkVector(__a:vtkVector_IfLi3EE) -> vtkVector\nC++: vtkVector(const &vtkVector<float, 3>)\n""\n"
  "vtkVector<float, 3> - templated base type for storage of vectors.\n\n"
  "Superclass: vtkTuple[float32,3]\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "fixed size vectors, which can be used to represent two and three\n"
  "dimensional points. The memory layout is a contiguous array of the\n"
  "specified type, such that a float[2] can be cast to a vtkVector2f and\n"
  "manipulated. Also a float[6] could be cast and used as a\n"
  "vtkVector2f[3].\n\n";

static PyObject *
PyvtkVector_IfLi3EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector_IfLi3EE_vtkVector(nullptr, args);
}

static void PyvtkVector_IfLi3EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector<float, 3> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector_IfLi3EE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector_IfLi3EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector_IfLi3EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IfLi3EE_Delete, // tp_dealloc
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
  PyvtkVector_IfLi3EE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector_IfLi3EE_Doc, // tp_doc
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
  PyvtkVector_IfLi3EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector_IfLi3EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector<float, 3>(*static_cast<const vtkVector<float, 3>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector_IfLi3EE_TypeNew
extern "C" { PyObject *PyvtkVector_IfLi3EE_TypeNew(); }
#define DECLARED_PyvtkVector_IfLi3EE_TypeNew
#endif

PyObject *PyvtkVector_IfLi3EE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector_IfLi3EE_Type,
    PyvtkVector_IfLi3EE_Methods,
    PyvtkVector_IfLi3EE_vtkVector_Methods,
    &PyvtkVector_IfLi3EE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindSpecialTypeObject("vtkTuple_IfLi3EE");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector_IiLi3EE_SquaredNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquaredNorm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<int, 3> *op = static_cast<vtkVector<int, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = op->SquaredNorm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IiLi3EE_Norm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Norm");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<int, 3> *op = static_cast<vtkVector<int, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Norm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IiLi3EE_Normalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<int, 3> *op = static_cast<vtkVector<int, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->Normalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IiLi3EE_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<int, 3> *op = static_cast<vtkVector<int, 3> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector<int, 3> tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IiLi3EE");
    }
  }

  return result;
}


static PyObject *
PyvtkVector_IiLi3EE_Dot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dot");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector<int, 3> *op = static_cast<vtkVector<int, 3> *>(vp);

  vtkVector<int, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IiLi3EE"))
  {
    int tempr = op->Dot(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IiLi3EE_Methods[] = {
  {"SquaredNorm", PyvtkVector_IiLi3EE_SquaredNorm, METH_VARARGS,
   "SquaredNorm(self) -> int\nC++: int SquaredNorm()\n\nGet the squared norm of the vector.\n"},
  {"Norm", PyvtkVector_IiLi3EE_Norm, METH_VARARGS,
   "Norm(self) -> float\nC++: double Norm()\n\nGet the norm of the vector, i.e. its length.\n"},
  {"Normalize", PyvtkVector_IiLi3EE_Normalize, METH_VARARGS,
   "Normalize(self) -> float\nC++: double Normalize()\n\nNormalize the vector in place.\n\\return The length of the vector.\n"},
  {"Normalized", PyvtkVector_IiLi3EE_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector_IiLi3EE\nC++: vtkVector<int, 3> Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {"Dot", PyvtkVector_IiLi3EE_Dot, METH_VARARGS,
   "Dot(self, other:vtkVector_IiLi3EE) -> int\nC++: int Dot(const vtkVector<int, 3> &other)\n\nThe dot product of this and the supplied vector.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector_IiLi3EE_vtkVector_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector<int, 3> *op = new vtkVector<int, 3>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkVector_IiLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IiLi3EE_vtkVector_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector<int, 3> *op = new vtkVector<int, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IiLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IiLi3EE_vtkVector_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector<int, 3> *op = new vtkVector<int, 3>(temp0);

    result = PyVTKSpecialObject_New("vtkVector_IiLi3EE", op);
  }

  return result;
}

static PyObject *
PyvtkVector_IiLi3EE_vtkVector_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector");

  vtkVector<int, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IiLi3EE"))
  {
    vtkVector<int, 3> *op = new vtkVector<int, 3>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector_IiLi3EE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector_IiLi3EE_vtkVector_Methods[] = {
  {"vtkVector", PyvtkVector_IiLi3EE_vtkVector_s2, METH_VARARGS,
   "-@i"},
  {"vtkVector", PyvtkVector_IiLi3EE_vtkVector_s3, METH_VARARGS,
   "-@P *i"},
  {"vtkVector", PyvtkVector_IiLi3EE_vtkVector_s4, METH_VARARGS,
   "@W vtkVector_IiLi3EE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector_IiLi3EE_vtkVector(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector_IiLi3EE_vtkVector_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector_IiLi3EE_vtkVector_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector");
  return nullptr;
}


static const char *PyvtkVector_IiLi3EE_Doc =

  "vtkVector() -> vtkVector\nC++: vtkVector()\nvtkVector(scalar:int) -> vtkVector\nC++: explicit vtkVector(const int &scalar)\nvtkVector(init:(int, int, int)) -> vtkVector\nC++: explicit vtkVector(const int *init)\nvtkVector(__a:vtkVector_IiLi3EE) -> vtkVector\nC++: vtkVector(const &vtkVector<int, 3>)\n""\n"
  "vtkVector<int, 3> - templated base type for storage of vectors.\n\n"
  "Superclass: vtkTuple[int32,3]\n\n"
  "This class is a templated data type for storing and manipulating\n"
  "fixed size vectors, which can be used to represent two and three\n"
  "dimensional points. The memory layout is a contiguous array of the\n"
  "specified type, such that a float[2] can be cast to a vtkVector2f and\n"
  "manipulated. Also a float[6] could be cast and used as a\n"
  "vtkVector2f[3].\n\n";

static PyObject *
PyvtkVector_IiLi3EE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector_IiLi3EE_vtkVector(nullptr, args);
}

static void PyvtkVector_IiLi3EE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector<int, 3> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector_IiLi3EE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector_IiLi3EE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector_IiLi3EE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector_IiLi3EE_Delete, // tp_dealloc
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
  PyvtkVector_IiLi3EE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector_IiLi3EE_Doc, // tp_doc
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
  PyvtkVector_IiLi3EE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector_IiLi3EE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector<int, 3>(*static_cast<const vtkVector<int, 3>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector_IiLi3EE_TypeNew
extern "C" { PyObject *PyvtkVector_IiLi3EE_TypeNew(); }
#define DECLARED_PyvtkVector_IiLi3EE_TypeNew
#endif

PyObject *PyvtkVector_IiLi3EE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector_IiLi3EE_Type,
    PyvtkVector_IiLi3EE_Methods,
    PyvtkVector_IiLi3EE_vtkVector_Methods,
    &PyvtkVector_IiLi3EE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindSpecialTypeObject("vtkTuple_IiLi3EE");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static const char *PyvtkVector_Doc =
  "vtkVector4 - templated base type for storage of 4D vectors.\n\n"
  "Superclass: vtkTuple[T,Size]\n\n"

  "\nProvided Types:\n\n"
  "  vtkVector[float64,4] => vtkVector<double, 4>\n"

  "  vtkVector[float32,4] => vtkVector<float, 4>\n"

  "  vtkVector[int32,4] => vtkVector<int, 4>\n"

  "  vtkVector[float64,2] => vtkVector<double, 2>\n"

  "  vtkVector[float32,2] => vtkVector<float, 2>\n"

  "  vtkVector[int32,2] => vtkVector<int, 2>\n"

  "  vtkVector[float64,3] => vtkVector<double, 3>\n"

  "  vtkVector[float32,3] => vtkVector<float, 3>\n"

  "  vtkVector[int32,3] => vtkVector<int, 3>\n"
;

PyObject *PyvtkVector_TemplateNew()
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkCommonDataModelPython.vtkVector",
                                     PyvtkVector_Doc);

  o = PyvtkVector_IdLi4EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector_IfLi4EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector_IiLi4EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector_IdLi2EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector_IfLi2EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector_IiLi2EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector_IdLi3EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector_IfLi3EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector_IiLi3EE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  return temp;
}


static PyObject *
PyvtkVector2_IdE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2<double> *op = static_cast<vtkVector2<double> *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->Set(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector2_IdE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2<double> *op = static_cast<vtkVector2<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector2_IdE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2<double> *op = static_cast<vtkVector2<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector2_IdE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2<double> *op = static_cast<vtkVector2<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector2_IdE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2<double> *op = static_cast<vtkVector2<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVector2_IdE_Methods[] = {
  {"Set", PyvtkVector2_IdE_Set, METH_VARARGS,
   "Set(self, x:float, y:float) -> None\nC++: void Set(const double &x, const double &y)\n\nSet the x and y components of the vector.\n"},
  {"SetX", PyvtkVector2_IdE_SetX, METH_VARARGS,
   "SetX(self, x:float) -> None\nC++: void SetX(const double &x)\n\nSet the x component of the vector, i.e. element 0.\n"},
  {"GetX", PyvtkVector2_IdE_GetX, METH_VARARGS,
   "GetX(self) -> float\nC++: const double &GetX()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {"SetY", PyvtkVector2_IdE_SetY, METH_VARARGS,
   "SetY(self, y:float) -> None\nC++: void SetY(const double &y)\n\nSet the y component of the vector, i.e. element 1.\n"},
  {"GetY", PyvtkVector2_IdE_GetY, METH_VARARGS,
   "GetY(self) -> float\nC++: const double &GetY()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector2_IdE_vtkVector2_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector2<double> *op = new vtkVector2<double>();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkVector2_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkVector2_IdE_vtkVector2_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2<double> *op = new vtkVector2<double>(temp0);

    result = PyVTKSpecialObject_New("vtkVector2_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkVector2_IdE_vtkVector2_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector2<double> *op = new vtkVector2<double>(temp0);

    result = PyVTKSpecialObject_New("vtkVector2_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkVector2_IdE_vtkVector2_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVector2<double> *op = new vtkVector2<double>(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkVector2_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkVector2_IdE_vtkVector2_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  vtkVector2<double> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2_IdE"))
  {
    vtkVector2<double> *op = new vtkVector2<double>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2_IdE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector2_IdE_vtkVector2_Methods[] = {
  {"vtkVector2", PyvtkVector2_IdE_vtkVector2_s2, METH_VARARGS,
   "-@d"},
  {"vtkVector2", PyvtkVector2_IdE_vtkVector2_s3, METH_VARARGS,
   "-@P *d"},
  {"vtkVector2", PyvtkVector2_IdE_vtkVector2_s5, METH_VARARGS,
   "@W vtkVector2_IdE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector2_IdE_vtkVector2(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector2_IdE_vtkVector2_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector2_IdE_vtkVector2_s1(self, args);
    case 2:
      return PyvtkVector2_IdE_vtkVector2_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector2");
  return nullptr;
}


static const char *PyvtkVector2_IdE_Doc =

  "vtkVector2() -> vtkVector2\nC++: vtkVector2()\nvtkVector2(scalar:float) -> vtkVector2\nC++: explicit vtkVector2(const double &scalar)\nvtkVector2(init:(float, float)) -> vtkVector2\nC++: explicit vtkVector2(const double *init)\nvtkVector2(x:float, y:float) -> vtkVector2\nC++: vtkVector2(const double &x, const double &y)\nvtkVector2(__a:vtkVector2_IdE) -> vtkVector2\nC++: vtkVector2(const &vtkVector2<double>)\n""\n"
  "vtkVector2<double> - no description provided.\n\n"
  "Superclass: vtkVector[float64,2]\n\n"
;

static PyObject *
PyvtkVector2_IdE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector2_IdE_vtkVector2(nullptr, args);
}

static void PyvtkVector2_IdE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector2<double> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static int PyvtkVector2_IdE_CheckExact(PyObject *ob);

static PyObject *PyvtkVector2_IdE_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkVector2<double> *so1 = nullptr;
  const vtkVector2<double> *so2 = nullptr;
  int result = -1;

  if (PyvtkVector2_IdE_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkVector2<double> *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkVector2<double> *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkVector2_IdE", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkVector2_IdE_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkVector2<double> *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkVector2<double> *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkVector2_IdE", &n2));
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
      break;
    case Py_EQ:
      break;
    case Py_NE:
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

static Py_hash_t PyvtkVector2_IdE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector2_IdE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector2_IdE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector2_IdE_Delete, // tp_dealloc
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
  PyvtkVector2_IdE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector2_IdE_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkVector2_IdE_RichCompare, // tp_richcompare
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
  PyvtkVector2_IdE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkVector2_IdE_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkVector2_IdE_Type);
}

static void *PyvtkVector2_IdE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector2<double>(*static_cast<const vtkVector2<double>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector2_IdE_TypeNew
extern "C" { PyObject *PyvtkVector2_IdE_TypeNew(); }
#define DECLARED_PyvtkVector2_IdE_TypeNew
#endif

#ifndef DECLARED_PyvtkVector_IdLi2EE_TypeNew
extern "C" { PyObject *PyvtkVector_IdLi2EE_TypeNew(); }
#define DECLARED_PyvtkVector_IdLi2EE_TypeNew
#endif
PyObject *PyvtkVector2_IdE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector2_IdE_Type,
    PyvtkVector2_IdE_Methods,
    PyvtkVector2_IdE_vtkVector2_Methods,
    &PyvtkVector2_IdE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector_IdLi2EE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector2_IfE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2<float> *op = static_cast<vtkVector2<float> *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->Set(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector2_IfE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2<float> *op = static_cast<vtkVector2<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector2_IfE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2<float> *op = static_cast<vtkVector2<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector2_IfE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2<float> *op = static_cast<vtkVector2<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector2_IfE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2<float> *op = static_cast<vtkVector2<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVector2_IfE_Methods[] = {
  {"Set", PyvtkVector2_IfE_Set, METH_VARARGS,
   "Set(self, x:float, y:float) -> None\nC++: void Set(const float &x, const float &y)\n\nSet the x and y components of the vector.\n"},
  {"SetX", PyvtkVector2_IfE_SetX, METH_VARARGS,
   "SetX(self, x:float) -> None\nC++: void SetX(const float &x)\n\nSet the x component of the vector, i.e. element 0.\n"},
  {"GetX", PyvtkVector2_IfE_GetX, METH_VARARGS,
   "GetX(self) -> float\nC++: const float &GetX()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {"SetY", PyvtkVector2_IfE_SetY, METH_VARARGS,
   "SetY(self, y:float) -> None\nC++: void SetY(const float &y)\n\nSet the y component of the vector, i.e. element 1.\n"},
  {"GetY", PyvtkVector2_IfE_GetY, METH_VARARGS,
   "GetY(self) -> float\nC++: const float &GetY()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector2_IfE_vtkVector2_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector2<float> *op = new vtkVector2<float>();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkVector2_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkVector2_IfE_vtkVector2_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2<float> *op = new vtkVector2<float>(temp0);

    result = PyVTKSpecialObject_New("vtkVector2_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkVector2_IfE_vtkVector2_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  const size_t size0 = 2;
  float temp0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector2<float> *op = new vtkVector2<float>(temp0);

    result = PyVTKSpecialObject_New("vtkVector2_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkVector2_IfE_vtkVector2_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVector2<float> *op = new vtkVector2<float>(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkVector2_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkVector2_IfE_vtkVector2_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  vtkVector2<float> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2_IfE"))
  {
    vtkVector2<float> *op = new vtkVector2<float>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2_IfE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector2_IfE_vtkVector2_Methods[] = {
  {"vtkVector2", PyvtkVector2_IfE_vtkVector2_s2, METH_VARARGS,
   "-@f"},
  {"vtkVector2", PyvtkVector2_IfE_vtkVector2_s3, METH_VARARGS,
   "-@P *f"},
  {"vtkVector2", PyvtkVector2_IfE_vtkVector2_s5, METH_VARARGS,
   "@W vtkVector2_IfE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector2_IfE_vtkVector2(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector2_IfE_vtkVector2_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector2_IfE_vtkVector2_s1(self, args);
    case 2:
      return PyvtkVector2_IfE_vtkVector2_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector2");
  return nullptr;
}


static const char *PyvtkVector2_IfE_Doc =

  "vtkVector2() -> vtkVector2\nC++: vtkVector2()\nvtkVector2(scalar:float) -> vtkVector2\nC++: explicit vtkVector2(const float &scalar)\nvtkVector2(init:(float, float)) -> vtkVector2\nC++: explicit vtkVector2(const float *init)\nvtkVector2(x:float, y:float) -> vtkVector2\nC++: vtkVector2(const float &x, const float &y)\nvtkVector2(__a:vtkVector2_IfE) -> vtkVector2\nC++: vtkVector2(const &vtkVector2<float>)\n""\n"
  "vtkVector2<float> - no description provided.\n\n"
  "Superclass: vtkVector[float32,2]\n\n"
;

static PyObject *
PyvtkVector2_IfE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector2_IfE_vtkVector2(nullptr, args);
}

static void PyvtkVector2_IfE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector2<float> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static int PyvtkVector2_IfE_CheckExact(PyObject *ob);

static PyObject *PyvtkVector2_IfE_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkVector2<float> *so1 = nullptr;
  const vtkVector2<float> *so2 = nullptr;
  int result = -1;

  if (PyvtkVector2_IfE_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkVector2<float> *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkVector2<float> *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkVector2_IfE", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkVector2_IfE_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkVector2<float> *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkVector2<float> *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkVector2_IfE", &n2));
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
      break;
    case Py_EQ:
      break;
    case Py_NE:
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

static Py_hash_t PyvtkVector2_IfE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector2_IfE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector2_IfE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector2_IfE_Delete, // tp_dealloc
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
  PyvtkVector2_IfE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector2_IfE_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkVector2_IfE_RichCompare, // tp_richcompare
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
  PyvtkVector2_IfE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkVector2_IfE_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkVector2_IfE_Type);
}

static void *PyvtkVector2_IfE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector2<float>(*static_cast<const vtkVector2<float>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector2_IfE_TypeNew
extern "C" { PyObject *PyvtkVector2_IfE_TypeNew(); }
#define DECLARED_PyvtkVector2_IfE_TypeNew
#endif

#ifndef DECLARED_PyvtkVector_IfLi2EE_TypeNew
extern "C" { PyObject *PyvtkVector_IfLi2EE_TypeNew(); }
#define DECLARED_PyvtkVector_IfLi2EE_TypeNew
#endif
PyObject *PyvtkVector2_IfE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector2_IfE_Type,
    PyvtkVector2_IfE_Methods,
    PyvtkVector2_IfE_vtkVector2_Methods,
    &PyvtkVector2_IfE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector_IfLi2EE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector2_IiE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2<int> *op = static_cast<vtkVector2<int> *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->Set(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector2_IiE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2<int> *op = static_cast<vtkVector2<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector2_IiE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2<int> *op = static_cast<vtkVector2<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector2_IiE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2<int> *op = static_cast<vtkVector2<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector2_IiE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2<int> *op = static_cast<vtkVector2<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVector2_IiE_Methods[] = {
  {"Set", PyvtkVector2_IiE_Set, METH_VARARGS,
   "Set(self, x:int, y:int) -> None\nC++: void Set(const int &x, const int &y)\n\nSet the x and y components of the vector.\n"},
  {"SetX", PyvtkVector2_IiE_SetX, METH_VARARGS,
   "SetX(self, x:int) -> None\nC++: void SetX(const int &x)\n\nSet the x component of the vector, i.e. element 0.\n"},
  {"GetX", PyvtkVector2_IiE_GetX, METH_VARARGS,
   "GetX(self) -> int\nC++: const int &GetX()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {"SetY", PyvtkVector2_IiE_SetY, METH_VARARGS,
   "SetY(self, y:int) -> None\nC++: void SetY(const int &y)\n\nSet the y component of the vector, i.e. element 1.\n"},
  {"GetY", PyvtkVector2_IiE_GetY, METH_VARARGS,
   "GetY(self) -> int\nC++: const int &GetY()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector2_IiE_vtkVector2_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector2<int> *op = new vtkVector2<int>();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkVector2_IiE", op);
  }

  return result;
}

static PyObject *
PyvtkVector2_IiE_vtkVector2_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2<int> *op = new vtkVector2<int>(temp0);

    result = PyVTKSpecialObject_New("vtkVector2_IiE", op);
  }

  return result;
}

static PyObject *
PyvtkVector2_IiE_vtkVector2_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector2<int> *op = new vtkVector2<int>(temp0);

    result = PyVTKSpecialObject_New("vtkVector2_IiE", op);
  }

  return result;
}

static PyObject *
PyvtkVector2_IiE_vtkVector2_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVector2<int> *op = new vtkVector2<int>(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkVector2_IiE", op);
  }

  return result;
}

static PyObject *
PyvtkVector2_IiE_vtkVector2_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2");

  vtkVector2<int> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2_IiE"))
  {
    vtkVector2<int> *op = new vtkVector2<int>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2_IiE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector2_IiE_vtkVector2_Methods[] = {
  {"vtkVector2", PyvtkVector2_IiE_vtkVector2_s2, METH_VARARGS,
   "-@i"},
  {"vtkVector2", PyvtkVector2_IiE_vtkVector2_s3, METH_VARARGS,
   "-@P *i"},
  {"vtkVector2", PyvtkVector2_IiE_vtkVector2_s5, METH_VARARGS,
   "@W vtkVector2_IiE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector2_IiE_vtkVector2(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector2_IiE_vtkVector2_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector2_IiE_vtkVector2_s1(self, args);
    case 2:
      return PyvtkVector2_IiE_vtkVector2_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector2");
  return nullptr;
}


static const char *PyvtkVector2_IiE_Doc =

  "vtkVector2() -> vtkVector2\nC++: vtkVector2()\nvtkVector2(scalar:int) -> vtkVector2\nC++: explicit vtkVector2(const int &scalar)\nvtkVector2(init:(int, int)) -> vtkVector2\nC++: explicit vtkVector2(const int *init)\nvtkVector2(x:int, y:int) -> vtkVector2\nC++: vtkVector2(const int &x, const int &y)\nvtkVector2(__a:vtkVector2_IiE) -> vtkVector2\nC++: vtkVector2(const &vtkVector2<int>)\n""\n"
  "vtkVector2<int> - no description provided.\n\n"
  "Superclass: vtkVector[int32,2]\n\n"
;

static PyObject *
PyvtkVector2_IiE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector2_IiE_vtkVector2(nullptr, args);
}

static void PyvtkVector2_IiE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector2<int> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static int PyvtkVector2_IiE_CheckExact(PyObject *ob);

static PyObject *PyvtkVector2_IiE_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkVector2<int> *so1 = nullptr;
  const vtkVector2<int> *so2 = nullptr;
  int result = -1;

  if (PyvtkVector2_IiE_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkVector2<int> *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkVector2<int> *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkVector2_IiE", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkVector2_IiE_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkVector2<int> *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkVector2<int> *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkVector2_IiE", &n2));
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
      break;
    case Py_EQ:
      break;
    case Py_NE:
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

static Py_hash_t PyvtkVector2_IiE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector2_IiE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector2_IiE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector2_IiE_Delete, // tp_dealloc
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
  PyvtkVector2_IiE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector2_IiE_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkVector2_IiE_RichCompare, // tp_richcompare
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
  PyvtkVector2_IiE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkVector2_IiE_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkVector2_IiE_Type);
}

static void *PyvtkVector2_IiE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector2<int>(*static_cast<const vtkVector2<int>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector2_IiE_TypeNew
extern "C" { PyObject *PyvtkVector2_IiE_TypeNew(); }
#define DECLARED_PyvtkVector2_IiE_TypeNew
#endif

#ifndef DECLARED_PyvtkVector_IiLi2EE_TypeNew
extern "C" { PyObject *PyvtkVector_IiLi2EE_TypeNew(); }
#define DECLARED_PyvtkVector_IiLi2EE_TypeNew
#endif
PyObject *PyvtkVector2_IiE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector2_IiE_Type,
    PyvtkVector2_IiE_Methods,
    PyvtkVector2_IiE_vtkVector2_Methods,
    &PyvtkVector2_IiE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector_IiLi2EE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static const char *PyvtkVector2_Doc =
  "vtkVector2 - no description provided.\n\n"
  "Superclass: vtkVector[T,2]\n\n"

  "\nProvided Types:\n\n"
  "  vtkVector2[float64] => vtkVector2<double>\n"

  "  vtkVector2[float32] => vtkVector2<float>\n"

  "  vtkVector2[int32] => vtkVector2<int>\n"
;

PyObject *PyvtkVector2_TemplateNew()
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkCommonDataModelPython.vtkVector2",
                                     PyvtkVector2_Doc);

  o = PyvtkVector2_IdE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector2_IfE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector2_IiE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  return temp;
}


static PyObject *
PyvtkVector3_IdE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->Set(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IdE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IdE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IdE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IdE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IdE_SetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZ");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetZ(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IdE_GetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZ");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetZ();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IdE_Cross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Cross");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<double> *op = static_cast<vtkVector3<double> *>(vp);

  vtkVector3<double> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3_IdE"))
  {
    vtkVector3<double> tempr = op->Cross(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3_IdE");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3_IdE_Methods[] = {
  {"Set", PyvtkVector3_IdE_Set, METH_VARARGS,
   "Set(self, x:float, y:float, z:float) -> None\nC++: void Set(const double &x, const double &y, const double &z)\n\nSet the x, y and z components of the vector.\n"},
  {"SetX", PyvtkVector3_IdE_SetX, METH_VARARGS,
   "SetX(self, x:float) -> None\nC++: void SetX(const double &x)\n\nSet the x component of the vector, i.e. element 0.\n"},
  {"GetX", PyvtkVector3_IdE_GetX, METH_VARARGS,
   "GetX(self) -> float\nC++: const double &GetX()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {"SetY", PyvtkVector3_IdE_SetY, METH_VARARGS,
   "SetY(self, y:float) -> None\nC++: void SetY(const double &y)\n\nSet the y component of the vector, i.e. element 1.\n"},
  {"GetY", PyvtkVector3_IdE_GetY, METH_VARARGS,
   "GetY(self) -> float\nC++: const double &GetY()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {"SetZ", PyvtkVector3_IdE_SetZ, METH_VARARGS,
   "SetZ(self, z:float) -> None\nC++: void SetZ(const double &z)\n\nSet the z component of the vector, i.e. element 2.\n"},
  {"GetZ", PyvtkVector3_IdE_GetZ, METH_VARARGS,
   "GetZ(self) -> float\nC++: const double &GetZ()\n\nGet the z component of the vector, i.e. element 2.\n"},
  {"Cross", PyvtkVector3_IdE_Cross, METH_VARARGS,
   "Cross(self, other:vtkVector3_IdE) -> vtkVector3_IdE\nC++: vtkVector3<double> Cross(const vtkVector3<double> &other)\n\nReturn the cross product of this X other.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector3_IdE_vtkVector3_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector3<double> *op = new vtkVector3<double>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkVector3_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkVector3_IdE_vtkVector3_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3<double> *op = new vtkVector3<double>(temp0);

    result = PyVTKSpecialObject_New("vtkVector3_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkVector3_IdE_vtkVector3_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector3<double> *op = new vtkVector3<double>(temp0);

    result = PyVTKSpecialObject_New("vtkVector3_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkVector3_IdE_vtkVector3_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVector3<double> *op = new vtkVector3<double>(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkVector3_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkVector3_IdE_vtkVector3_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  vtkVector3<double> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3_IdE"))
  {
    vtkVector3<double> *op = new vtkVector3<double>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3_IdE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3_IdE_vtkVector3_Methods[] = {
  {"vtkVector3", PyvtkVector3_IdE_vtkVector3_s2, METH_VARARGS,
   "-@d"},
  {"vtkVector3", PyvtkVector3_IdE_vtkVector3_s3, METH_VARARGS,
   "-@P *d"},
  {"vtkVector3", PyvtkVector3_IdE_vtkVector3_s5, METH_VARARGS,
   "@W vtkVector3_IdE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector3_IdE_vtkVector3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector3_IdE_vtkVector3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector3_IdE_vtkVector3_s1(self, args);
    case 3:
      return PyvtkVector3_IdE_vtkVector3_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector3");
  return nullptr;
}


static const char *PyvtkVector3_IdE_Doc =

  "vtkVector3() -> vtkVector3\nC++: vtkVector3()\nvtkVector3(scalar:float) -> vtkVector3\nC++: explicit vtkVector3(const double &scalar)\nvtkVector3(init:(float, float, float)) -> vtkVector3\nC++: explicit vtkVector3(const double *init)\nvtkVector3(x:float, y:float, z:float) -> vtkVector3\nC++: vtkVector3(const double &x, const double &y, const double &z)\nvtkVector3(__a:vtkVector3_IdE) -> vtkVector3\nC++: vtkVector3(const &vtkVector3<double>)\n""\n"
  "vtkVector3<double> - no description provided.\n\n"
  "Superclass: vtkVector[float64,3]\n\n"
;

static PyObject *
PyvtkVector3_IdE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector3_IdE_vtkVector3(nullptr, args);
}

static void PyvtkVector3_IdE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector3<double> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static int PyvtkVector3_IdE_CheckExact(PyObject *ob);

static PyObject *PyvtkVector3_IdE_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkVector3<double> *so1 = nullptr;
  const vtkVector3<double> *so2 = nullptr;
  int result = -1;

  if (PyvtkVector3_IdE_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkVector3<double> *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkVector3<double> *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkVector3_IdE", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkVector3_IdE_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkVector3<double> *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkVector3<double> *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkVector3_IdE", &n2));
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
      break;
    case Py_EQ:
      break;
    case Py_NE:
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

static Py_hash_t PyvtkVector3_IdE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector3_IdE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector3_IdE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector3_IdE_Delete, // tp_dealloc
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
  PyvtkVector3_IdE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector3_IdE_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkVector3_IdE_RichCompare, // tp_richcompare
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
  PyvtkVector3_IdE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkVector3_IdE_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkVector3_IdE_Type);
}

static void *PyvtkVector3_IdE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector3<double>(*static_cast<const vtkVector3<double>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector3_IdE_TypeNew
extern "C" { PyObject *PyvtkVector3_IdE_TypeNew(); }
#define DECLARED_PyvtkVector3_IdE_TypeNew
#endif

#ifndef DECLARED_PyvtkVector_IdLi3EE_TypeNew
extern "C" { PyObject *PyvtkVector_IdLi3EE_TypeNew(); }
#define DECLARED_PyvtkVector_IdLi3EE_TypeNew
#endif
PyObject *PyvtkVector3_IdE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector3_IdE_Type,
    PyvtkVector3_IdE_Methods,
    PyvtkVector3_IdE_vtkVector3_Methods,
    &PyvtkVector3_IdE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector_IdLi3EE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector3_IfE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->Set(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IfE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IfE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IfE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IfE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IfE_SetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZ");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetZ(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IfE_GetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZ");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetZ();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IfE_Cross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Cross");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<float> *op = static_cast<vtkVector3<float> *>(vp);

  vtkVector3<float> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3_IfE"))
  {
    vtkVector3<float> tempr = op->Cross(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3_IfE");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3_IfE_Methods[] = {
  {"Set", PyvtkVector3_IfE_Set, METH_VARARGS,
   "Set(self, x:float, y:float, z:float) -> None\nC++: void Set(const float &x, const float &y, const float &z)\n\nSet the x, y and z components of the vector.\n"},
  {"SetX", PyvtkVector3_IfE_SetX, METH_VARARGS,
   "SetX(self, x:float) -> None\nC++: void SetX(const float &x)\n\nSet the x component of the vector, i.e. element 0.\n"},
  {"GetX", PyvtkVector3_IfE_GetX, METH_VARARGS,
   "GetX(self) -> float\nC++: const float &GetX()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {"SetY", PyvtkVector3_IfE_SetY, METH_VARARGS,
   "SetY(self, y:float) -> None\nC++: void SetY(const float &y)\n\nSet the y component of the vector, i.e. element 1.\n"},
  {"GetY", PyvtkVector3_IfE_GetY, METH_VARARGS,
   "GetY(self) -> float\nC++: const float &GetY()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {"SetZ", PyvtkVector3_IfE_SetZ, METH_VARARGS,
   "SetZ(self, z:float) -> None\nC++: void SetZ(const float &z)\n\nSet the z component of the vector, i.e. element 2.\n"},
  {"GetZ", PyvtkVector3_IfE_GetZ, METH_VARARGS,
   "GetZ(self) -> float\nC++: const float &GetZ()\n\nGet the z component of the vector, i.e. element 2.\n"},
  {"Cross", PyvtkVector3_IfE_Cross, METH_VARARGS,
   "Cross(self, other:vtkVector3_IfE) -> vtkVector3_IfE\nC++: vtkVector3<float> Cross(const vtkVector3<float> &other)\n\nReturn the cross product of this X other.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector3_IfE_vtkVector3_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector3<float> *op = new vtkVector3<float>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkVector3_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkVector3_IfE_vtkVector3_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3<float> *op = new vtkVector3<float>(temp0);

    result = PyVTKSpecialObject_New("vtkVector3_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkVector3_IfE_vtkVector3_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  const size_t size0 = 3;
  float temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector3<float> *op = new vtkVector3<float>(temp0);

    result = PyVTKSpecialObject_New("vtkVector3_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkVector3_IfE_vtkVector3_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVector3<float> *op = new vtkVector3<float>(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkVector3_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkVector3_IfE_vtkVector3_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  vtkVector3<float> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3_IfE"))
  {
    vtkVector3<float> *op = new vtkVector3<float>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3_IfE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3_IfE_vtkVector3_Methods[] = {
  {"vtkVector3", PyvtkVector3_IfE_vtkVector3_s2, METH_VARARGS,
   "-@f"},
  {"vtkVector3", PyvtkVector3_IfE_vtkVector3_s3, METH_VARARGS,
   "-@P *f"},
  {"vtkVector3", PyvtkVector3_IfE_vtkVector3_s5, METH_VARARGS,
   "@W vtkVector3_IfE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector3_IfE_vtkVector3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector3_IfE_vtkVector3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector3_IfE_vtkVector3_s1(self, args);
    case 3:
      return PyvtkVector3_IfE_vtkVector3_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector3");
  return nullptr;
}


static const char *PyvtkVector3_IfE_Doc =

  "vtkVector3() -> vtkVector3\nC++: vtkVector3()\nvtkVector3(scalar:float) -> vtkVector3\nC++: explicit vtkVector3(const float &scalar)\nvtkVector3(init:(float, float, float)) -> vtkVector3\nC++: explicit vtkVector3(const float *init)\nvtkVector3(x:float, y:float, z:float) -> vtkVector3\nC++: vtkVector3(const float &x, const float &y, const float &z)\nvtkVector3(__a:vtkVector3_IfE) -> vtkVector3\nC++: vtkVector3(const &vtkVector3<float>)\n""\n"
  "vtkVector3<float> - no description provided.\n\n"
  "Superclass: vtkVector[float32,3]\n\n"
;

static PyObject *
PyvtkVector3_IfE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector3_IfE_vtkVector3(nullptr, args);
}

static void PyvtkVector3_IfE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector3<float> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static int PyvtkVector3_IfE_CheckExact(PyObject *ob);

static PyObject *PyvtkVector3_IfE_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkVector3<float> *so1 = nullptr;
  const vtkVector3<float> *so2 = nullptr;
  int result = -1;

  if (PyvtkVector3_IfE_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkVector3<float> *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkVector3<float> *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkVector3_IfE", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkVector3_IfE_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkVector3<float> *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkVector3<float> *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkVector3_IfE", &n2));
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
      break;
    case Py_EQ:
      break;
    case Py_NE:
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

static Py_hash_t PyvtkVector3_IfE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector3_IfE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector3_IfE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector3_IfE_Delete, // tp_dealloc
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
  PyvtkVector3_IfE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector3_IfE_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkVector3_IfE_RichCompare, // tp_richcompare
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
  PyvtkVector3_IfE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkVector3_IfE_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkVector3_IfE_Type);
}

static void *PyvtkVector3_IfE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector3<float>(*static_cast<const vtkVector3<float>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector3_IfE_TypeNew
extern "C" { PyObject *PyvtkVector3_IfE_TypeNew(); }
#define DECLARED_PyvtkVector3_IfE_TypeNew
#endif

#ifndef DECLARED_PyvtkVector_IfLi3EE_TypeNew
extern "C" { PyObject *PyvtkVector_IfLi3EE_TypeNew(); }
#define DECLARED_PyvtkVector_IfLi3EE_TypeNew
#endif
PyObject *PyvtkVector3_IfE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector3_IfE_Type,
    PyvtkVector3_IfE_Methods,
    PyvtkVector3_IfE_vtkVector3_Methods,
    &PyvtkVector3_IfE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector_IfLi3EE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector3_IiE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->Set(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IiE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IiE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IiE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IiE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IiE_SetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZ");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetZ(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IiE_GetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZ");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = &op->GetZ();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector3_IiE_Cross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Cross");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3<int> *op = static_cast<vtkVector3<int> *>(vp);

  vtkVector3<int> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3_IiE"))
  {
    vtkVector3<int> tempr = op->Cross(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3_IiE");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3_IiE_Methods[] = {
  {"Set", PyvtkVector3_IiE_Set, METH_VARARGS,
   "Set(self, x:int, y:int, z:int) -> None\nC++: void Set(const int &x, const int &y, const int &z)\n\nSet the x, y and z components of the vector.\n"},
  {"SetX", PyvtkVector3_IiE_SetX, METH_VARARGS,
   "SetX(self, x:int) -> None\nC++: void SetX(const int &x)\n\nSet the x component of the vector, i.e. element 0.\n"},
  {"GetX", PyvtkVector3_IiE_GetX, METH_VARARGS,
   "GetX(self) -> int\nC++: const int &GetX()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {"SetY", PyvtkVector3_IiE_SetY, METH_VARARGS,
   "SetY(self, y:int) -> None\nC++: void SetY(const int &y)\n\nSet the y component of the vector, i.e. element 1.\n"},
  {"GetY", PyvtkVector3_IiE_GetY, METH_VARARGS,
   "GetY(self) -> int\nC++: const int &GetY()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {"SetZ", PyvtkVector3_IiE_SetZ, METH_VARARGS,
   "SetZ(self, z:int) -> None\nC++: void SetZ(const int &z)\n\nSet the z component of the vector, i.e. element 2.\n"},
  {"GetZ", PyvtkVector3_IiE_GetZ, METH_VARARGS,
   "GetZ(self) -> int\nC++: const int &GetZ()\n\nGet the z component of the vector, i.e. element 2.\n"},
  {"Cross", PyvtkVector3_IiE_Cross, METH_VARARGS,
   "Cross(self, other:vtkVector3_IiE) -> vtkVector3_IiE\nC++: vtkVector3<int> Cross(const vtkVector3<int> &other)\n\nReturn the cross product of this X other.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector3_IiE_vtkVector3_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector3<int> *op = new vtkVector3<int>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkVector3_IiE", op);
  }

  return result;
}

static PyObject *
PyvtkVector3_IiE_vtkVector3_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3<int> *op = new vtkVector3<int>(temp0);

    result = PyVTKSpecialObject_New("vtkVector3_IiE", op);
  }

  return result;
}

static PyObject *
PyvtkVector3_IiE_vtkVector3_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector3<int> *op = new vtkVector3<int>(temp0);

    result = PyVTKSpecialObject_New("vtkVector3_IiE", op);
  }

  return result;
}

static PyObject *
PyvtkVector3_IiE_vtkVector3_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVector3<int> *op = new vtkVector3<int>(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkVector3_IiE", op);
  }

  return result;
}

static PyObject *
PyvtkVector3_IiE_vtkVector3_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3");

  vtkVector3<int> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3_IiE"))
  {
    vtkVector3<int> *op = new vtkVector3<int>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3_IiE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3_IiE_vtkVector3_Methods[] = {
  {"vtkVector3", PyvtkVector3_IiE_vtkVector3_s2, METH_VARARGS,
   "-@i"},
  {"vtkVector3", PyvtkVector3_IiE_vtkVector3_s3, METH_VARARGS,
   "-@P *i"},
  {"vtkVector3", PyvtkVector3_IiE_vtkVector3_s5, METH_VARARGS,
   "@W vtkVector3_IiE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector3_IiE_vtkVector3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector3_IiE_vtkVector3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector3_IiE_vtkVector3_s1(self, args);
    case 3:
      return PyvtkVector3_IiE_vtkVector3_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector3");
  return nullptr;
}


static const char *PyvtkVector3_IiE_Doc =

  "vtkVector3() -> vtkVector3\nC++: vtkVector3()\nvtkVector3(scalar:int) -> vtkVector3\nC++: explicit vtkVector3(const int &scalar)\nvtkVector3(init:(int, int, int)) -> vtkVector3\nC++: explicit vtkVector3(const int *init)\nvtkVector3(x:int, y:int, z:int) -> vtkVector3\nC++: vtkVector3(const int &x, const int &y, const int &z)\nvtkVector3(__a:vtkVector3_IiE) -> vtkVector3\nC++: vtkVector3(const &vtkVector3<int>)\n""\n"
  "vtkVector3<int> - no description provided.\n\n"
  "Superclass: vtkVector[int32,3]\n\n"
;

static PyObject *
PyvtkVector3_IiE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector3_IiE_vtkVector3(nullptr, args);
}

static void PyvtkVector3_IiE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector3<int> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static int PyvtkVector3_IiE_CheckExact(PyObject *ob);

static PyObject *PyvtkVector3_IiE_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkVector3<int> *so1 = nullptr;
  const vtkVector3<int> *so2 = nullptr;
  int result = -1;

  if (PyvtkVector3_IiE_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkVector3<int> *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkVector3<int> *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkVector3_IiE", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkVector3_IiE_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkVector3<int> *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkVector3<int> *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkVector3_IiE", &n2));
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
      break;
    case Py_EQ:
      break;
    case Py_NE:
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

static Py_hash_t PyvtkVector3_IiE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector3_IiE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector3_IiE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector3_IiE_Delete, // tp_dealloc
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
  PyvtkVector3_IiE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector3_IiE_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkVector3_IiE_RichCompare, // tp_richcompare
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
  PyvtkVector3_IiE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkVector3_IiE_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkVector3_IiE_Type);
}

static void *PyvtkVector3_IiE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector3<int>(*static_cast<const vtkVector3<int>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector3_IiE_TypeNew
extern "C" { PyObject *PyvtkVector3_IiE_TypeNew(); }
#define DECLARED_PyvtkVector3_IiE_TypeNew
#endif

#ifndef DECLARED_PyvtkVector_IiLi3EE_TypeNew
extern "C" { PyObject *PyvtkVector_IiLi3EE_TypeNew(); }
#define DECLARED_PyvtkVector_IiLi3EE_TypeNew
#endif
PyObject *PyvtkVector3_IiE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector3_IiE_Type,
    PyvtkVector3_IiE_Methods,
    PyvtkVector3_IiE_vtkVector3_Methods,
    &PyvtkVector3_IiE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector_IiLi3EE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static const char *PyvtkVector3_Doc =
  "vtkVector3 - no description provided.\n\n"
  "Superclass: vtkVector[T,3]\n\n"

  "\nProvided Types:\n\n"
  "  vtkVector3[float64] => vtkVector3<double>\n"

  "  vtkVector3[float32] => vtkVector3<float>\n"

  "  vtkVector3[int32] => vtkVector3<int>\n"
;

PyObject *PyvtkVector3_TemplateNew()
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkCommonDataModelPython.vtkVector3",
                                     PyvtkVector3_Doc);

  o = PyvtkVector3_IdE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector3_IfE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector3_IiE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  return temp;
}


static PyObject *
PyvtkVector4_IdE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<double> *op = static_cast<vtkVector4<double> *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->Set(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector4_IdE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<double> *op = static_cast<vtkVector4<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector4_IdE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<double> *op = static_cast<vtkVector4<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector4_IdE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<double> *op = static_cast<vtkVector4<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector4_IdE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<double> *op = static_cast<vtkVector4<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector4_IdE_SetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZ");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<double> *op = static_cast<vtkVector4<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetZ(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector4_IdE_GetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZ");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<double> *op = static_cast<vtkVector4<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetZ();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector4_IdE_SetW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetW");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<double> *op = static_cast<vtkVector4<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetW(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector4_IdE_GetW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetW");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<double> *op = static_cast<vtkVector4<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetW();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVector4_IdE_Methods[] = {
  {"Set", PyvtkVector4_IdE_Set, METH_VARARGS,
   "Set(self, x:float, y:float, z:float, w:float) -> None\nC++: void Set(const double &x, const double &y, const double &z,\n    const double &w)\n\nSet the x, y, z and w components of a 3D vector in homogeneous\ncoordinates.\n"},
  {"SetX", PyvtkVector4_IdE_SetX, METH_VARARGS,
   "SetX(self, x:float) -> None\nC++: void SetX(const double &x)\n\nSet the x component of the vector, i.e. element 0.\n"},
  {"GetX", PyvtkVector4_IdE_GetX, METH_VARARGS,
   "GetX(self) -> float\nC++: const double &GetX()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {"SetY", PyvtkVector4_IdE_SetY, METH_VARARGS,
   "SetY(self, y:float) -> None\nC++: void SetY(const double &y)\n\nSet the y component of the vector, i.e. element 1.\n"},
  {"GetY", PyvtkVector4_IdE_GetY, METH_VARARGS,
   "GetY(self) -> float\nC++: const double &GetY()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {"SetZ", PyvtkVector4_IdE_SetZ, METH_VARARGS,
   "SetZ(self, z:float) -> None\nC++: void SetZ(const double &z)\n\nSet the z component of the vector, i.e. element 2.\n"},
  {"GetZ", PyvtkVector4_IdE_GetZ, METH_VARARGS,
   "GetZ(self) -> float\nC++: const double &GetZ()\n\nGet the z component of the vector, i.e. element 2.\n"},
  {"SetW", PyvtkVector4_IdE_SetW, METH_VARARGS,
   "SetW(self, w:float) -> None\nC++: void SetW(const double &w)\n\nSet the w component of the vector, i.e. element 3.\n"},
  {"GetW", PyvtkVector4_IdE_GetW, METH_VARARGS,
   "GetW(self) -> float\nC++: const double &GetW()\n\nGet the w component of the vector, i.e. element 3.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector4_IdE_vtkVector4_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector4<double> *op = new vtkVector4<double>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkVector4_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkVector4_IdE_vtkVector4_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector4<double> *op = new vtkVector4<double>(temp0);

    result = PyVTKSpecialObject_New("vtkVector4_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkVector4_IdE_vtkVector4_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4");

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector4<double> *op = new vtkVector4<double>(temp0);

    result = PyVTKSpecialObject_New("vtkVector4_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkVector4_IdE_vtkVector4_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkVector4<double> *op = new vtkVector4<double>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkVector4_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkVector4_IdE_vtkVector4_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4");

  vtkVector4<double> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector4_IdE"))
  {
    vtkVector4<double> *op = new vtkVector4<double>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector4_IdE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector4_IdE_vtkVector4_Methods[] = {
  {"vtkVector4", PyvtkVector4_IdE_vtkVector4_s2, METH_VARARGS,
   "-@d"},
  {"vtkVector4", PyvtkVector4_IdE_vtkVector4_s3, METH_VARARGS,
   "-@P *d"},
  {"vtkVector4", PyvtkVector4_IdE_vtkVector4_s5, METH_VARARGS,
   "@W vtkVector4_IdE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector4_IdE_vtkVector4(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector4_IdE_vtkVector4_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector4_IdE_vtkVector4_s1(self, args);
    case 4:
      return PyvtkVector4_IdE_vtkVector4_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector4");
  return nullptr;
}


static const char *PyvtkVector4_IdE_Doc =

  "vtkVector4() -> vtkVector4\nC++: vtkVector4()\nvtkVector4(scalar:float) -> vtkVector4\nC++: explicit vtkVector4(const double &scalar)\nvtkVector4(init:(float, float, float, float)) -> vtkVector4\nC++: explicit vtkVector4(const double *init)\nvtkVector4(x:float, y:float, z:float, w:float) -> vtkVector4\nC++: vtkVector4(const double &x, const double &y, const double &z,\n    const double &w)\nvtkVector4(__a:vtkVector4_IdE) -> vtkVector4\nC++: vtkVector4(const &vtkVector4<double>)\n""\n"
  "vtkVector4<double> - no description provided.\n\n"
  "Superclass: vtkVector[float64,4]\n\n"
;

static PyObject *
PyvtkVector4_IdE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector4_IdE_vtkVector4(nullptr, args);
}

static void PyvtkVector4_IdE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector4<double> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector4_IdE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector4_IdE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector4_IdE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector4_IdE_Delete, // tp_dealloc
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
  PyvtkVector4_IdE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector4_IdE_Doc, // tp_doc
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
  PyvtkVector4_IdE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector4_IdE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector4<double>(*static_cast<const vtkVector4<double>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector4_IdE_TypeNew
extern "C" { PyObject *PyvtkVector4_IdE_TypeNew(); }
#define DECLARED_PyvtkVector4_IdE_TypeNew
#endif

#ifndef DECLARED_PyvtkVector_IdLi4EE_TypeNew
extern "C" { PyObject *PyvtkVector_IdLi4EE_TypeNew(); }
#define DECLARED_PyvtkVector_IdLi4EE_TypeNew
#endif
PyObject *PyvtkVector4_IdE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector4_IdE_Type,
    PyvtkVector4_IdE_Methods,
    PyvtkVector4_IdE_vtkVector4_Methods,
    &PyvtkVector4_IdE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector_IdLi4EE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector4_IiE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<int> *op = static_cast<vtkVector4<int> *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->Set(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector4_IiE_SetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<int> *op = static_cast<vtkVector4<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetX(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector4_IiE_GetX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<int> *op = static_cast<vtkVector4<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = &op->GetX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector4_IiE_SetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<int> *op = static_cast<vtkVector4<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetY(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector4_IiE_GetY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<int> *op = static_cast<vtkVector4<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = &op->GetY();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector4_IiE_SetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZ");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<int> *op = static_cast<vtkVector4<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetZ(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector4_IiE_GetZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZ");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<int> *op = static_cast<vtkVector4<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = &op->GetZ();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVector4_IiE_SetW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetW");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<int> *op = static_cast<vtkVector4<int> *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetW(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVector4_IiE_GetW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetW");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4<int> *op = static_cast<vtkVector4<int> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = &op->GetW();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVector4_IiE_Methods[] = {
  {"Set", PyvtkVector4_IiE_Set, METH_VARARGS,
   "Set(self, x:int, y:int, z:int, w:int) -> None\nC++: void Set(const int &x, const int &y, const int &z,\n    const int &w)\n\nSet the x, y, z and w components of a 3D vector in homogeneous\ncoordinates.\n"},
  {"SetX", PyvtkVector4_IiE_SetX, METH_VARARGS,
   "SetX(self, x:int) -> None\nC++: void SetX(const int &x)\n\nSet the x component of the vector, i.e. element 0.\n"},
  {"GetX", PyvtkVector4_IiE_GetX, METH_VARARGS,
   "GetX(self) -> int\nC++: const int &GetX()\n\nGet the x component of the vector, i.e. element 0.\n"},
  {"SetY", PyvtkVector4_IiE_SetY, METH_VARARGS,
   "SetY(self, y:int) -> None\nC++: void SetY(const int &y)\n\nSet the y component of the vector, i.e. element 1.\n"},
  {"GetY", PyvtkVector4_IiE_GetY, METH_VARARGS,
   "GetY(self) -> int\nC++: const int &GetY()\n\nGet the y component of the vector, i.e. element 1.\n"},
  {"SetZ", PyvtkVector4_IiE_SetZ, METH_VARARGS,
   "SetZ(self, z:int) -> None\nC++: void SetZ(const int &z)\n\nSet the z component of the vector, i.e. element 2.\n"},
  {"GetZ", PyvtkVector4_IiE_GetZ, METH_VARARGS,
   "GetZ(self) -> int\nC++: const int &GetZ()\n\nGet the z component of the vector, i.e. element 2.\n"},
  {"SetW", PyvtkVector4_IiE_SetW, METH_VARARGS,
   "SetW(self, w:int) -> None\nC++: void SetW(const int &w)\n\nSet the w component of the vector, i.e. element 3.\n"},
  {"GetW", PyvtkVector4_IiE_GetW, METH_VARARGS,
   "GetW(self) -> int\nC++: const int &GetW()\n\nGet the w component of the vector, i.e. element 3.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector4_IiE_vtkVector4_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector4<int> *op = new vtkVector4<int>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkVector4_IiE", op);
  }

  return result;
}

static PyObject *
PyvtkVector4_IiE_vtkVector4_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector4<int> *op = new vtkVector4<int>(temp0);

    result = PyVTKSpecialObject_New("vtkVector4_IiE", op);
  }

  return result;
}

static PyObject *
PyvtkVector4_IiE_vtkVector4_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4");

  const size_t size0 = 4;
  int temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector4<int> *op = new vtkVector4<int>(temp0);

    result = PyVTKSpecialObject_New("vtkVector4_IiE", op);
  }

  return result;
}

static PyObject *
PyvtkVector4_IiE_vtkVector4_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4");

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkVector4<int> *op = new vtkVector4<int>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkVector4_IiE", op);
  }

  return result;
}

static PyObject *
PyvtkVector4_IiE_vtkVector4_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4");

  vtkVector4<int> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector4_IiE"))
  {
    vtkVector4<int> *op = new vtkVector4<int>(*temp0);

    result = PyVTKSpecialObject_New("vtkVector4_IiE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector4_IiE_vtkVector4_Methods[] = {
  {"vtkVector4", PyvtkVector4_IiE_vtkVector4_s2, METH_VARARGS,
   "-@i"},
  {"vtkVector4", PyvtkVector4_IiE_vtkVector4_s3, METH_VARARGS,
   "-@P *i"},
  {"vtkVector4", PyvtkVector4_IiE_vtkVector4_s5, METH_VARARGS,
   "@W vtkVector4_IiE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector4_IiE_vtkVector4(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector4_IiE_vtkVector4_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector4_IiE_vtkVector4_s1(self, args);
    case 4:
      return PyvtkVector4_IiE_vtkVector4_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector4");
  return nullptr;
}


static const char *PyvtkVector4_IiE_Doc =

  "vtkVector4() -> vtkVector4\nC++: vtkVector4()\nvtkVector4(scalar:int) -> vtkVector4\nC++: explicit vtkVector4(const int &scalar)\nvtkVector4(init:(int, int, int, int)) -> vtkVector4\nC++: explicit vtkVector4(const int *init)\nvtkVector4(x:int, y:int, z:int, w:int) -> vtkVector4\nC++: vtkVector4(const int &x, const int &y, const int &z,\n    const int &w)\nvtkVector4(__a:vtkVector4_IiE) -> vtkVector4\nC++: vtkVector4(const &vtkVector4<int>)\n""\n"
  "vtkVector4<int> - no description provided.\n\n"
  "Superclass: vtkVector[int32,4]\n\n"
;

static PyObject *
PyvtkVector4_IiE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector4_IiE_vtkVector4(nullptr, args);
}

static void PyvtkVector4_IiE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector4<int> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector4_IiE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector4_IiE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector4_IiE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector4_IiE_Delete, // tp_dealloc
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
  PyvtkVector4_IiE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector4_IiE_Doc, // tp_doc
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
  PyvtkVector4_IiE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector4_IiE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector4<int>(*static_cast<const vtkVector4<int>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector4_IiE_TypeNew
extern "C" { PyObject *PyvtkVector4_IiE_TypeNew(); }
#define DECLARED_PyvtkVector4_IiE_TypeNew
#endif

#ifndef DECLARED_PyvtkVector_IiLi4EE_TypeNew
extern "C" { PyObject *PyvtkVector_IiLi4EE_TypeNew(); }
#define DECLARED_PyvtkVector_IiLi4EE_TypeNew
#endif
PyObject *PyvtkVector4_IiE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector4_IiE_Type,
    PyvtkVector4_IiE_Methods,
    PyvtkVector4_IiE_vtkVector4_Methods,
    &PyvtkVector4_IiE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector_IiLi4EE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static const char *PyvtkVector4_Doc =
  "vtkVector4 - no description provided.\n\n"
  "Superclass: vtkVector[T,4]\n\n"

  "\nProvided Types:\n\n"
  "  vtkVector4[float64] => vtkVector4<double>\n"

  "  vtkVector4[int32] => vtkVector4<int>\n"
;

PyObject *PyvtkVector4_TemplateNew()
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkCommonDataModelPython.vtkVector4",
                                     PyvtkVector4_Doc);

  o = PyvtkVector4_IdE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector4_IiE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  return temp;
}


static PyObject *
PyvtkVector2i_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2i *op = static_cast<vtkVector2i *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2i tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}

static PyMethodDef PyvtkVector2i_Methods[] = {
  {"Normalized", PyvtkVector2i_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector2i\nC++: vtkVector2i Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector2i_vtkVector2i_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2i");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector2i *op = new vtkVector2i();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkVector2i", op);
  }

  return result;
}

static PyObject *
PyvtkVector2i_vtkVector2i_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2i");

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVector2i *op = new vtkVector2i(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkVector2i", op);
  }

  return result;
}

static PyObject *
PyvtkVector2i_vtkVector2i_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2i");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2i *op = new vtkVector2i(temp0);

    result = PyVTKSpecialObject_New("vtkVector2i", op);
  }

  return result;
}

static PyObject *
PyvtkVector2i_vtkVector2i_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2i");

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector2i *op = new vtkVector2i(temp0);

    result = PyVTKSpecialObject_New("vtkVector2i", op);
  }

  return result;
}

static PyObject *
PyvtkVector2i_vtkVector2i_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2i");

  vtkTuple<int, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IiLi2EE"))
  {
    vtkVector2i *op = new vtkVector2i(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2i", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVector2i_vtkVector2i_s6(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2i");

  vtkVector<int, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IiLi2EE"))
  {
    vtkVector2i *op = new vtkVector2i(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2i", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVector2i_vtkVector2i_s7(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2i");

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    vtkVector2i *op = new vtkVector2i(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2i", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector2i_vtkVector2i_Methods[] = {
  {"vtkVector2i", PyvtkVector2i_vtkVector2i_s3, METH_VARARGS,
   "-@i"},
  {"vtkVector2i", PyvtkVector2i_vtkVector2i_s4, METH_VARARGS,
   "-@P *i"},
  {"vtkVector2i", PyvtkVector2i_vtkVector2i_s5, METH_VARARGS,
   "-@W vtkTuple_IiLi2EE"},
  {"vtkVector2i", PyvtkVector2i_vtkVector2i_s6, METH_VARARGS,
   "@W vtkVector_IiLi2EE"},
  {"vtkVector2i", PyvtkVector2i_vtkVector2i_s7, METH_VARARGS,
   "@W vtkVector2i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector2i_vtkVector2i(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector2i_vtkVector2i_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector2i_vtkVector2i_s1(self, args);
    case 2:
      return PyvtkVector2i_vtkVector2i_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector2i");
  return nullptr;
}


static const char *PyvtkVector2i_Doc =

  "vtkVector2i() -> vtkVector2i\nC++: vtkVector2i()\nvtkVector2i(x:int, y:int) -> vtkVector2i\nC++: vtkVector2i(int x, int y)\nvtkVector2i(s:int) -> vtkVector2i\nC++: explicit vtkVector2i(int s)\nvtkVector2i(i:(int, int)) -> vtkVector2i\nC++: explicit vtkVector2i(const int *i)\nvtkVector2i(o:vtkTuple_IiLi2EE) -> vtkVector2i\nC++: explicit vtkVector2i(const vtkTuple<int, 2> &o)\nvtkVector2i(o:vtkVector_IiLi2EE) -> vtkVector2i\nC++: vtkVector2i(const vtkVector<int, 2> &o)\nvtkVector2i(__a:vtkVector2i) -> vtkVector2i\nC++: vtkVector2i(const &vtkVector2i)\n""\n"
  "vtkVector2i - Some derived classes for the different vectors commonly\nused.\n\n"
  "Superclass: vtkVector2[int32]\n\n"
;

static PyObject *
PyvtkVector2i_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector2i_vtkVector2i(nullptr, args);
}

static void PyvtkVector2i_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector2i *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector2i_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector2i_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector2i", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector2i_Delete, // tp_dealloc
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
  PyvtkVector2i_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector2i_Doc, // tp_doc
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
  PyvtkVector2i_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector2i_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector2i(*static_cast<const vtkVector2i*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector2i_TypeNew
extern "C" { PyObject *PyvtkVector2i_TypeNew(); }
#define DECLARED_PyvtkVector2i_TypeNew
#endif

#ifndef DECLARED_PyvtkVector2_IiE_TypeNew
extern "C" { PyObject *PyvtkVector2_IiE_TypeNew(); }
#define DECLARED_PyvtkVector2_IiE_TypeNew
#endif
PyObject *PyvtkVector2i_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector2i_Type,
    PyvtkVector2i_Methods,
    PyvtkVector2i_vtkVector2i_Methods,
    &PyvtkVector2i_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector2_IiE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector2f_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2f *op = static_cast<vtkVector2f *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2f tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  return result;
}

static PyMethodDef PyvtkVector2f_Methods[] = {
  {"Normalized", PyvtkVector2f_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector2f\nC++: vtkVector2f Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector2f_vtkVector2f_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2f");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector2f *op = new vtkVector2f();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkVector2f", op);
  }

  return result;
}

static PyObject *
PyvtkVector2f_vtkVector2f_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2f");

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVector2f *op = new vtkVector2f(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkVector2f", op);
  }

  return result;
}

static PyObject *
PyvtkVector2f_vtkVector2f_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2f");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2f *op = new vtkVector2f(temp0);

    result = PyVTKSpecialObject_New("vtkVector2f", op);
  }

  return result;
}

static PyObject *
PyvtkVector2f_vtkVector2f_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2f");

  const size_t size0 = 2;
  float temp0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector2f *op = new vtkVector2f(temp0);

    result = PyVTKSpecialObject_New("vtkVector2f", op);
  }

  return result;
}

static PyObject *
PyvtkVector2f_vtkVector2f_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2f");

  vtkTuple<float, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IfLi2EE"))
  {
    vtkVector2f *op = new vtkVector2f(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2f", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVector2f_vtkVector2f_s6(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2f");

  vtkVector<float, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IfLi2EE"))
  {
    vtkVector2f *op = new vtkVector2f(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2f", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVector2f_vtkVector2f_s7(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2f");

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    vtkVector2f *op = new vtkVector2f(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2f", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector2f_vtkVector2f_Methods[] = {
  {"vtkVector2f", PyvtkVector2f_vtkVector2f_s3, METH_VARARGS,
   "-@f"},
  {"vtkVector2f", PyvtkVector2f_vtkVector2f_s4, METH_VARARGS,
   "-@P *f"},
  {"vtkVector2f", PyvtkVector2f_vtkVector2f_s5, METH_VARARGS,
   "-@W vtkTuple_IfLi2EE"},
  {"vtkVector2f", PyvtkVector2f_vtkVector2f_s6, METH_VARARGS,
   "@W vtkVector_IfLi2EE"},
  {"vtkVector2f", PyvtkVector2f_vtkVector2f_s7, METH_VARARGS,
   "@W vtkVector2f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector2f_vtkVector2f(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector2f_vtkVector2f_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector2f_vtkVector2f_s1(self, args);
    case 2:
      return PyvtkVector2f_vtkVector2f_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector2f");
  return nullptr;
}


static const char *PyvtkVector2f_Doc =

  "vtkVector2f() -> vtkVector2f\nC++: vtkVector2f()\nvtkVector2f(x:float, y:float) -> vtkVector2f\nC++: vtkVector2f(float x, float y)\nvtkVector2f(s:float) -> vtkVector2f\nC++: explicit vtkVector2f(float s)\nvtkVector2f(i:(float, float)) -> vtkVector2f\nC++: explicit vtkVector2f(const float *i)\nvtkVector2f(o:vtkTuple_IfLi2EE) -> vtkVector2f\nC++: explicit vtkVector2f(const vtkTuple<float, 2> &o)\nvtkVector2f(o:vtkVector_IfLi2EE) -> vtkVector2f\nC++: vtkVector2f(const vtkVector<float, 2> &o)\nvtkVector2f(__a:vtkVector2f) -> vtkVector2f\nC++: vtkVector2f(const &vtkVector2f)\n""\n"
  "vtkVector2f - no description provided.\n\n"
  "Superclass: vtkVector2[float32]\n\n"
;

static PyObject *
PyvtkVector2f_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector2f_vtkVector2f(nullptr, args);
}

static void PyvtkVector2f_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector2f *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector2f_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector2f_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector2f", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector2f_Delete, // tp_dealloc
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
  PyvtkVector2f_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector2f_Doc, // tp_doc
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
  PyvtkVector2f_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector2f_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector2f(*static_cast<const vtkVector2f*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector2f_TypeNew
extern "C" { PyObject *PyvtkVector2f_TypeNew(); }
#define DECLARED_PyvtkVector2f_TypeNew
#endif

#ifndef DECLARED_PyvtkVector2_IfE_TypeNew
extern "C" { PyObject *PyvtkVector2_IfE_TypeNew(); }
#define DECLARED_PyvtkVector2_IfE_TypeNew
#endif
PyObject *PyvtkVector2f_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector2f_Type,
    PyvtkVector2f_Methods,
    PyvtkVector2f_vtkVector2f_Methods,
    &PyvtkVector2f_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector2_IfE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector2d_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector2d *op = static_cast<vtkVector2d *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2d tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2d");
    }
  }

  return result;
}

static PyMethodDef PyvtkVector2d_Methods[] = {
  {"Normalized", PyvtkVector2d_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector2d\nC++: vtkVector2d Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector2d_vtkVector2d_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2d");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector2d *op = new vtkVector2d();
    (*op)[0] = 0;
    (*op)[1] = 0;

    result = PyVTKSpecialObject_New("vtkVector2d", op);
  }

  return result;
}

static PyObject *
PyvtkVector2d_vtkVector2d_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2d");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVector2d *op = new vtkVector2d(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkVector2d", op);
  }

  return result;
}

static PyObject *
PyvtkVector2d_vtkVector2d_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2d");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2d *op = new vtkVector2d(temp0);

    result = PyVTKSpecialObject_New("vtkVector2d", op);
  }

  return result;
}

static PyObject *
PyvtkVector2d_vtkVector2d_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2d");

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector2d *op = new vtkVector2d(temp0);

    result = PyVTKSpecialObject_New("vtkVector2d", op);
  }

  return result;
}

static PyObject *
PyvtkVector2d_vtkVector2d_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2d");

  vtkTuple<double, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IdLi2EE"))
  {
    vtkVector2d *op = new vtkVector2d(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2d", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVector2d_vtkVector2d_s6(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2d");

  vtkVector<double, 2> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IdLi2EE"))
  {
    vtkVector2d *op = new vtkVector2d(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2d", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVector2d_vtkVector2d_s7(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector2d");

  vtkVector2d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2d"))
  {
    vtkVector2d *op = new vtkVector2d(*temp0);

    result = PyVTKSpecialObject_New("vtkVector2d", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector2d_vtkVector2d_Methods[] = {
  {"vtkVector2d", PyvtkVector2d_vtkVector2d_s3, METH_VARARGS,
   "-@d"},
  {"vtkVector2d", PyvtkVector2d_vtkVector2d_s4, METH_VARARGS,
   "-@P *d"},
  {"vtkVector2d", PyvtkVector2d_vtkVector2d_s5, METH_VARARGS,
   "-@W vtkTuple_IdLi2EE"},
  {"vtkVector2d", PyvtkVector2d_vtkVector2d_s6, METH_VARARGS,
   "@W vtkVector_IdLi2EE"},
  {"vtkVector2d", PyvtkVector2d_vtkVector2d_s7, METH_VARARGS,
   "@W vtkVector2d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector2d_vtkVector2d(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector2d_vtkVector2d_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector2d_vtkVector2d_s1(self, args);
    case 2:
      return PyvtkVector2d_vtkVector2d_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector2d");
  return nullptr;
}


static const char *PyvtkVector2d_Doc =

  "vtkVector2d() -> vtkVector2d\nC++: vtkVector2d()\nvtkVector2d(x:float, y:float) -> vtkVector2d\nC++: vtkVector2d(double x, double y)\nvtkVector2d(s:float) -> vtkVector2d\nC++: explicit vtkVector2d(double s)\nvtkVector2d(i:(float, float)) -> vtkVector2d\nC++: explicit vtkVector2d(const double *i)\nvtkVector2d(o:vtkTuple_IdLi2EE) -> vtkVector2d\nC++: explicit vtkVector2d(const vtkTuple<double, 2> &o)\nvtkVector2d(o:vtkVector_IdLi2EE) -> vtkVector2d\nC++: vtkVector2d(const vtkVector<double, 2> &o)\nvtkVector2d(__a:vtkVector2d) -> vtkVector2d\nC++: vtkVector2d(const &vtkVector2d)\n""\n"
  "vtkVector2d - no description provided.\n\n"
  "Superclass: vtkVector2[float64]\n\n"
;

static PyObject *
PyvtkVector2d_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector2d_vtkVector2d(nullptr, args);
}

static void PyvtkVector2d_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector2d *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector2d_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector2d_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector2d", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector2d_Delete, // tp_dealloc
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
  PyvtkVector2d_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector2d_Doc, // tp_doc
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
  PyvtkVector2d_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector2d_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector2d(*static_cast<const vtkVector2d*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector2d_TypeNew
extern "C" { PyObject *PyvtkVector2d_TypeNew(); }
#define DECLARED_PyvtkVector2d_TypeNew
#endif

#ifndef DECLARED_PyvtkVector2_IdE_TypeNew
extern "C" { PyObject *PyvtkVector2_IdE_TypeNew(); }
#define DECLARED_PyvtkVector2_IdE_TypeNew
#endif
PyObject *PyvtkVector2d_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector2d_Type,
    PyvtkVector2d_Methods,
    PyvtkVector2d_vtkVector2d_Methods,
    &PyvtkVector2d_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector2_IdE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector3i_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3i *op = static_cast<vtkVector3i *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3i tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3i");
    }
  }

  return result;
}


static PyObject *
PyvtkVector3i_Cross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Cross");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3i *op = static_cast<vtkVector3i *>(vp);

  vtkVector3i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3i"))
  {
    vtkVector3i tempr = op->Cross(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3i");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3i_Methods[] = {
  {"Normalized", PyvtkVector3i_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector3i\nC++: vtkVector3i Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {"Cross", PyvtkVector3i_Cross, METH_VARARGS,
   "Cross(self, other:vtkVector3i) -> vtkVector3i\nC++: vtkVector3i Cross(const vtkVector3i &other)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector3i_vtkVector3i_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3i");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector3i *op = new vtkVector3i();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkVector3i", op);
  }

  return result;
}

static PyObject *
PyvtkVector3i_vtkVector3i_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3i");

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVector3i *op = new vtkVector3i(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkVector3i", op);
  }

  return result;
}

static PyObject *
PyvtkVector3i_vtkVector3i_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3i");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3i *op = new vtkVector3i(temp0);

    result = PyVTKSpecialObject_New("vtkVector3i", op);
  }

  return result;
}

static PyObject *
PyvtkVector3i_vtkVector3i_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3i");

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector3i *op = new vtkVector3i(temp0);

    result = PyVTKSpecialObject_New("vtkVector3i", op);
  }

  return result;
}

static PyObject *
PyvtkVector3i_vtkVector3i_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3i");

  vtkTuple<int, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IiLi3EE"))
  {
    vtkVector3i *op = new vtkVector3i(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3i", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVector3i_vtkVector3i_s6(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3i");

  vtkVector<int, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IiLi3EE"))
  {
    vtkVector3i *op = new vtkVector3i(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3i", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVector3i_vtkVector3i_s7(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3i");

  vtkVector3i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3i"))
  {
    vtkVector3i *op = new vtkVector3i(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3i", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3i_vtkVector3i_Methods[] = {
  {"vtkVector3i", PyvtkVector3i_vtkVector3i_s3, METH_VARARGS,
   "-@i"},
  {"vtkVector3i", PyvtkVector3i_vtkVector3i_s4, METH_VARARGS,
   "-@P *i"},
  {"vtkVector3i", PyvtkVector3i_vtkVector3i_s5, METH_VARARGS,
   "-@W vtkTuple_IiLi3EE"},
  {"vtkVector3i", PyvtkVector3i_vtkVector3i_s6, METH_VARARGS,
   "@W vtkVector_IiLi3EE"},
  {"vtkVector3i", PyvtkVector3i_vtkVector3i_s7, METH_VARARGS,
   "@W vtkVector3i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector3i_vtkVector3i(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector3i_vtkVector3i_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector3i_vtkVector3i_s1(self, args);
    case 3:
      return PyvtkVector3i_vtkVector3i_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector3i");
  return nullptr;
}


static const char *PyvtkVector3i_Doc =

  "vtkVector3i() -> vtkVector3i\nC++: vtkVector3i()\nvtkVector3i(x:int, y:int, z:int) -> vtkVector3i\nC++: vtkVector3i(int x, int y, int z)\nvtkVector3i(s:int) -> vtkVector3i\nC++: explicit vtkVector3i(int s)\nvtkVector3i(i:(int, int, int)) -> vtkVector3i\nC++: explicit vtkVector3i(const int *i)\nvtkVector3i(o:vtkTuple_IiLi3EE) -> vtkVector3i\nC++: explicit vtkVector3i(const vtkTuple<int, 3> &o)\nvtkVector3i(o:vtkVector_IiLi3EE) -> vtkVector3i\nC++: vtkVector3i(const vtkVector<int, 3> &o)\nvtkVector3i(__a:vtkVector3i) -> vtkVector3i\nC++: vtkVector3i(const &vtkVector3i)\n""\n"
  "vtkVector3i - no description provided.\n\n"
  "Superclass: vtkVector3[int32]\n\n"
;

static PyObject *
PyvtkVector3i_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector3i_vtkVector3i(nullptr, args);
}

static void PyvtkVector3i_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector3i *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector3i_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector3i_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector3i", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector3i_Delete, // tp_dealloc
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
  PyvtkVector3i_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector3i_Doc, // tp_doc
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
  PyvtkVector3i_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector3i_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector3i(*static_cast<const vtkVector3i*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector3i_TypeNew
extern "C" { PyObject *PyvtkVector3i_TypeNew(); }
#define DECLARED_PyvtkVector3i_TypeNew
#endif

#ifndef DECLARED_PyvtkVector3_IiE_TypeNew
extern "C" { PyObject *PyvtkVector3_IiE_TypeNew(); }
#define DECLARED_PyvtkVector3_IiE_TypeNew
#endif
PyObject *PyvtkVector3i_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector3i_Type,
    PyvtkVector3i_Methods,
    PyvtkVector3i_vtkVector3i_Methods,
    &PyvtkVector3i_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector3_IiE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector3f_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3f *op = static_cast<vtkVector3f *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3f tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3f");
    }
  }

  return result;
}


static PyObject *
PyvtkVector3f_Cross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Cross");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3f *op = static_cast<vtkVector3f *>(vp);

  vtkVector3f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3f"))
  {
    vtkVector3f tempr = op->Cross(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3f");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3f_Methods[] = {
  {"Normalized", PyvtkVector3f_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector3f\nC++: vtkVector3f Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {"Cross", PyvtkVector3f_Cross, METH_VARARGS,
   "Cross(self, other:vtkVector3f) -> vtkVector3f\nC++: vtkVector3f Cross(const vtkVector3f &other)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector3f_vtkVector3f_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3f");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector3f *op = new vtkVector3f();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkVector3f", op);
  }

  return result;
}

static PyObject *
PyvtkVector3f_vtkVector3f_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3f");

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVector3f *op = new vtkVector3f(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkVector3f", op);
  }

  return result;
}

static PyObject *
PyvtkVector3f_vtkVector3f_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3f");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3f *op = new vtkVector3f(temp0);

    result = PyVTKSpecialObject_New("vtkVector3f", op);
  }

  return result;
}

static PyObject *
PyvtkVector3f_vtkVector3f_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3f");

  const size_t size0 = 3;
  float temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector3f *op = new vtkVector3f(temp0);

    result = PyVTKSpecialObject_New("vtkVector3f", op);
  }

  return result;
}

static PyObject *
PyvtkVector3f_vtkVector3f_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3f");

  vtkTuple<float, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IfLi3EE"))
  {
    vtkVector3f *op = new vtkVector3f(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3f", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVector3f_vtkVector3f_s6(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3f");

  vtkVector<float, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IfLi3EE"))
  {
    vtkVector3f *op = new vtkVector3f(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3f", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVector3f_vtkVector3f_s7(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3f");

  vtkVector3f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3f"))
  {
    vtkVector3f *op = new vtkVector3f(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3f", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3f_vtkVector3f_Methods[] = {
  {"vtkVector3f", PyvtkVector3f_vtkVector3f_s3, METH_VARARGS,
   "-@f"},
  {"vtkVector3f", PyvtkVector3f_vtkVector3f_s4, METH_VARARGS,
   "-@P *f"},
  {"vtkVector3f", PyvtkVector3f_vtkVector3f_s5, METH_VARARGS,
   "-@W vtkTuple_IfLi3EE"},
  {"vtkVector3f", PyvtkVector3f_vtkVector3f_s6, METH_VARARGS,
   "@W vtkVector_IfLi3EE"},
  {"vtkVector3f", PyvtkVector3f_vtkVector3f_s7, METH_VARARGS,
   "@W vtkVector3f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector3f_vtkVector3f(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector3f_vtkVector3f_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector3f_vtkVector3f_s1(self, args);
    case 3:
      return PyvtkVector3f_vtkVector3f_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector3f");
  return nullptr;
}


static const char *PyvtkVector3f_Doc =

  "vtkVector3f() -> vtkVector3f\nC++: vtkVector3f()\nvtkVector3f(x:float, y:float, z:float) -> vtkVector3f\nC++: vtkVector3f(float x, float y, float z)\nvtkVector3f(s:float) -> vtkVector3f\nC++: explicit vtkVector3f(float s)\nvtkVector3f(i:(float, float, float)) -> vtkVector3f\nC++: explicit vtkVector3f(const float *i)\nvtkVector3f(o:vtkTuple_IfLi3EE) -> vtkVector3f\nC++: explicit vtkVector3f(const vtkTuple<float, 3> &o)\nvtkVector3f(o:vtkVector_IfLi3EE) -> vtkVector3f\nC++: vtkVector3f(const vtkVector<float, 3> &o)\nvtkVector3f(__a:vtkVector3f) -> vtkVector3f\nC++: vtkVector3f(const &vtkVector3f)\n""\n"
  "vtkVector3f - no description provided.\n\n"
  "Superclass: vtkVector3[float32]\n\n"
;

static PyObject *
PyvtkVector3f_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector3f_vtkVector3f(nullptr, args);
}

static void PyvtkVector3f_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector3f *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector3f_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector3f_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector3f", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector3f_Delete, // tp_dealloc
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
  PyvtkVector3f_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector3f_Doc, // tp_doc
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
  PyvtkVector3f_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector3f_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector3f(*static_cast<const vtkVector3f*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector3f_TypeNew
extern "C" { PyObject *PyvtkVector3f_TypeNew(); }
#define DECLARED_PyvtkVector3f_TypeNew
#endif

#ifndef DECLARED_PyvtkVector3_IfE_TypeNew
extern "C" { PyObject *PyvtkVector3_IfE_TypeNew(); }
#define DECLARED_PyvtkVector3_IfE_TypeNew
#endif
PyObject *PyvtkVector3f_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector3f_Type,
    PyvtkVector3f_Methods,
    PyvtkVector3f_vtkVector3f_Methods,
    &PyvtkVector3f_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector3_IfE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector3d_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3d *op = static_cast<vtkVector3d *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3d tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}


static PyObject *
PyvtkVector3d_Cross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Cross");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector3d *op = static_cast<vtkVector3d *>(vp);

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d"))
  {
    vtkVector3d tempr = op->Cross(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3d_Methods[] = {
  {"Normalized", PyvtkVector3d_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector3d\nC++: vtkVector3d Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {"Cross", PyvtkVector3d_Cross, METH_VARARGS,
   "Cross(self, other:vtkVector3d) -> vtkVector3d\nC++: vtkVector3d Cross(const vtkVector3d &other)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector3d_vtkVector3d_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3d");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector3d *op = new vtkVector3d();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkVector3d", op);
  }

  return result;
}

static PyObject *
PyvtkVector3d_vtkVector3d_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3d");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkVector3d *op = new vtkVector3d(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkVector3d", op);
  }

  return result;
}

static PyObject *
PyvtkVector3d_vtkVector3d_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3d");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3d *op = new vtkVector3d(temp0);

    result = PyVTKSpecialObject_New("vtkVector3d", op);
  }

  return result;
}

static PyObject *
PyvtkVector3d_vtkVector3d_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3d");

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector3d *op = new vtkVector3d(temp0);

    result = PyVTKSpecialObject_New("vtkVector3d", op);
  }

  return result;
}

static PyObject *
PyvtkVector3d_vtkVector3d_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3d");

  vtkTuple<double, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IdLi3EE"))
  {
    vtkVector3d *op = new vtkVector3d(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3d", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVector3d_vtkVector3d_s6(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3d");

  vtkVector<double, 3> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IdLi3EE"))
  {
    vtkVector3d *op = new vtkVector3d(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3d", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVector3d_vtkVector3d_s7(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector3d");

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d"))
  {
    vtkVector3d *op = new vtkVector3d(*temp0);

    result = PyVTKSpecialObject_New("vtkVector3d", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector3d_vtkVector3d_Methods[] = {
  {"vtkVector3d", PyvtkVector3d_vtkVector3d_s3, METH_VARARGS,
   "-@d"},
  {"vtkVector3d", PyvtkVector3d_vtkVector3d_s4, METH_VARARGS,
   "-@P *d"},
  {"vtkVector3d", PyvtkVector3d_vtkVector3d_s5, METH_VARARGS,
   "-@W vtkTuple_IdLi3EE"},
  {"vtkVector3d", PyvtkVector3d_vtkVector3d_s6, METH_VARARGS,
   "@W vtkVector_IdLi3EE"},
  {"vtkVector3d", PyvtkVector3d_vtkVector3d_s7, METH_VARARGS,
   "@W vtkVector3d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector3d_vtkVector3d(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector3d_vtkVector3d_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector3d_vtkVector3d_s1(self, args);
    case 3:
      return PyvtkVector3d_vtkVector3d_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector3d");
  return nullptr;
}


static const char *PyvtkVector3d_Doc =

  "vtkVector3d() -> vtkVector3d\nC++: vtkVector3d()\nvtkVector3d(x:float, y:float, z:float) -> vtkVector3d\nC++: vtkVector3d(double x, double y, double z)\nvtkVector3d(s:float) -> vtkVector3d\nC++: explicit vtkVector3d(double s)\nvtkVector3d(i:(float, float, float)) -> vtkVector3d\nC++: explicit vtkVector3d(const double *i)\nvtkVector3d(o:vtkTuple_IdLi3EE) -> vtkVector3d\nC++: explicit vtkVector3d(const vtkTuple<double, 3> &o)\nvtkVector3d(o:vtkVector_IdLi3EE) -> vtkVector3d\nC++: vtkVector3d(const vtkVector<double, 3> &o)\nvtkVector3d(__a:vtkVector3d) -> vtkVector3d\nC++: vtkVector3d(const &vtkVector3d)\n""\n"
  "vtkVector3d - no description provided.\n\n"
  "Superclass: vtkVector3[float64]\n\n"
;

static PyObject *
PyvtkVector3d_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector3d_vtkVector3d(nullptr, args);
}

static void PyvtkVector3d_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector3d *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector3d_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector3d_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector3d", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector3d_Delete, // tp_dealloc
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
  PyvtkVector3d_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector3d_Doc, // tp_doc
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
  PyvtkVector3d_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector3d_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector3d(*static_cast<const vtkVector3d*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector3d_TypeNew
extern "C" { PyObject *PyvtkVector3d_TypeNew(); }
#define DECLARED_PyvtkVector3d_TypeNew
#endif

#ifndef DECLARED_PyvtkVector3_IdE_TypeNew
extern "C" { PyObject *PyvtkVector3_IdE_TypeNew(); }
#define DECLARED_PyvtkVector3_IdE_TypeNew
#endif
PyObject *PyvtkVector3d_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector3d_Type,
    PyvtkVector3d_Methods,
    PyvtkVector3d_vtkVector3d_Methods,
    &PyvtkVector3d_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector3_IdE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector4i_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4i *op = static_cast<vtkVector4i *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector4i tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector4i");
    }
  }

  return result;
}

static PyMethodDef PyvtkVector4i_Methods[] = {
  {"Normalized", PyvtkVector4i_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector4i\nC++: vtkVector4i Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector4i_vtkVector4i_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4i");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector4i *op = new vtkVector4i();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkVector4i", op);
  }

  return result;
}

static PyObject *
PyvtkVector4i_vtkVector4i_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4i");

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkVector4i *op = new vtkVector4i(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkVector4i", op);
  }

  return result;
}

static PyObject *
PyvtkVector4i_vtkVector4i_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4i");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector4i *op = new vtkVector4i(temp0);

    result = PyVTKSpecialObject_New("vtkVector4i", op);
  }

  return result;
}

static PyObject *
PyvtkVector4i_vtkVector4i_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4i");

  const size_t size0 = 4;
  int temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector4i *op = new vtkVector4i(temp0);

    result = PyVTKSpecialObject_New("vtkVector4i", op);
  }

  return result;
}

static PyObject *
PyvtkVector4i_vtkVector4i_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4i");

  vtkTuple<int, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IiLi4EE"))
  {
    vtkVector4i *op = new vtkVector4i(*temp0);

    result = PyVTKSpecialObject_New("vtkVector4i", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVector4i_vtkVector4i_s6(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4i");

  vtkVector<int, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IiLi4EE"))
  {
    vtkVector4i *op = new vtkVector4i(*temp0);

    result = PyVTKSpecialObject_New("vtkVector4i", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVector4i_vtkVector4i_s7(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4i");

  vtkVector4i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector4i"))
  {
    vtkVector4i *op = new vtkVector4i(*temp0);

    result = PyVTKSpecialObject_New("vtkVector4i", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector4i_vtkVector4i_Methods[] = {
  {"vtkVector4i", PyvtkVector4i_vtkVector4i_s3, METH_VARARGS,
   "-@i"},
  {"vtkVector4i", PyvtkVector4i_vtkVector4i_s4, METH_VARARGS,
   "-@P *i"},
  {"vtkVector4i", PyvtkVector4i_vtkVector4i_s5, METH_VARARGS,
   "-@W vtkTuple_IiLi4EE"},
  {"vtkVector4i", PyvtkVector4i_vtkVector4i_s6, METH_VARARGS,
   "@W vtkVector_IiLi4EE"},
  {"vtkVector4i", PyvtkVector4i_vtkVector4i_s7, METH_VARARGS,
   "@W vtkVector4i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector4i_vtkVector4i(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector4i_vtkVector4i_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector4i_vtkVector4i_s1(self, args);
    case 4:
      return PyvtkVector4i_vtkVector4i_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector4i");
  return nullptr;
}


static const char *PyvtkVector4i_Doc =

  "vtkVector4i() -> vtkVector4i\nC++: vtkVector4i()\nvtkVector4i(x:int, y:int, z:int, w:int) -> vtkVector4i\nC++: vtkVector4i(int x, int y, int z, int w)\nvtkVector4i(s:int) -> vtkVector4i\nC++: explicit vtkVector4i(int s)\nvtkVector4i(i:(int, int, int, int)) -> vtkVector4i\nC++: explicit vtkVector4i(const int *i)\nvtkVector4i(o:vtkTuple_IiLi4EE) -> vtkVector4i\nC++: explicit vtkVector4i(const vtkTuple<int, 4> &o)\nvtkVector4i(o:vtkVector_IiLi4EE) -> vtkVector4i\nC++: vtkVector4i(const vtkVector<int, 4> &o)\nvtkVector4i(__a:vtkVector4i) -> vtkVector4i\nC++: vtkVector4i(const &vtkVector4i)\n""\n"
  "vtkVector4i - no description provided.\n\n"
  "Superclass: vtkVector4[int32]\n\n"
;

static PyObject *
PyvtkVector4i_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector4i_vtkVector4i(nullptr, args);
}

static void PyvtkVector4i_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector4i *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector4i_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector4i_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector4i", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector4i_Delete, // tp_dealloc
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
  PyvtkVector4i_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector4i_Doc, // tp_doc
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
  PyvtkVector4i_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector4i_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector4i(*static_cast<const vtkVector4i*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector4i_TypeNew
extern "C" { PyObject *PyvtkVector4i_TypeNew(); }
#define DECLARED_PyvtkVector4i_TypeNew
#endif

#ifndef DECLARED_PyvtkVector4_IiE_TypeNew
extern "C" { PyObject *PyvtkVector4_IiE_TypeNew(); }
#define DECLARED_PyvtkVector4_IiE_TypeNew
#endif
PyObject *PyvtkVector4i_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector4i_Type,
    PyvtkVector4i_Methods,
    PyvtkVector4i_vtkVector4i_Methods,
    &PyvtkVector4i_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector4_IiE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkVector4d_Normalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Normalized");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkVector4d *op = static_cast<vtkVector4d *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector4d tempr = op->Normalized();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector4d");
    }
  }

  return result;
}

static PyMethodDef PyvtkVector4d_Methods[] = {
  {"Normalized", PyvtkVector4d_Normalized, METH_VARARGS,
   "Normalized(self) -> vtkVector4d\nC++: vtkVector4d Normalized()\n\nReturn the normalized form of this vector.\n\\return The normalized form of this vector.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVector4d_vtkVector4d_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4d");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVector4d *op = new vtkVector4d();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkVector4d", op);
  }

  return result;
}

static PyObject *
PyvtkVector4d_vtkVector4d_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4d");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkVector4d *op = new vtkVector4d(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkVector4d", op);
  }

  return result;
}

static PyObject *
PyvtkVector4d_vtkVector4d_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4d");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector4d *op = new vtkVector4d(temp0);

    result = PyVTKSpecialObject_New("vtkVector4d", op);
  }

  return result;
}

static PyObject *
PyvtkVector4d_vtkVector4d_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4d");

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkVector4d *op = new vtkVector4d(temp0);

    result = PyVTKSpecialObject_New("vtkVector4d", op);
  }

  return result;
}

static PyObject *
PyvtkVector4d_vtkVector4d_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4d");

  vtkTuple<double, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTuple_IdLi4EE"))
  {
    vtkVector4d *op = new vtkVector4d(*temp0);

    result = PyVTKSpecialObject_New("vtkVector4d", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVector4d_vtkVector4d_s6(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4d");

  vtkVector<double, 4> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector_IdLi4EE"))
  {
    vtkVector4d *op = new vtkVector4d(*temp0);

    result = PyVTKSpecialObject_New("vtkVector4d", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkVector4d_vtkVector4d_s7(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVector4d");

  vtkVector4d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector4d"))
  {
    vtkVector4d *op = new vtkVector4d(*temp0);

    result = PyVTKSpecialObject_New("vtkVector4d", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVector4d_vtkVector4d_Methods[] = {
  {"vtkVector4d", PyvtkVector4d_vtkVector4d_s3, METH_VARARGS,
   "-@d"},
  {"vtkVector4d", PyvtkVector4d_vtkVector4d_s4, METH_VARARGS,
   "-@P *d"},
  {"vtkVector4d", PyvtkVector4d_vtkVector4d_s5, METH_VARARGS,
   "-@W vtkTuple_IdLi4EE"},
  {"vtkVector4d", PyvtkVector4d_vtkVector4d_s6, METH_VARARGS,
   "@W vtkVector_IdLi4EE"},
  {"vtkVector4d", PyvtkVector4d_vtkVector4d_s7, METH_VARARGS,
   "@W vtkVector4d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVector4d_vtkVector4d(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkVector4d_vtkVector4d_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVector4d_vtkVector4d_s1(self, args);
    case 4:
      return PyvtkVector4d_vtkVector4d_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVector4d");
  return nullptr;
}


static const char *PyvtkVector4d_Doc =

  "vtkVector4d() -> vtkVector4d\nC++: vtkVector4d()\nvtkVector4d(x:float, y:float, z:float, w:float) -> vtkVector4d\nC++: vtkVector4d(double x, double y, double z, double w)\nvtkVector4d(s:float) -> vtkVector4d\nC++: explicit vtkVector4d(double s)\nvtkVector4d(i:(float, float, float, float)) -> vtkVector4d\nC++: explicit vtkVector4d(const double *i)\nvtkVector4d(o:vtkTuple_IdLi4EE) -> vtkVector4d\nC++: explicit vtkVector4d(const vtkTuple<double, 4> &o)\nvtkVector4d(o:vtkVector_IdLi4EE) -> vtkVector4d\nC++: vtkVector4d(const vtkVector<double, 4> &o)\nvtkVector4d(__a:vtkVector4d) -> vtkVector4d\nC++: vtkVector4d(const &vtkVector4d)\n""\n"
  "vtkVector4d - no description provided.\n\n"
  "Superclass: vtkVector4[float64]\n\n"
;

static PyObject *
PyvtkVector4d_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVector4d_vtkVector4d(nullptr, args);
}

static void PyvtkVector4d_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVector4d *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVector4d_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVector4d_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkVector4d", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVector4d_Delete, // tp_dealloc
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
  PyvtkVector4d_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVector4d_Doc, // tp_doc
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
  PyvtkVector4d_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVector4d_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVector4d(*static_cast<const vtkVector4d*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkVector4d_TypeNew
extern "C" { PyObject *PyvtkVector4d_TypeNew(); }
#define DECLARED_PyvtkVector4d_TypeNew
#endif

#ifndef DECLARED_PyvtkVector4_IdE_TypeNew
extern "C" { PyObject *PyvtkVector4_IdE_TypeNew(); }
#define DECLARED_PyvtkVector4_IdE_TypeNew
#endif
PyObject *PyvtkVector4d_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkVector4d_Type,
    PyvtkVector4d_Methods,
    PyvtkVector4d_vtkVector4d_Methods,
    &PyvtkVector4d_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVector4_IdE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVector(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVector_TemplateNew();

  if (o)
  {
    PyObject *l = PyObject_CallMethod(o, "values", nullptr);
    Py_ssize_t n = PyList_Size(l);
    for (Py_ssize_t i = 0; i < n; i++)
    {
      PyObject *ot = PyList_GetItem(l, i);
      const char *nt = nullptr;
      if (PyType_Check(ot))
      {
        nt = vtkPythonUtil::GetTypeName((PyTypeObject *)ot);
      }
      if (nt)
      {
        nt = vtkPythonUtil::StripModule(nt);
        PyDict_SetItemString(dict, nt, ot);
      }
    }
    Py_DECREF(l);
  }

  if (o && PyDict_SetItemString(dict, "vtkVector", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector2_TemplateNew();

  if (o)
  {
    PyObject *l = PyObject_CallMethod(o, "values", nullptr);
    Py_ssize_t n = PyList_Size(l);
    for (Py_ssize_t i = 0; i < n; i++)
    {
      PyObject *ot = PyList_GetItem(l, i);
      const char *nt = nullptr;
      if (PyType_Check(ot))
      {
        nt = vtkPythonUtil::GetTypeName((PyTypeObject *)ot);
      }
      if (nt)
      {
        nt = vtkPythonUtil::StripModule(nt);
        PyDict_SetItemString(dict, nt, ot);
      }
    }
    Py_DECREF(l);
  }

  if (o && PyDict_SetItemString(dict, "vtkVector2", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector3_TemplateNew();

  if (o)
  {
    PyObject *l = PyObject_CallMethod(o, "values", nullptr);
    Py_ssize_t n = PyList_Size(l);
    for (Py_ssize_t i = 0; i < n; i++)
    {
      PyObject *ot = PyList_GetItem(l, i);
      const char *nt = nullptr;
      if (PyType_Check(ot))
      {
        nt = vtkPythonUtil::GetTypeName((PyTypeObject *)ot);
      }
      if (nt)
      {
        nt = vtkPythonUtil::StripModule(nt);
        PyDict_SetItemString(dict, nt, ot);
      }
    }
    Py_DECREF(l);
  }

  if (o && PyDict_SetItemString(dict, "vtkVector3", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector4_TemplateNew();

  if (o)
  {
    PyObject *l = PyObject_CallMethod(o, "values", nullptr);
    Py_ssize_t n = PyList_Size(l);
    for (Py_ssize_t i = 0; i < n; i++)
    {
      PyObject *ot = PyList_GetItem(l, i);
      const char *nt = nullptr;
      if (PyType_Check(ot))
      {
        nt = vtkPythonUtil::GetTypeName((PyTypeObject *)ot);
      }
      if (nt)
      {
        nt = vtkPythonUtil::StripModule(nt);
        PyDict_SetItemString(dict, nt, ot);
      }
    }
    Py_DECREF(l);
  }

  if (o && PyDict_SetItemString(dict, "vtkVector4", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector2i_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkVector2i", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector2f_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkVector2f", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector2d_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkVector2d", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector3i_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkVector3i", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector3f_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkVector3f", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector3d_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkVector3d", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector4i_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkVector4i", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkVector4d_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkVector4d", o) != 0)
  {
    Py_DECREF(o);
  }

}

