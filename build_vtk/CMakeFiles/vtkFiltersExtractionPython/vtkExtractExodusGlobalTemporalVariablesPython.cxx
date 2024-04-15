// python wrapper for vtkExtractExodusGlobalTemporalVariables
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractExodusGlobalTemporalVariables.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractExodusGlobalTemporalVariables(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractExodusGlobalTemporalVariables_ClassNew(); }


static PyObject *
PyvtkExtractExodusGlobalTemporalVariables_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractExodusGlobalTemporalVariables::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractExodusGlobalTemporalVariables_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractExodusGlobalTemporalVariables *op = static_cast<vtkExtractExodusGlobalTemporalVariables *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractExodusGlobalTemporalVariables::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractExodusGlobalTemporalVariables_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractExodusGlobalTemporalVariables *tempr = vtkExtractExodusGlobalTemporalVariables::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractExodusGlobalTemporalVariables_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractExodusGlobalTemporalVariables *op = static_cast<vtkExtractExodusGlobalTemporalVariables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractExodusGlobalTemporalVariables *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractExodusGlobalTemporalVariables::NewInstance());

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
PyvtkExtractExodusGlobalTemporalVariables_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractExodusGlobalTemporalVariables::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractExodusGlobalTemporalVariables_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractExodusGlobalTemporalVariables *op = static_cast<vtkExtractExodusGlobalTemporalVariables *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractExodusGlobalTemporalVariables::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractExodusGlobalTemporalVariables_SetAutoDetectGlobalTemporalDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoDetectGlobalTemporalDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractExodusGlobalTemporalVariables *op = static_cast<vtkExtractExodusGlobalTemporalVariables *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoDetectGlobalTemporalDataArrays(temp0);
    }
    else
    {
      op->vtkExtractExodusGlobalTemporalVariables::SetAutoDetectGlobalTemporalDataArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractExodusGlobalTemporalVariables_GetAutoDetectGlobalTemporalDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoDetectGlobalTemporalDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractExodusGlobalTemporalVariables *op = static_cast<vtkExtractExodusGlobalTemporalVariables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoDetectGlobalTemporalDataArrays() :
      op->vtkExtractExodusGlobalTemporalVariables::GetAutoDetectGlobalTemporalDataArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractExodusGlobalTemporalVariables_AutoDetectGlobalTemporalDataArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoDetectGlobalTemporalDataArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractExodusGlobalTemporalVariables *op = static_cast<vtkExtractExodusGlobalTemporalVariables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoDetectGlobalTemporalDataArraysOn();
    }
    else
    {
      op->vtkExtractExodusGlobalTemporalVariables::AutoDetectGlobalTemporalDataArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractExodusGlobalTemporalVariables_AutoDetectGlobalTemporalDataArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoDetectGlobalTemporalDataArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractExodusGlobalTemporalVariables *op = static_cast<vtkExtractExodusGlobalTemporalVariables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoDetectGlobalTemporalDataArraysOff();
    }
    else
    {
      op->vtkExtractExodusGlobalTemporalVariables::AutoDetectGlobalTemporalDataArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractExodusGlobalTemporalVariables_Methods[] = {
  {"IsTypeOf", PyvtkExtractExodusGlobalTemporalVariables_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractExodusGlobalTemporalVariables_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractExodusGlobalTemporalVariables_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkExtractExodusGlobalTemporalVariables\nC++: static vtkExtractExodusGlobalTemporalVariables *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractExodusGlobalTemporalVariables_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractExodusGlobalTemporalVariables\nC++: vtkExtractExodusGlobalTemporalVariables *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractExodusGlobalTemporalVariables_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractExodusGlobalTemporalVariables_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetAutoDetectGlobalTemporalDataArrays", PyvtkExtractExodusGlobalTemporalVariables_SetAutoDetectGlobalTemporalDataArrays, METH_VARARGS,
   "SetAutoDetectGlobalTemporalDataArrays(self, _arg:bool) -> None\nC++: virtual void SetAutoDetectGlobalTemporalDataArrays(bool _arg)\n\nWhen set to true (default) this filter will check if any of the\narrays in the input field data has a key named\n`GLOBAL_TEMPORAL_VARIABLE`. If so, this filter will only extract\nthose arrays. If no such array is found, then all single-tuple\narrays are extracted. Set this to false to disable this\nauto-detection and simply extract all single-tuple arrays.\n\n@sa `vtkExodusIIReader::GLOBAL_TEMPORAL_VARIABLE`\n"},
  {"GetAutoDetectGlobalTemporalDataArrays", PyvtkExtractExodusGlobalTemporalVariables_GetAutoDetectGlobalTemporalDataArrays, METH_VARARGS,
   "GetAutoDetectGlobalTemporalDataArrays(self) -> bool\nC++: virtual bool GetAutoDetectGlobalTemporalDataArrays()\n\n"},
  {"AutoDetectGlobalTemporalDataArraysOn", PyvtkExtractExodusGlobalTemporalVariables_AutoDetectGlobalTemporalDataArraysOn, METH_VARARGS,
   "AutoDetectGlobalTemporalDataArraysOn(self) -> None\nC++: virtual void AutoDetectGlobalTemporalDataArraysOn()\n\n"},
  {"AutoDetectGlobalTemporalDataArraysOff", PyvtkExtractExodusGlobalTemporalVariables_AutoDetectGlobalTemporalDataArraysOff, METH_VARARGS,
   "AutoDetectGlobalTemporalDataArraysOff(self) -> None\nC++: virtual void AutoDetectGlobalTemporalDataArraysOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractExodusGlobalTemporalVariables_Doc =
  "vtkExtractExodusGlobalTemporalVariables - extract global temporal\narrays or suitable field data arrays\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkExtractExodusGlobalTemporalVariables extracts field data arrays\n"
  "that it determines to represent temporal quantities. This\n"
  "determination is done as follows:\n\n"
  "* If `AutoDetectGlobalTemporalDataArrays` is true, it checks if to\n"
  "  see if the field data has any array with a key named\n"
  "  \"GLOBAL_TEMPORAL_VARIABLE\". If found, only arrays with this key are\n"
  "extracted.\n"
  "* If such an array is not found, or if\n"
  "  `AutoDetectGlobalTemporalDataArrays` is false, then all arrays with\n"
  "single tuple are extracted.\n\n"
  "If an array has GLOBAL_TEMPORAL_VARIABLE key in its information, it\n"
  "means that the array has multiple tuples each associated with the\n"
  "specific timestep. This was pattern first introduced in\n"
  "`vtkExodusIIReader` and hence the name for this class. This class was\n"
  "originally only intended to extract such arrays. It has since been\n"
  "expanded to support other arrays in field data.\n\n"
  "If the number of tuples in a GLOBAL_TEMPORAL_VARIABLE array is less\n"
  "than the number of timesteps, we assume that we are dealing with\n"
  "restarted files and hence update the pipeline appropriately to\n"
  "request the remaining tuples iteratively.\n\n"
  "For arrays without GLOBAL_TEMPORAL_VARIABLE, we always iterate over\n"
  "all input timesteps one at a time and accumulate the results.\n\n"
  "@sa vtkExodusIIReader, vtkExodusIIReader::GLOBAL_TEMPORAL_VARIABLE.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractExodusGlobalTemporalVariables_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkExtractExodusGlobalTemporalVariables", // tp_name
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
  PyvtkExtractExodusGlobalTemporalVariables_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractExodusGlobalTemporalVariables_StaticNew()
{
  return vtkExtractExodusGlobalTemporalVariables::New();
}

PyObject *PyvtkExtractExodusGlobalTemporalVariables_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractExodusGlobalTemporalVariables_Type, PyvtkExtractExodusGlobalTemporalVariables_Methods,
    "vtkExtractExodusGlobalTemporalVariables",
 &PyvtkExtractExodusGlobalTemporalVariables_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractExodusGlobalTemporalVariables(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractExodusGlobalTemporalVariables_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractExodusGlobalTemporalVariables", o) != 0)
  {
    Py_DECREF(o);
  }

}

