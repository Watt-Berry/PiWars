// python wrapper for vtkTreeOrbitLayoutStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTreeOrbitLayoutStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTreeOrbitLayoutStrategy(PyObject *dict); }
extern "C" { PyObject *PyvtkTreeOrbitLayoutStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkGraphLayoutStrategy_ClassNew
extern "C" { PyObject *PyvtkGraphLayoutStrategy_ClassNew(); }
#define DECLARED_PyvtkGraphLayoutStrategy_ClassNew
#endif

static PyObject *
PyvtkTreeOrbitLayoutStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTreeOrbitLayoutStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeOrbitLayoutStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTreeOrbitLayoutStrategy *tempr = vtkTreeOrbitLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTreeOrbitLayoutStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeOrbitLayoutStrategy::NewInstance());

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
PyvtkTreeOrbitLayoutStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTreeOrbitLayoutStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTreeOrbitLayoutStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Layout();
    }
    else
    {
      op->vtkTreeOrbitLayoutStrategy::Layout();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_SetLogSpacingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogSpacingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLogSpacingValue(temp0);
    }
    else
    {
      op->vtkTreeOrbitLayoutStrategy::SetLogSpacingValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_GetLogSpacingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogSpacingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLogSpacingValue() :
      op->vtkTreeOrbitLayoutStrategy::GetLogSpacingValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_SetLeafSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeafSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeafSpacing(temp0);
    }
    else
    {
      op->vtkTreeOrbitLayoutStrategy::SetLeafSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_GetLeafSpacingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafSpacingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLeafSpacingMinValue() :
      op->vtkTreeOrbitLayoutStrategy::GetLeafSpacingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_GetLeafSpacingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafSpacingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLeafSpacingMaxValue() :
      op->vtkTreeOrbitLayoutStrategy::GetLeafSpacingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_GetLeafSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLeafSpacing() :
      op->vtkTreeOrbitLayoutStrategy::GetLeafSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_SetChildRadiusFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChildRadiusFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetChildRadiusFactor(temp0);
    }
    else
    {
      op->vtkTreeOrbitLayoutStrategy::SetChildRadiusFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeOrbitLayoutStrategy_GetChildRadiusFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildRadiusFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeOrbitLayoutStrategy *op = static_cast<vtkTreeOrbitLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetChildRadiusFactor() :
      op->vtkTreeOrbitLayoutStrategy::GetChildRadiusFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTreeOrbitLayoutStrategy_Methods[] = {
  {"IsTypeOf", PyvtkTreeOrbitLayoutStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTreeOrbitLayoutStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTreeOrbitLayoutStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTreeOrbitLayoutStrategy\nC++: static vtkTreeOrbitLayoutStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTreeOrbitLayoutStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTreeOrbitLayoutStrategy\nC++: vtkTreeOrbitLayoutStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTreeOrbitLayoutStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTreeOrbitLayoutStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Layout", PyvtkTreeOrbitLayoutStrategy_Layout, METH_VARARGS,
   "Layout(self) -> None\nC++: void Layout() override;\n\nPerform the orbital layout.\n"},
  {"SetLogSpacingValue", PyvtkTreeOrbitLayoutStrategy_SetLogSpacingValue, METH_VARARGS,
   "SetLogSpacingValue(self, _arg:float) -> None\nC++: virtual void SetLogSpacingValue(double _arg)\n\nThe spacing of orbital levels. Levels near zero give more space\nto levels near the root, while levels near one (the default)\ncreate evenly-spaced levels. Levels above one give more space to\nlevels near the leaves.\n"},
  {"GetLogSpacingValue", PyvtkTreeOrbitLayoutStrategy_GetLogSpacingValue, METH_VARARGS,
   "GetLogSpacingValue(self) -> float\nC++: virtual double GetLogSpacingValue()\n\n"},
  {"SetLeafSpacing", PyvtkTreeOrbitLayoutStrategy_SetLeafSpacing, METH_VARARGS,
   "SetLeafSpacing(self, _arg:float) -> None\nC++: virtual void SetLeafSpacing(double _arg)\n\nThe spacing of leaves.  Levels near one evenly space leaves with\nno gaps between subtrees.  Levels near zero creates large gaps\nbetween subtrees.\n"},
  {"GetLeafSpacingMinValue", PyvtkTreeOrbitLayoutStrategy_GetLeafSpacingMinValue, METH_VARARGS,
   "GetLeafSpacingMinValue(self) -> float\nC++: virtual double GetLeafSpacingMinValue()\n\n"},
  {"GetLeafSpacingMaxValue", PyvtkTreeOrbitLayoutStrategy_GetLeafSpacingMaxValue, METH_VARARGS,
   "GetLeafSpacingMaxValue(self) -> float\nC++: virtual double GetLeafSpacingMaxValue()\n\n"},
  {"GetLeafSpacing", PyvtkTreeOrbitLayoutStrategy_GetLeafSpacing, METH_VARARGS,
   "GetLeafSpacing(self) -> float\nC++: virtual double GetLeafSpacing()\n\n"},
  {"SetChildRadiusFactor", PyvtkTreeOrbitLayoutStrategy_SetChildRadiusFactor, METH_VARARGS,
   "SetChildRadiusFactor(self, _arg:float) -> None\nC++: virtual void SetChildRadiusFactor(double _arg)\n\nThis is a magic number right now. Controls the radius of the\nchild layout, all of this should be fixed at some point with a\nmore logical layout. Defaults to .5 :)\n"},
  {"GetChildRadiusFactor", PyvtkTreeOrbitLayoutStrategy_GetChildRadiusFactor, METH_VARARGS,
   "GetChildRadiusFactor(self) -> float\nC++: virtual double GetChildRadiusFactor()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTreeOrbitLayoutStrategy_Doc =
  "vtkTreeOrbitLayoutStrategy - hierarchical orbital layout\n\n"
  "Superclass: vtkGraphLayoutStrategy\n\n"
  "Assigns points to the nodes of a tree to an orbital layout. Each\n"
  "parent is orbited by its children, recursively.\n\n"
  "@par Thanks: Thanks to the galaxy for inspiring this layout strategy.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTreeOrbitLayoutStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkTreeOrbitLayoutStrategy", // tp_name
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
  PyvtkTreeOrbitLayoutStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTreeOrbitLayoutStrategy_StaticNew()
{
  return vtkTreeOrbitLayoutStrategy::New();
}

PyObject *PyvtkTreeOrbitLayoutStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTreeOrbitLayoutStrategy_Type, PyvtkTreeOrbitLayoutStrategy_Methods,
    "vtkTreeOrbitLayoutStrategy",
 &PyvtkTreeOrbitLayoutStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGraphLayoutStrategy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTreeOrbitLayoutStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTreeOrbitLayoutStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTreeOrbitLayoutStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

