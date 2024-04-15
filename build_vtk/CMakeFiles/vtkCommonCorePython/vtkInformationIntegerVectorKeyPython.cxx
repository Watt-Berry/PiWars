// python wrapper for vtkInformationIntegerVectorKey
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInformationIntegerVectorKey.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInformationIntegerVectorKey(PyObject *dict); }
extern "C" { PyObject *PyvtkInformationIntegerVectorKey_ClassNew(); }

#ifndef DECLARED_PyvtkInformationKey_ClassNew
extern "C" { PyObject *PyvtkInformationKey_ClassNew(); }
#define DECLARED_PyvtkInformationKey_ClassNew
#endif

static PyObject *
PyvtkInformationIntegerVectorKey_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInformationIntegerVectorKey::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerVectorKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationIntegerVectorKey::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerVectorKey_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInformationIntegerVectorKey *tempr = vtkInformationIntegerVectorKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerVectorKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationIntegerVectorKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationIntegerVectorKey::NewInstance());

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
PyvtkInformationIntegerVectorKey_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInformationIntegerVectorKey::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerVectorKey_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInformationIntegerVectorKey::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerVectorKey_MakeKey(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeKey");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2 = -1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkInformationIntegerVectorKey *tempr = vtkInformationIntegerVectorKey::MakeKey(temp0, temp1, temp2);

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
PyvtkInformationIntegerVectorKey_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformationIntegerVectorKey::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerVectorKey_Set_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformationIntegerVectorKey::Set(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformationIntegerVectorKey_Set_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0);
    }
    else
    {
      op->vtkInformationIntegerVectorKey::Set(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformationIntegerVectorKey_Set(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkInformationIntegerVectorKey_Set_s1(self, args);
    case 1:
      return PyvtkInformationIntegerVectorKey_Set_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Set");
  return nullptr;
}


static PyObject *
PyvtkInformationIntegerVectorKey_Get_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformationIntegerVectorKey::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformationIntegerVectorKey_Get_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformationIntegerVectorKey::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformationIntegerVectorKey_Get_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->Get(temp0, temp1);
    }
    else
    {
      op->vtkInformationIntegerVectorKey::Get(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationIntegerVectorKey_Get_Methods[] = {
  {"Get", PyvtkInformationIntegerVectorKey_Get_s2, METH_VARARGS,
   "@Vi *vtkInformation"},
  {"Get", PyvtkInformationIntegerVectorKey_Get_s3, METH_VARARGS,
   "@VP *vtkInformation *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformationIntegerVectorKey_Get(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformationIntegerVectorKey_Get_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkInformationIntegerVectorKey_Get_s1(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Get");
  return nullptr;
}


static PyObject *
PyvtkInformationIntegerVectorKey_Length(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformationIntegerVectorKey::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerVectorKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerVectorKey *op = static_cast<vtkInformationIntegerVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0, temp1);
    }
    else
    {
      op->vtkInformationIntegerVectorKey::ShallowCopy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationIntegerVectorKey_Methods[] = {
  {"IsTypeOf", PyvtkInformationIntegerVectorKey_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInformationIntegerVectorKey_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInformationIntegerVectorKey_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInformationIntegerVectorKey_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInformationIntegerVectorKey\nC++: vtkInformationIntegerVectorKey *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInformationIntegerVectorKey_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInformationIntegerVectorKey_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"MakeKey", PyvtkInformationIntegerVectorKey_MakeKey, METH_VARARGS,
   "MakeKey(name:str, location:str, length:int=-1)\n    -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *MakeKey(\n    const char *name, const char *location, int length=-1)\n\nThis method simply returns a new vtkInformationIntegerVectorKey,\ngiven a name, a location and a required length. This method is\nprovided for wrappers. Use the constructor directly from C++\ninstead.\n"},
  {"Append", PyvtkInformationIntegerVectorKey_Append, METH_VARARGS,
   "Append(self, info:vtkInformation, value:int) -> None\nC++: void Append(vtkInformation *info, int value)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {"Set", PyvtkInformationIntegerVectorKey_Set, METH_VARARGS,
   "Set(self, info:vtkInformation, value:(int, ...), length:int)\n    -> None\nC++: void Set(vtkInformation *info, const int *value, int length)\nSet(self, info:vtkInformation) -> None\nC++: void Set(vtkInformation *info)\n\n"},
  {"Get", PyvtkInformationIntegerVectorKey_Get, METH_VARARGS,
   "Get(self, info:vtkInformation) -> Pointer\nC++: int *Get(vtkInformation *info)\nGet(self, info:vtkInformation, idx:int) -> int\nC++: int Get(vtkInformation *info, int idx)\nGet(self, info:vtkInformation, value:[int, ...]) -> None\nC++: void Get(vtkInformation *info, int *value)\n\n"},
  {"Length", PyvtkInformationIntegerVectorKey_Length, METH_VARARGS,
   "Length(self, info:vtkInformation) -> int\nC++: int Length(vtkInformation *info)\n\n"},
  {"ShallowCopy", PyvtkInformationIntegerVectorKey_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, from_:vtkInformation, to:vtkInformation) -> None\nC++: void ShallowCopy(vtkInformation *from, vtkInformation *to)\n    override;\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkInformationIntegerVectorKey_Doc =
  "vtkInformationIntegerVectorKey - Key for integer vector values.\n\n"
  "Superclass: vtkInformationKey\n\n"
  "vtkInformationIntegerVectorKey is used to represent keys for integer\n"
  "vector values in vtkInformation.h\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInformationIntegerVectorKey_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkInformationIntegerVectorKey", // tp_name
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
  PyvtkInformationIntegerVectorKey_Doc, // tp_doc
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

PyObject *PyvtkInformationIntegerVectorKey_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInformationIntegerVectorKey_Type, PyvtkInformationIntegerVectorKey_Methods,
    "vtkInformationIntegerVectorKey",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkInformationKey_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInformationIntegerVectorKey(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformationIntegerVectorKey_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInformationIntegerVectorKey", o) != 0)
  {
    Py_DECREF(o);
  }

}

