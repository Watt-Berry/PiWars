// python wrapper for vtkImageShrink3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageShrink3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageShrink3D(PyObject *dict); }
extern "C" { PyObject *PyvtkImageShrink3D_ClassNew(); }


static PyObject *
PyvtkImageShrink3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageShrink3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageShrink3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageShrink3D *tempr = vtkImageShrink3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageShrink3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageShrink3D::NewInstance());

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
PyvtkImageShrink3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageShrink3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageShrink3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_SetShrinkFactors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShrinkFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetShrinkFactors(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageShrink3D::SetShrinkFactors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageShrink3D_SetShrinkFactors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShrinkFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetShrinkFactors(temp0);
    }
    else
    {
      op->vtkImageShrink3D::SetShrinkFactors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageShrink3D_SetShrinkFactors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageShrink3D_SetShrinkFactors_s1(self, args);
    case 1:
      return PyvtkImageShrink3D_SetShrinkFactors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetShrinkFactors");
  return nullptr;
}


static PyObject *
PyvtkImageShrink3D_GetShrinkFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetShrinkFactors() :
      op->vtkImageShrink3D::GetShrinkFactors());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_SetShift_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetShift(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageShrink3D::SetShift(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageShrink3D_SetShift_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetShift(temp0);
    }
    else
    {
      op->vtkImageShrink3D::SetShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageShrink3D_SetShift(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageShrink3D_SetShift_s1(self, args);
    case 1:
      return PyvtkImageShrink3D_SetShift_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetShift");
  return nullptr;
}


static PyObject *
PyvtkImageShrink3D_GetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetShift() :
      op->vtkImageShrink3D::GetShift());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_SetAveraging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAveraging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAveraging(temp0);
    }
    else
    {
      op->vtkImageShrink3D::SetAveraging(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_GetAveraging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAveraging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAveraging() :
      op->vtkImageShrink3D::GetAveraging());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_AveragingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AveragingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AveragingOn();
    }
    else
    {
      op->vtkImageShrink3D::AveragingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_AveragingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AveragingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AveragingOff();
    }
    else
    {
      op->vtkImageShrink3D::AveragingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_SetMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMean(temp0);
    }
    else
    {
      op->vtkImageShrink3D::SetMean(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_GetMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMean() :
      op->vtkImageShrink3D::GetMean());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_MeanOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MeanOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MeanOn();
    }
    else
    {
      op->vtkImageShrink3D::MeanOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_MeanOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MeanOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MeanOff();
    }
    else
    {
      op->vtkImageShrink3D::MeanOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_SetMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimum(temp0);
    }
    else
    {
      op->vtkImageShrink3D::SetMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_GetMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinimum() :
      op->vtkImageShrink3D::GetMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_MinimumOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MinimumOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MinimumOn();
    }
    else
    {
      op->vtkImageShrink3D::MinimumOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_MinimumOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MinimumOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MinimumOff();
    }
    else
    {
      op->vtkImageShrink3D::MinimumOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximum(temp0);
    }
    else
    {
      op->vtkImageShrink3D::SetMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximum() :
      op->vtkImageShrink3D::GetMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_MaximumOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaximumOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaximumOn();
    }
    else
    {
      op->vtkImageShrink3D::MaximumOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_MaximumOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaximumOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaximumOff();
    }
    else
    {
      op->vtkImageShrink3D::MaximumOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_SetMedian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMedian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMedian(temp0);
    }
    else
    {
      op->vtkImageShrink3D::SetMedian(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_GetMedian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMedian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMedian() :
      op->vtkImageShrink3D::GetMedian());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_MedianOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MedianOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MedianOn();
    }
    else
    {
      op->vtkImageShrink3D::MedianOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShrink3D_MedianOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MedianOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShrink3D *op = static_cast<vtkImageShrink3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MedianOff();
    }
    else
    {
      op->vtkImageShrink3D::MedianOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageShrink3D_Methods[] = {
  {"IsTypeOf", PyvtkImageShrink3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageShrink3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageShrink3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageShrink3D\nC++: static vtkImageShrink3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageShrink3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageShrink3D\nC++: vtkImageShrink3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageShrink3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageShrink3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetShrinkFactors", PyvtkImageShrink3D_SetShrinkFactors, METH_VARARGS,
   "SetShrinkFactors(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetShrinkFactors(int _arg1, int _arg2,\n    int _arg3)\nSetShrinkFactors(self, _arg:(int, int, int)) -> None\nC++: virtual void SetShrinkFactors(const int _arg[3])\n\nSet/Get the shrink factors\n"},
  {"GetShrinkFactors", PyvtkImageShrink3D_GetShrinkFactors, METH_VARARGS,
   "GetShrinkFactors(self) -> (int, int, int)\nC++: virtual int *GetShrinkFactors()\n\n"},
  {"SetShift", PyvtkImageShrink3D_SetShift, METH_VARARGS,
   "SetShift(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetShift(int _arg1, int _arg2, int _arg3)\nSetShift(self, _arg:(int, int, int)) -> None\nC++: virtual void SetShift(const int _arg[3])\n\nSet/Get the pixel to use as origin.\n"},
  {"GetShift", PyvtkImageShrink3D_GetShift, METH_VARARGS,
   "GetShift(self) -> (int, int, int)\nC++: virtual int *GetShift()\n\n"},
  {"SetAveraging", PyvtkImageShrink3D_SetAveraging, METH_VARARGS,
   "SetAveraging(self, __a:int) -> None\nC++: void SetAveraging(vtkTypeBool)\n\nChoose Mean, Minimum, Maximum, Median or sub sampling. The\nneighborhood operations are not centered on the sampled pixel.\nThis may cause a half pixel shift in your output image. You can\nchanged \"Shift\" to get around this. vtkImageGaussianSmooth or\nvtkImageMean with strides.\n"},
  {"GetAveraging", PyvtkImageShrink3D_GetAveraging, METH_VARARGS,
   "GetAveraging(self) -> int\nC++: vtkTypeBool GetAveraging()\n\n"},
  {"AveragingOn", PyvtkImageShrink3D_AveragingOn, METH_VARARGS,
   "AveragingOn(self) -> None\nC++: virtual void AveragingOn()\n\n"},
  {"AveragingOff", PyvtkImageShrink3D_AveragingOff, METH_VARARGS,
   "AveragingOff(self) -> None\nC++: virtual void AveragingOff()\n\n"},
  {"SetMean", PyvtkImageShrink3D_SetMean, METH_VARARGS,
   "SetMean(self, __a:int) -> None\nC++: void SetMean(vtkTypeBool)\n\n"},
  {"GetMean", PyvtkImageShrink3D_GetMean, METH_VARARGS,
   "GetMean(self) -> int\nC++: virtual vtkTypeBool GetMean()\n\n"},
  {"MeanOn", PyvtkImageShrink3D_MeanOn, METH_VARARGS,
   "MeanOn(self) -> None\nC++: virtual void MeanOn()\n\n"},
  {"MeanOff", PyvtkImageShrink3D_MeanOff, METH_VARARGS,
   "MeanOff(self) -> None\nC++: virtual void MeanOff()\n\n"},
  {"SetMinimum", PyvtkImageShrink3D_SetMinimum, METH_VARARGS,
   "SetMinimum(self, __a:int) -> None\nC++: void SetMinimum(vtkTypeBool)\n\n"},
  {"GetMinimum", PyvtkImageShrink3D_GetMinimum, METH_VARARGS,
   "GetMinimum(self) -> int\nC++: virtual vtkTypeBool GetMinimum()\n\n"},
  {"MinimumOn", PyvtkImageShrink3D_MinimumOn, METH_VARARGS,
   "MinimumOn(self) -> None\nC++: virtual void MinimumOn()\n\n"},
  {"MinimumOff", PyvtkImageShrink3D_MinimumOff, METH_VARARGS,
   "MinimumOff(self) -> None\nC++: virtual void MinimumOff()\n\n"},
  {"SetMaximum", PyvtkImageShrink3D_SetMaximum, METH_VARARGS,
   "SetMaximum(self, __a:int) -> None\nC++: void SetMaximum(vtkTypeBool)\n\n"},
  {"GetMaximum", PyvtkImageShrink3D_GetMaximum, METH_VARARGS,
   "GetMaximum(self) -> int\nC++: virtual vtkTypeBool GetMaximum()\n\n"},
  {"MaximumOn", PyvtkImageShrink3D_MaximumOn, METH_VARARGS,
   "MaximumOn(self) -> None\nC++: virtual void MaximumOn()\n\n"},
  {"MaximumOff", PyvtkImageShrink3D_MaximumOff, METH_VARARGS,
   "MaximumOff(self) -> None\nC++: virtual void MaximumOff()\n\n"},
  {"SetMedian", PyvtkImageShrink3D_SetMedian, METH_VARARGS,
   "SetMedian(self, __a:int) -> None\nC++: void SetMedian(vtkTypeBool)\n\n"},
  {"GetMedian", PyvtkImageShrink3D_GetMedian, METH_VARARGS,
   "GetMedian(self) -> int\nC++: virtual vtkTypeBool GetMedian()\n\n"},
  {"MedianOn", PyvtkImageShrink3D_MedianOn, METH_VARARGS,
   "MedianOn(self) -> None\nC++: virtual void MedianOn()\n\n"},
  {"MedianOff", PyvtkImageShrink3D_MedianOff, METH_VARARGS,
   "MedianOff(self) -> None\nC++: virtual void MedianOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageShrink3D_Doc =
  "vtkImageShrink3D - Subsamples an image.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageShrink3D shrinks an image by sub sampling on a uniform grid\n"
  "(integer multiples).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageShrink3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkImageShrink3D", // tp_name
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
  PyvtkImageShrink3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageShrink3D_StaticNew()
{
  return vtkImageShrink3D::New();
}

PyObject *PyvtkImageShrink3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageShrink3D_Type, PyvtkImageShrink3D_Methods,
    "vtkImageShrink3D",
 &PyvtkImageShrink3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageShrink3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageShrink3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageShrink3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

