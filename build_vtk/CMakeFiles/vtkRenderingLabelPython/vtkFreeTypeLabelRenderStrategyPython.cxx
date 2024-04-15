// python wrapper for vtkFreeTypeLabelRenderStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkFreeTypeLabelRenderStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFreeTypeLabelRenderStrategy(PyObject *dict); }
extern "C" { PyObject *PyvtkFreeTypeLabelRenderStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkLabelRenderStrategy_ClassNew
extern "C" { PyObject *PyvtkLabelRenderStrategy_ClassNew(); }
#define DECLARED_PyvtkLabelRenderStrategy_ClassNew
#endif

static PyObject *
PyvtkFreeTypeLabelRenderStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFreeTypeLabelRenderStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeLabelRenderStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFreeTypeLabelRenderStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeLabelRenderStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFreeTypeLabelRenderStrategy *tempr = vtkFreeTypeLabelRenderStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeLabelRenderStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFreeTypeLabelRenderStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFreeTypeLabelRenderStrategy::NewInstance());

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
PyvtkFreeTypeLabelRenderStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFreeTypeLabelRenderStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeLabelRenderStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFreeTypeLabelRenderStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeLabelRenderStrategy_SupportsRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SupportsRotation() :
      op->vtkFreeTypeLabelRenderStrategy::SupportsRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeLabelRenderStrategy_SupportsBoundedSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsBoundedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SupportsBoundedSize() :
      op->vtkFreeTypeLabelRenderStrategy::SupportsBoundedSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeLabelRenderStrategy_ComputeLabelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeLabelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  const size_t size2 = 4;
  double temp2[4];
  double save2[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->ComputeLabelBounds(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFreeTypeLabelRenderStrategy::ComputeLabelBounds(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFreeTypeLabelRenderStrategy_RenderLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  vtkTextProperty *temp1 = nullptr;
  vtkStdString temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->RenderLabel(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFreeTypeLabelRenderStrategy::RenderLabel(temp0, temp1, temp2);
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


static PyObject *
PyvtkFreeTypeLabelRenderStrategy_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFreeTypeLabelRenderStrategy *op = static_cast<vtkFreeTypeLabelRenderStrategy *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkFreeTypeLabelRenderStrategy::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFreeTypeLabelRenderStrategy_Methods[] = {
  {"IsTypeOf", PyvtkFreeTypeLabelRenderStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFreeTypeLabelRenderStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFreeTypeLabelRenderStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFreeTypeLabelRenderStrategy\nC++: static vtkFreeTypeLabelRenderStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFreeTypeLabelRenderStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFreeTypeLabelRenderStrategy\nC++: vtkFreeTypeLabelRenderStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFreeTypeLabelRenderStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFreeTypeLabelRenderStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SupportsRotation", PyvtkFreeTypeLabelRenderStrategy_SupportsRotation, METH_VARARGS,
   "SupportsRotation(self) -> bool\nC++: bool SupportsRotation() override;\n\nThe free type render strategy currently does not support\nrotation.\n"},
  {"SupportsBoundedSize", PyvtkFreeTypeLabelRenderStrategy_SupportsBoundedSize, METH_VARARGS,
   "SupportsBoundedSize(self) -> bool\nC++: bool SupportsBoundedSize() override;\n\nThe free type render strategy currently does not support bounded\nsize labels.\n"},
  {"ComputeLabelBounds", PyvtkFreeTypeLabelRenderStrategy_ComputeLabelBounds, METH_VARARGS,
   "ComputeLabelBounds(self, tprop:vtkTextProperty, label:str,\n    bds:[float, float, float, float]) -> None\nC++: void ComputeLabelBounds(vtkTextProperty *tprop,\n    vtkStdString label, double bds[4]) override;\n\nCompute the bounds of a label. Must be performed after the\nrenderer is set.\n"},
  {"RenderLabel", PyvtkFreeTypeLabelRenderStrategy_RenderLabel, METH_VARARGS,
   "RenderLabel(self, x:[int, int], tprop:vtkTextProperty, label:str)\n    -> None\nC++: void RenderLabel(int x[2], vtkTextProperty *tprop,\n    vtkStdString label) override;\n\nRender a label at a location in world coordinates. Must be\nperformed between StartFrame() and EndFrame() calls.\n"},
  {"ReleaseGraphicsResources", PyvtkFreeTypeLabelRenderStrategy_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, window:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *window) override;\n\nRelease any graphics resources that are being consumed by this\nstrategy. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFreeTypeLabelRenderStrategy_Doc =
  "vtkFreeTypeLabelRenderStrategy - Renders labels with freetype\n\n"
  "Superclass: vtkLabelRenderStrategy\n\n"
  "Uses the FreeType to render labels and compute label sizes. This\n"
  "strategy may be used with vtkLabelPlacementMapper.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFreeTypeLabelRenderStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLabel.vtkFreeTypeLabelRenderStrategy", // tp_name
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
  PyvtkFreeTypeLabelRenderStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFreeTypeLabelRenderStrategy_StaticNew()
{
  return vtkFreeTypeLabelRenderStrategy::New();
}

PyObject *PyvtkFreeTypeLabelRenderStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFreeTypeLabelRenderStrategy_Type, PyvtkFreeTypeLabelRenderStrategy_Methods,
    "vtkFreeTypeLabelRenderStrategy",
 &PyvtkFreeTypeLabelRenderStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkLabelRenderStrategy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFreeTypeLabelRenderStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFreeTypeLabelRenderStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFreeTypeLabelRenderStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

