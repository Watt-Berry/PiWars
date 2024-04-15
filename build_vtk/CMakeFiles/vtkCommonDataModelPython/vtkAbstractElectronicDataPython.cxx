// python wrapper for vtkAbstractElectronicData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAbstractElectronicData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractElectronicData(PyObject *dict); }
extern "C" { PyObject *PyvtkAbstractElectronicData_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif

static PyObject *
PyvtkAbstractElectronicData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractElectronicData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractElectronicData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractElectronicData *tempr = vtkAbstractElectronicData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractElectronicData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractElectronicData::NewInstance());

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
PyvtkAbstractElectronicData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAbstractElectronicData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAbstractElectronicData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkAbstractElectronicData::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetNumberOfMOs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMOs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    long long tempr = op->GetNumberOfMOs();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetNumberOfElectrons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElectrons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    long long tempr = op->GetNumberOfElectrons();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetMO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = op->GetMO(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetElectronDensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElectronDensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = op->GetElectronDensity();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetHOMO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHOMO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetHOMO() :
      op->vtkAbstractElectronicData::GetHOMO());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetLUMO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLUMO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetLUMO() :
      op->vtkAbstractElectronicData::GetLUMO());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetHOMOOrbitalNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHOMOOrbitalNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetHOMOOrbitalNumber() :
      op->vtkAbstractElectronicData::GetHOMOOrbitalNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetLUMOOrbitalNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLUMOOrbitalNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetLUMOOrbitalNumber() :
      op->vtkAbstractElectronicData::GetLUMOOrbitalNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_IsHOMO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsHOMO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsHOMO(temp0) :
      op->vtkAbstractElectronicData::IsHOMO(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_IsLUMO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLUMO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsLUMO(temp0) :
      op->vtkAbstractElectronicData::IsLUMO(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkAbstractElectronicData::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractElectronicData_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractElectronicData *op = static_cast<vtkAbstractElectronicData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkAbstractElectronicData::GetPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractElectronicData_Methods[] = {
  {"IsTypeOf", PyvtkAbstractElectronicData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractElectronicData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractElectronicData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAbstractElectronicData\nC++: static vtkAbstractElectronicData *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractElectronicData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAbstractElectronicData\nC++: vtkAbstractElectronicData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAbstractElectronicData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAbstractElectronicData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataObjectType", PyvtkAbstractElectronicData_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturns `VTK_ABSTRACT_ELECTRONIC_DATA`.\n"},
  {"GetNumberOfMOs", PyvtkAbstractElectronicData_GetNumberOfMOs, METH_VARARGS,
   "GetNumberOfMOs(self) -> int\nC++: virtual vtkIdType GetNumberOfMOs()\n\nReturns the number of molecular orbitals available.\n"},
  {"GetNumberOfElectrons", PyvtkAbstractElectronicData_GetNumberOfElectrons, METH_VARARGS,
   "GetNumberOfElectrons(self) -> int\nC++: virtual vtkIdType GetNumberOfElectrons()\n\nReturns the number of electrons in the molecule.\n"},
  {"GetMO", PyvtkAbstractElectronicData_GetMO, METH_VARARGS,
   "GetMO(self, orbitalNumber:int) -> vtkImageData\nC++: virtual vtkImageData *GetMO(vtkIdType orbitalNumber)\n\nReturns the vtkImageData for the requested molecular orbital.\n"},
  {"GetElectronDensity", PyvtkAbstractElectronicData_GetElectronDensity, METH_VARARGS,
   "GetElectronDensity(self) -> vtkImageData\nC++: virtual vtkImageData *GetElectronDensity()\n\nReturns vtkImageData for the molecule's electron density. The\ndata will be calculated when first requested, and cached for\nlater requests.\n"},
  {"GetHOMO", PyvtkAbstractElectronicData_GetHOMO, METH_VARARGS,
   "GetHOMO(self) -> vtkImageData\nC++: vtkImageData *GetHOMO()\n\nReturns vtkImageData for the Highest Occupied Molecular Orbital.\n"},
  {"GetLUMO", PyvtkAbstractElectronicData_GetLUMO, METH_VARARGS,
   "GetLUMO(self) -> vtkImageData\nC++: vtkImageData *GetLUMO()\n\nReturns vtkImageData for the Lowest Unoccupied Molecular Orbital.\n"},
  {"GetHOMOOrbitalNumber", PyvtkAbstractElectronicData_GetHOMOOrbitalNumber, METH_VARARGS,
   "GetHOMOOrbitalNumber(self) -> int\nC++: vtkIdType GetHOMOOrbitalNumber()\n\nReturns the orbital number of the Highest Occupied Molecular\nOrbital.\n"},
  {"GetLUMOOrbitalNumber", PyvtkAbstractElectronicData_GetLUMOOrbitalNumber, METH_VARARGS,
   "GetLUMOOrbitalNumber(self) -> int\nC++: vtkIdType GetLUMOOrbitalNumber()\n\nReturns the orbital number of the Lowest Unoccupied Molecular\nOrbital.\n"},
  {"IsHOMO", PyvtkAbstractElectronicData_IsHOMO, METH_VARARGS,
   "IsHOMO(self, orbitalNumber:int) -> bool\nC++: bool IsHOMO(vtkIdType orbitalNumber)\n\nReturns true if the given orbital number is the Highest Occupied\nMolecular Orbital, false otherwise.\n"},
  {"IsLUMO", PyvtkAbstractElectronicData_IsLUMO, METH_VARARGS,
   "IsLUMO(self, orbitalNumber:int) -> bool\nC++: bool IsLUMO(vtkIdType orbitalNumber)\n\nReturns true if the given orbital number is the Lowest Unoccupied\nMolecular Orbital, false otherwise.\n"},
  {"DeepCopy", PyvtkAbstractElectronicData_DeepCopy, METH_VARARGS,
   "DeepCopy(self, obj:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *obj) override;\n\nDeep copies the data object into this.\n"},
  {"GetPadding", PyvtkAbstractElectronicData_GetPadding, METH_VARARGS,
   "GetPadding(self) -> float\nC++: virtual double GetPadding()\n\nGet the padding between the molecule and the cube boundaries.\nThis is used to determine the dataset's bounds.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAbstractElectronicData_Doc =
  "vtkAbstractElectronicData - Provides access to and storage of\nchemical electronic data\n\n"
  "Superclass: vtkDataObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractElectronicData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkAbstractElectronicData", // tp_name
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
  PyvtkAbstractElectronicData_Doc, // tp_doc
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

PyObject *PyvtkAbstractElectronicData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAbstractElectronicData_Type, PyvtkAbstractElectronicData_Methods,
    "vtkAbstractElectronicData",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractElectronicData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractElectronicData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractElectronicData", o) != 0)
  {
    Py_DECREF(o);
  }

}

