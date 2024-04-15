// python wrapper for vtkYieldCriteria
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkYieldCriteria.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkYieldCriteria(PyObject *dict); }
extern "C" { PyObject *PyvtkYieldCriteria_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkYieldCriteria_Criterion_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersTensor.vtkYieldCriteria.Criterion", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkYieldCriteria_Criterion_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkYieldCriteria_Criterion_Type, static_cast<int>(val));
}


static PyObject *
PyvtkYieldCriteria_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkYieldCriteria::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYieldCriteria_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYieldCriteria *op = static_cast<vtkYieldCriteria *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkYieldCriteria::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYieldCriteria_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkYieldCriteria *tempr = vtkYieldCriteria::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYieldCriteria_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYieldCriteria *op = static_cast<vtkYieldCriteria *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkYieldCriteria *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkYieldCriteria::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(nullptr);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
    else if (tempr != nullptr)
    {
      ap.DeleteVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYieldCriteria_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkYieldCriteria::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYieldCriteria_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYieldCriteria *op = static_cast<vtkYieldCriteria *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkYieldCriteria::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYieldCriteria_GetScaleVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYieldCriteria *op = static_cast<vtkYieldCriteria *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaleVectors() :
      op->vtkYieldCriteria::GetScaleVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYieldCriteria_SetScaleVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYieldCriteria *op = static_cast<vtkYieldCriteria *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleVectors(temp0);
    }
    else
    {
      op->vtkYieldCriteria::SetScaleVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYieldCriteria_GetPointDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYieldCriteria *op = static_cast<vtkYieldCriteria *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPointDataArraySelection() :
      op->vtkYieldCriteria::GetPointDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYieldCriteria_GetCellDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYieldCriteria *op = static_cast<vtkYieldCriteria *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetCellDataArraySelection() :
      op->vtkYieldCriteria::GetCellDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYieldCriteria_GetCriteriaSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCriteriaSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYieldCriteria *op = static_cast<vtkYieldCriteria *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetCriteriaSelection() :
      op->vtkYieldCriteria::GetCriteriaSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkYieldCriteria_Methods[] = {
  {"IsTypeOf", PyvtkYieldCriteria_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkYieldCriteria_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkYieldCriteria_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkYieldCriteria\nC++: static vtkYieldCriteria *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkYieldCriteria_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkYieldCriteria\nC++: vtkYieldCriteria *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkYieldCriteria_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkYieldCriteria_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetScaleVectors", PyvtkYieldCriteria_GetScaleVectors, METH_VARARGS,
   "GetScaleVectors(self) -> bool\nC++: virtual bool GetScaleVectors()\n\nSet/get whether the principal vectors should be scaled with the\nprincipal values. Default is false.\n"},
  {"SetScaleVectors", PyvtkYieldCriteria_SetScaleVectors, METH_VARARGS,
   "SetScaleVectors(self, _arg:bool) -> None\nC++: virtual void SetScaleVectors(bool _arg)\n\n"},
  {"GetPointDataArraySelection", PyvtkYieldCriteria_GetPointDataArraySelection, METH_VARARGS,
   "GetPointDataArraySelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetPointDataArraySelection()\n\nAccess the point data array selection that specifies which point\ndata arrays should have their yield criteria computed.\n"},
  {"GetCellDataArraySelection", PyvtkYieldCriteria_GetCellDataArraySelection, METH_VARARGS,
   "GetCellDataArraySelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetCellDataArraySelection()\n\nAccess the cell data array selection that specifies which cell\ndata arrays should have their yield criteria computed.\n"},
  {"GetCriteriaSelection", PyvtkYieldCriteria_GetCriteriaSelection, METH_VARARGS,
   "GetCriteriaSelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetCriteriaSelection()\n\nAccess the selection of yield criteria to compute.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkYieldCriteria_Doc =
  "vtkYieldCriteria - Compute principal stress and yield criteria from\nsymmetric tensor\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "This filter computes various yield criteria from symmetric tensors\n"
  "including:\n"
  "- Principal stress values and vectors\n"
  "- Tresca criterion\n"
  "- Von Mises criterion\n\n"
  "The principal values are ordered from largest to smallest.\n"
  "- sigmaN value: Nth principal stress eigenvalue\n"
  "- sigmaN vector: Nth principal stress vector (can be scaled with the\n"
  "  value)\n"
  "- Tresca criterion : |sigma3 - sigma1|\n"
  "- Von Mises criterion: sqrt( (sigma1 - sigma2)^2 + (sigma2 -\n"
  "  sigma3)^2 + (sigma1 - sigma3)^2 ) / sqrt(2)\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkYieldCriteria_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersTensor.vtkYieldCriteria", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkYieldCriteria_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static vtkObjectBase *PyvtkYieldCriteria_StaticNew()
{
  return vtkYieldCriteria::New();
}

PyObject *PyvtkYieldCriteria_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkYieldCriteria_Type, PyvtkYieldCriteria_Methods,
    "vtkYieldCriteria",
 &PyvtkYieldCriteria_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkYieldCriteria_Criterion_Type);
  // members of vtkYieldCriteria::Criterion
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkYieldCriteria_Criterion_Type.tp_dict = enumdict;

    typedef vtkYieldCriteria::Criterion cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[3] = {
      { "PrincipalStress", cxx_enum_type::PrincipalStress },
      { "Tresca", cxx_enum_type::Tresca },
      { "VonMises", cxx_enum_type::VonMises },
    };

    for (int c = 0; c < 3; c++)
    {
      enumval = PyvtkYieldCriteria_Criterion_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkYieldCriteria_Criterion_Type, "vtkYieldCriteria.Criterion");

  o = (PyObject *)&PyvtkYieldCriteria_Criterion_Type;
  if (PyDict_SetItemString(d, "Criterion", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkYieldCriteria(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkYieldCriteria_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkYieldCriteria", o) != 0)
  {
    Py_DECREF(o);
  }

}

