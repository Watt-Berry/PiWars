// python wrapper for vtkBoxRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBoxRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBoxRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkBoxRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static PyObject *
PyvtkBoxRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBoxRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoxRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBoxRepresentation *tempr = vtkBoxRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBoxRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoxRepresentation::NewInstance());

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
PyvtkBoxRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBoxRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBoxRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkPlanes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
  {
    if (ap.IsBound())
    {
      op->GetPlanes(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::GetPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetUnderlyingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnderlyingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetUnderlyingPlane(temp0) :
      op->vtkBoxRepresentation::GetUnderlyingPlane(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsideOut(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkBoxRepresentation::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkBoxRepresentation::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkBoxRepresentation::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->GetTransform(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::GetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GetPolyData(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkBoxRepresentation::GetHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkBoxRepresentation::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetFaceProperty() :
      op->vtkBoxRepresentation::GetFaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetSelectedFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedFaceProperty() :
      op->vtkBoxRepresentation::GetSelectedFaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetOutlineProperty() :
      op->vtkBoxRepresentation::GetOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetSelectedOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedOutlineProperty() :
      op->vtkBoxRepresentation::GetSelectedOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetForegroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetForegroundColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBoxRepresentation::SetForegroundColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoxRepresentation_SetForegroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetForegroundColor(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::SetForegroundColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoxRepresentation_SetForegroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBoxRepresentation_SetForegroundColor_s1(self, args);
    case 1:
      return PyvtkBoxRepresentation_SetForegroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetForegroundColor");
  return nullptr;
}


static PyObject *
PyvtkBoxRepresentation_SetInteractionColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetInteractionColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBoxRepresentation::SetInteractionColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoxRepresentation_SetInteractionColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionColor(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::SetInteractionColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBoxRepresentation_SetInteractionColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBoxRepresentation_SetInteractionColor_s1(self, args);
    case 1:
      return PyvtkBoxRepresentation_SetInteractionColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInteractionColor");
  return nullptr;
}


static PyObject *
PyvtkBoxRepresentation_SetOutlineFaceWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineFaceWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutlineFaceWires(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::SetOutlineFaceWires(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetOutlineFaceWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineFaceWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutlineFaceWires() :
      op->vtkBoxRepresentation::GetOutlineFaceWires());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_OutlineFaceWiresOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineFaceWiresOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineFaceWiresOn();
    }
    else
    {
      op->vtkBoxRepresentation::OutlineFaceWiresOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_OutlineFaceWiresOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineFaceWiresOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineFaceWiresOff();
    }
    else
    {
      op->vtkBoxRepresentation::OutlineFaceWiresOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetOutlineCursorWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineCursorWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutlineCursorWires(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::SetOutlineCursorWires(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetOutlineCursorWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineCursorWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutlineCursorWires() :
      op->vtkBoxRepresentation::GetOutlineCursorWires());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_OutlineCursorWiresOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineCursorWiresOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineCursorWiresOn();
    }
    else
    {
      op->vtkBoxRepresentation::OutlineCursorWiresOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_OutlineCursorWiresOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineCursorWiresOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineCursorWiresOff();
    }
    else
    {
      op->vtkBoxRepresentation::OutlineCursorWiresOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_HandlesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandlesOn();
    }
    else
    {
      op->vtkBoxRepresentation::HandlesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_HandlesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandlesOff();
    }
    else
    {
      op->vtkBoxRepresentation::HandlesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->PlaceWidget(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::PlaceWidget(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkBoxRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkBoxRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->StartWidgetInteraction(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::StartWidgetInteraction(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->WidgetInteraction(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::WidgetInteraction(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkBoxRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_StartComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->StartComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBoxRepresentation::StartComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}


static PyObject *
PyvtkBoxRepresentation_ComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->ComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBoxRepresentation::ComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}


static PyObject *
PyvtkBoxRepresentation_ComputeComplexInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeComplexInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  int temp4 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeComplexInteractionState(temp0, temp1, temp2, temp3, temp4) :
      op->vtkBoxRepresentation::ComputeComplexInteractionState(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}


static PyObject *
PyvtkBoxRepresentation_EndComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->EndComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBoxRepresentation::EndComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}


static PyObject *
PyvtkBoxRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkBoxRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkBoxRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkBoxRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionState(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetTwoPlaneMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwoPlaneMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTwoPlaneMode() :
      op->vtkBoxRepresentation::GetTwoPlaneMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetTwoPlaneMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwoPlaneMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTwoPlaneMode(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::SetTwoPlaneMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetSnapToAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapToAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSnapToAxes() :
      op->vtkBoxRepresentation::GetSnapToAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetSnapToAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapToAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSnapToAxes(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::SetSnapToAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_StepForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StepForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StepForward();
    }
    else
    {
      op->vtkBoxRepresentation::StepForward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_StepBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StepBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StepBackward();
    }
    else
    {
      op->vtkBoxRepresentation::StepBackward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkBoxRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetTranslationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxis() :
      op->vtkBoxRepresentation::GetTranslationAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetTranslationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationAxis(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::SetTranslationAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetTranslationAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxisMinValue() :
      op->vtkBoxRepresentation::GetTranslationAxisMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetTranslationAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxisMaxValue() :
      op->vtkBoxRepresentation::GetTranslationAxisMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetXTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXTranslationAxisOn();
    }
    else
    {
      op->vtkBoxRepresentation::SetXTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetYTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetYTranslationAxisOn();
    }
    else
    {
      op->vtkBoxRepresentation::SetYTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetZTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetZTranslationAxisOn();
    }
    else
    {
      op->vtkBoxRepresentation::SetZTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_SetTranslationAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationAxisOff();
    }
    else
    {
      op->vtkBoxRepresentation::SetTranslationAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_IsTranslationConstrained(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTranslationConstrained");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsTranslationConstrained() :
      op->vtkBoxRepresentation::IsTranslationConstrained());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxRepresentation *op = static_cast<vtkBoxRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkBoxRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBoxRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkBoxRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBoxRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBoxRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBoxRepresentation\nC++: static vtkBoxRepresentation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBoxRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBoxRepresentation\nC++: vtkBoxRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBoxRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBoxRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetPlanes", PyvtkBoxRepresentation_GetPlanes, METH_VARARGS,
   "GetPlanes(self, planes:vtkPlanes) -> None\nC++: void GetPlanes(vtkPlanes *planes)\n\nGet the planes describing the implicit function defined by the\nbox widget. The user must provide the instance of the class\nvtkPlanes. Note that vtkPlanes is a subclass of\nvtkImplicitFunction, meaning that it can be used by a variety of\nfilters to perform clipping, cutting, and selection of data. \n(The direction of the normals of the planes can be reversed\nenabling the InsideOut flag.)\n"},
  {"GetUnderlyingPlane", PyvtkBoxRepresentation_GetUnderlyingPlane, METH_VARARGS,
   "GetUnderlyingPlane(self, i:int) -> vtkPlane\nC++: vtkPlane *GetUnderlyingPlane(int i)\n\n"},
  {"SetInsideOut", PyvtkBoxRepresentation_SetInsideOut, METH_VARARGS,
   "SetInsideOut(self, _arg:int) -> None\nC++: virtual void SetInsideOut(vtkTypeBool _arg)\n\nSet/Get the InsideOut flag. This data member is used in\nconjunction with the GetPlanes() method. When off, the normals\npoint out of the box. When on, the normals point into the\nhexahedron.  InsideOut is off by default.\n"},
  {"GetInsideOut", PyvtkBoxRepresentation_GetInsideOut, METH_VARARGS,
   "GetInsideOut(self) -> int\nC++: virtual vtkTypeBool GetInsideOut()\n\n"},
  {"InsideOutOn", PyvtkBoxRepresentation_InsideOutOn, METH_VARARGS,
   "InsideOutOn(self) -> None\nC++: virtual void InsideOutOn()\n\n"},
  {"InsideOutOff", PyvtkBoxRepresentation_InsideOutOff, METH_VARARGS,
   "InsideOutOff(self) -> None\nC++: virtual void InsideOutOff()\n\n"},
  {"GetTransform", PyvtkBoxRepresentation_GetTransform, METH_VARARGS,
   "GetTransform(self, t:vtkTransform) -> None\nC++: virtual void GetTransform(vtkTransform *t)\n\nRetrieve a linear transform characterizing the transformation of\nthe box. Note that the transformation is relative to where\nPlaceWidget() was initially called. This method modifies the\ntransform provided. The transform can be used to control the\nposition of vtkProp3D's, as well as other transformation\noperations (e.g., vtkTransformPolyData).\n"},
  {"SetTransform", PyvtkBoxRepresentation_SetTransform, METH_VARARGS,
   "SetTransform(self, t:vtkTransform) -> None\nC++: virtual void SetTransform(vtkTransform *t)\n\nSet the position, scale and orientation of the box widget using\nthe transform specified. Note that the transformation is relative\nto where PlaceWidget() was initially called (i.e., the original\nbounding box).\n"},
  {"GetPolyData", PyvtkBoxRepresentation_GetPolyData, METH_VARARGS,
   "GetPolyData(self, pd:vtkPolyData) -> None\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that define the box widget.\nThe polydata consists of 6 quadrilateral faces and 15 points. The\nfirst eight points define the eight corner vertices; the next six\ndefine the\n-x,+x, -y,+y, -z,+z face points; and the final point (the 15th\n    out of 15 points) defines the center of the box. These point\n    values are guaranteed to be up-to-date when either the\n    widget's corresponding InteractionEvent or\n    EndInteractionEvent events are invoked. The user provides the\n    vtkPolyData and the points and cells are added to it.\n"},
  {"GetHandleProperty", PyvtkBoxRepresentation_GetHandleProperty, METH_VARARGS,
   "GetHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles, when selected or normal, can be\nspecified.\n"},
  {"GetSelectedHandleProperty", PyvtkBoxRepresentation_GetSelectedHandleProperty, METH_VARARGS,
   "GetSelectedHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedHandleProperty()\n\n"},
  {"GetFaceProperty", PyvtkBoxRepresentation_GetFaceProperty, METH_VARARGS,
   "GetFaceProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetFaceProperty()\n\nGet the face properties (the faces of the box). The properties of\nthe face when selected and normal can be set.\n"},
  {"GetSelectedFaceProperty", PyvtkBoxRepresentation_GetSelectedFaceProperty, METH_VARARGS,
   "GetSelectedFaceProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedFaceProperty()\n\n"},
  {"GetOutlineProperty", PyvtkBoxRepresentation_GetOutlineProperty, METH_VARARGS,
   "GetOutlineProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetOutlineProperty()\n\nGet the outline properties (the outline of the box). The\nproperties of the outline when selected and normal can be set.\n"},
  {"GetSelectedOutlineProperty", PyvtkBoxRepresentation_GetSelectedOutlineProperty, METH_VARARGS,
   "GetSelectedOutlineProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedOutlineProperty()\n\n"},
  {"SetForegroundColor", PyvtkBoxRepresentation_SetForegroundColor, METH_VARARGS,
   "SetForegroundColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: void SetForegroundColor(double _arg1, double _arg2,\n    double _arg3)\nSetForegroundColor(self, _arg:(float, float, float)) -> None\nC++: void SetForegroundColor(const double _arg[3])\n\nSet the foreground color (the outline of the box).\n"},
  {"SetInteractionColor", PyvtkBoxRepresentation_SetInteractionColor, METH_VARARGS,
   "SetInteractionColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: void SetInteractionColor(double _arg1, double _arg2,\n    double _arg3)\nSetInteractionColor(self, _arg:(float, float, float)) -> None\nC++: void SetInteractionColor(const double _arg[3])\n\nSet the interaction color. Applies to the handle and outline when\ninteraction is happening.\n"},
  {"SetOutlineFaceWires", PyvtkBoxRepresentation_SetOutlineFaceWires, METH_VARARGS,
   "SetOutlineFaceWires(self, __a:int) -> None\nC++: void SetOutlineFaceWires(int)\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {"GetOutlineFaceWires", PyvtkBoxRepresentation_GetOutlineFaceWires, METH_VARARGS,
   "GetOutlineFaceWires(self) -> int\nC++: virtual int GetOutlineFaceWires()\n\n"},
  {"OutlineFaceWiresOn", PyvtkBoxRepresentation_OutlineFaceWiresOn, METH_VARARGS,
   "OutlineFaceWiresOn(self) -> None\nC++: void OutlineFaceWiresOn()\n\n"},
  {"OutlineFaceWiresOff", PyvtkBoxRepresentation_OutlineFaceWiresOff, METH_VARARGS,
   "OutlineFaceWiresOff(self) -> None\nC++: void OutlineFaceWiresOff()\n\n"},
  {"SetOutlineCursorWires", PyvtkBoxRepresentation_SetOutlineCursorWires, METH_VARARGS,
   "SetOutlineCursorWires(self, __a:int) -> None\nC++: void SetOutlineCursorWires(int)\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {"GetOutlineCursorWires", PyvtkBoxRepresentation_GetOutlineCursorWires, METH_VARARGS,
   "GetOutlineCursorWires(self) -> int\nC++: virtual int GetOutlineCursorWires()\n\n"},
  {"OutlineCursorWiresOn", PyvtkBoxRepresentation_OutlineCursorWiresOn, METH_VARARGS,
   "OutlineCursorWiresOn(self) -> None\nC++: void OutlineCursorWiresOn()\n\n"},
  {"OutlineCursorWiresOff", PyvtkBoxRepresentation_OutlineCursorWiresOff, METH_VARARGS,
   "OutlineCursorWiresOff(self) -> None\nC++: void OutlineCursorWiresOff()\n\n"},
  {"HandlesOn", PyvtkBoxRepresentation_HandlesOn, METH_VARARGS,
   "HandlesOn(self) -> None\nC++: virtual void HandlesOn()\n\nSwitches handles (the spheres) on or off by manipulating the\nunderlying actor visibility.\n"},
  {"HandlesOff", PyvtkBoxRepresentation_HandlesOff, METH_VARARGS,
   "HandlesOff(self) -> None\nC++: virtual void HandlesOff()\n\n"},
  {"PlaceWidget", PyvtkBoxRepresentation_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"BuildRepresentation", PyvtkBoxRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"ComputeInteractionState", PyvtkBoxRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"StartWidgetInteraction", PyvtkBoxRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, e:[float, float]) -> None\nC++: void StartWidgetInteraction(double e[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkBoxRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, e:[float, float]) -> None\nC++: void WidgetInteraction(double e[2]) override;\n\n"},
  {"GetBounds", PyvtkBoxRepresentation_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"StartComplexInteraction", PyvtkBoxRepresentation_StartComplexInteraction, METH_VARARGS,
   "StartComplexInteraction(self, iren:vtkRenderWindowInteractor,\n    widget:vtkAbstractWidget, event:int, calldata:Pointer) -> None\nC++: void StartComplexInteraction(vtkRenderWindowInteractor *iren,\n     vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\n"},
  {"ComplexInteraction", PyvtkBoxRepresentation_ComplexInteraction, METH_VARARGS,
   "ComplexInteraction(self, iren:vtkRenderWindowInteractor,\n    widget:vtkAbstractWidget, event:int, calldata:Pointer) -> None\nC++: void ComplexInteraction(vtkRenderWindowInteractor *iren,\n    vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\n"},
  {"ComputeComplexInteractionState", PyvtkBoxRepresentation_ComputeComplexInteractionState, METH_VARARGS,
   "ComputeComplexInteractionState(self,\n    iren:vtkRenderWindowInteractor, widget:vtkAbstractWidget,\n    event:int, calldata:Pointer, modify:int=0) -> int\nC++: int ComputeComplexInteractionState(\n    vtkRenderWindowInteractor *iren, vtkAbstractWidget *widget,\n    unsigned long event, void *calldata, int modify=0) override;\n\n"},
  {"EndComplexInteraction", PyvtkBoxRepresentation_EndComplexInteraction, METH_VARARGS,
   "EndComplexInteraction(self, iren:vtkRenderWindowInteractor,\n    widget:vtkAbstractWidget, event:int, calldata:Pointer) -> None\nC++: void EndComplexInteraction(vtkRenderWindowInteractor *iren,\n    vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\n"},
  {"ReleaseGraphicsResources", PyvtkBoxRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"RenderOpaqueGeometry", PyvtkBoxRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkBoxRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkBoxRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"SetInteractionState", PyvtkBoxRepresentation_SetInteractionState, METH_VARARGS,
   "SetInteractionState(self, state:int) -> None\nC++: void SetInteractionState(int state)\n\nThe interaction state may be set from a widget (e.g.,\nvtkBoxWidget2) or other object. This controls how the interaction\nwith the widget proceeds. Normally this method is used as part of\na handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetTwoPlaneMode", PyvtkBoxRepresentation_GetTwoPlaneMode, METH_VARARGS,
   "GetTwoPlaneMode(self) -> bool\nC++: virtual bool GetTwoPlaneMode()\n\nIn two plane mode only the X planes are shown this is useful for\ndefining thick slabs\n"},
  {"SetTwoPlaneMode", PyvtkBoxRepresentation_SetTwoPlaneMode, METH_VARARGS,
   "SetTwoPlaneMode(self, __a:bool) -> None\nC++: void SetTwoPlaneMode(bool)\n\n"},
  {"GetSnapToAxes", PyvtkBoxRepresentation_GetSnapToAxes, METH_VARARGS,
   "GetSnapToAxes(self) -> bool\nC++: virtual bool GetSnapToAxes()\n\nFor complex events should we snap orientations to be aligned with\nthe x y z axes\n"},
  {"SetSnapToAxes", PyvtkBoxRepresentation_SetSnapToAxes, METH_VARARGS,
   "SetSnapToAxes(self, _arg:bool) -> None\nC++: virtual void SetSnapToAxes(bool _arg)\n\n"},
  {"StepForward", PyvtkBoxRepresentation_StepForward, METH_VARARGS,
   "StepForward(self) -> None\nC++: void StepForward()\n\nFor complex events should we snap orientations to be aligned with\nthe x y z axes\n"},
  {"StepBackward", PyvtkBoxRepresentation_StepBackward, METH_VARARGS,
   "StepBackward(self) -> None\nC++: void StepBackward()\n\n"},
  {"RegisterPickers", PyvtkBoxRepresentation_RegisterPickers, METH_VARARGS,
   "RegisterPickers(self) -> None\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {"GetTranslationAxis", PyvtkBoxRepresentation_GetTranslationAxis, METH_VARARGS,
   "GetTranslationAxis(self) -> int\nC++: virtual int GetTranslationAxis()\n\nGets/Sets the constraint axis for translations. Returns\nAxis::NONE if none.\n"},
  {"SetTranslationAxis", PyvtkBoxRepresentation_SetTranslationAxis, METH_VARARGS,
   "SetTranslationAxis(self, _arg:int) -> None\nC++: virtual void SetTranslationAxis(int _arg)\n\n"},
  {"GetTranslationAxisMinValue", PyvtkBoxRepresentation_GetTranslationAxisMinValue, METH_VARARGS,
   "GetTranslationAxisMinValue(self) -> int\nC++: virtual int GetTranslationAxisMinValue()\n\n"},
  {"GetTranslationAxisMaxValue", PyvtkBoxRepresentation_GetTranslationAxisMaxValue, METH_VARARGS,
   "GetTranslationAxisMaxValue(self) -> int\nC++: virtual int GetTranslationAxisMaxValue()\n\n"},
  {"SetXTranslationAxisOn", PyvtkBoxRepresentation_SetXTranslationAxisOn, METH_VARARGS,
   "SetXTranslationAxisOn(self) -> None\nC++: void SetXTranslationAxisOn()\n\nToggles constraint translation axis on/off.\n"},
  {"SetYTranslationAxisOn", PyvtkBoxRepresentation_SetYTranslationAxisOn, METH_VARARGS,
   "SetYTranslationAxisOn(self) -> None\nC++: void SetYTranslationAxisOn()\n\n"},
  {"SetZTranslationAxisOn", PyvtkBoxRepresentation_SetZTranslationAxisOn, METH_VARARGS,
   "SetZTranslationAxisOn(self) -> None\nC++: void SetZTranslationAxisOn()\n\n"},
  {"SetTranslationAxisOff", PyvtkBoxRepresentation_SetTranslationAxisOff, METH_VARARGS,
   "SetTranslationAxisOff(self) -> None\nC++: void SetTranslationAxisOff()\n\n"},
  {"IsTranslationConstrained", PyvtkBoxRepresentation_IsTranslationConstrained, METH_VARARGS,
   "IsTranslationConstrained(self) -> bool\nC++: bool IsTranslationConstrained()\n\nReturns true if ConstrainedAxis\n"},
  {"GetActors", PyvtkBoxRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp (i.e., support rendering). GetActors adds all the\ninternal props used by this representation to the supplied\ncollection.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBoxRepresentation_Doc =
  "vtkBoxRepresentation - a class defining the representation for the\nvtkBoxWidget2\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is a concrete representation for the vtkBoxWidget2. It\n"
  "represents a box with seven handles: one on each of the six faces,\n"
  "plus a center handle. Through interaction with the widget, the box\n"
  "representation can be arbitrarily positioned in the 3D space.\n\n"
  "To use this representation, you normally use the PlaceWidget() method\n"
  "to position the widget at a specified region in space.\n\n"
  "@warning\n"
  "This class, and vtkBoxWidget2, are second generation VTK widgets. An\n"
  "earlier version of this functionality was defined in the class\n"
  "vtkBoxWidget.\n\n"
  "@sa\n"
  "vtkBoxWidget2 vtkBoxWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBoxRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkBoxRepresentation", // tp_name
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
  PyvtkBoxRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBoxRepresentation_StaticNew()
{
  return vtkBoxRepresentation::New();
}

PyObject *PyvtkBoxRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBoxRepresentation_Type, PyvtkBoxRepresentation_Methods,
    "vtkBoxRepresentation",
 &PyvtkBoxRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 10; c++)
  {
    static const struct { const char *name; int value; }
      constants[10] = {
        { "Outside", vtkBoxRepresentation::Outside },
        { "MoveF0", vtkBoxRepresentation::MoveF0 },
        { "MoveF1", vtkBoxRepresentation::MoveF1 },
        { "MoveF2", vtkBoxRepresentation::MoveF2 },
        { "MoveF3", vtkBoxRepresentation::MoveF3 },
        { "MoveF4", vtkBoxRepresentation::MoveF4 },
        { "MoveF5", vtkBoxRepresentation::MoveF5 },
        { "Translating", vtkBoxRepresentation::Translating },
        { "Rotating", vtkBoxRepresentation::Rotating },
        { "Scaling", vtkBoxRepresentation::Scaling },
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

void PyVTKAddFile_vtkBoxRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoxRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBoxRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

