// python wrapper for vtkSimpleBondPerceiver
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSimpleBondPerceiver.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSimpleBondPerceiver(PyObject *dict); }
extern "C" { PyObject *PyvtkSimpleBondPerceiver_ClassNew(); }


static PyObject *
PyvtkSimpleBondPerceiver_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSimpleBondPerceiver::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleBondPerceiver_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleBondPerceiver *op = static_cast<vtkSimpleBondPerceiver *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSimpleBondPerceiver::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleBondPerceiver_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSimpleBondPerceiver *tempr = vtkSimpleBondPerceiver::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleBondPerceiver_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleBondPerceiver *op = static_cast<vtkSimpleBondPerceiver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSimpleBondPerceiver *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSimpleBondPerceiver::NewInstance());

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
PyvtkSimpleBondPerceiver_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSimpleBondPerceiver::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleBondPerceiver_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleBondPerceiver *op = static_cast<vtkSimpleBondPerceiver *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSimpleBondPerceiver::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleBondPerceiver_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleBondPerceiver *op = static_cast<vtkSimpleBondPerceiver *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkSimpleBondPerceiver::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleBondPerceiver_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleBondPerceiver *op = static_cast<vtkSimpleBondPerceiver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkSimpleBondPerceiver::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleBondPerceiver_GetIsToleranceAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsToleranceAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleBondPerceiver *op = static_cast<vtkSimpleBondPerceiver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsToleranceAbsolute() :
      op->vtkSimpleBondPerceiver::GetIsToleranceAbsolute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleBondPerceiver_SetIsToleranceAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsToleranceAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleBondPerceiver *op = static_cast<vtkSimpleBondPerceiver *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsToleranceAbsolute(temp0);
    }
    else
    {
      op->vtkSimpleBondPerceiver::SetIsToleranceAbsolute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSimpleBondPerceiver_Methods[] = {
  {"IsTypeOf", PyvtkSimpleBondPerceiver_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSimpleBondPerceiver_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSimpleBondPerceiver_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSimpleBondPerceiver\nC++: static vtkSimpleBondPerceiver *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSimpleBondPerceiver_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSimpleBondPerceiver\nC++: vtkSimpleBondPerceiver *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSimpleBondPerceiver_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSimpleBondPerceiver_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTolerance", PyvtkSimpleBondPerceiver_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(float _arg)\n\nSet/Get the tolerance used in the comparisons. (Default: 0.45)\n"},
  {"GetTolerance", PyvtkSimpleBondPerceiver_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual float GetTolerance()\n\n"},
  {"GetIsToleranceAbsolute", PyvtkSimpleBondPerceiver_GetIsToleranceAbsolute, METH_VARARGS,
   "GetIsToleranceAbsolute(self) -> bool\nC++: virtual bool GetIsToleranceAbsolute()\n\nSet/Get if the tolerance is absolute (i.e. added to radius) or\nnot (i.e. multiplied with radius). Default is true.\n"},
  {"SetIsToleranceAbsolute", PyvtkSimpleBondPerceiver_SetIsToleranceAbsolute, METH_VARARGS,
   "SetIsToleranceAbsolute(self, _arg:bool) -> None\nC++: virtual void SetIsToleranceAbsolute(bool _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSimpleBondPerceiver_Doc =
  "vtkSimpleBondPerceiver - Create a simple guess of a molecule's\ntopology\n\n"
  "Superclass: vtkMoleculeAlgorithm\n\n"
  "vtkSimpleBondPerceiver performs a simple check of all interatomic\n"
  "distances and adds a single bond between atoms that are reasonably\n"
  "close. If the interatomic distance is less than the sum of the two\n"
  "atom's covalent radii plus a tolerance, a single bond is added.\n\n"
  "@warning\n"
  "This algorithm does not consider valences, hybridization,\n"
  "aromaticity, or anything other than atomic separations. It will not\n"
  "produce anything other than single bonds.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSimpleBondPerceiver_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkDomainsChemistry.vtkSimpleBondPerceiver", // tp_name
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
  PyvtkSimpleBondPerceiver_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSimpleBondPerceiver_StaticNew()
{
  return vtkSimpleBondPerceiver::New();
}

PyObject *PyvtkSimpleBondPerceiver_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSimpleBondPerceiver_Type, PyvtkSimpleBondPerceiver_Methods,
    "vtkSimpleBondPerceiver",
 &PyvtkSimpleBondPerceiver_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMoleculeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSimpleBondPerceiver(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSimpleBondPerceiver_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSimpleBondPerceiver", o) != 0)
  {
    Py_DECREF(o);
  }

}

