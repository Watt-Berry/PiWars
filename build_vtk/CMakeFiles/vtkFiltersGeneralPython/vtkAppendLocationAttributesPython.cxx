// python wrapper for vtkAppendLocationAttributes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAppendLocationAttributes.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAppendLocationAttributes(PyObject *dict); }
extern "C" { PyObject *PyvtkAppendLocationAttributes_ClassNew(); }


static PyObject *
PyvtkAppendLocationAttributes_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAppendLocationAttributes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendLocationAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendLocationAttributes *op = static_cast<vtkAppendLocationAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAppendLocationAttributes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendLocationAttributes_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAppendLocationAttributes *tempr = vtkAppendLocationAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendLocationAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendLocationAttributes *op = static_cast<vtkAppendLocationAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAppendLocationAttributes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAppendLocationAttributes::NewInstance());

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
PyvtkAppendLocationAttributes_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAppendLocationAttributes::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendLocationAttributes_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendLocationAttributes *op = static_cast<vtkAppendLocationAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAppendLocationAttributes::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendLocationAttributes_SetAppendPointLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppendPointLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendLocationAttributes *op = static_cast<vtkAppendLocationAttributes *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAppendPointLocations(temp0);
    }
    else
    {
      op->vtkAppendLocationAttributes::SetAppendPointLocations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendLocationAttributes_GetAppendPointLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppendPointLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendLocationAttributes *op = static_cast<vtkAppendLocationAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAppendPointLocations() :
      op->vtkAppendLocationAttributes::GetAppendPointLocations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendLocationAttributes_AppendPointLocationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendPointLocationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendLocationAttributes *op = static_cast<vtkAppendLocationAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AppendPointLocationsOn();
    }
    else
    {
      op->vtkAppendLocationAttributes::AppendPointLocationsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendLocationAttributes_AppendPointLocationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendPointLocationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendLocationAttributes *op = static_cast<vtkAppendLocationAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AppendPointLocationsOff();
    }
    else
    {
      op->vtkAppendLocationAttributes::AppendPointLocationsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendLocationAttributes_SetAppendCellCenters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppendCellCenters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendLocationAttributes *op = static_cast<vtkAppendLocationAttributes *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAppendCellCenters(temp0);
    }
    else
    {
      op->vtkAppendLocationAttributes::SetAppendCellCenters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendLocationAttributes_GetAppendCellCenters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppendCellCenters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendLocationAttributes *op = static_cast<vtkAppendLocationAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAppendCellCenters() :
      op->vtkAppendLocationAttributes::GetAppendCellCenters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendLocationAttributes_AppendCellCentersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendCellCentersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendLocationAttributes *op = static_cast<vtkAppendLocationAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AppendCellCentersOn();
    }
    else
    {
      op->vtkAppendLocationAttributes::AppendCellCentersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendLocationAttributes_AppendCellCentersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendCellCentersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendLocationAttributes *op = static_cast<vtkAppendLocationAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AppendCellCentersOff();
    }
    else
    {
      op->vtkAppendLocationAttributes::AppendCellCentersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAppendLocationAttributes_Methods[] = {
  {"IsTypeOf", PyvtkAppendLocationAttributes_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAppendLocationAttributes_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAppendLocationAttributes_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAppendLocationAttributes\nC++: static vtkAppendLocationAttributes *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAppendLocationAttributes_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAppendLocationAttributes\nC++: vtkAppendLocationAttributes *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAppendLocationAttributes_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAppendLocationAttributes_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetAppendPointLocations", PyvtkAppendLocationAttributes_SetAppendPointLocations, METH_VARARGS,
   "SetAppendPointLocations(self, _arg:bool) -> None\nC++: virtual void SetAppendPointLocations(bool _arg)\n\nEnable/disable whether input point locations should be saved as a\npoint data array. Default is `true` i.e. the points will be\npropagated as a point data array named \"PointLocations\".\n"},
  {"GetAppendPointLocations", PyvtkAppendLocationAttributes_GetAppendPointLocations, METH_VARARGS,
   "GetAppendPointLocations(self) -> bool\nC++: virtual bool GetAppendPointLocations()\n\n"},
  {"AppendPointLocationsOn", PyvtkAppendLocationAttributes_AppendPointLocationsOn, METH_VARARGS,
   "AppendPointLocationsOn(self) -> None\nC++: virtual void AppendPointLocationsOn()\n\n"},
  {"AppendPointLocationsOff", PyvtkAppendLocationAttributes_AppendPointLocationsOff, METH_VARARGS,
   "AppendPointLocationsOff(self) -> None\nC++: virtual void AppendPointLocationsOff()\n\n"},
  {"SetAppendCellCenters", PyvtkAppendLocationAttributes_SetAppendCellCenters, METH_VARARGS,
   "SetAppendCellCenters(self, _arg:bool) -> None\nC++: virtual void SetAppendCellCenters(bool _arg)\n\nEnable/disable whether input cell center locations should be\nsaved as a cell data array. Default is `true` i.e. the cell\ncenters will be propagated as a cell data array named\n\"CellCenters\".\n"},
  {"GetAppendCellCenters", PyvtkAppendLocationAttributes_GetAppendCellCenters, METH_VARARGS,
   "GetAppendCellCenters(self) -> bool\nC++: virtual bool GetAppendCellCenters()\n\n"},
  {"AppendCellCentersOn", PyvtkAppendLocationAttributes_AppendCellCentersOn, METH_VARARGS,
   "AppendCellCentersOn(self) -> None\nC++: virtual void AppendCellCentersOn()\n\n"},
  {"AppendCellCentersOff", PyvtkAppendLocationAttributes_AppendCellCentersOff, METH_VARARGS,
   "AppendCellCentersOff(self) -> None\nC++: virtual void AppendCellCentersOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAppendLocationAttributes_Doc =
  "vtkAppendLocationAttributes - add point locations to point data\nand/or cell centers cell data, respectively\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkAppendLocationAttributes is a filter that takes as input any\n"
  "dataset and optionally adds points as point data and optionally adds\n"
  "cell center locations as cell data in the output. The center of a\n"
  "cell is its parametric center, not necessarily the geometric or\n"
  "bounding box center. Point and cell attributes in the input can\n"
  "optionally be copied to the output.\n\n"
  "ote Empty cells will have their center set to (0, 0, 0).\n\n"
  "@sa\n"
  "vtkCellCenters\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAppendLocationAttributes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkAppendLocationAttributes", // tp_name
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
  PyvtkAppendLocationAttributes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAppendLocationAttributes_StaticNew()
{
  return vtkAppendLocationAttributes::New();
}

PyObject *PyvtkAppendLocationAttributes_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAppendLocationAttributes_Type, PyvtkAppendLocationAttributes_Methods,
    "vtkAppendLocationAttributes",
 &PyvtkAppendLocationAttributes_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAppendLocationAttributes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAppendLocationAttributes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAppendLocationAttributes", o) != 0)
  {
    Py_DECREF(o);
  }

}

