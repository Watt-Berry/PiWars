// python wrapper for vtkInformationVector
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInformationVector.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInformationVector(PyObject *dict); }
extern "C" { PyObject *PyvtkInformationVector_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkInformationVector_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInformationVector::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationVector::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVector_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInformationVector *tempr = vtkInformationVector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationVector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationVector::NewInstance());

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
PyvtkInformationVector_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInformationVector::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVector_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInformationVector::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVector_GetNumberOfInformationObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInformationObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInformationObjects() :
      op->vtkInformationVector::GetNumberOfInformationObjects());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVector_SetNumberOfInformationObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInformationObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfInformationObjects(temp0);
    }
    else
    {
      op->vtkInformationVector::SetNumberOfInformationObjects(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVector_SetInformationObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformationObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInformationObject(temp0, temp1);
    }
    else
    {
      op->vtkInformationVector::SetInformationObject(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVector_GetInformationObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInformationObject(temp0) :
      op->vtkInformationVector::GetInformationObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVector_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0);
    }
    else
    {
      op->vtkInformationVector::Append(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVector_Remove_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformationVector::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformationVector_Remove_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformationVector::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationVector_Remove_Methods[] = {
  {"Remove", PyvtkInformationVector_Remove_s1, METH_VARARGS,
   "@V *vtkInformation"},
  {"Remove", PyvtkInformationVector_Remove_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformationVector_Remove(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformationVector_Remove_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Remove");
  return nullptr;
}


static PyObject *
PyvtkInformationVector_UsesGarbageCollector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsesGarbageCollector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UsesGarbageCollector() :
      op->vtkInformationVector::UsesGarbageCollector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationVector_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationVector *op = static_cast<vtkInformationVector *>(vp);

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0, temp1);
    }
    else
    {
      op->vtkInformationVector::Copy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationVector_Methods[] = {
  {"IsTypeOf", PyvtkInformationVector_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInformationVector_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInformationVector_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkInformationVector\nC++: static vtkInformationVector *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInformationVector_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInformationVector\nC++: vtkInformationVector *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInformationVector_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInformationVector_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfInformationObjects", PyvtkInformationVector_GetNumberOfInformationObjects, METH_VARARGS,
   "GetNumberOfInformationObjects(self) -> int\nC++: int GetNumberOfInformationObjects()\n\nGet/Set the number of information objects in the vector.  Setting\nthe number to larger than the current number will create empty\nvtkInformation instances.  Setting the number to smaller than the\ncurrent number will remove entries from higher indices.\n"},
  {"SetNumberOfInformationObjects", PyvtkInformationVector_SetNumberOfInformationObjects, METH_VARARGS,
   "SetNumberOfInformationObjects(self, n:int) -> None\nC++: void SetNumberOfInformationObjects(int n)\n\n"},
  {"SetInformationObject", PyvtkInformationVector_SetInformationObject, METH_VARARGS,
   "SetInformationObject(self, index:int, info:vtkInformation) -> None\nC++: void SetInformationObject(int index, vtkInformation *info)\n\nGet/Set the vtkInformation instance stored at the given index in\nthe vector.  The vector will automatically expand to include the\nindex given if necessary.  Missing entries in-between will be\nfilled with empty vtkInformation instances.\n"},
  {"GetInformationObject", PyvtkInformationVector_GetInformationObject, METH_VARARGS,
   "GetInformationObject(self, index:int) -> vtkInformation\nC++: vtkInformation *GetInformationObject(int index)\n\n"},
  {"Append", PyvtkInformationVector_Append, METH_VARARGS,
   "Append(self, info:vtkInformation) -> None\nC++: void Append(vtkInformation *info)\n\nAppend/Remove an information object.\n"},
  {"Remove", PyvtkInformationVector_Remove, METH_VARARGS,
   "Remove(self, info:vtkInformation) -> None\nC++: void Remove(vtkInformation *info)\nRemove(self, idx:int) -> None\nC++: void Remove(int idx)\n\n"},
  {"UsesGarbageCollector", PyvtkInformationVector_UsesGarbageCollector, METH_VARARGS,
   "UsesGarbageCollector(self) -> bool\nC++: bool UsesGarbageCollector() override;\n\nInitiate garbage collection when a reference is removed.\n"},
  {"Copy", PyvtkInformationVector_Copy, METH_VARARGS,
   "Copy(self, from_:vtkInformationVector, deep:int=0) -> None\nC++: void Copy(vtkInformationVector *from, vtkTypeBool deep=0)\n\nCopy all information entries from the given vtkInformation\ninstance.  Any previously existing entries are removed.  If\ndeep==1, a deep copy of the information structure is performed\n(new instances of any contained vtkInformation and\nvtkInformationVector objects are created).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkInformationVector_Doc =
  "vtkInformationVector - Store zero or more vtkInformation instances.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkInformationVector stores a vector of zero or more vtkInformation\n"
  "objects corresponding to the input or output information for a\n"
  "vtkAlgorithm.  An instance of this class is passed to\n"
  "vtkAlgorithm::ProcessRequest calls.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInformationVector_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkInformationVector", // tp_name
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
  PyvtkInformationVector_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInformationVector_StaticNew()
{
  return vtkInformationVector::New();
}

PyObject *PyvtkInformationVector_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInformationVector_Type, PyvtkInformationVector_Methods,
    "vtkInformationVector",
 &PyvtkInformationVector_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInformationVector(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformationVector_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInformationVector", o) != 0)
  {
    Py_DECREF(o);
  }

}

