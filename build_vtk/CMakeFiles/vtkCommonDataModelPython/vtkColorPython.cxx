// python wrapper for vtkColor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkColor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkColor(PyObject *dict); }

static PyObject *
PyvtkColor3_IdE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

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
PyvtkColor3_IdE_SetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRed");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetRed(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor3_IdE_GetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRed");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetRed();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColor3_IdE_SetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGreen");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetGreen(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor3_IdE_GetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreen");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetGreen();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColor3_IdE_SetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlue");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetBlue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor3_IdE_GetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlue");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<double> *op = static_cast<vtkColor3<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetBlue();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkColor3_IdE_Methods[] = {
  {"Set", PyvtkColor3_IdE_Set, METH_VARARGS,
   "Set(self, red:float, green:float, blue:float) -> None\nC++: void Set(const double &red, const double &green,\n    const double &blue)\n\nSet the red, green and blue components of the color.\n"},
  {"SetRed", PyvtkColor3_IdE_SetRed, METH_VARARGS,
   "SetRed(self, red:float) -> None\nC++: void SetRed(const double &red)\n\nSet the red component of the color, i.e. element 0.\n"},
  {"GetRed", PyvtkColor3_IdE_GetRed, METH_VARARGS,
   "GetRed(self) -> float\nC++: const double &GetRed()\n\nGet the red component of the color, i.e. element 0.\n"},
  {"SetGreen", PyvtkColor3_IdE_SetGreen, METH_VARARGS,
   "SetGreen(self, green:float) -> None\nC++: void SetGreen(const double &green)\n\nSet the green component of the color, i.e. element 1.\n"},
  {"GetGreen", PyvtkColor3_IdE_GetGreen, METH_VARARGS,
   "GetGreen(self) -> float\nC++: const double &GetGreen()\n\nGet the green component of the color, i.e. element 1.\n"},
  {"SetBlue", PyvtkColor3_IdE_SetBlue, METH_VARARGS,
   "SetBlue(self, blue:float) -> None\nC++: void SetBlue(const double &blue)\n\nSet the blue component of the color, i.e. element 2.\n"},
  {"GetBlue", PyvtkColor3_IdE_GetBlue, METH_VARARGS,
   "GetBlue(self) -> float\nC++: const double &GetBlue()\n\nGet the blue component of the color, i.e. element 2.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkColor3_IdE_vtkColor3_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor3<double> *op = new vtkColor3<double>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkColor3_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkColor3_IdE_vtkColor3_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor3<double> *op = new vtkColor3<double>(temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkColor3_IdE_vtkColor3_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkColor3<double> *op = new vtkColor3<double>(temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkColor3_IdE_vtkColor3_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkColor3<double> *op = new vtkColor3<double>(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkColor3_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkColor3_IdE_vtkColor3_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  vtkColor3<double> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3_IdE"))
  {
    vtkColor3<double> *op = new vtkColor3<double>(*temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IdE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor3_IdE_vtkColor3_Methods[] = {
  {"vtkColor3", PyvtkColor3_IdE_vtkColor3_s2, METH_VARARGS,
   "-@d"},
  {"vtkColor3", PyvtkColor3_IdE_vtkColor3_s3, METH_VARARGS,
   "-@P *d"},
  {"vtkColor3", PyvtkColor3_IdE_vtkColor3_s5, METH_VARARGS,
   "@W vtkColor3_IdE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkColor3_IdE_vtkColor3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor3_IdE_vtkColor3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkColor3_IdE_vtkColor3_s1(self, args);
    case 3:
      return PyvtkColor3_IdE_vtkColor3_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor3");
  return nullptr;
}


static const char *PyvtkColor3_IdE_Doc =

  "vtkColor3() -> vtkColor3\nC++: vtkColor3()\nvtkColor3(scalar:float) -> vtkColor3\nC++: explicit vtkColor3(const double &scalar)\nvtkColor3(init:(float, float, float)) -> vtkColor3\nC++: explicit vtkColor3(const double *init)\nvtkColor3(red:float, green:float, blue:float) -> vtkColor3\nC++: vtkColor3(const double &red, const double &green,\n    const double &blue)\nvtkColor3(__a:vtkColor3_IdE) -> vtkColor3\nC++: vtkColor3(const &vtkColor3<double>)\n""\n"
  "vtkColor3<double> - no description provided.\n\n"
  "Superclass: vtkTuple[float64,3]\n\n"
;

static PyObject *
PyvtkColor3_IdE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkColor3_IdE_vtkColor3(nullptr, args);
}

static void PyvtkColor3_IdE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkColor3<double> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkColor3_IdE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkColor3_IdE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkColor3_IdE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor3_IdE_Delete, // tp_dealloc
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
  PyvtkColor3_IdE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkColor3_IdE_Doc, // tp_doc
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
  PyvtkColor3_IdE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkColor3_IdE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkColor3<double>(*static_cast<const vtkColor3<double>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkColor3_IdE_TypeNew
extern "C" { PyObject *PyvtkColor3_IdE_TypeNew(); }
#define DECLARED_PyvtkColor3_IdE_TypeNew
#endif

PyObject *PyvtkColor3_IdE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkColor3_IdE_Type,
    PyvtkColor3_IdE_Methods,
    PyvtkColor3_IdE_vtkColor3_Methods,
    &PyvtkColor3_IdE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindSpecialTypeObject("vtkTuple_IdLi3EE");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkColor3_IfE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

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
PyvtkColor3_IfE_SetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRed");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetRed(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor3_IfE_GetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRed");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetRed();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColor3_IfE_SetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGreen");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetGreen(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor3_IfE_GetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreen");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetGreen();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColor3_IfE_SetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlue");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetBlue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor3_IfE_GetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlue");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<float> *op = static_cast<vtkColor3<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetBlue();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkColor3_IfE_Methods[] = {
  {"Set", PyvtkColor3_IfE_Set, METH_VARARGS,
   "Set(self, red:float, green:float, blue:float) -> None\nC++: void Set(const float &red, const float &green,\n    const float &blue)\n\nSet the red, green and blue components of the color.\n"},
  {"SetRed", PyvtkColor3_IfE_SetRed, METH_VARARGS,
   "SetRed(self, red:float) -> None\nC++: void SetRed(const float &red)\n\nSet the red component of the color, i.e. element 0.\n"},
  {"GetRed", PyvtkColor3_IfE_GetRed, METH_VARARGS,
   "GetRed(self) -> float\nC++: const float &GetRed()\n\nGet the red component of the color, i.e. element 0.\n"},
  {"SetGreen", PyvtkColor3_IfE_SetGreen, METH_VARARGS,
   "SetGreen(self, green:float) -> None\nC++: void SetGreen(const float &green)\n\nSet the green component of the color, i.e. element 1.\n"},
  {"GetGreen", PyvtkColor3_IfE_GetGreen, METH_VARARGS,
   "GetGreen(self) -> float\nC++: const float &GetGreen()\n\nGet the green component of the color, i.e. element 1.\n"},
  {"SetBlue", PyvtkColor3_IfE_SetBlue, METH_VARARGS,
   "SetBlue(self, blue:float) -> None\nC++: void SetBlue(const float &blue)\n\nSet the blue component of the color, i.e. element 2.\n"},
  {"GetBlue", PyvtkColor3_IfE_GetBlue, METH_VARARGS,
   "GetBlue(self) -> float\nC++: const float &GetBlue()\n\nGet the blue component of the color, i.e. element 2.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkColor3_IfE_vtkColor3_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor3<float> *op = new vtkColor3<float>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkColor3_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkColor3_IfE_vtkColor3_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor3<float> *op = new vtkColor3<float>(temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkColor3_IfE_vtkColor3_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  const size_t size0 = 3;
  float temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkColor3<float> *op = new vtkColor3<float>(temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkColor3_IfE_vtkColor3_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkColor3<float> *op = new vtkColor3<float>(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkColor3_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkColor3_IfE_vtkColor3_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  vtkColor3<float> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3_IfE"))
  {
    vtkColor3<float> *op = new vtkColor3<float>(*temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IfE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor3_IfE_vtkColor3_Methods[] = {
  {"vtkColor3", PyvtkColor3_IfE_vtkColor3_s2, METH_VARARGS,
   "-@f"},
  {"vtkColor3", PyvtkColor3_IfE_vtkColor3_s3, METH_VARARGS,
   "-@P *f"},
  {"vtkColor3", PyvtkColor3_IfE_vtkColor3_s5, METH_VARARGS,
   "@W vtkColor3_IfE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkColor3_IfE_vtkColor3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor3_IfE_vtkColor3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkColor3_IfE_vtkColor3_s1(self, args);
    case 3:
      return PyvtkColor3_IfE_vtkColor3_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor3");
  return nullptr;
}


static const char *PyvtkColor3_IfE_Doc =

  "vtkColor3() -> vtkColor3\nC++: vtkColor3()\nvtkColor3(scalar:float) -> vtkColor3\nC++: explicit vtkColor3(const float &scalar)\nvtkColor3(init:(float, float, float)) -> vtkColor3\nC++: explicit vtkColor3(const float *init)\nvtkColor3(red:float, green:float, blue:float) -> vtkColor3\nC++: vtkColor3(const float &red, const float &green,\n    const float &blue)\nvtkColor3(__a:vtkColor3_IfE) -> vtkColor3\nC++: vtkColor3(const &vtkColor3<float>)\n""\n"
  "vtkColor3<float> - no description provided.\n\n"
  "Superclass: vtkTuple[float32,3]\n\n"
;

static PyObject *
PyvtkColor3_IfE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkColor3_IfE_vtkColor3(nullptr, args);
}

static void PyvtkColor3_IfE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkColor3<float> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkColor3_IfE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkColor3_IfE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkColor3_IfE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor3_IfE_Delete, // tp_dealloc
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
  PyvtkColor3_IfE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkColor3_IfE_Doc, // tp_doc
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
  PyvtkColor3_IfE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkColor3_IfE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkColor3<float>(*static_cast<const vtkColor3<float>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkColor3_IfE_TypeNew
extern "C" { PyObject *PyvtkColor3_IfE_TypeNew(); }
#define DECLARED_PyvtkColor3_IfE_TypeNew
#endif

PyObject *PyvtkColor3_IfE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkColor3_IfE_Type,
    PyvtkColor3_IfE_Methods,
    PyvtkColor3_IfE_vtkColor3_Methods,
    &PyvtkColor3_IfE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindSpecialTypeObject("vtkTuple_IfLi3EE");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkColor3_IhE_Set(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
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
PyvtkColor3_IhE_SetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRed");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetRed(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor3_IhE_GetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRed");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const unsigned char *tempr = &op->GetRed();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColor3_IhE_SetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGreen");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetGreen(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor3_IhE_GetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreen");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const unsigned char *tempr = &op->GetGreen();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColor3_IhE_SetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlue");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetBlue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor3_IhE_GetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlue");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor3<unsigned char> *op = static_cast<vtkColor3<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const unsigned char *tempr = &op->GetBlue();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkColor3_IhE_Methods[] = {
  {"Set", PyvtkColor3_IhE_Set, METH_VARARGS,
   "Set(self, red:int, green:int, blue:int) -> None\nC++: void Set(const unsigned char &red,\n    const unsigned char &green, const unsigned char &blue)\n\nSet the red, green and blue components of the color.\n"},
  {"SetRed", PyvtkColor3_IhE_SetRed, METH_VARARGS,
   "SetRed(self, red:int) -> None\nC++: void SetRed(const unsigned char &red)\n\nSet the red component of the color, i.e. element 0.\n"},
  {"GetRed", PyvtkColor3_IhE_GetRed, METH_VARARGS,
   "GetRed(self) -> int\nC++: const unsigned char &GetRed()\n\nGet the red component of the color, i.e. element 0.\n"},
  {"SetGreen", PyvtkColor3_IhE_SetGreen, METH_VARARGS,
   "SetGreen(self, green:int) -> None\nC++: void SetGreen(const unsigned char &green)\n\nSet the green component of the color, i.e. element 1.\n"},
  {"GetGreen", PyvtkColor3_IhE_GetGreen, METH_VARARGS,
   "GetGreen(self) -> int\nC++: const unsigned char &GetGreen()\n\nGet the green component of the color, i.e. element 1.\n"},
  {"SetBlue", PyvtkColor3_IhE_SetBlue, METH_VARARGS,
   "SetBlue(self, blue:int) -> None\nC++: void SetBlue(const unsigned char &blue)\n\nSet the blue component of the color, i.e. element 2.\n"},
  {"GetBlue", PyvtkColor3_IhE_GetBlue, METH_VARARGS,
   "GetBlue(self) -> int\nC++: const unsigned char &GetBlue()\n\nGet the blue component of the color, i.e. element 2.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkColor3_IhE_vtkColor3_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor3<unsigned char> *op = new vtkColor3<unsigned char>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkColor3_IhE", op);
  }

  return result;
}

static PyObject *
PyvtkColor3_IhE_vtkColor3_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  unsigned char temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor3<unsigned char> *op = new vtkColor3<unsigned char>(temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IhE", op);
  }

  return result;
}

static PyObject *
PyvtkColor3_IhE_vtkColor3_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  const size_t size0 = 3;
  unsigned char temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkColor3<unsigned char> *op = new vtkColor3<unsigned char>(temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IhE", op);
  }

  return result;
}

static PyObject *
PyvtkColor3_IhE_vtkColor3_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkColor3<unsigned char> *op = new vtkColor3<unsigned char>(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkColor3_IhE", op);
  }

  return result;
}

static PyObject *
PyvtkColor3_IhE_vtkColor3_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3");

  vtkColor3<unsigned char> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3_IhE"))
  {
    vtkColor3<unsigned char> *op = new vtkColor3<unsigned char>(*temp0);

    result = PyVTKSpecialObject_New("vtkColor3_IhE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor3_IhE_vtkColor3_Methods[] = {
  {"vtkColor3", PyvtkColor3_IhE_vtkColor3_s2, METH_VARARGS,
   "-@B"},
  {"vtkColor3", PyvtkColor3_IhE_vtkColor3_s3, METH_VARARGS,
   "-@P *B"},
  {"vtkColor3", PyvtkColor3_IhE_vtkColor3_s5, METH_VARARGS,
   "@W vtkColor3_IhE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkColor3_IhE_vtkColor3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor3_IhE_vtkColor3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkColor3_IhE_vtkColor3_s1(self, args);
    case 3:
      return PyvtkColor3_IhE_vtkColor3_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor3");
  return nullptr;
}


static const char *PyvtkColor3_IhE_Doc =

  "vtkColor3() -> vtkColor3\nC++: vtkColor3()\nvtkColor3(scalar:int) -> vtkColor3\nC++: explicit vtkColor3(const unsigned char &scalar)\nvtkColor3(init:(int, int, int)) -> vtkColor3\nC++: explicit vtkColor3(const unsigned char *init)\nvtkColor3(red:int, green:int, blue:int) -> vtkColor3\nC++: vtkColor3(const unsigned char &red, const unsigned char &green,\n    const unsigned char &blue)\nvtkColor3(__a:vtkColor3_IhE) -> vtkColor3\nC++: vtkColor3(const &vtkColor3<unsigned char>)\n""\n"
  "vtkColor3<unsigned char> - no description provided.\n\n"
  "Superclass: vtkTuple[uint8,3]\n\n"
;

static PyObject *
PyvtkColor3_IhE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkColor3_IhE_vtkColor3(nullptr, args);
}

static void PyvtkColor3_IhE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkColor3<unsigned char> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkColor3_IhE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkColor3_IhE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkColor3_IhE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor3_IhE_Delete, // tp_dealloc
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
  PyvtkColor3_IhE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkColor3_IhE_Doc, // tp_doc
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
  PyvtkColor3_IhE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkColor3_IhE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkColor3<unsigned char>(*static_cast<const vtkColor3<unsigned char>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkColor3_IhE_TypeNew
extern "C" { PyObject *PyvtkColor3_IhE_TypeNew(); }
#define DECLARED_PyvtkColor3_IhE_TypeNew
#endif

PyObject *PyvtkColor3_IhE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkColor3_IhE_Type,
    PyvtkColor3_IhE_Methods,
    PyvtkColor3_IhE_vtkColor3_Methods,
    &PyvtkColor3_IhE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindSpecialTypeObject("vtkTuple_IhLi3EE");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static const char *PyvtkColor3_Doc =
  "vtkColor3 - no description provided.\n\n"
  "Superclass: vtkTuple[T,3]\n\n"

  "\nProvided Types:\n\n"
  "  vtkColor3[float64] => vtkColor3<double>\n"

  "  vtkColor3[float32] => vtkColor3<float>\n"

  "  vtkColor3[uint8] => vtkColor3<unsigned char>\n"
;

PyObject *PyvtkColor3_TemplateNew()
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkCommonDataModelPython.vtkColor3",
                                     PyvtkColor3_Doc);

  o = PyvtkColor3_IdE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkColor3_IfE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkColor3_IhE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  return temp;
}


static PyObject *
PyvtkColor4_IdE_Set_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

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
PyvtkColor4_IdE_Set_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

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
PyvtkColor4_IdE_Set(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkColor4_IdE_Set_s1(self, args);
    case 4:
      return PyvtkColor4_IdE_Set_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Set");
  return nullptr;
}


static PyObject *
PyvtkColor4_IdE_SetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRed");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetRed(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IdE_GetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRed");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetRed();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IdE_SetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGreen");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetGreen(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IdE_GetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreen");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetGreen();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IdE_SetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlue");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetBlue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IdE_GetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlue");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetBlue();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IdE_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlpha");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetAlpha(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IdE_GetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlpha");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<double> *op = static_cast<vtkColor4<double> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = &op->GetAlpha();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkColor4_IdE_Methods[] = {
  {"Set", PyvtkColor4_IdE_Set, METH_VARARGS,
   "Set(self, red:float, green:float, blue:float) -> None\nC++: void Set(const double &red, const double &green,\n    const double &blue)\nSet(self, red:float, green:float, blue:float, alpha:float) -> None\nC++: void Set(const double &red, const double &green,\n    const double &blue, const double &alpha)\n\nSet the red, green and blue components of the color.\n"},
  {"SetRed", PyvtkColor4_IdE_SetRed, METH_VARARGS,
   "SetRed(self, red:float) -> None\nC++: void SetRed(const double &red)\n\nSet the red component of the color, i.e. element 0.\n"},
  {"GetRed", PyvtkColor4_IdE_GetRed, METH_VARARGS,
   "GetRed(self) -> float\nC++: const double &GetRed()\n\nGet the red component of the color, i.e. element 0.\n"},
  {"SetGreen", PyvtkColor4_IdE_SetGreen, METH_VARARGS,
   "SetGreen(self, green:float) -> None\nC++: void SetGreen(const double &green)\n\nSet the green component of the color, i.e. element 1.\n"},
  {"GetGreen", PyvtkColor4_IdE_GetGreen, METH_VARARGS,
   "GetGreen(self) -> float\nC++: const double &GetGreen()\n\nGet the green component of the color, i.e. element 1.\n"},
  {"SetBlue", PyvtkColor4_IdE_SetBlue, METH_VARARGS,
   "SetBlue(self, blue:float) -> None\nC++: void SetBlue(const double &blue)\n\nSet the blue component of the color, i.e. element 2.\n"},
  {"GetBlue", PyvtkColor4_IdE_GetBlue, METH_VARARGS,
   "GetBlue(self) -> float\nC++: const double &GetBlue()\n\nGet the blue component of the color, i.e. element 2.\n"},
  {"SetAlpha", PyvtkColor4_IdE_SetAlpha, METH_VARARGS,
   "SetAlpha(self, alpha:float) -> None\nC++: void SetAlpha(const double &alpha)\n\nSet the alpha component of the color, i.e. element 3.\n"},
  {"GetAlpha", PyvtkColor4_IdE_GetAlpha, METH_VARARGS,
   "GetAlpha(self) -> float\nC++: const double &GetAlpha()\n\nGet the alpha component of the color, i.e. element 3.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkColor4_IdE_vtkColor4_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor4<double> *op = new vtkColor4<double>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkColor4_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkColor4_IdE_vtkColor4_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor4<double> *op = new vtkColor4<double>(temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkColor4_IdE_vtkColor4_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkColor4<double> *op = new vtkColor4<double>(temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkColor4_IdE_vtkColor4_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

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
    vtkColor4<double> *op = new vtkColor4<double>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkColor4_IdE", op);
  }

  return result;
}

static PyObject *
PyvtkColor4_IdE_vtkColor4_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  vtkColor4<double> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4_IdE"))
  {
    vtkColor4<double> *op = new vtkColor4<double>(*temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IdE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor4_IdE_vtkColor4_Methods[] = {
  {"vtkColor4", PyvtkColor4_IdE_vtkColor4_s2, METH_VARARGS,
   "-@d"},
  {"vtkColor4", PyvtkColor4_IdE_vtkColor4_s3, METH_VARARGS,
   "-@P *d"},
  {"vtkColor4", PyvtkColor4_IdE_vtkColor4_s5, METH_VARARGS,
   "@W vtkColor4_IdE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkColor4_IdE_vtkColor4(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor4_IdE_vtkColor4_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkColor4_IdE_vtkColor4_s1(self, args);
    case 4:
      return PyvtkColor4_IdE_vtkColor4_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor4");
  return nullptr;
}


static const char *PyvtkColor4_IdE_Doc =

  "vtkColor4() -> vtkColor4\nC++: vtkColor4()\nvtkColor4(scalar:float) -> vtkColor4\nC++: explicit vtkColor4(const double &scalar)\nvtkColor4(init:(float, float, float, float)) -> vtkColor4\nC++: explicit vtkColor4(const double *init)\nvtkColor4(red:float, green:float, blue:float, alpha:float)\n    -> vtkColor4\nC++: vtkColor4(const double &red, const double &green,\n    const double &blue, const double &alpha)\nvtkColor4(__a:vtkColor4_IdE) -> vtkColor4\nC++: vtkColor4(const &vtkColor4<double>)\n""\n"
  "vtkColor4<double> - no description provided.\n\n"
  "Superclass: vtkTuple[float64,4]\n\n"
;

static PyObject *
PyvtkColor4_IdE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkColor4_IdE_vtkColor4(nullptr, args);
}

static void PyvtkColor4_IdE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkColor4<double> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkColor4_IdE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkColor4_IdE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkColor4_IdE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor4_IdE_Delete, // tp_dealloc
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
  PyvtkColor4_IdE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkColor4_IdE_Doc, // tp_doc
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
  PyvtkColor4_IdE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkColor4_IdE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkColor4<double>(*static_cast<const vtkColor4<double>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkColor4_IdE_TypeNew
extern "C" { PyObject *PyvtkColor4_IdE_TypeNew(); }
#define DECLARED_PyvtkColor4_IdE_TypeNew
#endif

PyObject *PyvtkColor4_IdE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkColor4_IdE_Type,
    PyvtkColor4_IdE_Methods,
    PyvtkColor4_IdE_vtkColor4_Methods,
    &PyvtkColor4_IdE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindSpecialTypeObject("vtkTuple_IdLi4EE");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkColor4_IfE_Set_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

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
PyvtkColor4_IfE_Set_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
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
PyvtkColor4_IfE_Set(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkColor4_IfE_Set_s1(self, args);
    case 4:
      return PyvtkColor4_IfE_Set_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Set");
  return nullptr;
}


static PyObject *
PyvtkColor4_IfE_SetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRed");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetRed(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IfE_GetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRed");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetRed();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IfE_SetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGreen");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetGreen(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IfE_GetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreen");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetGreen();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IfE_SetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlue");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetBlue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IfE_GetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlue");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetBlue();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IfE_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlpha");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetAlpha(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IfE_GetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlpha");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<float> *op = static_cast<vtkColor4<float> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const float *tempr = &op->GetAlpha();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkColor4_IfE_Methods[] = {
  {"Set", PyvtkColor4_IfE_Set, METH_VARARGS,
   "Set(self, red:float, green:float, blue:float) -> None\nC++: void Set(const float &red, const float &green,\n    const float &blue)\nSet(self, red:float, green:float, blue:float, alpha:float) -> None\nC++: void Set(const float &red, const float &green,\n    const float &blue, const float &alpha)\n\nSet the red, green and blue components of the color.\n"},
  {"SetRed", PyvtkColor4_IfE_SetRed, METH_VARARGS,
   "SetRed(self, red:float) -> None\nC++: void SetRed(const float &red)\n\nSet the red component of the color, i.e. element 0.\n"},
  {"GetRed", PyvtkColor4_IfE_GetRed, METH_VARARGS,
   "GetRed(self) -> float\nC++: const float &GetRed()\n\nGet the red component of the color, i.e. element 0.\n"},
  {"SetGreen", PyvtkColor4_IfE_SetGreen, METH_VARARGS,
   "SetGreen(self, green:float) -> None\nC++: void SetGreen(const float &green)\n\nSet the green component of the color, i.e. element 1.\n"},
  {"GetGreen", PyvtkColor4_IfE_GetGreen, METH_VARARGS,
   "GetGreen(self) -> float\nC++: const float &GetGreen()\n\nGet the green component of the color, i.e. element 1.\n"},
  {"SetBlue", PyvtkColor4_IfE_SetBlue, METH_VARARGS,
   "SetBlue(self, blue:float) -> None\nC++: void SetBlue(const float &blue)\n\nSet the blue component of the color, i.e. element 2.\n"},
  {"GetBlue", PyvtkColor4_IfE_GetBlue, METH_VARARGS,
   "GetBlue(self) -> float\nC++: const float &GetBlue()\n\nGet the blue component of the color, i.e. element 2.\n"},
  {"SetAlpha", PyvtkColor4_IfE_SetAlpha, METH_VARARGS,
   "SetAlpha(self, alpha:float) -> None\nC++: void SetAlpha(const float &alpha)\n\nSet the alpha component of the color, i.e. element 3.\n"},
  {"GetAlpha", PyvtkColor4_IfE_GetAlpha, METH_VARARGS,
   "GetAlpha(self) -> float\nC++: const float &GetAlpha()\n\nGet the alpha component of the color, i.e. element 3.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkColor4_IfE_vtkColor4_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor4<float> *op = new vtkColor4<float>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkColor4_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkColor4_IfE_vtkColor4_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor4<float> *op = new vtkColor4<float>(temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkColor4_IfE_vtkColor4_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  const size_t size0 = 4;
  float temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkColor4<float> *op = new vtkColor4<float>(temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkColor4_IfE_vtkColor4_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkColor4<float> *op = new vtkColor4<float>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkColor4_IfE", op);
  }

  return result;
}

static PyObject *
PyvtkColor4_IfE_vtkColor4_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  vtkColor4<float> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4_IfE"))
  {
    vtkColor4<float> *op = new vtkColor4<float>(*temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IfE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor4_IfE_vtkColor4_Methods[] = {
  {"vtkColor4", PyvtkColor4_IfE_vtkColor4_s2, METH_VARARGS,
   "-@f"},
  {"vtkColor4", PyvtkColor4_IfE_vtkColor4_s3, METH_VARARGS,
   "-@P *f"},
  {"vtkColor4", PyvtkColor4_IfE_vtkColor4_s5, METH_VARARGS,
   "@W vtkColor4_IfE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkColor4_IfE_vtkColor4(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor4_IfE_vtkColor4_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkColor4_IfE_vtkColor4_s1(self, args);
    case 4:
      return PyvtkColor4_IfE_vtkColor4_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor4");
  return nullptr;
}


static const char *PyvtkColor4_IfE_Doc =

  "vtkColor4() -> vtkColor4\nC++: vtkColor4()\nvtkColor4(scalar:float) -> vtkColor4\nC++: explicit vtkColor4(const float &scalar)\nvtkColor4(init:(float, float, float, float)) -> vtkColor4\nC++: explicit vtkColor4(const float *init)\nvtkColor4(red:float, green:float, blue:float, alpha:float)\n    -> vtkColor4\nC++: vtkColor4(const float &red, const float &green,\n    const float &blue, const float &alpha)\nvtkColor4(__a:vtkColor4_IfE) -> vtkColor4\nC++: vtkColor4(const &vtkColor4<float>)\n""\n"
  "vtkColor4<float> - no description provided.\n\n"
  "Superclass: vtkTuple[float32,4]\n\n"
;

static PyObject *
PyvtkColor4_IfE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkColor4_IfE_vtkColor4(nullptr, args);
}

static void PyvtkColor4_IfE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkColor4<float> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkColor4_IfE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkColor4_IfE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkColor4_IfE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor4_IfE_Delete, // tp_dealloc
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
  PyvtkColor4_IfE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkColor4_IfE_Doc, // tp_doc
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
  PyvtkColor4_IfE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkColor4_IfE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkColor4<float>(*static_cast<const vtkColor4<float>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkColor4_IfE_TypeNew
extern "C" { PyObject *PyvtkColor4_IfE_TypeNew(); }
#define DECLARED_PyvtkColor4_IfE_TypeNew
#endif

PyObject *PyvtkColor4_IfE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkColor4_IfE_Type,
    PyvtkColor4_IfE_Methods,
    PyvtkColor4_IfE_vtkColor4_Methods,
    &PyvtkColor4_IfE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindSpecialTypeObject("vtkTuple_IfLi4EE");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkColor4_IhE_Set_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
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
PyvtkColor4_IhE_Set_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
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
PyvtkColor4_IhE_Set(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkColor4_IhE_Set_s1(self, args);
    case 4:
      return PyvtkColor4_IhE_Set_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Set");
  return nullptr;
}


static PyObject *
PyvtkColor4_IhE_SetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRed");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetRed(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IhE_GetRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRed");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const unsigned char *tempr = &op->GetRed();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IhE_SetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGreen");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetGreen(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IhE_GetGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreen");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const unsigned char *tempr = &op->GetGreen();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IhE_SetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlue");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetBlue(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IhE_GetBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlue");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const unsigned char *tempr = &op->GetBlue();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IhE_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlpha");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetAlpha(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkColor4_IhE_GetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlpha");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkColor4<unsigned char> *op = static_cast<vtkColor4<unsigned char> *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const unsigned char *tempr = &op->GetAlpha();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkColor4_IhE_Methods[] = {
  {"Set", PyvtkColor4_IhE_Set, METH_VARARGS,
   "Set(self, red:int, green:int, blue:int) -> None\nC++: void Set(const unsigned char &red,\n    const unsigned char &green, const unsigned char &blue)\nSet(self, red:int, green:int, blue:int, alpha:int) -> None\nC++: void Set(const unsigned char &red,\n    const unsigned char &green, const unsigned char &blue,\n    const unsigned char &alpha)\n\nSet the red, green and blue components of the color.\n"},
  {"SetRed", PyvtkColor4_IhE_SetRed, METH_VARARGS,
   "SetRed(self, red:int) -> None\nC++: void SetRed(const unsigned char &red)\n\nSet the red component of the color, i.e. element 0.\n"},
  {"GetRed", PyvtkColor4_IhE_GetRed, METH_VARARGS,
   "GetRed(self) -> int\nC++: const unsigned char &GetRed()\n\nGet the red component of the color, i.e. element 0.\n"},
  {"SetGreen", PyvtkColor4_IhE_SetGreen, METH_VARARGS,
   "SetGreen(self, green:int) -> None\nC++: void SetGreen(const unsigned char &green)\n\nSet the green component of the color, i.e. element 1.\n"},
  {"GetGreen", PyvtkColor4_IhE_GetGreen, METH_VARARGS,
   "GetGreen(self) -> int\nC++: const unsigned char &GetGreen()\n\nGet the green component of the color, i.e. element 1.\n"},
  {"SetBlue", PyvtkColor4_IhE_SetBlue, METH_VARARGS,
   "SetBlue(self, blue:int) -> None\nC++: void SetBlue(const unsigned char &blue)\n\nSet the blue component of the color, i.e. element 2.\n"},
  {"GetBlue", PyvtkColor4_IhE_GetBlue, METH_VARARGS,
   "GetBlue(self) -> int\nC++: const unsigned char &GetBlue()\n\nGet the blue component of the color, i.e. element 2.\n"},
  {"SetAlpha", PyvtkColor4_IhE_SetAlpha, METH_VARARGS,
   "SetAlpha(self, alpha:int) -> None\nC++: void SetAlpha(const unsigned char &alpha)\n\nSet the alpha component of the color, i.e. element 3.\n"},
  {"GetAlpha", PyvtkColor4_IhE_GetAlpha, METH_VARARGS,
   "GetAlpha(self) -> int\nC++: const unsigned char &GetAlpha()\n\nGet the alpha component of the color, i.e. element 3.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkColor4_IhE_vtkColor4_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor4<unsigned char> *op = new vtkColor4<unsigned char>();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkColor4_IhE", op);
  }

  return result;
}

static PyObject *
PyvtkColor4_IhE_vtkColor4_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  unsigned char temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor4<unsigned char> *op = new vtkColor4<unsigned char>(temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IhE", op);
  }

  return result;
}

static PyObject *
PyvtkColor4_IhE_vtkColor4_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  const size_t size0 = 4;
  unsigned char temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkColor4<unsigned char> *op = new vtkColor4<unsigned char>(temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IhE", op);
  }

  return result;
}

static PyObject *
PyvtkColor4_IhE_vtkColor4_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkColor4<unsigned char> *op = new vtkColor4<unsigned char>(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkColor4_IhE", op);
  }

  return result;
}

static PyObject *
PyvtkColor4_IhE_vtkColor4_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4");

  vtkColor4<unsigned char> *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4_IhE"))
  {
    vtkColor4<unsigned char> *op = new vtkColor4<unsigned char>(*temp0);

    result = PyVTKSpecialObject_New("vtkColor4_IhE", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor4_IhE_vtkColor4_Methods[] = {
  {"vtkColor4", PyvtkColor4_IhE_vtkColor4_s2, METH_VARARGS,
   "-@B"},
  {"vtkColor4", PyvtkColor4_IhE_vtkColor4_s3, METH_VARARGS,
   "-@P *B"},
  {"vtkColor4", PyvtkColor4_IhE_vtkColor4_s5, METH_VARARGS,
   "@W vtkColor4_IhE"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkColor4_IhE_vtkColor4(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor4_IhE_vtkColor4_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkColor4_IhE_vtkColor4_s1(self, args);
    case 4:
      return PyvtkColor4_IhE_vtkColor4_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor4");
  return nullptr;
}


static const char *PyvtkColor4_IhE_Doc =

  "vtkColor4() -> vtkColor4\nC++: vtkColor4()\nvtkColor4(scalar:int) -> vtkColor4\nC++: explicit vtkColor4(const unsigned char &scalar)\nvtkColor4(init:(int, int, int, int)) -> vtkColor4\nC++: explicit vtkColor4(const unsigned char *init)\nvtkColor4(red:int, green:int, blue:int, alpha:int) -> vtkColor4\nC++: vtkColor4(const unsigned char &red, const unsigned char &green,\n    const unsigned char &blue, const unsigned char &alpha)\nvtkColor4(__a:vtkColor4_IhE) -> vtkColor4\nC++: vtkColor4(const &vtkColor4<unsigned char>)\n""\n"
  "vtkColor4<unsigned char> - no description provided.\n\n"
  "Superclass: vtkTuple[uint8,4]\n\n"
;

static PyObject *
PyvtkColor4_IhE_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkColor4_IhE_vtkColor4(nullptr, args);
}

static void PyvtkColor4_IhE_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkColor4<unsigned char> *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkColor4_IhE_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkColor4_IhE_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkColor4_IhE", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor4_IhE_Delete, // tp_dealloc
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
  PyvtkColor4_IhE_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkColor4_IhE_Doc, // tp_doc
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
  PyvtkColor4_IhE_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkColor4_IhE_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkColor4<unsigned char>(*static_cast<const vtkColor4<unsigned char>*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkColor4_IhE_TypeNew
extern "C" { PyObject *PyvtkColor4_IhE_TypeNew(); }
#define DECLARED_PyvtkColor4_IhE_TypeNew
#endif

PyObject *PyvtkColor4_IhE_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkColor4_IhE_Type,
    PyvtkColor4_IhE_Methods,
    PyvtkColor4_IhE_vtkColor4_Methods,
    &PyvtkColor4_IhE_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindSpecialTypeObject("vtkTuple_IhLi4EE");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static const char *PyvtkColor4_Doc =
  "vtkColor4 - no description provided.\n\n"
  "Superclass: vtkTuple[T,4]\n\n"

  "\nProvided Types:\n\n"
  "  vtkColor4[float64] => vtkColor4<double>\n"

  "  vtkColor4[float32] => vtkColor4<float>\n"

  "  vtkColor4[uint8] => vtkColor4<unsigned char>\n"
;

PyObject *PyvtkColor4_TemplateNew()
{
  PyObject *o;

  PyObject *temp = PyVTKTemplate_New("vtkCommonDataModelPython.vtkColor4",
                                     PyvtkColor4_Doc);

  o = PyvtkColor4_IdE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkColor4_IfE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkColor4_IhE_TypeNew();
  if (o && PyVTKTemplate_AddItem(temp, o) != 0)
  {
    Py_DECREF(o);
  }

  return temp;
}

static PyMethodDef PyvtkColor3ub_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkColor3ub_vtkColor3ub_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3ub");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor3ub *op = new vtkColor3ub();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkColor3ub", op);
  }

  return result;
}

static PyObject *
PyvtkColor3ub_vtkColor3ub_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3ub");

  const size_t size0 = 3;
  unsigned char temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkColor3ub *op = new vtkColor3ub(temp0);

    result = PyVTKSpecialObject_New("vtkColor3ub", op);
  }

  return result;
}

static PyObject *
PyvtkColor3ub_vtkColor3ub_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3ub");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor3ub *op = new vtkColor3ub(temp0);

    result = PyVTKSpecialObject_New("vtkColor3ub", op);
  }

  return result;
}

static PyObject *
PyvtkColor3ub_vtkColor3ub_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3ub");

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkColor3ub *op = new vtkColor3ub(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkColor3ub", op);
  }

  return result;
}

static PyObject *
PyvtkColor3ub_vtkColor3ub_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3ub");

  vtkColor3ub *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3ub"))
  {
    vtkColor3ub *op = new vtkColor3ub(*temp0);

    result = PyVTKSpecialObject_New("vtkColor3ub", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor3ub_vtkColor3ub_Methods[] = {
  {"vtkColor3ub", PyvtkColor3ub_vtkColor3ub_s2, METH_VARARGS,
   "-@P *B"},
  {"vtkColor3ub", PyvtkColor3ub_vtkColor3ub_s3, METH_VARARGS,
   "-@i"},
  {"vtkColor3ub", PyvtkColor3ub_vtkColor3ub_s5, METH_VARARGS,
   "@W vtkColor3ub"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkColor3ub_vtkColor3ub(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor3ub_vtkColor3ub_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkColor3ub_vtkColor3ub_s1(self, args);
    case 3:
      return PyvtkColor3ub_vtkColor3ub_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor3ub");
  return nullptr;
}


static const char *PyvtkColor3ub_Doc =

  "vtkColor3ub() -> vtkColor3ub\nC++: vtkColor3ub()\nvtkColor3ub(init:(int, int, int)) -> vtkColor3ub\nC++: explicit vtkColor3ub(const unsigned char *init)\nvtkColor3ub(hexSigned:int) -> vtkColor3ub\nC++: explicit vtkColor3ub(int hexSigned)\nvtkColor3ub(r:int, g:int, b:int) -> vtkColor3ub\nC++: vtkColor3ub(unsigned char r, unsigned char g, unsigned char b)\nvtkColor3ub(__a:vtkColor3ub) -> vtkColor3ub\nC++: vtkColor3ub(const &vtkColor3ub)\n""\n"
  "vtkColor3ub - Some derived classes for the different colors commonly\nused.\n\n"
  "Superclass: vtkColor3[uint8]\n\n"
;

static PyObject *
PyvtkColor3ub_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkColor3ub_vtkColor3ub(nullptr, args);
}

static void PyvtkColor3ub_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkColor3ub *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkColor3ub_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkColor3ub_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkColor3ub", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor3ub_Delete, // tp_dealloc
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
  PyvtkColor3ub_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkColor3ub_Doc, // tp_doc
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
  PyvtkColor3ub_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkColor3ub_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkColor3ub(*static_cast<const vtkColor3ub*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkColor3ub_TypeNew
extern "C" { PyObject *PyvtkColor3ub_TypeNew(); }
#define DECLARED_PyvtkColor3ub_TypeNew
#endif

#ifndef DECLARED_PyvtkColor3_IhE_TypeNew
extern "C" { PyObject *PyvtkColor3_IhE_TypeNew(); }
#define DECLARED_PyvtkColor3_IhE_TypeNew
#endif
PyObject *PyvtkColor3ub_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkColor3ub_Type,
    PyvtkColor3ub_Methods,
    PyvtkColor3ub_vtkColor3ub_Methods,
    &PyvtkColor3ub_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkColor3_IhE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkColor3f_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkColor3f_vtkColor3f_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3f");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor3f *op = new vtkColor3f();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkColor3f", op);
  }

  return result;
}

static PyObject *
PyvtkColor3f_vtkColor3f_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3f");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor3f *op = new vtkColor3f(temp0);

    result = PyVTKSpecialObject_New("vtkColor3f", op);
  }

  return result;
}

static PyObject *
PyvtkColor3f_vtkColor3f_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3f");

  const size_t size0 = 3;
  float temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkColor3f *op = new vtkColor3f(temp0);

    result = PyVTKSpecialObject_New("vtkColor3f", op);
  }

  return result;
}

static PyObject *
PyvtkColor3f_vtkColor3f_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3f");

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkColor3f *op = new vtkColor3f(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkColor3f", op);
  }

  return result;
}

static PyObject *
PyvtkColor3f_vtkColor3f_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3f");

  vtkColor3f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3f"))
  {
    vtkColor3f *op = new vtkColor3f(*temp0);

    result = PyVTKSpecialObject_New("vtkColor3f", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor3f_vtkColor3f_Methods[] = {
  {"vtkColor3f", PyvtkColor3f_vtkColor3f_s2, METH_VARARGS,
   "-@f"},
  {"vtkColor3f", PyvtkColor3f_vtkColor3f_s3, METH_VARARGS,
   "-@P *f"},
  {"vtkColor3f", PyvtkColor3f_vtkColor3f_s5, METH_VARARGS,
   "@W vtkColor3f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkColor3f_vtkColor3f(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor3f_vtkColor3f_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkColor3f_vtkColor3f_s1(self, args);
    case 3:
      return PyvtkColor3f_vtkColor3f_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor3f");
  return nullptr;
}


static const char *PyvtkColor3f_Doc =

  "vtkColor3f() -> vtkColor3f\nC++: vtkColor3f()\nvtkColor3f(scalar:float) -> vtkColor3f\nC++: explicit vtkColor3f(float scalar)\nvtkColor3f(init:(float, float, float)) -> vtkColor3f\nC++: explicit vtkColor3f(const float *init)\nvtkColor3f(r:float, g:float, b:float) -> vtkColor3f\nC++: vtkColor3f(float r, float g, float b)\nvtkColor3f(__a:vtkColor3f) -> vtkColor3f\nC++: vtkColor3f(const &vtkColor3f)\n""\n"
  "vtkColor3f - no description provided.\n\n"
  "Superclass: vtkColor3[float32]\n\n"
;

static PyObject *
PyvtkColor3f_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkColor3f_vtkColor3f(nullptr, args);
}

static void PyvtkColor3f_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkColor3f *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkColor3f_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkColor3f_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkColor3f", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor3f_Delete, // tp_dealloc
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
  PyvtkColor3f_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkColor3f_Doc, // tp_doc
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
  PyvtkColor3f_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkColor3f_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkColor3f(*static_cast<const vtkColor3f*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkColor3f_TypeNew
extern "C" { PyObject *PyvtkColor3f_TypeNew(); }
#define DECLARED_PyvtkColor3f_TypeNew
#endif

#ifndef DECLARED_PyvtkColor3_IfE_TypeNew
extern "C" { PyObject *PyvtkColor3_IfE_TypeNew(); }
#define DECLARED_PyvtkColor3_IfE_TypeNew
#endif
PyObject *PyvtkColor3f_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkColor3f_Type,
    PyvtkColor3f_Methods,
    PyvtkColor3f_vtkColor3f_Methods,
    &PyvtkColor3f_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkColor3_IfE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkColor3d_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkColor3d_vtkColor3d_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3d");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor3d *op = new vtkColor3d();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;

    result = PyVTKSpecialObject_New("vtkColor3d", op);
  }

  return result;
}

static PyObject *
PyvtkColor3d_vtkColor3d_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3d");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor3d *op = new vtkColor3d(temp0);

    result = PyVTKSpecialObject_New("vtkColor3d", op);
  }

  return result;
}

static PyObject *
PyvtkColor3d_vtkColor3d_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3d");

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkColor3d *op = new vtkColor3d(temp0);

    result = PyVTKSpecialObject_New("vtkColor3d", op);
  }

  return result;
}

static PyObject *
PyvtkColor3d_vtkColor3d_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3d");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkColor3d *op = new vtkColor3d(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkColor3d", op);
  }

  return result;
}

static PyObject *
PyvtkColor3d_vtkColor3d_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor3d");

  vtkColor3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3d"))
  {
    vtkColor3d *op = new vtkColor3d(*temp0);

    result = PyVTKSpecialObject_New("vtkColor3d", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor3d_vtkColor3d_Methods[] = {
  {"vtkColor3d", PyvtkColor3d_vtkColor3d_s2, METH_VARARGS,
   "-@d"},
  {"vtkColor3d", PyvtkColor3d_vtkColor3d_s3, METH_VARARGS,
   "-@P *d"},
  {"vtkColor3d", PyvtkColor3d_vtkColor3d_s5, METH_VARARGS,
   "@W vtkColor3d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkColor3d_vtkColor3d(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor3d_vtkColor3d_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkColor3d_vtkColor3d_s1(self, args);
    case 3:
      return PyvtkColor3d_vtkColor3d_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor3d");
  return nullptr;
}


static const char *PyvtkColor3d_Doc =

  "vtkColor3d() -> vtkColor3d\nC++: vtkColor3d()\nvtkColor3d(scalar:float) -> vtkColor3d\nC++: explicit vtkColor3d(double scalar)\nvtkColor3d(init:(float, float, float)) -> vtkColor3d\nC++: explicit vtkColor3d(const double *init)\nvtkColor3d(r:float, g:float, b:float) -> vtkColor3d\nC++: vtkColor3d(double r, double g, double b)\nvtkColor3d(__a:vtkColor3d) -> vtkColor3d\nC++: vtkColor3d(const &vtkColor3d)\n""\n"
  "vtkColor3d - no description provided.\n\n"
  "Superclass: vtkColor3[float64]\n\n"
;

static PyObject *
PyvtkColor3d_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkColor3d_vtkColor3d(nullptr, args);
}

static void PyvtkColor3d_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkColor3d *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkColor3d_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkColor3d_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkColor3d", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor3d_Delete, // tp_dealloc
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
  PyvtkColor3d_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkColor3d_Doc, // tp_doc
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
  PyvtkColor3d_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkColor3d_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkColor3d(*static_cast<const vtkColor3d*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkColor3d_TypeNew
extern "C" { PyObject *PyvtkColor3d_TypeNew(); }
#define DECLARED_PyvtkColor3d_TypeNew
#endif

#ifndef DECLARED_PyvtkColor3_IdE_TypeNew
extern "C" { PyObject *PyvtkColor3_IdE_TypeNew(); }
#define DECLARED_PyvtkColor3_IdE_TypeNew
#endif
PyObject *PyvtkColor3d_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkColor3d_Type,
    PyvtkColor3d_Methods,
    PyvtkColor3d_vtkColor3d_Methods,
    &PyvtkColor3d_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkColor3_IdE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkColor4ub_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkColor4ub_vtkColor4ub_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4ub");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor4ub *op = new vtkColor4ub();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkColor4ub", op);
  }

  return result;
}

static PyObject *
PyvtkColor4ub_vtkColor4ub_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4ub");

  const size_t size0 = 4;
  unsigned char temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkColor4ub *op = new vtkColor4ub(temp0);

    result = PyVTKSpecialObject_New("vtkColor4ub", op);
  }

  return result;
}

static PyObject *
PyvtkColor4ub_vtkColor4ub_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4ub");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor4ub *op = new vtkColor4ub(temp0);

    result = PyVTKSpecialObject_New("vtkColor4ub", op);
  }

  return result;
}

static PyObject *
PyvtkColor4ub_vtkColor4ub_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4ub");

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3 = 255;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkColor4ub *op = new vtkColor4ub(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkColor4ub", op);
  }

  return result;
}

static PyObject *
PyvtkColor4ub_vtkColor4ub_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4ub");

  vtkColor3ub *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3ub"))
  {
    vtkColor4ub *op = new vtkColor4ub(*temp0);

    result = PyVTKSpecialObject_New("vtkColor4ub", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkColor4ub_vtkColor4ub_s6(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4ub");

  vtkColor4ub *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4ub"))
  {
    vtkColor4ub *op = new vtkColor4ub(*temp0);

    result = PyVTKSpecialObject_New("vtkColor4ub", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor4ub_vtkColor4ub_Methods[] = {
  {"vtkColor4ub", PyvtkColor4ub_vtkColor4ub_s2, METH_VARARGS,
   "-@P *B"},
  {"vtkColor4ub", PyvtkColor4ub_vtkColor4ub_s3, METH_VARARGS,
   "-@i"},
  {"vtkColor4ub", PyvtkColor4ub_vtkColor4ub_s5, METH_VARARGS,
   "@W vtkColor3ub"},
  {"vtkColor4ub", PyvtkColor4ub_vtkColor4ub_s6, METH_VARARGS,
   "@W vtkColor4ub"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkColor4ub_vtkColor4ub(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor4ub_vtkColor4ub_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkColor4ub_vtkColor4ub_s1(self, args);
    case 3:
    case 4:
      return PyvtkColor4ub_vtkColor4ub_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor4ub");
  return nullptr;
}


static const char *PyvtkColor4ub_Doc =

  "vtkColor4ub() -> vtkColor4ub\nC++: vtkColor4ub()\nvtkColor4ub(init:(int, int, int, int)) -> vtkColor4ub\nC++: explicit vtkColor4ub(const unsigned char *init)\nvtkColor4ub(hexSigned:int) -> vtkColor4ub\nC++: explicit vtkColor4ub(int hexSigned)\nvtkColor4ub(r:int, g:int, b:int, a:int=255) -> vtkColor4ub\nC++: vtkColor4ub(unsigned char r, unsigned char g, unsigned char b,\n    unsigned char a=255)\nvtkColor4ub(c:vtkColor3ub) -> vtkColor4ub\nC++: vtkColor4ub(const vtkColor3ub &c)\nvtkColor4ub(__a:vtkColor4ub) -> vtkColor4ub\nC++: vtkColor4ub(const &vtkColor4ub)\n""\n"
  "vtkColor4ub - no description provided.\n\n"
  "Superclass: vtkColor4[uint8]\n\n"
;

static PyObject *
PyvtkColor4ub_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkColor4ub_vtkColor4ub(nullptr, args);
}

static void PyvtkColor4ub_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkColor4ub *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkColor4ub_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkColor4ub_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkColor4ub", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor4ub_Delete, // tp_dealloc
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
  PyvtkColor4ub_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkColor4ub_Doc, // tp_doc
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
  PyvtkColor4ub_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkColor4ub_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkColor4ub(*static_cast<const vtkColor4ub*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkColor4ub_TypeNew
extern "C" { PyObject *PyvtkColor4ub_TypeNew(); }
#define DECLARED_PyvtkColor4ub_TypeNew
#endif

#ifndef DECLARED_PyvtkColor4_IhE_TypeNew
extern "C" { PyObject *PyvtkColor4_IhE_TypeNew(); }
#define DECLARED_PyvtkColor4_IhE_TypeNew
#endif
PyObject *PyvtkColor4ub_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkColor4ub_Type,
    PyvtkColor4ub_Methods,
    PyvtkColor4ub_vtkColor4ub_Methods,
    &PyvtkColor4ub_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkColor4_IhE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkColor4f_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkColor4f_vtkColor4f_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4f");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor4f *op = new vtkColor4f();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkColor4f", op);
  }

  return result;
}

static PyObject *
PyvtkColor4f_vtkColor4f_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4f");

  float temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor4f *op = new vtkColor4f(temp0);

    result = PyVTKSpecialObject_New("vtkColor4f", op);
  }

  return result;
}

static PyObject *
PyvtkColor4f_vtkColor4f_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4f");

  const size_t size0 = 4;
  float temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkColor4f *op = new vtkColor4f(temp0);

    result = PyVTKSpecialObject_New("vtkColor4f", op);
  }

  return result;
}

static PyObject *
PyvtkColor4f_vtkColor4f_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4f");

  float temp0;
  float temp1;
  float temp2;
  float temp3 = 1.0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkColor4f *op = new vtkColor4f(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkColor4f", op);
  }

  return result;
}

static PyObject *
PyvtkColor4f_vtkColor4f_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4f");

  vtkColor4f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4f"))
  {
    vtkColor4f *op = new vtkColor4f(*temp0);

    result = PyVTKSpecialObject_New("vtkColor4f", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor4f_vtkColor4f_Methods[] = {
  {"vtkColor4f", PyvtkColor4f_vtkColor4f_s2, METH_VARARGS,
   "-@f"},
  {"vtkColor4f", PyvtkColor4f_vtkColor4f_s3, METH_VARARGS,
   "-@P *f"},
  {"vtkColor4f", PyvtkColor4f_vtkColor4f_s5, METH_VARARGS,
   "@W vtkColor4f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkColor4f_vtkColor4f(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor4f_vtkColor4f_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkColor4f_vtkColor4f_s1(self, args);
    case 3:
    case 4:
      return PyvtkColor4f_vtkColor4f_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor4f");
  return nullptr;
}


static const char *PyvtkColor4f_Doc =

  "vtkColor4f() -> vtkColor4f\nC++: vtkColor4f()\nvtkColor4f(scalar:float) -> vtkColor4f\nC++: explicit vtkColor4f(float scalar)\nvtkColor4f(init:(float, float, float, float)) -> vtkColor4f\nC++: explicit vtkColor4f(const float *init)\nvtkColor4f(r:float, g:float, b:float, a:float=1.0) -> vtkColor4f\nC++: vtkColor4f(float r, float g, float b, float a=1.0)\nvtkColor4f(__a:vtkColor4f) -> vtkColor4f\nC++: vtkColor4f(const &vtkColor4f)\n""\n"
  "vtkColor4f - no description provided.\n\n"
  "Superclass: vtkColor4[float32]\n\n"
;

static PyObject *
PyvtkColor4f_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkColor4f_vtkColor4f(nullptr, args);
}

static void PyvtkColor4f_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkColor4f *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkColor4f_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkColor4f_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkColor4f", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor4f_Delete, // tp_dealloc
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
  PyvtkColor4f_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkColor4f_Doc, // tp_doc
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
  PyvtkColor4f_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkColor4f_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkColor4f(*static_cast<const vtkColor4f*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkColor4f_TypeNew
extern "C" { PyObject *PyvtkColor4f_TypeNew(); }
#define DECLARED_PyvtkColor4f_TypeNew
#endif

#ifndef DECLARED_PyvtkColor4_IfE_TypeNew
extern "C" { PyObject *PyvtkColor4_IfE_TypeNew(); }
#define DECLARED_PyvtkColor4_IfE_TypeNew
#endif
PyObject *PyvtkColor4f_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkColor4f_Type,
    PyvtkColor4f_Methods,
    PyvtkColor4f_vtkColor4f_Methods,
    &PyvtkColor4f_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkColor4_IfE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkColor4d_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkColor4d_vtkColor4d_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4d");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor4d *op = new vtkColor4d();
    (*op)[0] = 0;
    (*op)[1] = 0;
    (*op)[2] = 0;
    (*op)[3] = 0;

    result = PyVTKSpecialObject_New("vtkColor4d", op);
  }

  return result;
}

static PyObject *
PyvtkColor4d_vtkColor4d_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4d");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor4d *op = new vtkColor4d(temp0);

    result = PyVTKSpecialObject_New("vtkColor4d", op);
  }

  return result;
}

static PyObject *
PyvtkColor4d_vtkColor4d_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4d");

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkColor4d *op = new vtkColor4d(temp0);

    result = PyVTKSpecialObject_New("vtkColor4d", op);
  }

  return result;
}

static PyObject *
PyvtkColor4d_vtkColor4d_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4d");

  double temp0;
  double temp1;
  double temp2;
  double temp3 = 1.0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkColor4d *op = new vtkColor4d(temp0, temp1, temp2, temp3);

    result = PyVTKSpecialObject_New("vtkColor4d", op);
  }

  return result;
}

static PyObject *
PyvtkColor4d_vtkColor4d_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkColor4d");

  vtkColor4d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4d"))
  {
    vtkColor4d *op = new vtkColor4d(*temp0);

    result = PyVTKSpecialObject_New("vtkColor4d", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkColor4d_vtkColor4d_Methods[] = {
  {"vtkColor4d", PyvtkColor4d_vtkColor4d_s2, METH_VARARGS,
   "-@d"},
  {"vtkColor4d", PyvtkColor4d_vtkColor4d_s3, METH_VARARGS,
   "-@P *d"},
  {"vtkColor4d", PyvtkColor4d_vtkColor4d_s5, METH_VARARGS,
   "@W vtkColor4d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkColor4d_vtkColor4d(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkColor4d_vtkColor4d_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkColor4d_vtkColor4d_s1(self, args);
    case 3:
    case 4:
      return PyvtkColor4d_vtkColor4d_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkColor4d");
  return nullptr;
}


static const char *PyvtkColor4d_Doc =

  "vtkColor4d() -> vtkColor4d\nC++: vtkColor4d()\nvtkColor4d(scalar:float) -> vtkColor4d\nC++: explicit vtkColor4d(double scalar)\nvtkColor4d(init:(float, float, float, float)) -> vtkColor4d\nC++: explicit vtkColor4d(const double *init)\nvtkColor4d(r:float, g:float, b:float, a:float=1.0) -> vtkColor4d\nC++: vtkColor4d(double r, double g, double b, double a=1.0)\nvtkColor4d(__a:vtkColor4d) -> vtkColor4d\nC++: vtkColor4d(const &vtkColor4d)\n""\n"
  "vtkColor4d - no description provided.\n\n"
  "Superclass: vtkColor4[float64]\n\n"
;

static PyObject *
PyvtkColor4d_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkColor4d_vtkColor4d(nullptr, args);
}

static void PyvtkColor4d_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkColor4d *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkColor4d_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkColor4d_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkColor4d", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkColor4d_Delete, // tp_dealloc
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
  PyvtkColor4d_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkColor4d_Doc, // tp_doc
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
  PyvtkColor4d_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkColor4d_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkColor4d(*static_cast<const vtkColor4d*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkColor4d_TypeNew
extern "C" { PyObject *PyvtkColor4d_TypeNew(); }
#define DECLARED_PyvtkColor4d_TypeNew
#endif

#ifndef DECLARED_PyvtkColor4_IdE_TypeNew
extern "C" { PyObject *PyvtkColor4_IdE_TypeNew(); }
#define DECLARED_PyvtkColor4_IdE_TypeNew
#endif
PyObject *PyvtkColor4d_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkColor4d_Type,
    PyvtkColor4d_Methods,
    PyvtkColor4d_vtkColor4d_Methods,
    &PyvtkColor4d_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkColor4_IdE_TypeNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkColor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkColor3_TemplateNew();

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

  if (o && PyDict_SetItemString(dict, "vtkColor3", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkColor4_TemplateNew();

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

  if (o && PyDict_SetItemString(dict, "vtkColor4", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkColor3ub_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkColor3ub", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkColor3f_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkColor3f", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkColor3d_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkColor3d", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkColor4ub_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkColor4ub", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkColor4f_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkColor4f", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkColor4d_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkColor4d", o) != 0)
  {
    Py_DECREF(o);
  }

}

