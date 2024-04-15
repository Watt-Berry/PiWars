// python wrapper for vtkRenderView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRenderView.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderView(PyObject *dict); }
extern "C" { PyObject *PyvtkRenderView_ClassNew(); }


static PyObject *
PyvtkRenderView_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderView *tempr = vtkRenderView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderView::NewInstance());

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
PyvtkRenderView_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRenderView::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRenderView::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

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
      op->vtkRenderView::SetInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkInteractorObserver *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInteractorObserver"))
  {
    if (ap.IsBound())
    {
      op->SetInteractorStyle(temp0);
    }
    else
    {
      op->vtkRenderView::SetInteractorStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_GetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorObserver *tempr = (ap.IsBound() ?
      op->GetInteractorStyle() :
      op->vtkRenderView::GetInteractorStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetRenderWindow(temp0);
    }
    else
    {
      op->vtkRenderView::SetRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionMode(temp0);
    }
    else
    {
      op->vtkRenderView::SetInteractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_GetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionMode() :
      op->vtkRenderView::GetInteractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetInteractionModeTo2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionModeTo2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionModeTo2D();
    }
    else
    {
      op->vtkRenderView::SetInteractionModeTo2D();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetInteractionModeTo3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionModeTo3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionModeTo3D();
    }
    else
    {
      op->vtkRenderView::SetInteractionModeTo3D();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkRenderView::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkViewTheme *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewTheme"))
  {
    if (ap.IsBound())
    {
      op->ApplyViewTheme(temp0);
    }
    else
    {
      op->vtkRenderView::ApplyViewTheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkRenderView::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkRenderView::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetDisplayHoverText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayHoverText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayHoverText(temp0);
    }
    else
    {
      op->vtkRenderView::SetDisplayHoverText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_GetDisplayHoverText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayHoverText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDisplayHoverText() :
      op->vtkRenderView::GetDisplayHoverText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_DisplayHoverTextOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayHoverTextOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplayHoverTextOn();
    }
    else
    {
      op->vtkRenderView::DisplayHoverTextOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_DisplayHoverTextOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayHoverTextOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplayHoverTextOff();
    }
    else
    {
      op->vtkRenderView::DisplayHoverTextOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionMode(temp0);
    }
    else
    {
      op->vtkRenderView::SetSelectionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_GetSelectionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionModeMinValue() :
      op->vtkRenderView::GetSelectionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_GetSelectionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionModeMaxValue() :
      op->vtkRenderView::GetSelectionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_GetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionMode() :
      op->vtkRenderView::GetSelectionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetSelectionModeToSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionModeToSurface();
    }
    else
    {
      op->vtkRenderView::SetSelectionModeToSurface();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetSelectionModeToFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionModeToFrustum();
    }
    else
    {
      op->vtkRenderView::SetSelectionModeToFrustum();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_AddLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->AddLabels(temp0);
    }
    else
    {
      op->vtkRenderView::AddLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_RemoveLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->RemoveLabels(temp0);
    }
    else
    {
      op->vtkRenderView::RemoveLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetIconTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  vtkTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetIconTexture(temp0);
    }
    else
    {
      op->vtkRenderView::SetIconTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_GetIconTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTexture *tempr = (ap.IsBound() ?
      op->GetIconTexture() :
      op->vtkRenderView::GetIconTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetIconSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetIconSize(temp0, temp1);
    }
    else
    {
      op->vtkRenderView::SetIconSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderView_SetIconSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetIconSize(temp0);
    }
    else
    {
      op->vtkRenderView::SetIconSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderView_SetIconSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRenderView_SetIconSize_s1(self, args);
    case 1:
      return PyvtkRenderView_SetIconSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetIconSize");
  return nullptr;
}


static PyObject *
PyvtkRenderView_GetIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetIconSize() :
      op->vtkRenderView::GetIconSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetDisplaySize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplaySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDisplaySize(temp0, temp1);
    }
    else
    {
      op->vtkRenderView::SetDisplaySize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderView_SetDisplaySize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplaySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDisplaySize(temp0);
    }
    else
    {
      op->vtkRenderView::SetDisplaySize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderView_SetDisplaySize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRenderView_SetDisplaySize_s1(self, args);
    case 1:
      return PyvtkRenderView_SetDisplaySize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDisplaySize");
  return nullptr;
}


static PyObject *
PyvtkRenderView_GetDisplaySize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplaySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDisplaySize() :
      op->vtkRenderView::GetDisplaySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderView_GetDisplaySize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplaySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetDisplaySize(temp0, temp1);
    }
    else
    {
      op->vtkRenderView::GetDisplaySize(temp0, temp1);
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
PyvtkRenderView_GetDisplaySize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderView_GetDisplaySize_s1(self, args);
    case 2:
      return PyvtkRenderView_GetDisplaySize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDisplaySize");
  return nullptr;
}


static PyObject *
PyvtkRenderView_SetLabelPlacementMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelPlacementMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelPlacementMode(temp0);
    }
    else
    {
      op->vtkRenderView::SetLabelPlacementMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_GetLabelPlacementMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPlacementMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelPlacementMode() :
      op->vtkRenderView::GetLabelPlacementMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetLabelPlacementModeToNoOverlap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelPlacementModeToNoOverlap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelPlacementModeToNoOverlap();
    }
    else
    {
      op->vtkRenderView::SetLabelPlacementModeToNoOverlap();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetLabelPlacementModeToAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelPlacementModeToAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelPlacementModeToAll();
    }
    else
    {
      op->vtkRenderView::SetLabelPlacementModeToAll();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetLabelRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelRenderMode(temp0);
    }
    else
    {
      op->vtkRenderView::SetLabelRenderMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_GetLabelRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelRenderMode() :
      op->vtkRenderView::GetLabelRenderMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetLabelRenderModeToFreetype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelRenderModeToFreetype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelRenderModeToFreetype();
    }
    else
    {
      op->vtkRenderView::SetLabelRenderModeToFreetype();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetLabelRenderModeToQt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelRenderModeToQt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelRenderModeToQt();
    }
    else
    {
      op->vtkRenderView::SetLabelRenderModeToQt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_SetRenderOnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderOnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderOnMouseMove(temp0);
    }
    else
    {
      op->vtkRenderView::SetRenderOnMouseMove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_GetRenderOnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderOnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderOnMouseMove() :
      op->vtkRenderView::GetRenderOnMouseMove());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_RenderOnMouseMoveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOnMouseMoveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderOnMouseMoveOn();
    }
    else
    {
      op->vtkRenderView::RenderOnMouseMoveOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderView_RenderOnMouseMoveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOnMouseMoveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderView *op = static_cast<vtkRenderView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderOnMouseMoveOff();
    }
    else
    {
      op->vtkRenderView::RenderOnMouseMoveOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderView_Methods[] = {
  {"IsTypeOf", PyvtkRenderView_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderView_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderView_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRenderView\nC++: static vtkRenderView *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderView_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRenderView\nC++: vtkRenderView *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRenderView_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRenderView_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInteractor", PyvtkRenderView_SetInteractor, METH_VARARGS,
   "SetInteractor(self, interactor:vtkRenderWindowInteractor) -> None\nC++: void SetInteractor(vtkRenderWindowInteractor *interactor)\n    override;\n\nThe render window interactor. Note that this requires special\nhandling in order to do correctly - see the notes in the detailed\ndescription of vtkRenderViewBase.\n"},
  {"SetInteractorStyle", PyvtkRenderView_SetInteractorStyle, METH_VARARGS,
   "SetInteractorStyle(self, style:vtkInteractorObserver) -> None\nC++: virtual void SetInteractorStyle(vtkInteractorObserver *style)\n\nThe interactor style associated with the render view.\n"},
  {"GetInteractorStyle", PyvtkRenderView_GetInteractorStyle, METH_VARARGS,
   "GetInteractorStyle(self) -> vtkInteractorObserver\nC++: virtual vtkInteractorObserver *GetInteractorStyle()\n\nGet the interactor style associated with the render view.\n"},
  {"SetRenderWindow", PyvtkRenderView_SetRenderWindow, METH_VARARGS,
   "SetRenderWindow(self, win:vtkRenderWindow) -> None\nC++: void SetRenderWindow(vtkRenderWindow *win) override;\n\nSet the render window for this view. Note that this requires\nspecial handling in order to do correctly - see the notes in the\ndetailed description of vtkRenderViewBase.\n"},
  {"SetInteractionMode", PyvtkRenderView_SetInteractionMode, METH_VARARGS,
   "SetInteractionMode(self, mode:int) -> None\nC++: void SetInteractionMode(int mode)\n\n"},
  {"GetInteractionMode", PyvtkRenderView_GetInteractionMode, METH_VARARGS,
   "GetInteractionMode(self) -> int\nC++: virtual int GetInteractionMode()\n\n"},
  {"SetInteractionModeTo2D", PyvtkRenderView_SetInteractionModeTo2D, METH_VARARGS,
   "SetInteractionModeTo2D(self) -> None\nC++: virtual void SetInteractionModeTo2D()\n\nSet the interaction mode for the view. Choices are:\nvtkRenderView::INTERACTION_MODE_2D - 2D interactor\nvtkRenderView::INTERACTION_MODE_3D - 3D interactor\n"},
  {"SetInteractionModeTo3D", PyvtkRenderView_SetInteractionModeTo3D, METH_VARARGS,
   "SetInteractionModeTo3D(self) -> None\nC++: virtual void SetInteractionModeTo3D()\n\n"},
  {"Render", PyvtkRenderView_Render, METH_VARARGS,
   "Render(self) -> None\nC++: void Render() override;\n\nUpdates the representations, then calls Render() on the render\nwindow associated with this view.\n"},
  {"ApplyViewTheme", PyvtkRenderView_ApplyViewTheme, METH_VARARGS,
   "ApplyViewTheme(self, theme:vtkViewTheme) -> None\nC++: void ApplyViewTheme(vtkViewTheme *theme) override;\n\nApplies a view theme to this view.\n"},
  {"SetTransform", PyvtkRenderView_SetTransform, METH_VARARGS,
   "SetTransform(self, transform:vtkAbstractTransform) -> None\nC++: virtual void SetTransform(vtkAbstractTransform *transform)\n\nSet the view's transform. All vtkRenderedRepresentations added to\nthis view should use this transform.\n"},
  {"GetTransform", PyvtkRenderView_GetTransform, METH_VARARGS,
   "GetTransform(self) -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform()\n\n"},
  {"SetDisplayHoverText", PyvtkRenderView_SetDisplayHoverText, METH_VARARGS,
   "SetDisplayHoverText(self, b:bool) -> None\nC++: virtual void SetDisplayHoverText(bool b)\n\nWhether the view should display hover text.\n"},
  {"GetDisplayHoverText", PyvtkRenderView_GetDisplayHoverText, METH_VARARGS,
   "GetDisplayHoverText(self) -> bool\nC++: virtual bool GetDisplayHoverText()\n\n"},
  {"DisplayHoverTextOn", PyvtkRenderView_DisplayHoverTextOn, METH_VARARGS,
   "DisplayHoverTextOn(self) -> None\nC++: virtual void DisplayHoverTextOn()\n\n"},
  {"DisplayHoverTextOff", PyvtkRenderView_DisplayHoverTextOff, METH_VARARGS,
   "DisplayHoverTextOff(self) -> None\nC++: virtual void DisplayHoverTextOff()\n\n"},
  {"SetSelectionMode", PyvtkRenderView_SetSelectionMode, METH_VARARGS,
   "SetSelectionMode(self, _arg:int) -> None\nC++: virtual void SetSelectionMode(int _arg)\n\nSets the selection mode for the render view. SURFACE selection\nuses vtkHardwareSelector to perform a selection of visible cells.\nFRUSTUM selection just creates a view frustum selection, which\nwill select everything in the frustum.\n"},
  {"GetSelectionModeMinValue", PyvtkRenderView_GetSelectionModeMinValue, METH_VARARGS,
   "GetSelectionModeMinValue(self) -> int\nC++: virtual int GetSelectionModeMinValue()\n\n"},
  {"GetSelectionModeMaxValue", PyvtkRenderView_GetSelectionModeMaxValue, METH_VARARGS,
   "GetSelectionModeMaxValue(self) -> int\nC++: virtual int GetSelectionModeMaxValue()\n\n"},
  {"GetSelectionMode", PyvtkRenderView_GetSelectionMode, METH_VARARGS,
   "GetSelectionMode(self) -> int\nC++: virtual int GetSelectionMode()\n\n"},
  {"SetSelectionModeToSurface", PyvtkRenderView_SetSelectionModeToSurface, METH_VARARGS,
   "SetSelectionModeToSurface(self) -> None\nC++: void SetSelectionModeToSurface()\n\n"},
  {"SetSelectionModeToFrustum", PyvtkRenderView_SetSelectionModeToFrustum, METH_VARARGS,
   "SetSelectionModeToFrustum(self) -> None\nC++: void SetSelectionModeToFrustum()\n\n"},
  {"AddLabels", PyvtkRenderView_AddLabels, METH_VARARGS,
   "AddLabels(self, conn:vtkAlgorithmOutput) -> None\nC++: virtual void AddLabels(vtkAlgorithmOutput *conn)\n\nAdd labels from an input connection with an associated text\nproperty. The output must be a vtkLabelHierarchy (normally the\noutput of vtkPointSetToLabelHierarchy).\n"},
  {"RemoveLabels", PyvtkRenderView_RemoveLabels, METH_VARARGS,
   "RemoveLabels(self, conn:vtkAlgorithmOutput) -> None\nC++: virtual void RemoveLabels(vtkAlgorithmOutput *conn)\n\nRemove labels from an input connection.\n"},
  {"SetIconTexture", PyvtkRenderView_SetIconTexture, METH_VARARGS,
   "SetIconTexture(self, texture:vtkTexture) -> None\nC++: virtual void SetIconTexture(vtkTexture *texture)\n\nSet the icon sheet to use for rendering icons.\n"},
  {"GetIconTexture", PyvtkRenderView_GetIconTexture, METH_VARARGS,
   "GetIconTexture(self) -> vtkTexture\nC++: virtual vtkTexture *GetIconTexture()\n\n"},
  {"SetIconSize", PyvtkRenderView_SetIconSize, METH_VARARGS,
   "SetIconSize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetIconSize(int _arg1, int _arg2)\nSetIconSize(self, _arg:(int, int)) -> None\nC++: void SetIconSize(const int _arg[2])\n\nSet the size of each icon in the icon texture.\n"},
  {"GetIconSize", PyvtkRenderView_GetIconSize, METH_VARARGS,
   "GetIconSize(self) -> (int, int)\nC++: virtual int *GetIconSize()\n\n"},
  {"SetDisplaySize", PyvtkRenderView_SetDisplaySize, METH_VARARGS,
   "SetDisplaySize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetDisplaySize(int _arg1, int _arg2)\nSetDisplaySize(self, _arg:(int, int)) -> None\nC++: void SetDisplaySize(const int _arg[2])\n\nSet the display size of the icon (which may be different from the\nicon size). By default, if this value is not set, the IconSize is\nused.\n"},
  {"GetDisplaySize", PyvtkRenderView_GetDisplaySize, METH_VARARGS,
   "GetDisplaySize(self) -> Pointer\nC++: int *GetDisplaySize()\nGetDisplaySize(self, dsx:int, dsy:int) -> None\nC++: void GetDisplaySize(int &dsx, int &dsy)\n\n"},
  {"SetLabelPlacementMode", PyvtkRenderView_SetLabelPlacementMode, METH_VARARGS,
   "SetLabelPlacementMode(self, mode:int) -> None\nC++: virtual void SetLabelPlacementMode(int mode)\n\nLabel placement mode. NO_OVERLAP uses vtkLabelPlacementMapper,\nwhich has a faster startup time and works with 2D or 3D labels.\nALL displays all labels (Warning: This may cause incredibly slow\nrender times on datasets with more than a few hundred labels).\n"},
  {"GetLabelPlacementMode", PyvtkRenderView_GetLabelPlacementMode, METH_VARARGS,
   "GetLabelPlacementMode(self) -> int\nC++: virtual int GetLabelPlacementMode()\n\n"},
  {"SetLabelPlacementModeToNoOverlap", PyvtkRenderView_SetLabelPlacementModeToNoOverlap, METH_VARARGS,
   "SetLabelPlacementModeToNoOverlap(self) -> None\nC++: virtual void SetLabelPlacementModeToNoOverlap()\n\n"},
  {"SetLabelPlacementModeToAll", PyvtkRenderView_SetLabelPlacementModeToAll, METH_VARARGS,
   "SetLabelPlacementModeToAll(self) -> None\nC++: virtual void SetLabelPlacementModeToAll()\n\n"},
  {"SetLabelRenderMode", PyvtkRenderView_SetLabelRenderMode, METH_VARARGS,
   "SetLabelRenderMode(self, mode:int) -> None\nC++: virtual void SetLabelRenderMode(int mode)\n\nLabel render mode. FREETYPE uses the freetype label rendering. QT\nuses more advanced Qt-based label rendering.\n"},
  {"GetLabelRenderMode", PyvtkRenderView_GetLabelRenderMode, METH_VARARGS,
   "GetLabelRenderMode(self) -> int\nC++: virtual int GetLabelRenderMode()\n\n"},
  {"SetLabelRenderModeToFreetype", PyvtkRenderView_SetLabelRenderModeToFreetype, METH_VARARGS,
   "SetLabelRenderModeToFreetype(self) -> None\nC++: virtual void SetLabelRenderModeToFreetype()\n\n"},
  {"SetLabelRenderModeToQt", PyvtkRenderView_SetLabelRenderModeToQt, METH_VARARGS,
   "SetLabelRenderModeToQt(self) -> None\nC++: virtual void SetLabelRenderModeToQt()\n\n"},
  {"SetRenderOnMouseMove", PyvtkRenderView_SetRenderOnMouseMove, METH_VARARGS,
   "SetRenderOnMouseMove(self, b:bool) -> None\nC++: void SetRenderOnMouseMove(bool b)\n\nWhether to render on every mouse move.\n"},
  {"GetRenderOnMouseMove", PyvtkRenderView_GetRenderOnMouseMove, METH_VARARGS,
   "GetRenderOnMouseMove(self) -> bool\nC++: virtual bool GetRenderOnMouseMove()\n\n"},
  {"RenderOnMouseMoveOn", PyvtkRenderView_RenderOnMouseMoveOn, METH_VARARGS,
   "RenderOnMouseMoveOn(self) -> None\nC++: virtual void RenderOnMouseMoveOn()\n\n"},
  {"RenderOnMouseMoveOff", PyvtkRenderView_RenderOnMouseMoveOff, METH_VARARGS,
   "RenderOnMouseMoveOff(self) -> None\nC++: virtual void RenderOnMouseMoveOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRenderView_Doc =
  "vtkRenderView - A view containing a renderer.\n\n"
  "Superclass: vtkRenderViewBase\n\n"
  "vtkRenderView is a view which contains a vtkRenderer.  You may add\n"
  "vtkActors directly to the renderer, or add certain\n"
  "vtkDataRepresentation subclasses to the renderer.  The render view\n"
  "supports drag selection with the mouse to select cells.\n\n"
  "This class is also the parent class for any more specialized view\n"
  "which uses a renderer.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRenderView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkRenderView", // tp_name
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
  PyvtkRenderView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderView_StaticNew()
{
  return vtkRenderView::New();
}

PyObject *PyvtkRenderView_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRenderView_Type, PyvtkRenderView_Methods,
    "vtkRenderView",
 &PyvtkRenderView_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkRenderViewBase");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "INTERACTION_MODE_2D", vtkRenderView::INTERACTION_MODE_2D },
        { "INTERACTION_MODE_3D", vtkRenderView::INTERACTION_MODE_3D },
        { "INTERACTION_MODE_UNKNOWN", vtkRenderView::INTERACTION_MODE_UNKNOWN },
        { "SURFACE", vtkRenderView::SURFACE },
        { "FRUSTUM", vtkRenderView::FRUSTUM },
        { "NO_OVERLAP", vtkRenderView::NO_OVERLAP },
        { "ALL", vtkRenderView::ALL },
        { "FREETYPE", vtkRenderView::FREETYPE },
        { "QT", vtkRenderView::QT },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRenderView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderView", o) != 0)
  {
    Py_DECREF(o);
  }

}

