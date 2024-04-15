// python wrapper for vtkInformationExecutivePortVectorKey
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInformationExecutivePortVectorKey.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInformationExecutivePortVectorKey(PyObject *dict); }
extern "C" { PyObject *PyvtkInformationExecutivePortVectorKey_ClassNew(); }


static PyObject *
PyvtkInformationExecutivePortVectorKey_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInformationExecutivePortVectorKey::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortVectorKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationExecutivePortVectorKey::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortVectorKey_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInformationExecutivePortVectorKey *tempr = vtkInformationExecutivePortVectorKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortVectorKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationExecutivePortVectorKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationExecutivePortVectorKey::NewInstance());

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
PyvtkInformationExecutivePortVectorKey_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInformationExecutivePortVectorKey::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortVectorKey_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInformationExecutivePortVectorKey::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortVectorKey_MakeKey(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeKey");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkInformationExecutivePortVectorKey *tempr = vtkInformationExecutivePortVectorKey::MakeKey(temp0, temp1);

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
PyvtkInformationExecutivePortVectorKey_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkExecutive *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkExecutive") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformationExecutivePortVectorKey::Append(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortVectorKey_Remove_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkExecutive *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkExecutive") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformationExecutivePortVectorKey::Remove(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformationExecutivePortVectorKey_Remove_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

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
      op->vtkInformationExecutivePortVectorKey::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformationExecutivePortVectorKey_Remove(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkInformationExecutivePortVectorKey_Remove_s1(self, args);
    case 1:
      return PyvtkInformationExecutivePortVectorKey_Remove_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Remove");
  return nullptr;
}


static PyObject *
PyvtkInformationExecutivePortVectorKey_GetPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPorts(temp0) :
      op->vtkInformationExecutivePortVectorKey::GetPorts(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortVectorKey_Length(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformationExecutivePortVectorKey::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortVectorKey_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

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
      op->vtkInformationExecutivePortVectorKey::ShallowCopy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationExecutivePortVectorKey_Report(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Report");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationExecutivePortVectorKey *op = static_cast<vtkInformationExecutivePortVectorKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkGarbageCollector *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkGarbageCollector"))
  {
    if (ap.IsBound())
    {
      op->Report(temp0, temp1);
    }
    else
    {
      op->vtkInformationExecutivePortVectorKey::Report(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationExecutivePortVectorKey_Methods[] = {
  {"IsTypeOf", PyvtkInformationExecutivePortVectorKey_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInformationExecutivePortVectorKey_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInformationExecutivePortVectorKey_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkInformationExecutivePortVectorKey\nC++: static vtkInformationExecutivePortVectorKey *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInformationExecutivePortVectorKey_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInformationExecutivePortVectorKey\nC++: vtkInformationExecutivePortVectorKey *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInformationExecutivePortVectorKey_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInformationExecutivePortVectorKey_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"MakeKey", PyvtkInformationExecutivePortVectorKey_MakeKey, METH_VARARGS,
   "MakeKey(name:str, location:str)\n    -> vtkInformationExecutivePortVectorKey\nC++: static vtkInformationExecutivePortVectorKey *MakeKey(\n    const char *name, const char *location)\n\nThis method simply returns a new\nvtkInformationExecutivePortVectorKey, given a name and a\nlocation. This method is provided for wrappers. Use the\nconstructor directly from C++ instead.\n"},
  {"Append", PyvtkInformationExecutivePortVectorKey_Append, METH_VARARGS,
   "Append(self, info:vtkInformation, executive:vtkExecutive,\n    port:int) -> None\nC++: void Append(vtkInformation *info, vtkExecutive *executive,\n    int port)\n\nGet/Set the value associated with this key in the given\ninformation object.\n"},
  {"Remove", PyvtkInformationExecutivePortVectorKey_Remove, METH_VARARGS,
   "Remove(self, info:vtkInformation, executive:vtkExecutive,\n    port:int) -> None\nC++: void Remove(vtkInformation *info, vtkExecutive *executive,\n    int port)\nRemove(self, info:vtkInformation) -> None\nC++: void Remove(vtkInformation *info) override;\n\n"},
  {"GetPorts", PyvtkInformationExecutivePortVectorKey_GetPorts, METH_VARARGS,
   "GetPorts(self, info:vtkInformation) -> Pointer\nC++: int *GetPorts(vtkInformation *info)\n\n"},
  {"Length", PyvtkInformationExecutivePortVectorKey_Length, METH_VARARGS,
   "Length(self, info:vtkInformation) -> int\nC++: int Length(vtkInformation *info)\n\n"},
  {"ShallowCopy", PyvtkInformationExecutivePortVectorKey_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, from_:vtkInformation, to:vtkInformation) -> None\nC++: void ShallowCopy(vtkInformation *from, vtkInformation *to)\n    override;\n\nCopy the entry associated with this key from one information\nobject to another.  If there is no entry in the first information\nobject for this key, the value is removed from the second.\n"},
  {"Report", PyvtkInformationExecutivePortVectorKey_Report, METH_VARARGS,
   "Report(self, info:vtkInformation, collector:vtkGarbageCollector)\n    -> None\nC++: void Report(vtkInformation *info,\n    vtkGarbageCollector *collector) override;\n\nReport a reference this key has in the given information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkInformationExecutivePortVectorKey_Doc =
  "vtkInformationExecutivePortVectorKey - Key for vtkExecutive/Port\nvalue pair vectors.\n\n"
  "Superclass: vtkInformationKey\n\n"
  "vtkInformationExecutivePortVectorKey is used to represent keys in\n"
  "vtkInformation for values that are vectors of vtkExecutive instances\n"
  "paired with port numbers.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInformationExecutivePortVectorKey_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkInformationExecutivePortVectorKey", // tp_name
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
  PyvtkInformationExecutivePortVectorKey_Doc, // tp_doc
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

PyObject *PyvtkInformationExecutivePortVectorKey_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInformationExecutivePortVectorKey_Type, PyvtkInformationExecutivePortVectorKey_Methods,
    "vtkInformationExecutivePortVectorKey",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkInformationKey");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInformationExecutivePortVectorKey(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformationExecutivePortVectorKey_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInformationExecutivePortVectorKey", o) != 0)
  {
    Py_DECREF(o);
  }

}

