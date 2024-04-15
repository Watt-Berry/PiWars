// python wrapper for vtkOutlineGlowPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOutlineGlowPass.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOutlineGlowPass(PyObject *dict); }
extern "C" { PyObject *PyvtkOutlineGlowPass_ClassNew(); }

#ifndef DECLARED_PyvtkImageProcessingPass_ClassNew
extern "C" { PyObject *PyvtkImageProcessingPass_ClassNew(); }
#define DECLARED_PyvtkImageProcessingPass_ClassNew
#endif

static PyObject *
PyvtkOutlineGlowPass_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOutlineGlowPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineGlowPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineGlowPass *op = static_cast<vtkOutlineGlowPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOutlineGlowPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineGlowPass_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOutlineGlowPass *tempr = vtkOutlineGlowPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineGlowPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineGlowPass *op = static_cast<vtkOutlineGlowPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOutlineGlowPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOutlineGlowPass::NewInstance());

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
PyvtkOutlineGlowPass_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOutlineGlowPass::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineGlowPass_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineGlowPass *op = static_cast<vtkOutlineGlowPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOutlineGlowPass::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineGlowPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineGlowPass *op = static_cast<vtkOutlineGlowPass *>(vp);

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
      op->vtkOutlineGlowPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineGlowPass_GetOutlineIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineGlowPass *op = static_cast<vtkOutlineGlowPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetOutlineIntensity() :
      op->vtkOutlineGlowPass::GetOutlineIntensity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineGlowPass_SetOutlineIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineGlowPass *op = static_cast<vtkOutlineGlowPass *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutlineIntensity(temp0);
    }
    else
    {
      op->vtkOutlineGlowPass::SetOutlineIntensity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOutlineGlowPass_Methods[] = {
  {"IsTypeOf", PyvtkOutlineGlowPass_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOutlineGlowPass_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOutlineGlowPass_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOutlineGlowPass\nC++: static vtkOutlineGlowPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOutlineGlowPass_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOutlineGlowPass\nC++: vtkOutlineGlowPass *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOutlineGlowPass_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOutlineGlowPass_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ReleaseGraphicsResources", PyvtkOutlineGlowPass_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, w:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"GetOutlineIntensity", PyvtkOutlineGlowPass_GetOutlineIntensity, METH_VARARGS,
   "GetOutlineIntensity(self) -> float\nC++: virtual float GetOutlineIntensity()\n\nGet/Set the intensity of the outline. Default value is 3.0 which\ngives a bright outline with a fading edge\n"},
  {"SetOutlineIntensity", PyvtkOutlineGlowPass_SetOutlineIntensity, METH_VARARGS,
   "SetOutlineIntensity(self, _arg:float) -> None\nC++: virtual void SetOutlineIntensity(float _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOutlineGlowPass_Doc =
  "vtkOutlineGlowPass - Renders a glowing outline using a image\nprocessing pass\n\n"
  "Superclass: vtkImageProcessingPass\n\n"
  "Create a glowing outline of the image rendered by the delegate.\n\n"
  "This render pass was designed to highlight parts of a scene by\n"
  "applying the render pass to a layered renderer on top of the main\n"
  "scene. For optimal results, actors that form the outline should be\n"
  "brightly colored with lighting disabled. The outline will have the\n"
  "color of the actors. There is only one outline around all objects\n"
  "rendered by the delegate.\n\n"
  "This pass expects an initialized depth buffer and color buffer.\n"
  "Initialized buffers means they have been cleared with farthest\n"
  "z-value and background color/gradient/transparent color. An opaque\n"
  "pass may have been performed right after the initialization.\n\n"
  "The delegate is used once.\n\n"
  "Its delegate is usually set to a vtkCameraPass or to a\n"
  "post-processing pass.\n\n"
  "This pass requires a OpenGL context that supports texture objects\n"
  "(TO), framebuffer objects (FBO) and GLSL. If not, it will emit an\n"
  "error message and will render its delegate and return.\n\n"
  "@par Implementation: The image is first rendered to a full size\n"
  "offscreen render target, then blurred twice on a half sized render\n"
  "target using Gaussian blur with an offset. The offset and the smaller\n"
  "render target increase the size of the outline without incurring the\n"
  "cost of a big Gaussian blur kernel. The implementation of the\n"
  "gaussian blur is similar to vtkGaussianBlurPass with the alterations\n"
  "described above.\n\n"
  "@sa\n"
  "vtkRenderPass vtkGaussianBlurPass\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOutlineGlowPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOutlineGlowPass", // tp_name
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
  PyvtkOutlineGlowPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOutlineGlowPass_StaticNew()
{
  return vtkOutlineGlowPass::New();
}

PyObject *PyvtkOutlineGlowPass_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOutlineGlowPass_Type, PyvtkOutlineGlowPass_Methods,
    "vtkOutlineGlowPass",
 &PyvtkOutlineGlowPass_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageProcessingPass_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOutlineGlowPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOutlineGlowPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOutlineGlowPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

