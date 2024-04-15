// python wrapper for vtkImageViewer2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageViewer2.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageViewer2(PyObject *dict); }
extern "C" { PyObject *PyvtkImageViewer2_ClassNew(); }


static PyObject *
PyvtkImageViewer2_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageViewer2::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageViewer2::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageViewer2 *tempr = vtkImageViewer2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageViewer2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageViewer2::NewInstance());

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
PyvtkImageViewer2_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageViewer2::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageViewer2::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetWindowName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetWindowName() :
      op->vtkImageViewer2::GetWindowName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkImageViewer2::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageViewer2::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetSliceOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceOrientation() :
      op->vtkImageViewer2::GetSliceOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSliceOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceOrientation(temp0);
    }
    else
    {
      op->vtkImageViewer2::SetSliceOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSliceOrientationToXY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToXY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceOrientationToXY();
    }
    else
    {
      op->vtkImageViewer2::SetSliceOrientationToXY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSliceOrientationToYZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceOrientationToYZ();
    }
    else
    {
      op->vtkImageViewer2::SetSliceOrientationToYZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSliceOrientationToXZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientationToXZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceOrientationToXZ();
    }
    else
    {
      op->vtkImageViewer2::SetSliceOrientationToXZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSlice() :
      op->vtkImageViewer2::GetSlice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlice(temp0);
    }
    else
    {
      op->vtkImageViewer2::SetSlice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_UpdateDisplayExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateDisplayExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateDisplayExtent();
    }
    else
    {
      op->vtkImageViewer2::UpdateDisplayExtent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetSliceMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceMin() :
      op->vtkImageViewer2::GetSliceMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetSliceMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceMax() :
      op->vtkImageViewer2::GetSliceMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetSliceRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->GetSliceRange(temp0);
    }
    else
    {
      op->vtkImageViewer2::GetSliceRange(temp0);
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
PyvtkImageViewer2_GetSliceRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetSliceRange(temp0, temp1);
    }
    else
    {
      op->vtkImageViewer2::GetSliceRange(temp0, temp1);
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
PyvtkImageViewer2_GetSliceRange_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSliceRange() :
      op->vtkImageViewer2::GetSliceRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageViewer2_GetSliceRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageViewer2_GetSliceRange_s1(self, args);
    case 2:
      return PyvtkImageViewer2_GetSliceRange_s2(self, args);
    case 0:
      return PyvtkImageViewer2_GetSliceRange_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSliceRange");
  return nullptr;
}


static PyObject *
PyvtkImageViewer2_GetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetColorWindow() :
      op->vtkImageViewer2::GetColorWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetColorLevel() :
      op->vtkImageViewer2::GetColorLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetColorWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetColorLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetDisplayId(temp0);
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
PyvtkImageViewer2_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetWindowId(temp0);
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
PyvtkImageViewer2_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetParentId(temp0);
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
PyvtkImageViewer2_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkImageViewer2::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageViewer2_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetPosition(temp0);
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
PyvtkImageViewer2_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageViewer2_SetPosition_s1(self, args);
    case 1:
      return PyvtkImageViewer2_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkImageViewer2_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkImageViewer2::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageViewer2_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetSize(temp0);
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
PyvtkImageViewer2_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageViewer2_SetSize_s1(self, args);
    case 1:
      return PyvtkImageViewer2_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}


static PyObject *
PyvtkImageViewer2_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkImageViewer2::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkImageViewer2::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageActor *tempr = (ap.IsBound() ?
      op->GetImageActor() :
      op->vtkImageViewer2::GetImageActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMapToWindowLevelColors *tempr = (ap.IsBound() ?
      op->GetWindowLevel() :
      op->vtkImageViewer2::GetWindowLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetInteractorStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractorStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleImage *tempr = (ap.IsBound() ?
      op->GetInteractorStyle() :
      op->vtkImageViewer2::GetInteractorStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkImageViewer2::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetupInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetupInteractor(temp0);
    }
    else
    {
      op->vtkImageViewer2::SetupInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_SetOffScreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffScreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

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
      op->vtkImageViewer2::SetOffScreenRendering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_GetOffScreenRendering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffScreenRendering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOffScreenRendering() :
      op->vtkImageViewer2::GetOffScreenRendering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_OffScreenRenderingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OffScreenRenderingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OffScreenRenderingOn();
    }
    else
    {
      op->vtkImageViewer2::OffScreenRenderingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageViewer2_OffScreenRenderingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OffScreenRenderingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageViewer2 *op = static_cast<vtkImageViewer2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OffScreenRenderingOff();
    }
    else
    {
      op->vtkImageViewer2::OffScreenRenderingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageViewer2_Methods[] = {
  {"IsTypeOf", PyvtkImageViewer2_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageViewer2_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageViewer2_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageViewer2\nC++: static vtkImageViewer2 *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageViewer2_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageViewer2\nC++: vtkImageViewer2 *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageViewer2_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageViewer2_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetWindowName", PyvtkImageViewer2_GetWindowName, METH_VARARGS,
   "GetWindowName(self) -> str\nC++: virtual const char *GetWindowName()\n\nGet the name of rendering window.\n"},
  {"Render", PyvtkImageViewer2_Render, METH_VARARGS,
   "Render(self) -> None\nC++: virtual void Render()\n\nRender the resulting image.\n"},
  {"SetInputData", PyvtkImageViewer2_SetInputData, METH_VARARGS,
   "SetInputData(self, in_:vtkImageData) -> None\nC++: virtual void SetInputData(vtkImageData *in)\n\nSet/Get the input image to the viewer.\n"},
  {"GetInput", PyvtkImageViewer2_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkImageData\nC++: virtual vtkImageData *GetInput()\n\n"},
  {"SetInputConnection", PyvtkImageViewer2_SetInputConnection, METH_VARARGS,
   "SetInputConnection(self, input:vtkAlgorithmOutput) -> None\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *input)\n\n"},
  {"GetSliceOrientation", PyvtkImageViewer2_GetSliceOrientation, METH_VARARGS,
   "GetSliceOrientation(self) -> int\nC++: virtual int GetSliceOrientation()\n\n"},
  {"SetSliceOrientation", PyvtkImageViewer2_SetSliceOrientation, METH_VARARGS,
   "SetSliceOrientation(self, orientation:int) -> None\nC++: virtual void SetSliceOrientation(int orientation)\n\n"},
  {"SetSliceOrientationToXY", PyvtkImageViewer2_SetSliceOrientationToXY, METH_VARARGS,
   "SetSliceOrientationToXY(self) -> None\nC++: virtual void SetSliceOrientationToXY()\n\n"},
  {"SetSliceOrientationToYZ", PyvtkImageViewer2_SetSliceOrientationToYZ, METH_VARARGS,
   "SetSliceOrientationToYZ(self) -> None\nC++: virtual void SetSliceOrientationToYZ()\n\n"},
  {"SetSliceOrientationToXZ", PyvtkImageViewer2_SetSliceOrientationToXZ, METH_VARARGS,
   "SetSliceOrientationToXZ(self) -> None\nC++: virtual void SetSliceOrientationToXZ()\n\n"},
  {"GetSlice", PyvtkImageViewer2_GetSlice, METH_VARARGS,
   "GetSlice(self) -> int\nC++: virtual int GetSlice()\n\nSet/Get the current slice to display (depending on the\norientation this can be in X, Y or Z).\n"},
  {"SetSlice", PyvtkImageViewer2_SetSlice, METH_VARARGS,
   "SetSlice(self, s:int) -> None\nC++: virtual void SetSlice(int s)\n\n"},
  {"UpdateDisplayExtent", PyvtkImageViewer2_UpdateDisplayExtent, METH_VARARGS,
   "UpdateDisplayExtent(self) -> None\nC++: virtual void UpdateDisplayExtent()\n\nUpdate the display extent manually so that the proper slice for\nthe given orientation is displayed. It will also try to set a\nreasonable camera clipping range. This method is called\nautomatically when the Input is changed, but most of the time the\ninput of this class is likely to remain the same, i.e. connected\nto the output of a filter, or an image reader. When the input of\nthis filter or reader itself is changed, an error message might\nbe displayed since the current display extent is probably outside\nthe new whole extent. Calling this method will ensure that the\ndisplay extent is reset properly.\n"},
  {"GetSliceMin", PyvtkImageViewer2_GetSliceMin, METH_VARARGS,
   "GetSliceMin(self) -> int\nC++: virtual int GetSliceMin()\n\nReturn the minimum and maximum slice values (depending on the\norientation this can be in X, Y or Z).\n"},
  {"GetSliceMax", PyvtkImageViewer2_GetSliceMax, METH_VARARGS,
   "GetSliceMax(self) -> int\nC++: virtual int GetSliceMax()\n\n"},
  {"GetSliceRange", PyvtkImageViewer2_GetSliceRange, METH_VARARGS,
   "GetSliceRange(self, range:[int, int]) -> None\nC++: virtual void GetSliceRange(int range[2])\nGetSliceRange(self, min:int, max:int) -> None\nC++: virtual void GetSliceRange(int &min, int &max)\nGetSliceRange(self) -> Pointer\nC++: virtual int *GetSliceRange()\n\n"},
  {"GetColorWindow", PyvtkImageViewer2_GetColorWindow, METH_VARARGS,
   "GetColorWindow(self) -> float\nC++: virtual double GetColorWindow()\n\nSet window and level for mapping pixels to colors.\n"},
  {"GetColorLevel", PyvtkImageViewer2_GetColorLevel, METH_VARARGS,
   "GetColorLevel(self) -> float\nC++: virtual double GetColorLevel()\n\n"},
  {"SetColorWindow", PyvtkImageViewer2_SetColorWindow, METH_VARARGS,
   "SetColorWindow(self, s:float) -> None\nC++: virtual void SetColorWindow(double s)\n\n"},
  {"SetColorLevel", PyvtkImageViewer2_SetColorLevel, METH_VARARGS,
   "SetColorLevel(self, s:float) -> None\nC++: virtual void SetColorLevel(double s)\n\n"},
  {"SetDisplayId", PyvtkImageViewer2_SetDisplayId, METH_VARARGS,
   "SetDisplayId(self, a:Pointer) -> None\nC++: virtual void SetDisplayId(void *a)\n\nThese are here when using a Tk window.\n"},
  {"SetWindowId", PyvtkImageViewer2_SetWindowId, METH_VARARGS,
   "SetWindowId(self, a:Pointer) -> None\nC++: virtual void SetWindowId(void *a)\n\n"},
  {"SetParentId", PyvtkImageViewer2_SetParentId, METH_VARARGS,
   "SetParentId(self, a:Pointer) -> None\nC++: virtual void SetParentId(void *a)\n\n"},
  {"GetPosition", PyvtkImageViewer2_GetPosition, METH_VARARGS,
   "GetPosition(self) -> (int, int)\nC++: virtual int *GetPosition()\n\nGet the position (x and y) of the rendering window in screen\ncoordinates (in pixels).\n"},
  {"SetPosition", PyvtkImageViewer2_SetPosition, METH_VARARGS,
   "SetPosition(self, x:int, y:int) -> None\nC++: virtual void SetPosition(int x, int y)\nSetPosition(self, a:[int, int]) -> None\nC++: virtual void SetPosition(int a[2])\n\nSet the position (x and y) of the rendering window in screen\ncoordinates (in pixels). This resizes the operating system's\nview/window and redraws it.\n"},
  {"GetSize", PyvtkImageViewer2_GetSize, METH_VARARGS,
   "GetSize(self) -> (int, int)\nC++: virtual int *GetSize()\n\nGet the size (width and height) of the rendering window in screen\ncoordinates (in pixels).\n"},
  {"SetSize", PyvtkImageViewer2_SetSize, METH_VARARGS,
   "SetSize(self, width:int, height:int) -> None\nC++: virtual void SetSize(int width, int height)\nSetSize(self, a:[int, int]) -> None\nC++: virtual void SetSize(int a[2])\n\nSet the size (width and height) of the rendering window in screen\ncoordinates (in pixels). This resizes the operating system's\nview/window and redraws it.\n\nIf the size has changed, this method will fire\nvtkCommand::WindowResizeEvent.\n"},
  {"GetRenderWindow", PyvtkImageViewer2_GetRenderWindow, METH_VARARGS,
   "GetRenderWindow(self) -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nGet the internal render window, renderer, image actor, and image\nmap instances.\n"},
  {"GetRenderer", PyvtkImageViewer2_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\n"},
  {"GetImageActor", PyvtkImageViewer2_GetImageActor, METH_VARARGS,
   "GetImageActor(self) -> vtkImageActor\nC++: virtual vtkImageActor *GetImageActor()\n\n"},
  {"GetWindowLevel", PyvtkImageViewer2_GetWindowLevel, METH_VARARGS,
   "GetWindowLevel(self) -> vtkImageMapToWindowLevelColors\nC++: virtual vtkImageMapToWindowLevelColors *GetWindowLevel()\n\n"},
  {"GetInteractorStyle", PyvtkImageViewer2_GetInteractorStyle, METH_VARARGS,
   "GetInteractorStyle(self) -> vtkInteractorStyleImage\nC++: virtual vtkInteractorStyleImage *GetInteractorStyle()\n\n"},
  {"SetRenderWindow", PyvtkImageViewer2_SetRenderWindow, METH_VARARGS,
   "SetRenderWindow(self, arg:vtkRenderWindow) -> None\nC++: virtual void SetRenderWindow(vtkRenderWindow *arg)\n\nSet your own renderwindow and renderer\n"},
  {"SetRenderer", PyvtkImageViewer2_SetRenderer, METH_VARARGS,
   "SetRenderer(self, arg:vtkRenderer) -> None\nC++: virtual void SetRenderer(vtkRenderer *arg)\n\n"},
  {"SetupInteractor", PyvtkImageViewer2_SetupInteractor, METH_VARARGS,
   "SetupInteractor(self, __a:vtkRenderWindowInteractor) -> None\nC++: virtual void SetupInteractor(vtkRenderWindowInteractor *)\n\nAttach an interactor for the internal render window.\n"},
  {"SetOffScreenRendering", PyvtkImageViewer2_SetOffScreenRendering, METH_VARARGS,
   "SetOffScreenRendering(self, __a:int) -> None\nC++: virtual void SetOffScreenRendering(vtkTypeBool)\n\nCreate a window in memory instead of on the screen. This may not\nbe supported for every type of window and on some windows you may\nneed to invoke this prior to the first render.\n"},
  {"GetOffScreenRendering", PyvtkImageViewer2_GetOffScreenRendering, METH_VARARGS,
   "GetOffScreenRendering(self) -> int\nC++: virtual vtkTypeBool GetOffScreenRendering()\n\n"},
  {"OffScreenRenderingOn", PyvtkImageViewer2_OffScreenRenderingOn, METH_VARARGS,
   "OffScreenRenderingOn(self) -> None\nC++: virtual void OffScreenRenderingOn()\n\n"},
  {"OffScreenRenderingOff", PyvtkImageViewer2_OffScreenRenderingOff, METH_VARARGS,
   "OffScreenRenderingOff(self) -> None\nC++: virtual void OffScreenRenderingOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageViewer2_Doc =
  "vtkImageViewer2 - Display a 2D image.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkImageViewer2 is a convenience class for displaying a 2D image.  It\n"
  "packages up the functionality found in vtkRenderWindow, vtkRenderer,\n"
  "vtkImageActor and vtkImageMapToWindowLevelColors into a single easy\n"
  "to use class.  This class also creates an image interactor style\n"
  "(vtkInteractorStyleImage) that allows zooming and panning of images,\n"
  "and supports interactive window/level operations on the image. Note\n"
  "that vtkImageViewer2 is simply a wrapper around these classes.\n\n"
  "vtkImageViewer2 uses the 3D rendering and texture mapping engine to\n"
  "draw an image on a plane.  This allows for rapid rendering, zooming,\n"
  "and panning. The image is placed in the 3D scene at a depth based on\n"
  "the z-coordinate of the particular image slice. Each call to\n"
  "SetSlice() changes the image data (slice) displayed AND changes the\n"
  "depth of the displayed slice in the 3D scene. This can be controlled\n"
  "by the AutoAdjustCameraClippingRange ivar of the InteractorStyle\n"
  "member.\n\n"
  "It is possible to mix images and geometry, using the methods:\n\n"
  "viewer->SetInputConnection( imageSource->GetOutputPort() ); // or\n"
  "viewer->SetInputData ( image ); viewer->GetRenderer()->AddActor(\n"
  "myActor );\n\n"
  "This can be used to annotate an image with a PolyData of \"edges\" or\n"
  "or highlight sections of an image or display a 3D isosurface with a\n"
  "slice from the volume, etc. Any portions of your geometry that are in\n"
  "front of the displayed slice will be visible; any portions of your\n"
  "geometry that are behind the displayed slice will be obscured. A more\n"
  "general framework (with respect to viewing direction) for achieving\n"
  "this effect is provided by the vtkImagePlaneWidget .\n\n"
  "Note that pressing 'r' will reset the window/level and pressing\n"
  "shift+'r' or control+'r' will reset the camera.\n\n"
  "@sa\n"
  "vtkRenderWindow vtkRenderer vtkImageActor\n"
  "vtkImageMapToWindowLevelColors\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageViewer2_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionImage.vtkImageViewer2", // tp_name
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
  PyvtkImageViewer2_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageViewer2_StaticNew()
{
  return vtkImageViewer2::New();
}

PyObject *PyvtkImageViewer2_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageViewer2_Type, PyvtkImageViewer2_Methods,
    "vtkImageViewer2",
 &PyvtkImageViewer2_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "SLICE_ORIENTATION_YZ", vtkImageViewer2::SLICE_ORIENTATION_YZ },
        { "SLICE_ORIENTATION_XZ", vtkImageViewer2::SLICE_ORIENTATION_XZ },
        { "SLICE_ORIENTATION_XY", vtkImageViewer2::SLICE_ORIENTATION_XY },
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

void PyVTKAddFile_vtkImageViewer2(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageViewer2_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageViewer2", o) != 0)
  {
    Py_DECREF(o);
  }

}

