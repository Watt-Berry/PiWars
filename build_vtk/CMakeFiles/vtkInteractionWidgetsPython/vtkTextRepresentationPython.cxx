// python wrapper for vtkTextRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTextRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkTextRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkBorderRepresentation_ClassNew
extern "C" { PyObject *PyvtkBorderRepresentation_ClassNew(); }
#define DECLARED_PyvtkBorderRepresentation_ClassNew
#endif

static PyObject *
PyvtkTextRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextRepresentation *tempr = vtkTextRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextRepresentation::NewInstance());

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
PyvtkTextRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTextRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTextRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_SetTextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  vtkTextActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextActor"))
  {
    if (ap.IsBound())
    {
      op->SetTextActor(temp0);
    }
    else
    {
      op->vtkTextRepresentation::SetTextActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetTextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextActor *tempr = (ap.IsBound() ?
      op->GetTextActor() :
      op->vtkTextRepresentation::GetTextActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_SetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetText(temp0);
    }
    else
    {
      op->vtkTextRepresentation::SetText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetText() :
      op->vtkTextRepresentation::GetText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkTextRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

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
      op->GetSize(temp0);
    }
    else
    {
      op->vtkTextRepresentation::GetSize(temp0);
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
PyvtkTextRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkTextRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

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
      op->vtkTextRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkTextRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkTextRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkTextRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkTextRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_SetWindowLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindowLocation(temp0);
    }
    else
    {
      op->vtkTextRepresentation::SetWindowLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1);
    }
    else
    {
      op->vtkTextRepresentation::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextRepresentation_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

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
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkTextRepresentation::SetPosition(temp0);
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
PyvtkTextRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTextRepresentation_SetPosition_s1(self, args);
    case 1:
      return PyvtkTextRepresentation_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkTextRepresentation_ExecuteTextPropertyModifiedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteTextPropertyModifiedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    if (ap.IsBound())
    {
      op->ExecuteTextPropertyModifiedEvent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextRepresentation::ExecuteTextPropertyModifiedEvent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  return result;
}


static PyObject *
PyvtkTextRepresentation_ExecuteTextActorModifiedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteTextActorModifiedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    if (ap.IsBound())
    {
      op->ExecuteTextActorModifiedEvent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextRepresentation::ExecuteTextActorModifiedEvent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  return result;
}


static PyObject *
PyvtkTextRepresentation_SetPaddingLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPaddingLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPaddingLeft(temp0);
    }
    else
    {
      op->vtkTextRepresentation::SetPaddingLeft(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetPaddingLeftMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingLeftMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingLeftMinValue() :
      op->vtkTextRepresentation::GetPaddingLeftMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetPaddingLeftMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingLeftMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingLeftMaxValue() :
      op->vtkTextRepresentation::GetPaddingLeftMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetPaddingLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingLeft() :
      op->vtkTextRepresentation::GetPaddingLeft());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_SetPaddingRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPaddingRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPaddingRight(temp0);
    }
    else
    {
      op->vtkTextRepresentation::SetPaddingRight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetPaddingRightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingRightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingRightMinValue() :
      op->vtkTextRepresentation::GetPaddingRightMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetPaddingRightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingRightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingRightMaxValue() :
      op->vtkTextRepresentation::GetPaddingRightMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetPaddingRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingRight() :
      op->vtkTextRepresentation::GetPaddingRight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_SetPaddingTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPaddingTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPaddingTop(temp0);
    }
    else
    {
      op->vtkTextRepresentation::SetPaddingTop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetPaddingTopMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingTopMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingTopMinValue() :
      op->vtkTextRepresentation::GetPaddingTopMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetPaddingTopMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingTopMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingTopMaxValue() :
      op->vtkTextRepresentation::GetPaddingTopMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetPaddingTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingTop() :
      op->vtkTextRepresentation::GetPaddingTop());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_SetPaddingBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPaddingBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPaddingBottom(temp0);
    }
    else
    {
      op->vtkTextRepresentation::SetPaddingBottom(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetPaddingBottomMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingBottomMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingBottomMinValue() :
      op->vtkTextRepresentation::GetPaddingBottomMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetPaddingBottomMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingBottomMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingBottomMaxValue() :
      op->vtkTextRepresentation::GetPaddingBottomMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetPaddingBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingBottom() :
      op->vtkTextRepresentation::GetPaddingBottom());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRepresentation_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0);
    }
    else
    {
      op->vtkTextRepresentation::SetPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTextRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkTextRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTextRepresentation\nC++: static vtkTextRepresentation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTextRepresentation\nC++: vtkTextRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTextRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTextRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTextActor", PyvtkTextRepresentation_SetTextActor, METH_VARARGS,
   "SetTextActor(self, textActor:vtkTextActor) -> None\nC++: void SetTextActor(vtkTextActor *textActor)\n\nSpecify the vtkTextActor to manage. If not specified, then one is\nautomatically created.\n"},
  {"GetTextActor", PyvtkTextRepresentation_GetTextActor, METH_VARARGS,
   "GetTextActor(self) -> vtkTextActor\nC++: virtual vtkTextActor *GetTextActor()\n\n"},
  {"SetText", PyvtkTextRepresentation_SetText, METH_VARARGS,
   "SetText(self, text:str) -> None\nC++: void SetText(const char *text)\n\nGet/Set the text string display by this representation.\n"},
  {"GetText", PyvtkTextRepresentation_GetText, METH_VARARGS,
   "GetText(self) -> str\nC++: const char *GetText()\n\n"},
  {"BuildRepresentation", PyvtkTextRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nSatisfy the superclasses API.\n"},
  {"GetSize", PyvtkTextRepresentation_GetSize, METH_VARARGS,
   "GetSize(self, size:[float, float]) -> None\nC++: void GetSize(double size[2]) override;\n\n"},
  {"GetActors2D", PyvtkTextRepresentation_GetActors2D, METH_VARARGS,
   "GetActors2D(self, __a:vtkPropCollection) -> None\nC++: void GetActors2D(vtkPropCollection *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkTextRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOverlay", PyvtkTextRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, __a:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\n"},
  {"RenderOpaqueGeometry", PyvtkTextRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkTextRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkTextRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"SetWindowLocation", PyvtkTextRepresentation_SetWindowLocation, METH_VARARGS,
   "SetWindowLocation(self, enumLocation:int) -> None\nC++: void SetWindowLocation(int enumLocation) override;\n\nSet the text position, by enumeration (\nvtkBorderRepresentation::AnyLocation = 0,\nvtkBorderRepresentation::LowerLeftCorner,\nvtkBorderRepresentation::LowerRightCorner,\nvtkBorderRepresentation::LowerCenter,\nvtkBorderRepresentation::UpperLeftCorner,\nvtkBorderRepresentation::UpperRightCorner,\nvtkBorderRepresentation::UpperCenter) related to the render\nwindow\n"},
  {"SetPosition", PyvtkTextRepresentation_SetPosition, METH_VARARGS,
   "SetPosition(self, x:float, y:float) -> None\nC++: void SetPosition(double x, double y) override;\nSetPosition(self, pos:[float, float]) -> None\nC++: void SetPosition(double pos[2]) override;\n\nSet the text position, by overriding the same function of\nvtkBorderRepresentation so that the Modified() will be called.\n"},
  {"ExecuteTextPropertyModifiedEvent", PyvtkTextRepresentation_ExecuteTextPropertyModifiedEvent, METH_VARARGS,
   "ExecuteTextPropertyModifiedEvent(self, obj:vtkObject,\n    enumEvent:int, p:Pointer) -> None\nC++: void ExecuteTextPropertyModifiedEvent(vtkObject *obj,\n    unsigned long enumEvent, void *p)\n\nInternal. Execute events observed by internal observer\n"},
  {"ExecuteTextActorModifiedEvent", PyvtkTextRepresentation_ExecuteTextActorModifiedEvent, METH_VARARGS,
   "ExecuteTextActorModifiedEvent(self, obj:vtkObject, enumEvent:int,\n    p:Pointer) -> None\nC++: void ExecuteTextActorModifiedEvent(vtkObject *obj,\n    unsigned long enumEvent, void *p)\n\n"},
  {"SetPaddingLeft", PyvtkTextRepresentation_SetPaddingLeft, METH_VARARGS,
   "SetPaddingLeft(self, _arg:int) -> None\nC++: virtual void SetPaddingLeft(int _arg)\n\nSet/Get the padding between the text and the left border, in\npixels unit. Default is 0.\n"},
  {"GetPaddingLeftMinValue", PyvtkTextRepresentation_GetPaddingLeftMinValue, METH_VARARGS,
   "GetPaddingLeftMinValue(self) -> int\nC++: virtual int GetPaddingLeftMinValue()\n\n"},
  {"GetPaddingLeftMaxValue", PyvtkTextRepresentation_GetPaddingLeftMaxValue, METH_VARARGS,
   "GetPaddingLeftMaxValue(self) -> int\nC++: virtual int GetPaddingLeftMaxValue()\n\n"},
  {"GetPaddingLeft", PyvtkTextRepresentation_GetPaddingLeft, METH_VARARGS,
   "GetPaddingLeft(self) -> int\nC++: virtual int GetPaddingLeft()\n\n"},
  {"SetPaddingRight", PyvtkTextRepresentation_SetPaddingRight, METH_VARARGS,
   "SetPaddingRight(self, _arg:int) -> None\nC++: virtual void SetPaddingRight(int _arg)\n\nSet/Get the padding between the text and the right border, in\npixels unit. Default is 0.\n"},
  {"GetPaddingRightMinValue", PyvtkTextRepresentation_GetPaddingRightMinValue, METH_VARARGS,
   "GetPaddingRightMinValue(self) -> int\nC++: virtual int GetPaddingRightMinValue()\n\n"},
  {"GetPaddingRightMaxValue", PyvtkTextRepresentation_GetPaddingRightMaxValue, METH_VARARGS,
   "GetPaddingRightMaxValue(self) -> int\nC++: virtual int GetPaddingRightMaxValue()\n\n"},
  {"GetPaddingRight", PyvtkTextRepresentation_GetPaddingRight, METH_VARARGS,
   "GetPaddingRight(self) -> int\nC++: virtual int GetPaddingRight()\n\n"},
  {"SetPaddingTop", PyvtkTextRepresentation_SetPaddingTop, METH_VARARGS,
   "SetPaddingTop(self, _arg:int) -> None\nC++: virtual void SetPaddingTop(int _arg)\n\nSet/Get the padding between the text and the top border, in\npixels unit. Default is 0.\n"},
  {"GetPaddingTopMinValue", PyvtkTextRepresentation_GetPaddingTopMinValue, METH_VARARGS,
   "GetPaddingTopMinValue(self) -> int\nC++: virtual int GetPaddingTopMinValue()\n\n"},
  {"GetPaddingTopMaxValue", PyvtkTextRepresentation_GetPaddingTopMaxValue, METH_VARARGS,
   "GetPaddingTopMaxValue(self) -> int\nC++: virtual int GetPaddingTopMaxValue()\n\n"},
  {"GetPaddingTop", PyvtkTextRepresentation_GetPaddingTop, METH_VARARGS,
   "GetPaddingTop(self) -> int\nC++: virtual int GetPaddingTop()\n\n"},
  {"SetPaddingBottom", PyvtkTextRepresentation_SetPaddingBottom, METH_VARARGS,
   "SetPaddingBottom(self, _arg:int) -> None\nC++: virtual void SetPaddingBottom(int _arg)\n\nSet/Get the padding between the text and the bottom border, in\npixels unit. Default is 0.\n"},
  {"GetPaddingBottomMinValue", PyvtkTextRepresentation_GetPaddingBottomMinValue, METH_VARARGS,
   "GetPaddingBottomMinValue(self) -> int\nC++: virtual int GetPaddingBottomMinValue()\n\n"},
  {"GetPaddingBottomMaxValue", PyvtkTextRepresentation_GetPaddingBottomMaxValue, METH_VARARGS,
   "GetPaddingBottomMaxValue(self) -> int\nC++: virtual int GetPaddingBottomMaxValue()\n\n"},
  {"GetPaddingBottom", PyvtkTextRepresentation_GetPaddingBottom, METH_VARARGS,
   "GetPaddingBottom(self) -> int\nC++: virtual int GetPaddingBottom()\n\n"},
  {"SetPadding", PyvtkTextRepresentation_SetPadding, METH_VARARGS,
   "SetPadding(self, padding:int) -> None\nC++: void SetPadding(int padding)\n\nSet the padding between the text and the left/right/top/bottom\nborder, in pixels unit. Default is 0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTextRepresentation_Doc =
  "vtkTextRepresentation - represent text for vtkTextWidget\n\n"
  "Superclass: vtkBorderRepresentation\n\n"
  "This class represents text for a vtkTextWidget.  This class provides\n"
  "support for interactively placing text on the 2D overlay plane. The\n"
  "text is defined by an instance of vtkTextActor.\n\n"
  "@sa\n"
  "vtkTextRepresentation vtkBorderWidget vtkAbstractWidget\n"
  "vtkWidgetRepresentation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTextRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkTextRepresentation", // tp_name
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
  PyvtkTextRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextRepresentation_StaticNew()
{
  return vtkTextRepresentation::New();
}

PyObject *PyvtkTextRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTextRepresentation_Type, PyvtkTextRepresentation_Methods,
    "vtkTextRepresentation",
 &PyvtkTextRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkBorderRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

