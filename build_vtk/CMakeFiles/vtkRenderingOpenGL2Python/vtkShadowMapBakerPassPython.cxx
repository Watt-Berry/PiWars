// python wrapper for vtkShadowMapBakerPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkShadowMapBakerPass.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkShadowMapBakerPass(PyObject *dict); }
extern "C" { PyObject *PyvtkShadowMapBakerPass_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLRenderPass_ClassNew
extern "C" { PyObject *PyvtkOpenGLRenderPass_ClassNew(); }
#define DECLARED_PyvtkOpenGLRenderPass_ClassNew
#endif

static PyObject *
PyvtkShadowMapBakerPass_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkShadowMapBakerPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkShadowMapBakerPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkShadowMapBakerPass *tempr = vtkShadowMapBakerPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShadowMapBakerPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkShadowMapBakerPass::NewInstance());

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
PyvtkShadowMapBakerPass_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkShadowMapBakerPass::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkShadowMapBakerPass::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

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
      op->vtkShadowMapBakerPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetOpaqueSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpaqueSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetOpaqueSequence() :
      op->vtkShadowMapBakerPass::GetOpaqueSequence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_SetOpaqueSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpaqueSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetOpaqueSequence(temp0);
    }
    else
    {
      op->vtkShadowMapBakerPass::SetOpaqueSequence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetCompositeZPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeZPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetCompositeZPass() :
      op->vtkShadowMapBakerPass::GetCompositeZPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_SetCompositeZPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeZPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetCompositeZPass(temp0);
    }
    else
    {
      op->vtkShadowMapBakerPass::SetCompositeZPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkShadowMapBakerPass::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkShadowMapBakerPass::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetHasShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHasShadows() :
      op->vtkShadowMapBakerPass::GetHasShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_LightCreatesShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightCreatesShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  vtkLight *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLight"))
  {
    bool tempr = (ap.IsBound() ?
      op->LightCreatesShadow(temp0) :
      op->vtkShadowMapBakerPass::LightCreatesShadow(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_GetNeedUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNeedUpdate() :
      op->vtkShadowMapBakerPass::GetNeedUpdate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapBakerPass_SetUpToDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpToDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapBakerPass *op = static_cast<vtkShadowMapBakerPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetUpToDate();
    }
    else
    {
      op->vtkShadowMapBakerPass::SetUpToDate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkShadowMapBakerPass_Methods[] = {
  {"IsTypeOf", PyvtkShadowMapBakerPass_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkShadowMapBakerPass_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkShadowMapBakerPass_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkShadowMapBakerPass\nC++: static vtkShadowMapBakerPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkShadowMapBakerPass_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkShadowMapBakerPass\nC++: vtkShadowMapBakerPass *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkShadowMapBakerPass_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkShadowMapBakerPass_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ReleaseGraphicsResources", PyvtkShadowMapBakerPass_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, w:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"GetOpaqueSequence", PyvtkShadowMapBakerPass_GetOpaqueSequence, METH_VARARGS,
   "GetOpaqueSequence(self) -> vtkRenderPass\nC++: virtual vtkRenderPass *GetOpaqueSequence()\n\nDelegate for rendering the camera, lights, and opaque geometry.\nIf it is NULL, nothing will be rendered and a warning will be\nemitted. It defaults to a vtkCameraPass with a sequence of\nvtkLightPass/vtkOpaquePass.\n"},
  {"SetOpaqueSequence", PyvtkShadowMapBakerPass_SetOpaqueSequence, METH_VARARGS,
   "SetOpaqueSequence(self, opaqueSequence:vtkRenderPass) -> None\nC++: virtual void SetOpaqueSequence(vtkRenderPass *opaqueSequence)\n\n"},
  {"GetCompositeZPass", PyvtkShadowMapBakerPass_GetCompositeZPass, METH_VARARGS,
   "GetCompositeZPass(self) -> vtkRenderPass\nC++: virtual vtkRenderPass *GetCompositeZPass()\n\nDelegate for compositing of the shadow maps across processors. If\nit is NULL, there is no z compositing. It is usually set to a\nvtkCompositeZPass (Parallel package). Initial value is a NULL\npointer.\n"},
  {"SetCompositeZPass", PyvtkShadowMapBakerPass_SetCompositeZPass, METH_VARARGS,
   "SetCompositeZPass(self, compositeZPass:vtkRenderPass) -> None\nC++: virtual void SetCompositeZPass(vtkRenderPass *compositeZPass)\n\n"},
  {"SetResolution", PyvtkShadowMapBakerPass_SetResolution, METH_VARARGS,
   "SetResolution(self, _arg:int) -> None\nC++: virtual void SetResolution(unsigned int _arg)\n\nSet/Get the number of pixels in each dimension of the shadow maps\n(shadow maps are square). Initial value is 256. The greater the\nbetter. Resolution does not have to be a power-of-two value.\n"},
  {"GetResolution", PyvtkShadowMapBakerPass_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual unsigned int GetResolution()\n\n"},
  {"GetHasShadows", PyvtkShadowMapBakerPass_GetHasShadows, METH_VARARGS,
   "GetHasShadows(self) -> bool\nC++: bool GetHasShadows()\n\nINTERNAL USE ONLY. Internally used by vtkShadowMapBakerPass and\nvtkShadowMapPass.\n\n* Tell if there is at least one shadow.\n* Initial value is false.\n"},
  {"LightCreatesShadow", PyvtkShadowMapBakerPass_LightCreatesShadow, METH_VARARGS,
   "LightCreatesShadow(self, l:vtkLight) -> bool\nC++: bool LightCreatesShadow(vtkLight *l)\n\nINTERNAL USE ONLY. Internally used by vtkShadowMapBakerPass and\nvtkShadowMapPass.\n\n* Tell if the light `l' can create shadows.\n* The light has to not be a head light and to be directional or\n* positional with an angle less than 180 degrees.\n* \\pre l_exists: l!=0\n"},
  {"GetNeedUpdate", PyvtkShadowMapBakerPass_GetNeedUpdate, METH_VARARGS,
   "GetNeedUpdate(self) -> bool\nC++: bool GetNeedUpdate()\n\nINTERNAL USE ONLY. Internally used by vtkShadowMapBakerPass and\nvtkShadowMapPass.\n\n* Do the shadows need to be updated?\n* Value changed by vtkShadowMapBakerPass and used by\n  vtkShadowMapPass.\n* Initial value is true.\n"},
  {"SetUpToDate", PyvtkShadowMapBakerPass_SetUpToDate, METH_VARARGS,
   "SetUpToDate(self) -> None\nC++: void SetUpToDate()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkShadowMapBakerPass_Doc =
  "vtkShadowMapBakerPass - Implement a builder of shadow map pass.\n\n"
  "Superclass: vtkOpenGLRenderPass\n\n"
  "Bake a list of shadow maps, once per spot light. It work in\n"
  "conjunction with the vtkShadowMapPass, which uses the shadow maps for\n"
  "rendering the opaque geometry (a technique to render hard shadows in\n"
  "hardware).\n\n"
  "This pass expects an initialized depth buffer and color buffer.\n"
  "Initialized buffers means they have been cleared with farest z-value\n"
  "and background color/gradient/transparent color. An opaque pass may\n"
  "have been performed right after the initialization.\n\n"
  "Its delegate is usually set to a vtkOpaquePass.\n\n"
  "@par Implementation: The first pass of the algorithm is to generate a\n"
  "shadow map per light (depth map from the light point of view) by\n"
  "rendering the opaque objects\n\n"
  "@sa\n"
  "vtkRenderPass, vtkOpaquePass, vtkShadowMapPass\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkShadowMapBakerPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkShadowMapBakerPass", // tp_name
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
  PyvtkShadowMapBakerPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkShadowMapBakerPass_StaticNew()
{
  return vtkShadowMapBakerPass::New();
}

PyObject *PyvtkShadowMapBakerPass_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkShadowMapBakerPass_Type, PyvtkShadowMapBakerPass_Methods,
    "vtkShadowMapBakerPass",
 &PyvtkShadowMapBakerPass_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLRenderPass_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkShadowMapBakerPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkShadowMapBakerPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkShadowMapBakerPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

