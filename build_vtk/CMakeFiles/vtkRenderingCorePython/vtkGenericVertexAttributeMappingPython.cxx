// python wrapper for vtkGenericVertexAttributeMapping
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGenericVertexAttributeMapping.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericVertexAttributeMapping(PyObject *dict); }
extern "C" { PyObject *PyvtkGenericVertexAttributeMapping_ClassNew(); }


static PyObject *
PyvtkGenericVertexAttributeMapping_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericVertexAttributeMapping::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericVertexAttributeMapping::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericVertexAttributeMapping *tempr = vtkGenericVertexAttributeMapping::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericVertexAttributeMapping *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericVertexAttributeMapping::NewInstance());

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
PyvtkGenericVertexAttributeMapping_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGenericVertexAttributeMapping::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGenericVertexAttributeMapping::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_AddMapping_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddMapping(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkGenericVertexAttributeMapping::AddMapping(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericVertexAttributeMapping_AddMapping_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddMapping(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkGenericVertexAttributeMapping::AddMapping(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericVertexAttributeMapping_AddMapping_Methods[] = {
  {"AddMapping", PyvtkGenericVertexAttributeMapping_AddMapping_s1, METH_VARARGS,
   "@zzii"},
  {"AddMapping", PyvtkGenericVertexAttributeMapping_AddMapping_s2, METH_VARARGS,
   "@izii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGenericVertexAttributeMapping_AddMapping(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGenericVertexAttributeMapping_AddMapping_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddMapping");
  return nullptr;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_RemoveMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveMapping(temp0) :
      op->vtkGenericVertexAttributeMapping::RemoveMapping(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_RemoveAllMappings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllMappings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllMappings();
    }
    else
    {
      op->vtkGenericVertexAttributeMapping::RemoveAllMappings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetNumberOfMappings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMappings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfMappings() :
      op->vtkGenericVertexAttributeMapping::GetNumberOfMappings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeName(temp0) :
      op->vtkGenericVertexAttributeMapping::GetAttributeName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetArrayName(temp0) :
      op->vtkGenericVertexAttributeMapping::GetArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation(temp0) :
      op->vtkGenericVertexAttributeMapping::GetFieldAssociation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponent(temp0) :
      op->vtkGenericVertexAttributeMapping::GetComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericVertexAttributeMapping_GetTextureUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericVertexAttributeMapping *op = static_cast<vtkGenericVertexAttributeMapping *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureUnit(temp0) :
      op->vtkGenericVertexAttributeMapping::GetTextureUnit(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericVertexAttributeMapping_Methods[] = {
  {"IsTypeOf", PyvtkGenericVertexAttributeMapping_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericVertexAttributeMapping_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericVertexAttributeMapping_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGenericVertexAttributeMapping\nC++: static vtkGenericVertexAttributeMapping *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericVertexAttributeMapping_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGenericVertexAttributeMapping\nC++: vtkGenericVertexAttributeMapping *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGenericVertexAttributeMapping_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGenericVertexAttributeMapping_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddMapping", PyvtkGenericVertexAttributeMapping_AddMapping, METH_VARARGS,
   "AddMapping(self, attributeName:str, arrayName:str,\n    fieldAssociation:int, component:int) -> None\nC++: void AddMapping(const char *attributeName,\n    const char *arrayName, int fieldAssociation, int component)\nAddMapping(self, unit:int, arrayName:str, fieldAssociation:int,\n    component:int) -> None\nC++: void AddMapping(int unit, const char *arrayName,\n    int fieldAssociation, int component)\n\nSelect a data array from the point/cell data and map it to a\ngeneric vertex attribute. Note that indices change when a mapping\nis added/removed.\n"},
  {"RemoveMapping", PyvtkGenericVertexAttributeMapping_RemoveMapping, METH_VARARGS,
   "RemoveMapping(self, attributeName:str) -> bool\nC++: bool RemoveMapping(const char *attributeName)\n\nRemove a vertex attribute mapping.\n"},
  {"RemoveAllMappings", PyvtkGenericVertexAttributeMapping_RemoveAllMappings, METH_VARARGS,
   "RemoveAllMappings(self) -> None\nC++: void RemoveAllMappings()\n\nRemove all mappings.\n"},
  {"GetNumberOfMappings", PyvtkGenericVertexAttributeMapping_GetNumberOfMappings, METH_VARARGS,
   "GetNumberOfMappings(self) -> int\nC++: unsigned int GetNumberOfMappings()\n\nGet number of mappings.\n"},
  {"GetAttributeName", PyvtkGenericVertexAttributeMapping_GetAttributeName, METH_VARARGS,
   "GetAttributeName(self, index:int) -> str\nC++: const char *GetAttributeName(unsigned int index)\n\nGet the attribute name at the given index.\n"},
  {"GetArrayName", PyvtkGenericVertexAttributeMapping_GetArrayName, METH_VARARGS,
   "GetArrayName(self, index:int) -> str\nC++: const char *GetArrayName(unsigned int index)\n\nGet the array name at the given index.\n"},
  {"GetFieldAssociation", PyvtkGenericVertexAttributeMapping_GetFieldAssociation, METH_VARARGS,
   "GetFieldAssociation(self, index:int) -> int\nC++: int GetFieldAssociation(unsigned int index)\n\nGet the field association at the given index.\n"},
  {"GetComponent", PyvtkGenericVertexAttributeMapping_GetComponent, METH_VARARGS,
   "GetComponent(self, index:int) -> int\nC++: int GetComponent(unsigned int index)\n\nGet the component no. at the given index.\n"},
  {"GetTextureUnit", PyvtkGenericVertexAttributeMapping_GetTextureUnit, METH_VARARGS,
   "GetTextureUnit(self, index:int) -> int\nC++: int GetTextureUnit(unsigned int index)\n\nGet the component no. at the given index.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGenericVertexAttributeMapping_Doc =
  "vtkGenericVertexAttributeMapping - stores mapping for data arrays to\ngeneric vertex attributes.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkGenericVertexAttributeMapping stores mapping between data arrays\n"
  "and generic vertex attributes. It is used by vtkPainterPolyDataMapper\n"
  "to pass the mappings to the painter which rendering the\n"
  "attributes.@par Thanks: Support for generic vertex attributes in VTK\n"
  "was contributed in collaboration with Stephane Ploix at EDF.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGenericVertexAttributeMapping_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkGenericVertexAttributeMapping", // tp_name
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
  PyvtkGenericVertexAttributeMapping_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericVertexAttributeMapping_StaticNew()
{
  return vtkGenericVertexAttributeMapping::New();
}

PyObject *PyvtkGenericVertexAttributeMapping_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGenericVertexAttributeMapping_Type, PyvtkGenericVertexAttributeMapping_Methods,
    "vtkGenericVertexAttributeMapping",
 &PyvtkGenericVertexAttributeMapping_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenericVertexAttributeMapping(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericVertexAttributeMapping_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericVertexAttributeMapping", o) != 0)
  {
    Py_DECREF(o);
  }

}

