// python wrapper for vtkTensorRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTensorRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTensorRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkTensorRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static PyObject *
PyvtkTensorRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTensorRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTensorRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTensorRepresentation *tempr = vtkTensorRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTensorRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTensorRepresentation::NewInstance());

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
PyvtkTensorRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTensorRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTensorRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_SetTensor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  const size_t size0 = 9;
  double temp0[9];
  double save0[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetTensor(temp0);
    }
    else
    {
      op->vtkTensorRepresentation::SetTensor(temp0);
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
PyvtkTensorRepresentation_SetSymmetricTensor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSymmetricTensor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

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
      op->SetSymmetricTensor(temp0);
    }
    else
    {
      op->vtkTensorRepresentation::SetSymmetricTensor(temp0);
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
PyvtkTensorRepresentation_GetTensor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  const size_t size0 = 9;
  double temp0[9];
  double save0[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetTensor(temp0);
    }
    else
    {
      op->vtkTensorRepresentation::GetTensor(temp0);
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
PyvtkTensorRepresentation_GetSymmetricTensor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSymmetricTensor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

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
      op->GetSymmetricTensor(temp0);
    }
    else
    {
      op->vtkTensorRepresentation::GetSymmetricTensor(temp0);
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
PyvtkTensorRepresentation_GetEigenvalues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetEigenvalues(temp0);
    }
    else
    {
      op->vtkTensorRepresentation::GetEigenvalues(temp0);
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
PyvtkTensorRepresentation_GetEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetEigenvector(temp0, temp1);
    }
    else
    {
      op->vtkTensorRepresentation::GetEigenvector(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
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
      op->vtkTensorRepresentation::SetPosition(temp0);
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
PyvtkTensorRepresentation_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetPosition(temp0);
    }
    else
    {
      op->vtkTensorRepresentation::GetPosition(temp0);
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
PyvtkTensorRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

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
      op->vtkTensorRepresentation::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkTensorRepresentation::GetHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkTensorRepresentation::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_GetFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetFaceProperty() :
      op->vtkTensorRepresentation::GetFaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_GetSelectedFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedFaceProperty() :
      op->vtkTensorRepresentation::GetSelectedFaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_GetOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetOutlineProperty() :
      op->vtkTensorRepresentation::GetOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_GetSelectedOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedOutlineProperty() :
      op->vtkTensorRepresentation::GetSelectedOutlineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_GetEllipsoidProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEllipsoidProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetEllipsoidProperty() :
      op->vtkTensorRepresentation::GetEllipsoidProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_SetOutlineFaceWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineFaceWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  bool temp0 = false;
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
      op->vtkTensorRepresentation::SetOutlineFaceWires(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_GetOutlineFaceWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineFaceWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOutlineFaceWires() :
      op->vtkTensorRepresentation::GetOutlineFaceWires());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_OutlineFaceWiresOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineFaceWiresOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineFaceWiresOn();
    }
    else
    {
      op->vtkTensorRepresentation::OutlineFaceWiresOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_OutlineFaceWiresOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineFaceWiresOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineFaceWiresOff();
    }
    else
    {
      op->vtkTensorRepresentation::OutlineFaceWiresOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_SetOutlineCursorWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineCursorWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  bool temp0 = false;
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
      op->vtkTensorRepresentation::SetOutlineCursorWires(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_GetOutlineCursorWires(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineCursorWires");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOutlineCursorWires() :
      op->vtkTensorRepresentation::GetOutlineCursorWires());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_OutlineCursorWiresOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineCursorWiresOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineCursorWiresOn();
    }
    else
    {
      op->vtkTensorRepresentation::OutlineCursorWiresOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_OutlineCursorWiresOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineCursorWiresOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineCursorWiresOff();
    }
    else
    {
      op->vtkTensorRepresentation::OutlineCursorWiresOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_HandlesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandlesOn();
    }
    else
    {
      op->vtkTensorRepresentation::HandlesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_HandlesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandlesOff();
    }
    else
    {
      op->vtkTensorRepresentation::HandlesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_SetTensorEllipsoid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorEllipsoid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTensorEllipsoid(temp0);
    }
    else
    {
      op->vtkTensorRepresentation::SetTensorEllipsoid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_GetTensorEllipsoid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorEllipsoid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTensorEllipsoid() :
      op->vtkTensorRepresentation::GetTensorEllipsoid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_TensorEllipsoidOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TensorEllipsoidOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TensorEllipsoidOn();
    }
    else
    {
      op->vtkTensorRepresentation::TensorEllipsoidOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_TensorEllipsoidOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TensorEllipsoidOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TensorEllipsoidOff();
    }
    else
    {
      op->vtkTensorRepresentation::TensorEllipsoidOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_PlaceTensor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceTensor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  const size_t size0 = 9;
  double temp0[9];
  double save0[9];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->PlaceTensor(temp0, temp1);
    }
    else
    {
      op->vtkTensorRepresentation::PlaceTensor(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

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
      op->vtkTensorRepresentation::PlaceWidget(temp0);
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
PyvtkTensorRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkTensorRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

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
      op->vtkTensorRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

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
      op->vtkTensorRepresentation::StartWidgetInteraction(temp0);
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
PyvtkTensorRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

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
      op->vtkTensorRepresentation::WidgetInteraction(temp0);
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
PyvtkTensorRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkTensorRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_StartComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

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
      op->vtkTensorRepresentation::StartComplexInteraction(temp0, temp1, temp2, temp3);
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
PyvtkTensorRepresentation_ComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

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
      op->vtkTensorRepresentation::ComplexInteraction(temp0, temp1, temp2, temp3);
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
PyvtkTensorRepresentation_ComputeComplexInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeComplexInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

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
      op->vtkTensorRepresentation::ComputeComplexInteractionState(temp0, temp1, temp2, temp3, temp4));

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
PyvtkTensorRepresentation_EndComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

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
      op->vtkTensorRepresentation::EndComplexInteraction(temp0, temp1, temp2, temp3);
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
PyvtkTensorRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

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
      op->vtkTensorRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkTensorRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkTensorRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkTensorRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

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
      op->vtkTensorRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_GetSnapToAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapToAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSnapToAxes() :
      op->vtkTensorRepresentation::GetSnapToAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_SetSnapToAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapToAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

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
      op->vtkTensorRepresentation::SetSnapToAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_StepForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StepForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StepForward();
    }
    else
    {
      op->vtkTensorRepresentation::StepForward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_StepBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StepBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StepBackward();
    }
    else
    {
      op->vtkTensorRepresentation::StepBackward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkTensorRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_GetTranslationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxis() :
      op->vtkTensorRepresentation::GetTranslationAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_SetTranslationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

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
      op->vtkTensorRepresentation::SetTranslationAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_GetTranslationAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxisMinValue() :
      op->vtkTensorRepresentation::GetTranslationAxisMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_GetTranslationAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxisMaxValue() :
      op->vtkTensorRepresentation::GetTranslationAxisMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_SetXTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXTranslationAxisOn();
    }
    else
    {
      op->vtkTensorRepresentation::SetXTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_SetYTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetYTranslationAxisOn();
    }
    else
    {
      op->vtkTensorRepresentation::SetYTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_SetZTranslationAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZTranslationAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetZTranslationAxisOn();
    }
    else
    {
      op->vtkTensorRepresentation::SetZTranslationAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_SetTranslationAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationAxisOff();
    }
    else
    {
      op->vtkTensorRepresentation::SetTranslationAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorRepresentation_IsTranslationConstrained(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTranslationConstrained");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorRepresentation *op = static_cast<vtkTensorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsTranslationConstrained() :
      op->vtkTensorRepresentation::IsTranslationConstrained());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTensorRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkTensorRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTensorRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTensorRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTensorRepresentation\nC++: static vtkTensorRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTensorRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTensorRepresentation\nC++: vtkTensorRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTensorRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTensorRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTensor", PyvtkTensorRepresentation_SetTensor, METH_VARARGS,
   "SetTensor(self, tensor:[float, float, float, float, float, float,\n    float, float, float]) -> None\nC++: void SetTensor(double tensor[9])\n\nThese are the basic methods used to define the tensor (these\nmethods coordinate with the overloaded PlaceWidget() method). The\nmethods enable specification of a 3x3 symmetric tensor. This\ninformation is used to construct an oriented, appropriately\nellipsoid that is (initially) centered and fits inside the\nbounding box defined by PlaceWidget(). As this widget is modified\nduring user interaction, the tensor data member is continuously\nupdated and can be queried. Note that a symmetric tensor can be\ndefined with only six components. If a full 3x3 tensor is\nspecified, only the symmetrical part of the tensor is used since\nthe extracted eigenvalues/eigenvecters are required to be real\nvalued. When a tensor is specified, the derived information\n(e.g., eigenvalues/vectors and position) are immediately updated.\n"},
  {"SetSymmetricTensor", PyvtkTensorRepresentation_SetSymmetricTensor, METH_VARARGS,
   "SetSymmetricTensor(self, symTensor:[float, float, float, float,\n    float, float]) -> None\nC++: void SetSymmetricTensor(double symTensor[6])\n\n"},
  {"GetTensor", PyvtkTensorRepresentation_GetTensor, METH_VARARGS,
   "GetTensor(self, tensor:[float, float, float, float, float, float,\n    float, float, float]) -> None\nC++: void GetTensor(double tensor[9])\n\n"},
  {"GetSymmetricTensor", PyvtkTensorRepresentation_GetSymmetricTensor, METH_VARARGS,
   "GetSymmetricTensor(self, symTensor:[float, float, float, float,\n    float, float]) -> None\nC++: void GetSymmetricTensor(double symTensor[6])\n\n"},
  {"GetEigenvalues", PyvtkTensorRepresentation_GetEigenvalues, METH_VARARGS,
   "GetEigenvalues(self, evals:[float, float, float]) -> None\nC++: void GetEigenvalues(double evals[3])\n\nThese are methods used to retrieve derived information about the\ntensor. Specify (0<=i<3) to retrieve the ith eigenvector. The\neigenvalues and associated eigenvectors are sorted in decreasing\norder.\n"},
  {"GetEigenvector", PyvtkTensorRepresentation_GetEigenvector, METH_VARARGS,
   "GetEigenvector(self, n:int, ev:[float, float, float]) -> None\nC++: void GetEigenvector(int n, double ev[3])\n\n"},
  {"SetPosition", PyvtkTensorRepresentation_SetPosition, METH_VARARGS,
   "SetPosition(self, pos:[float, float, float]) -> None\nC++: void SetPosition(double pos[3])\n\nSet/Get a position for the location of the tensor. Of course a\ntensor inherently has no position, but this is for the purpose of\nplacing this widget representation.\n"},
  {"GetPosition", PyvtkTensorRepresentation_GetPosition, METH_VARARGS,
   "GetPosition(self, pos:[float, float, float]) -> None\nC++: void GetPosition(double pos[3])\n\n"},
  {"GetPolyData", PyvtkTensorRepresentation_GetPolyData, METH_VARARGS,
   "GetPolyData(self, pd:vtkPolyData) -> None\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that define the\nrepresentation. The polydata consists of 6 quadrilateral faces\nand 15 points. The first eight points define the eight corner\nvertices; the next six define the\n-x,+x, -y,+y, -z,+z face points; and the final point (the 15th\n    out of 15 points) defines the center of the box. These point\n    values are guaranteed to be up-to-date when either the\n    widget's corresponding InteractionEvent or\n    EndInteractionEvent events are invoked. The user provides the\n    vtkPolyData and the points and cells are added to it.\n"},
  {"GetHandleProperty", PyvtkTensorRepresentation_GetHandleProperty, METH_VARARGS,
   "GetHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetHandleProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles, when selected or normal, can be\nspecified.\n"},
  {"GetSelectedHandleProperty", PyvtkTensorRepresentation_GetSelectedHandleProperty, METH_VARARGS,
   "GetSelectedHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedHandleProperty()\n\n"},
  {"GetFaceProperty", PyvtkTensorRepresentation_GetFaceProperty, METH_VARARGS,
   "GetFaceProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetFaceProperty()\n\nGet the face properties (the faces of the box). The properties of\nthe face when selected and normal can be set.\n"},
  {"GetSelectedFaceProperty", PyvtkTensorRepresentation_GetSelectedFaceProperty, METH_VARARGS,
   "GetSelectedFaceProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedFaceProperty()\n\n"},
  {"GetOutlineProperty", PyvtkTensorRepresentation_GetOutlineProperty, METH_VARARGS,
   "GetOutlineProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetOutlineProperty()\n\nGet the outline properties (the outline of the box). The\nproperties of the outline when selected and normal can be set.\n"},
  {"GetSelectedOutlineProperty", PyvtkTensorRepresentation_GetSelectedOutlineProperty, METH_VARARGS,
   "GetSelectedOutlineProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedOutlineProperty()\n\n"},
  {"GetEllipsoidProperty", PyvtkTensorRepresentation_GetEllipsoidProperty, METH_VARARGS,
   "GetEllipsoidProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetEllipsoidProperty()\n\nGet the tensor ellipsoid properties. If visibility is enabled,\nthe ellipsoid will be rendered with this property.\n"},
  {"SetOutlineFaceWires", PyvtkTensorRepresentation_SetOutlineFaceWires, METH_VARARGS,
   "SetOutlineFaceWires(self, __a:bool) -> None\nC++: void SetOutlineFaceWires(bool)\n\nControl the representation of the outline. This flag enables face\nwires. By default face wires are off.\n"},
  {"GetOutlineFaceWires", PyvtkTensorRepresentation_GetOutlineFaceWires, METH_VARARGS,
   "GetOutlineFaceWires(self) -> bool\nC++: virtual bool GetOutlineFaceWires()\n\n"},
  {"OutlineFaceWiresOn", PyvtkTensorRepresentation_OutlineFaceWiresOn, METH_VARARGS,
   "OutlineFaceWiresOn(self) -> None\nC++: void OutlineFaceWiresOn()\n\n"},
  {"OutlineFaceWiresOff", PyvtkTensorRepresentation_OutlineFaceWiresOff, METH_VARARGS,
   "OutlineFaceWiresOff(self) -> None\nC++: void OutlineFaceWiresOff()\n\n"},
  {"SetOutlineCursorWires", PyvtkTensorRepresentation_SetOutlineCursorWires, METH_VARARGS,
   "SetOutlineCursorWires(self, __a:bool) -> None\nC++: void SetOutlineCursorWires(bool)\n\nControl the representation of the outline. This flag enables the\ncursor lines running between the handles. By default cursor wires\nare on.\n"},
  {"GetOutlineCursorWires", PyvtkTensorRepresentation_GetOutlineCursorWires, METH_VARARGS,
   "GetOutlineCursorWires(self) -> bool\nC++: virtual bool GetOutlineCursorWires()\n\n"},
  {"OutlineCursorWiresOn", PyvtkTensorRepresentation_OutlineCursorWiresOn, METH_VARARGS,
   "OutlineCursorWiresOn(self) -> None\nC++: void OutlineCursorWiresOn()\n\n"},
  {"OutlineCursorWiresOff", PyvtkTensorRepresentation_OutlineCursorWiresOff, METH_VARARGS,
   "OutlineCursorWiresOff(self) -> None\nC++: void OutlineCursorWiresOff()\n\n"},
  {"HandlesOn", PyvtkTensorRepresentation_HandlesOn, METH_VARARGS,
   "HandlesOn(self) -> None\nC++: virtual void HandlesOn()\n\nSwitches handles (the spheres) on or off by manipulating the\nunderlying actor visibility.\n"},
  {"HandlesOff", PyvtkTensorRepresentation_HandlesOff, METH_VARARGS,
   "HandlesOff(self) -> None\nC++: virtual void HandlesOff()\n\n"},
  {"SetTensorEllipsoid", PyvtkTensorRepresentation_SetTensorEllipsoid, METH_VARARGS,
   "SetTensorEllipsoid(self, __a:bool) -> None\nC++: void SetTensorEllipsoid(bool)\n\nIndicate whether to show the tensor ellipsoid. By default it is\non.\n"},
  {"GetTensorEllipsoid", PyvtkTensorRepresentation_GetTensorEllipsoid, METH_VARARGS,
   "GetTensorEllipsoid(self) -> bool\nC++: virtual bool GetTensorEllipsoid()\n\n"},
  {"TensorEllipsoidOn", PyvtkTensorRepresentation_TensorEllipsoidOn, METH_VARARGS,
   "TensorEllipsoidOn(self) -> None\nC++: void TensorEllipsoidOn()\n\n"},
  {"TensorEllipsoidOff", PyvtkTensorRepresentation_TensorEllipsoidOff, METH_VARARGS,
   "TensorEllipsoidOff(self) -> None\nC++: void TensorEllipsoidOff()\n\n"},
  {"PlaceTensor", PyvtkTensorRepresentation_PlaceTensor, METH_VARARGS,
   "PlaceTensor(self, tensor:[float, float, float, float, float,\n    float, float, float, float], position:[float, float, float])\n    -> None\nC++: void PlaceTensor(double tensor[9], double position[3])\n\nThis is a specialized place widget method for a tensor. Specify\nthe tensor (an array of 9 components) and the position to place\nthe tensor. Note that the PlaceFactor (defined in superclass) can\nbe used to scale the representation when placed.\n"},
  {"PlaceWidget", PyvtkTensorRepresentation_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"BuildRepresentation", PyvtkTensorRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"ComputeInteractionState", PyvtkTensorRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"StartWidgetInteraction", PyvtkTensorRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, e:[float, float]) -> None\nC++: void StartWidgetInteraction(double e[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkTensorRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, e:[float, float]) -> None\nC++: void WidgetInteraction(double e[2]) override;\n\n"},
  {"GetBounds", PyvtkTensorRepresentation_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"StartComplexInteraction", PyvtkTensorRepresentation_StartComplexInteraction, METH_VARARGS,
   "StartComplexInteraction(self, iren:vtkRenderWindowInteractor,\n    widget:vtkAbstractWidget, event:int, calldata:Pointer) -> None\nC++: void StartComplexInteraction(vtkRenderWindowInteractor *iren,\n     vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\n"},
  {"ComplexInteraction", PyvtkTensorRepresentation_ComplexInteraction, METH_VARARGS,
   "ComplexInteraction(self, iren:vtkRenderWindowInteractor,\n    widget:vtkAbstractWidget, event:int, calldata:Pointer) -> None\nC++: void ComplexInteraction(vtkRenderWindowInteractor *iren,\n    vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\n"},
  {"ComputeComplexInteractionState", PyvtkTensorRepresentation_ComputeComplexInteractionState, METH_VARARGS,
   "ComputeComplexInteractionState(self,\n    iren:vtkRenderWindowInteractor, widget:vtkAbstractWidget,\n    event:int, calldata:Pointer, modify:int=0) -> int\nC++: int ComputeComplexInteractionState(\n    vtkRenderWindowInteractor *iren, vtkAbstractWidget *widget,\n    unsigned long event, void *calldata, int modify=0) override;\n\n"},
  {"EndComplexInteraction", PyvtkTensorRepresentation_EndComplexInteraction, METH_VARARGS,
   "EndComplexInteraction(self, iren:vtkRenderWindowInteractor,\n    widget:vtkAbstractWidget, event:int, calldata:Pointer) -> None\nC++: void EndComplexInteraction(vtkRenderWindowInteractor *iren,\n    vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\n"},
  {"ReleaseGraphicsResources", PyvtkTensorRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"RenderOpaqueGeometry", PyvtkTensorRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkTensorRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkTensorRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"SetInteractionState", PyvtkTensorRepresentation_SetInteractionState, METH_VARARGS,
   "SetInteractionState(self, state:int) -> None\nC++: void SetInteractionState(int state)\n\nThe interaction state may be set from a widget (e.g.,\nvtkTensorWidget) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"GetSnapToAxes", PyvtkTensorRepresentation_GetSnapToAxes, METH_VARARGS,
   "GetSnapToAxes(self) -> bool\nC++: virtual bool GetSnapToAxes()\n\nFor complex events should we snap orientations to be aligned with\nthe x y z axes\n"},
  {"SetSnapToAxes", PyvtkTensorRepresentation_SetSnapToAxes, METH_VARARGS,
   "SetSnapToAxes(self, _arg:bool) -> None\nC++: virtual void SetSnapToAxes(bool _arg)\n\n"},
  {"StepForward", PyvtkTensorRepresentation_StepForward, METH_VARARGS,
   "StepForward(self) -> None\nC++: void StepForward()\n\nFor complex events should we snap orientations to be aligned with\nthe x y z axes\n"},
  {"StepBackward", PyvtkTensorRepresentation_StepBackward, METH_VARARGS,
   "StepBackward(self) -> None\nC++: void StepBackward()\n\n"},
  {"RegisterPickers", PyvtkTensorRepresentation_RegisterPickers, METH_VARARGS,
   "RegisterPickers(self) -> None\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {"GetTranslationAxis", PyvtkTensorRepresentation_GetTranslationAxis, METH_VARARGS,
   "GetTranslationAxis(self) -> int\nC++: virtual int GetTranslationAxis()\n\nGets/Sets the constraint axis for translations. Returns\nAxis::NONE if none.\n"},
  {"SetTranslationAxis", PyvtkTensorRepresentation_SetTranslationAxis, METH_VARARGS,
   "SetTranslationAxis(self, _arg:int) -> None\nC++: virtual void SetTranslationAxis(int _arg)\n\n"},
  {"GetTranslationAxisMinValue", PyvtkTensorRepresentation_GetTranslationAxisMinValue, METH_VARARGS,
   "GetTranslationAxisMinValue(self) -> int\nC++: virtual int GetTranslationAxisMinValue()\n\n"},
  {"GetTranslationAxisMaxValue", PyvtkTensorRepresentation_GetTranslationAxisMaxValue, METH_VARARGS,
   "GetTranslationAxisMaxValue(self) -> int\nC++: virtual int GetTranslationAxisMaxValue()\n\n"},
  {"SetXTranslationAxisOn", PyvtkTensorRepresentation_SetXTranslationAxisOn, METH_VARARGS,
   "SetXTranslationAxisOn(self) -> None\nC++: void SetXTranslationAxisOn()\n\nToggles constraint translation axis on/off.\n"},
  {"SetYTranslationAxisOn", PyvtkTensorRepresentation_SetYTranslationAxisOn, METH_VARARGS,
   "SetYTranslationAxisOn(self) -> None\nC++: void SetYTranslationAxisOn()\n\n"},
  {"SetZTranslationAxisOn", PyvtkTensorRepresentation_SetZTranslationAxisOn, METH_VARARGS,
   "SetZTranslationAxisOn(self) -> None\nC++: void SetZTranslationAxisOn()\n\n"},
  {"SetTranslationAxisOff", PyvtkTensorRepresentation_SetTranslationAxisOff, METH_VARARGS,
   "SetTranslationAxisOff(self) -> None\nC++: void SetTranslationAxisOff()\n\n"},
  {"IsTranslationConstrained", PyvtkTensorRepresentation_IsTranslationConstrained, METH_VARARGS,
   "IsTranslationConstrained(self) -> bool\nC++: bool IsTranslationConstrained()\n\nReturns true if ConstrainedAxis\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTensorRepresentation_Doc =
  "vtkTensorRepresentation - class defining a representation for the\nvtkTensorWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is a concrete representation for the vtkTensorWidget. In\n"
  "summary, it allows the editing of a tensor glyph (by modifying the\n"
  "underlying tensor value). This includes controlling the position,\n"
  "scaling, and rotation of the glyph. The representation is simply an\n"
  "oriented, scaled box which can be manipulated to transform the\n"
  "tensor. Optionally, an ellipsoid defined by the tensor eigenvectors\n"
  "can be shown for informational purposes.\n\n"
  "To use this representation, specify a 3x3 real, symmetric matrix\n"
  "defining the tensor. (This implicitly defines an orthogonal basis\n"
  "from the three tensor eigenvectors.) Then use PlaceWidget() to define\n"
  "a bounding box: the bounding box defines a position for the tensor\n"
  "from its center point, and the representation is scaled to fit in the\n"
  "bounding box.\n\n"
  "Note: typical usage is to place a tensor glyph inside of the\n"
  "representation (i.e., the box) which is updated as the representation\n"
  "is manipulated by the user. The built-in ellipsoid can be used for\n"
  "this; alternatively through callbacks and such, it is possible to\n"
  "place other glyph types such as superquadrics.\n\n"
  "@sa\n"
  "vtkTensorWidget vtkBoxRepresentation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTensorRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkTensorRepresentation", // tp_name
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
  PyvtkTensorRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTensorRepresentation_StaticNew()
{
  return vtkTensorRepresentation::New();
}

PyObject *PyvtkTensorRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTensorRepresentation_Type, PyvtkTensorRepresentation_Methods,
    "vtkTensorRepresentation",
 &PyvtkTensorRepresentation_StaticNew);

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
        { "Outside", vtkTensorRepresentation::Outside },
        { "MoveF0", vtkTensorRepresentation::MoveF0 },
        { "MoveF1", vtkTensorRepresentation::MoveF1 },
        { "MoveF2", vtkTensorRepresentation::MoveF2 },
        { "MoveF3", vtkTensorRepresentation::MoveF3 },
        { "MoveF4", vtkTensorRepresentation::MoveF4 },
        { "MoveF5", vtkTensorRepresentation::MoveF5 },
        { "Translating", vtkTensorRepresentation::Translating },
        { "Rotating", vtkTensorRepresentation::Rotating },
        { "Scaling", vtkTensorRepresentation::Scaling },
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

void PyVTKAddFile_vtkTensorRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTensorRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTensorRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

