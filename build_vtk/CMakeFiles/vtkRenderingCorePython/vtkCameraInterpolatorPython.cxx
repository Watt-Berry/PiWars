// python wrapper for vtkCameraInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCameraInterpolator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCameraInterpolator(PyObject *dict); }
extern "C" { PyObject *PyvtkCameraInterpolator_ClassNew(); }


static PyObject *
PyvtkCameraInterpolator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCameraInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCameraInterpolator *tempr = vtkCameraInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCameraInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraInterpolator::NewInstance());

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
PyvtkCameraInterpolator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCameraInterpolator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCameraInterpolator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetNumberOfCameras(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCameras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCameras() :
      op->vtkCameraInterpolator::GetNumberOfCameras());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetMinimumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumT() :
      op->vtkCameraInterpolator::GetMinimumT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetMaximumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumT() :
      op->vtkCameraInterpolator::GetMaximumT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkCameraInterpolator::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_AddCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  double temp0;
  vtkCamera *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->AddCamera(temp0, temp1);
    }
    else
    {
      op->vtkCameraInterpolator::AddCamera(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_RemoveCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveCamera(temp0);
    }
    else
    {
      op->vtkCameraInterpolator::RemoveCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_InterpolateCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  double temp0;
  vtkCamera *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->InterpolateCamera(temp0, temp1);
    }
    else
    {
      op->vtkCameraInterpolator::InterpolateCamera(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationType(temp0);
    }
    else
    {
      op->vtkCameraInterpolator::SetInterpolationType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetInterpolationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMinValue() :
      op->vtkCameraInterpolator::GetInterpolationTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetInterpolationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMaxValue() :
      op->vtkCameraInterpolator::GetInterpolationTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationType() :
      op->vtkCameraInterpolator::GetInterpolationType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetInterpolationTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToLinear();
    }
    else
    {
      op->vtkCameraInterpolator::SetInterpolationTypeToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetInterpolationTypeToSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToSpline();
    }
    else
    {
      op->vtkCameraInterpolator::SetInterpolationTypeToSpline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetInterpolationTypeToManual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToManual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToManual();
    }
    else
    {
      op->vtkCameraInterpolator::SetInterpolationTypeToManual();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetPositionInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetPositionInterpolator(temp0);
    }
    else
    {
      op->vtkCameraInterpolator::SetPositionInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetPositionInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetPositionInterpolator() :
      op->vtkCameraInterpolator::GetPositionInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetFocalPointInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPointInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetFocalPointInterpolator(temp0);
    }
    else
    {
      op->vtkCameraInterpolator::SetFocalPointInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetFocalPointInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPointInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetFocalPointInterpolator() :
      op->vtkCameraInterpolator::GetFocalPointInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetViewUpInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewUpInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetViewUpInterpolator(temp0);
    }
    else
    {
      op->vtkCameraInterpolator::SetViewUpInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetViewUpInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewUpInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetViewUpInterpolator() :
      op->vtkCameraInterpolator::GetViewUpInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetViewAngleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetViewAngleInterpolator(temp0);
    }
    else
    {
      op->vtkCameraInterpolator::SetViewAngleInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetViewAngleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewAngleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetViewAngleInterpolator() :
      op->vtkCameraInterpolator::GetViewAngleInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetParallelScaleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelScaleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetParallelScaleInterpolator(temp0);
    }
    else
    {
      op->vtkCameraInterpolator::SetParallelScaleInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetParallelScaleInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelScaleInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetParallelScaleInterpolator() :
      op->vtkCameraInterpolator::GetParallelScaleInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_SetClippingRangeInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingRangeInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  vtkTupleInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTupleInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetClippingRangeInterpolator(temp0);
    }
    else
    {
      op->vtkCameraInterpolator::SetClippingRangeInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetClippingRangeInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingRangeInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTupleInterpolator *tempr = (ap.IsBound() ?
      op->GetClippingRangeInterpolator() :
      op->vtkCameraInterpolator::GetClippingRangeInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraInterpolator_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraInterpolator *op = static_cast<vtkCameraInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkCameraInterpolator::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCameraInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkCameraInterpolator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCameraInterpolator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCameraInterpolator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCameraInterpolator\nC++: static vtkCameraInterpolator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCameraInterpolator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCameraInterpolator\nC++: vtkCameraInterpolator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCameraInterpolator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCameraInterpolator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfCameras", PyvtkCameraInterpolator_GetNumberOfCameras, METH_VARARGS,
   "GetNumberOfCameras(self) -> int\nC++: int GetNumberOfCameras()\n\nReturn the number of cameras in the list of cameras.\n"},
  {"GetMinimumT", PyvtkCameraInterpolator_GetMinimumT, METH_VARARGS,
   "GetMinimumT(self) -> float\nC++: double GetMinimumT()\n\nObtain some information about the interpolation range. The\nnumbers returned are undefined if the list of cameras is empty.\n"},
  {"GetMaximumT", PyvtkCameraInterpolator_GetMaximumT, METH_VARARGS,
   "GetMaximumT(self) -> float\nC++: double GetMaximumT()\n\n"},
  {"Initialize", PyvtkCameraInterpolator_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize()\n\nClear the list of cameras.\n"},
  {"AddCamera", PyvtkCameraInterpolator_AddCamera, METH_VARARGS,
   "AddCamera(self, t:float, camera:vtkCamera) -> None\nC++: void AddCamera(double t, vtkCamera *camera)\n\nAdd another camera to the list of cameras defining the camera\nfunction. Note that using the same time t value more than once\nreplaces the previous camera value at t. At least one camera must\nbe added to define a function.\n"},
  {"RemoveCamera", PyvtkCameraInterpolator_RemoveCamera, METH_VARARGS,
   "RemoveCamera(self, t:float) -> None\nC++: void RemoveCamera(double t)\n\nDelete the camera at a particular parameter t. If there is no\ncamera defined at location t, then the method does nothing.\n"},
  {"InterpolateCamera", PyvtkCameraInterpolator_InterpolateCamera, METH_VARARGS,
   "InterpolateCamera(self, t:float, camera:vtkCamera) -> None\nC++: void InterpolateCamera(double t, vtkCamera *camera)\n\nInterpolate the list of cameras and determine a new camera (i.e.,\nfill in the camera provided). If t is outside the range of\n(min,max) values, then t is clamped to lie within this range.\n"},
  {"SetInterpolationType", PyvtkCameraInterpolator_SetInterpolationType, METH_VARARGS,
   "SetInterpolationType(self, _arg:int) -> None\nC++: virtual void SetInterpolationType(int _arg)\n\nThese are convenience methods to switch between linear and spline\ninterpolation. The methods simply forward the request for linear\nor spline interpolation to the instance variable interpolators\n(i.e., position, focal point, clipping range, orientation, etc.)\ninterpolators. Note that if the InterpolationType is set to\n\"Manual\", then the interpolators are expected to be directly\nmanipulated and this class does not forward the request for\ninterpolation type to its interpolators.\n"},
  {"GetInterpolationTypeMinValue", PyvtkCameraInterpolator_GetInterpolationTypeMinValue, METH_VARARGS,
   "GetInterpolationTypeMinValue(self) -> int\nC++: virtual int GetInterpolationTypeMinValue()\n\n"},
  {"GetInterpolationTypeMaxValue", PyvtkCameraInterpolator_GetInterpolationTypeMaxValue, METH_VARARGS,
   "GetInterpolationTypeMaxValue(self) -> int\nC++: virtual int GetInterpolationTypeMaxValue()\n\n"},
  {"GetInterpolationType", PyvtkCameraInterpolator_GetInterpolationType, METH_VARARGS,
   "GetInterpolationType(self) -> int\nC++: virtual int GetInterpolationType()\n\n"},
  {"SetInterpolationTypeToLinear", PyvtkCameraInterpolator_SetInterpolationTypeToLinear, METH_VARARGS,
   "SetInterpolationTypeToLinear(self) -> None\nC++: void SetInterpolationTypeToLinear()\n\n"},
  {"SetInterpolationTypeToSpline", PyvtkCameraInterpolator_SetInterpolationTypeToSpline, METH_VARARGS,
   "SetInterpolationTypeToSpline(self) -> None\nC++: void SetInterpolationTypeToSpline()\n\n"},
  {"SetInterpolationTypeToManual", PyvtkCameraInterpolator_SetInterpolationTypeToManual, METH_VARARGS,
   "SetInterpolationTypeToManual(self) -> None\nC++: void SetInterpolationTypeToManual()\n\n"},
  {"SetPositionInterpolator", PyvtkCameraInterpolator_SetPositionInterpolator, METH_VARARGS,
   "SetPositionInterpolator(self, __a:vtkTupleInterpolator) -> None\nC++: virtual void SetPositionInterpolator(vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the position\nportion of the camera. Note that you can modify the behavior of\nthe interpolator (linear vs spline interpolation; change spline\nbasis) by manipulating the interpolator instances directly.\n"},
  {"GetPositionInterpolator", PyvtkCameraInterpolator_GetPositionInterpolator, METH_VARARGS,
   "GetPositionInterpolator(self) -> vtkTupleInterpolator\nC++: virtual vtkTupleInterpolator *GetPositionInterpolator()\n\n"},
  {"SetFocalPointInterpolator", PyvtkCameraInterpolator_SetFocalPointInterpolator, METH_VARARGS,
   "SetFocalPointInterpolator(self, __a:vtkTupleInterpolator) -> None\nC++: virtual void SetFocalPointInterpolator(\n    vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the focal\npoint portion of the camera. Note that you can modify the\nbehavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances\ndirectly.\n"},
  {"GetFocalPointInterpolator", PyvtkCameraInterpolator_GetFocalPointInterpolator, METH_VARARGS,
   "GetFocalPointInterpolator(self) -> vtkTupleInterpolator\nC++: virtual vtkTupleInterpolator *GetFocalPointInterpolator()\n\n"},
  {"SetViewUpInterpolator", PyvtkCameraInterpolator_SetViewUpInterpolator, METH_VARARGS,
   "SetViewUpInterpolator(self, __a:vtkTupleInterpolator) -> None\nC++: virtual void SetViewUpInterpolator(vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the view up\nportion of the camera. Note that you can modify the behavior of\nthe interpolator (linear vs spline interpolation; change spline\nbasis) by manipulating the interpolator instances directly.\n"},
  {"GetViewUpInterpolator", PyvtkCameraInterpolator_GetViewUpInterpolator, METH_VARARGS,
   "GetViewUpInterpolator(self) -> vtkTupleInterpolator\nC++: virtual vtkTupleInterpolator *GetViewUpInterpolator()\n\n"},
  {"SetViewAngleInterpolator", PyvtkCameraInterpolator_SetViewAngleInterpolator, METH_VARARGS,
   "SetViewAngleInterpolator(self, __a:vtkTupleInterpolator) -> None\nC++: virtual void SetViewAngleInterpolator(vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the view angle\nportion of the camera. Note that you can modify the behavior of\nthe interpolator (linear vs spline interpolation; change spline\nbasis) by manipulating the interpolator instances directly.\n"},
  {"GetViewAngleInterpolator", PyvtkCameraInterpolator_GetViewAngleInterpolator, METH_VARARGS,
   "GetViewAngleInterpolator(self) -> vtkTupleInterpolator\nC++: virtual vtkTupleInterpolator *GetViewAngleInterpolator()\n\n"},
  {"SetParallelScaleInterpolator", PyvtkCameraInterpolator_SetParallelScaleInterpolator, METH_VARARGS,
   "SetParallelScaleInterpolator(self, __a:vtkTupleInterpolator)\n    -> None\nC++: virtual void SetParallelScaleInterpolator(\n    vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the parallel\nscale portion of the camera. Note that you can modify the\nbehavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances\ndirectly.\n"},
  {"GetParallelScaleInterpolator", PyvtkCameraInterpolator_GetParallelScaleInterpolator, METH_VARARGS,
   "GetParallelScaleInterpolator(self) -> vtkTupleInterpolator\nC++: virtual vtkTupleInterpolator *GetParallelScaleInterpolator()\n\n"},
  {"SetClippingRangeInterpolator", PyvtkCameraInterpolator_SetClippingRangeInterpolator, METH_VARARGS,
   "SetClippingRangeInterpolator(self, __a:vtkTupleInterpolator)\n    -> None\nC++: virtual void SetClippingRangeInterpolator(\n    vtkTupleInterpolator *)\n\nSet/Get the tuple interpolator used to interpolate the clipping\nrange portion of the camera. Note that you can modify the\nbehavior of the interpolator (linear vs spline interpolation;\nchange spline basis) by manipulating the interpolator instances\ndirectly.\n"},
  {"GetClippingRangeInterpolator", PyvtkCameraInterpolator_GetClippingRangeInterpolator, METH_VARARGS,
   "GetClippingRangeInterpolator(self) -> vtkTupleInterpolator\nC++: virtual vtkTupleInterpolator *GetClippingRangeInterpolator()\n\n"},
  {"GetMTime", PyvtkCameraInterpolator_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime() because we depend on the interpolators which\nmay be modified outside of this class.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCameraInterpolator_Doc =
  "vtkCameraInterpolator - interpolate a series of cameras to update a\nnew camera\n\n"
  "Superclass: vtkObject\n\n"
  "This class is used to interpolate a series of cameras to update a\n"
  "specified camera. Either linear interpolation or spline interpolation\n"
  "may be used. The instance variables currently interpolated include\n"
  "position, focal point, view up, view angle, parallel scale, and\n"
  "clipping range.\n\n"
  "To use this class, specify the type of interpolation to use, and add\n"
  "a series of cameras at various times \"t\" to the list of cameras from\n"
  "which to interpolate. Then to interpolate in between cameras, simply\n"
  "invoke the function InterpolateCamera(t,camera) where \"camera\" is the\n"
  "camera to be updated with interpolated values. Note that \"t\" should\n"
  "be in the range (min,max) times specified with the AddCamera()\n"
  "method. If outside this range, the interpolation is clamped. This\n"
  "class copies the camera information (as compared to referencing the\n"
  "cameras) so you do not need to keep separate instances of the camera\n"
  "around for each camera added to the list of cameras to interpolate.\n\n"
  "@warning\n"
  "The interpolator classes are initialized the first time\n"
  "InterpolateCamera() is called. Any later changes to the\n"
  "interpolators, or additions to the list of cameras to be\n"
  "interpolated, causes a reinitialization of the interpolators the next\n"
  "time InterpolateCamera() is invoked. Thus the best performance is\n"
  "obtained by 1) configuring the interpolators, 2) adding all the\n"
  "cameras, and 3) finally performing interpolation.\n\n"
  "@warning\n"
  "Currently position, focal point and view up are interpolated to\n"
  "define the orientation of the camera. Quaternion interpolation may be\n"
  "added in the future as an alternative interpolation method for camera\n"
  "orientation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCameraInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkCameraInterpolator", // tp_name
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
  PyvtkCameraInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCameraInterpolator_StaticNew()
{
  return vtkCameraInterpolator::New();
}

PyObject *PyvtkCameraInterpolator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCameraInterpolator_Type, PyvtkCameraInterpolator_Methods,
    "vtkCameraInterpolator",
 &PyvtkCameraInterpolator_StaticNew);

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
        { "INTERPOLATION_TYPE_LINEAR", vtkCameraInterpolator::INTERPOLATION_TYPE_LINEAR },
        { "INTERPOLATION_TYPE_SPLINE", vtkCameraInterpolator::INTERPOLATION_TYPE_SPLINE },
        { "INTERPOLATION_TYPE_MANUAL", vtkCameraInterpolator::INTERPOLATION_TYPE_MANUAL },
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

void PyVTKAddFile_vtkCameraInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCameraInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCameraInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

