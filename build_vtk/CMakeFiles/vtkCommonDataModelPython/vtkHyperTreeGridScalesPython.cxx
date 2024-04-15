// python wrapper for vtkHyperTreeGridScales
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkHyperTreeGridScales.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridScales(PyObject *dict); }

static PyObject *
PyvtkHyperTreeGridScales_GetBranchFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchFactor");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkHyperTreeGridScales *op = static_cast<vtkHyperTreeGridScales *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->GetBranchFactor();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridScales_GetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkHyperTreeGridScales *op = static_cast<vtkHyperTreeGridScales *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = op->GetScale(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridScales_GetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkHyperTreeGridScales *op = static_cast<vtkHyperTreeGridScales *>(vp);

  unsigned int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->GetScale(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridScales_GetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGridScales_GetScale_s1(self, args);
    case 2:
      return PyvtkHyperTreeGridScales_GetScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScale");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridScales_GetScaleX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleX");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkHyperTreeGridScales *op = static_cast<vtkHyperTreeGridScales *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = op->GetScaleX(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridScales_GetScaleY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleY");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkHyperTreeGridScales *op = static_cast<vtkHyperTreeGridScales *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = op->GetScaleY(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridScales_GetScaleZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleZ");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkHyperTreeGridScales *op = static_cast<vtkHyperTreeGridScales *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = op->GetScaleZ(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridScales_GetCurrentFailLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentFailLevel");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkHyperTreeGridScales *op = static_cast<vtkHyperTreeGridScales *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = op->GetCurrentFailLevel();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridScales_Methods[] = {
  {"GetBranchFactor", PyvtkHyperTreeGridScales_GetBranchFactor, METH_VARARGS,
   "GetBranchFactor(self) -> float\nC++: double GetBranchFactor()\n\nJB Retourne le scale des mailles du niveau demande\n"},
  {"GetScale", PyvtkHyperTreeGridScales_GetScale, METH_VARARGS,
   "GetScale(self, level:int) -> Pointer\nC++: double *GetScale(unsigned int level)\nGetScale(self, level:int, scale:[float, float, float]) -> None\nC++: void GetScale(unsigned int level, double scale[3])\n\nJB Retourne le scale des mailles du niveau demande\n"},
  {"GetScaleX", PyvtkHyperTreeGridScales_GetScaleX, METH_VARARGS,
   "GetScaleX(self, level:int) -> float\nC++: double GetScaleX(unsigned int level)\n\nJB\n"},
  {"GetScaleY", PyvtkHyperTreeGridScales_GetScaleY, METH_VARARGS,
   "GetScaleY(self, level:int) -> float\nC++: double GetScaleY(unsigned int level)\n\nJB\n"},
  {"GetScaleZ", PyvtkHyperTreeGridScales_GetScaleZ, METH_VARARGS,
   "GetScaleZ(self, level:int) -> float\nC++: double GetScaleZ(unsigned int level)\n\nJB\n"},
  {"GetCurrentFailLevel", PyvtkHyperTreeGridScales_GetCurrentFailLevel, METH_VARARGS,
   "GetCurrentFailLevel(self) -> int\nC++: unsigned int GetCurrentFailLevel()\n\nJB\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkHyperTreeGridScales_vtkHyperTreeGridScales(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkHyperTreeGridScales");

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkHyperTreeGridScales *op = new vtkHyperTreeGridScales(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkHyperTreeGridScales", op);
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridScales_vtkHyperTreeGridScales_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkHyperTreeGridScales_Doc =

  "vtkHyperTreeGridScales(branchfactor:float, scale:(float, float, float)\n    ) -> vtkHyperTreeGridScales\nC++: vtkHyperTreeGridScales(double branchfactor,\n    const double scale[3])\n""\n"
  "vtkHyperTreeGridScales - A specifalized type of vtkHyperTreeGrid for\nthe case when root cells have uniform sizes in each direction *\n\n"
  "@sa\n"
  "vtkHyperTree vtkHyperTreeGrid vtkRectilinearGrid\n\n"
  "@par Thanks: This class was written by Jacques-Bernard Lekien (CEA)\n"
  "This work was supported by Commissariat a l'Energie Atomique CEA,\n"
  "DAM, DIF, F-91297 Arpajon, France.\n\n";

static PyObject *
PyvtkHyperTreeGridScales_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkHyperTreeGridScales_vtkHyperTreeGridScales(nullptr, args);
}

static void PyvtkHyperTreeGridScales_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkHyperTreeGridScales *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkHyperTreeGridScales_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridScales_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkHyperTreeGridScales", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkHyperTreeGridScales_Delete, // tp_dealloc
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
  PyvtkHyperTreeGridScales_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkHyperTreeGridScales_Doc, // tp_doc
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
  PyvtkHyperTreeGridScales_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkHyperTreeGridScales_TypeNew
extern "C" { PyObject *PyvtkHyperTreeGridScales_TypeNew(); }
#define DECLARED_PyvtkHyperTreeGridScales_TypeNew
#endif

PyObject *PyvtkHyperTreeGridScales_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkHyperTreeGridScales_Type,
    PyvtkHyperTreeGridScales_Methods,
    PyvtkHyperTreeGridScales_vtkHyperTreeGridScales_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridScales(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridScales_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridScales", o) != 0)
  {
    Py_DECREF(o);
  }

}

