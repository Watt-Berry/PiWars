// python wrapper for vtkInformationIntegerRequestKey
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInformationIntegerRequestKey.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInformationIntegerRequestKey(PyObject *dict); }
extern "C" { PyObject *PyvtkInformationIntegerRequestKey_ClassNew(); }


static PyObject *
PyvtkInformationIntegerRequestKey_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInformationIntegerRequestKey::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformationIntegerRequestKey::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInformationIntegerRequestKey *tempr = vtkInformationIntegerRequestKey::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationIntegerRequestKey *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformationIntegerRequestKey::NewInstance());

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
PyvtkInformationIntegerRequestKey_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInformationIntegerRequestKey::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInformationIntegerRequestKey::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_MakeKey(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeKey");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkInformationIntegerRequestKey *tempr = vtkInformationIntegerRequestKey::MakeKey(temp0, temp1);

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
PyvtkInformationIntegerRequestKey_NeedToExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedToExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    bool tempr = (ap.IsBound() ?
      op->NeedToExecute(temp0, temp1) :
      op->vtkInformationIntegerRequestKey::NeedToExecute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_StoreMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StoreMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->StoreMetaData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformationIntegerRequestKey::StoreMetaData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformationIntegerRequestKey_CopyDefaultInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyDefaultInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformationIntegerRequestKey *op = static_cast<vtkInformationIntegerRequestKey *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->CopyDefaultInformation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformationIntegerRequestKey::CopyDefaultInformation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformationIntegerRequestKey_Methods[] = {
  {"IsTypeOf", PyvtkInformationIntegerRequestKey_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInformationIntegerRequestKey_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInformationIntegerRequestKey_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkInformationIntegerRequestKey\nC++: static vtkInformationIntegerRequestKey *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInformationIntegerRequestKey_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInformationIntegerRequestKey\nC++: vtkInformationIntegerRequestKey *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInformationIntegerRequestKey_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInformationIntegerRequestKey_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"MakeKey", PyvtkInformationIntegerRequestKey_MakeKey, METH_VARARGS,
   "MakeKey(name:str, location:str) -> vtkInformationIntegerRequestKey\nC++: static vtkInformationIntegerRequestKey *MakeKey(\n    const char *name, const char *location)\n\nThis method simply returns a new vtkInformationIntegerRequestKey,\ngiven a name and a location. This method is provided for\nwrappers. Use the constructor directly from C++ instead.\n"},
  {"NeedToExecute", PyvtkInformationIntegerRequestKey_NeedToExecute, METH_VARARGS,
   "NeedToExecute(self, pipelineInfo:vtkInformation,\n    dobjInfo:vtkInformation) -> bool\nC++: bool NeedToExecute(vtkInformation *pipelineInfo,\n    vtkInformation *dobjInfo) override;\n\nReturns true if a value of type DataKey does not exist in\ndobjInfo or if it is different that the value stored in\npipelineInfo using this key.\n"},
  {"StoreMetaData", PyvtkInformationIntegerRequestKey_StoreMetaData, METH_VARARGS,
   "StoreMetaData(self, request:vtkInformation,\n    pipelineInfo:vtkInformation, dobjInfo:vtkInformation) -> None\nC++: void StoreMetaData(vtkInformation *request,\n    vtkInformation *pipelineInfo, vtkInformation *dobjInfo)\n    override;\n\nCopies the value stored in pipelineInfo using this key into\ndobjInfo.\n"},
  {"CopyDefaultInformation", PyvtkInformationIntegerRequestKey_CopyDefaultInformation, METH_VARARGS,
   "CopyDefaultInformation(self, request:vtkInformation,\n    fromInfo:vtkInformation, toInfo:vtkInformation) -> None\nC++: void CopyDefaultInformation(vtkInformation *request,\n    vtkInformation *fromInfo, vtkInformation *toInfo) override;\n\nCopies the value stored in fromInfo using this key into toInfo if\nrequest has the REQUEST_UPDATE_EXTENT key.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkInformationIntegerRequestKey_Doc =
  "vtkInformationIntegerRequestKey - key that can used to request\ninteger values from the pipeline vtkInformationIntegerRequestKey is a\nvtkInformationIntegerKey that can used to request integer values from\nupstream.\n\n"
  "Superclass: vtkInformationIntegerKey\n\n"
  "A good example of this is UPDATE_NUMBER_OF_PIECES where downstream\n"
  "can request that upstream provides data partitioned into a certain\n"
  "number of pieces. There are several components that make this work.\n"
  "First, the key will copy itself upstream during\n"
  "REQUEST_UPDATE_EXTENT. Second, after a successful execution, it will\n"
  "stor its value into a data object's information using a specific key\n"
  "defined by its data member DataKey. Third, before execution, it will\n"
  "check if the requested value matched the value in the data object's\n"
  "information. If not, it will ask the pipeline to execute.\n\n"
  "The best way to use this class is to subclass it to set the DataKey\n"
  "data member. This is usually done in the subclass' constructor.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInformationIntegerRequestKey_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkInformationIntegerRequestKey", // tp_name
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
  PyvtkInformationIntegerRequestKey_Doc, // tp_doc
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

PyObject *PyvtkInformationIntegerRequestKey_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInformationIntegerRequestKey_Type, PyvtkInformationIntegerRequestKey_Methods,
    "vtkInformationIntegerRequestKey",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkInformationIntegerKey");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInformationIntegerRequestKey(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformationIntegerRequestKey_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInformationIntegerRequestKey", o) != 0)
  {
    Py_DECREF(o);
  }

}

