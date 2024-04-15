// python wrapper for vtkPLY
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPLY.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPLY(PyObject *dict); }

static PyObject *
PyvtkPLY_equal_strings(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "equal_strings");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkPLY::equal_strings(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLY_store_item(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "store_item");

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  int temp1;
  int temp2;
  unsigned int temp3;
  double temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkPLY::store_item(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLY_get_stored_item(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "get_stored_item");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<unsigned int> store3(2*size3);
  unsigned int *temp3 = store3.Data();
  unsigned int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    vtkPLY::get_stored_item(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkPLY_get_item_value(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "get_item_value");

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = vtkPLY::get_item_value(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLY_get_ascii_item(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "get_ascii_item");

  vtkResourceParser *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<unsigned int> store3(2*size3);
  unsigned int *temp3 = store3.Data();
  unsigned int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkResourceParser") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    vtkPLY::get_ascii_item(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLY_my_alloc(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "my_alloc");

  size_t temp0;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    void  *tempr = vtkPLY::my_alloc(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLY_get_prop_type(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "get_prop_type");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPLY::get_prop_type(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPLY_Methods[] = {
  {"equal_strings", PyvtkPLY_equal_strings, METH_VARARGS,
   "equal_strings(__a:str, __b:str) -> bool\nC++: static bool equal_strings(const char *, const char *)\n\n"},
  {"store_item", PyvtkPLY_store_item, METH_VARARGS,
   "store_item(__a:str, __b:int, __c:int, __d:int, __e:float) -> None\nC++: static void store_item(char *, int, int, unsigned int,\n    double)\n\n"},
  {"get_stored_item", PyvtkPLY_get_stored_item, METH_VARARGS,
   "get_stored_item(__a:Pointer, __b:int, __c:[int, ...], __d:[int,\n    ...], __e:[float, ...]) -> None\nC++: static void get_stored_item(const void *, int, int *,\n    unsigned int *, double *)\n\n"},
  {"get_item_value", PyvtkPLY_get_item_value, METH_VARARGS,
   "get_item_value(__a:str, __b:int) -> float\nC++: static double get_item_value(const char *, int)\n\n"},
  {"get_ascii_item", PyvtkPLY_get_ascii_item, METH_VARARGS,
   "get_ascii_item(__a:vtkResourceParser, __b:int, __c:[int, ...],\n    __d:[int, ...], __e:[float, ...]) -> None\nC++: static void get_ascii_item(vtkResourceParser *, int, int *,\n    unsigned int *, double *)\n\n"},
  {"my_alloc", PyvtkPLY_my_alloc, METH_VARARGS,
   "my_alloc(__a:int, __b:int, __c:str) -> Pointer\nC++: static void *my_alloc(size_t, int, const char *)\n\n"},
  {"get_prop_type", PyvtkPLY_get_prop_type, METH_VARARGS,
   "get_prop_type(__a:str) -> int\nC++: static int get_prop_type(const char *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkPLY_vtkPLY_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPLY");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPLY *op = new vtkPLY();

    result = PyVTKSpecialObject_New("vtkPLY", op);
  }

  return result;
}

static PyObject *
PyvtkPLY_vtkPLY_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPLY");

  vtkPLY *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPLY"))
  {
    vtkPLY *op = new vtkPLY(*temp0);

    result = PyVTKSpecialObject_New("vtkPLY", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPLY_vtkPLY_Methods[] = {
  {"vtkPLY", PyvtkPLY_vtkPLY_s2, METH_VARARGS,
   "@W vtkPLY"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPLY_vtkPLY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPLY_vtkPLY_s1(self, args);
    case 1:
      return PyvtkPLY_vtkPLY_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkPLY");
  return nullptr;
}


static const char *PyvtkPLY_Doc =

  "vtkPLY() -> vtkPLY\nC++: vtkPLY()\nvtkPLY(__a:vtkPLY) -> vtkPLY\nC++: vtkPLY(const &vtkPLY)\n""\n"
  "vtkPLY - a modified version of the PLY 1.1 library\n\n"
  "vtkPLY is a modified version of the PLY 1.1 library. The library has\n"
  "been modified by wrapping in a class (to minimize global symbols); to\n"
  "take advantage of functionality generally not available through the\n"
  "PLY library API; and to correct problems with the PLY library.\n\n"
  "The original distribution was taken from the Stanford University PLY\n"
  "file format release 1.1 (see\n"
  "http://graphics.stanford.edu/data/3Dscanrep/).\n\n"
  "@sa\n"
  "vtkPLYWriter vtkPLYReader\n\n";

static PyObject *
PyvtkPLY_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkPLY_vtkPLY(nullptr, args);
}

static void PyvtkPLY_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPLY *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkPLY_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPLY_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOPLY.vtkPLY", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPLY_Delete, // tp_dealloc
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
  PyvtkPLY_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPLY_Doc, // tp_doc
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
  PyvtkPLY_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkPLY_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkPLY(*static_cast<const vtkPLY*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkPLY_TypeNew
extern "C" { PyObject *PyvtkPLY_TypeNew(); }
#define DECLARED_PyvtkPLY_TypeNew
#endif

PyObject *PyvtkPLY_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkPLY_Type,
    PyvtkPLY_Methods,
    PyvtkPLY_vtkPLY_Methods,
    &PyvtkPLY_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPLY(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPLY_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPLY", o) != 0)
  {
    Py_DECREF(o);
  }

}

