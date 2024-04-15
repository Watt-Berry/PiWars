// python wrapper for vtkSplineFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSplineFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSplineFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkSplineFilter_ClassNew(); }


static PyObject *
PyvtkSplineFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSplineFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSplineFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSplineFilter *tempr = vtkSplineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSplineFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSplineFilter::NewInstance());

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
PyvtkSplineFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSplineFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSplineFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfSubdivisions(temp0);
    }
    else
    {
      op->vtkSplineFilter::SetMaximumNumberOfSubdivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetMaximumNumberOfSubdivisionsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisionsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSubdivisionsMinValue() :
      op->vtkSplineFilter::GetMaximumNumberOfSubdivisionsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetMaximumNumberOfSubdivisionsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisionsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSubdivisionsMaxValue() :
      op->vtkSplineFilter::GetMaximumNumberOfSubdivisionsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSubdivisions() :
      op->vtkSplineFilter::GetMaximumNumberOfSubdivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetSubdivide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubdivide(temp0);
    }
    else
    {
      op->vtkSplineFilter::SetSubdivide(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSubdivideMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivideMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubdivideMinValue() :
      op->vtkSplineFilter::GetSubdivideMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSubdivideMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivideMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubdivideMaxValue() :
      op->vtkSplineFilter::GetSubdivideMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSubdivide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubdivide() :
      op->vtkSplineFilter::GetSubdivide());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetSubdivideToSpecified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivideToSpecified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSubdivideToSpecified();
    }
    else
    {
      op->vtkSplineFilter::SetSubdivideToSpecified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetSubdivideToLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivideToLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSubdivideToLength();
    }
    else
    {
      op->vtkSplineFilter::SetSubdivideToLength();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSubdivideAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivideAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSubdivideAsString() :
      op->vtkSplineFilter::GetSubdivideAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSubdivisions(temp0);
    }
    else
    {
      op->vtkSplineFilter::SetNumberOfSubdivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetNumberOfSubdivisionsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisionsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubdivisionsMinValue() :
      op->vtkSplineFilter::GetNumberOfSubdivisionsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetNumberOfSubdivisionsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisionsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubdivisionsMaxValue() :
      op->vtkSplineFilter::GetNumberOfSubdivisionsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubdivisions() :
      op->vtkSplineFilter::GetNumberOfSubdivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLength(temp0);
    }
    else
    {
      op->vtkSplineFilter::SetLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLengthMinValue() :
      op->vtkSplineFilter::GetLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLengthMaxValue() :
      op->vtkSplineFilter::GetLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLength() :
      op->vtkSplineFilter::GetLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  vtkSpline *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
  {
    if (ap.IsBound())
    {
      op->SetSpline(temp0);
    }
    else
    {
      op->vtkSplineFilter::SetSpline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpline *tempr = (ap.IsBound() ?
      op->GetSpline() :
      op->vtkSplineFilter::GetSpline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoords(temp0);
    }
    else
    {
      op->vtkSplineFilter::SetGenerateTCoords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetGenerateTCoordsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsMinValue() :
      op->vtkSplineFilter::GetGenerateTCoordsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetGenerateTCoordsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsMaxValue() :
      op->vtkSplineFilter::GetGenerateTCoordsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoords() :
      op->vtkSplineFilter::GetGenerateTCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoordsToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToOff();
    }
    else
    {
      op->vtkSplineFilter::SetGenerateTCoordsToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoordsToNormalizedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToNormalizedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToNormalizedLength();
    }
    else
    {
      op->vtkSplineFilter::SetGenerateTCoordsToNormalizedLength();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoordsToUseLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToUseLength();
    }
    else
    {
      op->vtkSplineFilter::SetGenerateTCoordsToUseLength();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoordsToUseScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToUseScalars();
    }
    else
    {
      op->vtkSplineFilter::SetGenerateTCoordsToUseScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetGenerateTCoordsAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsAsString() :
      op->vtkSplineFilter::GetGenerateTCoordsAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureLength(temp0);
    }
    else
    {
      op->vtkSplineFilter::SetTextureLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetTextureLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureLengthMinValue() :
      op->vtkSplineFilter::GetTextureLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetTextureLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureLengthMaxValue() :
      op->vtkSplineFilter::GetTextureLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureLength() :
      op->vtkSplineFilter::GetTextureLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSplineFilter_Methods[] = {
  {"IsTypeOf", PyvtkSplineFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSplineFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSplineFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSplineFilter\nC++: static vtkSplineFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSplineFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSplineFilter\nC++: vtkSplineFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSplineFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSplineFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMaximumNumberOfSubdivisions", PyvtkSplineFilter_SetMaximumNumberOfSubdivisions, METH_VARARGS,
   "SetMaximumNumberOfSubdivisions(self, _arg:int) -> None\nC++: virtual void SetMaximumNumberOfSubdivisions(int _arg)\n\nSet the maximum number of subdivisions that are created for each\npolyline.\n"},
  {"GetMaximumNumberOfSubdivisionsMinValue", PyvtkSplineFilter_GetMaximumNumberOfSubdivisionsMinValue, METH_VARARGS,
   "GetMaximumNumberOfSubdivisionsMinValue(self) -> int\nC++: virtual int GetMaximumNumberOfSubdivisionsMinValue()\n\n"},
  {"GetMaximumNumberOfSubdivisionsMaxValue", PyvtkSplineFilter_GetMaximumNumberOfSubdivisionsMaxValue, METH_VARARGS,
   "GetMaximumNumberOfSubdivisionsMaxValue(self) -> int\nC++: virtual int GetMaximumNumberOfSubdivisionsMaxValue()\n\n"},
  {"GetMaximumNumberOfSubdivisions", PyvtkSplineFilter_GetMaximumNumberOfSubdivisions, METH_VARARGS,
   "GetMaximumNumberOfSubdivisions(self) -> int\nC++: virtual int GetMaximumNumberOfSubdivisions()\n\n"},
  {"SetSubdivide", PyvtkSplineFilter_SetSubdivide, METH_VARARGS,
   "SetSubdivide(self, _arg:int) -> None\nC++: virtual void SetSubdivide(int _arg)\n\nSpecify how the number of subdivisions is determined.\n"},
  {"GetSubdivideMinValue", PyvtkSplineFilter_GetSubdivideMinValue, METH_VARARGS,
   "GetSubdivideMinValue(self) -> int\nC++: virtual int GetSubdivideMinValue()\n\n"},
  {"GetSubdivideMaxValue", PyvtkSplineFilter_GetSubdivideMaxValue, METH_VARARGS,
   "GetSubdivideMaxValue(self) -> int\nC++: virtual int GetSubdivideMaxValue()\n\n"},
  {"GetSubdivide", PyvtkSplineFilter_GetSubdivide, METH_VARARGS,
   "GetSubdivide(self) -> int\nC++: virtual int GetSubdivide()\n\n"},
  {"SetSubdivideToSpecified", PyvtkSplineFilter_SetSubdivideToSpecified, METH_VARARGS,
   "SetSubdivideToSpecified(self) -> None\nC++: void SetSubdivideToSpecified()\n\n"},
  {"SetSubdivideToLength", PyvtkSplineFilter_SetSubdivideToLength, METH_VARARGS,
   "SetSubdivideToLength(self) -> None\nC++: void SetSubdivideToLength()\n\n"},
  {"GetSubdivideAsString", PyvtkSplineFilter_GetSubdivideAsString, METH_VARARGS,
   "GetSubdivideAsString(self) -> str\nC++: const char *GetSubdivideAsString()\n\n"},
  {"SetNumberOfSubdivisions", PyvtkSplineFilter_SetNumberOfSubdivisions, METH_VARARGS,
   "SetNumberOfSubdivisions(self, _arg:int) -> None\nC++: virtual void SetNumberOfSubdivisions(int _arg)\n\nSet the number of subdivisions that are created for the polyline.\nThis method only has effect if Subdivisions is set to\nSetSubdivisionsToSpecify().\n"},
  {"GetNumberOfSubdivisionsMinValue", PyvtkSplineFilter_GetNumberOfSubdivisionsMinValue, METH_VARARGS,
   "GetNumberOfSubdivisionsMinValue(self) -> int\nC++: virtual int GetNumberOfSubdivisionsMinValue()\n\n"},
  {"GetNumberOfSubdivisionsMaxValue", PyvtkSplineFilter_GetNumberOfSubdivisionsMaxValue, METH_VARARGS,
   "GetNumberOfSubdivisionsMaxValue(self) -> int\nC++: virtual int GetNumberOfSubdivisionsMaxValue()\n\n"},
  {"GetNumberOfSubdivisions", PyvtkSplineFilter_GetNumberOfSubdivisions, METH_VARARGS,
   "GetNumberOfSubdivisions(self) -> int\nC++: virtual int GetNumberOfSubdivisions()\n\n"},
  {"SetLength", PyvtkSplineFilter_SetLength, METH_VARARGS,
   "SetLength(self, _arg:float) -> None\nC++: virtual void SetLength(double _arg)\n\nControl the number of subdivisions that are created for the\npolyline based on an absolute length. The length of the spline is\ndivided by this length to determine the number of subdivisions.\n"},
  {"GetLengthMinValue", PyvtkSplineFilter_GetLengthMinValue, METH_VARARGS,
   "GetLengthMinValue(self) -> float\nC++: virtual double GetLengthMinValue()\n\n"},
  {"GetLengthMaxValue", PyvtkSplineFilter_GetLengthMaxValue, METH_VARARGS,
   "GetLengthMaxValue(self) -> float\nC++: virtual double GetLengthMaxValue()\n\n"},
  {"GetLength", PyvtkSplineFilter_GetLength, METH_VARARGS,
   "GetLength(self) -> float\nC++: virtual double GetLength()\n\n"},
  {"SetSpline", PyvtkSplineFilter_SetSpline, METH_VARARGS,
   "SetSpline(self, __a:vtkSpline) -> None\nC++: virtual void SetSpline(vtkSpline *)\n\nSpecify an instance of vtkSpline to use to perform the\ninterpolation.\n"},
  {"GetSpline", PyvtkSplineFilter_GetSpline, METH_VARARGS,
   "GetSpline(self) -> vtkSpline\nC++: virtual vtkSpline *GetSpline()\n\n"},
  {"SetGenerateTCoords", PyvtkSplineFilter_SetGenerateTCoords, METH_VARARGS,
   "SetGenerateTCoords(self, _arg:int) -> None\nC++: virtual void SetGenerateTCoords(int _arg)\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {"GetGenerateTCoordsMinValue", PyvtkSplineFilter_GetGenerateTCoordsMinValue, METH_VARARGS,
   "GetGenerateTCoordsMinValue(self) -> int\nC++: virtual int GetGenerateTCoordsMinValue()\n\n"},
  {"GetGenerateTCoordsMaxValue", PyvtkSplineFilter_GetGenerateTCoordsMaxValue, METH_VARARGS,
   "GetGenerateTCoordsMaxValue(self) -> int\nC++: virtual int GetGenerateTCoordsMaxValue()\n\n"},
  {"GetGenerateTCoords", PyvtkSplineFilter_GetGenerateTCoords, METH_VARARGS,
   "GetGenerateTCoords(self) -> int\nC++: virtual int GetGenerateTCoords()\n\n"},
  {"SetGenerateTCoordsToOff", PyvtkSplineFilter_SetGenerateTCoordsToOff, METH_VARARGS,
   "SetGenerateTCoordsToOff(self) -> None\nC++: void SetGenerateTCoordsToOff()\n\n"},
  {"SetGenerateTCoordsToNormalizedLength", PyvtkSplineFilter_SetGenerateTCoordsToNormalizedLength, METH_VARARGS,
   "SetGenerateTCoordsToNormalizedLength(self) -> None\nC++: void SetGenerateTCoordsToNormalizedLength()\n\n"},
  {"SetGenerateTCoordsToUseLength", PyvtkSplineFilter_SetGenerateTCoordsToUseLength, METH_VARARGS,
   "SetGenerateTCoordsToUseLength(self) -> None\nC++: void SetGenerateTCoordsToUseLength()\n\n"},
  {"SetGenerateTCoordsToUseScalars", PyvtkSplineFilter_SetGenerateTCoordsToUseScalars, METH_VARARGS,
   "SetGenerateTCoordsToUseScalars(self) -> None\nC++: void SetGenerateTCoordsToUseScalars()\n\n"},
  {"GetGenerateTCoordsAsString", PyvtkSplineFilter_GetGenerateTCoordsAsString, METH_VARARGS,
   "GetGenerateTCoordsAsString(self) -> str\nC++: const char *GetGenerateTCoordsAsString()\n\n"},
  {"SetTextureLength", PyvtkSplineFilter_SetTextureLength, METH_VARARGS,
   "SetTextureLength(self, _arg:float) -> None\nC++: virtual void SetTextureLength(double _arg)\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {"GetTextureLengthMinValue", PyvtkSplineFilter_GetTextureLengthMinValue, METH_VARARGS,
   "GetTextureLengthMinValue(self) -> float\nC++: virtual double GetTextureLengthMinValue()\n\n"},
  {"GetTextureLengthMaxValue", PyvtkSplineFilter_GetTextureLengthMaxValue, METH_VARARGS,
   "GetTextureLengthMaxValue(self) -> float\nC++: virtual double GetTextureLengthMaxValue()\n\n"},
  {"GetTextureLength", PyvtkSplineFilter_GetTextureLength, METH_VARARGS,
   "GetTextureLength(self) -> float\nC++: virtual double GetTextureLength()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSplineFilter_Doc =
  "vtkSplineFilter - generate uniformly subdivided polylines from a set\nof input polyline using a vtkSpline\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSplineFilter is a filter that generates an output polylines from\n"
  "an input set of polylines. The polylines are uniformly subdivided and\n"
  "produced with the help of a vtkSpline class that the user can specify\n"
  "(by default a vtkCardinalSpline is used). The number of subdivisions\n"
  "of the line can be controlled in several ways. The user can either\n"
  "specify the number of subdivisions or a length of each subdivision\n"
  "can be provided (and the class will figure out how many subdivisions\n"
  "is required over the whole polyline). The maximum number of\n"
  "subdivisions can also be set.\n\n"
  "The output of this filter is a polyline per input polyline (or line).\n"
  "New points and texture coordinates are created. Point data is\n"
  "interpolated and cell data passed on. Any polylines with less than\n"
  "two points, or who have coincident points, are ignored.\n\n"
  "@sa\n"
  "vtkRibbonFilter vtkTubeFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSplineFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkSplineFilter", // tp_name
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
  PyvtkSplineFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSplineFilter_StaticNew()
{
  return vtkSplineFilter::New();
}

PyObject *PyvtkSplineFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSplineFilter_Type, PyvtkSplineFilter_Methods,
    "vtkSplineFilter",
 &PyvtkSplineFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSplineFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSplineFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSplineFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_SUBDIVIDE_SPECIFIED", 0 },
        { "VTK_SUBDIVIDE_LENGTH", 1 },
        { "VTK_TCOORDS_OFF", 0 },
        { "VTK_TCOORDS_FROM_NORMALIZED_LENGTH", 1 },
        { "VTK_TCOORDS_FROM_LENGTH", 2 },
        { "VTK_TCOORDS_FROM_SCALARS", 3 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

