// python wrapper for vtkFieldDataToDataSetAttribute
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFieldDataToDataSetAttribute.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFieldDataToDataSetAttribute(PyObject *dict); }
extern "C" { PyObject *PyvtkFieldDataToDataSetAttribute_ClassNew(); }


static PyObject *
PyvtkFieldDataToDataSetAttribute_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFieldDataToDataSetAttribute::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToDataSetAttribute_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToDataSetAttribute *op = static_cast<vtkFieldDataToDataSetAttribute *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFieldDataToDataSetAttribute::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToDataSetAttribute_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFieldDataToDataSetAttribute *tempr = vtkFieldDataToDataSetAttribute::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToDataSetAttribute_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToDataSetAttribute *op = static_cast<vtkFieldDataToDataSetAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFieldDataToDataSetAttribute *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFieldDataToDataSetAttribute::NewInstance());

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
PyvtkFieldDataToDataSetAttribute_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFieldDataToDataSetAttribute::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToDataSetAttribute_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToDataSetAttribute *op = static_cast<vtkFieldDataToDataSetAttribute *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFieldDataToDataSetAttribute::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToDataSetAttribute_SetProcessAllArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessAllArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToDataSetAttribute *op = static_cast<vtkFieldDataToDataSetAttribute *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessAllArrays(temp0);
    }
    else
    {
      op->vtkFieldDataToDataSetAttribute::SetProcessAllArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToDataSetAttribute_GetProcessAllArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessAllArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToDataSetAttribute *op = static_cast<vtkFieldDataToDataSetAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProcessAllArrays() :
      op->vtkFieldDataToDataSetAttribute::GetProcessAllArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToDataSetAttribute_ProcessAllArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessAllArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToDataSetAttribute *op = static_cast<vtkFieldDataToDataSetAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessAllArraysOn();
    }
    else
    {
      op->vtkFieldDataToDataSetAttribute::ProcessAllArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToDataSetAttribute_ProcessAllArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessAllArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToDataSetAttribute *op = static_cast<vtkFieldDataToDataSetAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessAllArraysOff();
    }
    else
    {
      op->vtkFieldDataToDataSetAttribute::ProcessAllArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToDataSetAttribute_SetOutputFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToDataSetAttribute *op = static_cast<vtkFieldDataToDataSetAttribute *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFieldType(temp0);
    }
    else
    {
      op->vtkFieldDataToDataSetAttribute::SetOutputFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToDataSetAttribute_GetOutputFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToDataSetAttribute *op = static_cast<vtkFieldDataToDataSetAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputFieldType() :
      op->vtkFieldDataToDataSetAttribute::GetOutputFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToDataSetAttribute_AddFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToDataSetAttribute *op = static_cast<vtkFieldDataToDataSetAttribute *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddFieldDataArray(temp0);
    }
    else
    {
      op->vtkFieldDataToDataSetAttribute::AddFieldDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToDataSetAttribute_RemoveFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToDataSetAttribute *op = static_cast<vtkFieldDataToDataSetAttribute *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveFieldDataArray(temp0);
    }
    else
    {
      op->vtkFieldDataToDataSetAttribute::RemoveFieldDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToDataSetAttribute_ClearFieldDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFieldDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToDataSetAttribute *op = static_cast<vtkFieldDataToDataSetAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearFieldDataArrays();
    }
    else
    {
      op->vtkFieldDataToDataSetAttribute::ClearFieldDataArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFieldDataToDataSetAttribute_Methods[] = {
  {"IsTypeOf", PyvtkFieldDataToDataSetAttribute_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFieldDataToDataSetAttribute_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFieldDataToDataSetAttribute_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFieldDataToDataSetAttribute\nC++: static vtkFieldDataToDataSetAttribute *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFieldDataToDataSetAttribute_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFieldDataToDataSetAttribute\nC++: vtkFieldDataToDataSetAttribute *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFieldDataToDataSetAttribute_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFieldDataToDataSetAttribute_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetProcessAllArrays", PyvtkFieldDataToDataSetAttribute_SetProcessAllArrays, METH_VARARGS,
   "SetProcessAllArrays(self, _arg:bool) -> None\nC++: virtual void SetProcessAllArrays(bool _arg)\n\nActivate whether to process all input arrays or only the selected\nones. If false, only arrays selected by the user will be\nconsidered by this filter. The default is true.\n"},
  {"GetProcessAllArrays", PyvtkFieldDataToDataSetAttribute_GetProcessAllArrays, METH_VARARGS,
   "GetProcessAllArrays(self) -> bool\nC++: virtual bool GetProcessAllArrays()\n\n"},
  {"ProcessAllArraysOn", PyvtkFieldDataToDataSetAttribute_ProcessAllArraysOn, METH_VARARGS,
   "ProcessAllArraysOn(self) -> None\nC++: virtual void ProcessAllArraysOn()\n\n"},
  {"ProcessAllArraysOff", PyvtkFieldDataToDataSetAttribute_ProcessAllArraysOff, METH_VARARGS,
   "ProcessAllArraysOff(self) -> None\nC++: virtual void ProcessAllArraysOff()\n\n"},
  {"SetOutputFieldType", PyvtkFieldDataToDataSetAttribute_SetOutputFieldType, METH_VARARGS,
   "SetOutputFieldType(self, _arg:int) -> None\nC++: virtual void SetOutputFieldType(int _arg)\n\nSet/Get the output attribute type.\n"},
  {"GetOutputFieldType", PyvtkFieldDataToDataSetAttribute_GetOutputFieldType, METH_VARARGS,
   "GetOutputFieldType(self) -> int\nC++: virtual int GetOutputFieldType()\n\n"},
  {"AddFieldDataArray", PyvtkFieldDataToDataSetAttribute_AddFieldDataArray, METH_VARARGS,
   "AddFieldDataArray(self, name:str) -> None\nC++: virtual void AddFieldDataArray(const char *name)\n\nAdds an array to be processed. This only has an effect if\nProcessAllArrays is off. If the name is already present, nothing\nhappens.\n"},
  {"RemoveFieldDataArray", PyvtkFieldDataToDataSetAttribute_RemoveFieldDataArray, METH_VARARGS,
   "RemoveFieldDataArray(self, name:str) -> None\nC++: virtual void RemoveFieldDataArray(const char *name)\n\nRemoves an array to be processed. This only has an effect if\nProcessAllArrays is off. If the name is not present, nothing\nhappens.\n"},
  {"ClearFieldDataArrays", PyvtkFieldDataToDataSetAttribute_ClearFieldDataArrays, METH_VARARGS,
   "ClearFieldDataArrays(self) -> None\nC++: virtual void ClearFieldDataArrays()\n\nRemoves all arrays to be processed from the list. This only has\nan effect if ProcessAllArrays is off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFieldDataToDataSetAttribute_Doc =
  "vtkFieldDataToDataSetAttribute - map field data to other attribute\ndata\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkFieldDataToDataSetAttribute is a filter that copies field data\n"
  "arrays into another attribute data arrays.\n\n"
  "This is done at very low memory cost by using the Implicit Array\n"
  "infrastructure.\n\n"
  "NOTE: It copies only the first component of the first tuple into a\n"
  "vtkConstantArray. vtkStringArray are not supported.\n\n"
  "@sa\n"
  "vtkFieldData vtkCellData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFieldDataToDataSetAttribute_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkFieldDataToDataSetAttribute", // tp_name
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
  PyvtkFieldDataToDataSetAttribute_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFieldDataToDataSetAttribute_StaticNew()
{
  return vtkFieldDataToDataSetAttribute::New();
}

PyObject *PyvtkFieldDataToDataSetAttribute_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFieldDataToDataSetAttribute_Type, PyvtkFieldDataToDataSetAttribute_Methods,
    "vtkFieldDataToDataSetAttribute",
 &PyvtkFieldDataToDataSetAttribute_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFieldDataToDataSetAttribute(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFieldDataToDataSetAttribute_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFieldDataToDataSetAttribute", o) != 0)
  {
    Py_DECREF(o);
  }

}

