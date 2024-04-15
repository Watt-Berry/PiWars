// python wrapper for vtkPassSelectedArrays
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPassSelectedArrays.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPassSelectedArrays(PyObject *dict); }
extern "C" { PyObject *PyvtkPassSelectedArrays_ClassNew(); }


static PyObject *
PyvtkPassSelectedArrays_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPassSelectedArrays::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassSelectedArrays_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassSelectedArrays *op = static_cast<vtkPassSelectedArrays *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPassSelectedArrays::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassSelectedArrays_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPassSelectedArrays *tempr = vtkPassSelectedArrays::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassSelectedArrays_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassSelectedArrays *op = static_cast<vtkPassSelectedArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPassSelectedArrays *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPassSelectedArrays::NewInstance());

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
PyvtkPassSelectedArrays_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPassSelectedArrays::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassSelectedArrays_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassSelectedArrays *op = static_cast<vtkPassSelectedArrays *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPassSelectedArrays::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassSelectedArrays_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassSelectedArrays *op = static_cast<vtkPassSelectedArrays *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkPassSelectedArrays::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassSelectedArrays_GetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassSelectedArrays *op = static_cast<vtkPassSelectedArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnabled() :
      op->vtkPassSelectedArrays::GetEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassSelectedArrays_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassSelectedArrays *op = static_cast<vtkPassSelectedArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOn();
    }
    else
    {
      op->vtkPassSelectedArrays::EnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassSelectedArrays_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassSelectedArrays *op = static_cast<vtkPassSelectedArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOff();
    }
    else
    {
      op->vtkPassSelectedArrays::EnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassSelectedArrays_GetArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassSelectedArrays *op = static_cast<vtkPassSelectedArrays *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetArraySelection(temp0) :
      op->vtkPassSelectedArrays::GetArraySelection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassSelectedArrays_GetPointDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassSelectedArrays *op = static_cast<vtkPassSelectedArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPointDataArraySelection() :
      op->vtkPassSelectedArrays::GetPointDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassSelectedArrays_GetCellDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassSelectedArrays *op = static_cast<vtkPassSelectedArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetCellDataArraySelection() :
      op->vtkPassSelectedArrays::GetCellDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassSelectedArrays_GetFieldDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassSelectedArrays *op = static_cast<vtkPassSelectedArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetFieldDataArraySelection() :
      op->vtkPassSelectedArrays::GetFieldDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassSelectedArrays_GetVertexDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassSelectedArrays *op = static_cast<vtkPassSelectedArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetVertexDataArraySelection() :
      op->vtkPassSelectedArrays::GetVertexDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassSelectedArrays_GetEdgeDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassSelectedArrays *op = static_cast<vtkPassSelectedArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetEdgeDataArraySelection() :
      op->vtkPassSelectedArrays::GetEdgeDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassSelectedArrays_GetRowDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassSelectedArrays *op = static_cast<vtkPassSelectedArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetRowDataArraySelection() :
      op->vtkPassSelectedArrays::GetRowDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPassSelectedArrays_Methods[] = {
  {"IsTypeOf", PyvtkPassSelectedArrays_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPassSelectedArrays_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPassSelectedArrays_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPassSelectedArrays\nC++: static vtkPassSelectedArrays *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPassSelectedArrays_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPassSelectedArrays\nC++: vtkPassSelectedArrays *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPassSelectedArrays_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPassSelectedArrays_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEnabled", PyvtkPassSelectedArrays_SetEnabled, METH_VARARGS,
   "SetEnabled(self, _arg:bool) -> None\nC++: virtual void SetEnabled(bool _arg)\n\nEnable/disable this filter. When disabled, this filter passes all\ninput arrays irrespective of the array selections. Default is\n`true`.\n"},
  {"GetEnabled", PyvtkPassSelectedArrays_GetEnabled, METH_VARARGS,
   "GetEnabled(self) -> bool\nC++: virtual bool GetEnabled()\n\n"},
  {"EnabledOn", PyvtkPassSelectedArrays_EnabledOn, METH_VARARGS,
   "EnabledOn(self) -> None\nC++: virtual void EnabledOn()\n\n"},
  {"EnabledOff", PyvtkPassSelectedArrays_EnabledOff, METH_VARARGS,
   "EnabledOff(self) -> None\nC++: virtual void EnabledOff()\n\n"},
  {"GetArraySelection", PyvtkPassSelectedArrays_GetArraySelection, METH_VARARGS,
   "GetArraySelection(self, association:int) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetArraySelection(int association)\n\nReturns the vtkDataArraySelection instance associated with a\nparticular array association type\n(vtkDataObject::FieldAssociations). Returns nullptr if the\nassociation type is invalid others the corresponding\nvtkDataArraySelection instance is returned.\n"},
  {"GetPointDataArraySelection", PyvtkPassSelectedArrays_GetPointDataArraySelection, METH_VARARGS,
   "GetPointDataArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetPointDataArraySelection()\n\nConvenience methods that call `GetArraySelection` with\ncorresponding association type.\n"},
  {"GetCellDataArraySelection", PyvtkPassSelectedArrays_GetCellDataArraySelection, METH_VARARGS,
   "GetCellDataArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetCellDataArraySelection()\n\n"},
  {"GetFieldDataArraySelection", PyvtkPassSelectedArrays_GetFieldDataArraySelection, METH_VARARGS,
   "GetFieldDataArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetFieldDataArraySelection()\n\n"},
  {"GetVertexDataArraySelection", PyvtkPassSelectedArrays_GetVertexDataArraySelection, METH_VARARGS,
   "GetVertexDataArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetVertexDataArraySelection()\n\n"},
  {"GetEdgeDataArraySelection", PyvtkPassSelectedArrays_GetEdgeDataArraySelection, METH_VARARGS,
   "GetEdgeDataArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetEdgeDataArraySelection()\n\n"},
  {"GetRowDataArraySelection", PyvtkPassSelectedArrays_GetRowDataArraySelection, METH_VARARGS,
   "GetRowDataArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetRowDataArraySelection()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPassSelectedArrays_Doc =
  "vtkPassSelectedArrays - pass through chosen arrays\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkPassSelectedArrays can be used to pass through chosen arrays. It\n"
  "is intended as a replacement for vtkPassArrays filter with a more\n"
  "standard API that uses `vtkDataArraySelection` to choose arrays to\n"
  "pass through.\n\n"
  "To enable/disable arrays to pass, get the appropriate\n"
  "`vtkDataArraySelection` instance using `GetArraySelection` or the\n"
  "association specific get methods such as\n"
  "`GetPointDataArraySelection`, `GetCellDataArraySelection` etc. and\n"
  "then enable/disable arrays using `vtkDataArraySelection` API. Using\n"
  "vtkDataArraySelection::SetUnknownArraySetting` one also dictate how\n"
  "arrays not explicitly listed are to be handled.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPassSelectedArrays_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkPassSelectedArrays", // tp_name
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
  PyvtkPassSelectedArrays_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPassSelectedArrays_StaticNew()
{
  return vtkPassSelectedArrays::New();
}

PyObject *PyvtkPassSelectedArrays_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPassSelectedArrays_Type, PyvtkPassSelectedArrays_Methods,
    "vtkPassSelectedArrays",
 &PyvtkPassSelectedArrays_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPassSelectedArrays(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPassSelectedArrays_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPassSelectedArrays", o) != 0)
  {
    Py_DECREF(o);
  }

}

