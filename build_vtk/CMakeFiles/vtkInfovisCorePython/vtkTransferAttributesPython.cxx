// python wrapper for vtkTransferAttributes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTransferAttributes.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTransferAttributes(PyObject *dict); }
extern "C" { PyObject *PyvtkTransferAttributes_ClassNew(); }


static PyObject *
PyvtkTransferAttributes_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransferAttributes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransferAttributes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransferAttributes *tempr = vtkTransferAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransferAttributes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransferAttributes::NewInstance());

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
PyvtkTransferAttributes_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTransferAttributes::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTransferAttributes::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetDirectMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirectMapping(temp0);
    }
    else
    {
      op->vtkTransferAttributes::SetDirectMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetDirectMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDirectMapping() :
      op->vtkTransferAttributes::GetDirectMapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_DirectMappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectMappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectMappingOn();
    }
    else
    {
      op->vtkTransferAttributes::DirectMappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_DirectMappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectMappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectMappingOff();
    }
    else
    {
      op->vtkTransferAttributes::DirectMappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetSourceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSourceArrayName() :
      op->vtkTransferAttributes::GetSourceArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetSourceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSourceArrayName(temp0);
    }
    else
    {
      op->vtkTransferAttributes::SetSourceArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetTargetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTargetArrayName() :
      op->vtkTransferAttributes::GetTargetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetTargetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetArrayName(temp0);
    }
    else
    {
      op->vtkTransferAttributes::SetTargetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetSourceFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSourceFieldType() :
      op->vtkTransferAttributes::GetSourceFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetSourceFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSourceFieldType(temp0);
    }
    else
    {
      op->vtkTransferAttributes::SetSourceFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetTargetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTargetFieldType() :
      op->vtkTransferAttributes::GetTargetFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetTargetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetFieldType(temp0);
    }
    else
    {
      op->vtkTransferAttributes::SetTargetFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_GetDefaultValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetDefaultValue() :
      op->vtkTransferAttributes::GetDefaultValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTransferAttributes_SetDefaultValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetDefaultValue(*temp0);
    }
    else
    {
      op->vtkTransferAttributes::SetDefaultValue(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkTransferAttributes_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransferAttributes *op = static_cast<vtkTransferAttributes *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkTransferAttributes::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTransferAttributes_Methods[] = {
  {"IsTypeOf", PyvtkTransferAttributes_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTransferAttributes_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTransferAttributes_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTransferAttributes\nC++: static vtkTransferAttributes *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTransferAttributes_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTransferAttributes\nC++: vtkTransferAttributes *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTransferAttributes_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTransferAttributes_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDirectMapping", PyvtkTransferAttributes_SetDirectMapping, METH_VARARGS,
   "SetDirectMapping(self, _arg:bool) -> None\nC++: virtual void SetDirectMapping(bool _arg)\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {"GetDirectMapping", PyvtkTransferAttributes_GetDirectMapping, METH_VARARGS,
   "GetDirectMapping(self) -> bool\nC++: virtual bool GetDirectMapping()\n\n"},
  {"DirectMappingOn", PyvtkTransferAttributes_DirectMappingOn, METH_VARARGS,
   "DirectMappingOn(self) -> None\nC++: virtual void DirectMappingOn()\n\n"},
  {"DirectMappingOff", PyvtkTransferAttributes_DirectMappingOff, METH_VARARGS,
   "DirectMappingOff(self) -> None\nC++: virtual void DirectMappingOff()\n\n"},
  {"GetSourceArrayName", PyvtkTransferAttributes_GetSourceArrayName, METH_VARARGS,
   "GetSourceArrayName(self) -> str\nC++: virtual char *GetSourceArrayName()\n\nThe field name to use for storing the source array.\n"},
  {"SetSourceArrayName", PyvtkTransferAttributes_SetSourceArrayName, METH_VARARGS,
   "SetSourceArrayName(self, _arg:str) -> None\nC++: virtual void SetSourceArrayName(const char *_arg)\n\n"},
  {"GetTargetArrayName", PyvtkTransferAttributes_GetTargetArrayName, METH_VARARGS,
   "GetTargetArrayName(self) -> str\nC++: virtual char *GetTargetArrayName()\n\nThe field name to use for storing the source array.\n"},
  {"SetTargetArrayName", PyvtkTransferAttributes_SetTargetArrayName, METH_VARARGS,
   "SetTargetArrayName(self, _arg:str) -> None\nC++: virtual void SetTargetArrayName(const char *_arg)\n\n"},
  {"GetSourceFieldType", PyvtkTransferAttributes_GetSourceFieldType, METH_VARARGS,
   "GetSourceFieldType(self) -> int\nC++: virtual int GetSourceFieldType()\n\nThe source field type for accessing the source array. Valid\nvalues are those from enum vtkDataObject::FieldAssociations.\n"},
  {"SetSourceFieldType", PyvtkTransferAttributes_SetSourceFieldType, METH_VARARGS,
   "SetSourceFieldType(self, _arg:int) -> None\nC++: virtual void SetSourceFieldType(int _arg)\n\n"},
  {"GetTargetFieldType", PyvtkTransferAttributes_GetTargetFieldType, METH_VARARGS,
   "GetTargetFieldType(self) -> int\nC++: virtual int GetTargetFieldType()\n\nThe target field type for accessing the target array. Valid\nvalues are those from enum vtkDataObject::FieldAssociations.\n"},
  {"SetTargetFieldType", PyvtkTransferAttributes_SetTargetFieldType, METH_VARARGS,
   "SetTargetFieldType(self, _arg:int) -> None\nC++: virtual void SetTargetFieldType(int _arg)\n\n"},
  {"GetDefaultValue", PyvtkTransferAttributes_GetDefaultValue, METH_VARARGS,
   "GetDefaultValue(self) -> vtkVariant\nC++: vtkVariant GetDefaultValue()\n\nMethod to get/set the default value.\n"},
  {"SetDefaultValue", PyvtkTransferAttributes_SetDefaultValue, METH_VARARGS,
   "SetDefaultValue(self, value:vtkVariant) -> None\nC++: void SetDefaultValue(vtkVariant value)\n\n"},
  {"FillInputPortInformation", PyvtkTransferAttributes_FillInputPortInformation, METH_VARARGS,
   "FillInputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nSet the input type of the algorithm to vtkGraph.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTransferAttributes_Doc =
  "vtkTransferAttributes - transfer data from a graph representation to\na tree representation using direct mapping or pedigree ids.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "The filter requires both a vtkGraph and vtkTree as input.  The tree\n"
  "vertices must be a superset of the graph vertices.  A common example\n"
  "is when the graph vertices correspond to the leaves of the tree, but\n"
  "the internal vertices of the tree represent groupings of graph\n"
  "vertices.  The algorithm matches the vertices using the array\n"
  "\"PedigreeId\".  The user may alternately set the DirectMapping flag to\n"
  "indicate that the two structures must have directly corresponding\n"
  "offsets (i.e. node i in the graph must correspond to node i in the\n"
  "tree).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTransferAttributes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisCore.vtkTransferAttributes", // tp_name
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
  PyvtkTransferAttributes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransferAttributes_StaticNew()
{
  return vtkTransferAttributes::New();
}

PyObject *PyvtkTransferAttributes_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTransferAttributes_Type, PyvtkTransferAttributes_Methods,
    "vtkTransferAttributes",
 &PyvtkTransferAttributes_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTransferAttributes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransferAttributes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransferAttributes", o) != 0)
  {
    Py_DECREF(o);
  }

}

