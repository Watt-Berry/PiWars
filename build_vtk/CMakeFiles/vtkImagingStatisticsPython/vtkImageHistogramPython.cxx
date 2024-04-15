// python wrapper for vtkImageHistogram
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageHistogram.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageHistogram(PyObject *dict); }
extern "C" { PyObject *PyvtkImageHistogram_ClassNew(); }


static PyObject *
PyvtkImageHistogram_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageHistogram::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageHistogram::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageHistogram *tempr = vtkImageHistogram::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageHistogram *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageHistogram::NewInstance());

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
PyvtkImageHistogram_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageHistogram::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageHistogram::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_SetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveComponent(temp0);
    }
    else
    {
      op->vtkImageHistogram::SetActiveComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponent() :
      op->vtkImageHistogram::GetActiveComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_SetAutomaticBinning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticBinning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticBinning(temp0);
    }
    else
    {
      op->vtkImageHistogram::SetAutomaticBinning(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_AutomaticBinningOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticBinningOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticBinningOn();
    }
    else
    {
      op->vtkImageHistogram::AutomaticBinningOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_AutomaticBinningOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticBinningOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticBinningOff();
    }
    else
    {
      op->vtkImageHistogram::AutomaticBinningOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GetAutomaticBinning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticBinning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticBinning() :
      op->vtkImageHistogram::GetAutomaticBinning());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_SetMaximumNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfBins(temp0);
    }
    else
    {
      op->vtkImageHistogram::SetMaximumNumberOfBins(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GetMaximumNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfBins() :
      op->vtkImageHistogram::GetMaximumNumberOfBins());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_SetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfBins(temp0);
    }
    else
    {
      op->vtkImageHistogram::SetNumberOfBins(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBins() :
      op->vtkImageHistogram::GetNumberOfBins());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_SetBinOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBinOrigin(temp0);
    }
    else
    {
      op->vtkImageHistogram::SetBinOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GetBinOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBinOrigin() :
      op->vtkImageHistogram::GetBinOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_SetBinSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBinSpacing(temp0);
    }
    else
    {
      op->vtkImageHistogram::SetBinSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GetBinSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBinSpacing() :
      op->vtkImageHistogram::GetBinSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_SetStencilData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
  {
    if (ap.IsBound())
    {
      op->SetStencilData(temp0);
    }
    else
    {
      op->vtkImageHistogram::SetStencilData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageStencilData *tempr = (ap.IsBound() ?
      op->GetStencil() :
      op->vtkImageHistogram::GetStencil());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_SetStencilConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetStencilConnection(temp0);
    }
    else
    {
      op->vtkImageHistogram::SetStencilConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_SetGenerateHistogramImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateHistogramImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateHistogramImage(temp0);
    }
    else
    {
      op->vtkImageHistogram::SetGenerateHistogramImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GenerateHistogramImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateHistogramImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateHistogramImageOn();
    }
    else
    {
      op->vtkImageHistogram::GenerateHistogramImageOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GenerateHistogramImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateHistogramImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateHistogramImageOff();
    }
    else
    {
      op->vtkImageHistogram::GenerateHistogramImageOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GetGenerateHistogramImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateHistogramImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateHistogramImage() :
      op->vtkImageHistogram::GetGenerateHistogramImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_SetHistogramImageSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetHistogramImageSize(temp0, temp1);
    }
    else
    {
      op->vtkImageHistogram::SetHistogramImageSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageHistogram_SetHistogramImageSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramImageSize(temp0);
    }
    else
    {
      op->vtkImageHistogram::SetHistogramImageSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageHistogram_SetHistogramImageSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageHistogram_SetHistogramImageSize_s1(self, args);
    case 1:
      return PyvtkImageHistogram_SetHistogramImageSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHistogramImageSize");
  return nullptr;
}


static PyObject *
PyvtkImageHistogram_GetHistogramImageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistogramImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetHistogramImageSize() :
      op->vtkImageHistogram::GetHistogramImageSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_SetHistogramImageScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramImageScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramImageScale(temp0);
    }
    else
    {
      op->vtkImageHistogram::SetHistogramImageScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GetHistogramImageScaleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistogramImageScaleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHistogramImageScaleMinValue() :
      op->vtkImageHistogram::GetHistogramImageScaleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GetHistogramImageScaleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistogramImageScaleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHistogramImageScaleMaxValue() :
      op->vtkImageHistogram::GetHistogramImageScaleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_SetHistogramImageScaleToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramImageScaleToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramImageScaleToLinear();
    }
    else
    {
      op->vtkImageHistogram::SetHistogramImageScaleToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_SetHistogramImageScaleToLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramImageScaleToLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramImageScaleToLog();
    }
    else
    {
      op->vtkImageHistogram::SetHistogramImageScaleToLog();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_SetHistogramImageScaleToSqrt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramImageScaleToSqrt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramImageScaleToSqrt();
    }
    else
    {
      op->vtkImageHistogram::SetHistogramImageScaleToSqrt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GetHistogramImageScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistogramImageScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHistogramImageScale() :
      op->vtkImageHistogram::GetHistogramImageScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GetHistogramImageScaleAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistogramImageScaleAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetHistogramImageScaleAsString() :
      op->vtkImageHistogram::GetHistogramImageScaleAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GetHistogram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistogram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetHistogram() :
      op->vtkImageHistogram::GetHistogram());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogram_GetTotal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogram *op = static_cast<vtkImageHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetTotal() :
      op->vtkImageHistogram::GetTotal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageHistogram_Methods[] = {
  {"IsTypeOf", PyvtkImageHistogram_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageHistogram_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageHistogram_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageHistogram\nC++: static vtkImageHistogram *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageHistogram_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageHistogram\nC++: vtkImageHistogram *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageHistogram_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageHistogram_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetActiveComponent", PyvtkImageHistogram_SetActiveComponent, METH_VARARGS,
   "SetActiveComponent(self, _arg:int) -> None\nC++: virtual void SetActiveComponent(int _arg)\n\nSet the component for which to generate a histogram.  The default\nvalue is -1, which produces a histogram that is the sum of the\nhistograms of the individual components.\n"},
  {"GetActiveComponent", PyvtkImageHistogram_GetActiveComponent, METH_VARARGS,
   "GetActiveComponent(self) -> int\nC++: virtual int GetActiveComponent()\n\n"},
  {"SetAutomaticBinning", PyvtkImageHistogram_SetAutomaticBinning, METH_VARARGS,
   "SetAutomaticBinning(self, _arg:int) -> None\nC++: virtual void SetAutomaticBinning(vtkTypeBool _arg)\n\nIf this is On, then the histogram binning will be done\nautomatically. For char and unsigned char data, there will be 256\nbins with unit spacing.  For data of type short and larger, there\nwill be between 256 and MaximumNumberOfBins, depending on the\nrange of the data, and the BinOrigin will be set to zero if no\nnegative values are present, or to the smallest negative value if\nnegative values are present. For float data, the\nMaximumNumberOfBins will always be used. The BinOrigin and\nBinSpacing will be set so that they provide a mapping from bin\nindex to scalar value.\n"},
  {"AutomaticBinningOn", PyvtkImageHistogram_AutomaticBinningOn, METH_VARARGS,
   "AutomaticBinningOn(self) -> None\nC++: virtual void AutomaticBinningOn()\n\n"},
  {"AutomaticBinningOff", PyvtkImageHistogram_AutomaticBinningOff, METH_VARARGS,
   "AutomaticBinningOff(self) -> None\nC++: virtual void AutomaticBinningOff()\n\n"},
  {"GetAutomaticBinning", PyvtkImageHistogram_GetAutomaticBinning, METH_VARARGS,
   "GetAutomaticBinning(self) -> int\nC++: virtual vtkTypeBool GetAutomaticBinning()\n\n"},
  {"SetMaximumNumberOfBins", PyvtkImageHistogram_SetMaximumNumberOfBins, METH_VARARGS,
   "SetMaximumNumberOfBins(self, _arg:int) -> None\nC++: virtual void SetMaximumNumberOfBins(int _arg)\n\nThe maximum number of bins to use when AutomaticBinning is On.\nWhen AutomaticBinning is On, the size of the output histogram\nwill be set to the full range of the input data values, unless\nthe full range is greater than this value.  By default, the max\nvalue is 65536, which is large enough to capture the full range\nof 16-bit integers.\n"},
  {"GetMaximumNumberOfBins", PyvtkImageHistogram_GetMaximumNumberOfBins, METH_VARARGS,
   "GetMaximumNumberOfBins(self) -> int\nC++: virtual int GetMaximumNumberOfBins()\n\n"},
  {"SetNumberOfBins", PyvtkImageHistogram_SetNumberOfBins, METH_VARARGS,
   "SetNumberOfBins(self, _arg:int) -> None\nC++: virtual void SetNumberOfBins(int _arg)\n\nThe number of bins in histogram (default 256).  This is\nautomatically computed unless AutomaticBinning is Off.\n"},
  {"GetNumberOfBins", PyvtkImageHistogram_GetNumberOfBins, METH_VARARGS,
   "GetNumberOfBins(self) -> int\nC++: virtual int GetNumberOfBins()\n\n"},
  {"SetBinOrigin", PyvtkImageHistogram_SetBinOrigin, METH_VARARGS,
   "SetBinOrigin(self, _arg:float) -> None\nC++: virtual void SetBinOrigin(double _arg)\n\nThe value for the center of the first bin (default 0).  This is\nautomatically computed unless AutomaticBinning is Off.\n"},
  {"GetBinOrigin", PyvtkImageHistogram_GetBinOrigin, METH_VARARGS,
   "GetBinOrigin(self) -> float\nC++: virtual double GetBinOrigin()\n\n"},
  {"SetBinSpacing", PyvtkImageHistogram_SetBinSpacing, METH_VARARGS,
   "SetBinSpacing(self, _arg:float) -> None\nC++: virtual void SetBinSpacing(double _arg)\n\nThe bin spacing (default 1).  This is automatically computed\nunless AutomaticBinning is Off.\n"},
  {"GetBinSpacing", PyvtkImageHistogram_GetBinSpacing, METH_VARARGS,
   "GetBinSpacing(self) -> float\nC++: virtual double GetBinSpacing()\n\n"},
  {"SetStencilData", PyvtkImageHistogram_SetStencilData, METH_VARARGS,
   "SetStencilData(self, stencil:vtkImageStencilData) -> None\nC++: void SetStencilData(vtkImageStencilData *stencil)\n\nUse a stencil to compute the histogram for just a part of the\nimage.\n"},
  {"GetStencil", PyvtkImageHistogram_GetStencil, METH_VARARGS,
   "GetStencil(self) -> vtkImageStencilData\nC++: vtkImageStencilData *GetStencil()\n\n"},
  {"SetStencilConnection", PyvtkImageHistogram_SetStencilConnection, METH_VARARGS,
   "SetStencilConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetStencilConnection(vtkAlgorithmOutput *algOutput)\n\nEquivalent to SetInputConnection(1, algOutput).\n"},
  {"SetGenerateHistogramImage", PyvtkImageHistogram_SetGenerateHistogramImage, METH_VARARGS,
   "SetGenerateHistogramImage(self, _arg:int) -> None\nC++: virtual void SetGenerateHistogramImage(vtkTypeBool _arg)\n\nIf this is On, then a histogram image will be produced as the\noutput. Regardless of this setting, the histogram is always\navailable as a vtkIdTypeArray from the GetHistogram method.\n"},
  {"GenerateHistogramImageOn", PyvtkImageHistogram_GenerateHistogramImageOn, METH_VARARGS,
   "GenerateHistogramImageOn(self) -> None\nC++: virtual void GenerateHistogramImageOn()\n\n"},
  {"GenerateHistogramImageOff", PyvtkImageHistogram_GenerateHistogramImageOff, METH_VARARGS,
   "GenerateHistogramImageOff(self) -> None\nC++: virtual void GenerateHistogramImageOff()\n\n"},
  {"GetGenerateHistogramImage", PyvtkImageHistogram_GetGenerateHistogramImage, METH_VARARGS,
   "GetGenerateHistogramImage(self) -> int\nC++: virtual vtkTypeBool GetGenerateHistogramImage()\n\n"},
  {"SetHistogramImageSize", PyvtkImageHistogram_SetHistogramImageSize, METH_VARARGS,
   "SetHistogramImageSize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetHistogramImageSize(int _arg1, int _arg2)\nSetHistogramImageSize(self, _arg:(int, int)) -> None\nC++: void SetHistogramImageSize(const int _arg[2])\n\nSet the size of the histogram image that is produced as output.\nThe default is 256 by 256.\n"},
  {"GetHistogramImageSize", PyvtkImageHistogram_GetHistogramImageSize, METH_VARARGS,
   "GetHistogramImageSize(self) -> (int, int)\nC++: virtual int *GetHistogramImageSize()\n\n"},
  {"SetHistogramImageScale", PyvtkImageHistogram_SetHistogramImageScale, METH_VARARGS,
   "SetHistogramImageScale(self, _arg:int) -> None\nC++: virtual void SetHistogramImageScale(int _arg)\n\nSet the scale to use for the histogram image.  The default is a\nlinear scale, but sqrt and log provide better visualization.\n"},
  {"GetHistogramImageScaleMinValue", PyvtkImageHistogram_GetHistogramImageScaleMinValue, METH_VARARGS,
   "GetHistogramImageScaleMinValue(self) -> int\nC++: virtual int GetHistogramImageScaleMinValue()\n\n"},
  {"GetHistogramImageScaleMaxValue", PyvtkImageHistogram_GetHistogramImageScaleMaxValue, METH_VARARGS,
   "GetHistogramImageScaleMaxValue(self) -> int\nC++: virtual int GetHistogramImageScaleMaxValue()\n\n"},
  {"SetHistogramImageScaleToLinear", PyvtkImageHistogram_SetHistogramImageScaleToLinear, METH_VARARGS,
   "SetHistogramImageScaleToLinear(self) -> None\nC++: void SetHistogramImageScaleToLinear()\n\n"},
  {"SetHistogramImageScaleToLog", PyvtkImageHistogram_SetHistogramImageScaleToLog, METH_VARARGS,
   "SetHistogramImageScaleToLog(self) -> None\nC++: void SetHistogramImageScaleToLog()\n\n"},
  {"SetHistogramImageScaleToSqrt", PyvtkImageHistogram_SetHistogramImageScaleToSqrt, METH_VARARGS,
   "SetHistogramImageScaleToSqrt(self) -> None\nC++: void SetHistogramImageScaleToSqrt()\n\n"},
  {"GetHistogramImageScale", PyvtkImageHistogram_GetHistogramImageScale, METH_VARARGS,
   "GetHistogramImageScale(self) -> int\nC++: virtual int GetHistogramImageScale()\n\n"},
  {"GetHistogramImageScaleAsString", PyvtkImageHistogram_GetHistogramImageScaleAsString, METH_VARARGS,
   "GetHistogramImageScaleAsString(self) -> str\nC++: const char *GetHistogramImageScaleAsString()\n\n"},
  {"GetHistogram", PyvtkImageHistogram_GetHistogram, METH_VARARGS,
   "GetHistogram(self) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetHistogram()\n\nGet the histogram as a vtkIdTypeArray.  You must call Update()\nbefore calling this method.\n"},
  {"GetTotal", PyvtkImageHistogram_GetTotal, METH_VARARGS,
   "GetTotal(self) -> int\nC++: vtkIdType GetTotal()\n\nGet the total count of the histogram.  This will be the number of\nvoxels times the number of components.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageHistogram_Doc =
  "vtkImageHistogram - Compute the histogram for an image.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageHistogram generates a histogram from its input, and\n"
  "optionally produces a 2D black-and-white image of the histogram as\n"
  "its output. Unlike the class vtkImageAccumulate, a multi-component\n"
  "image does not result in a multi-dimensional histogram.  Instead, the\n"
  "resulting histogram will be the sum of the histograms of each of the\n"
  "individual components, unless SetActiveComponent is used to choose a\n"
  "single component.@par Thanks: Thanks to David Gobbi at the Seaman\n"
  "Family MR Centre and Dept. of Clinical Neurosciences, Foothills\n"
  "Medical Centre, Calgary, for providing this class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageHistogram_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingStatistics.vtkImageHistogram", // tp_name
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
  PyvtkImageHistogram_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageHistogram_StaticNew()
{
  return vtkImageHistogram::New();
}

PyObject *PyvtkImageHistogram_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageHistogram_Type, PyvtkImageHistogram_Methods,
    "vtkImageHistogram",
 &PyvtkImageHistogram_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "Linear", vtkImageHistogram::Linear },
        { "Log", vtkImageHistogram::Log },
        { "Sqrt", vtkImageHistogram::Sqrt },
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

void PyVTKAddFile_vtkImageHistogram(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageHistogram_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageHistogram", o) != 0)
  {
    Py_DECREF(o);
  }

}

