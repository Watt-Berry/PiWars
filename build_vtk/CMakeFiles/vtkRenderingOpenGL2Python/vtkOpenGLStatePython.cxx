// python wrapper for vtkOpenGLState
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLState.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLState(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLState_ClassNew(); }


static PyObject *
PyvtkOpenGLState_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLState::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLState::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLState *tempr = vtkOpenGLState::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLState *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLState::NewInstance());

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
PyvtkOpenGLState_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLState::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLState::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglClearColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglClearColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->vtkglClearColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLState::vtkglClearColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglClearDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglClearDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->vtkglClearDepth(temp0);
    }
    else
    {
      op->vtkOpenGLState::vtkglClearDepth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglDepthFunc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglDepthFunc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->vtkglDepthFunc(temp0);
    }
    else
    {
      op->vtkOpenGLState::vtkglDepthFunc(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglDepthMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglDepthMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->vtkglDepthMask(temp0);
    }
    else
    {
      op->vtkOpenGLState::vtkglDepthMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglColorMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglColorMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->vtkglColorMask(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLState::vtkglColorMask(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->vtkglViewport(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLState::vtkglViewport(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglScissor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglScissor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->vtkglScissor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLState::vtkglScissor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->vtkglEnable(temp0);
    }
    else
    {
      op->vtkOpenGLState::vtkglEnable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglDisable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglDisable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->vtkglDisable(temp0);
    }
    else
    {
      op->vtkOpenGLState::vtkglDisable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglBlendFunc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglBlendFunc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->vtkglBlendFunc(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLState::vtkglBlendFunc(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglBlendFuncSeparate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglBlendFuncSeparate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->vtkglBlendFuncSeparate(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLState::vtkglBlendFuncSeparate(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglBlendEquation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglBlendEquation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->vtkglBlendEquation(temp0);
    }
    else
    {
      op->vtkOpenGLState::vtkglBlendEquation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglBlendEquationSeparate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglBlendEquationSeparate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->vtkglBlendEquationSeparate(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLState::vtkglBlendEquationSeparate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglCullFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglCullFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->vtkglCullFace(temp0);
    }
    else
    {
      op->vtkOpenGLState::vtkglCullFace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglActiveTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglActiveTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->vtkglActiveTexture(temp0);
    }
    else
    {
      op->vtkOpenGLState::vtkglActiveTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglBindFramebuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglBindFramebuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->vtkglBindFramebuffer(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLState::vtkglBindFramebuffer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglDrawBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglDrawBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->vtkglDrawBuffer(temp0);
    }
    else
    {
      op->vtkOpenGLState::vtkglDrawBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglDrawBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglDrawBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned int> store1(2*size1);
  unsigned int *temp1 = store1.Data();
  unsigned int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->vtkglDrawBuffers(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLState::vtkglDrawBuffers(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglReadBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglReadBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->vtkglReadBuffer(temp0);
    }
    else
    {
      op->vtkOpenGLState::vtkglReadBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->vtkglPointSize(temp0);
    }
    else
    {
      op->vtkOpenGLState::vtkglPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->vtkglLineWidth(temp0);
    }
    else
    {
      op->vtkOpenGLState::vtkglLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglStencilMaskSeparate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglStencilMaskSeparate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->vtkglStencilMaskSeparate(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLState::vtkglStencilMaskSeparate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglStencilMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglStencilMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->vtkglStencilMask(temp0);
    }
    else
    {
      op->vtkOpenGLState::vtkglStencilMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglStencilOpSeparate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglStencilOpSeparate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->vtkglStencilOpSeparate(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLState::vtkglStencilOpSeparate(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglStencilOp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglStencilOp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->vtkglStencilOp(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLState::vtkglStencilOp(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglStencilFuncSeparate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglStencilFuncSeparate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->vtkglStencilFuncSeparate(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLState::vtkglStencilFuncSeparate(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglStencilFunc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglStencilFunc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->vtkglStencilFunc(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLState::vtkglStencilFunc(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkBindFramebuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkBindFramebuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  vtkOpenGLFramebufferObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkOpenGLFramebufferObject"))
  {
    if (ap.IsBound())
    {
      op->vtkBindFramebuffer(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLState::vtkBindFramebuffer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkDrawBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkDrawBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned int> store1(2*size1);
  unsigned int *temp1 = store1.Data();
  unsigned int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  vtkOpenGLFramebufferObject *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkOpenGLFramebufferObject"))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->vtkDrawBuffers(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLState::vtkDrawBuffers(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkReadBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkReadBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  vtkOpenGLFramebufferObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkOpenGLFramebufferObject"))
  {
    if (ap.IsBound())
    {
      op->vtkReadBuffer(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLState::vtkReadBuffer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglPixelStorei(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglPixelStorei");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->vtkglPixelStorei(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLState::vtkglPixelStorei(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGLClearColorState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGLClearColorState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetGLClearColorState();
    }
    else
    {
      op->vtkOpenGLState::ResetGLClearColorState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGLClearDepthState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGLClearDepthState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetGLClearDepthState();
    }
    else
    {
      op->vtkOpenGLState::ResetGLClearDepthState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGLDepthFuncState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGLDepthFuncState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetGLDepthFuncState();
    }
    else
    {
      op->vtkOpenGLState::ResetGLDepthFuncState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGLDepthMaskState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGLDepthMaskState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetGLDepthMaskState();
    }
    else
    {
      op->vtkOpenGLState::ResetGLDepthMaskState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGLColorMaskState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGLColorMaskState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetGLColorMaskState();
    }
    else
    {
      op->vtkOpenGLState::ResetGLColorMaskState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGLViewportState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGLViewportState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetGLViewportState();
    }
    else
    {
      op->vtkOpenGLState::ResetGLViewportState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGLScissorState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGLScissorState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetGLScissorState();
    }
    else
    {
      op->vtkOpenGLState::ResetGLScissorState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGLBlendFuncState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGLBlendFuncState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetGLBlendFuncState();
    }
    else
    {
      op->vtkOpenGLState::ResetGLBlendFuncState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGLBlendEquationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGLBlendEquationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetGLBlendEquationState();
    }
    else
    {
      op->vtkOpenGLState::ResetGLBlendEquationState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGLCullFaceState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGLCullFaceState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetGLCullFaceState();
    }
    else
    {
      op->vtkOpenGLState::ResetGLCullFaceState();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetGLActiveTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetGLActiveTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetGLActiveTexture();
    }
    else
    {
      op->vtkOpenGLState::ResetGLActiveTexture();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglClear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglClear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->vtkglClear(temp0);
    }
    else
    {
      op->vtkOpenGLState::vtkglClear(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglGetBooleanv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglGetBooleanv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->vtkglGetBooleanv(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLState::vtkglGetBooleanv(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglGetIntegerv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglGetIntegerv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->vtkglGetIntegerv(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLState::vtkglGetIntegerv(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglGetDoublev(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglGetDoublev");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->vtkglGetDoublev(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLState::vtkglGetDoublev(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglGetFloatv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglGetFloatv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->vtkglGetFloatv(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLState::vtkglGetFloatv(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_GetBlendFuncState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendFuncState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBlendFuncState(temp0);
    }
    else
    {
      op->vtkOpenGLState::GetBlendFuncState(temp0);
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
PyvtkOpenGLState_GetEnumState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnumState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnumState(temp0) :
      op->vtkOpenGLState::GetEnumState(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_SetEnumState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnumState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEnumState(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLState::SetEnumState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetEnumState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetEnumState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ResetEnumState(temp0);
    }
    else
    {
      op->vtkOpenGLState::ResetEnumState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ActivateTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    if (ap.IsBound())
    {
      op->ActivateTexture(temp0);
    }
    else
    {
      op->vtkOpenGLState::ActivateTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_DeactivateTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeactivateTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    if (ap.IsBound())
    {
      op->DeactivateTexture(temp0);
    }
    else
    {
      op->vtkOpenGLState::DeactivateTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_GetTextureUnitForTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureUnitForTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureUnitForTexture(temp0) :
      op->vtkOpenGLState::GetTextureUnitForTexture(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_VerifyNoActiveTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VerifyNoActiveTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VerifyNoActiveTextures();
    }
    else
    {
      op->vtkOpenGLState::VerifyNoActiveTextures();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_PushFramebufferBindings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushFramebufferBindings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushFramebufferBindings();
    }
    else
    {
      op->vtkOpenGLState::PushFramebufferBindings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_PushDrawFramebufferBinding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushDrawFramebufferBinding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushDrawFramebufferBinding();
    }
    else
    {
      op->vtkOpenGLState::PushDrawFramebufferBinding();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_PushReadFramebufferBinding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushReadFramebufferBinding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushReadFramebufferBinding();
    }
    else
    {
      op->vtkOpenGLState::PushReadFramebufferBinding();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_PopFramebufferBindings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopFramebufferBindings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopFramebufferBindings();
    }
    else
    {
      op->vtkOpenGLState::PopFramebufferBindings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_PopDrawFramebufferBinding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopDrawFramebufferBinding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopDrawFramebufferBinding();
    }
    else
    {
      op->vtkOpenGLState::PopDrawFramebufferBinding();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_PopReadFramebufferBinding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopReadFramebufferBinding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopReadFramebufferBinding();
    }
    else
    {
      op->vtkOpenGLState::PopReadFramebufferBinding();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_ResetFramebufferBindings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFramebufferBindings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetFramebufferBindings();
    }
    else
    {
      op->vtkOpenGLState::ResetFramebufferBindings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  vtkOpenGLRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkOpenGLState::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_SetTextureUnitManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureUnitManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  vtkTextureUnitManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureUnitManager"))
  {
    if (ap.IsBound())
    {
      op->SetTextureUnitManager(temp0);
    }
    else
    {
      op->vtkOpenGLState::SetTextureUnitManager(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_GetTextureUnitManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureUnitManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureUnitManager *tempr = (ap.IsBound() ?
      op->GetTextureUnitManager() :
      op->vtkOpenGLState::GetTextureUnitManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_GetShaderCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLShaderCache *tempr = (ap.IsBound() ?
      op->GetShaderCache() :
      op->vtkOpenGLState::GetShaderCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_GetVBOCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVBOCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLVertexBufferObjectCache *tempr = (ap.IsBound() ?
      op->GetVBOCache() :
      op->vtkOpenGLState::GetVBOCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_SetVBOCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVBOCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  vtkOpenGLVertexBufferObjectCache *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLVertexBufferObjectCache"))
  {
    if (ap.IsBound())
    {
      op->SetVBOCache(temp0);
    }
    else
    {
      op->vtkOpenGLState::SetVBOCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_GetDefaultTextureInternalFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultTextureInternalFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  int temp0;
  int temp1;
  bool temp2 = false;
  bool temp3 = false;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultTextureInternalFormat(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLState::GetDefaultTextureInternalFormat(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_GetCurrentDrawFramebufferState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentDrawFramebufferState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetCurrentDrawFramebufferState(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLState::GetCurrentDrawFramebufferState(temp0, temp1);
    }

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_vtkglBlitFramebuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkglBlitFramebuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  unsigned int temp8;
  unsigned int temp9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9))
  {
    if (ap.IsBound())
    {
      op->vtkglBlitFramebuffer(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }
    else
    {
      op->vtkOpenGLState::vtkglBlitFramebuffer(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkOpenGLState::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Push();
    }
    else
    {
      op->vtkOpenGLState::Push();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_Pop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Pop();
    }
    else
    {
      op->vtkOpenGLState::Pop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_GetVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetVersion() :
      &op->vtkOpenGLState::GetVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_GetVendor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVendor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetVendor() :
      &op->vtkOpenGLState::GetVendor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLState_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLState *op = static_cast<vtkOpenGLState *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetRenderer() :
      &op->vtkOpenGLState::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLState_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLState_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLState_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLState_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLState\nC++: static vtkOpenGLState *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLState_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLState\nC++: vtkOpenGLState *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLState_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLState_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"vtkglClearColor", PyvtkOpenGLState_vtkglClearColor, METH_VARARGS,
   "vtkglClearColor(self, red:float, green:float, blue:float,\n    alpha:float) -> None\nC++: void vtkglClearColor(float red, float green, float blue,\n    float alpha)\n\n"},
  {"vtkglClearDepth", PyvtkOpenGLState_vtkglClearDepth, METH_VARARGS,
   "vtkglClearDepth(self, depth:float) -> None\nC++: void vtkglClearDepth(double depth)\n\n"},
  {"vtkglDepthFunc", PyvtkOpenGLState_vtkglDepthFunc, METH_VARARGS,
   "vtkglDepthFunc(self, val:int) -> None\nC++: void vtkglDepthFunc(unsigned int val)\n\n"},
  {"vtkglDepthMask", PyvtkOpenGLState_vtkglDepthMask, METH_VARARGS,
   "vtkglDepthMask(self, flag:int) -> None\nC++: void vtkglDepthMask(unsigned char flag)\n\n"},
  {"vtkglColorMask", PyvtkOpenGLState_vtkglColorMask, METH_VARARGS,
   "vtkglColorMask(self, r:int, g:int, b:int, a:int) -> None\nC++: void vtkglColorMask(unsigned char r, unsigned char g,\n    unsigned char b, unsigned char a)\n\n"},
  {"vtkglViewport", PyvtkOpenGLState_vtkglViewport, METH_VARARGS,
   "vtkglViewport(self, x:int, y:int, width:int, height:int) -> None\nC++: void vtkglViewport(int x, int y, int width, int height)\n\n"},
  {"vtkglScissor", PyvtkOpenGLState_vtkglScissor, METH_VARARGS,
   "vtkglScissor(self, x:int, y:int, width:int, height:int) -> None\nC++: void vtkglScissor(int x, int y, int width, int height)\n\n"},
  {"vtkglEnable", PyvtkOpenGLState_vtkglEnable, METH_VARARGS,
   "vtkglEnable(self, cap:int) -> None\nC++: void vtkglEnable(unsigned int cap)\n\n"},
  {"vtkglDisable", PyvtkOpenGLState_vtkglDisable, METH_VARARGS,
   "vtkglDisable(self, cap:int) -> None\nC++: void vtkglDisable(unsigned int cap)\n\n"},
  {"vtkglBlendFunc", PyvtkOpenGLState_vtkglBlendFunc, METH_VARARGS,
   "vtkglBlendFunc(self, sfactor:int, dfactor:int) -> None\nC++: void vtkglBlendFunc(unsigned int sfactor,\n    unsigned int dfactor)\n\n"},
  {"vtkglBlendFuncSeparate", PyvtkOpenGLState_vtkglBlendFuncSeparate, METH_VARARGS,
   "vtkglBlendFuncSeparate(self, sfactorRGB:int, dfactorRGB:int,\n    sfactorAlpha:int, dfactorAlpha:int) -> None\nC++: void vtkglBlendFuncSeparate(unsigned int sfactorRGB,\n    unsigned int dfactorRGB, unsigned int sfactorAlpha,\n    unsigned int dfactorAlpha)\n\n"},
  {"vtkglBlendEquation", PyvtkOpenGLState_vtkglBlendEquation, METH_VARARGS,
   "vtkglBlendEquation(self, val:int) -> None\nC++: void vtkglBlendEquation(unsigned int val)\n\n"},
  {"vtkglBlendEquationSeparate", PyvtkOpenGLState_vtkglBlendEquationSeparate, METH_VARARGS,
   "vtkglBlendEquationSeparate(self, col:int, alpha:int) -> None\nC++: void vtkglBlendEquationSeparate(unsigned int col,\n    unsigned int alpha)\n\n"},
  {"vtkglCullFace", PyvtkOpenGLState_vtkglCullFace, METH_VARARGS,
   "vtkglCullFace(self, val:int) -> None\nC++: void vtkglCullFace(unsigned int val)\n\n"},
  {"vtkglActiveTexture", PyvtkOpenGLState_vtkglActiveTexture, METH_VARARGS,
   "vtkglActiveTexture(self, __a:int) -> None\nC++: void vtkglActiveTexture(unsigned int)\n\n"},
  {"vtkglBindFramebuffer", PyvtkOpenGLState_vtkglBindFramebuffer, METH_VARARGS,
   "vtkglBindFramebuffer(self, target:int, fb:int) -> None\nC++: void vtkglBindFramebuffer(unsigned int target,\n    unsigned int fb)\n\n"},
  {"vtkglDrawBuffer", PyvtkOpenGLState_vtkglDrawBuffer, METH_VARARGS,
   "vtkglDrawBuffer(self, __a:int) -> None\nC++: void vtkglDrawBuffer(unsigned int)\n\n"},
  {"vtkglDrawBuffers", PyvtkOpenGLState_vtkglDrawBuffers, METH_VARARGS,
   "vtkglDrawBuffers(self, n:int, __b:[int, ...]) -> None\nC++: void vtkglDrawBuffers(unsigned int n, unsigned int *)\n\n"},
  {"vtkglReadBuffer", PyvtkOpenGLState_vtkglReadBuffer, METH_VARARGS,
   "vtkglReadBuffer(self, __a:int) -> None\nC++: void vtkglReadBuffer(unsigned int)\n\n"},
  {"vtkglPointSize", PyvtkOpenGLState_vtkglPointSize, METH_VARARGS,
   "vtkglPointSize(self, __a:float) -> None\nC++: void vtkglPointSize(float)\n\n"},
  {"vtkglLineWidth", PyvtkOpenGLState_vtkglLineWidth, METH_VARARGS,
   "vtkglLineWidth(self, __a:float) -> None\nC++: void vtkglLineWidth(float)\n\n"},
  {"vtkglStencilMaskSeparate", PyvtkOpenGLState_vtkglStencilMaskSeparate, METH_VARARGS,
   "vtkglStencilMaskSeparate(self, face:int, mask:int) -> None\nC++: void vtkglStencilMaskSeparate(unsigned int face,\n    unsigned int mask)\n\n"},
  {"vtkglStencilMask", PyvtkOpenGLState_vtkglStencilMask, METH_VARARGS,
   "vtkglStencilMask(self, mask:int) -> None\nC++: void vtkglStencilMask(unsigned int mask)\n\n"},
  {"vtkglStencilOpSeparate", PyvtkOpenGLState_vtkglStencilOpSeparate, METH_VARARGS,
   "vtkglStencilOpSeparate(self, face:int, sfail:int, dpfail:int,\n    dppass:int) -> None\nC++: void vtkglStencilOpSeparate(unsigned int face,\n    unsigned int sfail, unsigned int dpfail, unsigned int dppass)\n\n"},
  {"vtkglStencilOp", PyvtkOpenGLState_vtkglStencilOp, METH_VARARGS,
   "vtkglStencilOp(self, sfail:int, dpfail:int, dppass:int) -> None\nC++: void vtkglStencilOp(unsigned int sfail, unsigned int dpfail,\n    unsigned int dppass)\n\n"},
  {"vtkglStencilFuncSeparate", PyvtkOpenGLState_vtkglStencilFuncSeparate, METH_VARARGS,
   "vtkglStencilFuncSeparate(self, face:int, func:int, ref:int,\n    mask:int) -> None\nC++: void vtkglStencilFuncSeparate(unsigned int face,\n    unsigned int func, int ref, unsigned int mask)\n\n"},
  {"vtkglStencilFunc", PyvtkOpenGLState_vtkglStencilFunc, METH_VARARGS,
   "vtkglStencilFunc(self, func:int, ref:int, mask:int) -> None\nC++: void vtkglStencilFunc(unsigned int func, int ref,\n    unsigned int mask)\n\n"},
  {"vtkBindFramebuffer", PyvtkOpenGLState_vtkBindFramebuffer, METH_VARARGS,
   "vtkBindFramebuffer(self, target:int,\n    fo:vtkOpenGLFramebufferObject) -> None\nC++: void vtkBindFramebuffer(unsigned int target,\n    vtkOpenGLFramebufferObject *fo)\n\n"},
  {"vtkDrawBuffers", PyvtkOpenGLState_vtkDrawBuffers, METH_VARARGS,
   "vtkDrawBuffers(self, n:int, __b:[int, ...],\n    __c:vtkOpenGLFramebufferObject) -> None\nC++: void vtkDrawBuffers(unsigned int n, unsigned int *,\n    vtkOpenGLFramebufferObject *)\n\n"},
  {"vtkReadBuffer", PyvtkOpenGLState_vtkReadBuffer, METH_VARARGS,
   "vtkReadBuffer(self, __a:int, __b:vtkOpenGLFramebufferObject)\n    -> None\nC++: void vtkReadBuffer(unsigned int,\n    vtkOpenGLFramebufferObject *)\n\n"},
  {"vtkglPixelStorei", PyvtkOpenGLState_vtkglPixelStorei, METH_VARARGS,
   "vtkglPixelStorei(self, __a:int, __b:int) -> None\nC++: void vtkglPixelStorei(unsigned int, int)\n\n"},
  {"ResetGLClearColorState", PyvtkOpenGLState_ResetGLClearColorState, METH_VARARGS,
   "ResetGLClearColorState(self) -> None\nC++: void ResetGLClearColorState()\n\n"},
  {"ResetGLClearDepthState", PyvtkOpenGLState_ResetGLClearDepthState, METH_VARARGS,
   "ResetGLClearDepthState(self) -> None\nC++: void ResetGLClearDepthState()\n\n"},
  {"ResetGLDepthFuncState", PyvtkOpenGLState_ResetGLDepthFuncState, METH_VARARGS,
   "ResetGLDepthFuncState(self) -> None\nC++: void ResetGLDepthFuncState()\n\n"},
  {"ResetGLDepthMaskState", PyvtkOpenGLState_ResetGLDepthMaskState, METH_VARARGS,
   "ResetGLDepthMaskState(self) -> None\nC++: void ResetGLDepthMaskState()\n\n"},
  {"ResetGLColorMaskState", PyvtkOpenGLState_ResetGLColorMaskState, METH_VARARGS,
   "ResetGLColorMaskState(self) -> None\nC++: void ResetGLColorMaskState()\n\n"},
  {"ResetGLViewportState", PyvtkOpenGLState_ResetGLViewportState, METH_VARARGS,
   "ResetGLViewportState(self) -> None\nC++: void ResetGLViewportState()\n\n"},
  {"ResetGLScissorState", PyvtkOpenGLState_ResetGLScissorState, METH_VARARGS,
   "ResetGLScissorState(self) -> None\nC++: void ResetGLScissorState()\n\n"},
  {"ResetGLBlendFuncState", PyvtkOpenGLState_ResetGLBlendFuncState, METH_VARARGS,
   "ResetGLBlendFuncState(self) -> None\nC++: void ResetGLBlendFuncState()\n\n"},
  {"ResetGLBlendEquationState", PyvtkOpenGLState_ResetGLBlendEquationState, METH_VARARGS,
   "ResetGLBlendEquationState(self) -> None\nC++: void ResetGLBlendEquationState()\n\n"},
  {"ResetGLCullFaceState", PyvtkOpenGLState_ResetGLCullFaceState, METH_VARARGS,
   "ResetGLCullFaceState(self) -> None\nC++: void ResetGLCullFaceState()\n\n"},
  {"ResetGLActiveTexture", PyvtkOpenGLState_ResetGLActiveTexture, METH_VARARGS,
   "ResetGLActiveTexture(self) -> None\nC++: void ResetGLActiveTexture()\n\n"},
  {"vtkglClear", PyvtkOpenGLState_vtkglClear, METH_VARARGS,
   "vtkglClear(self, mask:int) -> None\nC++: void vtkglClear(unsigned int mask)\n\n"},
  {"vtkglGetBooleanv", PyvtkOpenGLState_vtkglGetBooleanv, METH_VARARGS,
   "vtkglGetBooleanv(self, pname:int, params:[int, ...]) -> None\nC++: void vtkglGetBooleanv(unsigned int pname,\n    unsigned char *params)\n\n"},
  {"vtkglGetIntegerv", PyvtkOpenGLState_vtkglGetIntegerv, METH_VARARGS,
   "vtkglGetIntegerv(self, pname:int, params:[int, ...]) -> None\nC++: void vtkglGetIntegerv(unsigned int pname, int *params)\n\n"},
  {"vtkglGetDoublev", PyvtkOpenGLState_vtkglGetDoublev, METH_VARARGS,
   "vtkglGetDoublev(self, pname:int, params:[float, ...]) -> None\nC++: void vtkglGetDoublev(unsigned int pname, double *params)\n\n"},
  {"vtkglGetFloatv", PyvtkOpenGLState_vtkglGetFloatv, METH_VARARGS,
   "vtkglGetFloatv(self, pname:int, params:[float, ...]) -> None\nC++: void vtkglGetFloatv(unsigned int pname, float *params)\n\n"},
  {"GetBlendFuncState", PyvtkOpenGLState_GetBlendFuncState, METH_VARARGS,
   "GetBlendFuncState(self, __a:[int, ...]) -> None\nC++: void GetBlendFuncState(int *)\n\n"},
  {"GetEnumState", PyvtkOpenGLState_GetEnumState, METH_VARARGS,
   "GetEnumState(self, name:int) -> bool\nC++: bool GetEnumState(unsigned int name)\n\n"},
  {"SetEnumState", PyvtkOpenGLState_SetEnumState, METH_VARARGS,
   "SetEnumState(self, name:int, value:bool) -> None\nC++: void SetEnumState(unsigned int name, bool value)\n\n"},
  {"ResetEnumState", PyvtkOpenGLState_ResetEnumState, METH_VARARGS,
   "ResetEnumState(self, name:int) -> None\nC++: void ResetEnumState(unsigned int name)\n\nconvenience method to reset an enum state from current openGL\ncontext\n"},
  {"ActivateTexture", PyvtkOpenGLState_ActivateTexture, METH_VARARGS,
   "ActivateTexture(self, __a:vtkTextureObject) -> None\nC++: void ActivateTexture(vtkTextureObject *)\n\nActivate a texture unit for this texture\n"},
  {"DeactivateTexture", PyvtkOpenGLState_DeactivateTexture, METH_VARARGS,
   "DeactivateTexture(self, __a:vtkTextureObject) -> None\nC++: void DeactivateTexture(vtkTextureObject *)\n\nDeactivate a previously activated texture\n"},
  {"GetTextureUnitForTexture", PyvtkOpenGLState_GetTextureUnitForTexture, METH_VARARGS,
   "GetTextureUnitForTexture(self, __a:vtkTextureObject) -> int\nC++: int GetTextureUnitForTexture(vtkTextureObject *)\n\nGet the texture unit for a given texture object\n"},
  {"VerifyNoActiveTextures", PyvtkOpenGLState_VerifyNoActiveTextures, METH_VARARGS,
   "VerifyNoActiveTextures(self) -> None\nC++: void VerifyNoActiveTextures()\n\nCheck to make sure no textures have been left active\n"},
  {"PushFramebufferBindings", PyvtkOpenGLState_PushFramebufferBindings, METH_VARARGS,
   "PushFramebufferBindings(self) -> None\nC++: void PushFramebufferBindings()\n\nStore/Restore the current framebuffer bindings and buffers.\n"},
  {"PushDrawFramebufferBinding", PyvtkOpenGLState_PushDrawFramebufferBinding, METH_VARARGS,
   "PushDrawFramebufferBinding(self) -> None\nC++: void PushDrawFramebufferBinding()\n\n"},
  {"PushReadFramebufferBinding", PyvtkOpenGLState_PushReadFramebufferBinding, METH_VARARGS,
   "PushReadFramebufferBinding(self) -> None\nC++: void PushReadFramebufferBinding()\n\n"},
  {"PopFramebufferBindings", PyvtkOpenGLState_PopFramebufferBindings, METH_VARARGS,
   "PopFramebufferBindings(self) -> None\nC++: void PopFramebufferBindings()\n\n"},
  {"PopDrawFramebufferBinding", PyvtkOpenGLState_PopDrawFramebufferBinding, METH_VARARGS,
   "PopDrawFramebufferBinding(self) -> None\nC++: void PopDrawFramebufferBinding()\n\n"},
  {"PopReadFramebufferBinding", PyvtkOpenGLState_PopReadFramebufferBinding, METH_VARARGS,
   "PopReadFramebufferBinding(self) -> None\nC++: void PopReadFramebufferBinding()\n\n"},
  {"ResetFramebufferBindings", PyvtkOpenGLState_ResetFramebufferBindings, METH_VARARGS,
   "ResetFramebufferBindings(self) -> None\nC++: void ResetFramebufferBindings()\n\n"},
  {"Initialize", PyvtkOpenGLState_Initialize, METH_VARARGS,
   "Initialize(self, __a:vtkOpenGLRenderWindow) -> None\nC++: void Initialize(vtkOpenGLRenderWindow *)\n\nInitialize OpenGL context using current state\n"},
  {"SetTextureUnitManager", PyvtkOpenGLState_SetTextureUnitManager, METH_VARARGS,
   "SetTextureUnitManager(self,\n    textureUnitManager:vtkTextureUnitManager) -> None\nC++: void SetTextureUnitManager(\n    vtkTextureUnitManager *textureUnitManager)\n\nSet the texture unit manager.\n"},
  {"GetTextureUnitManager", PyvtkOpenGLState_GetTextureUnitManager, METH_VARARGS,
   "GetTextureUnitManager(self) -> vtkTextureUnitManager\nC++: vtkTextureUnitManager *GetTextureUnitManager()\n\nReturns its texture unit manager object. A new one will be\ncreated if one hasn't already been set up.\n"},
  {"GetShaderCache", PyvtkOpenGLState_GetShaderCache, METH_VARARGS,
   "GetShaderCache(self) -> vtkOpenGLShaderCache\nC++: virtual vtkOpenGLShaderCache *GetShaderCache()\n\n"},
  {"GetVBOCache", PyvtkOpenGLState_GetVBOCache, METH_VARARGS,
   "GetVBOCache(self) -> vtkOpenGLVertexBufferObjectCache\nC++: virtual vtkOpenGLVertexBufferObjectCache *GetVBOCache()\n\n"},
  {"SetVBOCache", PyvtkOpenGLState_SetVBOCache, METH_VARARGS,
   "SetVBOCache(self, val:vtkOpenGLVertexBufferObjectCache) -> None\nC++: void SetVBOCache(vtkOpenGLVertexBufferObjectCache *val)\n\n"},
  {"GetDefaultTextureInternalFormat", PyvtkOpenGLState_GetDefaultTextureInternalFormat, METH_VARARGS,
   "GetDefaultTextureInternalFormat(self, vtktype:int,\n    numComponents:int, needInteger:bool, needFloat:bool,\n    needSRGB:bool) -> int\nC++: int GetDefaultTextureInternalFormat(int vtktype,\n    int numComponents, bool needInteger, bool needFloat,\n    bool needSRGB)\n\nGet a mapping of vtk data types to native texture formats for\nthis window we put this on the RenderWindow so that every texture\ndoes not have to build these structures themselves\n"},
  {"GetCurrentDrawFramebufferState", PyvtkOpenGLState_GetCurrentDrawFramebufferState, METH_VARARGS,
   "GetCurrentDrawFramebufferState(self, drawBinding:int,\n    drawBuffer:int) -> None\nC++: void GetCurrentDrawFramebufferState(\n    unsigned int &drawBinding, unsigned int &drawBuffer)\n\nGet the current stored state of the draw buffer and binding\n"},
  {"vtkglBlitFramebuffer", PyvtkOpenGLState_vtkglBlitFramebuffer, METH_VARARGS,
   "vtkglBlitFramebuffer(self, __a:int, __b:int, __c:int, __d:int,\n    __e:int, __f:int, __g:int, __h:int, __i:int, __j:int) -> None\nC++: void vtkglBlitFramebuffer(int, int, int, int, int, int, int,\n    int, unsigned int, unsigned int)\n\nPerform a blit but handle some driver bugs safely. Use this\ninstead of directly calling glBlitFramebuffer.\n"},
  {"Reset", PyvtkOpenGLState_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nRecord the OpenGL state into this class. Lots of get calls so\nprobably a pipeline stall. This method is most useful when\nintegrating VTK with something else that touches OpenGL such as a\nGUI library or external OpenGL code. As OpenGL has a lot of state\nit is easy for VTK and external libraries to interfere with each\nother by changing that state. When extrnal code is calling VTK\nyou would typically call Reset() Push() Pop() Reset will record\nthe current state from OpenGL. Push saves it on the stack. Pop\npops it from the stack and reapplies it to OpenGL so that the\nstate is the same as when Pushed. Note that OpenGL has an\nincredible amount of state. This class only handles the values\nthat VTK is known to touch. If you find other values that need\nsaving please feel free to report an issue or provide an MR.\n"},
  {"Push", PyvtkOpenGLState_Push, METH_VARARGS,
   "Push(self) -> None\nC++: void Push()\n\nPush all the recorded state onto the stack. Typically called\nafter a Reset. Not generally used internally in VTK as it is\nrarely required to save more than a couple state settings within\nVTKs render process.\n"},
  {"Pop", PyvtkOpenGLState_Pop, METH_VARARGS,
   "Pop(self) -> None\nC++: void Pop()\n\nPop the state stack to restore a previous state. At the end of\nthis method OpenGL state will be set to the new popped state.\n"},
  {"GetVersion", PyvtkOpenGLState_GetVersion, METH_VARARGS,
   "GetVersion(self) -> str\nC++: std::string const &GetVersion()\n\nReturn the opengl version for this context\n"},
  {"GetVendor", PyvtkOpenGLState_GetVendor, METH_VARARGS,
   "GetVendor(self) -> str\nC++: std::string const &GetVendor()\n\nReturn the opengl vendor for this context\n"},
  {"GetRenderer", PyvtkOpenGLState_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> str\nC++: std::string const &GetRenderer()\n\nReturn the opengl renderer for this context. Note this is the\nrenderer opengl property, not a vtk renderer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLState_Doc =
  "vtkOpenGLState - OpenGL state storage\n\n"
  "Superclass: vtkObject\n\n"
  "vtkOpenGLState is a class designed to keep track of the state of an\n"
  "OpenGL context. Applications using VTK have so much control over the\n"
  "rendering process that is can be difficult in VTK code to know if the\n"
  "OpenGL state is correct for your code. The two traditional solutions\n"
  "have been to set everything yourself and to save and restore OpenGL\n"
  "state that you change. The former makes your code work, the latter\n"
  "helps prevent your code from breaking something else. The problem is\n"
  "that the former results in tons of redundant OpenGL calls and the\n"
  "later is done by querying the OpenGL state which can cause a pipeline\n"
  "sync/stall which is very slow.\n\n"
  "To address these issues this class stores OpenGL state for commonly\n"
  "used functions. Requests made to change state to the current state\n"
  "become no-ops. Queries of state can be done by querying the state\n"
  "stored in this class without impacting the OpenGL driver.\n\n"
  "This class is designed to hold all context related values and could\n"
  "just as well be considered a representation of the OpenGL context.\n\n"
  "To facilitate saving state and restoring it this class contains a\n"
  "number of nested classes named Scopedthat store the state of that\n"
  "glFunction and when they go out of scope they restore it. This is\n"
  "useful when you want to change the OpenGL state and then\n"
  "automatically restore it when done. They can be used as follows\n\n"
  "{\n"
  "  vtkOpenGLState *ostate = renWin->GetState();\n"
  "  vtkOpenGLState::ScopedglDepthMask dmsaved(ostate);\n"
  "  // the prior state is now saved\n"
  "  ...\n"
  "  ostate->glDepthMask(GL_TRUE);  // maybe change the state\n"
  "  ... etc } // prior state will be restored here as it goes out of\n"
  "scope\n\n"
  "You must use this class to make state changing OpenGL class otherwise\n"
  "the results will be undefined.\n\n"
  "For convenience some OpenGL calls that do not impact state are also\n"
  "provided.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLState_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLState", // tp_name
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
  PyvtkOpenGLState_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLState_StaticNew()
{
  return vtkOpenGLState::New();
}

PyObject *PyvtkOpenGLState_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLState_Type, PyvtkOpenGLState_Methods,
    "vtkOpenGLState",
 &PyvtkOpenGLState_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLState(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLState_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLState", o) != 0)
  {
    Py_DECREF(o);
  }

}

