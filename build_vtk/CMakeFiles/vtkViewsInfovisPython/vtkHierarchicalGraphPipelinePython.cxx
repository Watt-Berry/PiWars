// python wrapper for vtkHierarchicalGraphPipeline
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHierarchicalGraphPipeline.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHierarchicalGraphPipeline(PyObject *dict); }
extern "C" { PyObject *PyvtkHierarchicalGraphPipeline_ClassNew(); }


static PyObject *
PyvtkHierarchicalGraphPipeline_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHierarchicalGraphPipeline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHierarchicalGraphPipeline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHierarchicalGraphPipeline *tempr = vtkHierarchicalGraphPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHierarchicalGraphPipeline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHierarchicalGraphPipeline::NewInstance());

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
PyvtkHierarchicalGraphPipeline_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHierarchicalGraphPipeline::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHierarchicalGraphPipeline::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetActor() :
      op->vtkHierarchicalGraphPipeline::GetActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetLabelActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->GetLabelActor() :
      op->vtkHierarchicalGraphPipeline::GetLabelActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBundlingStrength(temp0);
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::SetBundlingStrength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBundlingStrength() :
      op->vtkHierarchicalGraphPipeline::GetBundlingStrength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelArrayName(temp0);
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::SetLabelArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLabelArrayName() :
      op->vtkHierarchicalGraphPipeline::GetLabelArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelVisibility(temp0);
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::SetLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLabelVisibility() :
      op->vtkHierarchicalGraphPipeline::GetLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOn();
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::LabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOff();
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::LabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLabelTextProperty(temp0);
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::SetLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkHierarchicalGraphPipeline::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorArrayName(temp0);
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::SetColorArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColorArrayName() :
      op->vtkHierarchicalGraphPipeline::GetColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetColorEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorEdgesByArray(temp0);
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::SetColorEdgesByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetColorEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorEdgesByArray() :
      op->vtkHierarchicalGraphPipeline::GetColorEdgesByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_ColorEdgesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorEdgesByArrayOn();
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::ColorEdgesByArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_ColorEdgesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorEdgesByArrayOff();
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::ColorEdgesByArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVisibility() :
      op->vtkHierarchicalGraphPipeline::GetVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_VisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VisibilityOn();
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::VisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_VisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VisibilityOff();
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::VisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_ConvertSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  vtkDataRepresentation *temp0 = nullptr;
  vtkSelection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataRepresentation") &&
      ap.GetVTKObject(temp1, "vtkSelection"))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->ConvertSelection(temp0, temp1) :
      op->vtkHierarchicalGraphPipeline::ConvertSelection(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_PrepareInputConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareInputConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  vtkAlgorithmOutput *temp1 = nullptr;
  vtkAlgorithmOutput *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput") &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput") &&
      ap.GetVTKObject(temp2, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->PrepareInputConnections(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::PrepareInputConnections(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

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
      op->vtkHierarchicalGraphPipeline::ApplyViewTheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHoverArrayName(temp0);
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::SetHoverArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetHoverArrayName() :
      op->vtkHierarchicalGraphPipeline::GetHoverArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_SetSplineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSplineType(temp0);
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::SetSplineType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_GetSplineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplineType() :
      op->vtkHierarchicalGraphPipeline::GetSplineType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphPipeline_RegisterProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphPipeline *op = static_cast<vtkHierarchicalGraphPipeline *>(vp);

  vtkRenderView *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderView"))
  {
    if (ap.IsBound())
    {
      op->RegisterProgress(temp0);
    }
    else
    {
      op->vtkHierarchicalGraphPipeline::RegisterProgress(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHierarchicalGraphPipeline_Methods[] = {
  {"IsTypeOf", PyvtkHierarchicalGraphPipeline_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHierarchicalGraphPipeline_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHierarchicalGraphPipeline_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHierarchicalGraphPipeline\nC++: static vtkHierarchicalGraphPipeline *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHierarchicalGraphPipeline_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHierarchicalGraphPipeline\nC++: vtkHierarchicalGraphPipeline *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHierarchicalGraphPipeline_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHierarchicalGraphPipeline_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetActor", PyvtkHierarchicalGraphPipeline_GetActor, METH_VARARGS,
   "GetActor(self) -> vtkActor\nC++: virtual vtkActor *GetActor()\n\nThe actor associated with the hierarchical graph.\n"},
  {"GetLabelActor", PyvtkHierarchicalGraphPipeline_GetLabelActor, METH_VARARGS,
   "GetLabelActor(self) -> vtkActor2D\nC++: virtual vtkActor2D *GetLabelActor()\n\nThe actor associated with the hierarchical graph.\n"},
  {"SetBundlingStrength", PyvtkHierarchicalGraphPipeline_SetBundlingStrength, METH_VARARGS,
   "SetBundlingStrength(self, strength:float) -> None\nC++: virtual void SetBundlingStrength(double strength)\n\nThe bundling strength for the bundled edges.\n"},
  {"GetBundlingStrength", PyvtkHierarchicalGraphPipeline_GetBundlingStrength, METH_VARARGS,
   "GetBundlingStrength(self) -> float\nC++: virtual double GetBundlingStrength()\n\n"},
  {"SetLabelArrayName", PyvtkHierarchicalGraphPipeline_SetLabelArrayName, METH_VARARGS,
   "SetLabelArrayName(self, name:str) -> None\nC++: virtual void SetLabelArrayName(const char *name)\n\nThe edge label array name.\n"},
  {"GetLabelArrayName", PyvtkHierarchicalGraphPipeline_GetLabelArrayName, METH_VARARGS,
   "GetLabelArrayName(self) -> str\nC++: virtual const char *GetLabelArrayName()\n\n"},
  {"SetLabelVisibility", PyvtkHierarchicalGraphPipeline_SetLabelVisibility, METH_VARARGS,
   "SetLabelVisibility(self, vis:bool) -> None\nC++: virtual void SetLabelVisibility(bool vis)\n\nThe edge label visibility.\n"},
  {"GetLabelVisibility", PyvtkHierarchicalGraphPipeline_GetLabelVisibility, METH_VARARGS,
   "GetLabelVisibility(self) -> bool\nC++: virtual bool GetLabelVisibility()\n\n"},
  {"LabelVisibilityOn", PyvtkHierarchicalGraphPipeline_LabelVisibilityOn, METH_VARARGS,
   "LabelVisibilityOn(self) -> None\nC++: virtual void LabelVisibilityOn()\n\n"},
  {"LabelVisibilityOff", PyvtkHierarchicalGraphPipeline_LabelVisibilityOff, METH_VARARGS,
   "LabelVisibilityOff(self) -> None\nC++: virtual void LabelVisibilityOff()\n\n"},
  {"SetLabelTextProperty", PyvtkHierarchicalGraphPipeline_SetLabelTextProperty, METH_VARARGS,
   "SetLabelTextProperty(self, prop:vtkTextProperty) -> None\nC++: virtual void SetLabelTextProperty(vtkTextProperty *prop)\n\nThe edge label text property.\n"},
  {"GetLabelTextProperty", PyvtkHierarchicalGraphPipeline_GetLabelTextProperty, METH_VARARGS,
   "GetLabelTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty()\n\n"},
  {"SetColorArrayName", PyvtkHierarchicalGraphPipeline_SetColorArrayName, METH_VARARGS,
   "SetColorArrayName(self, name:str) -> None\nC++: virtual void SetColorArrayName(const char *name)\n\nThe edge color array.\n"},
  {"GetColorArrayName", PyvtkHierarchicalGraphPipeline_GetColorArrayName, METH_VARARGS,
   "GetColorArrayName(self) -> str\nC++: virtual const char *GetColorArrayName()\n\n"},
  {"SetColorEdgesByArray", PyvtkHierarchicalGraphPipeline_SetColorEdgesByArray, METH_VARARGS,
   "SetColorEdgesByArray(self, vis:bool) -> None\nC++: virtual void SetColorEdgesByArray(bool vis)\n\nWhether to color the edges by an array.\n"},
  {"GetColorEdgesByArray", PyvtkHierarchicalGraphPipeline_GetColorEdgesByArray, METH_VARARGS,
   "GetColorEdgesByArray(self) -> bool\nC++: virtual bool GetColorEdgesByArray()\n\n"},
  {"ColorEdgesByArrayOn", PyvtkHierarchicalGraphPipeline_ColorEdgesByArrayOn, METH_VARARGS,
   "ColorEdgesByArrayOn(self) -> None\nC++: virtual void ColorEdgesByArrayOn()\n\n"},
  {"ColorEdgesByArrayOff", PyvtkHierarchicalGraphPipeline_ColorEdgesByArrayOff, METH_VARARGS,
   "ColorEdgesByArrayOff(self) -> None\nC++: virtual void ColorEdgesByArrayOff()\n\n"},
  {"SetVisibility", PyvtkHierarchicalGraphPipeline_SetVisibility, METH_VARARGS,
   "SetVisibility(self, vis:bool) -> None\nC++: virtual void SetVisibility(bool vis)\n\nThe visibility of this graph.\n"},
  {"GetVisibility", PyvtkHierarchicalGraphPipeline_GetVisibility, METH_VARARGS,
   "GetVisibility(self) -> bool\nC++: virtual bool GetVisibility()\n\n"},
  {"VisibilityOn", PyvtkHierarchicalGraphPipeline_VisibilityOn, METH_VARARGS,
   "VisibilityOn(self) -> None\nC++: virtual void VisibilityOn()\n\n"},
  {"VisibilityOff", PyvtkHierarchicalGraphPipeline_VisibilityOff, METH_VARARGS,
   "VisibilityOff(self) -> None\nC++: virtual void VisibilityOff()\n\n"},
  {"ConvertSelection", PyvtkHierarchicalGraphPipeline_ConvertSelection, METH_VARARGS,
   "ConvertSelection(self, rep:vtkDataRepresentation,\n    sel:vtkSelection) -> vtkSelection\nC++: virtual vtkSelection *ConvertSelection(\n    vtkDataRepresentation *rep, vtkSelection *sel)\n\nReturns a new selection relevant to this graph based on an input\nselection and the view that this graph is contained in.\n"},
  {"PrepareInputConnections", PyvtkHierarchicalGraphPipeline_PrepareInputConnections, METH_VARARGS,
   "PrepareInputConnections(self, graphConn:vtkAlgorithmOutput,\n    treeConn:vtkAlgorithmOutput, annConn:vtkAlgorithmOutput)\n    -> None\nC++: virtual void PrepareInputConnections(\n    vtkAlgorithmOutput *graphConn, vtkAlgorithmOutput *treeConn,\n    vtkAlgorithmOutput *annConn)\n\nSets the input connections for this graph. graphConn is the input\ngraph connection. treeConn is the input tree connection. annConn\nis the annotation link connection.\n"},
  {"ApplyViewTheme", PyvtkHierarchicalGraphPipeline_ApplyViewTheme, METH_VARARGS,
   "ApplyViewTheme(self, theme:vtkViewTheme) -> None\nC++: virtual void ApplyViewTheme(vtkViewTheme *theme)\n\nApplies the view theme to this graph.\n"},
  {"SetHoverArrayName", PyvtkHierarchicalGraphPipeline_SetHoverArrayName, METH_VARARGS,
   "SetHoverArrayName(self, _arg:str) -> None\nC++: virtual void SetHoverArrayName(const char *_arg)\n\nThe array to use while hovering over an edge.\n"},
  {"GetHoverArrayName", PyvtkHierarchicalGraphPipeline_GetHoverArrayName, METH_VARARGS,
   "GetHoverArrayName(self) -> str\nC++: virtual char *GetHoverArrayName()\n\n"},
  {"SetSplineType", PyvtkHierarchicalGraphPipeline_SetSplineType, METH_VARARGS,
   "SetSplineType(self, type:int) -> None\nC++: virtual void SetSplineType(int type)\n\nThe spline mode to use in vtkSplineGraphEdges.\nvtkSplineGraphEdges::CUSTOM uses a vtkCardinalSpline.\nvtkSplineGraphEdges::BSPLINE uses a b-spline. The default is\nBSPLINE.\n"},
  {"GetSplineType", PyvtkHierarchicalGraphPipeline_GetSplineType, METH_VARARGS,
   "GetSplineType(self) -> int\nC++: virtual int GetSplineType()\n\n"},
  {"RegisterProgress", PyvtkHierarchicalGraphPipeline_RegisterProgress, METH_VARARGS,
   "RegisterProgress(self, view:vtkRenderView) -> None\nC++: void RegisterProgress(vtkRenderView *view)\n\nRegister progress with a view.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHierarchicalGraphPipeline_Doc =
  "vtkHierarchicalGraphPipeline - helper class for rendering graphs\nsuperimposed on a tree.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkHierarchicalGraphPipeline renders bundled edges that are meant to\n"
  "be viewed as an overlay on a tree. This class is not for general use,\n"
  "but is used in the internals of vtkRenderedHierarchyRepresentation\n"
  "and vtkRenderedTreeAreaRepresentation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHierarchicalGraphPipeline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkHierarchicalGraphPipeline", // tp_name
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
  PyvtkHierarchicalGraphPipeline_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHierarchicalGraphPipeline_StaticNew()
{
  return vtkHierarchicalGraphPipeline::New();
}

PyObject *PyvtkHierarchicalGraphPipeline_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHierarchicalGraphPipeline_Type, PyvtkHierarchicalGraphPipeline_Methods,
    "vtkHierarchicalGraphPipeline",
 &PyvtkHierarchicalGraphPipeline_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHierarchicalGraphPipeline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHierarchicalGraphPipeline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHierarchicalGraphPipeline", o) != 0)
  {
    Py_DECREF(o);
  }

}

