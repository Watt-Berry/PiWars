// python wrapper for vtkTreeMapView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTreeMapView.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTreeMapView(PyObject *dict); }
extern "C" { PyObject *PyvtkTreeMapView_ClassNew(); }

#ifndef DECLARED_PyvtkTreeAreaView_ClassNew
extern "C" { PyObject *PyvtkTreeAreaView_ClassNew(); }
#define DECLARED_PyvtkTreeAreaView_ClassNew
#endif

static PyObject *
PyvtkTreeMapView_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTreeMapView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeMapView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapView_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTreeMapView *tempr = vtkTreeMapView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTreeMapView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeMapView::NewInstance());

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
PyvtkTreeMapView_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTreeMapView::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapView_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTreeMapView::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapView_SetLayoutStrategy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  vtkAreaLayoutStrategy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAreaLayoutStrategy"))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategy(temp0);
    }
    else
    {
      op->vtkTreeMapView::SetLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTreeMapView_SetLayoutStrategy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategy(temp0);
    }
    else
    {
      op->vtkTreeMapView::SetLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTreeMapView_SetLayoutStrategy_Methods[] = {
  {"SetLayoutStrategy", PyvtkTreeMapView_SetLayoutStrategy_s1, METH_VARARGS,
   "@V *vtkAreaLayoutStrategy"},
  {"SetLayoutStrategy", PyvtkTreeMapView_SetLayoutStrategy_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTreeMapView_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTreeMapView_SetLayoutStrategy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLayoutStrategy");
  return nullptr;
}


static PyObject *
PyvtkTreeMapView_SetLayoutStrategyToBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToBox();
    }
    else
    {
      op->vtkTreeMapView::SetLayoutStrategyToBox();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapView_SetLayoutStrategyToSliceAndDice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToSliceAndDice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToSliceAndDice();
    }
    else
    {
      op->vtkTreeMapView::SetLayoutStrategyToSliceAndDice();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapView_SetLayoutStrategyToSquarify(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToSquarify");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToSquarify();
    }
    else
    {
      op->vtkTreeMapView::SetLayoutStrategyToSquarify();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapView_SetFontSizeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontSizeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  int temp0;
  int temp1;
  int temp2 = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetFontSizeRange(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTreeMapView::SetFontSizeRange(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeMapView_GetFontSizeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSizeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeMapView *op = static_cast<vtkTreeMapView *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetFontSizeRange(temp0);
    }
    else
    {
      op->vtkTreeMapView::GetFontSizeRange(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTreeMapView_Methods[] = {
  {"IsTypeOf", PyvtkTreeMapView_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTreeMapView_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTreeMapView_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTreeMapView\nC++: static vtkTreeMapView *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTreeMapView_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTreeMapView\nC++: vtkTreeMapView *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTreeMapView_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTreeMapView_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLayoutStrategy", PyvtkTreeMapView_SetLayoutStrategy, METH_VARARGS,
   "SetLayoutStrategy(self, s:vtkAreaLayoutStrategy) -> None\nC++: void SetLayoutStrategy(vtkAreaLayoutStrategy *s) override;\nSetLayoutStrategy(self, name:str) -> None\nC++: virtual void SetLayoutStrategy(const char *name)\n\nSets the treemap layout strategy\n"},
  {"SetLayoutStrategyToBox", PyvtkTreeMapView_SetLayoutStrategyToBox, METH_VARARGS,
   "SetLayoutStrategyToBox(self) -> None\nC++: virtual void SetLayoutStrategyToBox()\n\n"},
  {"SetLayoutStrategyToSliceAndDice", PyvtkTreeMapView_SetLayoutStrategyToSliceAndDice, METH_VARARGS,
   "SetLayoutStrategyToSliceAndDice(self) -> None\nC++: virtual void SetLayoutStrategyToSliceAndDice()\n\n"},
  {"SetLayoutStrategyToSquarify", PyvtkTreeMapView_SetLayoutStrategyToSquarify, METH_VARARGS,
   "SetLayoutStrategyToSquarify(self) -> None\nC++: virtual void SetLayoutStrategyToSquarify()\n\n"},
  {"SetFontSizeRange", PyvtkTreeMapView_SetFontSizeRange, METH_VARARGS,
   "SetFontSizeRange(self, maxSize:int, minSize:int, delta:int=4)\n    -> None\nC++: virtual void SetFontSizeRange(int maxSize, int minSize,\n    int delta=4)\n\nThe sizes of the fonts used for labeling.\n"},
  {"GetFontSizeRange", PyvtkTreeMapView_GetFontSizeRange, METH_VARARGS,
   "GetFontSizeRange(self, range:[int, int, int]) -> None\nC++: virtual void GetFontSizeRange(int range[3])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTreeMapView_Doc =
  "vtkTreeMapView - Displays a tree as a tree map.\n\n"
  "Superclass: vtkTreeAreaView\n\n"
  "vtkTreeMapView shows a vtkTree in a tree map, where each vertex in\n"
  "the tree is represented by a box.  Child boxes are contained within\n"
  "the parent box, and may be colored and sized by various parameters.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTreeMapView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkTreeMapView", // tp_name
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
  PyvtkTreeMapView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTreeMapView_StaticNew()
{
  return vtkTreeMapView::New();
}

PyObject *PyvtkTreeMapView_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTreeMapView_Type, PyvtkTreeMapView_Methods,
    "vtkTreeMapView",
 &PyvtkTreeMapView_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkTreeAreaView_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTreeMapView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTreeMapView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTreeMapView", o) != 0)
  {
    Py_DECREF(o);
  }

}

