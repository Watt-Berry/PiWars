// python wrapper for vtkRenderedHierarchyRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRenderedHierarchyRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderedHierarchyRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkRenderedHierarchyRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkRenderedGraphRepresentation_ClassNew
extern "C" { PyObject *PyvtkRenderedGraphRepresentation_ClassNew(); }
#define DECLARED_PyvtkRenderedGraphRepresentation_ClassNew
#endif

static PyObject *
PyvtkRenderedHierarchyRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderedHierarchyRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderedHierarchyRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderedHierarchyRepresentation *tempr = vtkRenderedHierarchyRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderedHierarchyRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderedHierarchyRepresentation::NewInstance());

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
PyvtkRenderedHierarchyRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRenderedHierarchyRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRenderedHierarchyRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeLabelArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGraphEdgeLabelArrayName(temp0, temp1);
    }
    else
    {
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeLabelArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelArrayName_s1(self, args);
    case 2:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelArrayName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeLabelArrayName");
  return nullptr;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGraphEdgeLabelArrayName() :
      op->vtkRenderedHierarchyRepresentation::GetGraphEdgeLabelArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGraphEdgeLabelArrayName(temp0) :
      op->vtkRenderedHierarchyRepresentation::GetGraphEdgeLabelArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelArrayName_s1(self, args);
    case 1:
      return PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelArrayName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphEdgeLabelArrayName");
  return nullptr;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  bool temp0 = false;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGraphEdgeLabelVisibility(temp0, temp1);
    }
    else
    {
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeLabelVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelVisibility_s1(self, args);
    case 2:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelVisibility_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeLabelVisibility");
  return nullptr;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGraphEdgeLabelVisibility() :
      op->vtkRenderedHierarchyRepresentation::GetGraphEdgeLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGraphEdgeLabelVisibility(temp0) :
      op->vtkRenderedHierarchyRepresentation::GetGraphEdgeLabelVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelVisibility_s1(self, args);
    case 1:
      return PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelVisibility_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphEdgeLabelVisibility");
  return nullptr;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_GraphEdgeLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphEdgeLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GraphEdgeLabelVisibilityOn();
    }
    else
    {
      op->vtkRenderedHierarchyRepresentation::GraphEdgeLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_GraphEdgeLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphEdgeLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GraphEdgeLabelVisibilityOff();
    }
    else
    {
      op->vtkRenderedHierarchyRepresentation::GraphEdgeLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeColorArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGraphEdgeColorArrayName(temp0, temp1);
    }
    else
    {
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeColorArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorArrayName_s1(self, args);
    case 2:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorArrayName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeColorArrayName");
  return nullptr;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeColorArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGraphEdgeColorArrayName() :
      op->vtkRenderedHierarchyRepresentation::GetGraphEdgeColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeColorArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGraphEdgeColorArrayName(temp0) :
      op->vtkRenderedHierarchyRepresentation::GetGraphEdgeColorArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeColorArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedHierarchyRepresentation_GetGraphEdgeColorArrayName_s1(self, args);
    case 1:
      return PyvtkRenderedHierarchyRepresentation_GetGraphEdgeColorArrayName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphEdgeColorArrayName");
  return nullptr;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_SetColorGraphEdgesByArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      op->vtkRenderedHierarchyRepresentation::SetColorGraphEdgesByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetColorGraphEdgesByArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  bool temp0 = false;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetColorGraphEdgesByArray(temp0, temp1);
    }
    else
    {
      op->vtkRenderedHierarchyRepresentation::SetColorGraphEdgesByArray(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetColorGraphEdgesByArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderedHierarchyRepresentation_SetColorGraphEdgesByArray_s1(self, args);
    case 2:
      return PyvtkRenderedHierarchyRepresentation_SetColorGraphEdgesByArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColorGraphEdgesByArray");
  return nullptr;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_GetColorGraphEdgesByArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorGraphEdgesByArray() :
      op->vtkRenderedHierarchyRepresentation::GetColorGraphEdgesByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetColorGraphEdgesByArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorGraphEdgesByArray(temp0) :
      op->vtkRenderedHierarchyRepresentation::GetColorGraphEdgesByArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetColorGraphEdgesByArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedHierarchyRepresentation_GetColorGraphEdgesByArray_s1(self, args);
    case 1:
      return PyvtkRenderedHierarchyRepresentation_GetColorGraphEdgesByArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColorGraphEdgesByArray");
  return nullptr;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_ColorGraphEdgesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGraphEdgesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGraphEdgesByArrayOn();
    }
    else
    {
      op->vtkRenderedHierarchyRepresentation::ColorGraphEdgesByArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_ColorGraphEdgesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGraphEdgesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGraphEdgesByArrayOff();
    }
    else
    {
      op->vtkRenderedHierarchyRepresentation::ColorGraphEdgesByArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorToSplineFraction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorToSplineFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGraphEdgeColorToSplineFraction();
    }
    else
    {
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeColorToSplineFraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorToSplineFraction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorToSplineFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGraphEdgeColorToSplineFraction(temp0);
    }
    else
    {
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeColorToSplineFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorToSplineFraction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorToSplineFraction_s1(self, args);
    case 1:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorToSplineFraction_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeColorToSplineFraction");
  return nullptr;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      op->vtkRenderedHierarchyRepresentation::SetGraphVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  bool temp0 = false;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGraphVisibility(temp0, temp1);
    }
    else
    {
      op->vtkRenderedHierarchyRepresentation::SetGraphVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderedHierarchyRepresentation_SetGraphVisibility_s1(self, args);
    case 2:
      return PyvtkRenderedHierarchyRepresentation_SetGraphVisibility_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphVisibility");
  return nullptr;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGraphVisibility() :
      op->vtkRenderedHierarchyRepresentation::GetGraphVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGraphVisibility(temp0) :
      op->vtkRenderedHierarchyRepresentation::GetGraphVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedHierarchyRepresentation_GetGraphVisibility_s1(self, args);
    case 1:
      return PyvtkRenderedHierarchyRepresentation_GetGraphVisibility_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphVisibility");
  return nullptr;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_GraphVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GraphVisibilityOn();
    }
    else
    {
      op->vtkRenderedHierarchyRepresentation::GraphVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_GraphVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GraphVisibilityOff();
    }
    else
    {
      op->vtkRenderedHierarchyRepresentation::GraphVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_SetBundlingStrength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      op->vtkRenderedHierarchyRepresentation::SetBundlingStrength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetBundlingStrength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  double temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBundlingStrength(temp0, temp1);
    }
    else
    {
      op->vtkRenderedHierarchyRepresentation::SetBundlingStrength(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetBundlingStrength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderedHierarchyRepresentation_SetBundlingStrength_s1(self, args);
    case 2:
      return PyvtkRenderedHierarchyRepresentation_SetBundlingStrength_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBundlingStrength");
  return nullptr;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_GetBundlingStrength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBundlingStrength() :
      op->vtkRenderedHierarchyRepresentation::GetBundlingStrength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetBundlingStrength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBundlingStrength(temp0) :
      op->vtkRenderedHierarchyRepresentation::GetBundlingStrength(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetBundlingStrength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedHierarchyRepresentation_GetBundlingStrength_s1(self, args);
    case 1:
      return PyvtkRenderedHierarchyRepresentation_GetBundlingStrength_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBundlingStrength");
  return nullptr;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphSplineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphSplineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGraphSplineType(temp0, temp1);
    }
    else
    {
      op->vtkRenderedHierarchyRepresentation::SetGraphSplineType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphSplineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphSplineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGraphSplineType(temp0) :
      op->vtkRenderedHierarchyRepresentation::GetGraphSplineType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelFontSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

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
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelFontSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGraphEdgeLabelFontSize(temp0, temp1);
    }
    else
    {
      op->vtkRenderedHierarchyRepresentation::SetGraphEdgeLabelFontSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelFontSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelFontSize_s1(self, args);
    case 2:
      return PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelFontSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeLabelFontSize");
  return nullptr;
}


static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelFontSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGraphEdgeLabelFontSize() :
      op->vtkRenderedHierarchyRepresentation::GetGraphEdgeLabelFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelFontSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedHierarchyRepresentation *op = static_cast<vtkRenderedHierarchyRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGraphEdgeLabelFontSize(temp0) :
      op->vtkRenderedHierarchyRepresentation::GetGraphEdgeLabelFontSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelFontSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelFontSize_s1(self, args);
    case 1:
      return PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelFontSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphEdgeLabelFontSize");
  return nullptr;
}

static PyMethodDef PyvtkRenderedHierarchyRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkRenderedHierarchyRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderedHierarchyRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderedHierarchyRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkRenderedHierarchyRepresentation\nC++: static vtkRenderedHierarchyRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderedHierarchyRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRenderedHierarchyRepresentation\nC++: vtkRenderedHierarchyRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRenderedHierarchyRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRenderedHierarchyRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGraphEdgeLabelArrayName", PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelArrayName, METH_VARARGS,
   "SetGraphEdgeLabelArrayName(self, name:str) -> None\nC++: virtual void SetGraphEdgeLabelArrayName(const char *name)\nSetGraphEdgeLabelArrayName(self, name:str, idx:int) -> None\nC++: virtual void SetGraphEdgeLabelArrayName(const char *name,\n    int idx)\n\n\n"},
  {"GetGraphEdgeLabelArrayName", PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelArrayName, METH_VARARGS,
   "GetGraphEdgeLabelArrayName(self) -> str\nC++: virtual const char *GetGraphEdgeLabelArrayName()\nGetGraphEdgeLabelArrayName(self, idx:int) -> str\nC++: virtual const char *GetGraphEdgeLabelArrayName(int idx)\n\n"},
  {"SetGraphEdgeLabelVisibility", PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelVisibility, METH_VARARGS,
   "SetGraphEdgeLabelVisibility(self, vis:bool) -> None\nC++: virtual void SetGraphEdgeLabelVisibility(bool vis)\nSetGraphEdgeLabelVisibility(self, vis:bool, idx:int) -> None\nC++: virtual void SetGraphEdgeLabelVisibility(bool vis, int idx)\n\n"},
  {"GetGraphEdgeLabelVisibility", PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelVisibility, METH_VARARGS,
   "GetGraphEdgeLabelVisibility(self) -> bool\nC++: virtual bool GetGraphEdgeLabelVisibility()\nGetGraphEdgeLabelVisibility(self, idx:int) -> bool\nC++: virtual bool GetGraphEdgeLabelVisibility(int idx)\n\n"},
  {"GraphEdgeLabelVisibilityOn", PyvtkRenderedHierarchyRepresentation_GraphEdgeLabelVisibilityOn, METH_VARARGS,
   "GraphEdgeLabelVisibilityOn(self) -> None\nC++: virtual void GraphEdgeLabelVisibilityOn()\n\n"},
  {"GraphEdgeLabelVisibilityOff", PyvtkRenderedHierarchyRepresentation_GraphEdgeLabelVisibilityOff, METH_VARARGS,
   "GraphEdgeLabelVisibilityOff(self) -> None\nC++: virtual void GraphEdgeLabelVisibilityOff()\n\n"},
  {"SetGraphEdgeColorArrayName", PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorArrayName, METH_VARARGS,
   "SetGraphEdgeColorArrayName(self, name:str) -> None\nC++: virtual void SetGraphEdgeColorArrayName(const char *name)\nSetGraphEdgeColorArrayName(self, name:str, idx:int) -> None\nC++: virtual void SetGraphEdgeColorArrayName(const char *name,\n    int idx)\n\n"},
  {"GetGraphEdgeColorArrayName", PyvtkRenderedHierarchyRepresentation_GetGraphEdgeColorArrayName, METH_VARARGS,
   "GetGraphEdgeColorArrayName(self) -> str\nC++: virtual const char *GetGraphEdgeColorArrayName()\nGetGraphEdgeColorArrayName(self, idx:int) -> str\nC++: virtual const char *GetGraphEdgeColorArrayName(int idx)\n\n"},
  {"SetColorGraphEdgesByArray", PyvtkRenderedHierarchyRepresentation_SetColorGraphEdgesByArray, METH_VARARGS,
   "SetColorGraphEdgesByArray(self, vis:bool) -> None\nC++: virtual void SetColorGraphEdgesByArray(bool vis)\nSetColorGraphEdgesByArray(self, vis:bool, idx:int) -> None\nC++: virtual void SetColorGraphEdgesByArray(bool vis, int idx)\n\n"},
  {"GetColorGraphEdgesByArray", PyvtkRenderedHierarchyRepresentation_GetColorGraphEdgesByArray, METH_VARARGS,
   "GetColorGraphEdgesByArray(self) -> bool\nC++: virtual bool GetColorGraphEdgesByArray()\nGetColorGraphEdgesByArray(self, idx:int) -> bool\nC++: virtual bool GetColorGraphEdgesByArray(int idx)\n\n"},
  {"ColorGraphEdgesByArrayOn", PyvtkRenderedHierarchyRepresentation_ColorGraphEdgesByArrayOn, METH_VARARGS,
   "ColorGraphEdgesByArrayOn(self) -> None\nC++: virtual void ColorGraphEdgesByArrayOn()\n\n"},
  {"ColorGraphEdgesByArrayOff", PyvtkRenderedHierarchyRepresentation_ColorGraphEdgesByArrayOff, METH_VARARGS,
   "ColorGraphEdgesByArrayOff(self) -> None\nC++: virtual void ColorGraphEdgesByArrayOff()\n\n"},
  {"SetGraphEdgeColorToSplineFraction", PyvtkRenderedHierarchyRepresentation_SetGraphEdgeColorToSplineFraction, METH_VARARGS,
   "SetGraphEdgeColorToSplineFraction(self) -> None\nC++: virtual void SetGraphEdgeColorToSplineFraction()\nSetGraphEdgeColorToSplineFraction(self, idx:int) -> None\nC++: virtual void SetGraphEdgeColorToSplineFraction(int idx)\n\n"},
  {"SetGraphVisibility", PyvtkRenderedHierarchyRepresentation_SetGraphVisibility, METH_VARARGS,
   "SetGraphVisibility(self, vis:bool) -> None\nC++: virtual void SetGraphVisibility(bool vis)\nSetGraphVisibility(self, vis:bool, idx:int) -> None\nC++: virtual void SetGraphVisibility(bool vis, int idx)\n\n"},
  {"GetGraphVisibility", PyvtkRenderedHierarchyRepresentation_GetGraphVisibility, METH_VARARGS,
   "GetGraphVisibility(self) -> bool\nC++: virtual bool GetGraphVisibility()\nGetGraphVisibility(self, idx:int) -> bool\nC++: virtual bool GetGraphVisibility(int idx)\n\n"},
  {"GraphVisibilityOn", PyvtkRenderedHierarchyRepresentation_GraphVisibilityOn, METH_VARARGS,
   "GraphVisibilityOn(self) -> None\nC++: virtual void GraphVisibilityOn()\n\n"},
  {"GraphVisibilityOff", PyvtkRenderedHierarchyRepresentation_GraphVisibilityOff, METH_VARARGS,
   "GraphVisibilityOff(self) -> None\nC++: virtual void GraphVisibilityOff()\n\n"},
  {"SetBundlingStrength", PyvtkRenderedHierarchyRepresentation_SetBundlingStrength, METH_VARARGS,
   "SetBundlingStrength(self, strength:float) -> None\nC++: virtual void SetBundlingStrength(double strength)\nSetBundlingStrength(self, strength:float, idx:int) -> None\nC++: virtual void SetBundlingStrength(double strength, int idx)\n\n"},
  {"GetBundlingStrength", PyvtkRenderedHierarchyRepresentation_GetBundlingStrength, METH_VARARGS,
   "GetBundlingStrength(self) -> float\nC++: virtual double GetBundlingStrength()\nGetBundlingStrength(self, idx:int) -> float\nC++: virtual double GetBundlingStrength(int idx)\n\n"},
  {"SetGraphSplineType", PyvtkRenderedHierarchyRepresentation_SetGraphSplineType, METH_VARARGS,
   "SetGraphSplineType(self, type:int, idx:int) -> None\nC++: virtual void SetGraphSplineType(int type, int idx)\n\nSets the spline type for the graph edges.\nvtkSplineGraphEdges::CUSTOM uses a vtkCardinalSpline.\nvtkSplineGraphEdges::BSPLINE uses a b-spline. The default is\nBSPLINE.\n"},
  {"GetGraphSplineType", PyvtkRenderedHierarchyRepresentation_GetGraphSplineType, METH_VARARGS,
   "GetGraphSplineType(self, idx:int) -> int\nC++: virtual int GetGraphSplineType(int idx)\n\n"},
  {"SetGraphEdgeLabelFontSize", PyvtkRenderedHierarchyRepresentation_SetGraphEdgeLabelFontSize, METH_VARARGS,
   "SetGraphEdgeLabelFontSize(self, size:int) -> None\nC++: virtual void SetGraphEdgeLabelFontSize(int size)\nSetGraphEdgeLabelFontSize(self, size:int, idx:int) -> None\nC++: virtual void SetGraphEdgeLabelFontSize(int size, int idx)\n\n"},
  {"GetGraphEdgeLabelFontSize", PyvtkRenderedHierarchyRepresentation_GetGraphEdgeLabelFontSize, METH_VARARGS,
   "GetGraphEdgeLabelFontSize(self) -> int\nC++: virtual int GetGraphEdgeLabelFontSize()\nGetGraphEdgeLabelFontSize(self, idx:int) -> int\nC++: virtual int GetGraphEdgeLabelFontSize(int idx)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRenderedHierarchyRepresentation_Doc =
  "vtkRenderedHierarchyRepresentation - \n\n"
  "Superclass: vtkRenderedGraphRepresentation\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRenderedHierarchyRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkRenderedHierarchyRepresentation", // tp_name
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
  PyvtkRenderedHierarchyRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderedHierarchyRepresentation_StaticNew()
{
  return vtkRenderedHierarchyRepresentation::New();
}

PyObject *PyvtkRenderedHierarchyRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRenderedHierarchyRepresentation_Type, PyvtkRenderedHierarchyRepresentation_Methods,
    "vtkRenderedHierarchyRepresentation",
 &PyvtkRenderedHierarchyRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkRenderedGraphRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRenderedHierarchyRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderedHierarchyRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderedHierarchyRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

