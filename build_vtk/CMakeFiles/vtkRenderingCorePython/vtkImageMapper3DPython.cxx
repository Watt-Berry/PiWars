// python wrapper for vtkImageMapper3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageMapper3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageMapper3D(PyObject *dict); }
extern "C" { PyObject *PyvtkImageMapper3D_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractMapper3D_ClassNew
extern "C" { PyObject *PyvtkAbstractMapper3D_ClassNew(); }
#define DECLARED_PyvtkAbstractMapper3D_ClassNew
#endif

static PyObject *
PyvtkImageMapper3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageMapper3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMapper3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageMapper3D *tempr = vtkImageMapper3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMapper3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMapper3D::NewInstance());

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
PyvtkImageMapper3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageMapper3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageMapper3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkImageSlice *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkImageSlice"))
  {
    op->Render(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    op->ReleaseGraphicsResources(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

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
      op->vtkImageMapper3D::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageMapper3D::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetDataSetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSetInput() :
      op->vtkImageMapper3D::GetDataSetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetDataObjectInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetDataObjectInput() :
      op->vtkImageMapper3D::GetDataObjectInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorder(temp0);
    }
    else
    {
      op->vtkImageMapper3D::SetBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_BorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderOn();
    }
    else
    {
      op->vtkImageMapper3D::BorderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_BorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderOff();
    }
    else
    {
      op->vtkImageMapper3D::BorderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorder() :
      op->vtkImageMapper3D::GetBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackground(temp0);
    }
    else
    {
      op->vtkImageMapper3D::SetBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_BackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackgroundOn();
    }
    else
    {
      op->vtkImageMapper3D::BackgroundOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_BackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackgroundOff();
    }
    else
    {
      op->vtkImageMapper3D::BackgroundOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBackground() :
      op->vtkImageMapper3D::GetBackground());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetSliceAtFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceAtFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceAtFocalPoint(temp0);
    }
    else
    {
      op->vtkImageMapper3D::SetSliceAtFocalPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SliceAtFocalPointOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceAtFocalPointOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceAtFocalPointOn();
    }
    else
    {
      op->vtkImageMapper3D::SliceAtFocalPointOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SliceAtFocalPointOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceAtFocalPointOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceAtFocalPointOff();
    }
    else
    {
      op->vtkImageMapper3D::SliceAtFocalPointOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetSliceAtFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceAtFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceAtFocalPoint() :
      op->vtkImageMapper3D::GetSliceAtFocalPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetSliceFacesCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceFacesCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceFacesCamera(temp0);
    }
    else
    {
      op->vtkImageMapper3D::SetSliceFacesCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SliceFacesCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceFacesCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceFacesCameraOn();
    }
    else
    {
      op->vtkImageMapper3D::SliceFacesCameraOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SliceFacesCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceFacesCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceFacesCameraOff();
    }
    else
    {
      op->vtkImageMapper3D::SliceFacesCameraOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetSliceFacesCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceFacesCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceFacesCamera() :
      op->vtkImageMapper3D::GetSliceFacesCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetSlicePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetSlicePlane() :
      op->vtkImageMapper3D::GetSlicePlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetSlicePlaneInDataCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicePlaneInDataCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetSlicePlaneInDataCoords(temp0, temp1);
    }
    else
    {
      op->vtkImageMapper3D::GetSlicePlaneInDataCoords(temp0, temp1);
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
PyvtkImageMapper3D_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfThreads(temp0);
    }
    else
    {
      op->vtkImageMapper3D::SetNumberOfThreads(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetNumberOfThreadsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMinValue() :
      op->vtkImageMapper3D::GetNumberOfThreadsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetNumberOfThreadsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMaxValue() :
      op->vtkImageMapper3D::GetNumberOfThreadsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreads() :
      op->vtkImageMapper3D::GetNumberOfThreads());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_SetStreaming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStreaming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStreaming(temp0);
    }
    else
    {
      op->vtkImageMapper3D::SetStreaming(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetStreaming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStreaming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStreaming() :
      op->vtkImageMapper3D::GetStreaming());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_StreamingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StreamingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StreamingOn();
    }
    else
    {
      op->vtkImageMapper3D::StreamingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_StreamingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StreamingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StreamingOff();
    }
    else
    {
      op->vtkImageMapper3D::StreamingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper3D_GetIndexBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper3D *op = static_cast<vtkImageMapper3D *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetIndexBounds(temp0);

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

static PyMethodDef PyvtkImageMapper3D_Methods[] = {
  {"IsTypeOf", PyvtkImageMapper3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageMapper3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageMapper3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageMapper3D\nC++: static vtkImageMapper3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageMapper3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageMapper3D\nC++: vtkImageMapper3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageMapper3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageMapper3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Render", PyvtkImageMapper3D_Render, METH_VARARGS,
   "Render(self, renderer:vtkRenderer, prop:vtkImageSlice) -> None\nC++: virtual void Render(vtkRenderer *renderer,\n    vtkImageSlice *prop)\n\nThis should only be called by the renderer.\n"},
  {"ReleaseGraphicsResources", PyvtkImageMapper3D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override = 0;\n\nRelease any graphics resources that are being consumed by this\nmapper.  The parameter window is used to determine which graphic\nresources to release.\n"},
  {"SetInputData", PyvtkImageMapper3D_SetInputData, METH_VARARGS,
   "SetInputData(self, input:vtkImageData) -> None\nC++: void SetInputData(vtkImageData *input)\n\nThe input data for this mapper.\n"},
  {"GetInput", PyvtkImageMapper3D_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkImageData\nC++: vtkImageData *GetInput()\n\n"},
  {"GetDataSetInput", PyvtkImageMapper3D_GetDataSetInput, METH_VARARGS,
   "GetDataSetInput(self) -> vtkDataSet\nC++: vtkDataSet *GetDataSetInput()\n\n"},
  {"GetDataObjectInput", PyvtkImageMapper3D_GetDataObjectInput, METH_VARARGS,
   "GetDataObjectInput(self) -> vtkDataObject\nC++: vtkDataObject *GetDataObjectInput()\n\n"},
  {"SetBorder", PyvtkImageMapper3D_SetBorder, METH_VARARGS,
   "SetBorder(self, _arg:int) -> None\nC++: virtual void SetBorder(vtkTypeBool _arg)\n\nInstead of displaying the image only out to the image bounds,\ninclude a half-voxel border around the image. Within this border,\nthe image values will be extrapolated rather than interpolated.\n"},
  {"BorderOn", PyvtkImageMapper3D_BorderOn, METH_VARARGS,
   "BorderOn(self) -> None\nC++: virtual void BorderOn()\n\n"},
  {"BorderOff", PyvtkImageMapper3D_BorderOff, METH_VARARGS,
   "BorderOff(self) -> None\nC++: virtual void BorderOff()\n\n"},
  {"GetBorder", PyvtkImageMapper3D_GetBorder, METH_VARARGS,
   "GetBorder(self) -> int\nC++: virtual vtkTypeBool GetBorder()\n\n"},
  {"SetBackground", PyvtkImageMapper3D_SetBackground, METH_VARARGS,
   "SetBackground(self, _arg:int) -> None\nC++: virtual void SetBackground(vtkTypeBool _arg)\n\nInstead of rendering only to the image border, render out to the\nviewport boundary with the background color.  The background\ncolor will be the lowest color on the lookup table that is being\nused for the image.\n"},
  {"BackgroundOn", PyvtkImageMapper3D_BackgroundOn, METH_VARARGS,
   "BackgroundOn(self) -> None\nC++: virtual void BackgroundOn()\n\n"},
  {"BackgroundOff", PyvtkImageMapper3D_BackgroundOff, METH_VARARGS,
   "BackgroundOff(self) -> None\nC++: virtual void BackgroundOff()\n\n"},
  {"GetBackground", PyvtkImageMapper3D_GetBackground, METH_VARARGS,
   "GetBackground(self) -> int\nC++: virtual vtkTypeBool GetBackground()\n\n"},
  {"SetSliceAtFocalPoint", PyvtkImageMapper3D_SetSliceAtFocalPoint, METH_VARARGS,
   "SetSliceAtFocalPoint(self, _arg:int) -> None\nC++: virtual void SetSliceAtFocalPoint(vtkTypeBool _arg)\n\nAutomatically set the slice position to the camera focal point.\nThis provides a convenient way to interact with the image, since\nmost Interactors directly control the camera.\n"},
  {"SliceAtFocalPointOn", PyvtkImageMapper3D_SliceAtFocalPointOn, METH_VARARGS,
   "SliceAtFocalPointOn(self) -> None\nC++: virtual void SliceAtFocalPointOn()\n\n"},
  {"SliceAtFocalPointOff", PyvtkImageMapper3D_SliceAtFocalPointOff, METH_VARARGS,
   "SliceAtFocalPointOff(self) -> None\nC++: virtual void SliceAtFocalPointOff()\n\n"},
  {"GetSliceAtFocalPoint", PyvtkImageMapper3D_GetSliceAtFocalPoint, METH_VARARGS,
   "GetSliceAtFocalPoint(self) -> int\nC++: virtual vtkTypeBool GetSliceAtFocalPoint()\n\n"},
  {"SetSliceFacesCamera", PyvtkImageMapper3D_SetSliceFacesCamera, METH_VARARGS,
   "SetSliceFacesCamera(self, _arg:int) -> None\nC++: virtual void SetSliceFacesCamera(vtkTypeBool _arg)\n\nAutomatically set the slice orientation so that it faces the\ncamera. This provides a convenient way to interact with the\nimage, since most Interactors directly control the camera.\n"},
  {"SliceFacesCameraOn", PyvtkImageMapper3D_SliceFacesCameraOn, METH_VARARGS,
   "SliceFacesCameraOn(self) -> None\nC++: virtual void SliceFacesCameraOn()\n\n"},
  {"SliceFacesCameraOff", PyvtkImageMapper3D_SliceFacesCameraOff, METH_VARARGS,
   "SliceFacesCameraOff(self) -> None\nC++: virtual void SliceFacesCameraOff()\n\n"},
  {"GetSliceFacesCamera", PyvtkImageMapper3D_GetSliceFacesCamera, METH_VARARGS,
   "GetSliceFacesCamera(self) -> int\nC++: virtual vtkTypeBool GetSliceFacesCamera()\n\n"},
  {"GetSlicePlane", PyvtkImageMapper3D_GetSlicePlane, METH_VARARGS,
   "GetSlicePlane(self) -> vtkPlane\nC++: virtual vtkPlane *GetSlicePlane()\n\nA plane that describes what slice of the input is being rendered\nby the mapper.  This plane is in world coordinates, not data\ncoordinates.  Before using this plane, call Update or\nUpdateInformation to make sure the plane is up-to-date. These\nmethods are automatically called by Render.\n"},
  {"GetSlicePlaneInDataCoords", PyvtkImageMapper3D_GetSlicePlaneInDataCoords, METH_VARARGS,
   "GetSlicePlaneInDataCoords(self, propMatrix:vtkMatrix4x4,\n    plane:[float, float, float, float]) -> None\nC++: virtual void GetSlicePlaneInDataCoords(\n    vtkMatrix4x4 *propMatrix, double plane[4])\n\nGet the plane as a homogeneous 4-vector that gives the plane\nequation coefficients.  The prop3D matrix must be provided so\nthat the plane can be converted to data coords.\n"},
  {"SetNumberOfThreads", PyvtkImageMapper3D_SetNumberOfThreads, METH_VARARGS,
   "SetNumberOfThreads(self, _arg:int) -> None\nC++: virtual void SetNumberOfThreads(int _arg)\n\nThe number of threads to create when rendering.\n"},
  {"GetNumberOfThreadsMinValue", PyvtkImageMapper3D_GetNumberOfThreadsMinValue, METH_VARARGS,
   "GetNumberOfThreadsMinValue(self) -> int\nC++: virtual int GetNumberOfThreadsMinValue()\n\n"},
  {"GetNumberOfThreadsMaxValue", PyvtkImageMapper3D_GetNumberOfThreadsMaxValue, METH_VARARGS,
   "GetNumberOfThreadsMaxValue(self) -> int\nC++: virtual int GetNumberOfThreadsMaxValue()\n\n"},
  {"GetNumberOfThreads", PyvtkImageMapper3D_GetNumberOfThreads, METH_VARARGS,
   "GetNumberOfThreads(self) -> int\nC++: virtual int GetNumberOfThreads()\n\n"},
  {"SetStreaming", PyvtkImageMapper3D_SetStreaming, METH_VARARGS,
   "SetStreaming(self, _arg:int) -> None\nC++: virtual void SetStreaming(vtkTypeBool _arg)\n\nTurn on streaming, to pull the minimum amount of data from the\ninput. Streaming decreases the memory required to display large\nimages, since only one slice will be pulled through the input\npipeline if only one slice is mapped to the screen.  The default\nbehavior is to pull the full 3D input extent through the input\npipeline, but to do this only when the input data changes.  The\ndefault behavior results in much faster follow-up renders when\nthe input data is static.\n"},
  {"GetStreaming", PyvtkImageMapper3D_GetStreaming, METH_VARARGS,
   "GetStreaming(self) -> int\nC++: virtual vtkTypeBool GetStreaming()\n\n"},
  {"StreamingOn", PyvtkImageMapper3D_StreamingOn, METH_VARARGS,
   "StreamingOn(self) -> None\nC++: virtual void StreamingOn()\n\n"},
  {"StreamingOff", PyvtkImageMapper3D_StreamingOff, METH_VARARGS,
   "StreamingOff(self) -> None\nC++: virtual void StreamingOff()\n\n"},
  {"GetIndexBounds", PyvtkImageMapper3D_GetIndexBounds, METH_VARARGS,
   "GetIndexBounds(self, extent:[float, float, float, float, float,\n    float]) -> None\nC++: virtual void GetIndexBounds(double extent[6])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageMapper3D_Doc =
  "vtkImageMapper3D - abstract class for mapping images to the screen\n\n"
  "Superclass: vtkAbstractMapper3D\n\n"
  "vtkImageMapper3D is a mapper that will draw a 2D image, or a slice of\n"
  "a 3D image.  The slice plane can be set automatically follow the\n"
  "camera, so that it slices through the focal point and faces the\n"
  "camera.@par Thanks: Thanks to David Gobbi at the Seaman Family MR\n"
  "Centre and Dept. of Clinical Neurosciences, Foothills Medical Centre,\n"
  "Calgary, for providing this class.\n"
  "@sa\n"
  "vtkImage vtkImageProperty vtkImageResliceMapper vtkImageSliceMapper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageMapper3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkImageMapper3D", // tp_name
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
  PyvtkImageMapper3D_Doc, // tp_doc
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

PyObject *PyvtkImageMapper3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageMapper3D_Type, PyvtkImageMapper3D_Methods,
    "vtkImageMapper3D",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractMapper3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageMapper3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageMapper3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageMapper3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

