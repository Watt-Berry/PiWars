// python wrapper for vtkAMRUtilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAMRUtilities.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRUtilities(PyObject *dict); }
extern "C" { PyObject *PyvtkAMRUtilities_ClassNew(); }


static PyObject *
PyvtkAMRUtilities_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRUtilities::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRUtilities *op = static_cast<vtkAMRUtilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRUtilities_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRUtilities *tempr = vtkAMRUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRUtilities *op = static_cast<vtkAMRUtilities *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRUtilities::NewInstance());

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
PyvtkAMRUtilities_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAMRUtilities::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRUtilities_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRUtilities *op = static_cast<vtkAMRUtilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAMRUtilities::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRUtilities_StripGhostLayers(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "StripGhostLayers");

  vtkOverlappingAMR *temp0 = nullptr;
  vtkOverlappingAMR *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR") &&
      ap.GetVTKObject(temp1, "vtkOverlappingAMR"))
  {
    vtkAMRUtilities::StripGhostLayers(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRUtilities_HasPartiallyOverlappingGhostCells(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HasPartiallyOverlappingGhostCells");

  vtkOverlappingAMR *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR"))
  {
    bool tempr = vtkAMRUtilities::HasPartiallyOverlappingGhostCells(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRUtilities_BlankCells(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "BlankCells");

  vtkOverlappingAMR *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR"))
  {
    vtkAMRUtilities::BlankCells(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRUtilities_Methods[] = {
  {"IsTypeOf", PyvtkAMRUtilities_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRUtilities_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRUtilities_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAMRUtilities\nC++: static vtkAMRUtilities *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRUtilities_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAMRUtilities\nC++: vtkAMRUtilities *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAMRUtilities_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAMRUtilities_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"StripGhostLayers", PyvtkAMRUtilities_StripGhostLayers, METH_VARARGS,
   "StripGhostLayers(ghostedAMRData:vtkOverlappingAMR,\n    strippedAMRData:vtkOverlappingAMR) -> None\nC++: static void StripGhostLayers(\n    vtkOverlappingAMR *ghostedAMRData,\n    vtkOverlappingAMR *strippedAMRData)\n\nThis method detects and strips partially overlapping cells from a\ngiven AMR dataset. If ghost layers are detected, they are removed\nand new grid instances are created to represent the stripped\ndata-set otherwise, each block is shallow-copied.\n\n* .SECTION Assumptions\n* 1) The ghosted AMR data must have complete metadata\n  information.\n"},
  {"HasPartiallyOverlappingGhostCells", PyvtkAMRUtilities_HasPartiallyOverlappingGhostCells, METH_VARARGS,
   "HasPartiallyOverlappingGhostCells(amr:vtkOverlappingAMR) -> bool\nC++: static bool HasPartiallyOverlappingGhostCells(\n    vtkOverlappingAMR *amr)\n\nA quick test of whether partially overlapping ghost cells exist.\nThis test starts from the highest-res boxes and checks if they\nhave partially overlapping cells. The code returns with true once\npartially overlapping cells are detected. Otherwise, false is\nreturned.\n"},
  {"BlankCells", PyvtkAMRUtilities_BlankCells, METH_VARARGS,
   "BlankCells(amr:vtkOverlappingAMR) -> None\nC++: static void BlankCells(vtkOverlappingAMR *amr)\n\nBlank cells in overlapping AMR\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAMRUtilities_Doc =
  "vtkAMRUtilities -  A concrete instance of vtkObject that employs a\nsingleton design\n pattern and implements functionality for AMR specific operations.\n\n"
  "Superclass: vtkObject\n\n"
  "@sa\n"
  " vtkOverlappingAMR, vtkAMRBox\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAMRUtilities_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkAMRUtilities", // tp_name
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
  PyvtkAMRUtilities_Doc, // tp_doc
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

PyObject *PyvtkAMRUtilities_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAMRUtilities_Type, PyvtkAMRUtilities_Methods,
    "vtkAMRUtilities",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRUtilities(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRUtilities_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRUtilities", o) != 0)
  {
    Py_DECREF(o);
  }

}

