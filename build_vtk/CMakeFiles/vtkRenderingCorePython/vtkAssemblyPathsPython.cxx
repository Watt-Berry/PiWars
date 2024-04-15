// python wrapper for vtkAssemblyPaths
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAssemblyPaths.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAssemblyPaths(PyObject *dict); }
extern "C" { PyObject *PyvtkAssemblyPaths_ClassNew(); }


static PyObject *
PyvtkAssemblyPaths_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAssemblyPaths::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAssemblyPaths::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAssemblyPaths *tempr = vtkAssemblyPaths::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssemblyPaths *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAssemblyPaths::NewInstance());

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
PyvtkAssemblyPaths_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAssemblyPaths::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAssemblyPaths::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  vtkAssemblyPath *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPath"))
  {
    if (ap.IsBound())
    {
      op->AddItem(temp0);
    }
    else
    {
      op->vtkAssemblyPaths::AddItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_RemoveItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  vtkAssemblyPath *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPath"))
  {
    if (ap.IsBound())
    {
      op->RemoveItem(temp0);
    }
    else
    {
      op->vtkAssemblyPaths::RemoveItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_IsItemPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsItemPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  vtkAssemblyPath *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPath"))
  {
    int tempr = (ap.IsBound() ?
      op->IsItemPresent(temp0) :
      op->vtkAssemblyPaths::IsItemPresent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkAssemblyPaths::GetNextItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPaths_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPaths *op = static_cast<vtkAssemblyPaths *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAssemblyPaths::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAssemblyPaths_Methods[] = {
  {"IsTypeOf", PyvtkAssemblyPaths_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAssemblyPaths_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAssemblyPaths_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAssemblyPaths\nC++: static vtkAssemblyPaths *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAssemblyPaths_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAssemblyPaths\nC++: vtkAssemblyPaths *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAssemblyPaths_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAssemblyPaths_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddItem", PyvtkAssemblyPaths_AddItem, METH_VARARGS,
   "AddItem(self, p:vtkAssemblyPath) -> None\nC++: void AddItem(vtkAssemblyPath *p)\n\nAdd a path to the list.\n"},
  {"RemoveItem", PyvtkAssemblyPaths_RemoveItem, METH_VARARGS,
   "RemoveItem(self, p:vtkAssemblyPath) -> None\nC++: void RemoveItem(vtkAssemblyPath *p)\n\nRemove a path from the list.\n"},
  {"IsItemPresent", PyvtkAssemblyPaths_IsItemPresent, METH_VARARGS,
   "IsItemPresent(self, p:vtkAssemblyPath) -> int\nC++: int IsItemPresent(vtkAssemblyPath *p)\n\nDetermine whether a particular path is present. If the return\nvalue is 0, the object was not found. If the object was found,\nthe location is the return value-1.\n"},
  {"GetNextItem", PyvtkAssemblyPaths_GetNextItem, METH_VARARGS,
   "GetNextItem(self) -> vtkAssemblyPath\nC++: vtkAssemblyPath *GetNextItem()\n\nGet the next path in the list.\n"},
  {"GetMTime", PyvtkAssemblyPaths_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride the standard GetMTime() to check for the modified times\nof the paths.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAssemblyPaths_Doc =
  "vtkAssemblyPaths - a list of lists of props representing an assembly\nhierarchy\n\n"
  "Superclass: vtkCollection\n\n"
  "vtkAssemblyPaths represents an assembly hierarchy as a list of\n"
  "vtkAssemblyPath. Each path represents the complete path from the top\n"
  "level assembly (if any) down to the leaf prop.\n\n"
  "@sa\n"
  "vtkAssemblyPath vtkAssemblyNode vtkPicker vtkAssembly vtkProp\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAssemblyPaths_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkAssemblyPaths", // tp_name
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
  PyvtkAssemblyPaths_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAssemblyPaths_StaticNew()
{
  return vtkAssemblyPaths::New();
}

PyObject *PyvtkAssemblyPaths_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAssemblyPaths_Type, PyvtkAssemblyPaths_Methods,
    "vtkAssemblyPaths",
 &PyvtkAssemblyPaths_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkCollection");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAssemblyPaths(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAssemblyPaths_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAssemblyPaths", o) != 0)
  {
    Py_DECREF(o);
  }

}

