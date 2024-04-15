// python wrapper for vtkGraphItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGraphItem.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphItem(PyObject *dict); }
extern "C" { PyObject *PyvtkGraphItem_ClassNew(); }


static PyObject *
PyvtkGraphItem_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphItem *op = static_cast<vtkGraphItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphItem_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphItem *tempr = vtkGraphItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphItem *op = static_cast<vtkGraphItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphItem::NewInstance());

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
PyvtkGraphItem_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGraphItem::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphItem_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphItem *op = static_cast<vtkGraphItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGraphItem::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphItem_SetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphItem *op = static_cast<vtkGraphItem *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    if (ap.IsBound())
    {
      op->SetGraph(temp0);
    }
    else
    {
      op->vtkGraphItem::SetGraph(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphItem_GetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphItem *op = static_cast<vtkGraphItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetGraph() :
      op->vtkGraphItem::GetGraph());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphItem_GetLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphItem *op = static_cast<vtkGraphItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalForceLayout *tempr = (ap.IsBound() ?
      op->GetLayout() :
      op->vtkGraphItem::GetLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphItem_StartLayoutAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartLayoutAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphItem *op = static_cast<vtkGraphItem *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->StartLayoutAnimation(temp0);
    }
    else
    {
      op->vtkGraphItem::StartLayoutAnimation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphItem_StopLayoutAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StopLayoutAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphItem *op = static_cast<vtkGraphItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StopLayoutAnimation();
    }
    else
    {
      op->vtkGraphItem::StopLayoutAnimation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphItem_UpdateLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphItem *op = static_cast<vtkGraphItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateLayout();
    }
    else
    {
      op->vtkGraphItem::UpdateLayout();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphItem_Methods[] = {
  {"IsTypeOf", PyvtkGraphItem_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphItem_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphItem_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGraphItem\nC++: static vtkGraphItem *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphItem_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGraphItem\nC++: vtkGraphItem *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGraphItem_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGraphItem_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGraph", PyvtkGraphItem_SetGraph, METH_VARARGS,
   "SetGraph(self, graph:vtkGraph) -> None\nC++: virtual void SetGraph(vtkGraph *graph)\n\nThe graph that this item draws.\n"},
  {"GetGraph", PyvtkGraphItem_GetGraph, METH_VARARGS,
   "GetGraph(self) -> vtkGraph\nC++: virtual vtkGraph *GetGraph()\n\n"},
  {"GetLayout", PyvtkGraphItem_GetLayout, METH_VARARGS,
   "GetLayout(self) -> vtkIncrementalForceLayout\nC++: virtual vtkIncrementalForceLayout *GetLayout()\n\nExposes the incremental graph layout for updating parameters.\n"},
  {"StartLayoutAnimation", PyvtkGraphItem_StartLayoutAnimation, METH_VARARGS,
   "StartLayoutAnimation(self, interactor:vtkRenderWindowInteractor)\n    -> None\nC++: virtual void StartLayoutAnimation(\n    vtkRenderWindowInteractor *interactor)\n\nBegins or ends the layout animation.\n"},
  {"StopLayoutAnimation", PyvtkGraphItem_StopLayoutAnimation, METH_VARARGS,
   "StopLayoutAnimation(self) -> None\nC++: virtual void StopLayoutAnimation()\n\n"},
  {"UpdateLayout", PyvtkGraphItem_UpdateLayout, METH_VARARGS,
   "UpdateLayout(self) -> None\nC++: virtual void UpdateLayout()\n\nIncrementally updates the graph layout.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGraphItem_Doc =
  "vtkGraphItem - A 2D graphics item for rendering a graph.\n\n"
  "Superclass: vtkContextItem\n\n"
  "This item draws a graph as a part of a vtkContextScene. This simple\n"
  "class has minimal state and delegates the determination of visual\n"
  "vertex and edge properties like color, size, width, etc. to a set of\n"
  "virtual functions. To influence the rendering of the graph, subclass\n"
  "this item and override the property functions you wish to customize.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGraphItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkGraphItem", // tp_name
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
  PyvtkGraphItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGraphItem_StaticNew()
{
  return vtkGraphItem::New();
}

PyObject *PyvtkGraphItem_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGraphItem_Type, PyvtkGraphItem_Methods,
    "vtkGraphItem",
 &PyvtkGraphItem_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkContextItem");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGraphItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

