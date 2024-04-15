// python wrapper for vtkProgrammableElectronicData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkProgrammableElectronicData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProgrammableElectronicData(PyObject *dict); }
extern "C" { PyObject *PyvtkProgrammableElectronicData_ClassNew(); }


static PyObject *
PyvtkProgrammableElectronicData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProgrammableElectronicData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProgrammableElectronicData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProgrammableElectronicData *tempr = vtkProgrammableElectronicData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProgrammableElectronicData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProgrammableElectronicData::NewInstance());

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
PyvtkProgrammableElectronicData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProgrammableElectronicData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProgrammableElectronicData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_GetNumberOfMOs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMOs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfMOs() :
      op->vtkProgrammableElectronicData::GetNumberOfMOs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_SetNumberOfMOs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfMOs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfMOs(temp0);
    }
    else
    {
      op->vtkProgrammableElectronicData::SetNumberOfMOs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_GetNumberOfElectrons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElectrons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfElectrons() :
      op->vtkProgrammableElectronicData::GetNumberOfElectrons());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_SetNumberOfElectrons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfElectrons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfElectrons(temp0);
    }
    else
    {
      op->vtkProgrammableElectronicData::SetNumberOfElectrons(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_GetMO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetMO(temp0) :
      op->vtkProgrammableElectronicData::GetMO(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_SetMO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  long long temp0;
  vtkImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetMO(temp0, temp1);
    }
    else
    {
      op->vtkProgrammableElectronicData::SetMO(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_GetElectronDensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElectronDensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetElectronDensity() :
      op->vtkProgrammableElectronicData::GetElectronDensity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_SetElectronDensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElectronDensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetElectronDensity(temp0);
    }
    else
    {
      op->vtkProgrammableElectronicData::SetElectronDensity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0);
    }
    else
    {
      op->vtkProgrammableElectronicData::SetPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableElectronicData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableElectronicData *op = static_cast<vtkProgrammableElectronicData *>(vp);

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
      op->vtkProgrammableElectronicData::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProgrammableElectronicData_Methods[] = {
  {"IsTypeOf", PyvtkProgrammableElectronicData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProgrammableElectronicData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProgrammableElectronicData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkProgrammableElectronicData\nC++: static vtkProgrammableElectronicData *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProgrammableElectronicData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProgrammableElectronicData\nC++: vtkProgrammableElectronicData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProgrammableElectronicData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProgrammableElectronicData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfMOs", PyvtkProgrammableElectronicData_GetNumberOfMOs, METH_VARARGS,
   "GetNumberOfMOs(self) -> int\nC++: vtkIdType GetNumberOfMOs() override;\n\nGet/Set the number of molecular orbitals. Setting this will\nresize this internal array of MOs.\n"},
  {"SetNumberOfMOs", PyvtkProgrammableElectronicData_SetNumberOfMOs, METH_VARARGS,
   "SetNumberOfMOs(self, __a:int) -> None\nC++: virtual void SetNumberOfMOs(vtkIdType)\n\n"},
  {"GetNumberOfElectrons", PyvtkProgrammableElectronicData_GetNumberOfElectrons, METH_VARARGS,
   "GetNumberOfElectrons(self) -> int\nC++: vtkIdType GetNumberOfElectrons() override;\n\nGet/Set the number of electrons in the molecule. Needed for\nHOMO/LUMO convenience functions\n"},
  {"SetNumberOfElectrons", PyvtkProgrammableElectronicData_SetNumberOfElectrons, METH_VARARGS,
   "SetNumberOfElectrons(self, _arg:int) -> None\nC++: virtual void SetNumberOfElectrons(vtkIdType _arg)\n\n"},
  {"GetMO", PyvtkProgrammableElectronicData_GetMO, METH_VARARGS,
   "GetMO(self, orbitalNumber:int) -> vtkImageData\nC++: vtkImageData *GetMO(vtkIdType orbitalNumber) override;\n\nGet/Set the vtkImageData for the requested molecular orbital.\n"},
  {"SetMO", PyvtkProgrammableElectronicData_SetMO, METH_VARARGS,
   "SetMO(self, orbitalNumber:int, data:vtkImageData) -> None\nC++: void SetMO(vtkIdType orbitalNumber, vtkImageData *data)\n\n"},
  {"GetElectronDensity", PyvtkProgrammableElectronicData_GetElectronDensity, METH_VARARGS,
   "GetElectronDensity(self) -> vtkImageData\nC++: vtkImageData *GetElectronDensity() override;\n\nGet/Set the vtkImageData for the molecule's electron density.\n"},
  {"SetElectronDensity", PyvtkProgrammableElectronicData_SetElectronDensity, METH_VARARGS,
   "SetElectronDensity(self, __a:vtkImageData) -> None\nC++: virtual void SetElectronDensity(vtkImageData *)\n\n"},
  {"SetPadding", PyvtkProgrammableElectronicData_SetPadding, METH_VARARGS,
   "SetPadding(self, _arg:float) -> None\nC++: virtual void SetPadding(double _arg)\n\nSet the padding around the molecule to which the cube extends.\nThis is used to determine the dataset bounds.\n"},
  {"DeepCopy", PyvtkProgrammableElectronicData_DeepCopy, METH_VARARGS,
   "DeepCopy(self, obj:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *obj) override;\n\nDeep copies the data object into this.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkProgrammableElectronicData_Doc =
  "vtkProgrammableElectronicData - Provides access to and storage of\nuser-generated vtkImageData that describes electrons.\n\n"
  "Superclass: vtkAbstractElectronicData\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProgrammableElectronicData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkDomainsChemistry.vtkProgrammableElectronicData", // tp_name
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
  PyvtkProgrammableElectronicData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProgrammableElectronicData_StaticNew()
{
  return vtkProgrammableElectronicData::New();
}

PyObject *PyvtkProgrammableElectronicData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProgrammableElectronicData_Type, PyvtkProgrammableElectronicData_Methods,
    "vtkProgrammableElectronicData",
 &PyvtkProgrammableElectronicData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAbstractElectronicData");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProgrammableElectronicData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProgrammableElectronicData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProgrammableElectronicData", o) != 0)
  {
    Py_DECREF(o);
  }

}

