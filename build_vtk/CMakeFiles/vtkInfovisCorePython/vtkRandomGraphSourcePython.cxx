// python wrapper for vtkRandomGraphSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRandomGraphSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRandomGraphSource(PyObject *dict); }
extern "C" { PyObject *PyvtkRandomGraphSource_ClassNew(); }


static PyObject *
PyvtkRandomGraphSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRandomGraphSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRandomGraphSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRandomGraphSource *tempr = vtkRandomGraphSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRandomGraphSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRandomGraphSource::NewInstance());

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
PyvtkRandomGraphSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRandomGraphSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRandomGraphSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVertices() :
      op->vtkRandomGraphSource::GetNumberOfVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfVertices(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetNumberOfVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfVerticesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVerticesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVerticesMinValue() :
      op->vtkRandomGraphSource::GetNumberOfVerticesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfVerticesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVerticesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVerticesMaxValue() :
      op->vtkRandomGraphSource::GetNumberOfVerticesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkRandomGraphSource::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfEdges(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetNumberOfEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfEdgesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgesMinValue() :
      op->vtkRandomGraphSource::GetNumberOfEdgesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfEdgesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgesMaxValue() :
      op->vtkRandomGraphSource::GetNumberOfEdgesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgeProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeProbability() :
      op->vtkRandomGraphSource::GetEdgeProbability());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetEdgeProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeProbability(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetEdgeProbability(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgeProbabilityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeProbabilityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeProbabilityMinValue() :
      op->vtkRandomGraphSource::GetEdgeProbabilityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgeProbabilityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeProbabilityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeProbabilityMaxValue() :
      op->vtkRandomGraphSource::GetEdgeProbabilityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetIncludeEdgeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeEdgeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncludeEdgeWeights(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetIncludeEdgeWeights(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetIncludeEdgeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeEdgeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIncludeEdgeWeights() :
      op->vtkRandomGraphSource::GetIncludeEdgeWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_IncludeEdgeWeightsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeEdgeWeightsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeEdgeWeightsOn();
    }
    else
    {
      op->vtkRandomGraphSource::IncludeEdgeWeightsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_IncludeEdgeWeightsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeEdgeWeightsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeEdgeWeightsOff();
    }
    else
    {
      op->vtkRandomGraphSource::IncludeEdgeWeightsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeWeightArrayName(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetEdgeWeightArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEdgeWeightArrayName() :
      op->vtkRandomGraphSource::GetEdgeWeightArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirected(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetDirected(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDirected() :
      op->vtkRandomGraphSource::GetDirected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_DirectedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectedOn();
    }
    else
    {
      op->vtkRandomGraphSource::DirectedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_DirectedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectedOff();
    }
    else
    {
      op->vtkRandomGraphSource::DirectedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetUseEdgeProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseEdgeProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseEdgeProbability(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetUseEdgeProbability(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetUseEdgeProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseEdgeProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseEdgeProbability() :
      op->vtkRandomGraphSource::GetUseEdgeProbability());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_UseEdgeProbabilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeProbabilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseEdgeProbabilityOn();
    }
    else
    {
      op->vtkRandomGraphSource::UseEdgeProbabilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_UseEdgeProbabilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeProbabilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseEdgeProbabilityOff();
    }
    else
    {
      op->vtkRandomGraphSource::UseEdgeProbabilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetStartWithTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartWithTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartWithTree(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetStartWithTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetStartWithTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartWithTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetStartWithTree() :
      op->vtkRandomGraphSource::GetStartWithTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_StartWithTreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWithTreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartWithTreeOn();
    }
    else
    {
      op->vtkRandomGraphSource::StartWithTreeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_StartWithTreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWithTreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartWithTreeOff();
    }
    else
    {
      op->vtkRandomGraphSource::StartWithTreeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetAllowSelfLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowSelfLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowSelfLoops(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetAllowSelfLoops(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetAllowSelfLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowSelfLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAllowSelfLoops() :
      op->vtkRandomGraphSource::GetAllowSelfLoops());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_AllowSelfLoopsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowSelfLoopsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowSelfLoopsOn();
    }
    else
    {
      op->vtkRandomGraphSource::AllowSelfLoopsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_AllowSelfLoopsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowSelfLoopsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowSelfLoopsOff();
    }
    else
    {
      op->vtkRandomGraphSource::AllowSelfLoopsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetAllowParallelEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowParallelEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowParallelEdges(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetAllowParallelEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetAllowParallelEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowParallelEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAllowParallelEdges() :
      op->vtkRandomGraphSource::GetAllowParallelEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_AllowParallelEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowParallelEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowParallelEdgesOn();
    }
    else
    {
      op->vtkRandomGraphSource::AllowParallelEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_AllowParallelEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowParallelEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowParallelEdgesOff();
    }
    else
    {
      op->vtkRandomGraphSource::AllowParallelEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePedigreeIds(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetGeneratePedigreeIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePedigreeIds() :
      op->vtkRandomGraphSource::GetGeneratePedigreeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GeneratePedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePedigreeIdsOn();
    }
    else
    {
      op->vtkRandomGraphSource::GeneratePedigreeIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GeneratePedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePedigreeIdsOff();
    }
    else
    {
      op->vtkRandomGraphSource::GeneratePedigreeIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetVertexPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexPedigreeIdArrayName(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetVertexPedigreeIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetVertexPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVertexPedigreeIdArrayName() :
      op->vtkRandomGraphSource::GetVertexPedigreeIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetEdgePedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgePedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgePedigreeIdArrayName(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetEdgePedigreeIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgePedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgePedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEdgePedigreeIdArrayName() :
      op->vtkRandomGraphSource::GetEdgePedigreeIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeed(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSeed() :
      op->vtkRandomGraphSource::GetSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRandomGraphSource_Methods[] = {
  {"IsTypeOf", PyvtkRandomGraphSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRandomGraphSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRandomGraphSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRandomGraphSource\nC++: static vtkRandomGraphSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRandomGraphSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRandomGraphSource\nC++: vtkRandomGraphSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRandomGraphSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRandomGraphSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfVertices", PyvtkRandomGraphSource_GetNumberOfVertices, METH_VARARGS,
   "GetNumberOfVertices(self) -> int\nC++: virtual int GetNumberOfVertices()\n\nThe number of vertices in the graph.\n"},
  {"SetNumberOfVertices", PyvtkRandomGraphSource_SetNumberOfVertices, METH_VARARGS,
   "SetNumberOfVertices(self, _arg:int) -> None\nC++: virtual void SetNumberOfVertices(int _arg)\n\n"},
  {"GetNumberOfVerticesMinValue", PyvtkRandomGraphSource_GetNumberOfVerticesMinValue, METH_VARARGS,
   "GetNumberOfVerticesMinValue(self) -> int\nC++: virtual int GetNumberOfVerticesMinValue()\n\n"},
  {"GetNumberOfVerticesMaxValue", PyvtkRandomGraphSource_GetNumberOfVerticesMaxValue, METH_VARARGS,
   "GetNumberOfVerticesMaxValue(self) -> int\nC++: virtual int GetNumberOfVerticesMaxValue()\n\n"},
  {"GetNumberOfEdges", PyvtkRandomGraphSource_GetNumberOfEdges, METH_VARARGS,
   "GetNumberOfEdges(self) -> int\nC++: virtual int GetNumberOfEdges()\n\nIf UseEdgeProbability is off, creates a graph with the specified\nnumber of edges.  Duplicate (parallel) edges are allowed.\n"},
  {"SetNumberOfEdges", PyvtkRandomGraphSource_SetNumberOfEdges, METH_VARARGS,
   "SetNumberOfEdges(self, _arg:int) -> None\nC++: virtual void SetNumberOfEdges(int _arg)\n\n"},
  {"GetNumberOfEdgesMinValue", PyvtkRandomGraphSource_GetNumberOfEdgesMinValue, METH_VARARGS,
   "GetNumberOfEdgesMinValue(self) -> int\nC++: virtual int GetNumberOfEdgesMinValue()\n\n"},
  {"GetNumberOfEdgesMaxValue", PyvtkRandomGraphSource_GetNumberOfEdgesMaxValue, METH_VARARGS,
   "GetNumberOfEdgesMaxValue(self) -> int\nC++: virtual int GetNumberOfEdgesMaxValue()\n\n"},
  {"GetEdgeProbability", PyvtkRandomGraphSource_GetEdgeProbability, METH_VARARGS,
   "GetEdgeProbability(self) -> float\nC++: virtual double GetEdgeProbability()\n\nIf UseEdgeProbability is on, adds an edge with this probability\nbetween 0 and 1 for each pair of vertices in the graph.\n"},
  {"SetEdgeProbability", PyvtkRandomGraphSource_SetEdgeProbability, METH_VARARGS,
   "SetEdgeProbability(self, _arg:float) -> None\nC++: virtual void SetEdgeProbability(double _arg)\n\n"},
  {"GetEdgeProbabilityMinValue", PyvtkRandomGraphSource_GetEdgeProbabilityMinValue, METH_VARARGS,
   "GetEdgeProbabilityMinValue(self) -> float\nC++: virtual double GetEdgeProbabilityMinValue()\n\n"},
  {"GetEdgeProbabilityMaxValue", PyvtkRandomGraphSource_GetEdgeProbabilityMaxValue, METH_VARARGS,
   "GetEdgeProbabilityMaxValue(self) -> float\nC++: virtual double GetEdgeProbabilityMaxValue()\n\n"},
  {"SetIncludeEdgeWeights", PyvtkRandomGraphSource_SetIncludeEdgeWeights, METH_VARARGS,
   "SetIncludeEdgeWeights(self, _arg:bool) -> None\nC++: virtual void SetIncludeEdgeWeights(bool _arg)\n\nWhen set, includes edge weights in an array named \"edge_weights\".\nDefaults to off.  Weights are random between 0 and 1.\n"},
  {"GetIncludeEdgeWeights", PyvtkRandomGraphSource_GetIncludeEdgeWeights, METH_VARARGS,
   "GetIncludeEdgeWeights(self) -> bool\nC++: virtual bool GetIncludeEdgeWeights()\n\n"},
  {"IncludeEdgeWeightsOn", PyvtkRandomGraphSource_IncludeEdgeWeightsOn, METH_VARARGS,
   "IncludeEdgeWeightsOn(self) -> None\nC++: virtual void IncludeEdgeWeightsOn()\n\n"},
  {"IncludeEdgeWeightsOff", PyvtkRandomGraphSource_IncludeEdgeWeightsOff, METH_VARARGS,
   "IncludeEdgeWeightsOff(self) -> None\nC++: virtual void IncludeEdgeWeightsOff()\n\n"},
  {"SetEdgeWeightArrayName", PyvtkRandomGraphSource_SetEdgeWeightArrayName, METH_VARARGS,
   "SetEdgeWeightArrayName(self, _arg:str) -> None\nC++: virtual void SetEdgeWeightArrayName(const char *_arg)\n\nThe name of the edge weight array. Default \"edge weight\".\n"},
  {"GetEdgeWeightArrayName", PyvtkRandomGraphSource_GetEdgeWeightArrayName, METH_VARARGS,
   "GetEdgeWeightArrayName(self) -> str\nC++: virtual char *GetEdgeWeightArrayName()\n\n"},
  {"SetDirected", PyvtkRandomGraphSource_SetDirected, METH_VARARGS,
   "SetDirected(self, _arg:bool) -> None\nC++: virtual void SetDirected(bool _arg)\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {"GetDirected", PyvtkRandomGraphSource_GetDirected, METH_VARARGS,
   "GetDirected(self) -> bool\nC++: virtual bool GetDirected()\n\n"},
  {"DirectedOn", PyvtkRandomGraphSource_DirectedOn, METH_VARARGS,
   "DirectedOn(self) -> None\nC++: virtual void DirectedOn()\n\n"},
  {"DirectedOff", PyvtkRandomGraphSource_DirectedOff, METH_VARARGS,
   "DirectedOff(self) -> None\nC++: virtual void DirectedOff()\n\n"},
  {"SetUseEdgeProbability", PyvtkRandomGraphSource_SetUseEdgeProbability, METH_VARARGS,
   "SetUseEdgeProbability(self, _arg:bool) -> None\nC++: virtual void SetUseEdgeProbability(bool _arg)\n\nWhen set, uses the EdgeProbability parameter to determine the\ndensity of edges.  Otherwise, NumberOfEdges is used.\n"},
  {"GetUseEdgeProbability", PyvtkRandomGraphSource_GetUseEdgeProbability, METH_VARARGS,
   "GetUseEdgeProbability(self) -> bool\nC++: virtual bool GetUseEdgeProbability()\n\n"},
  {"UseEdgeProbabilityOn", PyvtkRandomGraphSource_UseEdgeProbabilityOn, METH_VARARGS,
   "UseEdgeProbabilityOn(self) -> None\nC++: virtual void UseEdgeProbabilityOn()\n\n"},
  {"UseEdgeProbabilityOff", PyvtkRandomGraphSource_UseEdgeProbabilityOff, METH_VARARGS,
   "UseEdgeProbabilityOff(self) -> None\nC++: virtual void UseEdgeProbabilityOff()\n\n"},
  {"SetStartWithTree", PyvtkRandomGraphSource_SetStartWithTree, METH_VARARGS,
   "SetStartWithTree(self, _arg:bool) -> None\nC++: virtual void SetStartWithTree(bool _arg)\n\nWhen set, builds a random tree structure first, then adds\nadditional random edges.\n"},
  {"GetStartWithTree", PyvtkRandomGraphSource_GetStartWithTree, METH_VARARGS,
   "GetStartWithTree(self) -> bool\nC++: virtual bool GetStartWithTree()\n\n"},
  {"StartWithTreeOn", PyvtkRandomGraphSource_StartWithTreeOn, METH_VARARGS,
   "StartWithTreeOn(self) -> None\nC++: virtual void StartWithTreeOn()\n\n"},
  {"StartWithTreeOff", PyvtkRandomGraphSource_StartWithTreeOff, METH_VARARGS,
   "StartWithTreeOff(self) -> None\nC++: virtual void StartWithTreeOff()\n\n"},
  {"SetAllowSelfLoops", PyvtkRandomGraphSource_SetAllowSelfLoops, METH_VARARGS,
   "SetAllowSelfLoops(self, _arg:bool) -> None\nC++: virtual void SetAllowSelfLoops(bool _arg)\n\nIf this flag is set to true, edges where the source and target\nvertex are the same can be generated.  The default is to forbid\nsuch loops.\n"},
  {"GetAllowSelfLoops", PyvtkRandomGraphSource_GetAllowSelfLoops, METH_VARARGS,
   "GetAllowSelfLoops(self) -> bool\nC++: virtual bool GetAllowSelfLoops()\n\n"},
  {"AllowSelfLoopsOn", PyvtkRandomGraphSource_AllowSelfLoopsOn, METH_VARARGS,
   "AllowSelfLoopsOn(self) -> None\nC++: virtual void AllowSelfLoopsOn()\n\n"},
  {"AllowSelfLoopsOff", PyvtkRandomGraphSource_AllowSelfLoopsOff, METH_VARARGS,
   "AllowSelfLoopsOff(self) -> None\nC++: virtual void AllowSelfLoopsOff()\n\n"},
  {"SetAllowParallelEdges", PyvtkRandomGraphSource_SetAllowParallelEdges, METH_VARARGS,
   "SetAllowParallelEdges(self, _arg:bool) -> None\nC++: virtual void SetAllowParallelEdges(bool _arg)\n\nWhen set, multiple edges from a source to a target vertex are\nallowed. The default is to forbid such loops.\n"},
  {"GetAllowParallelEdges", PyvtkRandomGraphSource_GetAllowParallelEdges, METH_VARARGS,
   "GetAllowParallelEdges(self) -> bool\nC++: virtual bool GetAllowParallelEdges()\n\n"},
  {"AllowParallelEdgesOn", PyvtkRandomGraphSource_AllowParallelEdgesOn, METH_VARARGS,
   "AllowParallelEdgesOn(self) -> None\nC++: virtual void AllowParallelEdgesOn()\n\n"},
  {"AllowParallelEdgesOff", PyvtkRandomGraphSource_AllowParallelEdgesOff, METH_VARARGS,
   "AllowParallelEdgesOff(self) -> None\nC++: virtual void AllowParallelEdgesOff()\n\n"},
  {"SetGeneratePedigreeIds", PyvtkRandomGraphSource_SetGeneratePedigreeIds, METH_VARARGS,
   "SetGeneratePedigreeIds(self, _arg:bool) -> None\nC++: virtual void SetGeneratePedigreeIds(bool _arg)\n\nAdd pedigree ids to vertex and edge data.\n"},
  {"GetGeneratePedigreeIds", PyvtkRandomGraphSource_GetGeneratePedigreeIds, METH_VARARGS,
   "GetGeneratePedigreeIds(self) -> bool\nC++: virtual bool GetGeneratePedigreeIds()\n\n"},
  {"GeneratePedigreeIdsOn", PyvtkRandomGraphSource_GeneratePedigreeIdsOn, METH_VARARGS,
   "GeneratePedigreeIdsOn(self) -> None\nC++: virtual void GeneratePedigreeIdsOn()\n\n"},
  {"GeneratePedigreeIdsOff", PyvtkRandomGraphSource_GeneratePedigreeIdsOff, METH_VARARGS,
   "GeneratePedigreeIdsOff(self) -> None\nC++: virtual void GeneratePedigreeIdsOff()\n\n"},
  {"SetVertexPedigreeIdArrayName", PyvtkRandomGraphSource_SetVertexPedigreeIdArrayName, METH_VARARGS,
   "SetVertexPedigreeIdArrayName(self, _arg:str) -> None\nC++: virtual void SetVertexPedigreeIdArrayName(const char *_arg)\n\nThe name of the vertex pedigree id array. Default \"vertex id\".\n"},
  {"GetVertexPedigreeIdArrayName", PyvtkRandomGraphSource_GetVertexPedigreeIdArrayName, METH_VARARGS,
   "GetVertexPedigreeIdArrayName(self) -> str\nC++: virtual char *GetVertexPedigreeIdArrayName()\n\n"},
  {"SetEdgePedigreeIdArrayName", PyvtkRandomGraphSource_SetEdgePedigreeIdArrayName, METH_VARARGS,
   "SetEdgePedigreeIdArrayName(self, _arg:str) -> None\nC++: virtual void SetEdgePedigreeIdArrayName(const char *_arg)\n\nThe name of the edge pedigree id array. Default \"edge id\".\n"},
  {"GetEdgePedigreeIdArrayName", PyvtkRandomGraphSource_GetEdgePedigreeIdArrayName, METH_VARARGS,
   "GetEdgePedigreeIdArrayName(self) -> str\nC++: virtual char *GetEdgePedigreeIdArrayName()\n\n"},
  {"SetSeed", PyvtkRandomGraphSource_SetSeed, METH_VARARGS,
   "SetSeed(self, _arg:int) -> None\nC++: virtual void SetSeed(int _arg)\n\nControl the seed used for pseudo-random-number generation. This\nensures that vtkRandomGraphSource can produce repeatable results.\n"},
  {"GetSeed", PyvtkRandomGraphSource_GetSeed, METH_VARARGS,
   "GetSeed(self) -> int\nC++: virtual int GetSeed()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRandomGraphSource_Doc =
  "vtkRandomGraphSource - a graph with random edges\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "Generates a graph with a specified number of vertices, with the\n"
  "density of edges specified by either an exact number of edges or the\n"
  "probability of an edge.  You may additionally specify whether to\n"
  "begin with a random tree (which enforces graph connectivity).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRandomGraphSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisCore.vtkRandomGraphSource", // tp_name
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
  PyvtkRandomGraphSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRandomGraphSource_StaticNew()
{
  return vtkRandomGraphSource::New();
}

PyObject *PyvtkRandomGraphSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRandomGraphSource_Type, PyvtkRandomGraphSource_Methods,
    "vtkRandomGraphSource",
 &PyvtkRandomGraphSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkGraphAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRandomGraphSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRandomGraphSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRandomGraphSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

