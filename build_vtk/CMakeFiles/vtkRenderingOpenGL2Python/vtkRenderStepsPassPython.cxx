// python wrapper for vtkRenderStepsPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRenderStepsPass.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderStepsPass(PyObject *dict); }
extern "C" { PyObject *PyvtkRenderStepsPass_ClassNew(); }


static PyObject *
PyvtkRenderStepsPass_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderStepsPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderStepsPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderStepsPass *tempr = vtkRenderStepsPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderStepsPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderStepsPass::NewInstance());

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
PyvtkRenderStepsPass_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRenderStepsPass::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRenderStepsPass::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

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
      op->vtkRenderStepsPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_GetCameraPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCameraPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCameraPass *tempr = (ap.IsBound() ?
      op->GetCameraPass() :
      op->vtkRenderStepsPass::GetCameraPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_SetCameraPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCameraPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  vtkCameraPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCameraPass"))
  {
    if (ap.IsBound())
    {
      op->SetCameraPass(temp0);
    }
    else
    {
      op->vtkRenderStepsPass::SetCameraPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_GetLightsPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightsPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetLightsPass() :
      op->vtkRenderStepsPass::GetLightsPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_SetLightsPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightsPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetLightsPass(temp0);
    }
    else
    {
      op->vtkRenderStepsPass::SetLightsPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_GetOpaquePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpaquePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetOpaquePass() :
      op->vtkRenderStepsPass::GetOpaquePass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_SetOpaquePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpaquePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetOpaquePass(temp0);
    }
    else
    {
      op->vtkRenderStepsPass::SetOpaquePass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_GetTranslucentPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslucentPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetTranslucentPass() :
      op->vtkRenderStepsPass::GetTranslucentPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_SetTranslucentPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslucentPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetTranslucentPass(temp0);
    }
    else
    {
      op->vtkRenderStepsPass::SetTranslucentPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_GetVolumetricPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumetricPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetVolumetricPass() :
      op->vtkRenderStepsPass::GetVolumetricPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_SetVolumetricPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumetricPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetVolumetricPass(temp0);
    }
    else
    {
      op->vtkRenderStepsPass::SetVolumetricPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_GetOverlayPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverlayPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetOverlayPass() :
      op->vtkRenderStepsPass::GetOverlayPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_SetOverlayPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOverlayPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetOverlayPass(temp0);
    }
    else
    {
      op->vtkRenderStepsPass::SetOverlayPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_GetPostProcessPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPostProcessPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetPostProcessPass() :
      op->vtkRenderStepsPass::GetPostProcessPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderStepsPass_SetPostProcessPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPostProcessPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderStepsPass *op = static_cast<vtkRenderStepsPass *>(vp);

  vtkRenderPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderPass"))
  {
    if (ap.IsBound())
    {
      op->SetPostProcessPass(temp0);
    }
    else
    {
      op->vtkRenderStepsPass::SetPostProcessPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderStepsPass_Methods[] = {
  {"IsTypeOf", PyvtkRenderStepsPass_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderStepsPass_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderStepsPass_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRenderStepsPass\nC++: static vtkRenderStepsPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderStepsPass_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRenderStepsPass\nC++: vtkRenderStepsPass *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRenderStepsPass_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRenderStepsPass_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ReleaseGraphicsResources", PyvtkRenderStepsPass_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, w:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"GetCameraPass", PyvtkRenderStepsPass_GetCameraPass, METH_VARARGS,
   "GetCameraPass(self) -> vtkCameraPass\nC++: virtual vtkCameraPass *GetCameraPass()\n\nGet the RenderPass used for the Camera Step\n"},
  {"SetCameraPass", PyvtkRenderStepsPass_SetCameraPass, METH_VARARGS,
   "SetCameraPass(self, __a:vtkCameraPass) -> None\nC++: void SetCameraPass(vtkCameraPass *)\n\n"},
  {"GetLightsPass", PyvtkRenderStepsPass_GetLightsPass, METH_VARARGS,
   "GetLightsPass(self) -> vtkRenderPass\nC++: virtual vtkRenderPass *GetLightsPass()\n\nGet the RenderPass used for the Lights Step\n"},
  {"SetLightsPass", PyvtkRenderStepsPass_SetLightsPass, METH_VARARGS,
   "SetLightsPass(self, __a:vtkRenderPass) -> None\nC++: void SetLightsPass(vtkRenderPass *)\n\n"},
  {"GetOpaquePass", PyvtkRenderStepsPass_GetOpaquePass, METH_VARARGS,
   "GetOpaquePass(self) -> vtkRenderPass\nC++: virtual vtkRenderPass *GetOpaquePass()\n\nGet the RenderPass used for the Opaque Step\n"},
  {"SetOpaquePass", PyvtkRenderStepsPass_SetOpaquePass, METH_VARARGS,
   "SetOpaquePass(self, __a:vtkRenderPass) -> None\nC++: void SetOpaquePass(vtkRenderPass *)\n\n"},
  {"GetTranslucentPass", PyvtkRenderStepsPass_GetTranslucentPass, METH_VARARGS,
   "GetTranslucentPass(self) -> vtkRenderPass\nC++: virtual vtkRenderPass *GetTranslucentPass()\n\nGet the RenderPass used for the translucent Step\n"},
  {"SetTranslucentPass", PyvtkRenderStepsPass_SetTranslucentPass, METH_VARARGS,
   "SetTranslucentPass(self, __a:vtkRenderPass) -> None\nC++: void SetTranslucentPass(vtkRenderPass *)\n\n"},
  {"GetVolumetricPass", PyvtkRenderStepsPass_GetVolumetricPass, METH_VARARGS,
   "GetVolumetricPass(self) -> vtkRenderPass\nC++: virtual vtkRenderPass *GetVolumetricPass()\n\nGet the RenderPass used for the Volume Step\n"},
  {"SetVolumetricPass", PyvtkRenderStepsPass_SetVolumetricPass, METH_VARARGS,
   "SetVolumetricPass(self, __a:vtkRenderPass) -> None\nC++: void SetVolumetricPass(vtkRenderPass *)\n\n"},
  {"GetOverlayPass", PyvtkRenderStepsPass_GetOverlayPass, METH_VARARGS,
   "GetOverlayPass(self) -> vtkRenderPass\nC++: virtual vtkRenderPass *GetOverlayPass()\n\nGet the RenderPass used for the Overlay Step\n"},
  {"SetOverlayPass", PyvtkRenderStepsPass_SetOverlayPass, METH_VARARGS,
   "SetOverlayPass(self, __a:vtkRenderPass) -> None\nC++: void SetOverlayPass(vtkRenderPass *)\n\n"},
  {"GetPostProcessPass", PyvtkRenderStepsPass_GetPostProcessPass, METH_VARARGS,
   "GetPostProcessPass(self) -> vtkRenderPass\nC++: virtual vtkRenderPass *GetPostProcessPass()\n\nGet the RenderPass used for the PostProcess Step\n"},
  {"SetPostProcessPass", PyvtkRenderStepsPass_SetPostProcessPass, METH_VARARGS,
   "SetPostProcessPass(self, __a:vtkRenderPass) -> None\nC++: void SetPostProcessPass(vtkRenderPass *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRenderStepsPass_Doc =
  "vtkRenderStepsPass - Execute render passes sequentially.\n\n"
  "Superclass: vtkRenderPass\n\n"
  "vtkRenderStepsPass executes a standard list of render passes\n"
  "sequentially. This class allows to define a sequence of render passes\n"
  "at run time. You can set a step to NULL in order to skip that step.\n"
  "Likewise you can replace any of the default steps with your own step.\n"
  "Typically in such a case you would get the current step, replace it\n"
  "with your own and likely have your step call the current step as a\n"
  "delegate. For example to replace the translucent step with a\n"
  "depthpeeling step you would get the current tranlucent step and set\n"
  "it as a delegate on the depthpeeling step. Then set this classes\n"
  "translparent step to the depthpeelnig step.\n\n"
  "@sa\n"
  "vtkRenderPass\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRenderStepsPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkRenderStepsPass", // tp_name
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
  PyvtkRenderStepsPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderStepsPass_StaticNew()
{
  return vtkRenderStepsPass::New();
}

PyObject *PyvtkRenderStepsPass_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRenderStepsPass_Type, PyvtkRenderStepsPass_Methods,
    "vtkRenderStepsPass",
 &PyvtkRenderStepsPass_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkRenderPass");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRenderStepsPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderStepsPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderStepsPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

