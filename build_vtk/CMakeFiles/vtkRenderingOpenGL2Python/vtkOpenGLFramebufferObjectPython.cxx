// python wrapper for vtkOpenGLFramebufferObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLFramebufferObject.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLFramebufferObject(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLFramebufferObject_ClassNew(); }


static PyObject *
PyvtkOpenGLFramebufferObject_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLFramebufferObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLFramebufferObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLFramebufferObject *tempr = vtkOpenGLFramebufferObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLFramebufferObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLFramebufferObject::NewInstance());

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
PyvtkOpenGLFramebufferObject_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLFramebufferObject::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLFramebufferObject::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetContext(temp0);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::SetContext(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkOpenGLFramebufferObject::GetContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_Bind_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Bind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Bind();
    }
    else
    {
      op->vtkOpenGLFramebufferObject::Bind();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFramebufferObject_Bind_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Bind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Bind(temp0);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::Bind(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFramebufferObject_Bind(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkOpenGLFramebufferObject_Bind_s1(self, args);
    case 1:
      return PyvtkOpenGLFramebufferObject_Bind_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Bind");
  return nullptr;
}


static PyObject *
PyvtkOpenGLFramebufferObject_UnBind_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnBind();
    }
    else
    {
      op->vtkOpenGLFramebufferObject::UnBind();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFramebufferObject_UnBind_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnBind(temp0);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::UnBind(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFramebufferObject_UnBind(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkOpenGLFramebufferObject_UnBind_s1(self, args);
    case 1:
      return PyvtkOpenGLFramebufferObject_UnBind_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UnBind");
  return nullptr;
}


static PyObject *
PyvtkOpenGLFramebufferObject_SaveCurrentBindingsAndBuffers_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveCurrentBindingsAndBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveCurrentBindingsAndBuffers();
    }
    else
    {
      op->vtkOpenGLFramebufferObject::SaveCurrentBindingsAndBuffers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFramebufferObject_SaveCurrentBindingsAndBuffers_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveCurrentBindingsAndBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SaveCurrentBindingsAndBuffers(temp0);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::SaveCurrentBindingsAndBuffers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFramebufferObject_SaveCurrentBindingsAndBuffers(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkOpenGLFramebufferObject_SaveCurrentBindingsAndBuffers_s1(self, args);
    case 1:
      return PyvtkOpenGLFramebufferObject_SaveCurrentBindingsAndBuffers_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SaveCurrentBindingsAndBuffers");
  return nullptr;
}


static PyObject *
PyvtkOpenGLFramebufferObject_RestorePreviousBindingsAndBuffers_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestorePreviousBindingsAndBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestorePreviousBindingsAndBuffers();
    }
    else
    {
      op->vtkOpenGLFramebufferObject::RestorePreviousBindingsAndBuffers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFramebufferObject_RestorePreviousBindingsAndBuffers_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestorePreviousBindingsAndBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RestorePreviousBindingsAndBuffers(temp0);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::RestorePreviousBindingsAndBuffers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFramebufferObject_RestorePreviousBindingsAndBuffers(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkOpenGLFramebufferObject_RestorePreviousBindingsAndBuffers_s1(self, args);
    case 1:
      return PyvtkOpenGLFramebufferObject_RestorePreviousBindingsAndBuffers_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RestorePreviousBindingsAndBuffers");
  return nullptr;
}


static PyObject *
PyvtkOpenGLFramebufferObject_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->Start(temp0, temp1) :
      op->vtkOpenGLFramebufferObject::Start(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_StartNonOrtho(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartNonOrtho");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->StartNonOrtho(temp0, temp1) :
      op->vtkOpenGLFramebufferObject::StartNonOrtho(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_InitializeViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->InitializeViewport(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::InitializeViewport(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_ActivateDrawBuffers_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateDrawBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ActivateDrawBuffers(temp0);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::ActivateDrawBuffers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFramebufferObject_ActivateDrawBuffers_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateDrawBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned int> store0(2*size0);
  unsigned int *temp0 = store0.Data();
  unsigned int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->ActivateDrawBuffers(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::ActivateDrawBuffers(temp0, temp1);
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
PyvtkOpenGLFramebufferObject_ActivateDrawBuffers(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkOpenGLFramebufferObject_ActivateDrawBuffers_s1(self, args);
    case 2:
      return PyvtkOpenGLFramebufferObject_ActivateDrawBuffers_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ActivateDrawBuffers");
  return nullptr;
}


static PyObject *
PyvtkOpenGLFramebufferObject_ActivateDrawBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateDrawBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ActivateDrawBuffer(temp0);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::ActivateDrawBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_ActivateReadBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateReadBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ActivateReadBuffer(temp0);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::ActivateReadBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_ActivateBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ActivateBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ActivateBuffer(temp0);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::ActivateBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_DeactivateDrawBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeactivateDrawBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeactivateDrawBuffers();
    }
    else
    {
      op->vtkOpenGLFramebufferObject::DeactivateDrawBuffers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_DeactivateReadBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeactivateReadBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeactivateReadBuffer();
    }
    else
    {
      op->vtkOpenGLFramebufferObject::DeactivateReadBuffer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_GetActiveReadBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveReadBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetActiveReadBuffer() :
      op->vtkOpenGLFramebufferObject::GetActiveReadBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_GetActiveDrawBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveDrawBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetActiveDrawBuffer(temp0) :
      op->vtkOpenGLFramebufferObject::GetActiveDrawBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_RenderQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkShaderProgram *temp4 = nullptr;
  vtkOpenGLVertexArrayObject *temp5 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkShaderProgram") &&
      ap.GetVTKObject(temp5, "vtkOpenGLVertexArrayObject"))
  {
    if (ap.IsBound())
    {
      op->RenderQuad(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::RenderQuad(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_AddColorAttachment_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColorAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  unsigned int temp0;
  vtkTextureObject *temp1 = nullptr;
  unsigned int temp2 = 0;
  unsigned int temp3 = 0;
  unsigned int temp4 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextureObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->AddColorAttachment(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::AddColorAttachment(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFramebufferObject_AddColorAttachment_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColorAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  unsigned int temp0;
  vtkRenderbuffer *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkRenderbuffer"))
  {
    if (ap.IsBound())
    {
      op->AddColorAttachment(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::AddColorAttachment(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLFramebufferObject_AddColorAttachment_Methods[] = {
  {"AddColorAttachment", PyvtkOpenGLFramebufferObject_AddColorAttachment_s1, METH_VARARGS,
   "@IV|III *vtkTextureObject"},
  {"AddColorAttachment", PyvtkOpenGLFramebufferObject_AddColorAttachment_s2, METH_VARARGS,
   "@IV *vtkRenderbuffer"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLFramebufferObject_AddColorAttachment(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLFramebufferObject_AddColorAttachment_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
    case 4:
    case 5:
      return PyvtkOpenGLFramebufferObject_AddColorAttachment_s1(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddColorAttachment");
  return nullptr;
}


static PyObject *
PyvtkOpenGLFramebufferObject_RemoveColorAttachment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveColorAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveColorAttachment(temp0);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::RemoveColorAttachment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_RemoveColorAttachments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveColorAttachments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveColorAttachments(temp0);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::RemoveColorAttachments(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_GetColorAttachmentAsTextureObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorAttachmentAsTextureObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->GetColorAttachmentAsTextureObject(temp0) :
      op->vtkOpenGLFramebufferObject::GetColorAttachmentAsTextureObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_GetNumberOfColorAttachments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColorAttachments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColorAttachments() :
      op->vtkOpenGLFramebufferObject::GetNumberOfColorAttachments());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_AddDepthAttachment_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDepthAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddDepthAttachment();
    }
    else
    {
      op->vtkOpenGLFramebufferObject::AddDepthAttachment();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFramebufferObject_AddDepthAttachment_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDepthAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    if (ap.IsBound())
    {
      op->AddDepthAttachment(temp0);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::AddDepthAttachment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFramebufferObject_AddDepthAttachment_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDepthAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  vtkRenderbuffer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderbuffer"))
  {
    if (ap.IsBound())
    {
      op->AddDepthAttachment(temp0);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::AddDepthAttachment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLFramebufferObject_AddDepthAttachment_Methods[] = {
  {"AddDepthAttachment", PyvtkOpenGLFramebufferObject_AddDepthAttachment_s2, METH_VARARGS,
   "@V *vtkTextureObject"},
  {"AddDepthAttachment", PyvtkOpenGLFramebufferObject_AddDepthAttachment_s3, METH_VARARGS,
   "@V *vtkRenderbuffer"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLFramebufferObject_AddDepthAttachment(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLFramebufferObject_AddDepthAttachment_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkOpenGLFramebufferObject_AddDepthAttachment_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddDepthAttachment");
  return nullptr;
}


static PyObject *
PyvtkOpenGLFramebufferObject_RemoveDepthAttachment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDepthAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveDepthAttachment();
    }
    else
    {
      op->vtkOpenGLFramebufferObject::RemoveDepthAttachment();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_GetDepthAttachmentAsTextureObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthAttachmentAsTextureObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->GetDepthAttachmentAsTextureObject() :
      op->vtkOpenGLFramebufferObject::GetDepthAttachmentAsTextureObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_PopulateFramebuffer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopulateFramebuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->PopulateFramebuffer(temp0, temp1) :
      op->vtkOpenGLFramebufferObject::PopulateFramebuffer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFramebufferObject_PopulateFramebuffer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopulateFramebuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  int temp0;
  int temp1;
  bool temp2 = false;
  int temp3;
  int temp4;
  bool temp5 = false;
  int temp6;
  int temp7;
  bool temp8 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8, 9) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      (ap.NoArgsLeft() || ap.GetValue(temp8)))
  {
    bool tempr = (ap.IsBound() ?
      op->PopulateFramebuffer(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8) :
      op->vtkOpenGLFramebufferObject::PopulateFramebuffer(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFramebufferObject_PopulateFramebuffer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkOpenGLFramebufferObject_PopulateFramebuffer_s1(self, args);
    case 8:
    case 9:
      return PyvtkOpenGLFramebufferObject_PopulateFramebuffer_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PopulateFramebuffer");
  return nullptr;
}


static PyObject *
PyvtkOpenGLFramebufferObject_GetMaximumNumberOfActiveTargets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfActiveTargets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfActiveTargets() :
      op->vtkOpenGLFramebufferObject::GetMaximumNumberOfActiveTargets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_GetMaximumNumberOfRenderTargets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfRenderTargets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfRenderTargets() :
      op->vtkOpenGLFramebufferObject::GetMaximumNumberOfRenderTargets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_GetLastSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetLastSize() :
      op->vtkOpenGLFramebufferObject::GetLastSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFramebufferObject_GetLastSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetLastSize(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::GetLastSize(temp0, temp1);
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
PyvtkOpenGLFramebufferObject_GetLastSize_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetLastSize(temp0);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::GetLastSize(temp0);
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
PyvtkOpenGLFramebufferObject_GetLastSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkOpenGLFramebufferObject_GetLastSize_s1(self, args);
    case 2:
      return PyvtkOpenGLFramebufferObject_GetLastSize_s2(self, args);
    case 1:
      return PyvtkOpenGLFramebufferObject_GetLastSize_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLastSize");
  return nullptr;
}


static PyObject *
PyvtkOpenGLFramebufferObject_IsSupported(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkOpenGLRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderWindow"))
  {
    bool tempr = vtkOpenGLFramebufferObject::IsSupported(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_CheckFrameBufferStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckFrameBufferStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CheckFrameBufferStatus(temp0) :
      op->vtkOpenGLFramebufferObject::CheckFrameBufferStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

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
      op->vtkOpenGLFramebufferObject::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_GetFBOIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFBOIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetFBOIndex() :
      op->vtkOpenGLFramebufferObject::GetFBOIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_Blit(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Blit");

  const size_t size0 = 4;
  int temp0[4];
  const size_t size1 = 4;
  int temp1[4];
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = vtkOpenGLFramebufferObject::Blit(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_DownloadColor1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownloadColor1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  int save0[4];
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkPixelBufferObject *tempr = (ap.IsBound() ?
      op->DownloadColor1(temp0, temp1, temp2) :
      op->vtkOpenGLFramebufferObject::DownloadColor1(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_DownloadColor3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownloadColor3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  int save0[4];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkPixelBufferObject *tempr = (ap.IsBound() ?
      op->DownloadColor3(temp0, temp1) :
      op->vtkOpenGLFramebufferObject::DownloadColor3(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_DownloadColor4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownloadColor4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  int save0[4];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkPixelBufferObject *tempr = (ap.IsBound() ?
      op->DownloadColor4(temp0, temp1) :
      op->vtkOpenGLFramebufferObject::DownloadColor4(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_DownloadDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownloadDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  int save0[4];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkPixelBufferObject *tempr = (ap.IsBound() ?
      op->DownloadDepth(temp0, temp1) :
      op->vtkOpenGLFramebufferObject::DownloadDepth(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_Download_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Download");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  int save0[4];
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkPixelBufferObject *tempr = (ap.IsBound() ?
      op->Download(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOpenGLFramebufferObject::Download(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLFramebufferObject_Download_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Download");

  const size_t size0 = 4;
  int temp0[4];
  int save0[4];
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkPixelBufferObject *temp5 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkPixelBufferObject"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkOpenGLFramebufferObject::Download(temp0, temp1, temp2, temp3, temp4, temp5);

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
PyvtkOpenGLFramebufferObject_Download(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 5:
      return PyvtkOpenGLFramebufferObject_Download_s1(self, args);
    case 6:
      return PyvtkOpenGLFramebufferObject_Download_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Download");
  return nullptr;
}


static PyObject *
PyvtkOpenGLFramebufferObject_GetDrawMode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDrawMode");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    unsigned int tempr = vtkOpenGLFramebufferObject::GetDrawMode();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_GetReadMode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetReadMode");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    unsigned int tempr = vtkOpenGLFramebufferObject::GetReadMode();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_GetBothMode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBothMode");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    unsigned int tempr = vtkOpenGLFramebufferObject::GetBothMode();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Resize(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLFramebufferObject::Resize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFramebufferObject_GetMultiSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFramebufferObject *op = static_cast<vtkOpenGLFramebufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMultiSamples() :
      op->vtkOpenGLFramebufferObject::GetMultiSamples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLFramebufferObject_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLFramebufferObject_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLFramebufferObject_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLFramebufferObject_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLFramebufferObject\nC++: static vtkOpenGLFramebufferObject *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLFramebufferObject_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLFramebufferObject\nC++: vtkOpenGLFramebufferObject *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLFramebufferObject_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLFramebufferObject_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetContext", PyvtkOpenGLFramebufferObject_SetContext, METH_VARARGS,
   "SetContext(self, context:vtkRenderWindow) -> None\nC++: void SetContext(vtkRenderWindow *context)\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error if the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {"GetContext", PyvtkOpenGLFramebufferObject_GetContext, METH_VARARGS,
   "GetContext(self) -> vtkOpenGLRenderWindow\nC++: vtkOpenGLRenderWindow *GetContext()\n\n"},
  {"Bind", PyvtkOpenGLFramebufferObject_Bind, METH_VARARGS,
   "Bind(self) -> None\nC++: void Bind()\nBind(self, mode:int) -> None\nC++: void Bind(unsigned int mode)\n\nMake the draw frame buffer active.\n"},
  {"UnBind", PyvtkOpenGLFramebufferObject_UnBind, METH_VARARGS,
   "UnBind(self) -> None\nC++: void UnBind()\nUnBind(self, mode:int) -> None\nC++: void UnBind(unsigned int mode)\n\nUnbind this buffer\n"},
  {"SaveCurrentBindingsAndBuffers", PyvtkOpenGLFramebufferObject_SaveCurrentBindingsAndBuffers, METH_VARARGS,
   "SaveCurrentBindingsAndBuffers(self) -> None\nC++: void SaveCurrentBindingsAndBuffers()\nSaveCurrentBindingsAndBuffers(self, mode:int) -> None\nC++: void SaveCurrentBindingsAndBuffers(unsigned int mode)\n\nStore/Restore the current framebuffer bindings and buffers.\n"},
  {"RestorePreviousBindingsAndBuffers", PyvtkOpenGLFramebufferObject_RestorePreviousBindingsAndBuffers, METH_VARARGS,
   "RestorePreviousBindingsAndBuffers(self) -> None\nC++: void RestorePreviousBindingsAndBuffers()\nRestorePreviousBindingsAndBuffers(self, mode:int) -> None\nC++: void RestorePreviousBindingsAndBuffers(unsigned int mode)\n\n"},
  {"Start", PyvtkOpenGLFramebufferObject_Start, METH_VARARGS,
   "Start(self, width:int, height:int) -> bool\nC++: bool Start(int width, int height)\n\nUser must take care that width/height match the dimensions of the\nuser defined texture attachments. This method makes the \"active\nbuffers\" the buffers that will get drawn into by subsequent\ndrawing calls. Note that this does not clear the render buffers\ni.e. no glClear() calls are made by either of these methods. It's\nup to the caller to clear the buffers if needed.\n"},
  {"StartNonOrtho", PyvtkOpenGLFramebufferObject_StartNonOrtho, METH_VARARGS,
   "StartNonOrtho(self, width:int, height:int) -> bool\nC++: bool StartNonOrtho(int width, int height)\n\n"},
  {"InitializeViewport", PyvtkOpenGLFramebufferObject_InitializeViewport, METH_VARARGS,
   "InitializeViewport(self, width:int, height:int) -> None\nC++: void InitializeViewport(int width, int height)\n\nSet up ortho viewport with scissor, lighting, blend, and depth\ndisabled. The method affects the current bound FBO.\n"},
  {"ActivateDrawBuffers", PyvtkOpenGLFramebufferObject_ActivateDrawBuffers, METH_VARARGS,
   "ActivateDrawBuffers(self, n:int) -> None\nC++: void ActivateDrawBuffers(unsigned int n)\nActivateDrawBuffers(self, ids:[int, ...], n:int) -> None\nC++: void ActivateDrawBuffers(unsigned int *ids, int n)\n\n"},
  {"ActivateDrawBuffer", PyvtkOpenGLFramebufferObject_ActivateDrawBuffer, METH_VARARGS,
   "ActivateDrawBuffer(self, id:int) -> None\nC++: void ActivateDrawBuffer(unsigned int id)\n\n"},
  {"ActivateReadBuffer", PyvtkOpenGLFramebufferObject_ActivateReadBuffer, METH_VARARGS,
   "ActivateReadBuffer(self, id:int) -> None\nC++: void ActivateReadBuffer(unsigned int id)\n\n"},
  {"ActivateBuffer", PyvtkOpenGLFramebufferObject_ActivateBuffer, METH_VARARGS,
   "ActivateBuffer(self, id:int) -> None\nC++: void ActivateBuffer(unsigned int id)\n\n"},
  {"DeactivateDrawBuffers", PyvtkOpenGLFramebufferObject_DeactivateDrawBuffers, METH_VARARGS,
   "DeactivateDrawBuffers(self) -> None\nC++: void DeactivateDrawBuffers()\n\n"},
  {"DeactivateReadBuffer", PyvtkOpenGLFramebufferObject_DeactivateReadBuffer, METH_VARARGS,
   "DeactivateReadBuffer(self) -> None\nC++: void DeactivateReadBuffer()\n\n"},
  {"GetActiveReadBuffer", PyvtkOpenGLFramebufferObject_GetActiveReadBuffer, METH_VARARGS,
   "GetActiveReadBuffer(self) -> int\nC++: virtual unsigned int GetActiveReadBuffer()\n\n"},
  {"GetActiveDrawBuffer", PyvtkOpenGLFramebufferObject_GetActiveDrawBuffer, METH_VARARGS,
   "GetActiveDrawBuffer(self, id:int) -> int\nC++: unsigned int GetActiveDrawBuffer(unsigned int id)\n\n"},
  {"RenderQuad", PyvtkOpenGLFramebufferObject_RenderQuad, METH_VARARGS,
   "RenderQuad(self, minX:int, maxX:int, minY:int, maxY:int,\n    program:vtkShaderProgram, vao:vtkOpenGLVertexArrayObject)\n    -> None\nC++: void RenderQuad(int minX, int maxX, int minY, int maxY,\n    vtkShaderProgram *program, vtkOpenGLVertexArrayObject *vao)\n\nRenders a quad at the given location with pixel coordinates. This\nmethod is provided as a convenience, since we often render quads\nin a FBO.\n\\pre positive_minX: minX>=0\n\\pre increasing_x: minX<=maxX\n\\pre valid_maxX: maxX<LastSize[0]\n\\pre positive_minY: minY>=0\n\\pre increasing_y: minY<=maxY\n\\pre valid_maxY: maxY<LastSize[1]\n"},
  {"AddColorAttachment", PyvtkOpenGLFramebufferObject_AddColorAttachment, METH_VARARGS,
   "AddColorAttachment(self, attId:int, tex:vtkTextureObject,\n    zslice:int=0, format:int=0, mipmapLevel:int=0) -> None\nC++: void AddColorAttachment(unsigned int attId,\n    vtkTextureObject *tex, unsigned int zslice=0,\n    unsigned int format=0, unsigned int mipmapLevel=0)\nAddColorAttachment(self, attId:int, tex:vtkRenderbuffer) -> None\nC++: void AddColorAttachment(unsigned int attId,\n    vtkRenderbuffer *tex)\n\nDirectly assign/remove a texture to color attachments.\n"},
  {"RemoveColorAttachment", PyvtkOpenGLFramebufferObject_RemoveColorAttachment, METH_VARARGS,
   "RemoveColorAttachment(self, index:int) -> None\nC++: void RemoveColorAttachment(unsigned int index)\n\n"},
  {"RemoveColorAttachments", PyvtkOpenGLFramebufferObject_RemoveColorAttachments, METH_VARARGS,
   "RemoveColorAttachments(self, num:int) -> None\nC++: void RemoveColorAttachments(unsigned int num)\n\n"},
  {"GetColorAttachmentAsTextureObject", PyvtkOpenGLFramebufferObject_GetColorAttachmentAsTextureObject, METH_VARARGS,
   "GetColorAttachmentAsTextureObject(self, num:int)\n    -> vtkTextureObject\nC++: vtkTextureObject *GetColorAttachmentAsTextureObject(\n    unsigned int num)\n\nReturn the texture object bound to the passed attachment number.\nIn the case that a renderbuffer is used, this will return\nnullptr.\n"},
  {"GetNumberOfColorAttachments", PyvtkOpenGLFramebufferObject_GetNumberOfColorAttachments, METH_VARARGS,
   "GetNumberOfColorAttachments(self) -> int\nC++: int GetNumberOfColorAttachments()\n\nReturn the number of color attachments for the given mode\n"},
  {"AddDepthAttachment", PyvtkOpenGLFramebufferObject_AddDepthAttachment, METH_VARARGS,
   "AddDepthAttachment(self) -> None\nC++: void AddDepthAttachment()\nAddDepthAttachment(self, tex:vtkTextureObject) -> None\nC++: void AddDepthAttachment(vtkTextureObject *tex)\nAddDepthAttachment(self, tex:vtkRenderbuffer) -> None\nC++: void AddDepthAttachment(vtkRenderbuffer *tex)\n\nDirectly assign/remove a texture/renderbuffer to depth\nattachments.\n"},
  {"RemoveDepthAttachment", PyvtkOpenGLFramebufferObject_RemoveDepthAttachment, METH_VARARGS,
   "RemoveDepthAttachment(self) -> None\nC++: void RemoveDepthAttachment()\n\n"},
  {"GetDepthAttachmentAsTextureObject", PyvtkOpenGLFramebufferObject_GetDepthAttachmentAsTextureObject, METH_VARARGS,
   "GetDepthAttachmentAsTextureObject(self) -> vtkTextureObject\nC++: vtkTextureObject *GetDepthAttachmentAsTextureObject()\n\n"},
  {"PopulateFramebuffer", PyvtkOpenGLFramebufferObject_PopulateFramebuffer, METH_VARARGS,
   "PopulateFramebuffer(self, width:int, height:int) -> bool\nC++: bool PopulateFramebuffer(int width, int height)\nPopulateFramebuffer(self, width:int, height:int, useTextures:bool,\n     numberOfColorAttachments:int, colorDataType:int,\n    wantDepthAttachment:bool, depthBitplanes:int,\n    multisamples:int, wantStencilAttachment:bool=False) -> bool\nC++: bool PopulateFramebuffer(int width, int height,\n    bool useTextures, int numberOfColorAttachments,\n    int colorDataType, bool wantDepthAttachment,\n    int depthBitplanes, int multisamples,\n    bool wantStencilAttachment=false)\n\nConvenience method to populate a framebuffer with attachments\ncreated as well. Returns true if a complete valid Framebuffer was\ncreated\n"},
  {"GetMaximumNumberOfActiveTargets", PyvtkOpenGLFramebufferObject_GetMaximumNumberOfActiveTargets, METH_VARARGS,
   "GetMaximumNumberOfActiveTargets(self) -> int\nC++: unsigned int GetMaximumNumberOfActiveTargets()\n\nReturns the maximum number of targets that can be rendered to at\none time. This limits the active targets set by\nSetActiveTargets(). The return value is valid only if GetContext\nis non-null.\n"},
  {"GetMaximumNumberOfRenderTargets", PyvtkOpenGLFramebufferObject_GetMaximumNumberOfRenderTargets, METH_VARARGS,
   "GetMaximumNumberOfRenderTargets(self) -> int\nC++: unsigned int GetMaximumNumberOfRenderTargets()\n\nReturns the maximum number of render targets available. This\nlimits the available attachment points for SetColorAttachment().\nThe return value is valid only if GetContext is non-null.\n"},
  {"GetLastSize", PyvtkOpenGLFramebufferObject_GetLastSize, METH_VARARGS,
   "GetLastSize(self) -> Pointer\nC++: int *GetLastSize() override;\nGetLastSize(self, _arg1:int, _arg2:int) -> None\nC++: void GetLastSize(int &_arg1, int &_arg2) override;\nGetLastSize(self, _arg:[int, int]) -> None\nC++: void GetLastSize(int _arg[2]) override;\n\nDimensions in pixels of the framebuffer.\n"},
  {"IsSupported", PyvtkOpenGLFramebufferObject_IsSupported, METH_VARARGS,
   "IsSupported(__a:vtkOpenGLRenderWindow) -> bool\nC++: static bool IsSupported(vtkOpenGLRenderWindow *)\n\nReturns if the context supports the required extensions.\nExtension will be loaded when the context is set.\n"},
  {"CheckFrameBufferStatus", PyvtkOpenGLFramebufferObject_CheckFrameBufferStatus, METH_VARARGS,
   "CheckFrameBufferStatus(self, mode:int) -> int\nC++: int CheckFrameBufferStatus(unsigned int mode)\n\nValidate the current FBO configuration (attachments, formats,\netc) prints detected errors to vtkErrorMacro.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLFramebufferObject_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, win:vtkWindow) -> None\nC++: virtual void ReleaseGraphicsResources(vtkWindow *win)\n\nDeactivate and UnBind\n"},
  {"GetFBOIndex", PyvtkOpenGLFramebufferObject_GetFBOIndex, METH_VARARGS,
   "GetFBOIndex(self) -> int\nC++: virtual unsigned int GetFBOIndex()\n\n"},
  {"Blit", PyvtkOpenGLFramebufferObject_Blit, METH_VARARGS,
   "Blit(srcExt:(int, int, int, int), destExt:(int, int, int, int),\n    bits:int, mapping:int) -> int\nC++: static int Blit(const int srcExt[4], const int destExt[4],\n    unsigned int bits, unsigned int mapping)\n\nCopy from the currently bound READ FBO to the currently bound\nDRAW FBO. The method is static so that one doesn't need to\nccreate an instance when transferring between attachments in the\ndefault FBO.\n"},
  {"DownloadColor1", PyvtkOpenGLFramebufferObject_DownloadColor1, METH_VARARGS,
   "DownloadColor1(self, extent:[int, int, int, int], vtkType:int,\n    channel:int) -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *DownloadColor1(int extent[4],\n    int vtkType, int channel)\n\nDownload data from the read color attachment of the currently\nbound FBO into the returned PBO. The PBO must be free'd when you\nare finished with it. The number of components in the PBO is the\nsame as in the name of the specific download function. When\ndownloading a single color channel, the channel must be\nidentified by index, 1->red, 2->green, 3-> blue.\n"},
  {"DownloadColor3", PyvtkOpenGLFramebufferObject_DownloadColor3, METH_VARARGS,
   "DownloadColor3(self, extent:[int, int, int, int], vtkType:int)\n    -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *DownloadColor3(int extent[4],\n    int vtkType)\n\n"},
  {"DownloadColor4", PyvtkOpenGLFramebufferObject_DownloadColor4, METH_VARARGS,
   "DownloadColor4(self, extent:[int, int, int, int], vtkType:int)\n    -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *DownloadColor4(int extent[4],\n    int vtkType)\n\n"},
  {"DownloadDepth", PyvtkOpenGLFramebufferObject_DownloadDepth, METH_VARARGS,
   "DownloadDepth(self, extent:[int, int, int, int], vtkType:int)\n    -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *DownloadDepth(int extent[4],\n    int vtkType)\n\nDownload data from the depth attachment of the currently bound\nFBO. The returned PBO must be Delete'd by the caller. The\nreturned PBO has one component.\n"},
  {"Download", PyvtkOpenGLFramebufferObject_Download, METH_VARARGS,
   "Download(self, extent:[int, int, int, int], vtkType:int,\n    nComps:int, oglType:int, oglFormat:int)\n    -> vtkPixelBufferObject\nC++: vtkPixelBufferObject *Download(int extent[4], int vtkType,\n    int nComps, int oglType, int oglFormat)\nDownload(extent:[int, int, int, int], vtkType:int, nComps:int,\n    oglType:int, oglFormat:int, pbo:vtkPixelBufferObject) -> None\nC++: static void Download(int extent[4], int vtkType, int nComps,\n    int oglType, int oglFormat, vtkPixelBufferObject *pbo)\n\nDownload data from the read buffer of the current FBO. These are\nlow level methods. In the static variant a PBO must be passed in\nsince we don't have access to a context. The static method is\nprovided so that one may download from the default FBO.\n"},
  {"GetDrawMode", PyvtkOpenGLFramebufferObject_GetDrawMode, METH_VARARGS,
   "GetDrawMode() -> int\nC++: static unsigned int GetDrawMode()\n\n"},
  {"GetReadMode", PyvtkOpenGLFramebufferObject_GetReadMode, METH_VARARGS,
   "GetReadMode() -> int\nC++: static unsigned int GetReadMode()\n\n"},
  {"GetBothMode", PyvtkOpenGLFramebufferObject_GetBothMode, METH_VARARGS,
   "GetBothMode() -> int\nC++: static unsigned int GetBothMode()\n\n"},
  {"Resize", PyvtkOpenGLFramebufferObject_Resize, METH_VARARGS,
   "Resize(self, width:int, height:int) -> None\nC++: void Resize(int width, int height)\n\nResize all FO attachments\n"},
  {"GetMultiSamples", PyvtkOpenGLFramebufferObject_GetMultiSamples, METH_VARARGS,
   "GetMultiSamples(self) -> int\nC++: int GetMultiSamples()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLFramebufferObject_Doc =
  "vtkOpenGLFramebufferObject - Internal class which encapsulates OpenGL\nFramebufferObject\n\n"
  "Superclass: vtkFrameBufferObjectBase\n\n"
  "Before delving into this class it is best to have some background in\n"
  "some OpenGL terms. OpenGL has a notion of a currently bound\n"
  "Framebuffers for drawing and reading. It can be the default\n"
  "framebuffer such as created with a standard window/context or it can\n"
  "be a user created Framebuffer objects. When draw and read commands\n"
  "are invoked, they apply to the current draw and/or read framebuffers.\n\n"
  "A framebuffer consists of color buffers and an optional depth buffer.\n"
  "The FramebufferObject does not hold the memory for these buffers, it\n"
  "just keeps track of what buffers are attached to it. The buffers\n"
  "themselves hold the storage for the pixels/depths.\n\n"
  "In the context of this discussion a buffer can be either a\n"
  "vtkTextureObject (both 2D or a slice of a 3D texture) or a\n"
  "vtkRenderbuffer. In some cases a renderbuffer may be faster or more\n"
  "lightweight but you cannot pass a renderbuffer into a shader for\n"
  "sampling in a later pass like you can a texture.\n\n"
  "You attach these buffers to the Framebuffer using methods such as\n"
  "AddColorAttachment or AddDepthAttachment In normal usage a buffer is\n"
  "Attached to a FramebufferObject and then some or all of the attached\n"
  "buffers are activated for drawing or reading.\n\n"
  "When you have a framebuffer bound along with some buffers attached to\n"
  "it you can then activate specific buffers for drawing or reading. So\n"
  "you have draw and read framebuffer objects (bindings) and then for\n"
  "the currently bound FramebufferObjects you have active draw and read\n"
  "buffers.\n\n"
  "A single FramebufferObject can be bound to both Draw and Read. You\n"
  "cannot assign and activate a TextureObject for drawing on the FO and\n"
  "at the same time pass it in as a Texture to the shader program. That\n"
  "type of operation is very common and must be done in two steps.\n"
  "- Render to the FO with the Texture attached as an active buffer\n"
  "- deactivate the texture obj and then render with the texture obj as\n"
  "  a texture passed into the shader\n\n"
  "Typical use cases: The simplest example{.cpp}\n"
  "fbo->SetContext(renWin);\n"
  "fbo->SaveCurrentBindingsAndBuffers();\n"
  "fbo->PopulateFramebuffer(width, height);\n\n"
  "...\n\n"
  "fbo->RestorePreviousBindingsAndBuffers();\n\n"
  "If you wish to use a texture you created\n\n"
  "{.cpp}\n"
  "fbo->SetContext(renWin);\n"
  "fbo->SaveCurrentBindingsAndBuffers();\n"
  "fbo->Bind();\n"
  "fbo->AddColorAttachment(0, vtkTextureObj);\n"
  "fbo->AddDepthAttachment(); // auto create depth buffer\n"
  "fbo->ActivateBuffer(0);\n\n"
  "...\n\n"
  "fbo->RestorePreviousBindingsAndBuffers();\n\n"
  "If you will be using a FO repeatedly then it is best to create it\n"
  "attach the buffers and then use as needed for example\n\n"
  "Typical use case:{.cpp}\n"
  "// setup the FBO once\n"
  "fbo->SetContext(renWin);\n"
  "fbo->SaveCurrentBindingsAndBuffers();\n"
  "fbo->AddColorAttachment(0, vtkTextureObj);\n"
  "fbo->AddDepthAttachment(); // auto create depth buffer\n"
  "fbo->RestorePreviousBindingsAndBuffers();\n\n"
  "// use it many times fbo->SaveCurrentBindingsAndBuffers();\n"
  "fbo->Bind(); fbo->ActivateBuffer(0); ... // render here etc\n"
  "fbo->RestorePreviousBindingsAndBuffers();\n\n"
  "If you with to only bind the framebuffer for drawing or reading there\n"
  "are mode specific versions of some methods that only apply to the\n"
  "mode specified Draw/Read/Both. The mode argument uses OpenGL\n"
  "constants so this class provides convenience methods to return them\n"
  "named GetDrawMode() GetReadMode() and GetBothMode() so that your code\n"
  "does not need to be polluted with OpenGL headers/constants.\n\n"
  "This class replaces both vtkFrameBufferObject and\n"
  "vtkFrameBufferObject2 and contins methods from both of them. Most\n"
  "methods from FO2 should work with this class. Just rename FBO2 to FBO\n"
  "and make sure to Save and Restore the bindings and buffers. If you\n"
  "have been using the old FO class, which had comments in the header\n"
  "saying not to use it. Then you are in for a bit more of a conversion\n"
  "but generally it should still be easy. Use the code samples above (or\n"
  "any of the classes in OpenGL2 that currently use FBOs) to guide you.\n"
  "They have all been converted to this class. Where previously a\n"
  "DepthBuffer was automatically created for you, you now need to do it\n"
  "explicitly using AddDepthAttachment().\n\n"
  "Note the capitalization of FramebufferObject\n\n"
  "@sa\n"
  "vtkTextureObject, vtkRenderbufferObject\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLFramebufferObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLFramebufferObject", // tp_name
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
  PyvtkOpenGLFramebufferObject_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLFramebufferObject_StaticNew()
{
  return vtkOpenGLFramebufferObject::New();
}

PyObject *PyvtkOpenGLFramebufferObject_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLFramebufferObject_Type, PyvtkOpenGLFramebufferObject_Methods,
    "vtkOpenGLFramebufferObject",
 &PyvtkOpenGLFramebufferObject_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkFrameBufferObjectBase");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLFramebufferObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLFramebufferObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLFramebufferObject", o) != 0)
  {
    Py_DECREF(o);
  }

}

