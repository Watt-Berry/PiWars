// python wrapper for vtkWindow
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWindow.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWindow(PyObject *dict); }
extern "C" { PyObject *PyvtkWindow_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkWindow_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWindow *tempr = vtkWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWindow::NewInstance());

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
PyvtkWindow_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWindow::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWindow::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayId(temp0);
    }
    else
    {
      op->vtkWindow::SetDisplayId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkWindow_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetWindowId(temp0);
    }
    else
    {
      op->vtkWindow::SetWindowId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkWindow_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetParentId(temp0);
    }
    else
    {
      op->vtkWindow::SetParentId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkWindow_GetGenericDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericDisplayId() :
      op->vtkWindow::GetGenericDisplayId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetGenericWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericWindowId() :
      op->vtkWindow::GetGenericWindowId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetGenericParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericParentId() :
      op->vtkWindow::GetGenericParentId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetGenericContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericContext() :
      op->vtkWindow::GetGenericContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetGenericDrawable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDrawable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericDrawable() :
      op->vtkWindow::GetGenericDrawable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindowInfo(temp0);
    }
    else
    {
      op->vtkWindow::SetWindowInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetParentInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParentInfo(temp0);
    }
    else
    {
      op->vtkWindow::SetParentInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkWindow::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1);
    }
    else
    {
      op->vtkWindow::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindow_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkWindow::SetPosition(temp0);
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
PyvtkWindow_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkWindow_SetPosition_s1(self, args);
    case 1:
      return PyvtkWindow_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkWindow_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkWindow::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0, temp1);
    }
    else
    {
      op->vtkWindow::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindow_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
      op->SetSize(temp0);
    }
    else
    {
      op->vtkWindow::SetSize(temp0);
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
PyvtkWindow_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkWindow_SetSize_s1(self, args);
    case 1:
      return PyvtkWindow_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}


static PyObject *
PyvtkWindow_GetActualSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetActualSize() :
      op->vtkWindow::GetActualSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkWindow::GetScreenSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetMapped(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapped");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMapped() :
      op->vtkWindow::GetMapped());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetShowWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShowWindow() :
      op->vtkWindow::GetShowWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetShowWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowWindow(temp0);
    }
    else
    {
      op->vtkWindow::SetShowWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_ShowWindowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowWindowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowWindowOn();
    }
    else
    {
      op->vtkWindow::ShowWindowOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_ShowWindowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowWindowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowWindowOff();
    }
    else
    {
      op->vtkWindow::ShowWindowOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetUseOffScreenBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOffScreenBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOffScreenBuffers(temp0);
    }
    else
    {
      op->vtkWindow::SetUseOffScreenBuffers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetUseOffScreenBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOffScreenBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseOffScreenBuffers() :
      op->vtkWindow::GetUseOffScreenBuffers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_UseOffScreenBuffersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOffScreenBuffersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseOffScreenBuffersOn();
    }
    else
    {
      op->vtkWindow::UseOffScreenBuffersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_UseOffScreenBuffersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOffScreenBuffersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseOffScreenBuffersOff();
    }
    else
    {
      op->vtkWindow::UseOffScreenBuffersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetErase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetErase(temp0);
    }
    else
    {
      op->vtkWindow::SetErase(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetErase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetErase() :
      op->vtkWindow::GetErase());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_EraseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EraseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EraseOn();
    }
    else
    {
      op->vtkWindow::EraseOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_EraseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EraseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EraseOff();
    }
    else
    {
      op->vtkWindow::EraseOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetDoubleBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDoubleBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDoubleBuffer(temp0);
    }
    else
    {
      op->vtkWindow::SetDoubleBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetDoubleBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoubleBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDoubleBuffer() :
      op->vtkWindow::GetDoubleBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_DoubleBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoubleBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DoubleBufferOn();
    }
    else
    {
      op->vtkWindow::DoubleBufferOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_DoubleBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoubleBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DoubleBufferOff();
    }
    else
    {
      op->vtkWindow::DoubleBufferOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetWindowName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetWindowName() :
      op->vtkWindow::GetWindowName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetWindowName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindowName(temp0);
    }
    else
    {
      op->vtkWindow::SetWindowName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetIcon(temp0);
    }
    else
    {
      op->vtkWindow::SetIcon(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkWindow::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

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
      op->vtkWindow::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkWindow::GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWindow_GetPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkUnsignedCharArray *temp5 = nullptr;
  int temp6 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkUnsignedCharArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    int tempr = (ap.IsBound() ?
      op->GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkWindow::GetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWindow_GetPixelData_Methods[] = {
  {"GetPixelData", PyvtkWindow_GetPixelData_s1, METH_VARARGS,
   "@iiiii|i"},
  {"GetPixelData", PyvtkWindow_GetPixelData_s2, METH_VARARGS,
   "@iiiiiV|i *vtkUnsignedCharArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkWindow_GetPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkWindow_GetPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkWindow_GetPixelData_s1(self, args);
    case 7:
      return PyvtkWindow_GetPixelData_s2(self, args);
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPixelData");
  return nullptr;
}


static PyObject *
PyvtkWindow_GetDPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDPI() :
      op->vtkWindow::GetDPI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetDPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDPI(temp0);
    }
    else
    {
      op->vtkWindow::SetDPI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetDPIMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDPIMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDPIMinValue() :
      op->vtkWindow::GetDPIMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetDPIMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDPIMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDPIMaxValue() :
      op->vtkWindow::GetDPIMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_DetectDPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetectDPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->DetectDPI() :
      op->vtkWindow::DetectDPI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetOffScreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffScreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOffScreenRendering(temp0);
    }
    else
    {
      op->vtkWindow::SetOffScreenRendering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_OffScreenRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OffScreenRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OffScreenRenderingOn();
    }
    else
    {
      op->vtkWindow::OffScreenRenderingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_OffScreenRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OffScreenRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OffScreenRenderingOff();
    }
    else
    {
      op->vtkWindow::OffScreenRenderingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_GetOffScreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffScreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOffScreenRendering() :
      op->vtkWindow::GetOffScreenRendering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_MakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MakeCurrent();
    }
    else
    {
      op->vtkWindow::MakeCurrent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_ReleaseCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseCurrent();
    }
    else
    {
      op->vtkWindow::ReleaseCurrent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetTileScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTileScale(temp0, temp1);
    }
    else
    {
      op->vtkWindow::SetTileScale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindow_SetTileScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTileScale(temp0);
    }
    else
    {
      op->vtkWindow::SetTileScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindow_SetTileScale_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTileScale(temp0);
    }
    else
    {
      op->vtkWindow::SetTileScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWindow_SetTileScale_Methods[] = {
  {"SetTileScale", PyvtkWindow_SetTileScale_s2, METH_VARARGS,
   "@P *i"},
  {"SetTileScale", PyvtkWindow_SetTileScale_s3, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkWindow_SetTileScale(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkWindow_SetTileScale_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkWindow_SetTileScale_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTileScale");
  return nullptr;
}


static PyObject *
PyvtkWindow_GetTileScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTileScale() :
      op->vtkWindow::GetTileScale());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWindow_SetTileViewport_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetTileViewport(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWindow::SetTileViewport(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindow_SetTileViewport_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTileViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTileViewport(temp0);
    }
    else
    {
      op->vtkWindow::SetTileViewport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindow_SetTileViewport(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkWindow_SetTileViewport_s1(self, args);
    case 1:
      return PyvtkWindow_SetTileViewport_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTileViewport");
  return nullptr;
}


static PyObject *
PyvtkWindow_GetTileViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTileViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindow *op = static_cast<vtkWindow *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTileViewport() :
      op->vtkWindow::GetTileViewport());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkWindow_Methods[] = {
  {"IsTypeOf", PyvtkWindow_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWindow_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWindow_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWindow\nC++: static vtkWindow *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWindow_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWindow\nC++: vtkWindow *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWindow_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWindow_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDisplayId", PyvtkWindow_SetDisplayId, METH_VARARGS,
   "SetDisplayId(self, __a:Pointer) -> None\nC++: virtual void SetDisplayId(void *)\n\nThese are window system independent methods that are used to help\ninterface vtkWindow to native windowing systems.\n"},
  {"SetWindowId", PyvtkWindow_SetWindowId, METH_VARARGS,
   "SetWindowId(self, __a:Pointer) -> None\nC++: virtual void SetWindowId(void *)\n\n"},
  {"SetParentId", PyvtkWindow_SetParentId, METH_VARARGS,
   "SetParentId(self, __a:Pointer) -> None\nC++: virtual void SetParentId(void *)\n\n"},
  {"GetGenericDisplayId", PyvtkWindow_GetGenericDisplayId, METH_VARARGS,
   "GetGenericDisplayId(self) -> Pointer\nC++: virtual void *GetGenericDisplayId()\n\n"},
  {"GetGenericWindowId", PyvtkWindow_GetGenericWindowId, METH_VARARGS,
   "GetGenericWindowId(self) -> Pointer\nC++: virtual void *GetGenericWindowId()\n\n"},
  {"GetGenericParentId", PyvtkWindow_GetGenericParentId, METH_VARARGS,
   "GetGenericParentId(self) -> Pointer\nC++: virtual void *GetGenericParentId()\n\n"},
  {"GetGenericContext", PyvtkWindow_GetGenericContext, METH_VARARGS,
   "GetGenericContext(self) -> Pointer\nC++: virtual void *GetGenericContext()\n\n"},
  {"GetGenericDrawable", PyvtkWindow_GetGenericDrawable, METH_VARARGS,
   "GetGenericDrawable(self) -> Pointer\nC++: virtual void *GetGenericDrawable()\n\n"},
  {"SetWindowInfo", PyvtkWindow_SetWindowInfo, METH_VARARGS,
   "SetWindowInfo(self, __a:str) -> None\nC++: virtual void SetWindowInfo(const char *)\n\n"},
  {"SetParentInfo", PyvtkWindow_SetParentInfo, METH_VARARGS,
   "SetParentInfo(self, __a:str) -> None\nC++: virtual void SetParentInfo(const char *)\n\n"},
  {"GetPosition", PyvtkWindow_GetPosition, METH_VARARGS,
   "GetPosition(self) -> (int, int)\nC++: virtual int *GetPosition()\n\nGet the position (x and y) of the rendering window in screen\ncoordinates (in pixels).\n"},
  {"SetPosition", PyvtkWindow_SetPosition, METH_VARARGS,
   "SetPosition(self, x:int, y:int) -> None\nC++: virtual void SetPosition(int x, int y)\nSetPosition(self, a:[int, int]) -> None\nC++: virtual void SetPosition(int a[2])\n\nSet the position (x and y) of the rendering window in screen\ncoordinates (in pixels). This resizes the operating system's\nview/window and redraws it.\n"},
  {"GetSize", PyvtkWindow_GetSize, METH_VARARGS,
   "GetSize(self) -> (int, int)\nC++: virtual int *GetSize()\n\nGet the size (width and height) of the rendering window in screen\ncoordinates (in pixels).\n"},
  {"SetSize", PyvtkWindow_SetSize, METH_VARARGS,
   "SetSize(self, width:int, height:int) -> None\nC++: virtual void SetSize(int width, int height)\nSetSize(self, a:[int, int]) -> None\nC++: virtual void SetSize(int a[2])\n\nSet the size (width and height) of the rendering window in screen\ncoordinates (in pixels). This resizes the operating system's\nview/window and redraws it.\n\nIf the size has changed, this method will fire\nvtkCommand::WindowResizeEvent.\n"},
  {"GetActualSize", PyvtkWindow_GetActualSize, METH_VARARGS,
   "GetActualSize(self) -> (int, int)\nC++: int *GetActualSize()\n\nGetSize() returns the size * this->TileScale, whereas this method\nreturns the size without multiplying with the tile scale.\nMeasured in pixels.\n"},
  {"GetScreenSize", PyvtkWindow_GetScreenSize, METH_VARARGS,
   "GetScreenSize(self) -> (int, int)\nC++: virtual int *GetScreenSize()\n\nGet the current size of the screen in pixels.\n"},
  {"GetMapped", PyvtkWindow_GetMapped, METH_VARARGS,
   "GetMapped(self) -> int\nC++: virtual vtkTypeBool GetMapped()\n\nKeep track of whether the rendering window has been mapped to\nscreen.\n"},
  {"GetShowWindow", PyvtkWindow_GetShowWindow, METH_VARARGS,
   "GetShowWindow(self) -> bool\nC++: virtual bool GetShowWindow()\n\nShow or not Show the window\n"},
  {"SetShowWindow", PyvtkWindow_SetShowWindow, METH_VARARGS,
   "SetShowWindow(self, _arg:bool) -> None\nC++: virtual void SetShowWindow(bool _arg)\n\n"},
  {"ShowWindowOn", PyvtkWindow_ShowWindowOn, METH_VARARGS,
   "ShowWindowOn(self) -> None\nC++: virtual void ShowWindowOn()\n\n"},
  {"ShowWindowOff", PyvtkWindow_ShowWindowOff, METH_VARARGS,
   "ShowWindowOff(self) -> None\nC++: virtual void ShowWindowOff()\n\n"},
  {"SetUseOffScreenBuffers", PyvtkWindow_SetUseOffScreenBuffers, METH_VARARGS,
   "SetUseOffScreenBuffers(self, _arg:bool) -> None\nC++: virtual void SetUseOffScreenBuffers(bool _arg)\n\nRender to an offscreen destination such as a framebuffer. All\nfour combinations of ShowWindow and UseOffScreenBuffers should\nwork for most rendering backends.\n"},
  {"GetUseOffScreenBuffers", PyvtkWindow_GetUseOffScreenBuffers, METH_VARARGS,
   "GetUseOffScreenBuffers(self) -> bool\nC++: virtual bool GetUseOffScreenBuffers()\n\n"},
  {"UseOffScreenBuffersOn", PyvtkWindow_UseOffScreenBuffersOn, METH_VARARGS,
   "UseOffScreenBuffersOn(self) -> None\nC++: virtual void UseOffScreenBuffersOn()\n\n"},
  {"UseOffScreenBuffersOff", PyvtkWindow_UseOffScreenBuffersOff, METH_VARARGS,
   "UseOffScreenBuffersOff(self) -> None\nC++: virtual void UseOffScreenBuffersOff()\n\n"},
  {"SetErase", PyvtkWindow_SetErase, METH_VARARGS,
   "SetErase(self, _arg:int) -> None\nC++: virtual void SetErase(vtkTypeBool _arg)\n\nTurn on/off erasing the screen between images. This allows\nmultiple exposure sequences if turned on. You will need to turn\ndouble buffering off or make use of the SwapBuffers methods to\nprevent you from swapping buffers between exposures.\n"},
  {"GetErase", PyvtkWindow_GetErase, METH_VARARGS,
   "GetErase(self) -> int\nC++: virtual vtkTypeBool GetErase()\n\n"},
  {"EraseOn", PyvtkWindow_EraseOn, METH_VARARGS,
   "EraseOn(self) -> None\nC++: virtual void EraseOn()\n\n"},
  {"EraseOff", PyvtkWindow_EraseOff, METH_VARARGS,
   "EraseOff(self) -> None\nC++: virtual void EraseOff()\n\n"},
  {"SetDoubleBuffer", PyvtkWindow_SetDoubleBuffer, METH_VARARGS,
   "SetDoubleBuffer(self, _arg:int) -> None\nC++: virtual void SetDoubleBuffer(vtkTypeBool _arg)\n\nKeep track of whether double buffering is on or off\n"},
  {"GetDoubleBuffer", PyvtkWindow_GetDoubleBuffer, METH_VARARGS,
   "GetDoubleBuffer(self) -> int\nC++: virtual vtkTypeBool GetDoubleBuffer()\n\n"},
  {"DoubleBufferOn", PyvtkWindow_DoubleBufferOn, METH_VARARGS,
   "DoubleBufferOn(self) -> None\nC++: virtual void DoubleBufferOn()\n\n"},
  {"DoubleBufferOff", PyvtkWindow_DoubleBufferOff, METH_VARARGS,
   "DoubleBufferOff(self) -> None\nC++: virtual void DoubleBufferOff()\n\n"},
  {"GetWindowName", PyvtkWindow_GetWindowName, METH_VARARGS,
   "GetWindowName(self) -> str\nC++: virtual char *GetWindowName()\n\nGet name of rendering window\n"},
  {"SetWindowName", PyvtkWindow_SetWindowName, METH_VARARGS,
   "SetWindowName(self, _arg:str) -> None\nC++: virtual void SetWindowName(const char *_arg)\n\n"},
  {"SetIcon", PyvtkWindow_SetIcon, METH_VARARGS,
   "SetIcon(self, __a:vtkImageData) -> None\nC++: virtual void SetIcon(vtkImageData *)\n\nSet the icon used in title bar and task bar. Currently\nimplemented for OpenGL windows on Windows and Linux.\n"},
  {"Render", PyvtkWindow_Render, METH_VARARGS,
   "Render(self) -> None\nC++: virtual void Render()\n\nAsk each viewport owned by this Window to render its image and\nsynchronize this process.\n"},
  {"ReleaseGraphicsResources", PyvtkWindow_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\ntexture. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetPixelData", PyvtkWindow_GetPixelData, METH_VARARGS,
   "GetPixelData(self, __a:int, __b:int, __c:int, __d:int, __e:int,\n    __f:int) -> Pointer\nC++: virtual unsigned char *GetPixelData(int, int, int, int, int,\n    int=0)\nGetPixelData(self, __a:int, __b:int, __c:int, __d:int, __e:int,\n    __f:vtkUnsignedCharArray, __g:int) -> int\nC++: virtual int GetPixelData(int, int, int, int, int,\n    vtkUnsignedCharArray *, int=0)\n\nGet the pixel data of an image, transmitted as RGBRGBRGB. The\nfront argument indicates if the front buffer should be used or\nthe back buffer. It is the caller's responsibility to delete the\nresulting array. It is very important to realize that the memory\nin this array is organized from the bottom of the window to the\ntop. The origin of the screen is in the lower left corner. The y\naxis increases as you go up the screen. So the storage of pixels\nis from left to right and from bottom to top. (x,y) is any corner\nof the rectangle. (x2,y2) is its opposite corner on the diagonal.\n"},
  {"GetDPI", PyvtkWindow_GetDPI, METH_VARARGS,
   "GetDPI(self) -> int\nC++: virtual int GetDPI()\n\nReturn a best estimate to the dots per inch of the display device\nbeing rendered (or printed).\n"},
  {"SetDPI", PyvtkWindow_SetDPI, METH_VARARGS,
   "SetDPI(self, _arg:int) -> None\nC++: virtual void SetDPI(int _arg)\n\n"},
  {"GetDPIMinValue", PyvtkWindow_GetDPIMinValue, METH_VARARGS,
   "GetDPIMinValue(self) -> int\nC++: virtual int GetDPIMinValue()\n\n"},
  {"GetDPIMaxValue", PyvtkWindow_GetDPIMaxValue, METH_VARARGS,
   "GetDPIMaxValue(self) -> int\nC++: virtual int GetDPIMaxValue()\n\n"},
  {"DetectDPI", PyvtkWindow_DetectDPI, METH_VARARGS,
   "DetectDPI(self) -> bool\nC++: virtual bool DetectDPI()\n\nAttempt to detect and set the DPI of the display device by\nquerying the system. Note that this is not supported on most\nbackends, and this method will return false if the DPI could not\nbe detected. Use GetDPI() to inspect the detected value.\n"},
  {"SetOffScreenRendering", PyvtkWindow_SetOffScreenRendering, METH_VARARGS,
   "SetOffScreenRendering(self, val:int) -> None\nC++: void SetOffScreenRendering(vtkTypeBool val)\n\nConvenience to set SHowWindow and UseOffScreenBuffers in one call\n"},
  {"OffScreenRenderingOn", PyvtkWindow_OffScreenRenderingOn, METH_VARARGS,
   "OffScreenRenderingOn(self) -> None\nC++: virtual void OffScreenRenderingOn()\n\n"},
  {"OffScreenRenderingOff", PyvtkWindow_OffScreenRenderingOff, METH_VARARGS,
   "OffScreenRenderingOff(self) -> None\nC++: virtual void OffScreenRenderingOff()\n\n"},
  {"GetOffScreenRendering", PyvtkWindow_GetOffScreenRendering, METH_VARARGS,
   "GetOffScreenRendering(self) -> int\nC++: vtkTypeBool GetOffScreenRendering()\n\nDeprecated, directly use GetShowWindow and GetOffScreenBuffers\ninstead.\n"},
  {"MakeCurrent", PyvtkWindow_MakeCurrent, METH_VARARGS,
   "MakeCurrent(self) -> None\nC++: virtual void MakeCurrent()\n\nMake the window current. May be overridden in subclasses to do\nfor example a glXMakeCurrent or a wglMakeCurrent.\n"},
  {"ReleaseCurrent", PyvtkWindow_ReleaseCurrent, METH_VARARGS,
   "ReleaseCurrent(self) -> None\nC++: virtual void ReleaseCurrent()\n\nRelease the current context. May be overridden in subclasses to\ndo for example a glXMakeCurrent or a wglMakeCurrent.\n"},
  {"SetTileScale", PyvtkWindow_SetTileScale, METH_VARARGS,
   "SetTileScale(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetTileScale(int _arg1, int _arg2)\nSetTileScale(self, _arg:(int, int)) -> None\nC++: void SetTileScale(const int _arg[2])\nSetTileScale(self, s:int) -> None\nC++: void SetTileScale(int s)\n\nThese methods are used by vtkWindowToImageFilter to tell a VTK\nwindow to simulate a larger window by tiling. For 3D geometry\nthese methods have no impact. It is just in handling annotation\nthat this information must be available to the mappers and the\ncoordinate calculations.\n"},
  {"GetTileScale", PyvtkWindow_GetTileScale, METH_VARARGS,
   "GetTileScale(self) -> (int, int)\nC++: virtual int *GetTileScale()\n\n"},
  {"SetTileViewport", PyvtkWindow_SetTileViewport, METH_VARARGS,
   "SetTileViewport(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float) -> None\nC++: virtual void SetTileViewport(double _arg1, double _arg2,\n    double _arg3, double _arg4)\nSetTileViewport(self, _arg:(float, float, float, float)) -> None\nC++: virtual void SetTileViewport(const double _arg[4])\n\n"},
  {"GetTileViewport", PyvtkWindow_GetTileViewport, METH_VARARGS,
   "GetTileViewport(self) -> (float, float, float, float)\nC++: virtual double *GetTileViewport()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWindow_Doc =
  "vtkWindow - window superclass for vtkRenderWindow\n\n"
  "Superclass: vtkObject\n\n"
  "vtkWindow is an abstract object to specify the behavior of a\n"
  "rendering window.  It contains vtkViewports.\n\n"
  "@sa\n"
  "vtkRenderWindow vtkViewport\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkWindow", // tp_name
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
  PyvtkWindow_Doc, // tp_doc
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

PyObject *PyvtkWindow_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWindow_Type, PyvtkWindow_Methods,
    "vtkWindow",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWindow", o) != 0)
  {
    Py_DECREF(o);
  }

}

