// python wrapper for vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_ClassNew(); }

#ifndef DECLARED_PyvtkHyperTreeGridNonOrientedSuperCursorLight_ClassNew
extern "C" { PyObject *PyvtkHyperTreeGridNonOrientedSuperCursorLight_ClassNew(); }
#define DECLARED_PyvtkHyperTreeGridNonOrientedSuperCursorLight_ClassNew
#endif

static PyObject *
PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight *tempr = vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight::NewInstance());

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
PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  long long temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight::Initialize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight\nC++: static vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_NewInstance, METH_VARARGS,
   "NewInstance(self)\n    -> vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight\nC++: vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight *NewInstance(\n    )\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_Initialize, METH_VARARGS,
   "Initialize(self, grid:vtkHyperTreeGrid, treeIndex:int,\n    create:bool=False) -> None\nC++: void Initialize(vtkHyperTreeGrid *grid, vtkIdType treeIndex,\n    bool create=false) override;\n\nInitialize cursor at root of given tree index in grid. JB Le\ncreate ne s'applique que sur le HT central.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_Doc =
  "vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight - Objects for\ntraversal a HyperTreeGrid.\n\n"
  "Superclass: vtkHyperTreeGridNonOrientedSuperCursorLight\n\n"
  "JB A REVOIR Objects that can perform depth traversal of a hyper tree\n"
  "grid, take into account more parameters (related to the grid\n"
  "structure) than the compact hyper tree cursor implemented in\n"
  "vtkHyperTree can. This is an abstract class. Cursors are created by\n"
  "the HyperTreeGrid implementation.\n\n"
  "@sa\n"
  "vtkHyperTreeCursor vtkHyperTree vtkHyperTreeGrid\n\n"
  "@par Thanks: This class was written by Guenole Harel and\n"
  "Jacques-Bernard Lekien, 2014. This class was re-written by Philippe\n"
  "Pebay, 2016. This class was re-written and optimized by\n"
  "Jacques-Bernard Lekien, Guenole Harel and Jerome Dubois, 2018. This\n"
  "work was supported by Commissariat a l'Energie Atomique CEA, DAM,\n"
  "DIF, F-91297 Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight", // tp_name
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
  PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_StaticNew()
{
  return vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight::New();
}

PyObject *PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_Type, PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_Methods,
    "vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight",
 &PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkHyperTreeGridNonOrientedSuperCursorLight_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight", o) != 0)
  {
    Py_DECREF(o);
  }

}

