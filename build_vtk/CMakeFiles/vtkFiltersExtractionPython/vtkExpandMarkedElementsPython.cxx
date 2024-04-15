// python wrapper for vtkExpandMarkedElements
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExpandMarkedElements.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExpandMarkedElements(PyObject *dict); }
extern "C" { PyObject *PyvtkExpandMarkedElements_ClassNew(); }


static PyObject *
PyvtkExpandMarkedElements_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExpandMarkedElements::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExpandMarkedElements::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExpandMarkedElements *tempr = vtkExpandMarkedElements::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExpandMarkedElements *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExpandMarkedElements::NewInstance());

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
PyvtkExpandMarkedElements_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExpandMarkedElements::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExpandMarkedElements::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkExpandMarkedElements::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkExpandMarkedElements::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_SetNumberOfLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLayers(temp0);
    }
    else
    {
      op->vtkExpandMarkedElements::SetNumberOfLayers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_GetNumberOfLayersMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayersMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLayersMinValue() :
      op->vtkExpandMarkedElements::GetNumberOfLayersMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_GetNumberOfLayersMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayersMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLayersMaxValue() :
      op->vtkExpandMarkedElements::GetNumberOfLayersMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_GetNumberOfLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLayers() :
      op->vtkExpandMarkedElements::GetNumberOfLayers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_SetRemoveSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoveSeed(temp0);
    }
    else
    {
      op->vtkExpandMarkedElements::SetRemoveSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_GetRemoveSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveSeed() :
      op->vtkExpandMarkedElements::GetRemoveSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_RemoveSeedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveSeedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveSeedOn();
    }
    else
    {
      op->vtkExpandMarkedElements::RemoveSeedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_RemoveSeedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveSeedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveSeedOff();
    }
    else
    {
      op->vtkExpandMarkedElements::RemoveSeedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_SetRemoveIntermediateLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveIntermediateLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoveIntermediateLayers(temp0);
    }
    else
    {
      op->vtkExpandMarkedElements::SetRemoveIntermediateLayers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_GetRemoveIntermediateLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveIntermediateLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveIntermediateLayers() :
      op->vtkExpandMarkedElements::GetRemoveIntermediateLayers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_RemoveIntermediateLayersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveIntermediateLayersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveIntermediateLayersOn();
    }
    else
    {
      op->vtkExpandMarkedElements::RemoveIntermediateLayersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandMarkedElements_RemoveIntermediateLayersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveIntermediateLayersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandMarkedElements *op = static_cast<vtkExpandMarkedElements *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveIntermediateLayersOff();
    }
    else
    {
      op->vtkExpandMarkedElements::RemoveIntermediateLayersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExpandMarkedElements_Methods[] = {
  {"IsTypeOf", PyvtkExpandMarkedElements_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExpandMarkedElements_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExpandMarkedElements_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExpandMarkedElements\nC++: static vtkExpandMarkedElements *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExpandMarkedElements_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExpandMarkedElements\nC++: vtkExpandMarkedElements *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExpandMarkedElements_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExpandMarkedElements_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetController", PyvtkExpandMarkedElements_SetController, METH_VARARGS,
   "SetController(self, __a:vtkMultiProcessController) -> None\nC++: void SetController(vtkMultiProcessController *)\n\nGet/Set the controller to use. By default, is initialized to\n`vtkMultiProcessController::GetGlobalController` in the\nconstructor.\n"},
  {"GetController", PyvtkExpandMarkedElements_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"SetNumberOfLayers", PyvtkExpandMarkedElements_SetNumberOfLayers, METH_VARARGS,
   "SetNumberOfLayers(self, _arg:int) -> None\nC++: virtual void SetNumberOfLayers(int _arg)\n\nGet/Set the number of layers to expand by. Default is 2.\n"},
  {"GetNumberOfLayersMinValue", PyvtkExpandMarkedElements_GetNumberOfLayersMinValue, METH_VARARGS,
   "GetNumberOfLayersMinValue(self) -> int\nC++: virtual int GetNumberOfLayersMinValue()\n\n"},
  {"GetNumberOfLayersMaxValue", PyvtkExpandMarkedElements_GetNumberOfLayersMaxValue, METH_VARARGS,
   "GetNumberOfLayersMaxValue(self) -> int\nC++: virtual int GetNumberOfLayersMaxValue()\n\n"},
  {"GetNumberOfLayers", PyvtkExpandMarkedElements_GetNumberOfLayers, METH_VARARGS,
   "GetNumberOfLayers(self) -> int\nC++: virtual int GetNumberOfLayers()\n\n"},
  {"SetRemoveSeed", PyvtkExpandMarkedElements_SetRemoveSeed, METH_VARARGS,
   "SetRemoveSeed(self, _arg:bool) -> None\nC++: virtual void SetRemoveSeed(bool _arg)\n\nGet/Set the flag to remove seed of marked elements. Default is\nfalse.\n"},
  {"GetRemoveSeed", PyvtkExpandMarkedElements_GetRemoveSeed, METH_VARARGS,
   "GetRemoveSeed(self) -> bool\nC++: virtual bool GetRemoveSeed()\n\n"},
  {"RemoveSeedOn", PyvtkExpandMarkedElements_RemoveSeedOn, METH_VARARGS,
   "RemoveSeedOn(self) -> None\nC++: virtual void RemoveSeedOn()\n\n"},
  {"RemoveSeedOff", PyvtkExpandMarkedElements_RemoveSeedOff, METH_VARARGS,
   "RemoveSeedOff(self) -> None\nC++: virtual void RemoveSeedOff()\n\n"},
  {"SetRemoveIntermediateLayers", PyvtkExpandMarkedElements_SetRemoveIntermediateLayers, METH_VARARGS,
   "SetRemoveIntermediateLayers(self, _arg:bool) -> None\nC++: virtual void SetRemoveIntermediateLayers(bool _arg)\n\nGet/Set the flag to remove intermediate layers Default is false.\n"},
  {"GetRemoveIntermediateLayers", PyvtkExpandMarkedElements_GetRemoveIntermediateLayers, METH_VARARGS,
   "GetRemoveIntermediateLayers(self) -> bool\nC++: virtual bool GetRemoveIntermediateLayers()\n\n"},
  {"RemoveIntermediateLayersOn", PyvtkExpandMarkedElements_RemoveIntermediateLayersOn, METH_VARARGS,
   "RemoveIntermediateLayersOn(self) -> None\nC++: virtual void RemoveIntermediateLayersOn()\n\n"},
  {"RemoveIntermediateLayersOff", PyvtkExpandMarkedElements_RemoveIntermediateLayersOff, METH_VARARGS,
   "RemoveIntermediateLayersOff(self) -> None\nC++: virtual void RemoveIntermediateLayersOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExpandMarkedElements_Doc =
  "vtkExpandMarkedElements - expands marked elements to including\nadjacent elements.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkExpandMarkedElements is intended to expand selected cells to grow\n"
  "to include adjacent cells. The filter works across all blocks in a\n"
  "composite dataset and across all ranks. Besides cells, the filter can\n"
  "be used to expand selected points instead in which case adjacent\n"
  "points are defined as points on any cell that has the source point as\n"
  "one of its points.\n\n"
  "The selected cells (or points) are indicated by a\n"
  "`vtkSignedCharArray` on cell-data (or point-data). The array can be\n"
  "selected by using `SetInputArrayToProcess(0, 0, 0,...)` (see\n"
  "vtkAlgorithm::SetInputArrayToProcess).\n\n"
  "Currently, the filter only supports expanding marked elements for\n"
  "cells and points.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExpandMarkedElements_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkExpandMarkedElements", // tp_name
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
  PyvtkExpandMarkedElements_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExpandMarkedElements_StaticNew()
{
  return vtkExpandMarkedElements::New();
}

PyObject *PyvtkExpandMarkedElements_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExpandMarkedElements_Type, PyvtkExpandMarkedElements_Methods,
    "vtkExpandMarkedElements",
 &PyvtkExpandMarkedElements_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExpandMarkedElements(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExpandMarkedElements_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExpandMarkedElements", o) != 0)
  {
    Py_DECREF(o);
  }

}

