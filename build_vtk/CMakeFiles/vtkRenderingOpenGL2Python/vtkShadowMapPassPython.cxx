// python wrapper for vtkShadowMapPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkShadowMapPass.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkShadowMapPass(PyObject *dict); }
extern "C" { PyObject *PyvtkShadowMapPass_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLRenderPass_ClassNew
extern "C" { PyObject *PyvtkOpenGLRenderPass_ClassNew(); }
#define DECLARED_PyvtkOpenGLRenderPass_ClassNew
#endif

static PyObject *
PyvtkShadowMapPass_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkShadowMapPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkShadowMapPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkShadowMapPass *tempr = vtkShadowMapPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShadowMapPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkShadowMapPass::NewInstance());

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
PyvtkShadowMapPass_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkShadowMapPass::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkShadowMapPass::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

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
      op->vtkShadowMapPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_GetShadowMapBakerPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadowMapBakerPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShadowMapBakerPass *tempr = (ap.IsBound() ?
      op->GetShadowMapBakerPass() :
      op->vtkShadowMapPass::GetShadowMapBakerPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_SetShadowMapBakerPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadowMapBakerPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  vtkShadowMapBakerPass *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShadowMapBakerPass"))
  {
    if (ap.IsBound())
    {
      op->SetShadowMapBakerPass(temp0);
    }
    else
    {
      op->vtkShadowMapPass::SetShadowMapBakerPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_GetOpaqueSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpaqueSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderPass *tempr = (ap.IsBound() ?
      op->GetOpaqueSequence() :
      op->vtkShadowMapPass::GetOpaqueSequence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_SetOpaqueSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpaqueSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

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
      op->vtkShadowMapPass::SetOpaqueSequence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_ShadowMapTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadowMapTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<double> tempr = (ap.IsBound() ?
      op->ShadowMapTransforms() :
      op->vtkShadowMapPass::ShadowMapTransforms());

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_GetShadowMapTextureUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadowMapTextureUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<int> tempr = (ap.IsBound() ?
      op->GetShadowMapTextureUnits() :
      op->vtkShadowMapPass::GetShadowMapTextureUnits());

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_ShadowMapPass(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ShadowMapPass");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationObjectBaseKey *tempr = vtkShadowMapPass::ShadowMapPass();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_GetFragmentDeclaration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFragmentDeclaration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFragmentDeclaration() :
      op->vtkShadowMapPass::GetFragmentDeclaration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_GetFragmentImplementation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFragmentImplementation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFragmentImplementation() :
      op->vtkShadowMapPass::GetFragmentImplementation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_PreReplaceShaderValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreReplaceShaderValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  std::string temp0;
  std::string temp1;
  std::string temp2;
  vtkAbstractMapper *temp3 = nullptr;
  vtkProp *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractMapper") &&
      ap.GetVTKObject(temp4, "vtkProp"))
  {
    bool tempr = (ap.IsBound() ?
      op->PreReplaceShaderValues(temp0, temp1, temp2, temp3, temp4) :
      op->vtkShadowMapPass::PreReplaceShaderValues(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_PostReplaceShaderValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostReplaceShaderValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  std::string temp0;
  std::string temp1;
  std::string temp2;
  vtkAbstractMapper *temp3 = nullptr;
  vtkProp *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractMapper") &&
      ap.GetVTKObject(temp4, "vtkProp"))
  {
    bool tempr = (ap.IsBound() ?
      op->PostReplaceShaderValues(temp0, temp1, temp2, temp3, temp4) :
      op->vtkShadowMapPass::PostReplaceShaderValues(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShadowMapPass_SetShaderParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShadowMapPass *op = static_cast<vtkShadowMapPass *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  vtkAbstractMapper *temp1 = nullptr;
  vtkProp *temp2 = nullptr;
  vtkOpenGLVertexArrayObject *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram") &&
      ap.GetVTKObject(temp1, "vtkAbstractMapper") &&
      ap.GetVTKObject(temp2, "vtkProp") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkOpenGLVertexArrayObject")))
  {
    bool tempr = (ap.IsBound() ?
      op->SetShaderParameters(temp0, temp1, temp2, temp3) :
      op->vtkShadowMapPass::SetShaderParameters(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkShadowMapPass_Methods[] = {
  {"IsTypeOf", PyvtkShadowMapPass_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkShadowMapPass_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkShadowMapPass_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkShadowMapPass\nC++: static vtkShadowMapPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkShadowMapPass_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkShadowMapPass\nC++: vtkShadowMapPass *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkShadowMapPass_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkShadowMapPass_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ReleaseGraphicsResources", PyvtkShadowMapPass_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, w:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n\\pre w_exists: w!=0\n"},
  {"GetShadowMapBakerPass", PyvtkShadowMapPass_GetShadowMapBakerPass, METH_VARARGS,
   "GetShadowMapBakerPass(self) -> vtkShadowMapBakerPass\nC++: virtual vtkShadowMapBakerPass *GetShadowMapBakerPass()\n\nPass that generates the shadow maps. the vtkShadowMapPass will\nuse the Resolution ivar of this pass. Initial value is a NULL\npointer.\n"},
  {"SetShadowMapBakerPass", PyvtkShadowMapPass_SetShadowMapBakerPass, METH_VARARGS,
   "SetShadowMapBakerPass(self,\n    shadowMapBakerPass:vtkShadowMapBakerPass) -> None\nC++: virtual void SetShadowMapBakerPass(\n    vtkShadowMapBakerPass *shadowMapBakerPass)\n\n"},
  {"GetOpaqueSequence", PyvtkShadowMapPass_GetOpaqueSequence, METH_VARARGS,
   "GetOpaqueSequence(self) -> vtkRenderPass\nC++: virtual vtkRenderPass *GetOpaqueSequence()\n\nPass that render the lights and opaque geometry Typically a\nsequence pass with a light pass and opaque pass.\n"},
  {"SetOpaqueSequence", PyvtkShadowMapPass_SetOpaqueSequence, METH_VARARGS,
   "SetOpaqueSequence(self, opaqueSequence:vtkRenderPass) -> None\nC++: virtual void SetOpaqueSequence(vtkRenderPass *opaqueSequence)\n\n"},
  {"ShadowMapTransforms", PyvtkShadowMapPass_ShadowMapTransforms, METH_VARARGS,
   "ShadowMapTransforms(self) -> (float, ...)\nC++: std::vector<double> ShadowMapTransforms()\n\nget the matricies for all the shadow maps.\n"},
  {"GetShadowMapTextureUnits", PyvtkShadowMapPass_GetShadowMapTextureUnits, METH_VARARGS,
   "GetShadowMapTextureUnits(self) -> (int, ...)\nC++: std::vector<int> GetShadowMapTextureUnits()\n\nget the texture units for the shadow maps for each light. If a\nlight does not cast a shadow it is set to -1\n"},
  {"ShadowMapPass", PyvtkShadowMapPass_ShadowMapPass, METH_VARARGS,
   "ShadowMapPass() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *ShadowMapPass()\n\nthis key will contain the shadow map pass\n"},
  {"GetFragmentDeclaration", PyvtkShadowMapPass_GetFragmentDeclaration, METH_VARARGS,
   "GetFragmentDeclaration(self) -> str\nC++: std::string GetFragmentDeclaration()\n\nGet the shader code to compute light factors based on a mappers\nvertexVC variable\n"},
  {"GetFragmentImplementation", PyvtkShadowMapPass_GetFragmentImplementation, METH_VARARGS,
   "GetFragmentImplementation(self) -> str\nC++: std::string GetFragmentImplementation()\n\n"},
  {"PreReplaceShaderValues", PyvtkShadowMapPass_PreReplaceShaderValues, METH_VARARGS,
   "PreReplaceShaderValues(self, vertexShader:str, geometryShader:str,\n     fragmentShader:str, mapper:vtkAbstractMapper, prop:vtkProp)\n    -> bool\nC++: bool PreReplaceShaderValues(std::string &vertexShader,\n    std::string &geometryShader, std::string &fragmentShader,\n    vtkAbstractMapper *mapper, vtkProp *prop) override;\n\nUse vtkShaderProgram::Substitute to replace //VTK::XXX:YYY \ndeclarations in the shader sources. Gets called before other\nmapper shader replacements Return false on error.\n"},
  {"PostReplaceShaderValues", PyvtkShadowMapPass_PostReplaceShaderValues, METH_VARARGS,
   "PostReplaceShaderValues(self, vertexShader:str,\n    geometryShader:str, fragmentShader:str,\n    mapper:vtkAbstractMapper, prop:vtkProp) -> bool\nC++: bool PostReplaceShaderValues(std::string &vertexShader,\n    std::string &geometryShader, std::string &fragmentShader,\n    vtkAbstractMapper *mapper, vtkProp *prop) override;\n\n"},
  {"SetShaderParameters", PyvtkShadowMapPass_SetShaderParameters, METH_VARARGS,
   "SetShaderParameters(self, program:vtkShaderProgram,\n    mapper:vtkAbstractMapper, prop:vtkProp,\n    VAO:vtkOpenGLVertexArrayObject=...) -> bool\nC++: bool SetShaderParameters(vtkShaderProgram *program,\n    vtkAbstractMapper *mapper, vtkProp *prop,\n    vtkOpenGLVertexArrayObject *VAO=nullptr) override;\n\nUpdate the uniforms of the shader program. Return false on error.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkShadowMapPass_Doc =
  "vtkShadowMapPass - Implement a shadow mapping render pass.\n\n"
  "Superclass: vtkOpenGLRenderPass\n\n"
  "Render the opaque polygonal geometry of a scene with shadow maps (a\n"
  "technique to render hard shadows in hardware).\n\n"
  "This pass expects an initialized depth buffer and color buffer.\n"
  "Initialized buffers means they have been cleared with farest z-value\n"
  "and background color/gradient/transparent color. An opaque pass may\n"
  "have been performed right after the initialization.\n\n"
  "Its delegate is usually set to a vtkOpaquePass.\n\n"
  "@par Implementation: The first pass of the algorithm is to generate a\n"
  "shadow map per light (depth map from the light point of view) by\n"
  "rendering the opaque objects with the OCCLUDER property keys. The\n"
  "second pass is to render the opaque objects with the RECEIVER keys.\n\n"
  "@sa\n"
  "vtkRenderPass, vtkOpaquePass\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkShadowMapPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkShadowMapPass", // tp_name
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
  PyvtkShadowMapPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkShadowMapPass_StaticNew()
{
  return vtkShadowMapPass::New();
}

PyObject *PyvtkShadowMapPass_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkShadowMapPass_Type, PyvtkShadowMapPass_Methods,
    "vtkShadowMapPass",
 &PyvtkShadowMapPass_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLRenderPass_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkShadowMapPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkShadowMapPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkShadowMapPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

