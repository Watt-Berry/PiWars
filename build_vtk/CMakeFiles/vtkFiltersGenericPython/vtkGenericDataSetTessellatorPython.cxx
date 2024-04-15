// python wrapper for vtkGenericDataSetTessellator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGenericDataSetTessellator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericDataSetTessellator(PyObject *dict); }
extern "C" { PyObject *PyvtkGenericDataSetTessellator_ClassNew(); }


static PyObject *
PyvtkGenericDataSetTessellator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericDataSetTessellator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericDataSetTessellator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericDataSetTessellator *tempr = vtkGenericDataSetTessellator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericDataSetTessellator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericDataSetTessellator::NewInstance());

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
PyvtkGenericDataSetTessellator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGenericDataSetTessellator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGenericDataSetTessellator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_SetKeepCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeepCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeepCellIds(temp0);
    }
    else
    {
      op->vtkGenericDataSetTessellator::SetKeepCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetKeepCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeepCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetKeepCellIds() :
      op->vtkGenericDataSetTessellator::GetKeepCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_KeepCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->KeepCellIdsOn();
    }
    else
    {
      op->vtkGenericDataSetTessellator::KeepCellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_KeepCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->KeepCellIdsOff();
    }
    else
    {
      op->vtkGenericDataSetTessellator::KeepCellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMerging(temp0);
    }
    else
    {
      op->vtkGenericDataSetTessellator::SetMerging(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMerging() :
      op->vtkGenericDataSetTessellator::GetMerging());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergingOn();
    }
    else
    {
      op->vtkGenericDataSetTessellator::MergingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergingOff();
    }
    else
    {
      op->vtkGenericDataSetTessellator::MergingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkGenericDataSetTessellator::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkGenericDataSetTessellator::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkGenericDataSetTessellator::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGenericDataSetTessellator::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericDataSetTessellator_Methods[] = {
  {"IsTypeOf", PyvtkGenericDataSetTessellator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericDataSetTessellator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericDataSetTessellator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGenericDataSetTessellator\nC++: static vtkGenericDataSetTessellator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericDataSetTessellator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGenericDataSetTessellator\nC++: vtkGenericDataSetTessellator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGenericDataSetTessellator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGenericDataSetTessellator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetKeepCellIds", PyvtkGenericDataSetTessellator_SetKeepCellIds, METH_VARARGS,
   "SetKeepCellIds(self, _arg:int) -> None\nC++: virtual void SetKeepCellIds(vtkTypeBool _arg)\n\nTurn on/off generation of a cell centered attribute with ids of\nthe original cells (as an input cell is tessellated into several\nlinear cells). The name of the data array is \"OriginalIds\". It is\ntrue by default.\n"},
  {"GetKeepCellIds", PyvtkGenericDataSetTessellator_GetKeepCellIds, METH_VARARGS,
   "GetKeepCellIds(self) -> int\nC++: virtual vtkTypeBool GetKeepCellIds()\n\n"},
  {"KeepCellIdsOn", PyvtkGenericDataSetTessellator_KeepCellIdsOn, METH_VARARGS,
   "KeepCellIdsOn(self) -> None\nC++: virtual void KeepCellIdsOn()\n\n"},
  {"KeepCellIdsOff", PyvtkGenericDataSetTessellator_KeepCellIdsOff, METH_VARARGS,
   "KeepCellIdsOff(self) -> None\nC++: virtual void KeepCellIdsOff()\n\n"},
  {"SetMerging", PyvtkGenericDataSetTessellator_SetMerging, METH_VARARGS,
   "SetMerging(self, _arg:int) -> None\nC++: virtual void SetMerging(vtkTypeBool _arg)\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"GetMerging", PyvtkGenericDataSetTessellator_GetMerging, METH_VARARGS,
   "GetMerging(self) -> int\nC++: virtual vtkTypeBool GetMerging()\n\n"},
  {"MergingOn", PyvtkGenericDataSetTessellator_MergingOn, METH_VARARGS,
   "MergingOn(self) -> None\nC++: virtual void MergingOn()\n\n"},
  {"MergingOff", PyvtkGenericDataSetTessellator_MergingOff, METH_VARARGS,
   "MergingOff(self) -> None\nC++: virtual void MergingOff()\n\n"},
  {"SetLocator", PyvtkGenericDataSetTessellator_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkIncrementalPointLocator) -> None\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkGenericDataSetTessellator_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\n"},
  {"CreateDefaultLocator", PyvtkGenericDataSetTessellator_CreateDefaultLocator, METH_VARARGS,
   "CreateDefaultLocator(self) -> None\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {"GetMTime", PyvtkGenericDataSetTessellator_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the locator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGenericDataSetTessellator_Doc =
  "vtkGenericDataSetTessellator - tessellates generic, higher-order\ndatasets into linear cells\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkGenericDataSetTessellator is a filter that subdivides a\n"
  "vtkGenericDataSet into linear elements (i.e., linear VTK cells).\n"
  "Tetrahedras are produced from 3D cells; triangles from 2D cells; and\n"
  "lines from 1D cells. The subdivision process depends on the cell\n"
  "tessellator associated with the input generic dataset, and its\n"
  "associated error metric. (These can be specified by the user if\n"
  "necessary.)\n\n"
  "This filter is typically used to convert a higher-order, complex\n"
  "dataset represented by a vtkGenericDataSet into a conventional\n"
  "vtkDataSet that can be operated on by linear VTK graphics filters\n"
  "(end of pipeline for rendering).\n\n"
  "@sa\n"
  "vtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGenericDataSetTessellator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneric.vtkGenericDataSetTessellator", // tp_name
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
  PyvtkGenericDataSetTessellator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericDataSetTessellator_StaticNew()
{
  return vtkGenericDataSetTessellator::New();
}

PyObject *PyvtkGenericDataSetTessellator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGenericDataSetTessellator_Type, PyvtkGenericDataSetTessellator_Methods,
    "vtkGenericDataSetTessellator",
 &PyvtkGenericDataSetTessellator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenericDataSetTessellator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericDataSetTessellator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericDataSetTessellator", o) != 0)
  {
    Py_DECREF(o);
  }

}

