// python wrapper for vtkCellSizeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellSizeFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellSizeFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkCellSizeFilter_ClassNew(); }


static PyObject *
PyvtkCellSizeFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellSizeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellSizeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellSizeFilter *tempr = vtkCellSizeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellSizeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellSizeFilter::NewInstance());

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
PyvtkCellSizeFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellSizeFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellSizeFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetComputeVertexCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVertexCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeVertexCount(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetComputeVertexCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetComputeVertexCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVertexCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeVertexCount() :
      op->vtkCellSizeFilter::GetComputeVertexCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeVertexCountOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVertexCountOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeVertexCountOn();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeVertexCountOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeVertexCountOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVertexCountOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeVertexCountOff();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeVertexCountOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetComputeLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeLength(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetComputeLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetComputeLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeLength() :
      op->vtkCellSizeFilter::GetComputeLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeLengthOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeLengthOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeLengthOn();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeLengthOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeLengthOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeLengthOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeLengthOff();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeLengthOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetComputeArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeArea(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetComputeArea(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetComputeArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeArea() :
      op->vtkCellSizeFilter::GetComputeArea());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeAreaOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAreaOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeAreaOn();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeAreaOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeAreaOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAreaOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeAreaOff();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeAreaOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetComputeVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeVolume(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetComputeVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetComputeVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeVolume() :
      op->vtkCellSizeFilter::GetComputeVolume());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeVolumeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVolumeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeVolumeOn();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeVolumeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeVolumeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVolumeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeVolumeOff();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeVolumeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetComputeSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeSum(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetComputeSum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetComputeSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeSum() :
      op->vtkCellSizeFilter::GetComputeSum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeSumOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSumOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeSumOn();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeSumOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeSumOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSumOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeSumOff();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeSumOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetVertexCountArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexCountArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexCountArrayName(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetVertexCountArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetVertexCountArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexCountArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVertexCountArrayName() :
      op->vtkCellSizeFilter::GetVertexCountArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetLengthArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLengthArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLengthArrayName(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetLengthArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetLengthArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengthArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLengthArrayName() :
      op->vtkCellSizeFilter::GetLengthArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetAreaArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaArrayName(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetAreaArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetAreaArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAreaArrayName() :
      op->vtkCellSizeFilter::GetAreaArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumeArrayName(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetVolumeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVolumeArrayName() :
      op->vtkCellSizeFilter::GetVolumeArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellSizeFilter_Methods[] = {
  {"IsTypeOf", PyvtkCellSizeFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellSizeFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellSizeFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellSizeFilter\nC++: static vtkCellSizeFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellSizeFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellSizeFilter\nC++: vtkCellSizeFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellSizeFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellSizeFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetComputeVertexCount", PyvtkCellSizeFilter_SetComputeVertexCount, METH_VARARGS,
   "SetComputeVertexCount(self, _arg:bool) -> None\nC++: virtual void SetComputeVertexCount(bool _arg)\n\nSpecify whether or not to compute sizes for vertex and polyvertex\ncells. The computed value is the number of points in the cell.\nThis option is enabled by default.\n"},
  {"GetComputeVertexCount", PyvtkCellSizeFilter_GetComputeVertexCount, METH_VARARGS,
   "GetComputeVertexCount(self) -> bool\nC++: virtual bool GetComputeVertexCount()\n\n"},
  {"ComputeVertexCountOn", PyvtkCellSizeFilter_ComputeVertexCountOn, METH_VARARGS,
   "ComputeVertexCountOn(self) -> None\nC++: virtual void ComputeVertexCountOn()\n\n"},
  {"ComputeVertexCountOff", PyvtkCellSizeFilter_ComputeVertexCountOff, METH_VARARGS,
   "ComputeVertexCountOff(self) -> None\nC++: virtual void ComputeVertexCountOff()\n\n"},
  {"SetComputeLength", PyvtkCellSizeFilter_SetComputeLength, METH_VARARGS,
   "SetComputeLength(self, _arg:bool) -> None\nC++: virtual void SetComputeLength(bool _arg)\n\nSpecify whether or not to compute sizes for 1D cells cells. The\ncomputed value is the length of the cell. This option is enabled\nby default.\n"},
  {"GetComputeLength", PyvtkCellSizeFilter_GetComputeLength, METH_VARARGS,
   "GetComputeLength(self) -> bool\nC++: virtual bool GetComputeLength()\n\n"},
  {"ComputeLengthOn", PyvtkCellSizeFilter_ComputeLengthOn, METH_VARARGS,
   "ComputeLengthOn(self) -> None\nC++: virtual void ComputeLengthOn()\n\n"},
  {"ComputeLengthOff", PyvtkCellSizeFilter_ComputeLengthOff, METH_VARARGS,
   "ComputeLengthOff(self) -> None\nC++: virtual void ComputeLengthOff()\n\n"},
  {"SetComputeArea", PyvtkCellSizeFilter_SetComputeArea, METH_VARARGS,
   "SetComputeArea(self, _arg:bool) -> None\nC++: virtual void SetComputeArea(bool _arg)\n\nSpecify whether or not to compute sizes for 2D cells cells. The\ncomputed value is the area of the cell. This option is enabled by\ndefault.\n"},
  {"GetComputeArea", PyvtkCellSizeFilter_GetComputeArea, METH_VARARGS,
   "GetComputeArea(self) -> bool\nC++: virtual bool GetComputeArea()\n\n"},
  {"ComputeAreaOn", PyvtkCellSizeFilter_ComputeAreaOn, METH_VARARGS,
   "ComputeAreaOn(self) -> None\nC++: virtual void ComputeAreaOn()\n\n"},
  {"ComputeAreaOff", PyvtkCellSizeFilter_ComputeAreaOff, METH_VARARGS,
   "ComputeAreaOff(self) -> None\nC++: virtual void ComputeAreaOff()\n\n"},
  {"SetComputeVolume", PyvtkCellSizeFilter_SetComputeVolume, METH_VARARGS,
   "SetComputeVolume(self, _arg:bool) -> None\nC++: virtual void SetComputeVolume(bool _arg)\n\nSpecify whether or not to compute sizes for 3D cells cells. The\ncomputed value is the volume of the cell. This option is enabled\nby default.\n"},
  {"GetComputeVolume", PyvtkCellSizeFilter_GetComputeVolume, METH_VARARGS,
   "GetComputeVolume(self) -> bool\nC++: virtual bool GetComputeVolume()\n\n"},
  {"ComputeVolumeOn", PyvtkCellSizeFilter_ComputeVolumeOn, METH_VARARGS,
   "ComputeVolumeOn(self) -> None\nC++: virtual void ComputeVolumeOn()\n\n"},
  {"ComputeVolumeOff", PyvtkCellSizeFilter_ComputeVolumeOff, METH_VARARGS,
   "ComputeVolumeOff(self) -> None\nC++: virtual void ComputeVolumeOff()\n\n"},
  {"SetComputeSum", PyvtkCellSizeFilter_SetComputeSum, METH_VARARGS,
   "SetComputeSum(self, _arg:bool) -> None\nC++: virtual void SetComputeSum(bool _arg)\n\nSpecify whether to sum the computed sizes and put the result in a\nfield data array. This option is disabled by default.\n"},
  {"GetComputeSum", PyvtkCellSizeFilter_GetComputeSum, METH_VARARGS,
   "GetComputeSum(self) -> bool\nC++: virtual bool GetComputeSum()\n\n"},
  {"ComputeSumOn", PyvtkCellSizeFilter_ComputeSumOn, METH_VARARGS,
   "ComputeSumOn(self) -> None\nC++: virtual void ComputeSumOn()\n\n"},
  {"ComputeSumOff", PyvtkCellSizeFilter_ComputeSumOff, METH_VARARGS,
   "ComputeSumOff(self) -> None\nC++: virtual void ComputeSumOff()\n\n"},
  {"SetVertexCountArrayName", PyvtkCellSizeFilter_SetVertexCountArrayName, METH_VARARGS,
   "SetVertexCountArrayName(self, _arg:str) -> None\nC++: virtual void SetVertexCountArrayName(const char *_arg)\n\nSet/Get the name of the computed arrays. Default names are\nVertexCount, Length, Area and Volume.\n"},
  {"GetVertexCountArrayName", PyvtkCellSizeFilter_GetVertexCountArrayName, METH_VARARGS,
   "GetVertexCountArrayName(self) -> str\nC++: virtual char *GetVertexCountArrayName()\n\n"},
  {"SetLengthArrayName", PyvtkCellSizeFilter_SetLengthArrayName, METH_VARARGS,
   "SetLengthArrayName(self, _arg:str) -> None\nC++: virtual void SetLengthArrayName(const char *_arg)\n\n"},
  {"GetLengthArrayName", PyvtkCellSizeFilter_GetLengthArrayName, METH_VARARGS,
   "GetLengthArrayName(self) -> str\nC++: virtual char *GetLengthArrayName()\n\n"},
  {"SetAreaArrayName", PyvtkCellSizeFilter_SetAreaArrayName, METH_VARARGS,
   "SetAreaArrayName(self, _arg:str) -> None\nC++: virtual void SetAreaArrayName(const char *_arg)\n\n"},
  {"GetAreaArrayName", PyvtkCellSizeFilter_GetAreaArrayName, METH_VARARGS,
   "GetAreaArrayName(self) -> str\nC++: virtual char *GetAreaArrayName()\n\n"},
  {"SetVolumeArrayName", PyvtkCellSizeFilter_SetVolumeArrayName, METH_VARARGS,
   "SetVolumeArrayName(self, _arg:str) -> None\nC++: virtual void SetVolumeArrayName(const char *_arg)\n\n"},
  {"GetVolumeArrayName", PyvtkCellSizeFilter_GetVolumeArrayName, METH_VARARGS,
   "GetVolumeArrayName(self) -> str\nC++: virtual char *GetVolumeArrayName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCellSizeFilter_Doc =
  "vtkCellSizeFilter - Computes cell sizes.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "Computes the cell sizes for all types of cells in VTK. For triangles,\n"
  "quads, tets and hexes the static methods in vtkMeshQuality are used.\n"
  "This is done through Verdict for higher accuracy. Other cell types\n"
  "are individually done analytically where possible and breaking into\n"
  "triangles or tets when not possible. When cells are broken into\n"
  "triangles or tets the accuracy may be diminished. By default all\n"
  "sizes are computed but vertex count, length, area and volumetric\n"
  "cells can each be optionally ignored. Individual arrays are used for\n"
  "each requested size (e.g. if length and volume are requested there\n"
  "will be two arrays outputted from this filter). The 4 arrays can be\n"
  "individually named with defaults of VertexCount, Length, Area and\n"
  "Volme. For dimensions of cells that do not have their size computed,\n"
  "a value of 0 will be given. For cells that should have their size\n"
  "computed but can't, the filter will return -1. The ComputeSum option\n"
  "will sum the cell sizes (excluding ghost cells) and put the value\n"
  "into vtkFieldData arrays named with the corresponding cell data array\n"
  "name. For composite datasets the total sum over all blocks will also\n"
  "be added to the top-level block's field data for the summation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellSizeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersVerdict.vtkCellSizeFilter", // tp_name
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
  PyvtkCellSizeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellSizeFilter_StaticNew()
{
  return vtkCellSizeFilter::New();
}

PyObject *PyvtkCellSizeFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellSizeFilter_Type, PyvtkCellSizeFilter_Methods,
    "vtkCellSizeFilter",
 &PyvtkCellSizeFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellSizeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellSizeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellSizeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

