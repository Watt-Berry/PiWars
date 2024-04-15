// python wrapper for vtkWordCloud
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWordCloud.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWordCloud(PyObject *dict); }
extern "C" { PyObject *PyvtkWordCloud_ClassNew(); }


static PyObject *
PyvtkWordCloud_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWordCloud::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWordCloud::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWordCloud *tempr = vtkWordCloud::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWordCloud *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWordCloud::NewInstance());

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
PyvtkWordCloud_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWordCloud::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWordCloud::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetBackgroundColorName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColorName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundColorName(temp0);
    }
    else
    {
      op->vtkWordCloud::SetBackgroundColorName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetBackgroundColorName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColorName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetBackgroundColorName() :
      op->vtkWordCloud::GetBackgroundColorName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetBWMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBWMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBWMask(temp0);
    }
    else
    {
      op->vtkWordCloud::SetBWMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetBWMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBWMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBWMask() :
      op->vtkWordCloud::GetBWMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetColorSchemeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSchemeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorSchemeName(temp0);
    }
    else
    {
      op->vtkWordCloud::SetColorSchemeName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetColorSchemeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSchemeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetColorSchemeName() :
      op->vtkWordCloud::GetColorSchemeName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetDPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDPI(temp0);
    }
    else
    {
      op->vtkWordCloud::SetDPI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetDPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDPI() :
      op->vtkWordCloud::GetDPI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkWordCloud::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkWordCloud::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetFontFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFontFileName(temp0);
    }
    else
    {
      op->vtkWordCloud::SetFontFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetFontFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFontFileName() :
      op->vtkWordCloud::GetFontFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetGap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGap(temp0);
    }
    else
    {
      op->vtkWordCloud::SetGap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetGap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGap() :
      op->vtkWordCloud::GetGap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetMaskColorName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskColorName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskColorName(temp0);
    }
    else
    {
      op->vtkWordCloud::SetMaskColorName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetMaskColorName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskColorName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetMaskColorName() :
      op->vtkWordCloud::GetMaskColorName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetMaskFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskFileName(temp0);
    }
    else
    {
      op->vtkWordCloud::SetMaskFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetMaskFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetMaskFileName() :
      op->vtkWordCloud::GetMaskFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetMaxFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxFontSize(temp0);
    }
    else
    {
      op->vtkWordCloud::SetMaxFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetMaxFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxFontSize() :
      op->vtkWordCloud::GetMaxFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetMinFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinFontSize(temp0);
    }
    else
    {
      op->vtkWordCloud::SetMinFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetMinFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinFontSize() :
      op->vtkWordCloud::GetMinFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetMinFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinFrequency(temp0);
    }
    else
    {
      op->vtkWordCloud::SetMinFrequency(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetMinFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinFrequency() :
      op->vtkWordCloud::GetMinFrequency());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetFontMultiplier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontMultiplier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFontMultiplier(temp0);
    }
    else
    {
      op->vtkWordCloud::SetFontMultiplier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetFontMultiplier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontMultiplier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFontMultiplier() :
      op->vtkWordCloud::GetFontMultiplier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetOrientations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  std::vector<double> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->SetOrientations(temp0);
    }
    else
    {
      op->vtkWordCloud::SetOrientations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_AddOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddOrientation(temp0);
    }
    else
    {
      op->vtkWordCloud::AddOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetOrientations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<double> tempr = (ap.IsBound() ?
      op->GetOrientations() :
      op->vtkWordCloud::GetOrientations());

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_AddStopWord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddStopWord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddStopWord(temp0);
    }
    else
    {
      op->vtkWordCloud::AddStopWord(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_ClearStopWords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearStopWords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearStopWords();
    }
    else
    {
      op->vtkWordCloud::ClearStopWords();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetStopListFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStopListFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStopListFileName(temp0);
    }
    else
    {
      op->vtkWordCloud::SetStopListFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetStopListFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStopListFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetStopListFileName() :
      op->vtkWordCloud::GetStopListFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0);
    }
    else
    {
      op->vtkWordCloud::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkWordCloud::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_SetWordColorName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWordColorName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWordColorName(temp0);
    }
    else
    {
      op->vtkWordCloud::SetWordColorName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetWordColorName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWordColorName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetWordColorName() :
      op->vtkWordCloud::GetWordColorName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetKeptWords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeptWords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> *tempr = (ap.IsBound() ?
      &op->GetKeptWords() :
      &op->vtkWordCloud::GetKeptWords());

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetSkippedWords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkippedWords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> *tempr = (ap.IsBound() ?
      &op->GetSkippedWords() :
      &op->vtkWordCloud::GetSkippedWords());

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkWordCloud_GetStoppedWords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStoppedWords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWordCloud *op = static_cast<vtkWordCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> *tempr = (ap.IsBound() ?
      &op->GetStoppedWords() :
      &op->vtkWordCloud::GetStoppedWords());

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}

static PyMethodDef PyvtkWordCloud_Methods[] = {
  {"IsTypeOf", PyvtkWordCloud_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWordCloud_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWordCloud_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWordCloud\nC++: static vtkWordCloud *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWordCloud_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWordCloud\nC++: vtkWordCloud *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWordCloud_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWordCloud_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetBackgroundColorName", PyvtkWordCloud_SetBackgroundColorName, METH_VARARGS,
   "SetBackgroundColorName(self, arg:str) -> None\nC++: virtual void SetBackgroundColorName(std::string arg)\n\n"},
  {"GetBackgroundColorName", PyvtkWordCloud_GetBackgroundColorName, METH_VARARGS,
   "GetBackgroundColorName(self) -> str\nC++: virtual std::string GetBackgroundColorName()\n\n"},
  {"SetBWMask", PyvtkWordCloud_SetBWMask, METH_VARARGS,
   "SetBWMask(self, arg:bool) -> None\nC++: virtual void SetBWMask(bool arg)\n\n"},
  {"GetBWMask", PyvtkWordCloud_GetBWMask, METH_VARARGS,
   "GetBWMask(self) -> bool\nC++: virtual bool GetBWMask()\n\n"},
  {"SetColorSchemeName", PyvtkWordCloud_SetColorSchemeName, METH_VARARGS,
   "SetColorSchemeName(self, arg:str) -> None\nC++: virtual void SetColorSchemeName(std::string arg)\n\n"},
  {"GetColorSchemeName", PyvtkWordCloud_GetColorSchemeName, METH_VARARGS,
   "GetColorSchemeName(self) -> str\nC++: virtual std::string GetColorSchemeName()\n\n"},
  {"SetDPI", PyvtkWordCloud_SetDPI, METH_VARARGS,
   "SetDPI(self, _arg:int) -> None\nC++: virtual void SetDPI(int _arg)\n\n"},
  {"GetDPI", PyvtkWordCloud_GetDPI, METH_VARARGS,
   "GetDPI(self) -> int\nC++: virtual int GetDPI()\n\n"},
  {"SetFileName", PyvtkWordCloud_SetFileName, METH_VARARGS,
   "SetFileName(self, arg:str) -> None\nC++: virtual void SetFileName(std::string arg)\n\n"},
  {"GetFileName", PyvtkWordCloud_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual std::string GetFileName()\n\n"},
  {"SetFontFileName", PyvtkWordCloud_SetFontFileName, METH_VARARGS,
   "SetFontFileName(self, arg:str) -> None\nC++: virtual void SetFontFileName(std::string arg)\n\n"},
  {"GetFontFileName", PyvtkWordCloud_GetFontFileName, METH_VARARGS,
   "GetFontFileName(self) -> str\nC++: virtual std::string GetFontFileName()\n\n"},
  {"SetGap", PyvtkWordCloud_SetGap, METH_VARARGS,
   "SetGap(self, _arg:int) -> None\nC++: virtual void SetGap(int _arg)\n\n"},
  {"GetGap", PyvtkWordCloud_GetGap, METH_VARARGS,
   "GetGap(self) -> int\nC++: virtual int GetGap()\n\n"},
  {"SetMaskColorName", PyvtkWordCloud_SetMaskColorName, METH_VARARGS,
   "SetMaskColorName(self, arg:str) -> None\nC++: virtual void SetMaskColorName(std::string arg)\n\n"},
  {"GetMaskColorName", PyvtkWordCloud_GetMaskColorName, METH_VARARGS,
   "GetMaskColorName(self) -> str\nC++: virtual std::string GetMaskColorName()\n\n"},
  {"SetMaskFileName", PyvtkWordCloud_SetMaskFileName, METH_VARARGS,
   "SetMaskFileName(self, arg:str) -> None\nC++: virtual void SetMaskFileName(std::string arg)\n\n"},
  {"GetMaskFileName", PyvtkWordCloud_GetMaskFileName, METH_VARARGS,
   "GetMaskFileName(self) -> str\nC++: virtual std::string GetMaskFileName()\n\n"},
  {"SetMaxFontSize", PyvtkWordCloud_SetMaxFontSize, METH_VARARGS,
   "SetMaxFontSize(self, _arg:int) -> None\nC++: virtual void SetMaxFontSize(int _arg)\n\n"},
  {"GetMaxFontSize", PyvtkWordCloud_GetMaxFontSize, METH_VARARGS,
   "GetMaxFontSize(self) -> int\nC++: virtual int GetMaxFontSize()\n\n"},
  {"SetMinFontSize", PyvtkWordCloud_SetMinFontSize, METH_VARARGS,
   "SetMinFontSize(self, _arg:int) -> None\nC++: virtual void SetMinFontSize(int _arg)\n\n"},
  {"GetMinFontSize", PyvtkWordCloud_GetMinFontSize, METH_VARARGS,
   "GetMinFontSize(self) -> int\nC++: virtual int GetMinFontSize()\n\n"},
  {"SetMinFrequency", PyvtkWordCloud_SetMinFrequency, METH_VARARGS,
   "SetMinFrequency(self, _arg:int) -> None\nC++: virtual void SetMinFrequency(int _arg)\n\n"},
  {"GetMinFrequency", PyvtkWordCloud_GetMinFrequency, METH_VARARGS,
   "GetMinFrequency(self) -> int\nC++: virtual int GetMinFrequency()\n\n"},
  {"SetFontMultiplier", PyvtkWordCloud_SetFontMultiplier, METH_VARARGS,
   "SetFontMultiplier(self, _arg:int) -> None\nC++: virtual void SetFontMultiplier(int _arg)\n\n"},
  {"GetFontMultiplier", PyvtkWordCloud_GetFontMultiplier, METH_VARARGS,
   "GetFontMultiplier(self) -> int\nC++: virtual int GetFontMultiplier()\n\n"},
  {"SetOrientations", PyvtkWordCloud_SetOrientations, METH_VARARGS,
   "SetOrientations(self, arg:[float, ...]) -> None\nC++: virtual void SetOrientations(OrientationsContainer arg)\n\n"},
  {"AddOrientation", PyvtkWordCloud_AddOrientation, METH_VARARGS,
   "AddOrientation(self, arg:float) -> None\nC++: void AddOrientation(double arg)\n\n"},
  {"GetOrientations", PyvtkWordCloud_GetOrientations, METH_VARARGS,
   "GetOrientations(self) -> (float, ...)\nC++: virtual OrientationsContainer GetOrientations()\n\n"},
  {"AddStopWord", PyvtkWordCloud_AddStopWord, METH_VARARGS,
   "AddStopWord(self, word:str) -> None\nC++: void AddStopWord(std::string word)\n\n"},
  {"ClearStopWords", PyvtkWordCloud_ClearStopWords, METH_VARARGS,
   "ClearStopWords(self) -> None\nC++: void ClearStopWords()\n\n"},
  {"SetStopListFileName", PyvtkWordCloud_SetStopListFileName, METH_VARARGS,
   "SetStopListFileName(self, arg:str) -> None\nC++: virtual void SetStopListFileName(std::string arg)\n\n"},
  {"GetStopListFileName", PyvtkWordCloud_GetStopListFileName, METH_VARARGS,
   "GetStopListFileName(self) -> str\nC++: virtual std::string GetStopListFileName()\n\n"},
  {"SetTitle", PyvtkWordCloud_SetTitle, METH_VARARGS,
   "SetTitle(self, arg:str) -> None\nC++: virtual void SetTitle(std::string arg)\n\n"},
  {"GetTitle", PyvtkWordCloud_GetTitle, METH_VARARGS,
   "GetTitle(self) -> str\nC++: virtual std::string GetTitle()\n\n"},
  {"SetWordColorName", PyvtkWordCloud_SetWordColorName, METH_VARARGS,
   "SetWordColorName(self, arg:str) -> None\nC++: virtual void SetWordColorName(std::string arg)\n\n"},
  {"GetWordColorName", PyvtkWordCloud_GetWordColorName, METH_VARARGS,
   "GetWordColorName(self) -> str\nC++: virtual std::string GetWordColorName()\n\n"},
  {"GetKeptWords", PyvtkWordCloud_GetKeptWords, METH_VARARGS,
   "GetKeptWords(self) -> (str, ...)\nC++: virtual std::vector<std::string> &GetKeptWords()\n\n"},
  {"GetSkippedWords", PyvtkWordCloud_GetSkippedWords, METH_VARARGS,
   "GetSkippedWords(self) -> (str, ...)\nC++: virtual std::vector<std::string> &GetSkippedWords()\n\n"},
  {"GetStoppedWords", PyvtkWordCloud_GetStoppedWords, METH_VARARGS,
   "GetStoppedWords(self) -> (str, ...)\nC++: virtual std::vector<std::string> &GetStoppedWords()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWordCloud_Doc =
  "vtkWordCloud - generate a word cloud visualization of a text document\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "Word Clouds, AKA Tag Clouds\n"
  "(https://en.wikipedia.org/wiki/Tag_cloud), are a text visualization\n"
  "technique that displays individual words with properties that depend\n"
  "on the frequency of a word in a document. vtkWordCloud varies the\n"
  "font size based on word frequency. Word Clouds are useful for quickly\n"
  "perceiving the most prominent terms in a document. Also, Word Clouds\n"
  "can identify trends and patterns that would otherwise be unclear or\n"
  "difficult to see in a tabular format. Frequently used keywords stand\n"
  "out better in a word cloud. Common words that might be overlooked in\n"
  "tabular form are highlighted in the larger text, making them pop out\n"
  "when displayed in a word cloud.\n\n"
  "There is some controversy about the usefulness of word clouds. Their\n"
  "best use may be for presentations, see https://tinyurl.com/y59hy7oa\n\n"
  "The generation of the word cloud proceeds as follows:\n"
  "1. Read the text file\n"
  "2. Split text into words to be processed Extract words from the text\n"
  "   Drop the case of each word for filtering Filter the words Replace\n"
  "   words from the ReplacementPairs list Skip the word if it is in the\n"
  "stop list or contains a digit Skip single character words Raise the\n"
  "   case of the first letter in each word Sort the word list by\n"
  "   frequency\n"
  "3. Create a rectangular mask image or read a mask image\n"
  "4. For each word Render the word into an image Try to add the word to\n"
  "the word cloud image. For each orientation, see if the word \"fits\" If\n"
  "no fit, move along a path to try another location\n\n"
  "NOTE: A word fits if all of the non-zero word cloud pixels in the\n"
  "extent of the text image are background pixels.\n\n"
  "NOTE: The path is an Archimedean Spiral\n"
  "(https://en.wikipedia.org/wiki/Archimedean_spiral)\n\n"
  "* NOTE: vtkWordCloud has a built-in list of stop word. Stop words are\n"
  "* words that are filtered out before processing of the text, such as\n"
  "* the, is, at, which, and so on.\n"
  "*\n"
  "* NOTE: Color names are defined in vtkNamedColors. A visual\n"
  "* representation of color names is here: https://tinyurl.com/y3yxcxj6\n"
  "*\n"
  "* NOTE: vtkWordCloud offers Several methods to customize the\n"
  "  resulting\n"
  "* visualization. The class provides defaults that provide a\n"
  "  reasonable\n"
  "* result.\n"
  "*\n"
  "* BackgroundColorName - The vtkNamedColors name for the background\n"
  "* (MidNightBlue). See https://tinyurl.com/y3yxcxj6 for a visual\n"
  "* representation of the named colors.\n"
  "*\n"
  "* ColorDistribution - Distribution of random colors(.6 1.0), if\n"
  "* WordColorName is empty.\n"
  "*\n"
  "* ColorSchemeName - Name of a color scheme from vtkColorSeries to be\n"
  "* used to select colors for the words (), if WordColorName is empty.\n"
  "* See https://tinyurl.com/y3j6c27o for a visual representation of the\n"
  "* color schemes.\n"
  "*\n"
  "* DPI - Dots per inch(200) of the rendered text. DPI is used as a\n"
  "* scaling mechanism for the words. As DPI increases, the word size\n"
  "* increases. If there are too, few skipped words, increase this\n"
  "  value,\n"
  "* too many, decrease it.\n"
  "*\n"
  "* FontFileName - If empty, the built-in Arial font is used(). The\n"
  "* FontFileName is the name of a file that contains a TrueType font.\n"
  "* https://www.1001freefonts.com/ is a good source for free TrueType\n"
  "* fonts.\n"
  "*\n"
  "* FontMultiplier - Font multiplier(6). The final FontSize is this\n"
  "  value\n"
  "* times the word frequency.\n"
  "*\n"
  "* Gap - Space gap of words (2). The gap is the number of spaces added\n"
  "to\n"
  "* the beginning and end of each word.\n"
  "*\n"
  "* MaskColorName - Name of the color for the mask (black). This is the\n"
  "* name of the vtknamedColors that defines the foreground of the\n"
  "* mask. Usually black or white.  See https://tinyurl.com/y3yxcxj6 for\n"
  "* a visual representation of the named colors.\n"
  "*\n"
  "* MaskFileName - Mask file name(). If a mask file is specified, it\n"
  "  will be\n"
  "* used as the mask. Otherwise, a black square is used as the mask.\n"
  "  The\n"
  "* mask file should contain three channels of unsigned char values. If\n"
  "* the mask file is just a single unsigned char, specify turn the\n"
  "  boolean\n"
  "* BWMask on.  If BWmask is on, the class will create a three channel\n"
  "* image using vtkImageAppendComponents.\n"
  "*\n"
  "* BWMask - Mask image has a single channel(false). Mask images\n"
  "  typically\n"
  "* have three channels (r,g,b).\n"
  "*\n"
  "* MaxFontSize - Maximum font size(48).\n"
  "*\n"
  "* MinFontSize - Minimum font size(8).\n"
  "*\n"
  "* MinFrequency - Minimum word frequency accepted(2). Word with\n"
  "* frequencies less than this will be ignored.\n"
  "*\n"
  "* OffsetDistribution - Range of uniform random offsets(-size[0]/100.0\n"
  "* -size{1]/100.0)(-20 20). These offsets are offsets from the\n"
  "  generated\n"
  "* path for word layout.\n"
  "*\n"
  "* OrientationDistribution - Ranges of random orientations(-20 20). If\n"
  "* discrete orientations are not defined, these orientations will be\n"
  "* generated.\n"
  "*\n"
  "* Orientations - Vector of discrete orientations(). If non-empty,\n"
  "* these will be used instead of the orientations distribution\");\n"
  "*\n"
  "* ReplacementPairs - Replace the first word with another second word\n"
  "* ().  The each word will also added to the StopList. The second\n"
  "* argument can contain multiple words. For example you could replace\n"
  "* \"bill\" with \"Bill Lorensen\" or, \"vtk\" with \"VTK . Remember that\n"
  "* words are always stored internally with lower case, even though the\n"
  "* first letter is capitalized in the Word Cloud.\n"
  "*\n"
  "* Sizes - Size of image(640 480).\n"
  "*\n"
  "* StopWords - User provided stop words(). Stop words are words that\n"
  "* are filtered out before processing of the text, such as the, is,\n"
  "* at, which, and so on.  vtkWordClass has built-in stop words. The\n"
  "* user-provided stop words are added to the built-in list. See\n"
  "* https://en.wikipedia.org/wiki/Stop_words for a description.  The\n"
  "* built-in stop words were derived from the english stop words at\n"
  "* https://www.ranks.nl/stopwords. Stop words for other languages are\n"
  "* also available.\n"
  "*\n"
  "* StopListFileName - the name of a file that contains stop words,\n"
  "* one word per line (). If present, the stop words in the file\n"
  "* replace the built-in stop list.\n"
  "*\n"
  "* Title - Add this word to the document's words and set a high\n"
  "* frequency, so that is will be rendered first.\n"
  "*\n"
  "* WordColorName - Name of the color for the words(). The name is\n"
  "* selected from vtkNamedColors. If the name is empty, the\n"
  "* ColorDistribution will generate random colors.  See\n"
  "* https://tinyurl.com/y3yxcxj6 for a visual representation of the\n"
  "* named colors.\n"
  "*\n"
  "* The class also provided Get methods that return vectors\n"
  "* StopWords, SkippedWords and KeptWords.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWordCloud_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisCore.vtkWordCloud", // tp_name
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
  PyvtkWordCloud_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWordCloud_StaticNew()
{
  return vtkWordCloud::New();
}

PyObject *PyvtkWordCloud_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWordCloud_Type, PyvtkWordCloud_Methods,
    "vtkWordCloud",
 &PyvtkWordCloud_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWordCloud(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWordCloud_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWordCloud", o) != 0)
  {
    Py_DECREF(o);
  }

}

