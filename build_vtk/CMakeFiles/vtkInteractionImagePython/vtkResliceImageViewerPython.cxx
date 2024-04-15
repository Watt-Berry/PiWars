// python wrapper for vtkResliceImageViewer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkResliceImageViewer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResliceImageViewer(PyObject *dict); }
extern "C" { PyObject *PyvtkResliceImageViewer_ClassNew(); }

#ifndef DECLARED_PyvtkImageViewer2_ClassNew
extern "C" { PyObject *PyvtkImageViewer2_ClassNew(); }
#define DECLARED_PyvtkImageViewer2_ClassNew
#endif

static PyObject *
PyvtkResliceImageViewer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResliceImageViewer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceImageViewer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResliceImageViewer *tempr = vtkResliceImageViewer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceImageViewer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceImageViewer::NewInstance());

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
PyvtkResliceImageViewer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkResliceImageViewer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkResliceImageViewer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkResliceImageViewer::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkResliceImageViewer::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0);
    }
    else
    {
      op->vtkResliceImageViewer::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorWindow(temp0);
    }
    else
    {
      op->vtkResliceImageViewer::SetColorWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorLevel(temp0);
    }
    else
    {
      op->vtkResliceImageViewer::SetColorLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetResliceCursorWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceCursorWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceCursorWidget *tempr = (ap.IsBound() ?
      op->GetResliceCursorWidget() :
      op->vtkResliceImageViewer::GetResliceCursorWidget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetResliceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResliceMode() :
      op->vtkResliceImageViewer::GetResliceMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetResliceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResliceMode(temp0);
    }
    else
    {
      op->vtkResliceImageViewer::SetResliceMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetResliceModeToAxisAligned(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceModeToAxisAligned");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResliceModeToAxisAligned();
    }
    else
    {
      op->vtkResliceImageViewer::SetResliceModeToAxisAligned();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetResliceModeToOblique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceModeToOblique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResliceModeToOblique();
    }
    else
    {
      op->vtkResliceImageViewer::SetResliceModeToOblique();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetResliceCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceCursor *tempr = (ap.IsBound() ?
      op->GetResliceCursor() :
      op->vtkResliceImageViewer::GetResliceCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetResliceCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  vtkResliceCursor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkResliceCursor"))
  {
    if (ap.IsBound())
    {
      op->SetResliceCursor(temp0);
    }
    else
    {
      op->vtkResliceImageViewer::SetResliceCursor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkResliceImageViewer::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkResliceImageViewer::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetThickMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThickMode(temp0);
    }
    else
    {
      op->vtkResliceImageViewer::SetThickMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetThickMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThickMode() :
      op->vtkResliceImageViewer::GetThickMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkResliceImageViewer::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBoundedPlanePointPlacer *tempr = (ap.IsBound() ?
      op->GetPointPlacer() :
      op->vtkResliceImageViewer::GetPointPlacer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetMeasurements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasurements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceImageViewerMeasurements *tempr = (ap.IsBound() ?
      op->GetMeasurements() :
      op->vtkResliceImageViewer::GetMeasurements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkResliceImageViewer::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetSliceScrollOnMouseWheel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceScrollOnMouseWheel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceScrollOnMouseWheel(temp0);
    }
    else
    {
      op->vtkResliceImageViewer::SetSliceScrollOnMouseWheel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetSliceScrollOnMouseWheel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceScrollOnMouseWheel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceScrollOnMouseWheel() :
      op->vtkResliceImageViewer::GetSliceScrollOnMouseWheel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SliceScrollOnMouseWheelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceScrollOnMouseWheelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceScrollOnMouseWheelOn();
    }
    else
    {
      op->vtkResliceImageViewer::SliceScrollOnMouseWheelOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SliceScrollOnMouseWheelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceScrollOnMouseWheelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceScrollOnMouseWheelOff();
    }
    else
    {
      op->vtkResliceImageViewer::SliceScrollOnMouseWheelOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_SetSliceScrollFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceScrollFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceScrollFactor(temp0);
    }
    else
    {
      op->vtkResliceImageViewer::SetSliceScrollFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_GetSliceScrollFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceScrollFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSliceScrollFactor() :
      op->vtkResliceImageViewer::GetSliceScrollFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceImageViewer_IncrementSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncrementSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceImageViewer *op = static_cast<vtkResliceImageViewer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->IncrementSlice(temp0);
    }
    else
    {
      op->vtkResliceImageViewer::IncrementSlice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkResliceImageViewer_Methods[] = {
  {"IsTypeOf", PyvtkResliceImageViewer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkResliceImageViewer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkResliceImageViewer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkResliceImageViewer\nC++: static vtkResliceImageViewer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkResliceImageViewer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkResliceImageViewer\nC++: vtkResliceImageViewer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkResliceImageViewer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkResliceImageViewer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Render", PyvtkResliceImageViewer_Render, METH_VARARGS,
   "Render(self) -> None\nC++: void Render() override;\n\nRender the resulting image.\n"},
  {"SetInputData", PyvtkResliceImageViewer_SetInputData, METH_VARARGS,
   "SetInputData(self, in_:vtkImageData) -> None\nC++: void SetInputData(vtkImageData *in) override;\n\nSet/Get the input image to the viewer.\n"},
  {"SetInputConnection", PyvtkResliceImageViewer_SetInputConnection, METH_VARARGS,
   "SetInputConnection(self, input:vtkAlgorithmOutput) -> None\nC++: void SetInputConnection(vtkAlgorithmOutput *input) override;\n\n"},
  {"SetColorWindow", PyvtkResliceImageViewer_SetColorWindow, METH_VARARGS,
   "SetColorWindow(self, s:float) -> None\nC++: void SetColorWindow(double s) override;\n\nSet window and level for mapping pixels to colors.\n"},
  {"SetColorLevel", PyvtkResliceImageViewer_SetColorLevel, METH_VARARGS,
   "SetColorLevel(self, s:float) -> None\nC++: void SetColorLevel(double s) override;\n\n"},
  {"GetResliceCursorWidget", PyvtkResliceImageViewer_GetResliceCursorWidget, METH_VARARGS,
   "GetResliceCursorWidget(self) -> vtkResliceCursorWidget\nC++: virtual vtkResliceCursorWidget *GetResliceCursorWidget()\n\nGet the internal render window, renderer, image actor, and image\nmap instances.\n"},
  {"GetResliceMode", PyvtkResliceImageViewer_GetResliceMode, METH_VARARGS,
   "GetResliceMode(self) -> int\nC++: virtual int GetResliceMode()\n\n"},
  {"SetResliceMode", PyvtkResliceImageViewer_SetResliceMode, METH_VARARGS,
   "SetResliceMode(self, resliceMode:int) -> None\nC++: virtual void SetResliceMode(int resliceMode)\n\n"},
  {"SetResliceModeToAxisAligned", PyvtkResliceImageViewer_SetResliceModeToAxisAligned, METH_VARARGS,
   "SetResliceModeToAxisAligned(self) -> None\nC++: virtual void SetResliceModeToAxisAligned()\n\n"},
  {"SetResliceModeToOblique", PyvtkResliceImageViewer_SetResliceModeToOblique, METH_VARARGS,
   "SetResliceModeToOblique(self) -> None\nC++: virtual void SetResliceModeToOblique()\n\n"},
  {"GetResliceCursor", PyvtkResliceImageViewer_GetResliceCursor, METH_VARARGS,
   "GetResliceCursor(self) -> vtkResliceCursor\nC++: vtkResliceCursor *GetResliceCursor()\n\nSet/Get the reslice cursor.\n"},
  {"SetResliceCursor", PyvtkResliceImageViewer_SetResliceCursor, METH_VARARGS,
   "SetResliceCursor(self, rc:vtkResliceCursor) -> None\nC++: void SetResliceCursor(vtkResliceCursor *rc)\n\n"},
  {"SetLookupTable", PyvtkResliceImageViewer_SetLookupTable, METH_VARARGS,
   "SetLookupTable(self, __a:vtkScalarsToColors) -> None\nC++: virtual void SetLookupTable(vtkScalarsToColors *)\n\nSet the lookup table\n"},
  {"GetLookupTable", PyvtkResliceImageViewer_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\n"},
  {"SetThickMode", PyvtkResliceImageViewer_SetThickMode, METH_VARARGS,
   "SetThickMode(self, __a:int) -> None\nC++: virtual void SetThickMode(int)\n\nSwitch to / from thick mode\n"},
  {"GetThickMode", PyvtkResliceImageViewer_GetThickMode, METH_VARARGS,
   "GetThickMode(self) -> int\nC++: virtual int GetThickMode()\n\n"},
  {"Reset", PyvtkResliceImageViewer_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: virtual void Reset()\n\nReset all views back to initial state\n"},
  {"GetPointPlacer", PyvtkResliceImageViewer_GetPointPlacer, METH_VARARGS,
   "GetPointPlacer(self) -> vtkBoundedPlanePointPlacer\nC++: virtual vtkBoundedPlanePointPlacer *GetPointPlacer()\n\nGet the point placer.\n"},
  {"GetMeasurements", PyvtkResliceImageViewer_GetMeasurements, METH_VARARGS,
   "GetMeasurements(self) -> vtkResliceImageViewerMeasurements\nC++: virtual vtkResliceImageViewerMeasurements *GetMeasurements()\n\nGet the measurements manager\n"},
  {"GetInteractor", PyvtkResliceImageViewer_GetInteractor, METH_VARARGS,
   "GetInteractor(self) -> vtkRenderWindowInteractor\nC++: virtual vtkRenderWindowInteractor *GetInteractor()\n\nGet the render window interactor\n"},
  {"SetSliceScrollOnMouseWheel", PyvtkResliceImageViewer_SetSliceScrollOnMouseWheel, METH_VARARGS,
   "SetSliceScrollOnMouseWheel(self, _arg:int) -> None\nC++: virtual void SetSliceScrollOnMouseWheel(vtkTypeBool _arg)\n\nScroll slices on the mouse wheel ? In the case of MPR view, it\nmoves one \"normalized spacing\" in the direction of the normal to\nthe resliced plane, provided the new center will continue to lie\nwithin the volume.\n"},
  {"GetSliceScrollOnMouseWheel", PyvtkResliceImageViewer_GetSliceScrollOnMouseWheel, METH_VARARGS,
   "GetSliceScrollOnMouseWheel(self) -> int\nC++: virtual vtkTypeBool GetSliceScrollOnMouseWheel()\n\n"},
  {"SliceScrollOnMouseWheelOn", PyvtkResliceImageViewer_SliceScrollOnMouseWheelOn, METH_VARARGS,
   "SliceScrollOnMouseWheelOn(self) -> None\nC++: virtual void SliceScrollOnMouseWheelOn()\n\n"},
  {"SliceScrollOnMouseWheelOff", PyvtkResliceImageViewer_SliceScrollOnMouseWheelOff, METH_VARARGS,
   "SliceScrollOnMouseWheelOff(self) -> None\nC++: virtual void SliceScrollOnMouseWheelOff()\n\n"},
  {"SetSliceScrollFactor", PyvtkResliceImageViewer_SetSliceScrollFactor, METH_VARARGS,
   "SetSliceScrollFactor(self, _arg:float) -> None\nC++: virtual void SetSliceScrollFactor(double _arg)\n\nDefine a factor that will be applied in addition to the inter\nslice spacing when scrolling image. When the view is in axis\naligned ResliceMode, and the factor is not an integer, then the\nnew value of the slice will be rounded. Otherwise, the factor is\napplied normally. Default value is 1.0. Note that in axis aligned\nResliceMode, the factor is applied in local coordinate (i, j, k),\nwhereas in oblique ResliceMode, the factor is applied in world\ncoordinate (x, y, z)\n"},
  {"GetSliceScrollFactor", PyvtkResliceImageViewer_GetSliceScrollFactor, METH_VARARGS,
   "GetSliceScrollFactor(self) -> float\nC++: virtual double GetSliceScrollFactor()\n\n"},
  {"IncrementSlice", PyvtkResliceImageViewer_IncrementSlice, METH_VARARGS,
   "IncrementSlice(self, inc:int) -> None\nC++: virtual void IncrementSlice(int inc)\n\nIncrement/Decrement slice by 'inc' slices\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkResliceImageViewer_Doc =
  "vtkResliceImageViewer - Display an image along with a reslice cursor\n\n"
  "Superclass: vtkImageViewer2\n\n"
  "This class is similar to vtkImageViewer2. It displays the image along\n"
  "with a two cross hairs for reslicing. The cross hairs may be\n"
  "interactively manipulated and are typically used to reslice two other\n"
  "views of vtkResliceImageViewer. See QtVTKRenderWindows for an\n"
  "example. The reslice cursor is used to perform thin or thick MPR\n"
  "through data. The class can also default to the behaviour of\n"
  "vtkImageViewer2 if the Reslice mode is set to RESLICE_AXIS_ALIGNED.\n"
  "@sa\n"
  "vtkResliceCursor vtkResliceCursorWidget\n"
  "vtkResliceCursorRepresentation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkResliceImageViewer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionImage.vtkResliceImageViewer", // tp_name
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
  PyvtkResliceImageViewer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResliceImageViewer_StaticNew()
{
  return vtkResliceImageViewer::New();
}

PyObject *PyvtkResliceImageViewer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkResliceImageViewer_Type, PyvtkResliceImageViewer_Methods,
    "vtkResliceImageViewer",
 &PyvtkResliceImageViewer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageViewer2_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "RESLICE_AXIS_ALIGNED", vtkResliceImageViewer::RESLICE_AXIS_ALIGNED },
        { "RESLICE_OBLIQUE", vtkResliceImageViewer::RESLICE_OBLIQUE },
        { "SliceChangedEvent", vtkResliceImageViewer::SliceChangedEvent },
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

void PyVTKAddFile_vtkResliceImageViewer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResliceImageViewer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResliceImageViewer", o) != 0)
  {
    Py_DECREF(o);
  }

}

