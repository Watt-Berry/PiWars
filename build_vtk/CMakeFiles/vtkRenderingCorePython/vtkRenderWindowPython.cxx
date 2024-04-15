// python wrapper for vtkRenderWindow
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkEventData.h"
#include "vtkRenderWindow.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderWindow(PyObject *dict); }
extern "C" { PyObject *PyvtkRenderWindow_ClassNew(); }


static PyObject *
PyvtkRenderWindow_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderWindow *tempr = vtkRenderWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderWindow::NewInstance());

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
PyvtkRenderWindow_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRenderWindow::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRenderWindow::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_AddRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->AddRenderer(temp0);
    }
    else
    {
      op->vtkRenderWindow::AddRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_RemoveRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->RemoveRenderer(temp0);
    }
    else
    {
      op->vtkRenderWindow::RemoveRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_HasRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    int tempr = (ap.IsBound() ?
      op->HasRenderer(temp0) :
      op->vtkRenderWindow::HasRenderer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetRenderLibrary(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRenderLibrary");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkRenderWindow::GetRenderLibrary();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetRenderingBackend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderingBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRenderingBackend() :
      op->vtkRenderWindow::GetRenderingBackend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetRenderTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderTimerLog *tempr = (ap.IsBound() ?
      op->GetRenderTimer() :
      op->vtkRenderWindow::GetRenderTimer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetRenderers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRendererCollection *tempr = (ap.IsBound() ?
      op->GetRenderers() :
      op->vtkRenderWindow::GetRenderers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_CaptureGL2PSSpecialProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureGL2PSSpecialProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->CaptureGL2PSSpecialProps(temp0);
    }
    else
    {
      op->vtkRenderWindow::CaptureGL2PSSpecialProps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetCapturingGL2PSSpecialProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapturingGL2PSSpecialProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCapturingGL2PSSpecialProps() :
      op->vtkRenderWindow::GetCapturingGL2PSSpecialProps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkRenderWindow::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Start();
    }
    else
    {
      op->vtkRenderWindow::Start();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->End();
    }
    else
    {
      op->vtkRenderWindow::End();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkRenderWindow::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_Frame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Frame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Frame();
    }
    else
    {
      op->vtkRenderWindow::Frame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_WaitForCompletion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForCompletion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WaitForCompletion();
    }
    else
    {
      op->vtkRenderWindow::WaitForCompletion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_CopyResultFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyResultFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyResultFrame();
    }
    else
    {
      op->vtkRenderWindow::CopyResultFrame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_MakeRenderWindowInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeRenderWindowInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->MakeRenderWindowInteractor() :
      op->vtkRenderWindow::MakeRenderWindowInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_HideCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideCursor();
    }
    else
    {
      op->vtkRenderWindow::HideCursor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_ShowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowCursor();
    }
    else
    {
      op->vtkRenderWindow::ShowCursor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetCursorPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCursorPosition(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindow::SetCursorPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetCurrentCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentCursor(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetCurrentCursor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetCurrentCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentCursor() :
      op->vtkRenderWindow::GetCurrentCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetCursorFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCursorFileName(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetCursorFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetCursorFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCursorFileName() :
      op->vtkRenderWindow::GetCursorFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFullScreen(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetFullScreen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFullScreen() :
      op->vtkRenderWindow::GetFullScreen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_FullScreenOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FullScreenOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FullScreenOn();
    }
    else
    {
      op->vtkRenderWindow::FullScreenOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_FullScreenOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FullScreenOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FullScreenOff();
    }
    else
    {
      op->vtkRenderWindow::FullScreenOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorders(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetBorders(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorders() :
      op->vtkRenderWindow::GetBorders());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_BordersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BordersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BordersOn();
    }
    else
    {
      op->vtkRenderWindow::BordersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_BordersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BordersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BordersOff();
    }
    else
    {
      op->vtkRenderWindow::BordersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetStereoCapableWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoCapableWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStereoCapableWindow() :
      op->vtkRenderWindow::GetStereoCapableWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoCapableWindowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoCapableWindowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoCapableWindowOn();
    }
    else
    {
      op->vtkRenderWindow::StereoCapableWindowOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoCapableWindowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoCapableWindowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoCapableWindowOff();
    }
    else
    {
      op->vtkRenderWindow::StereoCapableWindowOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoCapableWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoCapableWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStereoCapableWindow(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetStereoCapableWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetStereoRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStereoRender() :
      op->vtkRenderWindow::GetStereoRender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStereoRender(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetStereoRender(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoRenderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoRenderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoRenderOn();
    }
    else
    {
      op->vtkRenderWindow::StereoRenderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoRenderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoRenderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoRenderOff();
    }
    else
    {
      op->vtkRenderWindow::StereoRenderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetAlphaBitPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlphaBitPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlphaBitPlanes(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetAlphaBitPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetAlphaBitPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaBitPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlphaBitPlanes() :
      op->vtkRenderWindow::GetAlphaBitPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_AlphaBitPlanesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlphaBitPlanesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlphaBitPlanesOn();
    }
    else
    {
      op->vtkRenderWindow::AlphaBitPlanesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_AlphaBitPlanesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlphaBitPlanesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlphaBitPlanesOff();
    }
    else
    {
      op->vtkRenderWindow::AlphaBitPlanesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetPointSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointSmoothing(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetPointSmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetPointSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointSmoothing() :
      op->vtkRenderWindow::GetPointSmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_PointSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointSmoothingOn();
    }
    else
    {
      op->vtkRenderWindow::PointSmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_PointSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointSmoothingOff();
    }
    else
    {
      op->vtkRenderWindow::PointSmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetLineSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineSmoothing(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetLineSmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetLineSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineSmoothing() :
      op->vtkRenderWindow::GetLineSmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_LineSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LineSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LineSmoothingOn();
    }
    else
    {
      op->vtkRenderWindow::LineSmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_LineSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LineSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LineSmoothingOff();
    }
    else
    {
      op->vtkRenderWindow::LineSmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetPolygonSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolygonSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolygonSmoothing(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetPolygonSmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetPolygonSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolygonSmoothing() :
      op->vtkRenderWindow::GetPolygonSmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_PolygonSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolygonSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolygonSmoothingOn();
    }
    else
    {
      op->vtkRenderWindow::PolygonSmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_PolygonSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolygonSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolygonSmoothingOff();
    }
    else
    {
      op->vtkRenderWindow::PolygonSmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStereoType() :
      op->vtkRenderWindow::GetStereoType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStereoType(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetStereoType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToCrystalEyes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToCrystalEyes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToCrystalEyes();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToCrystalEyes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToRedBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToRedBlue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToRedBlue();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToRedBlue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToInterlaced(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToInterlaced");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToInterlaced();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToInterlaced();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToLeft();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToRight();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToDresden(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToDresden");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToDresden();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToDresden();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToAnaglyph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToAnaglyph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToAnaglyph();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToAnaglyph();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToCheckerboard(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToCheckerboard");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToCheckerboard();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToCheckerboard();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToSplitViewportHorizontal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToSplitViewportHorizontal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToSplitViewportHorizontal();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToSplitViewportHorizontal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToFake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToFake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToFake();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToFake();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStereoTypeToEmulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoTypeToEmulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStereoTypeToEmulate();
    }
    else
    {
      op->vtkRenderWindow::SetStereoTypeToEmulate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetStereoTypeAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStereoTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetStereoTypeAsString() :
      op->vtkRenderWindow::GetStereoTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_GetStereoTypeAsString_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStereoTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkRenderWindow::GetStereoTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_GetStereoTypeAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderWindow_GetStereoTypeAsString_s1(self, args);
    case 1:
      return PyvtkRenderWindow_GetStereoTypeAsString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetStereoTypeAsString");
  return nullptr;
}


static PyObject *
PyvtkRenderWindow_StereoUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoUpdate();
    }
    else
    {
      op->vtkRenderWindow::StereoUpdate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoMidpoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoMidpoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoMidpoint();
    }
    else
    {
      op->vtkRenderWindow::StereoMidpoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StereoRenderComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StereoRenderComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StereoRenderComplete();
    }
    else
    {
      op->vtkRenderWindow::StereoRenderComplete();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetAnaglyphColorSaturation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnaglyphColorSaturation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnaglyphColorSaturation(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetAnaglyphColorSaturation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetAnaglyphColorSaturationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnaglyphColorSaturationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetAnaglyphColorSaturationMinValue() :
      op->vtkRenderWindow::GetAnaglyphColorSaturationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetAnaglyphColorSaturationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnaglyphColorSaturationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetAnaglyphColorSaturationMaxValue() :
      op->vtkRenderWindow::GetAnaglyphColorSaturationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetAnaglyphColorSaturation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnaglyphColorSaturation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetAnaglyphColorSaturation() :
      op->vtkRenderWindow::GetAnaglyphColorSaturation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetAnaglyphColorMask_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnaglyphColorMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAnaglyphColorMask(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindow::SetAnaglyphColorMask(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_SetAnaglyphColorMask_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnaglyphColorMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAnaglyphColorMask(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetAnaglyphColorMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_SetAnaglyphColorMask(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRenderWindow_SetAnaglyphColorMask_s1(self, args);
    case 1:
      return PyvtkRenderWindow_SetAnaglyphColorMask_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAnaglyphColorMask");
  return nullptr;
}


static PyObject *
PyvtkRenderWindow_GetAnaglyphColorMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnaglyphColorMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetAnaglyphColorMask() :
      op->vtkRenderWindow::GetAnaglyphColorMask());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_WindowRemap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowRemap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WindowRemap();
    }
    else
    {
      op->vtkRenderWindow::WindowRemap();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetSwapBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSwapBuffers(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetSwapBuffers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetSwapBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSwapBuffers() :
      op->vtkRenderWindow::GetSwapBuffers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SwapBuffersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBuffersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwapBuffersOn();
    }
    else
    {
      op->vtkRenderWindow::SwapBuffersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SwapBuffersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBuffersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwapBuffersOff();
    }
    else
    {
      op->vtkRenderWindow::SwapBuffersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  int temp6 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkRenderWindow::SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_SetPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = nullptr;
  int temp5;
  int temp6 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    int tempr = (ap.IsBound() ?
      op->SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkRenderWindow::SetPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindow_SetPixelData_Methods[] = {
  {"SetPixelData", PyvtkRenderWindow_SetPixelData_s1, METH_VARARGS,
   "@iiiiPi|i *B"},
  {"SetPixelData", PyvtkRenderWindow_SetPixelData_s2, METH_VARARGS,
   "@iiiiVi|i *vtkUnsignedCharArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindow_SetPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindow_SetPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
    case 7:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPixelData");
  return nullptr;
}


static PyObject *
PyvtkRenderWindow_GetRGBAPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

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
    float *tempr = (ap.IsBound() ?
      op->GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkRenderWindow::GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_GetRGBAPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  vtkFloatArray *temp5 = nullptr;
  int temp6 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkFloatArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    int tempr = (ap.IsBound() ?
      op->GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkRenderWindow::GetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindow_GetRGBAPixelData_Methods[] = {
  {"GetRGBAPixelData", PyvtkRenderWindow_GetRGBAPixelData_s1, METH_VARARGS,
   "@iiiii|i"},
  {"GetRGBAPixelData", PyvtkRenderWindow_GetRGBAPixelData_s2, METH_VARARGS,
   "@iiiiiV|i *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindow_GetRGBAPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindow_GetRGBAPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkRenderWindow_GetRGBAPixelData_s1(self, args);
    case 7:
      return PyvtkRenderWindow_GetRGBAPixelData_s2(self, args);
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBAPixelData");
  return nullptr;
}


static PyObject *
PyvtkRenderWindow_SetRGBAPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<float> store4(2*size4);
  float *temp4 = store4.Data();
  float *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  int temp6 = 0;
  int temp7 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkRenderWindow::SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_SetRGBAPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = nullptr;
  int temp5;
  int temp6 = 0;
  int temp7 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray") &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    int tempr = (ap.IsBound() ?
      op->SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkRenderWindow::SetRGBAPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindow_SetRGBAPixelData_Methods[] = {
  {"SetRGBAPixelData", PyvtkRenderWindow_SetRGBAPixelData_s1, METH_VARARGS,
   "@iiiiPi|ii *f"},
  {"SetRGBAPixelData", PyvtkRenderWindow_SetRGBAPixelData_s2, METH_VARARGS,
   "@iiiiVi|ii *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindow_SetRGBAPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindow_SetRGBAPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
    case 7:
    case 8:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRGBAPixelData");
  return nullptr;
}


static PyObject *
PyvtkRenderWindow_ReleaseRGBAPixelData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseRGBAPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->ReleaseRGBAPixelData(temp0);
    }
    else
    {
      op->vtkRenderWindow::ReleaseRGBAPixelData(temp0);
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
PyvtkRenderWindow_GetRGBACharPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

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
      op->GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkRenderWindow::GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_GetRGBACharPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

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
      op->GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkRenderWindow::GetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindow_GetRGBACharPixelData_Methods[] = {
  {"GetRGBACharPixelData", PyvtkRenderWindow_GetRGBACharPixelData_s1, METH_VARARGS,
   "@iiiii|i"},
  {"GetRGBACharPixelData", PyvtkRenderWindow_GetRGBACharPixelData_s2, METH_VARARGS,
   "@iiiiiV|i *vtkUnsignedCharArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindow_GetRGBACharPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindow_GetRGBACharPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkRenderWindow_GetRGBACharPixelData_s1(self, args);
    case 7:
      return PyvtkRenderWindow_GetRGBACharPixelData_s2(self, args);
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBACharPixelData");
  return nullptr;
}


static PyObject *
PyvtkRenderWindow_SetRGBACharPixelData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  int temp6 = 0;
  int temp7 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkRenderWindow::SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_SetRGBACharPixelData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRGBACharPixelData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkUnsignedCharArray *temp4 = nullptr;
  int temp5;
  int temp6 = 0;
  int temp7 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp7)))
  {
    int tempr = (ap.IsBound() ?
      op->SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkRenderWindow::SetRGBACharPixelData(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindow_SetRGBACharPixelData_Methods[] = {
  {"SetRGBACharPixelData", PyvtkRenderWindow_SetRGBACharPixelData_s1, METH_VARARGS,
   "@iiiiPi|ii *B"},
  {"SetRGBACharPixelData", PyvtkRenderWindow_SetRGBACharPixelData_s2, METH_VARARGS,
   "@iiiiVi|ii *vtkUnsignedCharArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindow_SetRGBACharPixelData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindow_SetRGBACharPixelData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
    case 7:
    case 8:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRGBACharPixelData");
  return nullptr;
}


static PyObject *
PyvtkRenderWindow_GetZbufferData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

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
    float *tempr = (ap.IsBound() ?
      op->GetZbufferData(temp0, temp1, temp2, temp3) :
      op->vtkRenderWindow::GetZbufferData(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_GetZbufferData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<float> store4(2*size4);
  float *temp4 = store4.Data();
  float *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GetZbufferData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkRenderWindow::GetZbufferData(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_GetZbufferData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray"))
  {
    int tempr = (ap.IsBound() ?
      op->GetZbufferData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkRenderWindow::GetZbufferData(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindow_GetZbufferData_Methods[] = {
  {"GetZbufferData", PyvtkRenderWindow_GetZbufferData_s2, METH_VARARGS,
   "@iiiiP *f"},
  {"GetZbufferData", PyvtkRenderWindow_GetZbufferData_s3, METH_VARARGS,
   "@iiiiV *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindow_GetZbufferData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindow_GetZbufferData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkRenderWindow_GetZbufferData_s1(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetZbufferData");
  return nullptr;
}


static PyObject *
PyvtkRenderWindow_SetZbufferData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<float> store4(2*size4);
  float *temp4 = store4.Data();
  float *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->SetZbufferData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkRenderWindow::SetZbufferData(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindow_SetZbufferData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZbufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkFloatArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkFloatArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetZbufferData(temp0, temp1, temp2, temp3, temp4) :
      op->vtkRenderWindow::SetZbufferData(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindow_SetZbufferData_Methods[] = {
  {"SetZbufferData", PyvtkRenderWindow_SetZbufferData_s1, METH_VARARGS,
   "@iiiiP *f"},
  {"SetZbufferData", PyvtkRenderWindow_SetZbufferData_s2, METH_VARARGS,
   "@iiiiV *vtkFloatArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderWindow_SetZbufferData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderWindow_SetZbufferData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZbufferData");
  return nullptr;
}


static PyObject *
PyvtkRenderWindow_GetZbufferDataAtPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZbufferDataAtPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    float tempr = (ap.IsBound() ?
      op->GetZbufferDataAtPoint(temp0, temp1) :
      op->vtkRenderWindow::GetZbufferDataAtPoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetNeverRendered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeverRendered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNeverRendered() :
      op->vtkRenderWindow::GetNeverRendered());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetAbortRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbortRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAbortRender() :
      op->vtkRenderWindow::GetAbortRender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetAbortRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbortRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbortRender(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetAbortRender(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetInAbortCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInAbortCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInAbortCheck() :
      op->vtkRenderWindow::GetInAbortCheck());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetInAbortCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInAbortCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInAbortCheck(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetInAbortCheck(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_CheckAbortStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckAbortStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->CheckAbortStatus() :
      op->vtkRenderWindow::CheckAbortStatus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetEventPending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEventPending() :
      op->vtkRenderWindow::GetEventPending());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_CheckInRenderStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckInRenderStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->CheckInRenderStatus() :
      op->vtkRenderWindow::CheckInRenderStatus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_ClearInRenderStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInRenderStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearInRenderStatus();
    }
    else
    {
      op->vtkRenderWindow::ClearInRenderStatus();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetDesiredUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDesiredUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDesiredUpdateRate(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetDesiredUpdateRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetDesiredUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDesiredUpdateRate() :
      op->vtkRenderWindow::GetDesiredUpdateRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetNumberOfLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLayers() :
      op->vtkRenderWindow::GetNumberOfLayers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetNumberOfLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLayers(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetNumberOfLayers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetNumberOfLayersMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayersMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLayersMinValue() :
      op->vtkRenderWindow::GetNumberOfLayersMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetNumberOfLayersMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayersMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLayersMaxValue() :
      op->vtkRenderWindow::GetNumberOfLayersMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkRenderWindow::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetInteractor(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

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
      op->vtkRenderWindow::SetDisplayId(temp0);
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
PyvtkRenderWindow_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

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
      op->vtkRenderWindow::SetWindowId(temp0);
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
PyvtkRenderWindow_SetNextWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetNextWindowId(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetNextWindowId(temp0);
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
PyvtkRenderWindow_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

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
      op->vtkRenderWindow::SetParentId(temp0);
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
PyvtkRenderWindow_GetGenericDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericDisplayId() :
      op->vtkRenderWindow::GetGenericDisplayId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetGenericWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericWindowId() :
      op->vtkRenderWindow::GetGenericWindowId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetGenericParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericParentId() :
      op->vtkRenderWindow::GetGenericParentId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetGenericContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericContext() :
      op->vtkRenderWindow::GetGenericContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetGenericDrawable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDrawable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericDrawable() :
      op->vtkRenderWindow::GetGenericDrawable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

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
      op->vtkRenderWindow::SetWindowInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetNextWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNextWindowInfo(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetNextWindowInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetParentInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

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
      op->vtkRenderWindow::SetParentInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_InitializeFromCurrentContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeFromCurrentContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->InitializeFromCurrentContext() :
      op->vtkRenderWindow::InitializeFromCurrentContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetSharedRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSharedRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetSharedRenderWindow(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetSharedRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetSharedRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSharedRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetSharedRenderWindow() :
      op->vtkRenderWindow::GetSharedRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetPlatformSupportsRenderWindowSharing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlatformSupportsRenderWindowSharing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPlatformSupportsRenderWindowSharing() :
      op->vtkRenderWindow::GetPlatformSupportsRenderWindowSharing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_IsCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsCurrent() :
      op->vtkRenderWindow::IsCurrent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetForceMakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceMakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetForceMakeCurrent();
    }
    else
    {
      op->vtkRenderWindow::SetForceMakeCurrent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_ReportCapabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportCapabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->ReportCapabilities() :
      op->vtkRenderWindow::ReportCapabilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SupportsOpenGL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsOpenGL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->SupportsOpenGL() :
      op->vtkRenderWindow::SupportsOpenGL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_IsDirect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDirect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsDirect() :
      op->vtkRenderWindow::IsDirect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetDepthBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDepthBufferSize() :
      op->vtkRenderWindow::GetDepthBufferSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetColorBufferSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorBufferSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetColorBufferSizes(temp0) :
      op->vtkRenderWindow::GetColorBufferSizes(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetMultiSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultiSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMultiSamples(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetMultiSamples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetMultiSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMultiSamples() :
      op->vtkRenderWindow::GetMultiSamples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetStencilCapable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilCapable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStencilCapable(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetStencilCapable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetStencilCapable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencilCapable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStencilCapable() :
      op->vtkRenderWindow::GetStencilCapable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StencilCapableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StencilCapableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StencilCapableOn();
    }
    else
    {
      op->vtkRenderWindow::StencilCapableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_StencilCapableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StencilCapableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StencilCapableOff();
    }
    else
    {
      op->vtkRenderWindow::StencilCapableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetDeviceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeviceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeviceIndex(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetDeviceIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetDeviceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeviceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDeviceIndex() :
      op->vtkRenderWindow::GetDeviceIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetNumberOfDevices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDevices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDevices() :
      op->vtkRenderWindow::GetNumberOfDevices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetUseSRGBColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseSRGBColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseSRGBColorSpace() :
      op->vtkRenderWindow::GetUseSRGBColorSpace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_SetUseSRGBColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseSRGBColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseSRGBColorSpace(temp0);
    }
    else
    {
      op->vtkRenderWindow::SetUseSRGBColorSpace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_UseSRGBColorSpaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSRGBColorSpaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSRGBColorSpaceOn();
    }
    else
    {
      op->vtkRenderWindow::UseSRGBColorSpaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_UseSRGBColorSpaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseSRGBColorSpaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseSRGBColorSpaceOff();
    }
    else
    {
      op->vtkRenderWindow::UseSRGBColorSpaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetPhysicalToWorldMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhysicalToWorldMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetPhysicalToWorldMatrix(temp0);
    }
    else
    {
      op->vtkRenderWindow::GetPhysicalToWorldMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindow_GetDeviceToWorldMatrixForDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeviceToWorldMatrixForDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindow *op = static_cast<vtkRenderWindow *>(vp);

  vtkEventDataDevice temp0;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetEnumValue(temp0, "vtkEventDataDevice") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDeviceToWorldMatrixForDevice(temp0, temp1) :
      op->vtkRenderWindow::GetDeviceToWorldMatrixForDevice(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindow_Methods[] = {
  {"IsTypeOf", PyvtkRenderWindow_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderWindow_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderWindow_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRenderWindow\nC++: static vtkRenderWindow *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderWindow_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRenderWindow\nC++: vtkRenderWindow *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRenderWindow_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRenderWindow_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddRenderer", PyvtkRenderWindow_AddRenderer, METH_VARARGS,
   "AddRenderer(self, __a:vtkRenderer) -> None\nC++: virtual void AddRenderer(vtkRenderer *)\n\nAdd a renderer to the list of renderers.\n"},
  {"RemoveRenderer", PyvtkRenderWindow_RemoveRenderer, METH_VARARGS,
   "RemoveRenderer(self, __a:vtkRenderer) -> None\nC++: void RemoveRenderer(vtkRenderer *)\n\nRemove a renderer from the list of renderers.\n"},
  {"HasRenderer", PyvtkRenderWindow_HasRenderer, METH_VARARGS,
   "HasRenderer(self, __a:vtkRenderer) -> int\nC++: vtkTypeBool HasRenderer(vtkRenderer *)\n\nQuery if a renderer is in the list of renderers.\n"},
  {"GetRenderLibrary", PyvtkRenderWindow_GetRenderLibrary, METH_VARARGS,
   "GetRenderLibrary() -> str\nC++: static const char *GetRenderLibrary()\n\nWhat rendering library has the user requested\n"},
  {"GetRenderingBackend", PyvtkRenderWindow_GetRenderingBackend, METH_VARARGS,
   "GetRenderingBackend(self) -> str\nC++: virtual const char *GetRenderingBackend()\n\nWhat rendering backend has the user requested\n"},
  {"GetRenderTimer", PyvtkRenderWindow_GetRenderTimer, METH_VARARGS,
   "GetRenderTimer(self) -> vtkRenderTimerLog\nC++: virtual vtkRenderTimerLog *GetRenderTimer()\n\nGet the render timer log for this window.\n"},
  {"GetRenderers", PyvtkRenderWindow_GetRenderers, METH_VARARGS,
   "GetRenderers(self) -> vtkRendererCollection\nC++: vtkRendererCollection *GetRenderers()\n\nReturn the collection of renderers in the render window.\n"},
  {"CaptureGL2PSSpecialProps", PyvtkRenderWindow_CaptureGL2PSSpecialProps, METH_VARARGS,
   "CaptureGL2PSSpecialProps(self, specialProps:vtkCollection) -> None\nC++: void CaptureGL2PSSpecialProps(vtkCollection *specialProps)\n\nThe GL2PS exporter must handle certain props in a special way\n(e.g. text). This method performs a render and captures all\n\"GL2PS-special\" props in the specified collection. The collection\nwill contain a vtkPropCollection for each vtkRenderer in\nthis->GetRenderers(), each containing the special props rendered\nby the corresponding renderer.\n"},
  {"GetCapturingGL2PSSpecialProps", PyvtkRenderWindow_GetCapturingGL2PSSpecialProps, METH_VARARGS,
   "GetCapturingGL2PSSpecialProps(self) -> int\nC++: virtual int GetCapturingGL2PSSpecialProps()\n\nReturns true if the render process is capturing text actors.\n"},
  {"Render", PyvtkRenderWindow_Render, METH_VARARGS,
   "Render(self) -> None\nC++: void Render() override;\n\nAsk each renderer owned by this RenderWindow to render its image\nand synchronize this process.\n"},
  {"Start", PyvtkRenderWindow_Start, METH_VARARGS,
   "Start(self) -> None\nC++: virtual void Start()\n\nStart the rendering process for a frame\n"},
  {"End", PyvtkRenderWindow_End, METH_VARARGS,
   "End(self) -> None\nC++: virtual void End()\n\nUpdate the system, if needed, at end of render process\n"},
  {"Finalize", PyvtkRenderWindow_Finalize, METH_VARARGS,
   "Finalize(self) -> None\nC++: virtual void Finalize()\n\nFinalize the rendering process.\n"},
  {"Frame", PyvtkRenderWindow_Frame, METH_VARARGS,
   "Frame(self) -> None\nC++: virtual void Frame()\n\nA termination method performed at the end of the rendering\nprocess to do things like swapping buffers (if necessary) or\nsimilar actions.\n"},
  {"WaitForCompletion", PyvtkRenderWindow_WaitForCompletion, METH_VARARGS,
   "WaitForCompletion(self) -> None\nC++: virtual void WaitForCompletion()\n\nBlock the thread until the actual rendering is finished(). Useful\nfor measurement only.\n"},
  {"CopyResultFrame", PyvtkRenderWindow_CopyResultFrame, METH_VARARGS,
   "CopyResultFrame(self) -> None\nC++: virtual void CopyResultFrame()\n\nPerformed at the end of the rendering process to generate image.\nThis is typically done right before swapping buffers.\n"},
  {"MakeRenderWindowInteractor", PyvtkRenderWindow_MakeRenderWindowInteractor, METH_VARARGS,
   "MakeRenderWindowInteractor(self) -> vtkRenderWindowInteractor\nC++: virtual vtkRenderWindowInteractor *MakeRenderWindowInteractor(\n    )\n\nCreate an interactor to control renderers in this window. We need\nto know what type of interactor to create, because we might be in\nX Windows or MS Windows.\n"},
  {"HideCursor", PyvtkRenderWindow_HideCursor, METH_VARARGS,
   "HideCursor(self) -> None\nC++: virtual void HideCursor()\n\nHide or Show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\nSet cursor position in window (note that (0,0) is the lower left\ncorner).\n"},
  {"ShowCursor", PyvtkRenderWindow_ShowCursor, METH_VARARGS,
   "ShowCursor(self) -> None\nC++: virtual void ShowCursor()\n\n"},
  {"SetCursorPosition", PyvtkRenderWindow_SetCursorPosition, METH_VARARGS,
   "SetCursorPosition(self, __a:int, __b:int) -> None\nC++: virtual void SetCursorPosition(int, int)\n\n"},
  {"SetCurrentCursor", PyvtkRenderWindow_SetCurrentCursor, METH_VARARGS,
   "SetCurrentCursor(self, _arg:int) -> None\nC++: virtual void SetCurrentCursor(int _arg)\n\nChange the shape of the cursor.\n"},
  {"GetCurrentCursor", PyvtkRenderWindow_GetCurrentCursor, METH_VARARGS,
   "GetCurrentCursor(self) -> int\nC++: virtual int GetCurrentCursor()\n\n"},
  {"SetCursorFileName", PyvtkRenderWindow_SetCursorFileName, METH_VARARGS,
   "SetCursorFileName(self, _arg:str) -> None\nC++: virtual void SetCursorFileName(const char *_arg)\n\nSet/Get the full path to the custom cursor. This is used when the\ncurrent cursor is set to VTK_CURSOR_CUSTOM.\n"},
  {"GetCursorFileName", PyvtkRenderWindow_GetCursorFileName, METH_VARARGS,
   "GetCursorFileName(self) -> str\nC++: virtual char *GetCursorFileName()\n\n"},
  {"SetFullScreen", PyvtkRenderWindow_SetFullScreen, METH_VARARGS,
   "SetFullScreen(self, __a:int) -> None\nC++: virtual void SetFullScreen(vtkTypeBool)\n\nTurn on/off rendering full screen window size.\n"},
  {"GetFullScreen", PyvtkRenderWindow_GetFullScreen, METH_VARARGS,
   "GetFullScreen(self) -> int\nC++: virtual vtkTypeBool GetFullScreen()\n\n"},
  {"FullScreenOn", PyvtkRenderWindow_FullScreenOn, METH_VARARGS,
   "FullScreenOn(self) -> None\nC++: virtual void FullScreenOn()\n\n"},
  {"FullScreenOff", PyvtkRenderWindow_FullScreenOff, METH_VARARGS,
   "FullScreenOff(self) -> None\nC++: virtual void FullScreenOff()\n\n"},
  {"SetBorders", PyvtkRenderWindow_SetBorders, METH_VARARGS,
   "SetBorders(self, _arg:int) -> None\nC++: virtual void SetBorders(vtkTypeBool _arg)\n\nTurn on/off window manager borders. Typically, you shouldn't turn\nthe borders off, because that bypasses the window manager and can\ncause undesirable behavior.\n"},
  {"GetBorders", PyvtkRenderWindow_GetBorders, METH_VARARGS,
   "GetBorders(self) -> int\nC++: virtual vtkTypeBool GetBorders()\n\n"},
  {"BordersOn", PyvtkRenderWindow_BordersOn, METH_VARARGS,
   "BordersOn(self) -> None\nC++: virtual void BordersOn()\n\n"},
  {"BordersOff", PyvtkRenderWindow_BordersOff, METH_VARARGS,
   "BordersOff(self) -> None\nC++: virtual void BordersOff()\n\n"},
  {"GetStereoCapableWindow", PyvtkRenderWindow_GetStereoCapableWindow, METH_VARARGS,
   "GetStereoCapableWindow(self) -> int\nC++: virtual vtkTypeBool GetStereoCapableWindow()\n\nPrescribe that the window be created in a stereo-capable mode.\nThis method must be called before the window is realized. Default\nis off.\n"},
  {"StereoCapableWindowOn", PyvtkRenderWindow_StereoCapableWindowOn, METH_VARARGS,
   "StereoCapableWindowOn(self) -> None\nC++: virtual void StereoCapableWindowOn()\n\n"},
  {"StereoCapableWindowOff", PyvtkRenderWindow_StereoCapableWindowOff, METH_VARARGS,
   "StereoCapableWindowOff(self) -> None\nC++: virtual void StereoCapableWindowOff()\n\n"},
  {"SetStereoCapableWindow", PyvtkRenderWindow_SetStereoCapableWindow, METH_VARARGS,
   "SetStereoCapableWindow(self, capable:int) -> None\nC++: virtual void SetStereoCapableWindow(vtkTypeBool capable)\n\n"},
  {"GetStereoRender", PyvtkRenderWindow_GetStereoRender, METH_VARARGS,
   "GetStereoRender(self) -> int\nC++: virtual vtkTypeBool GetStereoRender()\n\nTurn on/off stereo rendering.\n"},
  {"SetStereoRender", PyvtkRenderWindow_SetStereoRender, METH_VARARGS,
   "SetStereoRender(self, stereo:int) -> None\nC++: void SetStereoRender(vtkTypeBool stereo)\n\n"},
  {"StereoRenderOn", PyvtkRenderWindow_StereoRenderOn, METH_VARARGS,
   "StereoRenderOn(self) -> None\nC++: virtual void StereoRenderOn()\n\n"},
  {"StereoRenderOff", PyvtkRenderWindow_StereoRenderOff, METH_VARARGS,
   "StereoRenderOff(self) -> None\nC++: virtual void StereoRenderOff()\n\n"},
  {"SetAlphaBitPlanes", PyvtkRenderWindow_SetAlphaBitPlanes, METH_VARARGS,
   "SetAlphaBitPlanes(self, _arg:int) -> None\nC++: virtual void SetAlphaBitPlanes(vtkTypeBool _arg)\n\nTurn on/off the use of alpha bitplanes.\n"},
  {"GetAlphaBitPlanes", PyvtkRenderWindow_GetAlphaBitPlanes, METH_VARARGS,
   "GetAlphaBitPlanes(self) -> int\nC++: virtual vtkTypeBool GetAlphaBitPlanes()\n\n"},
  {"AlphaBitPlanesOn", PyvtkRenderWindow_AlphaBitPlanesOn, METH_VARARGS,
   "AlphaBitPlanesOn(self) -> None\nC++: virtual void AlphaBitPlanesOn()\n\n"},
  {"AlphaBitPlanesOff", PyvtkRenderWindow_AlphaBitPlanesOff, METH_VARARGS,
   "AlphaBitPlanesOff(self) -> None\nC++: virtual void AlphaBitPlanesOff()\n\n"},
  {"SetPointSmoothing", PyvtkRenderWindow_SetPointSmoothing, METH_VARARGS,
   "SetPointSmoothing(self, _arg:int) -> None\nC++: virtual void SetPointSmoothing(vtkTypeBool _arg)\n\nTurn on/off point smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {"GetPointSmoothing", PyvtkRenderWindow_GetPointSmoothing, METH_VARARGS,
   "GetPointSmoothing(self) -> int\nC++: virtual vtkTypeBool GetPointSmoothing()\n\n"},
  {"PointSmoothingOn", PyvtkRenderWindow_PointSmoothingOn, METH_VARARGS,
   "PointSmoothingOn(self) -> None\nC++: virtual void PointSmoothingOn()\n\n"},
  {"PointSmoothingOff", PyvtkRenderWindow_PointSmoothingOff, METH_VARARGS,
   "PointSmoothingOff(self) -> None\nC++: virtual void PointSmoothingOff()\n\n"},
  {"SetLineSmoothing", PyvtkRenderWindow_SetLineSmoothing, METH_VARARGS,
   "SetLineSmoothing(self, _arg:int) -> None\nC++: virtual void SetLineSmoothing(vtkTypeBool _arg)\n\nTurn on/off line smoothing. Default is off. This must be applied\nbefore the first Render.\n"},
  {"GetLineSmoothing", PyvtkRenderWindow_GetLineSmoothing, METH_VARARGS,
   "GetLineSmoothing(self) -> int\nC++: virtual vtkTypeBool GetLineSmoothing()\n\n"},
  {"LineSmoothingOn", PyvtkRenderWindow_LineSmoothingOn, METH_VARARGS,
   "LineSmoothingOn(self) -> None\nC++: virtual void LineSmoothingOn()\n\n"},
  {"LineSmoothingOff", PyvtkRenderWindow_LineSmoothingOff, METH_VARARGS,
   "LineSmoothingOff(self) -> None\nC++: virtual void LineSmoothingOff()\n\n"},
  {"SetPolygonSmoothing", PyvtkRenderWindow_SetPolygonSmoothing, METH_VARARGS,
   "SetPolygonSmoothing(self, _arg:int) -> None\nC++: virtual void SetPolygonSmoothing(vtkTypeBool _arg)\n\nTurn on/off polygon smoothing. Default is off. This must be\napplied before the first Render.\n"},
  {"GetPolygonSmoothing", PyvtkRenderWindow_GetPolygonSmoothing, METH_VARARGS,
   "GetPolygonSmoothing(self) -> int\nC++: virtual vtkTypeBool GetPolygonSmoothing()\n\n"},
  {"PolygonSmoothingOn", PyvtkRenderWindow_PolygonSmoothingOn, METH_VARARGS,
   "PolygonSmoothingOn(self) -> None\nC++: virtual void PolygonSmoothingOn()\n\n"},
  {"PolygonSmoothingOff", PyvtkRenderWindow_PolygonSmoothingOff, METH_VARARGS,
   "PolygonSmoothingOff(self) -> None\nC++: virtual void PolygonSmoothingOff()\n\n"},
  {"GetStereoType", PyvtkRenderWindow_GetStereoType, METH_VARARGS,
   "GetStereoType(self) -> int\nC++: virtual int GetStereoType()\n\nSet/Get what type of stereo rendering to use.  CrystalEyes mode\nuses frame-sequential capabilities available in OpenGL to drive\nLCD shutter glasses and stereo projectors.  RedBlue mode is a\nsimple type of stereo for use with red-blue glasses. Anaglyph\nmode is a superset of RedBlue mode, but the color output channels\ncan be configured using the AnaglyphColorMask and the color of\nthe original image can be (somewhat) maintained using\nAnaglyphColorSaturation;  the default colors for Anaglyph mode is\nred-cyan.  Interlaced stereo mode produces a composite image\nwhere horizontal lines alternate between left and right views. \nStereoLeft and StereoRight modes choose one or the other stereo\nview.  Dresden mode is yet another stereoscopic interleaving.\nFake simply causes the window to render twice without actually\nswapping the camera from left eye to right eye. This is useful in\ncertain applications that want to emulate the rendering passes\nwithout actually rendering in stereo mode. Emulate is similar to\nFake, except that it does render left and right eye. There is no\ncompositing of the resulting images from the two eyes at the end\nof each render in this mode, hence the result onscreen will be\nthe right eye.\n"},
  {"SetStereoType", PyvtkRenderWindow_SetStereoType, METH_VARARGS,
   "SetStereoType(self, __a:int) -> None\nC++: void SetStereoType(int)\n\n"},
  {"SetStereoTypeToCrystalEyes", PyvtkRenderWindow_SetStereoTypeToCrystalEyes, METH_VARARGS,
   "SetStereoTypeToCrystalEyes(self) -> None\nC++: void SetStereoTypeToCrystalEyes()\n\n"},
  {"SetStereoTypeToRedBlue", PyvtkRenderWindow_SetStereoTypeToRedBlue, METH_VARARGS,
   "SetStereoTypeToRedBlue(self) -> None\nC++: void SetStereoTypeToRedBlue()\n\n"},
  {"SetStereoTypeToInterlaced", PyvtkRenderWindow_SetStereoTypeToInterlaced, METH_VARARGS,
   "SetStereoTypeToInterlaced(self) -> None\nC++: void SetStereoTypeToInterlaced()\n\n"},
  {"SetStereoTypeToLeft", PyvtkRenderWindow_SetStereoTypeToLeft, METH_VARARGS,
   "SetStereoTypeToLeft(self) -> None\nC++: void SetStereoTypeToLeft()\n\n"},
  {"SetStereoTypeToRight", PyvtkRenderWindow_SetStereoTypeToRight, METH_VARARGS,
   "SetStereoTypeToRight(self) -> None\nC++: void SetStereoTypeToRight()\n\n"},
  {"SetStereoTypeToDresden", PyvtkRenderWindow_SetStereoTypeToDresden, METH_VARARGS,
   "SetStereoTypeToDresden(self) -> None\nC++: void SetStereoTypeToDresden()\n\n"},
  {"SetStereoTypeToAnaglyph", PyvtkRenderWindow_SetStereoTypeToAnaglyph, METH_VARARGS,
   "SetStereoTypeToAnaglyph(self) -> None\nC++: void SetStereoTypeToAnaglyph()\n\n"},
  {"SetStereoTypeToCheckerboard", PyvtkRenderWindow_SetStereoTypeToCheckerboard, METH_VARARGS,
   "SetStereoTypeToCheckerboard(self) -> None\nC++: void SetStereoTypeToCheckerboard()\n\n"},
  {"SetStereoTypeToSplitViewportHorizontal", PyvtkRenderWindow_SetStereoTypeToSplitViewportHorizontal, METH_VARARGS,
   "SetStereoTypeToSplitViewportHorizontal(self) -> None\nC++: void SetStereoTypeToSplitViewportHorizontal()\n\n"},
  {"SetStereoTypeToFake", PyvtkRenderWindow_SetStereoTypeToFake, METH_VARARGS,
   "SetStereoTypeToFake(self) -> None\nC++: void SetStereoTypeToFake()\n\n"},
  {"SetStereoTypeToEmulate", PyvtkRenderWindow_SetStereoTypeToEmulate, METH_VARARGS,
   "SetStereoTypeToEmulate(self) -> None\nC++: void SetStereoTypeToEmulate()\n\n"},
  {"GetStereoTypeAsString", PyvtkRenderWindow_GetStereoTypeAsString, METH_VARARGS,
   "GetStereoTypeAsString(self) -> str\nC++: const char *GetStereoTypeAsString()\nGetStereoTypeAsString(type:int) -> str\nC++: static const char *GetStereoTypeAsString(int type)\n\nReturns the stereo type as a string.\n"},
  {"StereoUpdate", PyvtkRenderWindow_StereoUpdate, METH_VARARGS,
   "StereoUpdate(self) -> None\nC++: virtual void StereoUpdate()\n\nUpdate the system, if needed, due to stereo rendering. For some\nstereo methods, subclasses might need to switch some hardware\nsettings here.\n"},
  {"StereoMidpoint", PyvtkRenderWindow_StereoMidpoint, METH_VARARGS,
   "StereoMidpoint(self) -> None\nC++: virtual void StereoMidpoint()\n\nIntermediate method performs operations required between the\nrendering of the left and right eye.\n"},
  {"StereoRenderComplete", PyvtkRenderWindow_StereoRenderComplete, METH_VARARGS,
   "StereoRenderComplete(self) -> None\nC++: virtual void StereoRenderComplete()\n\nHandles work required once both views have been rendered when\nusing stereo rendering.\n"},
  {"SetAnaglyphColorSaturation", PyvtkRenderWindow_SetAnaglyphColorSaturation, METH_VARARGS,
   "SetAnaglyphColorSaturation(self, _arg:float) -> None\nC++: virtual void SetAnaglyphColorSaturation(float _arg)\n\nSet/get the anaglyph color saturation factor.  This number ranges\nfrom 0.0 to 1.0:  0.0 means that no color from the original\nobject is maintained, 1.0 means all of the color is maintained. \nThe default value is 0.65.  Too much saturation can produce\nuncomfortable 3D viewing because anaglyphs also use color to\nencode 3D.\n"},
  {"GetAnaglyphColorSaturationMinValue", PyvtkRenderWindow_GetAnaglyphColorSaturationMinValue, METH_VARARGS,
   "GetAnaglyphColorSaturationMinValue(self) -> float\nC++: virtual float GetAnaglyphColorSaturationMinValue()\n\n"},
  {"GetAnaglyphColorSaturationMaxValue", PyvtkRenderWindow_GetAnaglyphColorSaturationMaxValue, METH_VARARGS,
   "GetAnaglyphColorSaturationMaxValue(self) -> float\nC++: virtual float GetAnaglyphColorSaturationMaxValue()\n\n"},
  {"GetAnaglyphColorSaturation", PyvtkRenderWindow_GetAnaglyphColorSaturation, METH_VARARGS,
   "GetAnaglyphColorSaturation(self) -> float\nC++: virtual float GetAnaglyphColorSaturation()\n\n"},
  {"SetAnaglyphColorMask", PyvtkRenderWindow_SetAnaglyphColorMask, METH_VARARGS,
   "SetAnaglyphColorMask(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetAnaglyphColorMask(int _arg1, int _arg2)\nSetAnaglyphColorMask(self, _arg:(int, int)) -> None\nC++: void SetAnaglyphColorMask(const int _arg[2])\n\nSet/get the anaglyph color mask values.  These two numbers are\nbits mask that control which color channels of the original\nstereo images are used to produce the final anaglyph image.  The\nfirst value is the color mask for the left view, the second the\nmask for the right view.  If a bit in the mask is on for a\nparticular color for a view, that color is passed on to the final\nview; if it is not set, that channel for that view is ignored.\nThe bits are arranged as r, g, and b, so r = 4, g = 2, and b = 1.\nBy default, the first value (the left view) is set to 4, and the\nsecond value is set to 3.  That means that the red output channel\ncomes from the left view, and the green and blue values come from\nthe right view.\n"},
  {"GetAnaglyphColorMask", PyvtkRenderWindow_GetAnaglyphColorMask, METH_VARARGS,
   "GetAnaglyphColorMask(self) -> (int, int)\nC++: virtual int *GetAnaglyphColorMask()\n\n"},
  {"WindowRemap", PyvtkRenderWindow_WindowRemap, METH_VARARGS,
   "WindowRemap(self) -> None\nC++: virtual void WindowRemap()\n\nRemap the rendering window. This probably only works on UNIX\nright now. It is useful for changing properties that can't\nnormally be changed once the window is up.\n"},
  {"SetSwapBuffers", PyvtkRenderWindow_SetSwapBuffers, METH_VARARGS,
   "SetSwapBuffers(self, _arg:int) -> None\nC++: virtual void SetSwapBuffers(vtkTypeBool _arg)\n\nTurn on/off buffer swapping between images.\n"},
  {"GetSwapBuffers", PyvtkRenderWindow_GetSwapBuffers, METH_VARARGS,
   "GetSwapBuffers(self) -> int\nC++: virtual vtkTypeBool GetSwapBuffers()\n\n"},
  {"SwapBuffersOn", PyvtkRenderWindow_SwapBuffersOn, METH_VARARGS,
   "SwapBuffersOn(self) -> None\nC++: virtual void SwapBuffersOn()\n\n"},
  {"SwapBuffersOff", PyvtkRenderWindow_SwapBuffersOff, METH_VARARGS,
   "SwapBuffersOff(self) -> None\nC++: virtual void SwapBuffersOff()\n\n"},
  {"SetPixelData", PyvtkRenderWindow_SetPixelData, METH_VARARGS,
   "SetPixelData(self, __a:int, __b:int, __c:int, __d:int, __e:[int,\n    ...], __f:int, __g:int) -> int\nC++: virtual int SetPixelData(int, int, int, int, unsigned char *,\n     int, int=0)\nSetPixelData(self, __a:int, __b:int, __c:int, __d:int,\n    __e:vtkUnsignedCharArray, __f:int, __g:int) -> int\nC++: virtual int SetPixelData(int, int, int, int,\n    vtkUnsignedCharArray *, int, int=0)\n\nSet/Get the pixel data of an image, transmitted as RGBRGBRGB. The\nfront argument indicates if the front buffer should be used or\nthe back buffer. It is the caller's responsibility to delete the\nresulting array. It is very important to realize that the memory\nin this array is organized from the bottom of the window to the\ntop. The origin of the screen is in the lower left corner. The y\naxis increases as you go up the screen. So the storage of pixels\nis from left to right and from bottom to top. (x,y) is any corner\nof the rectangle. (x2,y2) is its opposite corner on the diagonal.\n"},
  {"GetRGBAPixelData", PyvtkRenderWindow_GetRGBAPixelData, METH_VARARGS,
   "GetRGBAPixelData(self, __a:int, __b:int, __c:int, __d:int,\n    __e:int, __f:int) -> Pointer\nC++: virtual float *GetRGBAPixelData(int, int, int, int, int,\n    int=0)\nGetRGBAPixelData(self, __a:int, __b:int, __c:int, __d:int,\n    __e:int, __f:vtkFloatArray, __g:int) -> int\nC++: virtual int GetRGBAPixelData(int, int, int, int, int,\n    vtkFloatArray *, int=0)\n\nSame as Get/SetPixelData except that the image also contains an\nalpha component. The image is transmitted as RGBARGBARGBA... each\nof which is a float value. The \"blend\" parameter controls whether\nthe SetRGBAPixelData method blends the data with the previous\ncontents of the frame buffer or completely replaces the frame\nbuffer data.\n"},
  {"SetRGBAPixelData", PyvtkRenderWindow_SetRGBAPixelData, METH_VARARGS,
   "SetRGBAPixelData(self, __a:int, __b:int, __c:int, __d:int,\n    __e:[float, ...], __f:int, __g:int, __h:int) -> int\nC++: virtual int SetRGBAPixelData(int, int, int, int, float *,\n    int, int=0, int=0)\nSetRGBAPixelData(self, __a:int, __b:int, __c:int, __d:int,\n    __e:vtkFloatArray, __f:int, __g:int, __h:int) -> int\nC++: virtual int SetRGBAPixelData(int, int, int, int,\n    vtkFloatArray *, int, int=0, int=0)\n\n"},
  {"ReleaseRGBAPixelData", PyvtkRenderWindow_ReleaseRGBAPixelData, METH_VARARGS,
   "ReleaseRGBAPixelData(self, __a:[float, ...]) -> None\nC++: virtual void ReleaseRGBAPixelData(float *)\n\n"},
  {"GetRGBACharPixelData", PyvtkRenderWindow_GetRGBACharPixelData, METH_VARARGS,
   "GetRGBACharPixelData(self, __a:int, __b:int, __c:int, __d:int,\n    __e:int, __f:int) -> Pointer\nC++: virtual unsigned char *GetRGBACharPixelData(int, int, int,\n    int, int, int=0)\nGetRGBACharPixelData(self, __a:int, __b:int, __c:int, __d:int,\n    __e:int, __f:vtkUnsignedCharArray, __g:int) -> int\nC++: virtual int GetRGBACharPixelData(int, int, int, int, int,\n    vtkUnsignedCharArray *, int=0)\n\n"},
  {"SetRGBACharPixelData", PyvtkRenderWindow_SetRGBACharPixelData, METH_VARARGS,
   "SetRGBACharPixelData(self, __a:int, __b:int, __c:int, __d:int,\n    __e:[int, ...], __f:int, __g:int, __h:int) -> int\nC++: virtual int SetRGBACharPixelData(int, int, int, int,\n    unsigned char *, int, int=0, int=0)\nSetRGBACharPixelData(self, __a:int, __b:int, __c:int, __d:int,\n    __e:vtkUnsignedCharArray, __f:int, __g:int, __h:int) -> int\nC++: virtual int SetRGBACharPixelData(int, int, int, int,\n    vtkUnsignedCharArray *, int, int=0, int=0)\n\n"},
  {"GetZbufferData", PyvtkRenderWindow_GetZbufferData, METH_VARARGS,
   "GetZbufferData(self, __a:int, __b:int, __c:int, __d:int)\n    -> Pointer\nC++: virtual float *GetZbufferData(int, int, int, int)\nGetZbufferData(self, __a:int, __b:int, __c:int, __d:int,\n    __e:[float, ...]) -> int\nC++: virtual int GetZbufferData(int, int, int, int, float *)\nGetZbufferData(self, __a:int, __b:int, __c:int, __d:int,\n    __e:vtkFloatArray) -> int\nC++: virtual int GetZbufferData(int, int, int, int,\n    vtkFloatArray *)\n\nSet/Get the zbuffer data from the frame buffer. (x,y) is any\ncorner of the rectangle. (x2,y2) is its opposite corner on the\ndiagonal.\n"},
  {"SetZbufferData", PyvtkRenderWindow_SetZbufferData, METH_VARARGS,
   "SetZbufferData(self, __a:int, __b:int, __c:int, __d:int,\n    __e:[float, ...]) -> int\nC++: virtual int SetZbufferData(int, int, int, int, float *)\nSetZbufferData(self, __a:int, __b:int, __c:int, __d:int,\n    __e:vtkFloatArray) -> int\nC++: virtual int SetZbufferData(int, int, int, int,\n    vtkFloatArray *)\n\n"},
  {"GetZbufferDataAtPoint", PyvtkRenderWindow_GetZbufferDataAtPoint, METH_VARARGS,
   "GetZbufferDataAtPoint(self, x:int, y:int) -> float\nC++: float GetZbufferDataAtPoint(int x, int y)\n\n"},
  {"GetNeverRendered", PyvtkRenderWindow_GetNeverRendered, METH_VARARGS,
   "GetNeverRendered(self) -> int\nC++: virtual int GetNeverRendered()\n\nThis flag is set if the window hasn't rendered since it was\ncreated\n"},
  {"GetAbortRender", PyvtkRenderWindow_GetAbortRender, METH_VARARGS,
   "GetAbortRender(self) -> int\nC++: virtual int GetAbortRender()\n\nThis is a flag that can be set to interrupt a rendering that is\nin progress.\n"},
  {"SetAbortRender", PyvtkRenderWindow_SetAbortRender, METH_VARARGS,
   "SetAbortRender(self, _arg:int) -> None\nC++: virtual void SetAbortRender(int _arg)\n\n"},
  {"GetInAbortCheck", PyvtkRenderWindow_GetInAbortCheck, METH_VARARGS,
   "GetInAbortCheck(self) -> int\nC++: virtual int GetInAbortCheck()\n\n"},
  {"SetInAbortCheck", PyvtkRenderWindow_SetInAbortCheck, METH_VARARGS,
   "SetInAbortCheck(self, _arg:int) -> None\nC++: virtual void SetInAbortCheck(int _arg)\n\n"},
  {"CheckAbortStatus", PyvtkRenderWindow_CheckAbortStatus, METH_VARARGS,
   "CheckAbortStatus(self) -> int\nC++: virtual int CheckAbortStatus()\n\n"},
  {"GetEventPending", PyvtkRenderWindow_GetEventPending, METH_VARARGS,
   "GetEventPending(self) -> int\nC++: virtual vtkTypeBool GetEventPending()\n\nCheck to see if a mouse button has been pressed.  All other\nevents are ignored by this method.  Ideally, you want to abort\nthe render on any event which causes the DesiredUpdateRate to\nswitch from a high-quality rate to a more interactive rate.\n"},
  {"CheckInRenderStatus", PyvtkRenderWindow_CheckInRenderStatus, METH_VARARGS,
   "CheckInRenderStatus(self) -> int\nC++: virtual int CheckInRenderStatus()\n\nAre we rendering at the moment\n"},
  {"ClearInRenderStatus", PyvtkRenderWindow_ClearInRenderStatus, METH_VARARGS,
   "ClearInRenderStatus(self) -> None\nC++: virtual void ClearInRenderStatus()\n\nClear status (after an exception was thrown for example)\n"},
  {"SetDesiredUpdateRate", PyvtkRenderWindow_SetDesiredUpdateRate, METH_VARARGS,
   "SetDesiredUpdateRate(self, __a:float) -> None\nC++: virtual void SetDesiredUpdateRate(double)\n\nSet/Get the desired update rate. This is used with the\nvtkLODActor class. When using level of detail actors you need to\nspecify what update rate you require. The LODActors then will\npick the correct resolution to meet your desired update rate in\nframes per second. A value of zero indicates that they can use\nall the time they want to.\n"},
  {"GetDesiredUpdateRate", PyvtkRenderWindow_GetDesiredUpdateRate, METH_VARARGS,
   "GetDesiredUpdateRate(self) -> float\nC++: virtual double GetDesiredUpdateRate()\n\n"},
  {"GetNumberOfLayers", PyvtkRenderWindow_GetNumberOfLayers, METH_VARARGS,
   "GetNumberOfLayers(self) -> int\nC++: virtual int GetNumberOfLayers()\n\nGet the number of layers for renderers.  Each renderer should\nhave its layer set individually.  Some algorithms iterate through\nall layers, so it is not wise to set the number of layers to be\nexorbitantly large (say bigger than 100).\n"},
  {"SetNumberOfLayers", PyvtkRenderWindow_SetNumberOfLayers, METH_VARARGS,
   "SetNumberOfLayers(self, _arg:int) -> None\nC++: virtual void SetNumberOfLayers(int _arg)\n\n"},
  {"GetNumberOfLayersMinValue", PyvtkRenderWindow_GetNumberOfLayersMinValue, METH_VARARGS,
   "GetNumberOfLayersMinValue(self) -> int\nC++: virtual int GetNumberOfLayersMinValue()\n\n"},
  {"GetNumberOfLayersMaxValue", PyvtkRenderWindow_GetNumberOfLayersMaxValue, METH_VARARGS,
   "GetNumberOfLayersMaxValue(self) -> int\nC++: virtual int GetNumberOfLayersMaxValue()\n\n"},
  {"GetInteractor", PyvtkRenderWindow_GetInteractor, METH_VARARGS,
   "GetInteractor(self) -> vtkRenderWindowInteractor\nC++: virtual vtkRenderWindowInteractor *GetInteractor()\n\nGet the interactor associated with this render window\n"},
  {"SetInteractor", PyvtkRenderWindow_SetInteractor, METH_VARARGS,
   "SetInteractor(self, __a:vtkRenderWindowInteractor) -> None\nC++: virtual void SetInteractor(vtkRenderWindowInteractor *)\n\nSet the interactor to the render window\n"},
  {"SetDisplayId", PyvtkRenderWindow_SetDisplayId, METH_VARARGS,
   "SetDisplayId(self, __a:Pointer) -> None\nC++: void SetDisplayId(void *) override;\n\nDummy stubs for vtkWindow API.\n"},
  {"SetWindowId", PyvtkRenderWindow_SetWindowId, METH_VARARGS,
   "SetWindowId(self, __a:Pointer) -> None\nC++: void SetWindowId(void *) override;\n\n"},
  {"SetNextWindowId", PyvtkRenderWindow_SetNextWindowId, METH_VARARGS,
   "SetNextWindowId(self, __a:Pointer) -> None\nC++: virtual void SetNextWindowId(void *)\n\n"},
  {"SetParentId", PyvtkRenderWindow_SetParentId, METH_VARARGS,
   "SetParentId(self, __a:Pointer) -> None\nC++: void SetParentId(void *) override;\n\n"},
  {"GetGenericDisplayId", PyvtkRenderWindow_GetGenericDisplayId, METH_VARARGS,
   "GetGenericDisplayId(self) -> Pointer\nC++: void *GetGenericDisplayId() override;\n\n"},
  {"GetGenericWindowId", PyvtkRenderWindow_GetGenericWindowId, METH_VARARGS,
   "GetGenericWindowId(self) -> Pointer\nC++: void *GetGenericWindowId() override;\n\n"},
  {"GetGenericParentId", PyvtkRenderWindow_GetGenericParentId, METH_VARARGS,
   "GetGenericParentId(self) -> Pointer\nC++: void *GetGenericParentId() override;\n\n"},
  {"GetGenericContext", PyvtkRenderWindow_GetGenericContext, METH_VARARGS,
   "GetGenericContext(self) -> Pointer\nC++: void *GetGenericContext() override;\n\n"},
  {"GetGenericDrawable", PyvtkRenderWindow_GetGenericDrawable, METH_VARARGS,
   "GetGenericDrawable(self) -> Pointer\nC++: void *GetGenericDrawable() override;\n\n"},
  {"SetWindowInfo", PyvtkRenderWindow_SetWindowInfo, METH_VARARGS,
   "SetWindowInfo(self, __a:str) -> None\nC++: void SetWindowInfo(const char *) override;\n\n"},
  {"SetNextWindowInfo", PyvtkRenderWindow_SetNextWindowInfo, METH_VARARGS,
   "SetNextWindowInfo(self, __a:str) -> None\nC++: virtual void SetNextWindowInfo(const char *)\n\n"},
  {"SetParentInfo", PyvtkRenderWindow_SetParentInfo, METH_VARARGS,
   "SetParentInfo(self, __a:str) -> None\nC++: void SetParentInfo(const char *) override;\n\n"},
  {"InitializeFromCurrentContext", PyvtkRenderWindow_InitializeFromCurrentContext, METH_VARARGS,
   "InitializeFromCurrentContext(self) -> bool\nC++: virtual bool InitializeFromCurrentContext()\n\nInitialize the render window from the information associated with\nthe currently activated OpenGL context.\n"},
  {"SetSharedRenderWindow", PyvtkRenderWindow_SetSharedRenderWindow, METH_VARARGS,
   "SetSharedRenderWindow(self, __a:vtkRenderWindow) -> None\nC++: virtual void SetSharedRenderWindow(vtkRenderWindow *)\n\nSet/Get an already existing window that this window should share\ndata with if possible. This must be set after the shared render\nwindow has been created and initialized but before this window\nhas been initialized. Not all platforms support data sharing.\n"},
  {"GetSharedRenderWindow", PyvtkRenderWindow_GetSharedRenderWindow, METH_VARARGS,
   "GetSharedRenderWindow(self) -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetSharedRenderWindow()\n\n"},
  {"GetPlatformSupportsRenderWindowSharing", PyvtkRenderWindow_GetPlatformSupportsRenderWindowSharing, METH_VARARGS,
   "GetPlatformSupportsRenderWindowSharing(self) -> bool\nC++: virtual bool GetPlatformSupportsRenderWindowSharing()\n\n"},
  {"IsCurrent", PyvtkRenderWindow_IsCurrent, METH_VARARGS,
   "IsCurrent(self) -> bool\nC++: virtual bool IsCurrent()\n\nTells if this window is the current graphics context for the\ncalling thread.\n"},
  {"SetForceMakeCurrent", PyvtkRenderWindow_SetForceMakeCurrent, METH_VARARGS,
   "SetForceMakeCurrent(self) -> None\nC++: virtual void SetForceMakeCurrent()\n\nIf called, allow MakeCurrent() to skip cache-check when called.\nMakeCurrent() reverts to original behavior of cache-checking on\nthe next render.\n"},
  {"ReportCapabilities", PyvtkRenderWindow_ReportCapabilities, METH_VARARGS,
   "ReportCapabilities(self) -> str\nC++: virtual const char *ReportCapabilities()\n\nGet report of capabilities for the render window\n"},
  {"SupportsOpenGL", PyvtkRenderWindow_SupportsOpenGL, METH_VARARGS,
   "SupportsOpenGL(self) -> int\nC++: virtual int SupportsOpenGL()\n\nDoes this render window support OpenGL? 0-false, 1-true\n"},
  {"IsDirect", PyvtkRenderWindow_IsDirect, METH_VARARGS,
   "IsDirect(self) -> int\nC++: virtual vtkTypeBool IsDirect()\n\nIs this render window using hardware acceleration? 0-false,\n1-true\n"},
  {"GetDepthBufferSize", PyvtkRenderWindow_GetDepthBufferSize, METH_VARARGS,
   "GetDepthBufferSize(self) -> int\nC++: virtual int GetDepthBufferSize()\n\nThis method should be defined by the subclass. How many bits of\nprecision are there in the zbuffer?\n"},
  {"GetColorBufferSizes", PyvtkRenderWindow_GetColorBufferSizes, METH_VARARGS,
   "GetColorBufferSizes(self, __a:[int, ...]) -> int\nC++: virtual int GetColorBufferSizes(int *)\n\nGet the size of the color buffer. Returns 0 if not able to\ndetermine otherwise sets R G B and A into buffer.\n"},
  {"SetMultiSamples", PyvtkRenderWindow_SetMultiSamples, METH_VARARGS,
   "SetMultiSamples(self, __a:int) -> None\nC++: virtual void SetMultiSamples(int)\n\nSet / Get the number of multisamples to use for hardware\nantialiasing. A value of 1 will be set to 0.\n"},
  {"GetMultiSamples", PyvtkRenderWindow_GetMultiSamples, METH_VARARGS,
   "GetMultiSamples(self) -> int\nC++: virtual int GetMultiSamples()\n\n"},
  {"SetStencilCapable", PyvtkRenderWindow_SetStencilCapable, METH_VARARGS,
   "SetStencilCapable(self, _arg:int) -> None\nC++: virtual void SetStencilCapable(vtkTypeBool _arg)\n\nSet / Get the availability of the stencil buffer.\n"},
  {"GetStencilCapable", PyvtkRenderWindow_GetStencilCapable, METH_VARARGS,
   "GetStencilCapable(self) -> int\nC++: virtual vtkTypeBool GetStencilCapable()\n\n"},
  {"StencilCapableOn", PyvtkRenderWindow_StencilCapableOn, METH_VARARGS,
   "StencilCapableOn(self) -> None\nC++: virtual void StencilCapableOn()\n\n"},
  {"StencilCapableOff", PyvtkRenderWindow_StencilCapableOff, METH_VARARGS,
   "StencilCapableOff(self) -> None\nC++: virtual void StencilCapableOff()\n\n"},
  {"SetDeviceIndex", PyvtkRenderWindow_SetDeviceIndex, METH_VARARGS,
   "SetDeviceIndex(self, _arg:int) -> None\nC++: virtual void SetDeviceIndex(int _arg)\n\nIf there are several graphics card installed on a system, this\nindex can be used to specify which card you want to render to.\nthe default is 0. This may not work on all derived render window\nand it may need to be set before the first render.\n"},
  {"GetDeviceIndex", PyvtkRenderWindow_GetDeviceIndex, METH_VARARGS,
   "GetDeviceIndex(self) -> int\nC++: virtual int GetDeviceIndex()\n\n"},
  {"GetNumberOfDevices", PyvtkRenderWindow_GetNumberOfDevices, METH_VARARGS,
   "GetNumberOfDevices(self) -> int\nC++: virtual int GetNumberOfDevices()\n\nReturns the number of devices (graphics cards) on a system. This\nmay not work on all derived render windows.\n"},
  {"GetUseSRGBColorSpace", PyvtkRenderWindow_GetUseSRGBColorSpace, METH_VARARGS,
   "GetUseSRGBColorSpace(self) -> bool\nC++: virtual bool GetUseSRGBColorSpace()\n\nSet/Get if we want this window to use the sRGB color space. Some\nhardware/drivers do not fully support this.\n"},
  {"SetUseSRGBColorSpace", PyvtkRenderWindow_SetUseSRGBColorSpace, METH_VARARGS,
   "SetUseSRGBColorSpace(self, _arg:bool) -> None\nC++: virtual void SetUseSRGBColorSpace(bool _arg)\n\n"},
  {"UseSRGBColorSpaceOn", PyvtkRenderWindow_UseSRGBColorSpaceOn, METH_VARARGS,
   "UseSRGBColorSpaceOn(self) -> None\nC++: virtual void UseSRGBColorSpaceOn()\n\n"},
  {"UseSRGBColorSpaceOff", PyvtkRenderWindow_UseSRGBColorSpaceOff, METH_VARARGS,
   "UseSRGBColorSpaceOff(self) -> None\nC++: virtual void UseSRGBColorSpaceOff()\n\n"},
  {"GetPhysicalToWorldMatrix", PyvtkRenderWindow_GetPhysicalToWorldMatrix, METH_VARARGS,
   "GetPhysicalToWorldMatrix(self, matrix:vtkMatrix4x4) -> None\nC++: virtual void GetPhysicalToWorldMatrix(vtkMatrix4x4 *matrix)\n\nGet physical to world transform matrix. Some subclasses may\ndefine a Physical coordinate system such as in VR. This method\nprovides access to the matrix mapping that space to world\ncoordinates.\n"},
  {"GetDeviceToWorldMatrixForDevice", PyvtkRenderWindow_GetDeviceToWorldMatrixForDevice, METH_VARARGS,
   "GetDeviceToWorldMatrixForDevice(self, device:vtkEventDataDevice,\n    deviceToWorldMatrix:vtkMatrix4x4) -> bool\nC++: virtual bool GetDeviceToWorldMatrixForDevice(\n    vtkEventDataDevice device, vtkMatrix4x4 *deviceToWorldMatrix)\n\nStore in deviceToWorldMatrix the matrix that goes from device\ncoordinates to world coordinates. e.g. if you push 0,0,0,1\nthrough this matrix you will get the location of the device in\nworld coordinates. Return true if the query is valid, else false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRenderWindow_Doc =
  "vtkRenderWindow - create a window for renderers to draw into\n\n"
  "Superclass: vtkWindow\n\n"
  "vtkRenderWindow is an abstract object to specify the behavior of a\n"
  "rendering window. A rendering window is a window in a graphical user\n"
  "interface where renderers draw their images. Methods are provided to\n"
  "synchronize the rendering process, set window size, and control\n"
  "double buffering.  The window also allows rendering in stereo.  The\n"
  "interlaced render stereo type is for output to a VRex stereo\n"
  "projector.  All of the odd horizontal lines are from the left eye,\n"
  "and the even lines are from the right eye.  The user has to make the\n"
  "render window aligned with the VRex projector, or the eye will be\n"
  "swapped.\n\n"
  "@warning\n"
  "In VTK versions 4 and later, the vtkWindowToImageFilter class is part\n"
  "of the canonical way to output an image of a window to a file\n"
  "(replacing the obsolete SaveImageAsPPM method for vtkRenderWindows\n"
  "that existed in 3.2 and earlier).  Connect one of these filters to\n"
  "the output of the window, and filter's output to a writer such as\n"
  "vtkPNGWriter.\n\n"
  "@sa\n"
  "vtkRenderer vtkRenderWindowInteractor vtkWindowToImageFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRenderWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkRenderWindow", // tp_name
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
  PyvtkRenderWindow_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderWindow_StaticNew()
{
  return vtkRenderWindow::New();
}

PyObject *PyvtkRenderWindow_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRenderWindow_Type, PyvtkRenderWindow_Methods,
    "vtkRenderWindow",
 &PyvtkRenderWindow_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkWindow");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRenderWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderWindow", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 23; c++)
  {
    static const struct { const char *name; int value; }
      constants[23] = {
        { "VTK_STEREO_CRYSTAL_EYES", 1 },
        { "VTK_STEREO_RED_BLUE", 2 },
        { "VTK_STEREO_INTERLACED", 3 },
        { "VTK_STEREO_LEFT", 4 },
        { "VTK_STEREO_RIGHT", 5 },
        { "VTK_STEREO_DRESDEN", 6 },
        { "VTK_STEREO_ANAGLYPH", 7 },
        { "VTK_STEREO_CHECKERBOARD", 8 },
        { "VTK_STEREO_SPLITVIEWPORT_HORIZONTAL", 9 },
        { "VTK_STEREO_FAKE", 10 },
        { "VTK_STEREO_EMULATE", 11 },
        { "VTK_CURSOR_DEFAULT", 0 },
        { "VTK_CURSOR_ARROW", 1 },
        { "VTK_CURSOR_SIZENE", 2 },
        { "VTK_CURSOR_SIZENW", 3 },
        { "VTK_CURSOR_SIZESW", 4 },
        { "VTK_CURSOR_SIZESE", 5 },
        { "VTK_CURSOR_SIZENS", 6 },
        { "VTK_CURSOR_SIZEWE", 7 },
        { "VTK_CURSOR_SIZEALL", 8 },
        { "VTK_CURSOR_HAND", 9 },
        { "VTK_CURSOR_CROSSHAIR", 10 },
        { "VTK_CURSOR_CUSTOM", 11 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

