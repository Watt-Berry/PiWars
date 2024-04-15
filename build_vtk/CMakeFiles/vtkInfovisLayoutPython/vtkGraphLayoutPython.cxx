// python wrapper for vtkGraphLayout
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGraphLayout.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphLayout(PyObject *dict); }
extern "C" { PyObject *PyvtkGraphLayout_ClassNew(); }


static PyObject *
PyvtkGraphLayout_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphLayout::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayout_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphLayout::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayout_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphLayout *tempr = vtkGraphLayout::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayout_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphLayout *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphLayout::NewInstance());

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
PyvtkGraphLayout_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGraphLayout::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayout_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGraphLayout::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayout_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  vtkGraphLayoutStrategy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraphLayoutStrategy"))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategy(temp0);
    }
    else
    {
      op->vtkGraphLayout::SetLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayout_GetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphLayoutStrategy *tempr = (ap.IsBound() ?
      op->GetLayoutStrategy() :
      op->vtkGraphLayout::GetLayoutStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayout_IsLayoutComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLayoutComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsLayoutComplete() :
      op->vtkGraphLayout::IsLayoutComplete());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayout_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGraphLayout::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayout_GetZRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZRange() :
      op->vtkGraphLayout::GetZRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayout_SetZRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZRange(temp0);
    }
    else
    {
      op->vtkGraphLayout::SetZRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayout_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkGraphLayout::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayout_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkGraphLayout::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayout_SetUseTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseTransform(temp0);
    }
    else
    {
      op->vtkGraphLayout::SetUseTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayout_GetUseTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseTransform() :
      op->vtkGraphLayout::GetUseTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayout_UseTransformOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTransformOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseTransformOn();
    }
    else
    {
      op->vtkGraphLayout::UseTransformOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayout_UseTransformOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTransformOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayout *op = static_cast<vtkGraphLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseTransformOff();
    }
    else
    {
      op->vtkGraphLayout::UseTransformOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphLayout_Methods[] = {
  {"IsTypeOf", PyvtkGraphLayout_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphLayout_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphLayout_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGraphLayout\nC++: static vtkGraphLayout *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphLayout_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGraphLayout\nC++: vtkGraphLayout *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGraphLayout_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGraphLayout_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLayoutStrategy", PyvtkGraphLayout_SetLayoutStrategy, METH_VARARGS,
   "SetLayoutStrategy(self, strategy:vtkGraphLayoutStrategy) -> None\nC++: void SetLayoutStrategy(vtkGraphLayoutStrategy *strategy)\n\nThe layout strategy to use during graph layout.\n"},
  {"GetLayoutStrategy", PyvtkGraphLayout_GetLayoutStrategy, METH_VARARGS,
   "GetLayoutStrategy(self) -> vtkGraphLayoutStrategy\nC++: virtual vtkGraphLayoutStrategy *GetLayoutStrategy()\n\n"},
  {"IsLayoutComplete", PyvtkGraphLayout_IsLayoutComplete, METH_VARARGS,
   "IsLayoutComplete(self) -> int\nC++: virtual int IsLayoutComplete()\n\nAsk the layout algorithm if the layout is complete\n"},
  {"GetMTime", PyvtkGraphLayout_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the modification time of the layout algorithm.\n"},
  {"GetZRange", PyvtkGraphLayout_GetZRange, METH_VARARGS,
   "GetZRange(self) -> float\nC++: virtual double GetZRange()\n\nSet the ZRange for the output data. If the initial layout is\nplanar (i.e. all z coordinates are zero), the coordinates will be\nevenly spaced from 0.0 to ZRange. The default is zero, which has\nno effect.\n"},
  {"SetZRange", PyvtkGraphLayout_SetZRange, METH_VARARGS,
   "SetZRange(self, _arg:float) -> None\nC++: virtual void SetZRange(double _arg)\n\n"},
  {"GetTransform", PyvtkGraphLayout_GetTransform, METH_VARARGS,
   "GetTransform(self) -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform()\n\nTransform the graph vertices after the layout.\n"},
  {"SetTransform", PyvtkGraphLayout_SetTransform, METH_VARARGS,
   "SetTransform(self, t:vtkAbstractTransform) -> None\nC++: virtual void SetTransform(vtkAbstractTransform *t)\n\n"},
  {"SetUseTransform", PyvtkGraphLayout_SetUseTransform, METH_VARARGS,
   "SetUseTransform(self, _arg:bool) -> None\nC++: virtual void SetUseTransform(bool _arg)\n\nWhether to use the specified transform after layout.\n"},
  {"GetUseTransform", PyvtkGraphLayout_GetUseTransform, METH_VARARGS,
   "GetUseTransform(self) -> bool\nC++: virtual bool GetUseTransform()\n\n"},
  {"UseTransformOn", PyvtkGraphLayout_UseTransformOn, METH_VARARGS,
   "UseTransformOn(self) -> None\nC++: virtual void UseTransformOn()\n\n"},
  {"UseTransformOff", PyvtkGraphLayout_UseTransformOff, METH_VARARGS,
   "UseTransformOff(self) -> None\nC++: virtual void UseTransformOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGraphLayout_Doc =
  "vtkGraphLayout - layout a graph in 2 or 3 dimensions\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "This class is a shell for many graph layout strategies which may be\n"
  "set using the SetLayoutStrategy() function.  The layout strategies do\n"
  "the actual work.\n\n"
  "Thanks:\n\n"
  "Thanks to Brian Wylie from Sandia National Laboratories for adding\n"
  "incremental layout capabilities.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGraphLayout_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkGraphLayout", // tp_name
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
  PyvtkGraphLayout_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGraphLayout_StaticNew()
{
  return vtkGraphLayout::New();
}

PyObject *PyvtkGraphLayout_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGraphLayout_Type, PyvtkGraphLayout_Methods,
    "vtkGraphLayout",
 &PyvtkGraphLayout_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkGraphAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGraphLayout(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphLayout_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphLayout", o) != 0)
  {
    Py_DECREF(o);
  }

}

