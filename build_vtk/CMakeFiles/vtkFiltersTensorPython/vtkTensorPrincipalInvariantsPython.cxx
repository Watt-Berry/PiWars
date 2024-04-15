// python wrapper for vtkTensorPrincipalInvariants
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTensorPrincipalInvariants.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTensorPrincipalInvariants(PyObject *dict); }
extern "C" { PyObject *PyvtkTensorPrincipalInvariants_ClassNew(); }


static PyObject *
PyvtkTensorPrincipalInvariants_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTensorPrincipalInvariants::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorPrincipalInvariants_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorPrincipalInvariants *op = static_cast<vtkTensorPrincipalInvariants *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTensorPrincipalInvariants::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorPrincipalInvariants_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTensorPrincipalInvariants *tempr = vtkTensorPrincipalInvariants::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorPrincipalInvariants_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorPrincipalInvariants *op = static_cast<vtkTensorPrincipalInvariants *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTensorPrincipalInvariants *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTensorPrincipalInvariants::NewInstance());

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
PyvtkTensorPrincipalInvariants_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTensorPrincipalInvariants::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorPrincipalInvariants_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorPrincipalInvariants *op = static_cast<vtkTensorPrincipalInvariants *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTensorPrincipalInvariants::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorPrincipalInvariants_GetScaleVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorPrincipalInvariants *op = static_cast<vtkTensorPrincipalInvariants *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaleVectors() :
      op->vtkTensorPrincipalInvariants::GetScaleVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorPrincipalInvariants_SetScaleVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorPrincipalInvariants *op = static_cast<vtkTensorPrincipalInvariants *>(vp);

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
      op->vtkTensorPrincipalInvariants::SetScaleVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorPrincipalInvariants_GetPointDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorPrincipalInvariants *op = static_cast<vtkTensorPrincipalInvariants *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPointDataArraySelection() :
      op->vtkTensorPrincipalInvariants::GetPointDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorPrincipalInvariants_GetCellDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorPrincipalInvariants *op = static_cast<vtkTensorPrincipalInvariants *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetCellDataArraySelection() :
      op->vtkTensorPrincipalInvariants::GetCellDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorPrincipalInvariants_GetSigmaValueArrayName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSigmaValueArrayName");

  std::string temp0;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = vtkTensorPrincipalInvariants::GetSigmaValueArrayName(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorPrincipalInvariants_GetSigmaVectorArrayName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSigmaVectorArrayName");

  std::string temp0;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = vtkTensorPrincipalInvariants::GetSigmaVectorArrayName(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTensorPrincipalInvariants_Methods[] = {
  {"IsTypeOf", PyvtkTensorPrincipalInvariants_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTensorPrincipalInvariants_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTensorPrincipalInvariants_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTensorPrincipalInvariants\nC++: static vtkTensorPrincipalInvariants *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTensorPrincipalInvariants_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTensorPrincipalInvariants\nC++: vtkTensorPrincipalInvariants *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTensorPrincipalInvariants_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTensorPrincipalInvariants_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetScaleVectors", PyvtkTensorPrincipalInvariants_GetScaleVectors, METH_VARARGS,
   "GetScaleVectors(self) -> bool\nC++: virtual bool GetScaleVectors()\n\nSet/get whether the principal vectors should be scaled with the\nprincipal values. Default is false.\n"},
  {"SetScaleVectors", PyvtkTensorPrincipalInvariants_SetScaleVectors, METH_VARARGS,
   "SetScaleVectors(self, _arg:bool) -> None\nC++: virtual void SetScaleVectors(bool _arg)\n\n"},
  {"GetPointDataArraySelection", PyvtkTensorPrincipalInvariants_GetPointDataArraySelection, METH_VARARGS,
   "GetPointDataArraySelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetPointDataArraySelection()\n\nAccess the point data array selection that specifies which point\ndata arrays should have their principal invariants computed.\n"},
  {"GetCellDataArraySelection", PyvtkTensorPrincipalInvariants_GetCellDataArraySelection, METH_VARARGS,
   "GetCellDataArraySelection(self) -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetCellDataArraySelection()\n\nAccess the cell data array selection that specifies which cell\ndata arrays should have their principal invariants computed.\n"},
  {"GetSigmaValueArrayName", PyvtkTensorPrincipalInvariants_GetSigmaValueArrayName, METH_VARARGS,
   "GetSigmaValueArrayName(baseName:str, index:int) -> str\nC++: static std::string GetSigmaValueArrayName(\n    const std::string &baseName, int index)\n\nReturn the given array name with a suffix for principal values\nattached.\n"},
  {"GetSigmaVectorArrayName", PyvtkTensorPrincipalInvariants_GetSigmaVectorArrayName, METH_VARARGS,
   "GetSigmaVectorArrayName(baseName:str, index:int) -> str\nC++: static std::string GetSigmaVectorArrayName(\n    const std::string &baseName, int index)\n\nReturn the given array name with a suffix for principal vectors\nattached.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTensorPrincipalInvariants_Doc =
  "vtkTensorPrincipalInvariants - Compute principal values and\ndirections from symmetric tensor\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "This filter computes principal values and vectors of symmetric\n"
  "tensors. The principal values are ordered from largest to smallest.\n"
  "The principal vectors can be scaled with the principal values.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTensorPrincipalInvariants_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersTensor.vtkTensorPrincipalInvariants", // tp_name
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
  PyvtkTensorPrincipalInvariants_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTensorPrincipalInvariants_StaticNew()
{
  return vtkTensorPrincipalInvariants::New();
}

PyObject *PyvtkTensorPrincipalInvariants_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTensorPrincipalInvariants_Type, PyvtkTensorPrincipalInvariants_Methods,
    "vtkTensorPrincipalInvariants",
 &PyvtkTensorPrincipalInvariants_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTensorPrincipalInvariants(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTensorPrincipalInvariants_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTensorPrincipalInvariants", o) != 0)
  {
    Py_DECREF(o);
  }

}

