// python wrapper for vtkHyperTreeGridGeometry
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridGeometry.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridGeometry(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGridGeometry_ClassNew(); }


static PyObject *
PyvtkHyperTreeGridGeometry_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridGeometry::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometry_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometry *op = static_cast<vtkHyperTreeGridGeometry *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridGeometry::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometry_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridGeometry *tempr = vtkHyperTreeGridGeometry::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometry_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometry *op = static_cast<vtkHyperTreeGridGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridGeometry *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridGeometry::NewInstance());

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
PyvtkHyperTreeGridGeometry_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridGeometry::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometry_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometry *op = static_cast<vtkHyperTreeGridGeometry *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridGeometry::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometry_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometry *op = static_cast<vtkHyperTreeGridGeometry *>(vp);

  bool temp0 = false;
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
      op->vtkHyperTreeGridGeometry::SetMerging(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometry_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometry *op = static_cast<vtkHyperTreeGridGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMerging() :
      op->vtkHyperTreeGridGeometry::GetMerging());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometry_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometry *op = static_cast<vtkHyperTreeGridGeometry *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassThroughCellIds(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGeometry::SetPassThroughCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometry_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometry *op = static_cast<vtkHyperTreeGridGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassThroughCellIds() :
      op->vtkHyperTreeGridGeometry::GetPassThroughCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometry_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometry *op = static_cast<vtkHyperTreeGridGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOn();
    }
    else
    {
      op->vtkHyperTreeGridGeometry::PassThroughCellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometry_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometry *op = static_cast<vtkHyperTreeGridGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOff();
    }
    else
    {
      op->vtkHyperTreeGridGeometry::PassThroughCellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometry_SetOriginalCellIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalCellIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometry *op = static_cast<vtkHyperTreeGridGeometry *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOriginalCellIdArrayName(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGeometry::SetOriginalCellIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGeometry_GetOriginalCellIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalCellIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGeometry *op = static_cast<vtkHyperTreeGridGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetOriginalCellIdArrayName() :
      op->vtkHyperTreeGridGeometry::GetOriginalCellIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridGeometry_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridGeometry_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridGeometry_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridGeometry_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGridGeometry\nC++: static vtkHyperTreeGridGeometry *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridGeometry_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridGeometry\nC++: vtkHyperTreeGridGeometry *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridGeometry_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridGeometry_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMerging", PyvtkHyperTreeGridGeometry_SetMerging, METH_VARARGS,
   "SetMerging(self, _arg:bool) -> None\nC++: virtual void SetMerging(bool _arg)\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"GetMerging", PyvtkHyperTreeGridGeometry_GetMerging, METH_VARARGS,
   "GetMerging(self) -> bool\nC++: virtual bool GetMerging()\n\n"},
  {"SetPassThroughCellIds", PyvtkHyperTreeGridGeometry_SetPassThroughCellIds, METH_VARARGS,
   "SetPassThroughCellIds(self, _arg:bool) -> None\nC++: virtual void SetPassThroughCellIds(bool _arg)\n\nSet/Get for the PassThroughCellIds boolean.\n\nWhen set to true this boolean ensures an array named with\nwhatever is in `OriginalCellIdArrayName` gets created in the\noutput holding the original cell ids\n\ndefault is false\n"},
  {"GetPassThroughCellIds", PyvtkHyperTreeGridGeometry_GetPassThroughCellIds, METH_VARARGS,
   "GetPassThroughCellIds(self) -> bool\nC++: virtual bool GetPassThroughCellIds()\n\nSet/Get for the PassThroughCellIds boolean.\n\nWhen set to true this boolean ensures an array named with\nwhatever is in `OriginalCellIdArrayName` gets created in the\noutput holding the original cell ids\n\ndefault is false\n"},
  {"PassThroughCellIdsOn", PyvtkHyperTreeGridGeometry_PassThroughCellIdsOn, METH_VARARGS,
   "PassThroughCellIdsOn(self) -> None\nC++: virtual void PassThroughCellIdsOn()\n\nSet/Get for the PassThroughCellIds boolean.\n\nWhen set to true this boolean ensures an array named with\nwhatever is in `OriginalCellIdArrayName` gets created in the\noutput holding the original cell ids\n\ndefault is false\n"},
  {"PassThroughCellIdsOff", PyvtkHyperTreeGridGeometry_PassThroughCellIdsOff, METH_VARARGS,
   "PassThroughCellIdsOff(self) -> None\nC++: virtual void PassThroughCellIdsOff()\n\nSet/Get for the PassThroughCellIds boolean.\n\nWhen set to true this boolean ensures an array named with\nwhatever is in `OriginalCellIdArrayName` gets created in the\noutput holding the original cell ids\n\ndefault is false\n"},
  {"SetOriginalCellIdArrayName", PyvtkHyperTreeGridGeometry_SetOriginalCellIdArrayName, METH_VARARGS,
   "SetOriginalCellIdArrayName(self, _arg:str) -> None\nC++: virtual void SetOriginalCellIdArrayName(std::string _arg)\n\nSet/Get the OriginalCellIdArrayName string.\n\nWhen PassThroughCellIds is set to true, the name of the generated\narray is whatever is set in this variable.\n\ndefault to vtkOriginalCellIds\n"},
  {"GetOriginalCellIdArrayName", PyvtkHyperTreeGridGeometry_GetOriginalCellIdArrayName, METH_VARARGS,
   "GetOriginalCellIdArrayName(self) -> str\nC++: virtual std::string GetOriginalCellIdArrayName()\n\nSet/Get the OriginalCellIdArrayName string.\n\nWhen PassThroughCellIds is set to true, the name of the generated\narray is whatever is set in this variable.\n\ndefault to vtkOriginalCellIds\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGridGeometry_Doc =
  "vtkHyperTreeGridGeometry - Hyper tree grid outer surface\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "@sa\n"
  "vtkHyperTreeGrid vtkHyperTreeGridAlgorithm\n\n"
  "@par Thanks: This class was written by Philippe Pebay, Joachim\n"
  "Pouderoux, and Charles Law, Kitware 2013 This class was modified by\n"
  "Guenole Harel and Jacques-Bernard Lekien, 2014 This class was\n"
  "rewritten by Philippe Pebay, 2016 This class was modified by\n"
  "Jacques-Bernard Lekien and Guenole Harel, 2018 This work was\n"
  "supported by Commissariat a l'Energie Atomique CEA, DAM, DIF, F-91297\n"
  "Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridGeometry_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridGeometry", // tp_name
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
  PyvtkHyperTreeGridGeometry_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridGeometry_StaticNew()
{
  return vtkHyperTreeGridGeometry::New();
}

PyObject *PyvtkHyperTreeGridGeometry_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridGeometry_Type, PyvtkHyperTreeGridGeometry_Methods,
    "vtkHyperTreeGridGeometry",
 &PyvtkHyperTreeGridGeometry_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkHyperTreeGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridGeometry(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridGeometry_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridGeometry", o) != 0)
  {
    Py_DECREF(o);
  }

}

