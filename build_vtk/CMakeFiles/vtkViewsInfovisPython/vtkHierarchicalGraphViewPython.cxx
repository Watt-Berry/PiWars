// python wrapper for vtkHierarchicalGraphView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHierarchicalGraphView.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHierarchicalGraphView(PyObject *dict); }
extern "C" { PyObject *PyvtkHierarchicalGraphView_ClassNew(); }

#ifndef DECLARED_PyvtkGraphLayoutView_ClassNew
extern "C" { PyObject *PyvtkGraphLayoutView_ClassNew(); }
#define DECLARED_PyvtkGraphLayoutView_ClassNew
#endif

static PyObject *
PyvtkHierarchicalGraphView_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHierarchicalGraphView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHierarchicalGraphView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHierarchicalGraphView *tempr = vtkHierarchicalGraphView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHierarchicalGraphView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHierarchicalGraphView::NewInstance());

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
PyvtkHierarchicalGraphView_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHierarchicalGraphView::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHierarchicalGraphView::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetHierarchyFromInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchyFromInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    vtkDataRepresentation *tempr = (ap.IsBound() ?
      op->SetHierarchyFromInputConnection(temp0) :
      op->vtkHierarchicalGraphView::SetHierarchyFromInputConnection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetHierarchyFromInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchyFromInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    vtkDataRepresentation *tempr = (ap.IsBound() ?
      op->SetHierarchyFromInput(temp0) :
      op->vtkHierarchicalGraphView::SetHierarchyFromInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetGraphFromInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphFromInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    vtkDataRepresentation *tempr = (ap.IsBound() ?
      op->SetGraphFromInputConnection(temp0) :
      op->vtkHierarchicalGraphView::SetGraphFromInputConnection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetGraphFromInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphFromInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    vtkDataRepresentation *tempr = (ap.IsBound() ?
      op->SetGraphFromInput(temp0) :
      op->vtkHierarchicalGraphView::SetGraphFromInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetGraphEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGraphEdgeLabelArrayName(temp0);
    }
    else
    {
      op->vtkHierarchicalGraphView::SetGraphEdgeLabelArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GetGraphEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGraphEdgeLabelArrayName() :
      op->vtkHierarchicalGraphView::GetGraphEdgeLabelArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetGraphEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGraphEdgeLabelVisibility(temp0);
    }
    else
    {
      op->vtkHierarchicalGraphView::SetGraphEdgeLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GetGraphEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGraphEdgeLabelVisibility() :
      op->vtkHierarchicalGraphView::GetGraphEdgeLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GraphEdgeLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphEdgeLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GraphEdgeLabelVisibilityOn();
    }
    else
    {
      op->vtkHierarchicalGraphView::GraphEdgeLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GraphEdgeLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphEdgeLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GraphEdgeLabelVisibilityOff();
    }
    else
    {
      op->vtkHierarchicalGraphView::GraphEdgeLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetGraphEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGraphEdgeColorArrayName(temp0);
    }
    else
    {
      op->vtkHierarchicalGraphView::SetGraphEdgeColorArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GetGraphEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGraphEdgeColorArrayName() :
      op->vtkHierarchicalGraphView::GetGraphEdgeColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetGraphEdgeColorToSplineFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorToSplineFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGraphEdgeColorToSplineFraction();
    }
    else
    {
      op->vtkHierarchicalGraphView::SetGraphEdgeColorToSplineFraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetColorGraphEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorGraphEdgesByArray(temp0);
    }
    else
    {
      op->vtkHierarchicalGraphView::SetColorGraphEdgesByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GetColorGraphEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorGraphEdgesByArray() :
      op->vtkHierarchicalGraphView::GetColorGraphEdgesByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_ColorGraphEdgesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGraphEdgesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGraphEdgesByArrayOn();
    }
    else
    {
      op->vtkHierarchicalGraphView::ColorGraphEdgesByArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_ColorGraphEdgesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGraphEdgesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGraphEdgesByArrayOff();
    }
    else
    {
      op->vtkHierarchicalGraphView::ColorGraphEdgesByArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

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
      op->vtkHierarchicalGraphView::SetBundlingStrength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBundlingStrength() :
      op->vtkHierarchicalGraphView::GetBundlingStrength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetGraphVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGraphVisibility(temp0);
    }
    else
    {
      op->vtkHierarchicalGraphView::SetGraphVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GetGraphVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGraphVisibility() :
      op->vtkHierarchicalGraphView::GetGraphVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GraphVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GraphVisibilityOn();
    }
    else
    {
      op->vtkHierarchicalGraphView::GraphVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GraphVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GraphVisibilityOff();
    }
    else
    {
      op->vtkHierarchicalGraphView::GraphVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_SetGraphEdgeLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGraphEdgeLabelFontSize(temp0);
    }
    else
    {
      op->vtkHierarchicalGraphView::SetGraphEdgeLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalGraphView_GetGraphEdgeLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalGraphView *op = static_cast<vtkHierarchicalGraphView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGraphEdgeLabelFontSize() :
      op->vtkHierarchicalGraphView::GetGraphEdgeLabelFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHierarchicalGraphView_Methods[] = {
  {"IsTypeOf", PyvtkHierarchicalGraphView_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHierarchicalGraphView_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHierarchicalGraphView_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHierarchicalGraphView\nC++: static vtkHierarchicalGraphView *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHierarchicalGraphView_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHierarchicalGraphView\nC++: vtkHierarchicalGraphView *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHierarchicalGraphView_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHierarchicalGraphView_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetHierarchyFromInputConnection", PyvtkHierarchicalGraphView_SetHierarchyFromInputConnection, METH_VARARGS,
   "SetHierarchyFromInputConnection(self, conn:vtkAlgorithmOutput)\n    -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetHierarchyFromInputConnection(\n    vtkAlgorithmOutput *conn)\n\nSet the tree and graph representations to the appropriate input\nports.\n"},
  {"SetHierarchyFromInput", PyvtkHierarchicalGraphView_SetHierarchyFromInput, METH_VARARGS,
   "SetHierarchyFromInput(self, input:vtkDataObject)\n    -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetHierarchyFromInput(\n    vtkDataObject *input)\n\n"},
  {"SetGraphFromInputConnection", PyvtkHierarchicalGraphView_SetGraphFromInputConnection, METH_VARARGS,
   "SetGraphFromInputConnection(self, conn:vtkAlgorithmOutput)\n    -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetGraphFromInputConnection(\n    vtkAlgorithmOutput *conn)\n\n"},
  {"SetGraphFromInput", PyvtkHierarchicalGraphView_SetGraphFromInput, METH_VARARGS,
   "SetGraphFromInput(self, input:vtkDataObject)\n    -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetGraphFromInput(\n    vtkDataObject *input)\n\n"},
  {"SetGraphEdgeLabelArrayName", PyvtkHierarchicalGraphView_SetGraphEdgeLabelArrayName, METH_VARARGS,
   "SetGraphEdgeLabelArrayName(self, name:str) -> None\nC++: virtual void SetGraphEdgeLabelArrayName(const char *name)\n\nThe array to use for edge labeling.  Default is \"label\".\n"},
  {"GetGraphEdgeLabelArrayName", PyvtkHierarchicalGraphView_GetGraphEdgeLabelArrayName, METH_VARARGS,
   "GetGraphEdgeLabelArrayName(self) -> str\nC++: virtual const char *GetGraphEdgeLabelArrayName()\n\n"},
  {"SetGraphEdgeLabelVisibility", PyvtkHierarchicalGraphView_SetGraphEdgeLabelVisibility, METH_VARARGS,
   "SetGraphEdgeLabelVisibility(self, vis:bool) -> None\nC++: virtual void SetGraphEdgeLabelVisibility(bool vis)\n\nWhether to show edge labels.  Default is off.\n"},
  {"GetGraphEdgeLabelVisibility", PyvtkHierarchicalGraphView_GetGraphEdgeLabelVisibility, METH_VARARGS,
   "GetGraphEdgeLabelVisibility(self) -> bool\nC++: virtual bool GetGraphEdgeLabelVisibility()\n\n"},
  {"GraphEdgeLabelVisibilityOn", PyvtkHierarchicalGraphView_GraphEdgeLabelVisibilityOn, METH_VARARGS,
   "GraphEdgeLabelVisibilityOn(self) -> None\nC++: virtual void GraphEdgeLabelVisibilityOn()\n\n"},
  {"GraphEdgeLabelVisibilityOff", PyvtkHierarchicalGraphView_GraphEdgeLabelVisibilityOff, METH_VARARGS,
   "GraphEdgeLabelVisibilityOff(self) -> None\nC++: virtual void GraphEdgeLabelVisibilityOff()\n\n"},
  {"SetGraphEdgeColorArrayName", PyvtkHierarchicalGraphView_SetGraphEdgeColorArrayName, METH_VARARGS,
   "SetGraphEdgeColorArrayName(self, name:str) -> None\nC++: virtual void SetGraphEdgeColorArrayName(const char *name)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {"GetGraphEdgeColorArrayName", PyvtkHierarchicalGraphView_GetGraphEdgeColorArrayName, METH_VARARGS,
   "GetGraphEdgeColorArrayName(self) -> str\nC++: virtual const char *GetGraphEdgeColorArrayName()\n\n"},
  {"SetGraphEdgeColorToSplineFraction", PyvtkHierarchicalGraphView_SetGraphEdgeColorToSplineFraction, METH_VARARGS,
   "SetGraphEdgeColorToSplineFraction(self) -> None\nC++: virtual void SetGraphEdgeColorToSplineFraction()\n\nSet the color to be the spline fraction\n"},
  {"SetColorGraphEdgesByArray", PyvtkHierarchicalGraphView_SetColorGraphEdgesByArray, METH_VARARGS,
   "SetColorGraphEdgesByArray(self, vis:bool) -> None\nC++: virtual void SetColorGraphEdgesByArray(bool vis)\n\nWhether to color edges.  Default is off.\n"},
  {"GetColorGraphEdgesByArray", PyvtkHierarchicalGraphView_GetColorGraphEdgesByArray, METH_VARARGS,
   "GetColorGraphEdgesByArray(self) -> bool\nC++: virtual bool GetColorGraphEdgesByArray()\n\n"},
  {"ColorGraphEdgesByArrayOn", PyvtkHierarchicalGraphView_ColorGraphEdgesByArrayOn, METH_VARARGS,
   "ColorGraphEdgesByArrayOn(self) -> None\nC++: virtual void ColorGraphEdgesByArrayOn()\n\n"},
  {"ColorGraphEdgesByArrayOff", PyvtkHierarchicalGraphView_ColorGraphEdgesByArrayOff, METH_VARARGS,
   "ColorGraphEdgesByArrayOff(self) -> None\nC++: virtual void ColorGraphEdgesByArrayOff()\n\n"},
  {"SetBundlingStrength", PyvtkHierarchicalGraphView_SetBundlingStrength, METH_VARARGS,
   "SetBundlingStrength(self, strength:float) -> None\nC++: virtual void SetBundlingStrength(double strength)\n\nSet the bundling strength.\n"},
  {"GetBundlingStrength", PyvtkHierarchicalGraphView_GetBundlingStrength, METH_VARARGS,
   "GetBundlingStrength(self) -> float\nC++: virtual double GetBundlingStrength()\n\n"},
  {"SetGraphVisibility", PyvtkHierarchicalGraphView_SetGraphVisibility, METH_VARARGS,
   "SetGraphVisibility(self, vis:bool) -> None\nC++: virtual void SetGraphVisibility(bool vis)\n\nWhether the graph edges are visible (default off).\n"},
  {"GetGraphVisibility", PyvtkHierarchicalGraphView_GetGraphVisibility, METH_VARARGS,
   "GetGraphVisibility(self) -> bool\nC++: virtual bool GetGraphVisibility()\n\n"},
  {"GraphVisibilityOn", PyvtkHierarchicalGraphView_GraphVisibilityOn, METH_VARARGS,
   "GraphVisibilityOn(self) -> None\nC++: virtual void GraphVisibilityOn()\n\n"},
  {"GraphVisibilityOff", PyvtkHierarchicalGraphView_GraphVisibilityOff, METH_VARARGS,
   "GraphVisibilityOff(self) -> None\nC++: virtual void GraphVisibilityOff()\n\n"},
  {"SetGraphEdgeLabelFontSize", PyvtkHierarchicalGraphView_SetGraphEdgeLabelFontSize, METH_VARARGS,
   "SetGraphEdgeLabelFontSize(self, size:int) -> None\nC++: virtual void SetGraphEdgeLabelFontSize(int size)\n\nThe size of the font used for edge labeling\n"},
  {"GetGraphEdgeLabelFontSize", PyvtkHierarchicalGraphView_GetGraphEdgeLabelFontSize, METH_VARARGS,
   "GetGraphEdgeLabelFontSize(self) -> int\nC++: virtual int GetGraphEdgeLabelFontSize()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHierarchicalGraphView_Doc =
  "vtkHierarchicalGraphView - Accepts a graph and a hierarchy -\ncurrently a tree - and provides a hierarchy-aware display.\n\n"
  "Superclass: vtkGraphLayoutView\n\n"
  "Currently, this means displaying the hierarchy using a tree layout,\n"
  "then rendering the graph vertices as leaves of the tree with curved\n"
  "graph edges between leaves.\n\n"
  "Takes a graph and a hierarchy (currently a tree) and lays out the\n"
  "graph vertices based on their categorization within the hierarchy.\n\n"
  ".SEE ALSO vtkGraphLayoutView\n\n"
  "@par Thanks: Thanks to the turtle with jets for feet, without you\n"
  "this class wouldn't have been possible.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHierarchicalGraphView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkHierarchicalGraphView", // tp_name
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
  PyvtkHierarchicalGraphView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHierarchicalGraphView_StaticNew()
{
  return vtkHierarchicalGraphView::New();
}

PyObject *PyvtkHierarchicalGraphView_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHierarchicalGraphView_Type, PyvtkHierarchicalGraphView_Methods,
    "vtkHierarchicalGraphView",
 &PyvtkHierarchicalGraphView_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGraphLayoutView_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHierarchicalGraphView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHierarchicalGraphView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHierarchicalGraphView", o) != 0)
  {
    Py_DECREF(o);
  }

}

