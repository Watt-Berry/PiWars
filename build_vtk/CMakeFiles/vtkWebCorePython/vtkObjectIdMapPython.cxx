// python wrapper for vtkObjectIdMap
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectIdMap.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkObjectIdMap(PyObject *dict); }
extern "C" { PyObject *PyvtkObjectIdMap_ClassNew(); }


static PyObject *
PyvtkObjectIdMap_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkObjectIdMap::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkObjectIdMap::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkObjectIdMap *tempr = vtkObjectIdMap::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObjectIdMap *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkObjectIdMap::NewInstance());

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
PyvtkObjectIdMap_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkObjectIdMap::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkObjectIdMap::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_GetGlobalId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetGlobalId(temp0) :
      op->vtkObjectIdMap::GetGlobalId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_GetVTKObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetVTKObject(temp0) :
      op->vtkObjectIdMap::GetVTKObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_SetActiveObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  const char *temp0 = nullptr;
  vtkObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkObject"))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->SetActiveObject(temp0, temp1) :
      op->vtkObjectIdMap::SetActiveObject(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_GetActiveObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetActiveObject(temp0) :
      op->vtkObjectIdMap::GetActiveObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_FreeObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->FreeObject(temp0) :
      op->vtkObjectIdMap::FreeObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectIdMap_FreeObjectById(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeObjectById");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectIdMap *op = static_cast<vtkObjectIdMap *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->FreeObjectById(temp0) :
      op->vtkObjectIdMap::FreeObjectById(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkObjectIdMap_Methods[] = {
  {"IsTypeOf", PyvtkObjectIdMap_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkObjectIdMap_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkObjectIdMap_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkObjectIdMap\nC++: static vtkObjectIdMap *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkObjectIdMap_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkObjectIdMap\nC++: vtkObjectIdMap *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkObjectIdMap_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkObjectIdMap_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetGlobalId", PyvtkObjectIdMap_GetGlobalId, METH_VARARGS,
   "GetGlobalId(self, obj:vtkObject) -> int\nC++: vtkTypeUInt32 GetGlobalId(vtkObject *obj)\n\nRetrieve a unique identifier for the given object or generate a\nnew one if its global id was never requested.\n"},
  {"GetVTKObject", PyvtkObjectIdMap_GetVTKObject, METH_VARARGS,
   "GetVTKObject(self, globalId:int) -> vtkObject\nC++: vtkObject *GetVTKObject(vtkTypeUInt32 globalId)\n\nRetrieve a vtkObject based on its global id. If not found return\nnullptr\n"},
  {"SetActiveObject", PyvtkObjectIdMap_SetActiveObject, METH_VARARGS,
   "SetActiveObject(self, objectType:str, obj:vtkObject) -> int\nC++: vtkTypeUInt32 SetActiveObject(const char *objectType,\n    vtkObject *obj)\n\nAssign an active key (string) to an existing object. This is\nusually used to provide another type of access to specific\nvtkObject that we want to retrieve easily using a string. Return\nthe global Id of the given registered object\n"},
  {"GetActiveObject", PyvtkObjectIdMap_GetActiveObject, METH_VARARGS,
   "GetActiveObject(self, objectType:str) -> vtkObject\nC++: vtkObject *GetActiveObject(const char *objectType)\n\nRetrieve a previously stored object based on a name\n"},
  {"FreeObject", PyvtkObjectIdMap_FreeObject, METH_VARARGS,
   "FreeObject(self, obj:vtkObject) -> bool\nC++: bool FreeObject(vtkObject *obj)\n\nGiven an object, remove any internal reference count due to\ninternal Id/Object mapping. Returns true if the item existed in\nthe map and was deleted.\n"},
  {"FreeObjectById", PyvtkObjectIdMap_FreeObjectById, METH_VARARGS,
   "FreeObjectById(self, id:int) -> bool\nC++: bool FreeObjectById(vtkTypeUInt32 id)\n\nGiven an id, remove any internal reference count due to internal\nId/Object mapping. Returns true if the id existed in the map and\nwas deleted.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkObjectIdMap_Doc =
  "vtkObjectIdMap - class used to assign Id to any VTK object and be\nable to retrieve it base on its id.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkObjectIdMap_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkWebCore.vtkObjectIdMap", // tp_name
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
  PyvtkObjectIdMap_Doc, // tp_doc
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

static vtkObjectBase *PyvtkObjectIdMap_StaticNew()
{
  return vtkObjectIdMap::New();
}

PyObject *PyvtkObjectIdMap_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkObjectIdMap_Type, PyvtkObjectIdMap_Methods,
    "vtkObjectIdMap",
 &PyvtkObjectIdMap_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkObjectIdMap(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkObjectIdMap_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkObjectIdMap", o) != 0)
  {
    Py_DECREF(o);
  }

}

