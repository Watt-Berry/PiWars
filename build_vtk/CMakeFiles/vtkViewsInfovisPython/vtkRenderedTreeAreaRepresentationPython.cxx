// python wrapper for vtkRenderedTreeAreaRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRenderedTreeAreaRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderedTreeAreaRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkRenderedTreeAreaRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkRenderedRepresentation_ClassNew
extern "C" { PyObject *PyvtkRenderedRepresentation_ClassNew(); }
#define DECLARED_PyvtkRenderedRepresentation_ClassNew
#endif

static PyObject *
PyvtkRenderedTreeAreaRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderedTreeAreaRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderedTreeAreaRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderedTreeAreaRepresentation *tempr = vtkRenderedTreeAreaRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderedTreeAreaRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderedTreeAreaRepresentation::NewInstance());

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
PyvtkRenderedTreeAreaRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRenderedTreeAreaRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRenderedTreeAreaRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetLabelRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelRenderMode(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetLabelRenderMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaLabelArrayName(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetAreaLabelArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAreaLabelArrayName() :
      op->vtkRenderedTreeAreaRepresentation::GetAreaLabelArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaSizeArrayName(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetAreaSizeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAreaSizeArrayName() :
      op->vtkRenderedTreeAreaRepresentation::GetAreaSizeArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaLabelPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLabelPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaLabelPriorityArrayName(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetAreaLabelPriorityArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaLabelPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLabelPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAreaLabelPriorityArrayName() :
      op->vtkRenderedTreeAreaRepresentation::GetAreaLabelPriorityArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeLabelArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeLabelArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelArrayName_s1(self, args);
    case 2:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelArrayName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeLabelArrayName");
  return nullptr;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGraphEdgeLabelArrayName() :
      op->vtkRenderedTreeAreaRepresentation::GetGraphEdgeLabelArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGraphEdgeLabelArrayName(temp0) :
      op->vtkRenderedTreeAreaRepresentation::GetGraphEdgeLabelArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelArrayName_s1(self, args);
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelArrayName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphEdgeLabelArrayName");
  return nullptr;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelTextProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetGraphEdgeLabelTextProperty(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelTextProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkTextProperty *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGraphEdgeLabelTextProperty(temp0, temp1);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeLabelTextProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelTextProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelTextProperty_s1(self, args);
    case 2:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelTextProperty_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeLabelTextProperty");
  return nullptr;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelTextProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetGraphEdgeLabelTextProperty() :
      op->vtkRenderedTreeAreaRepresentation::GetGraphEdgeLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelTextProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetGraphEdgeLabelTextProperty(temp0) :
      op->vtkRenderedTreeAreaRepresentation::GetGraphEdgeLabelTextProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelTextProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelTextProperty_s1(self, args);
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelTextProperty_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphEdgeLabelTextProperty");
  return nullptr;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaHoverArrayName(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetAreaHoverArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAreaHoverArrayName() :
      op->vtkRenderedTreeAreaRepresentation::GetAreaHoverArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaLabelVisibility(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetAreaLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAreaLabelVisibility() :
      op->vtkRenderedTreeAreaRepresentation::GetAreaLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_AreaLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AreaLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AreaLabelVisibilityOn();
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::AreaLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_AreaLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AreaLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AreaLabelVisibilityOff();
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::AreaLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAreaLabelTextProperty(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetAreaLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetAreaLabelTextProperty() :
      op->vtkRenderedTreeAreaRepresentation::GetAreaLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeLabelVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelVisibility_s1(self, args);
    case 2:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelVisibility_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeLabelVisibility");
  return nullptr;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGraphEdgeLabelVisibility() :
      op->vtkRenderedTreeAreaRepresentation::GetGraphEdgeLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGraphEdgeLabelVisibility(temp0) :
      op->vtkRenderedTreeAreaRepresentation::GetGraphEdgeLabelVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelVisibility_s1(self, args);
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelVisibility_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphEdgeLabelVisibility");
  return nullptr;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GraphEdgeLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphEdgeLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GraphEdgeLabelVisibilityOn();
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::GraphEdgeLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GraphEdgeLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GraphEdgeLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GraphEdgeLabelVisibilityOff();
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::GraphEdgeLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaColorArrayName(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetAreaColorArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAreaColorArrayName() :
      op->vtkRenderedTreeAreaRepresentation::GetAreaColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetColorAreasByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorAreasByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorAreasByArray(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetColorAreasByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetColorAreasByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorAreasByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorAreasByArray() :
      op->vtkRenderedTreeAreaRepresentation::GetColorAreasByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_ColorAreasByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorAreasByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorAreasByArrayOn();
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::ColorAreasByArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_ColorAreasByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorAreasByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorAreasByArrayOff();
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::ColorAreasByArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeColorArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeColorArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorArrayName_s1(self, args);
    case 2:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorArrayName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeColorArrayName");
  return nullptr;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeColorArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGraphEdgeColorArrayName() :
      op->vtkRenderedTreeAreaRepresentation::GetGraphEdgeColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeColorArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGraphEdgeColorArrayName(temp0) :
      op->vtkRenderedTreeAreaRepresentation::GetGraphEdgeColorArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeColorArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeColorArrayName_s1(self, args);
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeColorArrayName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphEdgeColorArrayName");
  return nullptr;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorToSplineFraction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorToSplineFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGraphEdgeColorToSplineFraction();
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeColorToSplineFraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorToSplineFraction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphEdgeColorToSplineFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetGraphEdgeColorToSplineFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorToSplineFraction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorToSplineFraction_s1(self, args);
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorToSplineFraction_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphEdgeColorToSplineFraction");
  return nullptr;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetColorGraphEdgesByArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetColorGraphEdgesByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetColorGraphEdgesByArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetColorGraphEdgesByArray(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetColorGraphEdgesByArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_SetColorGraphEdgesByArray_s1(self, args);
    case 2:
      return PyvtkRenderedTreeAreaRepresentation_SetColorGraphEdgesByArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColorGraphEdgesByArray");
  return nullptr;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetColorGraphEdgesByArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorGraphEdgesByArray() :
      op->vtkRenderedTreeAreaRepresentation::GetColorGraphEdgesByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetColorGraphEdgesByArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorGraphEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorGraphEdgesByArray(temp0) :
      op->vtkRenderedTreeAreaRepresentation::GetColorGraphEdgesByArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetColorGraphEdgesByArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedTreeAreaRepresentation_GetColorGraphEdgesByArray_s1(self, args);
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_GetColorGraphEdgesByArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColorGraphEdgesByArray");
  return nullptr;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_ColorGraphEdgesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGraphEdgesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGraphEdgesByArrayOn();
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::ColorGraphEdgesByArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_ColorGraphEdgesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGraphEdgesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGraphEdgesByArrayOff();
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::ColorGraphEdgesByArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphHoverArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGraphHoverArrayName(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetGraphHoverArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphHoverArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGraphHoverArrayName(temp0, temp1);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetGraphHoverArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphHoverArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphHoverArrayName_s1(self, args);
    case 2:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphHoverArrayName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphHoverArrayName");
  return nullptr;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphHoverArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGraphHoverArrayName() :
      op->vtkRenderedTreeAreaRepresentation::GetGraphHoverArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphHoverArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGraphHoverArrayName(temp0) :
      op->vtkRenderedTreeAreaRepresentation::GetGraphHoverArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphHoverArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphHoverArrayName_s1(self, args);
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphHoverArrayName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphHoverArrayName");
  return nullptr;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetShrinkPercentage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShrinkPercentage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShrinkPercentage(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetShrinkPercentage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetShrinkPercentage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkPercentage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShrinkPercentage() :
      op->vtkRenderedTreeAreaRepresentation::GetShrinkPercentage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphBundlingStrength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGraphBundlingStrength(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetGraphBundlingStrength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphBundlingStrength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  double temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGraphBundlingStrength(temp0, temp1);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetGraphBundlingStrength(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphBundlingStrength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphBundlingStrength_s1(self, args);
    case 2:
      return PyvtkRenderedTreeAreaRepresentation_SetGraphBundlingStrength_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphBundlingStrength");
  return nullptr;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphBundlingStrength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGraphBundlingStrength() :
      op->vtkRenderedTreeAreaRepresentation::GetGraphBundlingStrength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphBundlingStrength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGraphBundlingStrength(temp0) :
      op->vtkRenderedTreeAreaRepresentation::GetGraphBundlingStrength(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphBundlingStrength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphBundlingStrength_s1(self, args);
    case 1:
      return PyvtkRenderedTreeAreaRepresentation_GetGraphBundlingStrength_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGraphBundlingStrength");
  return nullptr;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetGraphSplineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphSplineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::SetGraphSplineType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetGraphSplineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphSplineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGraphSplineType(temp0) :
      op->vtkRenderedTreeAreaRepresentation::GetGraphSplineType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkAreaLayoutStrategy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAreaLayoutStrategy"))
  {
    if (ap.IsBound())
    {
      op->SetAreaLayoutStrategy(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetAreaLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAreaLayoutStrategy *tempr = (ap.IsBound() ?
      op->GetAreaLayoutStrategy() :
      op->vtkRenderedTreeAreaRepresentation::GetAreaLayoutStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaToPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaToPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkPolyDataAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyDataAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetAreaToPolyData(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetAreaToPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaToPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaToPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->GetAreaToPolyData() :
      op->vtkRenderedTreeAreaRepresentation::GetAreaToPolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetUseRectangularCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRectangularCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRectangularCoordinates(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetUseRectangularCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetUseRectangularCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRectangularCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseRectangularCoordinates() :
      op->vtkRenderedTreeAreaRepresentation::GetUseRectangularCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_UseRectangularCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRectangularCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRectangularCoordinatesOn();
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::UseRectangularCoordinatesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_UseRectangularCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRectangularCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRectangularCoordinatesOff();
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::UseRectangularCoordinatesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetAreaLabelMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLabelMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  vtkLabeledDataMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLabeledDataMapper"))
  {
    if (ap.IsBound())
    {
      op->SetAreaLabelMapper(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetAreaLabelMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetAreaLabelMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLabelMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabeledDataMapper *tempr = (ap.IsBound() ?
      op->GetAreaLabelMapper() :
      op->vtkRenderedTreeAreaRepresentation::GetAreaLabelMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

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
      op->vtkRenderedTreeAreaRepresentation::ApplyViewTheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_SetEdgeScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeScalarBarVisibility(temp0);
    }
    else
    {
      op->vtkRenderedTreeAreaRepresentation::SetEdgeScalarBarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedTreeAreaRepresentation_GetEdgeScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedTreeAreaRepresentation *op = static_cast<vtkRenderedTreeAreaRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeScalarBarVisibility() :
      op->vtkRenderedTreeAreaRepresentation::GetEdgeScalarBarVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderedTreeAreaRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkRenderedTreeAreaRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderedTreeAreaRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderedTreeAreaRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRenderedTreeAreaRepresentation\nC++: static vtkRenderedTreeAreaRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderedTreeAreaRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRenderedTreeAreaRepresentation\nC++: vtkRenderedTreeAreaRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRenderedTreeAreaRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRenderedTreeAreaRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLabelRenderMode", PyvtkRenderedTreeAreaRepresentation_SetLabelRenderMode, METH_VARARGS,
   "SetLabelRenderMode(self, mode:int) -> None\nC++: void SetLabelRenderMode(int mode) override;\n\nSet the label render mode. QT - Use vtkQtTreeRingLabeler with\nfitted labeling and unicode support. Requires VTK_USE_QT to be\non. FREETYPE - Use standard freetype text rendering.\n"},
  {"SetAreaLabelArrayName", PyvtkRenderedTreeAreaRepresentation_SetAreaLabelArrayName, METH_VARARGS,
   "SetAreaLabelArrayName(self, name:str) -> None\nC++: virtual void SetAreaLabelArrayName(const char *name)\n\nThe array to use for area labeling.  Default is \"label\".\n"},
  {"GetAreaLabelArrayName", PyvtkRenderedTreeAreaRepresentation_GetAreaLabelArrayName, METH_VARARGS,
   "GetAreaLabelArrayName(self) -> str\nC++: virtual const char *GetAreaLabelArrayName()\n\n"},
  {"SetAreaSizeArrayName", PyvtkRenderedTreeAreaRepresentation_SetAreaSizeArrayName, METH_VARARGS,
   "SetAreaSizeArrayName(self, name:str) -> None\nC++: virtual void SetAreaSizeArrayName(const char *name)\n\nThe array to use for area sizes. Default is \"size\".\n"},
  {"GetAreaSizeArrayName", PyvtkRenderedTreeAreaRepresentation_GetAreaSizeArrayName, METH_VARARGS,
   "GetAreaSizeArrayName(self) -> str\nC++: virtual const char *GetAreaSizeArrayName()\n\n"},
  {"SetAreaLabelPriorityArrayName", PyvtkRenderedTreeAreaRepresentation_SetAreaLabelPriorityArrayName, METH_VARARGS,
   "SetAreaLabelPriorityArrayName(self, name:str) -> None\nC++: virtual void SetAreaLabelPriorityArrayName(const char *name)\n\nThe array to use for area labeling priority. Default is\n\"GraphVertexDegree\".\n"},
  {"GetAreaLabelPriorityArrayName", PyvtkRenderedTreeAreaRepresentation_GetAreaLabelPriorityArrayName, METH_VARARGS,
   "GetAreaLabelPriorityArrayName(self) -> str\nC++: virtual const char *GetAreaLabelPriorityArrayName()\n\n"},
  {"SetGraphEdgeLabelArrayName", PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelArrayName, METH_VARARGS,
   "SetGraphEdgeLabelArrayName(self, name:str) -> None\nC++: virtual void SetGraphEdgeLabelArrayName(const char *name)\nSetGraphEdgeLabelArrayName(self, name:str, idx:int) -> None\nC++: virtual void SetGraphEdgeLabelArrayName(const char *name,\n    int idx)\n\nThe array to use for edge labeling.  Default is \"label\".\n"},
  {"GetGraphEdgeLabelArrayName", PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelArrayName, METH_VARARGS,
   "GetGraphEdgeLabelArrayName(self) -> str\nC++: virtual const char *GetGraphEdgeLabelArrayName()\nGetGraphEdgeLabelArrayName(self, idx:int) -> str\nC++: virtual const char *GetGraphEdgeLabelArrayName(int idx)\n\n"},
  {"SetGraphEdgeLabelTextProperty", PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelTextProperty, METH_VARARGS,
   "SetGraphEdgeLabelTextProperty(self, tp:vtkTextProperty) -> None\nC++: virtual void SetGraphEdgeLabelTextProperty(\n    vtkTextProperty *tp)\nSetGraphEdgeLabelTextProperty(self, tp:vtkTextProperty, idx:int)\n    -> None\nC++: virtual void SetGraphEdgeLabelTextProperty(\n    vtkTextProperty *tp, int idx)\n\nThe text property for the graph edge labels.\n"},
  {"GetGraphEdgeLabelTextProperty", PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelTextProperty, METH_VARARGS,
   "GetGraphEdgeLabelTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetGraphEdgeLabelTextProperty()\nGetGraphEdgeLabelTextProperty(self, idx:int) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetGraphEdgeLabelTextProperty(\n    int idx)\n\n"},
  {"SetAreaHoverArrayName", PyvtkRenderedTreeAreaRepresentation_SetAreaHoverArrayName, METH_VARARGS,
   "SetAreaHoverArrayName(self, _arg:str) -> None\nC++: virtual void SetAreaHoverArrayName(const char *_arg)\n\nThe name of the array whose value appears when the mouse hovers\nover a rectangle in the treemap.\n"},
  {"GetAreaHoverArrayName", PyvtkRenderedTreeAreaRepresentation_GetAreaHoverArrayName, METH_VARARGS,
   "GetAreaHoverArrayName(self) -> str\nC++: virtual char *GetAreaHoverArrayName()\n\n"},
  {"SetAreaLabelVisibility", PyvtkRenderedTreeAreaRepresentation_SetAreaLabelVisibility, METH_VARARGS,
   "SetAreaLabelVisibility(self, vis:bool) -> None\nC++: virtual void SetAreaLabelVisibility(bool vis)\n\nWhether to show area labels.  Default is off.\n"},
  {"GetAreaLabelVisibility", PyvtkRenderedTreeAreaRepresentation_GetAreaLabelVisibility, METH_VARARGS,
   "GetAreaLabelVisibility(self) -> bool\nC++: virtual bool GetAreaLabelVisibility()\n\n"},
  {"AreaLabelVisibilityOn", PyvtkRenderedTreeAreaRepresentation_AreaLabelVisibilityOn, METH_VARARGS,
   "AreaLabelVisibilityOn(self) -> None\nC++: virtual void AreaLabelVisibilityOn()\n\n"},
  {"AreaLabelVisibilityOff", PyvtkRenderedTreeAreaRepresentation_AreaLabelVisibilityOff, METH_VARARGS,
   "AreaLabelVisibilityOff(self) -> None\nC++: virtual void AreaLabelVisibilityOff()\n\n"},
  {"SetAreaLabelTextProperty", PyvtkRenderedTreeAreaRepresentation_SetAreaLabelTextProperty, METH_VARARGS,
   "SetAreaLabelTextProperty(self, tp:vtkTextProperty) -> None\nC++: virtual void SetAreaLabelTextProperty(vtkTextProperty *tp)\n\nThe text property for the area labels.\n"},
  {"GetAreaLabelTextProperty", PyvtkRenderedTreeAreaRepresentation_GetAreaLabelTextProperty, METH_VARARGS,
   "GetAreaLabelTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetAreaLabelTextProperty()\n\n"},
  {"SetGraphEdgeLabelVisibility", PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeLabelVisibility, METH_VARARGS,
   "SetGraphEdgeLabelVisibility(self, vis:bool) -> None\nC++: virtual void SetGraphEdgeLabelVisibility(bool vis)\nSetGraphEdgeLabelVisibility(self, vis:bool, idx:int) -> None\nC++: virtual void SetGraphEdgeLabelVisibility(bool vis, int idx)\n\nWhether to show edge labels.  Default is off.\n"},
  {"GetGraphEdgeLabelVisibility", PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeLabelVisibility, METH_VARARGS,
   "GetGraphEdgeLabelVisibility(self) -> bool\nC++: virtual bool GetGraphEdgeLabelVisibility()\nGetGraphEdgeLabelVisibility(self, idx:int) -> bool\nC++: virtual bool GetGraphEdgeLabelVisibility(int idx)\n\n"},
  {"GraphEdgeLabelVisibilityOn", PyvtkRenderedTreeAreaRepresentation_GraphEdgeLabelVisibilityOn, METH_VARARGS,
   "GraphEdgeLabelVisibilityOn(self) -> None\nC++: virtual void GraphEdgeLabelVisibilityOn()\n\n"},
  {"GraphEdgeLabelVisibilityOff", PyvtkRenderedTreeAreaRepresentation_GraphEdgeLabelVisibilityOff, METH_VARARGS,
   "GraphEdgeLabelVisibilityOff(self) -> None\nC++: virtual void GraphEdgeLabelVisibilityOff()\n\n"},
  {"SetAreaColorArrayName", PyvtkRenderedTreeAreaRepresentation_SetAreaColorArrayName, METH_VARARGS,
   "SetAreaColorArrayName(self, name:str) -> None\nC++: void SetAreaColorArrayName(const char *name)\n\nThe array to use for coloring vertices.  Default is \"color\".\n"},
  {"GetAreaColorArrayName", PyvtkRenderedTreeAreaRepresentation_GetAreaColorArrayName, METH_VARARGS,
   "GetAreaColorArrayName(self) -> str\nC++: const char *GetAreaColorArrayName()\n\n"},
  {"SetColorAreasByArray", PyvtkRenderedTreeAreaRepresentation_SetColorAreasByArray, METH_VARARGS,
   "SetColorAreasByArray(self, vis:bool) -> None\nC++: virtual void SetColorAreasByArray(bool vis)\n\nWhether to color vertices.  Default is off.\n"},
  {"GetColorAreasByArray", PyvtkRenderedTreeAreaRepresentation_GetColorAreasByArray, METH_VARARGS,
   "GetColorAreasByArray(self) -> bool\nC++: virtual bool GetColorAreasByArray()\n\n"},
  {"ColorAreasByArrayOn", PyvtkRenderedTreeAreaRepresentation_ColorAreasByArrayOn, METH_VARARGS,
   "ColorAreasByArrayOn(self) -> None\nC++: virtual void ColorAreasByArrayOn()\n\n"},
  {"ColorAreasByArrayOff", PyvtkRenderedTreeAreaRepresentation_ColorAreasByArrayOff, METH_VARARGS,
   "ColorAreasByArrayOff(self) -> None\nC++: virtual void ColorAreasByArrayOff()\n\n"},
  {"SetGraphEdgeColorArrayName", PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorArrayName, METH_VARARGS,
   "SetGraphEdgeColorArrayName(self, name:str) -> None\nC++: virtual void SetGraphEdgeColorArrayName(const char *name)\nSetGraphEdgeColorArrayName(self, name:str, idx:int) -> None\nC++: virtual void SetGraphEdgeColorArrayName(const char *name,\n    int idx)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {"GetGraphEdgeColorArrayName", PyvtkRenderedTreeAreaRepresentation_GetGraphEdgeColorArrayName, METH_VARARGS,
   "GetGraphEdgeColorArrayName(self) -> str\nC++: virtual const char *GetGraphEdgeColorArrayName()\nGetGraphEdgeColorArrayName(self, idx:int) -> str\nC++: virtual const char *GetGraphEdgeColorArrayName(int idx)\n\n"},
  {"SetGraphEdgeColorToSplineFraction", PyvtkRenderedTreeAreaRepresentation_SetGraphEdgeColorToSplineFraction, METH_VARARGS,
   "SetGraphEdgeColorToSplineFraction(self) -> None\nC++: virtual void SetGraphEdgeColorToSplineFraction()\nSetGraphEdgeColorToSplineFraction(self, idx:int) -> None\nC++: virtual void SetGraphEdgeColorToSplineFraction(int idx)\n\nSet the color to be the spline fraction\n"},
  {"SetColorGraphEdgesByArray", PyvtkRenderedTreeAreaRepresentation_SetColorGraphEdgesByArray, METH_VARARGS,
   "SetColorGraphEdgesByArray(self, vis:bool) -> None\nC++: virtual void SetColorGraphEdgesByArray(bool vis)\nSetColorGraphEdgesByArray(self, vis:bool, idx:int) -> None\nC++: virtual void SetColorGraphEdgesByArray(bool vis, int idx)\n\nWhether to color edges.  Default is off.\n"},
  {"GetColorGraphEdgesByArray", PyvtkRenderedTreeAreaRepresentation_GetColorGraphEdgesByArray, METH_VARARGS,
   "GetColorGraphEdgesByArray(self) -> bool\nC++: virtual bool GetColorGraphEdgesByArray()\nGetColorGraphEdgesByArray(self, idx:int) -> bool\nC++: virtual bool GetColorGraphEdgesByArray(int idx)\n\n"},
  {"ColorGraphEdgesByArrayOn", PyvtkRenderedTreeAreaRepresentation_ColorGraphEdgesByArrayOn, METH_VARARGS,
   "ColorGraphEdgesByArrayOn(self) -> None\nC++: virtual void ColorGraphEdgesByArrayOn()\n\n"},
  {"ColorGraphEdgesByArrayOff", PyvtkRenderedTreeAreaRepresentation_ColorGraphEdgesByArrayOff, METH_VARARGS,
   "ColorGraphEdgesByArrayOff(self) -> None\nC++: virtual void ColorGraphEdgesByArrayOff()\n\n"},
  {"SetGraphHoverArrayName", PyvtkRenderedTreeAreaRepresentation_SetGraphHoverArrayName, METH_VARARGS,
   "SetGraphHoverArrayName(self, name:str) -> None\nC++: virtual void SetGraphHoverArrayName(const char *name)\nSetGraphHoverArrayName(self, name:str, idx:int) -> None\nC++: virtual void SetGraphHoverArrayName(const char *name,\n    int idx)\n\nThe name of the array whose value appears when the mouse hovers\nover a graph edge.\n"},
  {"GetGraphHoverArrayName", PyvtkRenderedTreeAreaRepresentation_GetGraphHoverArrayName, METH_VARARGS,
   "GetGraphHoverArrayName(self) -> str\nC++: virtual const char *GetGraphHoverArrayName()\nGetGraphHoverArrayName(self, idx:int) -> str\nC++: virtual const char *GetGraphHoverArrayName(int idx)\n\n"},
  {"SetShrinkPercentage", PyvtkRenderedTreeAreaRepresentation_SetShrinkPercentage, METH_VARARGS,
   "SetShrinkPercentage(self, value:float) -> None\nC++: virtual void SetShrinkPercentage(double value)\n\nSet the region shrink percentage between 0.0 and 1.0.\n"},
  {"GetShrinkPercentage", PyvtkRenderedTreeAreaRepresentation_GetShrinkPercentage, METH_VARARGS,
   "GetShrinkPercentage(self) -> float\nC++: virtual double GetShrinkPercentage()\n\n"},
  {"SetGraphBundlingStrength", PyvtkRenderedTreeAreaRepresentation_SetGraphBundlingStrength, METH_VARARGS,
   "SetGraphBundlingStrength(self, strength:float) -> None\nC++: virtual void SetGraphBundlingStrength(double strength)\nSetGraphBundlingStrength(self, strength:float, idx:int) -> None\nC++: virtual void SetGraphBundlingStrength(double strength,\n    int idx)\n\nSet the bundling strength.\n"},
  {"GetGraphBundlingStrength", PyvtkRenderedTreeAreaRepresentation_GetGraphBundlingStrength, METH_VARARGS,
   "GetGraphBundlingStrength(self) -> float\nC++: virtual double GetGraphBundlingStrength()\nGetGraphBundlingStrength(self, idx:int) -> float\nC++: virtual double GetGraphBundlingStrength(int idx)\n\n"},
  {"SetGraphSplineType", PyvtkRenderedTreeAreaRepresentation_SetGraphSplineType, METH_VARARGS,
   "SetGraphSplineType(self, type:int, idx:int) -> None\nC++: virtual void SetGraphSplineType(int type, int idx)\n\nSets the spline type for the graph edges.\nvtkSplineGraphEdges::CUSTOM uses a vtkCardinalSpline.\nvtkSplineGraphEdges::BSPLINE uses a b-spline. The default is\nBSPLINE.\n"},
  {"GetGraphSplineType", PyvtkRenderedTreeAreaRepresentation_GetGraphSplineType, METH_VARARGS,
   "GetGraphSplineType(self, idx:int) -> int\nC++: virtual int GetGraphSplineType(int idx)\n\n"},
  {"SetAreaLayoutStrategy", PyvtkRenderedTreeAreaRepresentation_SetAreaLayoutStrategy, METH_VARARGS,
   "SetAreaLayoutStrategy(self, strategy:vtkAreaLayoutStrategy)\n    -> None\nC++: virtual void SetAreaLayoutStrategy(\n    vtkAreaLayoutStrategy *strategy)\n\nThe layout strategy for producing spatial regions for the tree.\n"},
  {"GetAreaLayoutStrategy", PyvtkRenderedTreeAreaRepresentation_GetAreaLayoutStrategy, METH_VARARGS,
   "GetAreaLayoutStrategy(self) -> vtkAreaLayoutStrategy\nC++: virtual vtkAreaLayoutStrategy *GetAreaLayoutStrategy()\n\n"},
  {"SetAreaToPolyData", PyvtkRenderedTreeAreaRepresentation_SetAreaToPolyData, METH_VARARGS,
   "SetAreaToPolyData(self, areaToPoly:vtkPolyDataAlgorithm) -> None\nC++: virtual void SetAreaToPolyData(\n    vtkPolyDataAlgorithm *areaToPoly)\n\nThe filter for converting areas to polydata. This may e.g. be\nvtkTreeMapToPolyData or vtkTreeRingToPolyData. The filter must\ntake a vtkTree as input and produce vtkPolyData.\n"},
  {"GetAreaToPolyData", PyvtkRenderedTreeAreaRepresentation_GetAreaToPolyData, METH_VARARGS,
   "GetAreaToPolyData(self) -> vtkPolyDataAlgorithm\nC++: virtual vtkPolyDataAlgorithm *GetAreaToPolyData()\n\n"},
  {"SetUseRectangularCoordinates", PyvtkRenderedTreeAreaRepresentation_SetUseRectangularCoordinates, METH_VARARGS,
   "SetUseRectangularCoordinates(self, _arg:bool) -> None\nC++: virtual void SetUseRectangularCoordinates(bool _arg)\n\nWhether the area represents radial or rectangular coordinates.\n"},
  {"GetUseRectangularCoordinates", PyvtkRenderedTreeAreaRepresentation_GetUseRectangularCoordinates, METH_VARARGS,
   "GetUseRectangularCoordinates(self) -> bool\nC++: virtual bool GetUseRectangularCoordinates()\n\n"},
  {"UseRectangularCoordinatesOn", PyvtkRenderedTreeAreaRepresentation_UseRectangularCoordinatesOn, METH_VARARGS,
   "UseRectangularCoordinatesOn(self) -> None\nC++: virtual void UseRectangularCoordinatesOn()\n\n"},
  {"UseRectangularCoordinatesOff", PyvtkRenderedTreeAreaRepresentation_UseRectangularCoordinatesOff, METH_VARARGS,
   "UseRectangularCoordinatesOff(self) -> None\nC++: virtual void UseRectangularCoordinatesOff()\n\n"},
  {"SetAreaLabelMapper", PyvtkRenderedTreeAreaRepresentation_SetAreaLabelMapper, METH_VARARGS,
   "SetAreaLabelMapper(self, mapper:vtkLabeledDataMapper) -> None\nC++: virtual void SetAreaLabelMapper(vtkLabeledDataMapper *mapper)\n\nThe mapper for rendering labels on areas. This may e.g. be\nvtkDynamic2DLabelMapper or vtkTreeMapLabelMapper.\n"},
  {"GetAreaLabelMapper", PyvtkRenderedTreeAreaRepresentation_GetAreaLabelMapper, METH_VARARGS,
   "GetAreaLabelMapper(self) -> vtkLabeledDataMapper\nC++: virtual vtkLabeledDataMapper *GetAreaLabelMapper()\n\n"},
  {"ApplyViewTheme", PyvtkRenderedTreeAreaRepresentation_ApplyViewTheme, METH_VARARGS,
   "ApplyViewTheme(self, theme:vtkViewTheme) -> None\nC++: void ApplyViewTheme(vtkViewTheme *theme) override;\n\nApply the theme to this view.\n"},
  {"SetEdgeScalarBarVisibility", PyvtkRenderedTreeAreaRepresentation_SetEdgeScalarBarVisibility, METH_VARARGS,
   "SetEdgeScalarBarVisibility(self, b:bool) -> None\nC++: virtual void SetEdgeScalarBarVisibility(bool b)\n\nVisibility of scalar bar actor for edges.\n"},
  {"GetEdgeScalarBarVisibility", PyvtkRenderedTreeAreaRepresentation_GetEdgeScalarBarVisibility, METH_VARARGS,
   "GetEdgeScalarBarVisibility(self) -> bool\nC++: virtual bool GetEdgeScalarBarVisibility()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRenderedTreeAreaRepresentation_Doc =
  "vtkRenderedTreeAreaRepresentation - \n\n"
  "Superclass: vtkRenderedRepresentation\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRenderedTreeAreaRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkRenderedTreeAreaRepresentation", // tp_name
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
  PyvtkRenderedTreeAreaRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderedTreeAreaRepresentation_StaticNew()
{
  return vtkRenderedTreeAreaRepresentation::New();
}

PyObject *PyvtkRenderedTreeAreaRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRenderedTreeAreaRepresentation_Type, PyvtkRenderedTreeAreaRepresentation_Methods,
    "vtkRenderedTreeAreaRepresentation",
 &PyvtkRenderedTreeAreaRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkRenderedRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRenderedTreeAreaRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderedTreeAreaRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderedTreeAreaRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

