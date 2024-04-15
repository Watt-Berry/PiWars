// python wrapper for vtkActor2DCollection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkActor2DCollection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkActor2DCollection(PyObject *dict); }
extern "C" { PyObject *PyvtkActor2DCollection_ClassNew(); }

#ifndef DECLARED_PyvtkPropCollection_ClassNew
extern "C" { PyObject *PyvtkPropCollection_ClassNew(); }
#define DECLARED_PyvtkPropCollection_ClassNew
#endif

static PyObject *
PyvtkActor2DCollection_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkActor2DCollection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkActor2DCollection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkActor2DCollection *tempr = vtkActor2DCollection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor2DCollection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkActor2DCollection::NewInstance());

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
PyvtkActor2DCollection_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkActor2DCollection::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkActor2DCollection::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_Sort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Sort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Sort();
    }
    else
    {
      op->vtkActor2DCollection::Sort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  vtkActor2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->AddItem(temp0);
    }
    else
    {
      op->vtkActor2DCollection::AddItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_IsItemPresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsItemPresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  vtkActor2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor2D"))
  {
    int tempr = (ap.IsBound() ?
      op->IsItemPresent(temp0) :
      op->vtkActor2DCollection::IsItemPresent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_IndexOfFirstOccurence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IndexOfFirstOccurence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  vtkActor2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor2D"))
  {
    int tempr = (ap.IsBound() ?
      op->IndexOfFirstOccurence(temp0) :
      op->vtkActor2DCollection::IndexOfFirstOccurence(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_GetNextActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->GetNextActor2D() :
      op->vtkActor2DCollection::GetNextActor2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_GetLastActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->GetLastActor2D() :
      op->vtkActor2DCollection::GetLastActor2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_GetNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->GetNextItem() :
      op->vtkActor2DCollection::GetNextItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_GetLastItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->GetLastItem() :
      op->vtkActor2DCollection::GetLastItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2DCollection_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2DCollection *op = static_cast<vtkActor2DCollection *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->RenderOverlay(temp0);
    }
    else
    {
      op->vtkActor2DCollection::RenderOverlay(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkActor2DCollection_Methods[] = {
  {"IsTypeOf", PyvtkActor2DCollection_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkActor2DCollection_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkActor2DCollection_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkActor2DCollection\nC++: static vtkActor2DCollection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkActor2DCollection_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkActor2DCollection\nC++: vtkActor2DCollection *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkActor2DCollection_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkActor2DCollection_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Sort", PyvtkActor2DCollection_Sort, METH_VARARGS,
   "Sort(self) -> None\nC++: void Sort()\n\nSorts the vtkActor2DCollection by layer number.  Smaller layer\nnumbers are first.  Layer numbers can be any integer value.\n"},
  {"AddItem", PyvtkActor2DCollection_AddItem, METH_VARARGS,
   "AddItem(self, a:vtkActor2D) -> None\nC++: void AddItem(vtkActor2D *a)\n\nAdd an actor to the list.  The new actor is inserted in the list\naccording to it's layer number.\n"},
  {"IsItemPresent", PyvtkActor2DCollection_IsItemPresent, METH_VARARGS,
   "IsItemPresent(self, a:vtkActor2D) -> int\nC++: int IsItemPresent(vtkActor2D *a)\n\nStandard Collection methods\n"},
  {"IndexOfFirstOccurence", PyvtkActor2DCollection_IndexOfFirstOccurence, METH_VARARGS,
   "IndexOfFirstOccurence(self, a:vtkActor2D) -> int\nC++: int IndexOfFirstOccurence(vtkActor2D *a)\n\n"},
  {"GetNextActor2D", PyvtkActor2DCollection_GetNextActor2D, METH_VARARGS,
   "GetNextActor2D(self) -> vtkActor2D\nC++: vtkActor2D *GetNextActor2D()\n\n"},
  {"GetLastActor2D", PyvtkActor2DCollection_GetLastActor2D, METH_VARARGS,
   "GetLastActor2D(self) -> vtkActor2D\nC++: vtkActor2D *GetLastActor2D()\n\n"},
  {"GetNextItem", PyvtkActor2DCollection_GetNextItem, METH_VARARGS,
   "GetNextItem(self) -> vtkActor2D\nC++: vtkActor2D *GetNextItem()\n\nAccess routines that are provided for compatibility with previous\nversion of VTK.  Please use the GetNextActor2D(),\nGetLastActor2D() variants where possible.\n"},
  {"GetLastItem", PyvtkActor2DCollection_GetLastItem, METH_VARARGS,
   "GetLastItem(self) -> vtkActor2D\nC++: vtkActor2D *GetLastItem()\n\n"},
  {"RenderOverlay", PyvtkActor2DCollection_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> None\nC++: void RenderOverlay(vtkViewport *viewport)\n\nSort and then render the collection of 2D actors.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkActor2DCollection_Doc =
  "vtkActor2DCollection - a list of 2D actors\n\n"
  "Superclass: vtkPropCollection\n\n"
  "vtkActor2DCollection is a subclass of vtkCollection. \n"
  "vtkActor2DCollection maintains a collection of vtkActor2D objects\n"
  "that is sorted by layer number, with lower layer numbers at the start\n"
  "of the list.  This allows the vtkActor2D objects to be rendered in\n"
  "the correct order.\n\n"
  "@sa\n"
  "vtkActor2D vtkCollection\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkActor2DCollection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkActor2DCollection", // tp_name
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
  PyvtkActor2DCollection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkActor2DCollection_StaticNew()
{
  return vtkActor2DCollection::New();
}

PyObject *PyvtkActor2DCollection_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkActor2DCollection_Type, PyvtkActor2DCollection_Methods,
    "vtkActor2DCollection",
 &PyvtkActor2DCollection_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPropCollection_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkActor2DCollection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkActor2DCollection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkActor2DCollection", o) != 0)
  {
    Py_DECREF(o);
  }

}

