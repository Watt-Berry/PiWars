// python wrapper for vtkAnnotationLink
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAnnotationLink.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAnnotationLink(PyObject *dict); }
extern "C" { PyObject *PyvtkAnnotationLink_ClassNew(); }


static PyObject *
PyvtkAnnotationLink_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAnnotationLink::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLink_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnnotationLink::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLink_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAnnotationLink *tempr = vtkAnnotationLink::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLink_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnnotationLink *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnnotationLink::NewInstance());

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
PyvtkAnnotationLink_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAnnotationLink::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLink_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAnnotationLink::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLink_GetAnnotationLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnnotationLayers *tempr = (ap.IsBound() ?
      op->GetAnnotationLayers() :
      op->vtkAnnotationLink::GetAnnotationLayers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLink_SetAnnotationLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  vtkAnnotationLayers *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLayers"))
  {
    if (ap.IsBound())
    {
      op->SetAnnotationLayers(temp0);
    }
    else
    {
      op->vtkAnnotationLink::SetAnnotationLayers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLink_SetCurrentSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->SetCurrentSelection(temp0);
    }
    else
    {
      op->vtkAnnotationLink::SetCurrentSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLink_GetCurrentSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetCurrentSelection() :
      op->vtkAnnotationLink::GetCurrentSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLink_AddDomainMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDomainMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->AddDomainMap(temp0);
    }
    else
    {
      op->vtkAnnotationLink::AddDomainMap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLink_RemoveDomainMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDomainMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->RemoveDomainMap(temp0);
    }
    else
    {
      op->vtkAnnotationLink::RemoveDomainMap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLink_RemoveAllDomainMaps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllDomainMaps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllDomainMaps();
    }
    else
    {
      op->vtkAnnotationLink::RemoveAllDomainMaps();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLink_GetNumberOfDomainMaps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDomainMaps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDomainMaps() :
      op->vtkAnnotationLink::GetNumberOfDomainMaps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLink_GetDomainMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDomainMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetDomainMap(temp0) :
      op->vtkAnnotationLink::GetDomainMap(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotationLink_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotationLink *op = static_cast<vtkAnnotationLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAnnotationLink::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAnnotationLink_Methods[] = {
  {"IsTypeOf", PyvtkAnnotationLink_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAnnotationLink_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAnnotationLink_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAnnotationLink\nC++: static vtkAnnotationLink *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAnnotationLink_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAnnotationLink\nC++: vtkAnnotationLink *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAnnotationLink_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAnnotationLink_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetAnnotationLayers", PyvtkAnnotationLink_GetAnnotationLayers, METH_VARARGS,
   "GetAnnotationLayers(self) -> vtkAnnotationLayers\nC++: virtual vtkAnnotationLayers *GetAnnotationLayers()\n\nThe annotations to be shared.\n"},
  {"SetAnnotationLayers", PyvtkAnnotationLink_SetAnnotationLayers, METH_VARARGS,
   "SetAnnotationLayers(self, layers:vtkAnnotationLayers) -> None\nC++: virtual void SetAnnotationLayers(vtkAnnotationLayers *layers)\n\n"},
  {"SetCurrentSelection", PyvtkAnnotationLink_SetCurrentSelection, METH_VARARGS,
   "SetCurrentSelection(self, sel:vtkSelection) -> None\nC++: virtual void SetCurrentSelection(vtkSelection *sel)\n\nSet or get the current selection in the annotation layers.\n"},
  {"GetCurrentSelection", PyvtkAnnotationLink_GetCurrentSelection, METH_VARARGS,
   "GetCurrentSelection(self) -> vtkSelection\nC++: virtual vtkSelection *GetCurrentSelection()\n\n"},
  {"AddDomainMap", PyvtkAnnotationLink_AddDomainMap, METH_VARARGS,
   "AddDomainMap(self, map:vtkTable) -> None\nC++: void AddDomainMap(vtkTable *map)\n\nThe domain mappings.\n"},
  {"RemoveDomainMap", PyvtkAnnotationLink_RemoveDomainMap, METH_VARARGS,
   "RemoveDomainMap(self, map:vtkTable) -> None\nC++: void RemoveDomainMap(vtkTable *map)\n\n"},
  {"RemoveAllDomainMaps", PyvtkAnnotationLink_RemoveAllDomainMaps, METH_VARARGS,
   "RemoveAllDomainMaps(self) -> None\nC++: void RemoveAllDomainMaps()\n\n"},
  {"GetNumberOfDomainMaps", PyvtkAnnotationLink_GetNumberOfDomainMaps, METH_VARARGS,
   "GetNumberOfDomainMaps(self) -> int\nC++: int GetNumberOfDomainMaps()\n\n"},
  {"GetDomainMap", PyvtkAnnotationLink_GetDomainMap, METH_VARARGS,
   "GetDomainMap(self, i:int) -> vtkTable\nC++: vtkTable *GetDomainMap(int i)\n\n"},
  {"GetMTime", PyvtkAnnotationLink_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the mtime of this object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAnnotationLink_Doc =
  "vtkAnnotationLink - An algorithm for linking annotations among objects\n\n"
  "Superclass: vtkAnnotationLayersAlgorithm\n\n"
  "vtkAnnotationLink is a simple source filter which outputs the\n"
  "vtkAnnotationLayers object stored internally.  Multiple objects may\n"
  "share the same annotation link filter and connect it to an internal\n"
  "pipeline so that if one object changes the annotation set, it will be\n"
  "pulled into all the other objects when their pipelines update.\n\n"
  "The shared vtkAnnotationLayers object (a collection of annotations)\n"
  "is shallow copied to output port 0.\n\n"
  "vtkAnnotationLink can also store a set of domain maps. A domain map\n"
  "is simply a table associating values between domains. The domain of\n"
  "each column is defined by the array name of the column. The domain\n"
  "maps are sent to a multi-block dataset in output port 1.\n\n"
  "Output ports 0 and 1 can be set as input ports 0 and 1 to\n"
  "vtkConvertSelectionDomain, which can use the domain maps to convert\n"
  "the domains of selections in the vtkAnnotationLayers to match a\n"
  "particular data object (set as port 2 on vtkConvertSelectionDomain).\n\n"
  "The shared vtkAnnotationLayers object also stores a \"current\n"
  "selection\" normally interpreted as the interactive selection of an\n"
  "application. As a convenience, this selection is sent to output port\n"
  "2 so that it can be connected to pipelines requiring a vtkSelection.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAnnotationLink_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkAnnotationLink", // tp_name
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
  PyvtkAnnotationLink_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAnnotationLink_StaticNew()
{
  return vtkAnnotationLink::New();
}

PyObject *PyvtkAnnotationLink_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAnnotationLink_Type, PyvtkAnnotationLink_Methods,
    "vtkAnnotationLink",
 &PyvtkAnnotationLink_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAnnotationLayersAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAnnotationLink(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAnnotationLink_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAnnotationLink", o) != 0)
  {
    Py_DECREF(o);
  }

}

