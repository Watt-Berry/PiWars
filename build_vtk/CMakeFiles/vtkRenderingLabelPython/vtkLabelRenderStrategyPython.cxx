// python wrapper for vtkLabelRenderStrategy
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
#include "vtkLabelRenderStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLabelRenderStrategy(PyObject *dict); }
extern "C" { PyObject *PyvtkLabelRenderStrategy_ClassNew(); }


static PyObject *
PyvtkLabelRenderStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLabelRenderStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabelRenderStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLabelRenderStrategy *tempr = vtkLabelRenderStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabelRenderStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabelRenderStrategy::NewInstance());

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
PyvtkLabelRenderStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLabelRenderStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLabelRenderStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_SupportsRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SupportsRotation() :
      op->vtkLabelRenderStrategy::SupportsRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_SupportsBoundedSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsBoundedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SupportsBoundedSize() :
      op->vtkLabelRenderStrategy::SupportsBoundedSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkLabelRenderStrategy::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkLabelRenderStrategy::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_SetDefaultTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetDefaultTextProperty(temp0);
    }
    else
    {
      op->vtkLabelRenderStrategy::SetDefaultTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_GetDefaultTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetDefaultTextProperty() :
      op->vtkLabelRenderStrategy::GetDefaultTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_ComputeLabelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeLabelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  const size_t size2 = 4;
  double temp2[4];
  double save2[4];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    op->ComputeLabelBounds(temp0, temp1, temp2);

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
PyvtkLabelRenderStrategy_RenderLabel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  vtkTextProperty *temp1 = nullptr;
  vtkStdString temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->RenderLabel(temp0, temp1, temp2);

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
PyvtkLabelRenderStrategy_RenderLabel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  vtkTextProperty *temp1 = nullptr;
  vtkStdString temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->RenderLabel(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkLabelRenderStrategy::RenderLabel(temp0, temp1, temp2, temp3);
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
PyvtkLabelRenderStrategy_RenderLabel(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLabelRenderStrategy_RenderLabel_s1(self, args);
    case 4:
      return PyvtkLabelRenderStrategy_RenderLabel_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RenderLabel");
  return nullptr;
}


static PyObject *
PyvtkLabelRenderStrategy_StartFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartFrame();
    }
    else
    {
      op->vtkLabelRenderStrategy::StartFrame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_EndFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndFrame();
    }
    else
    {
      op->vtkLabelRenderStrategy::EndFrame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelRenderStrategy_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelRenderStrategy *op = static_cast<vtkLabelRenderStrategy *>(vp);

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
      op->vtkLabelRenderStrategy::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLabelRenderStrategy_Methods[] = {
  {"IsTypeOf", PyvtkLabelRenderStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLabelRenderStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLabelRenderStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLabelRenderStrategy\nC++: static vtkLabelRenderStrategy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLabelRenderStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLabelRenderStrategy\nC++: vtkLabelRenderStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLabelRenderStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLabelRenderStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SupportsRotation", PyvtkLabelRenderStrategy_SupportsRotation, METH_VARARGS,
   "SupportsRotation(self) -> bool\nC++: virtual bool SupportsRotation()\n\nWhether the text rendering strategy supports rotation. The\nsuperclass returns true. Subclasses should override this to\nreturn the appropriate value.\n"},
  {"SupportsBoundedSize", PyvtkLabelRenderStrategy_SupportsBoundedSize, METH_VARARGS,
   "SupportsBoundedSize(self) -> bool\nC++: virtual bool SupportsBoundedSize()\n\nWhether the text rendering strategy supports bounded size. The\nsuperclass returns true. Subclasses should override this to\nreturn the appropriate value. Subclasses that return true from\nthis method should implement the version of RenderLabel() that\ntakes a maximum size (see RenderLabel()).\n"},
  {"SetRenderer", PyvtkLabelRenderStrategy_SetRenderer, METH_VARARGS,
   "SetRenderer(self, ren:vtkRenderer) -> None\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\nSet the renderer associated with this strategy.\n"},
  {"GetRenderer", PyvtkLabelRenderStrategy_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\n"},
  {"SetDefaultTextProperty", PyvtkLabelRenderStrategy_SetDefaultTextProperty, METH_VARARGS,
   "SetDefaultTextProperty(self, tprop:vtkTextProperty) -> None\nC++: virtual void SetDefaultTextProperty(vtkTextProperty *tprop)\n\nSet the default text property for the strategy.\n"},
  {"GetDefaultTextProperty", PyvtkLabelRenderStrategy_GetDefaultTextProperty, METH_VARARGS,
   "GetDefaultTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetDefaultTextProperty()\n\n"},
  {"ComputeLabelBounds", PyvtkLabelRenderStrategy_ComputeLabelBounds, METH_VARARGS,
   "ComputeLabelBounds(self, tprop:vtkTextProperty, label:str,\n    bds:[float, float, float, float]) -> None\nC++: virtual void ComputeLabelBounds(vtkTextProperty *tprop,\n    vtkStdString label, double bds[4])\n\nCompute the bounds of a label. Must be performed after the\nrenderer is set.\n"},
  {"RenderLabel", PyvtkLabelRenderStrategy_RenderLabel, METH_VARARGS,
   "RenderLabel(self, x:[int, int], tprop:vtkTextProperty, label:str)\n    -> None\nC++: virtual void RenderLabel(int x[2], vtkTextProperty *tprop,\n    vtkStdString label)\nRenderLabel(self, x:[int, int], tprop:vtkTextProperty, label:str,\n    maxWidth:int) -> None\nC++: virtual void RenderLabel(int x[2], vtkTextProperty *tprop,\n    vtkStdString label, int maxWidth)\n\nRender a label at a location in display coordinates. Must be\nperformed between StartFrame() and EndFrame() calls. The optional\nfinal parameter maxWidth specifies a maximum width for the label.\nLonger labels can be shorted with an ellipsis (...). Only\nrenderer strategies that return true from SupportsBoundedSize\nmust implement this version of th method.\n"},
  {"StartFrame", PyvtkLabelRenderStrategy_StartFrame, METH_VARARGS,
   "StartFrame(self) -> None\nC++: virtual void StartFrame()\n\nStart a rendering frame. Renderer must be set.\n"},
  {"EndFrame", PyvtkLabelRenderStrategy_EndFrame, METH_VARARGS,
   "EndFrame(self) -> None\nC++: virtual void EndFrame()\n\nEnd a rendering frame.\n"},
  {"ReleaseGraphicsResources", PyvtkLabelRenderStrategy_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nstrategy. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLabelRenderStrategy_Doc =
  "vtkLabelRenderStrategy - Superclass for label rendering\nimplementations.\n\n"
  "Superclass: vtkObject\n\n"
  "These methods should only be called within a mapper.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLabelRenderStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLabel.vtkLabelRenderStrategy", // tp_name
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
  PyvtkLabelRenderStrategy_Doc, // tp_doc
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

PyObject *PyvtkLabelRenderStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLabelRenderStrategy_Type, PyvtkLabelRenderStrategy_Methods,
    "vtkLabelRenderStrategy",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLabelRenderStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLabelRenderStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLabelRenderStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

