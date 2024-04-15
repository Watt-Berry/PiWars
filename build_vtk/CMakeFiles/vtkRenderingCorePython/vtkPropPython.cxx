// python wrapper for vtkProp
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkProp.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProp(PyObject *dict); }
extern "C" { PyObject *PyvtkProp_ClassNew(); }


static PyObject *
PyvtkProp_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProp::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProp::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProp *tempr = vtkProp::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProp::NewInstance());

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
PyvtkProp_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProp::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProp::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

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
      op->vtkProp::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

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
      op->vtkProp::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetVolumes(temp0);
    }
    else
    {
      op->vtkProp::GetVolumes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  int temp0;
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
      op->vtkProp::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVisibility() :
      op->vtkProp::GetVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_VisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VisibilityOn();
    }
    else
    {
      op->vtkProp::VisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_VisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VisibilityOff();
    }
    else
    {
      op->vtkProp::VisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickable(temp0);
    }
    else
    {
      op->vtkProp::SetPickable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickable() :
      op->vtkProp::GetPickable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_PickableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickableOn();
    }
    else
    {
      op->vtkProp::PickableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_PickableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickableOff();
    }
    else
    {
      op->vtkProp::PickableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_Pick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Pick();
    }
    else
    {
      op->vtkProp::Pick();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SetDragable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDragable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDragable(temp0);
    }
    else
    {
      op->vtkProp::SetDragable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetDragable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDragable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDragable() :
      op->vtkProp::GetDragable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_DragableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DragableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DragableOn();
    }
    else
    {
      op->vtkProp::DragableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_DragableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DragableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DragableOff();
    }
    else
    {
      op->vtkProp::DragableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetRedrawMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedrawMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetRedrawMTime() :
      op->vtkProp::GetRedrawMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SetUseBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseBounds(temp0);
    }
    else
    {
      op->vtkProp::SetUseBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetUseBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseBounds() :
      op->vtkProp::GetUseBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_UseBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseBoundsOn();
    }
    else
    {
      op->vtkProp::UseBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_UseBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseBoundsOff();
    }
    else
    {
      op->vtkProp::UseBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkProp::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkProp::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_InitPathTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPathTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitPathTraversal();
    }
    else
    {
      op->vtkProp::InitPathTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetNextPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->GetNextPath() :
      op->vtkProp::GetNextPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetNumberOfPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPaths() :
      op->vtkProp::GetNumberOfPaths());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_PokeMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PokeMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->PokeMatrix(temp0);
    }
    else
    {
      op->vtkProp::PokeMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetMatrix() :
      op->vtkProp::GetMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetPropertyKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetPropertyKeys() :
      op->vtkProp::GetPropertyKeys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SetPropertyKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertyKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetPropertyKeys(temp0);
    }
    else
    {
      op->vtkProp::SetPropertyKeys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_HasKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasKeys(temp0) :
      op->vtkProp::HasKeys(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GeneralTextureUnit(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GeneralTextureUnit");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkProp::GeneralTextureUnit();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GeneralTextureTransform(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GeneralTextureTransform");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkProp::GeneralTextureTransform();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkProp::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkProp::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkProp::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkProp::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RenderFilteredOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderFilteredOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    bool tempr = (ap.IsBound() ?
      op->RenderFilteredOpaqueGeometry(temp0, temp1) :
      op->vtkProp::RenderFilteredOpaqueGeometry(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RenderFilteredTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderFilteredTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    bool tempr = (ap.IsBound() ?
      op->RenderFilteredTranslucentPolygonalGeometry(temp0, temp1) :
      op->vtkProp::RenderFilteredTranslucentPolygonalGeometry(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RenderFilteredVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderFilteredVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    bool tempr = (ap.IsBound() ?
      op->RenderFilteredVolumetricGeometry(temp0, temp1) :
      op->vtkProp::RenderFilteredVolumetricGeometry(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RenderFilteredOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderFilteredOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    bool tempr = (ap.IsBound() ?
      op->RenderFilteredOverlay(temp0, temp1) :
      op->vtkProp::RenderFilteredOverlay(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkProp::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_HasOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasOpaqueGeometry() :
      op->vtkProp::HasOpaqueGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

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
      op->vtkProp::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetEstimatedRenderTime_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    double tempr = (ap.IsBound() ?
      op->GetEstimatedRenderTime(temp0) :
      op->vtkProp::GetEstimatedRenderTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkProp_GetEstimatedRenderTime_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEstimatedRenderTime() :
      op->vtkProp::GetEstimatedRenderTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkProp_GetEstimatedRenderTime(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkProp_GetEstimatedRenderTime_s1(self, args);
    case 0:
      return PyvtkProp_GetEstimatedRenderTime_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetEstimatedRenderTime");
  return nullptr;
}


static PyObject *
PyvtkProp_SetEstimatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEstimatedRenderTime(temp0);
    }
    else
    {
      op->vtkProp::SetEstimatedRenderTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RestoreEstimatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestoreEstimatedRenderTime();
    }
    else
    {
      op->vtkProp::RestoreEstimatedRenderTime();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_AddEstimatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEstimatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  double temp0;
  vtkViewport *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->AddEstimatedRenderTime(temp0, temp1);
    }
    else
    {
      op->vtkProp::AddEstimatedRenderTime(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SetAllocatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllocatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  double temp0;
  vtkViewport *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->SetAllocatedRenderTime(temp0, temp1);
    }
    else
    {
      op->vtkProp::SetAllocatedRenderTime(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetAllocatedRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllocatedRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAllocatedRenderTime() :
      op->vtkProp::GetAllocatedRenderTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SetRenderTimeMultiplier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderTimeMultiplier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderTimeMultiplier(temp0);
    }
    else
    {
      op->vtkProp::SetRenderTimeMultiplier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetRenderTimeMultiplier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderTimeMultiplier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRenderTimeMultiplier() :
      op->vtkProp::GetRenderTimeMultiplier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_BuildPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkAssemblyPaths *temp0 = nullptr;
  vtkAssemblyPath *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPaths") &&
      ap.GetVTKObject(temp1, "vtkAssemblyPath"))
  {
    if (ap.IsBound())
    {
      op->BuildPaths(temp0, temp1);
    }
    else
    {
      op->vtkProp::BuildPaths(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsSelection() :
      op->vtkProp::GetSupportsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_ProcessSelectorPixelBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessSelectorPixelBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkHardwareSelector *temp0 = nullptr;
  std::vector<unsigned int> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkHardwareSelector") &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    if (ap.IsBound())
    {
      op->ProcessSelectorPixelBuffers(temp0, temp1);
    }
    else
    {
      op->vtkProp::ProcessSelectorPixelBuffers(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetNumberOfConsumers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConsumers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfConsumers() :
      op->vtkProp::GetNumberOfConsumers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_AddConsumer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddConsumer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->AddConsumer(temp0);
    }
    else
    {
      op->vtkProp::AddConsumer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_RemoveConsumer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveConsumer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveConsumer(temp0);
    }
    else
    {
      op->vtkProp::RemoveConsumer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetConsumer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConsumer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetConsumer(temp0) :
      op->vtkProp::GetConsumer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_IsConsumer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsConsumer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    int tempr = (ap.IsBound() ?
      op->IsConsumer(temp0) :
      op->vtkProp::IsConsumer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_SetShaderProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  vtkShaderProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShaderProperty"))
  {
    if (ap.IsBound())
    {
      op->SetShaderProperty(temp0);
    }
    else
    {
      op->vtkProp::SetShaderProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProp_GetShaderProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShaderProperty *tempr = (ap.IsBound() ?
      op->GetShaderProperty() :
      op->vtkProp::GetShaderProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProp_IsRenderingTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRenderingTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp *op = static_cast<vtkProp *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsRenderingTranslucentPolygonalGeometry() :
      op->vtkProp::IsRenderingTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProp_Methods[] = {
  {"IsTypeOf", PyvtkProp_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProp_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProp_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkProp\nC++: static vtkProp *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProp_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProp\nC++: vtkProp *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProp_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProp_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetActors", PyvtkProp_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: virtual void GetActors(vtkPropCollection *)\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"GetActors2D", PyvtkProp_GetActors2D, METH_VARARGS,
   "GetActors2D(self, __a:vtkPropCollection) -> None\nC++: virtual void GetActors2D(vtkPropCollection *)\n\n"},
  {"GetVolumes", PyvtkProp_GetVolumes, METH_VARARGS,
   "GetVolumes(self, __a:vtkPropCollection) -> None\nC++: virtual void GetVolumes(vtkPropCollection *)\n\n"},
  {"SetVisibility", PyvtkProp_SetVisibility, METH_VARARGS,
   "SetVisibility(self, _arg:int) -> None\nC++: virtual void SetVisibility(vtkTypeBool _arg)\n\nSet/Get visibility of this vtkProp. Initial value is true.\n"},
  {"GetVisibility", PyvtkProp_GetVisibility, METH_VARARGS,
   "GetVisibility(self) -> int\nC++: virtual vtkTypeBool GetVisibility()\n\n"},
  {"VisibilityOn", PyvtkProp_VisibilityOn, METH_VARARGS,
   "VisibilityOn(self) -> None\nC++: virtual void VisibilityOn()\n\n"},
  {"VisibilityOff", PyvtkProp_VisibilityOff, METH_VARARGS,
   "VisibilityOff(self) -> None\nC++: virtual void VisibilityOff()\n\n"},
  {"SetPickable", PyvtkProp_SetPickable, METH_VARARGS,
   "SetPickable(self, _arg:int) -> None\nC++: virtual void SetPickable(vtkTypeBool _arg)\n\nSet/Get the pickable instance variable.  This determines if the\nvtkProp can be picked (typically using the mouse). Also see\ndragable. Initial value is true.\n"},
  {"GetPickable", PyvtkProp_GetPickable, METH_VARARGS,
   "GetPickable(self) -> int\nC++: virtual vtkTypeBool GetPickable()\n\n"},
  {"PickableOn", PyvtkProp_PickableOn, METH_VARARGS,
   "PickableOn(self) -> None\nC++: virtual void PickableOn()\n\n"},
  {"PickableOff", PyvtkProp_PickableOff, METH_VARARGS,
   "PickableOff(self) -> None\nC++: virtual void PickableOff()\n\n"},
  {"Pick", PyvtkProp_Pick, METH_VARARGS,
   "Pick(self) -> None\nC++: virtual void Pick()\n\nMethod fires PickEvent if the prop is picked.\n"},
  {"SetDragable", PyvtkProp_SetDragable, METH_VARARGS,
   "SetDragable(self, _arg:int) -> None\nC++: virtual void SetDragable(vtkTypeBool _arg)\n\nSet/Get the value of the dragable instance variable. This\ndetermines if an Prop, once picked, can be dragged (translated)\nthrough space. This is typically done through an interactive\nmouse interface. This does not affect methods such as\nSetPosition, which will continue to work.  It is just intended to\nprevent some vtkProp'ss from being dragged from within a user\ninterface. Initial value is true.\n"},
  {"GetDragable", PyvtkProp_GetDragable, METH_VARARGS,
   "GetDragable(self) -> int\nC++: virtual vtkTypeBool GetDragable()\n\n"},
  {"DragableOn", PyvtkProp_DragableOn, METH_VARARGS,
   "DragableOn(self) -> None\nC++: virtual void DragableOn()\n\n"},
  {"DragableOff", PyvtkProp_DragableOff, METH_VARARGS,
   "DragableOff(self) -> None\nC++: virtual void DragableOff()\n\n"},
  {"GetRedrawMTime", PyvtkProp_GetRedrawMTime, METH_VARARGS,
   "GetRedrawMTime(self) -> int\nC++: virtual vtkMTimeType GetRedrawMTime()\n\nReturn the mtime of anything that would cause the rendered image\nto appear differently. Usually this involves checking the mtime\nof the prop plus anything else it depends on such as properties,\ntextures etc.\n"},
  {"SetUseBounds", PyvtkProp_SetUseBounds, METH_VARARGS,
   "SetUseBounds(self, _arg:bool) -> None\nC++: virtual void SetUseBounds(bool _arg)\n\nIn case the Visibility flag is true, tell if the bounds of this\nprop should be taken into account or ignored during the\ncomputation of other bounding boxes, like in\nvtkRenderer::ResetCamera(). Initial value is true.\n"},
  {"GetUseBounds", PyvtkProp_GetUseBounds, METH_VARARGS,
   "GetUseBounds(self) -> bool\nC++: virtual bool GetUseBounds()\n\n"},
  {"UseBoundsOn", PyvtkProp_UseBoundsOn, METH_VARARGS,
   "UseBoundsOn(self) -> None\nC++: virtual void UseBoundsOn()\n\n"},
  {"UseBoundsOff", PyvtkProp_UseBoundsOff, METH_VARARGS,
   "UseBoundsOff(self) -> None\nC++: virtual void UseBoundsOff()\n\n"},
  {"GetBounds", PyvtkProp_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\n\nGet the bounds for this Prop as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\nin world coordinates. NULL means that the bounds are not defined.\n"},
  {"ShallowCopy", PyvtkProp_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nShallow copy of this vtkProp.\n"},
  {"InitPathTraversal", PyvtkProp_InitPathTraversal, METH_VARARGS,
   "InitPathTraversal(self) -> None\nC++: virtual void InitPathTraversal()\n\nvtkProp and its subclasses can be picked by subclasses of\nvtkAbstractPicker (e.g., vtkPropPicker). The following methods\ninterface with the picking classes and return \"pick paths\". A\npick path is a hierarchical, ordered list of props that form an\nassembly.  Most often, when a vtkProp is picked, its path\nconsists of a single node (i.e., the prop). However, classes like\nvtkAssembly and vtkPropAssembly can return more than one path,\neach path being several layers deep. (See vtkAssemblyPath for\nmore information.)  To use these methods - first invoke\nInitPathTraversal() followed by repeated calls to GetNextPath().\nGetNextPath() returns a NULL pointer when the list is exhausted.\n"},
  {"GetNextPath", PyvtkProp_GetNextPath, METH_VARARGS,
   "GetNextPath(self) -> vtkAssemblyPath\nC++: virtual vtkAssemblyPath *GetNextPath()\n\n"},
  {"GetNumberOfPaths", PyvtkProp_GetNumberOfPaths, METH_VARARGS,
   "GetNumberOfPaths(self) -> int\nC++: virtual int GetNumberOfPaths()\n\n"},
  {"PokeMatrix", PyvtkProp_PokeMatrix, METH_VARARGS,
   "PokeMatrix(self, matrix:vtkMatrix4x4) -> None\nC++: virtual void PokeMatrix(vtkMatrix4x4 *matrix)\n\nThese methods are used by subclasses to place a matrix (if any)\nin the prop prior to rendering. Generally used only for picking.\nSee vtkProp3D for more information.\n"},
  {"GetMatrix", PyvtkProp_GetMatrix, METH_VARARGS,
   "GetMatrix(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetMatrix()\n\n"},
  {"GetPropertyKeys", PyvtkProp_GetPropertyKeys, METH_VARARGS,
   "GetPropertyKeys(self) -> vtkInformation\nC++: virtual vtkInformation *GetPropertyKeys()\n\nSet/Get property keys. Property keys can be digest by some\nrendering passes. For instance, the user may mark a prop as a\nshadow caster for a shadow mapping render pass. Keys are\ndocumented in render pass classes. Initial value is NULL.\n"},
  {"SetPropertyKeys", PyvtkProp_SetPropertyKeys, METH_VARARGS,
   "SetPropertyKeys(self, keys:vtkInformation) -> None\nC++: virtual void SetPropertyKeys(vtkInformation *keys)\n\n"},
  {"HasKeys", PyvtkProp_HasKeys, METH_VARARGS,
   "HasKeys(self, requiredKeys:vtkInformation) -> bool\nC++: virtual bool HasKeys(vtkInformation *requiredKeys)\n\nTells if the prop has all the required keys.\n\\pre keys_can_be_null: requiredKeys==0 || requiredKeys!=0\n"},
  {"GeneralTextureUnit", PyvtkProp_GeneralTextureUnit, METH_VARARGS,
   "GeneralTextureUnit() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *GeneralTextureUnit()\n\nOptional Key Indicating the texture unit for general texture\nmapping Old OpenGL was a state machine where you would push or\npop items. The new OpenGL design is more mapper centric. Some\nclasses push a texture and then assume a mapper will use it. The\nnew design wants explicit communication of when a texture is\nbeing used.  This key can be used to pass that information down\nto a mapper.\n"},
  {"GeneralTextureTransform", PyvtkProp_GeneralTextureTransform, METH_VARARGS,
   "GeneralTextureTransform() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *GeneralTextureTransform(\n    )\n\nOptional Key Indicating the texture transform for general texture\nmapping Old OpenGL was a state machine where you would push or\npop items. The new OpenGL design is more mapper centric. Some\nclasses push a texture and then assume a mapper will use it. The\nnew design wants explicit communication of when a texture is\nbeing used.  This key can be used to pass that information down\nto a mapper.\n"},
  {"RenderOpaqueGeometry", PyvtkProp_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkProp_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\n"},
  {"RenderVolumetricGeometry", PyvtkProp_RenderVolumetricGeometry, METH_VARARGS,
   "RenderVolumetricGeometry(self, __a:vtkViewport) -> int\nC++: virtual int RenderVolumetricGeometry(vtkViewport *)\n\n"},
  {"RenderOverlay", PyvtkProp_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, __a:vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\n"},
  {"RenderFilteredOpaqueGeometry", PyvtkProp_RenderFilteredOpaqueGeometry, METH_VARARGS,
   "RenderFilteredOpaqueGeometry(self, v:vtkViewport,\n    requiredKeys:vtkInformation) -> bool\nC++: virtual bool RenderFilteredOpaqueGeometry(vtkViewport *v,\n    vtkInformation *requiredKeys)\n\nRender the opaque geometry only if the prop has all the\nrequiredKeys. This is recursive for composite props like\nvtkAssembly. An implementation is provided in vtkProp but each\ncomposite prop must override it. It returns if the rendering was\nperformed.\n\\pre v_exists: v!=0\n\\pre keys_can_be_null: requiredKeys==0 || requiredKeys!=0\n"},
  {"RenderFilteredTranslucentPolygonalGeometry", PyvtkProp_RenderFilteredTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderFilteredTranslucentPolygonalGeometry(self, v:vtkViewport,\n    requiredKeys:vtkInformation) -> bool\nC++: virtual bool RenderFilteredTranslucentPolygonalGeometry(\n    vtkViewport *v, vtkInformation *requiredKeys)\n\nRender the translucent polygonal geometry only if the prop has\nall the requiredKeys. This is recursive for composite props like\nvtkAssembly. An implementation is provided in vtkProp but each\ncomposite prop must override it. It returns if the rendering was\nperformed.\n\\pre v_exists: v!=0\n\\pre keys_can_be_null: requiredKeys==0 || requiredKeys!=0\n"},
  {"RenderFilteredVolumetricGeometry", PyvtkProp_RenderFilteredVolumetricGeometry, METH_VARARGS,
   "RenderFilteredVolumetricGeometry(self, v:vtkViewport,\n    requiredKeys:vtkInformation) -> bool\nC++: virtual bool RenderFilteredVolumetricGeometry(vtkViewport *v,\n     vtkInformation *requiredKeys)\n\nRender the volumetric geometry only if the prop has all the\nrequiredKeys. This is recursive for composite props like\nvtkAssembly. An implementation is provided in vtkProp but each\ncomposite prop must override it. It returns if the rendering was\nperformed.\n\\pre v_exists: v!=0\n\\pre keys_can_be_null: requiredKeys==0 || requiredKeys!=0\n"},
  {"RenderFilteredOverlay", PyvtkProp_RenderFilteredOverlay, METH_VARARGS,
   "RenderFilteredOverlay(self, v:vtkViewport,\n    requiredKeys:vtkInformation) -> bool\nC++: virtual bool RenderFilteredOverlay(vtkViewport *v,\n    vtkInformation *requiredKeys)\n\nRender in the overlay of the viewport only if the prop has all\nthe requiredKeys. This is recursive for composite props like\nvtkAssembly. An implementation is provided in vtkProp but each\ncomposite prop must override it. It returns if the rendering was\nperformed.\n\\pre v_exists: v!=0\n\\pre keys_can_be_null: requiredKeys==0 || requiredKeys!=0\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkProp_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: virtual vtkTypeBool HasTranslucentPolygonalGeometry()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"HasOpaqueGeometry", PyvtkProp_HasOpaqueGeometry, METH_VARARGS,
   "HasOpaqueGeometry(self) -> int\nC++: virtual vtkTypeBool HasOpaqueGeometry()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some opaque geometry? This method is called during the\nrendering process to know if there is some opaque geometry. A\nsimple prop that has some opaque geometry will return true. A\ncomposite prop (like vtkAssembly) that has at least one sub-prop\nthat has some opaque polygonal geometry will return true. Default\nimplementation return true.\n"},
  {"ReleaseGraphicsResources", PyvtkProp_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"GetEstimatedRenderTime", PyvtkProp_GetEstimatedRenderTime, METH_VARARGS,
   "GetEstimatedRenderTime(self, __a:vtkViewport) -> float\nC++: virtual double GetEstimatedRenderTime(vtkViewport *)\nGetEstimatedRenderTime(self) -> float\nC++: virtual double GetEstimatedRenderTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS The\nEstimatedRenderTime may be used to select between different\nprops, for example in LODProp it is used to select the\nlevel-of-detail. The value is returned in seconds. For simple\ngeometry the accuracy may not be great due to buffering. For ray\ncasting, which is already multi-resolution, the current\nresolution of the image is factored into the time. We need the\nviewport for viewing parameters that affect timing. The\nno-arguments version simply returns the value of the variable\nwith no estimation.\n"},
  {"SetEstimatedRenderTime", PyvtkProp_SetEstimatedRenderTime, METH_VARARGS,
   "SetEstimatedRenderTime(self, t:float) -> None\nC++: virtual void SetEstimatedRenderTime(double t)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS This method is\nused by, for example, the vtkLODProp3D in order to initialize the\nestimated render time at start-up to some user defined value.\n"},
  {"RestoreEstimatedRenderTime", PyvtkProp_RestoreEstimatedRenderTime, METH_VARARGS,
   "RestoreEstimatedRenderTime(self) -> None\nC++: virtual void RestoreEstimatedRenderTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS When the\nEstimatedRenderTime is first set to 0.0 (in the\nSetAllocatedRenderTime method) the old value is saved. This\nmethod is used to restore that old value should the render be\naborted.\n"},
  {"AddEstimatedRenderTime", PyvtkProp_AddEstimatedRenderTime, METH_VARARGS,
   "AddEstimatedRenderTime(self, t:float, vp:vtkViewport) -> None\nC++: virtual void AddEstimatedRenderTime(double t,\n    vtkViewport *vp)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS This method is\nintended to allow the renderer to add to the EstimatedRenderTime\nin props that require information that the renderer has in order\nto do this. For example, props that are rendered with a ray\ncasting method do not know themselves how long it took for them\nto render. We don't want to cause a this->Modified() when we set\nthis value since it is not really a modification to the object.\n(For example, we don't want to rebuild matrices at every render\nbecause the estimated render time is changing)\n"},
  {"SetAllocatedRenderTime", PyvtkProp_SetAllocatedRenderTime, METH_VARARGS,
   "SetAllocatedRenderTime(self, t:float, v:vtkViewport) -> None\nC++: virtual void SetAllocatedRenderTime(double t, vtkViewport *v)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS The renderer may\nuse the allocated rendering time to determine how to render this\nactor. Therefore it might need the information provided in the\nviewport. A side effect of this method is to reset the\nEstimatedRenderTime to 0.0. This way, each of the ways that this\nprop may be rendered can be timed and added together into this\nvalue.\n"},
  {"GetAllocatedRenderTime", PyvtkProp_GetAllocatedRenderTime, METH_VARARGS,
   "GetAllocatedRenderTime(self) -> float\nC++: virtual double GetAllocatedRenderTime()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"SetRenderTimeMultiplier", PyvtkProp_SetRenderTimeMultiplier, METH_VARARGS,
   "SetRenderTimeMultiplier(self, t:float) -> None\nC++: void SetRenderTimeMultiplier(double t)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Get/Set the\nmultiplier for the render time. This is used for culling and is a\nnumber between 0 and 1. It is used to create the allocated render\ntime value.\n"},
  {"GetRenderTimeMultiplier", PyvtkProp_GetRenderTimeMultiplier, METH_VARARGS,
   "GetRenderTimeMultiplier(self) -> float\nC++: virtual double GetRenderTimeMultiplier()\n\n"},
  {"BuildPaths", PyvtkProp_BuildPaths, METH_VARARGS,
   "BuildPaths(self, paths:vtkAssemblyPaths, path:vtkAssemblyPath)\n    -> None\nC++: virtual void BuildPaths(vtkAssemblyPaths *paths,\n    vtkAssemblyPath *path)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used to\nconstruct assembly paths and perform part traversal.\n"},
  {"GetSupportsSelection", PyvtkProp_GetSupportsSelection, METH_VARARGS,
   "GetSupportsSelection(self) -> bool\nC++: virtual bool GetSupportsSelection()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used by\nvtkHardwareSelector to determine if the prop supports hardware\nselection.\n"},
  {"ProcessSelectorPixelBuffers", PyvtkProp_ProcessSelectorPixelBuffers, METH_VARARGS,
   "ProcessSelectorPixelBuffers(self, __a:vtkHardwareSelector,\n    __b:[int, ...]) -> None\nC++: virtual void ProcessSelectorPixelBuffers(\n    vtkHardwareSelector *, std::vector<unsigned int> &)\n\nallows a prop to update a selections color buffers\n"},
  {"GetNumberOfConsumers", PyvtkProp_GetNumberOfConsumers, METH_VARARGS,
   "GetNumberOfConsumers(self) -> int\nC++: virtual int GetNumberOfConsumers()\n\nGet the number of consumers\n"},
  {"AddConsumer", PyvtkProp_AddConsumer, METH_VARARGS,
   "AddConsumer(self, c:vtkObject) -> None\nC++: void AddConsumer(vtkObject *c)\n\nAdd or remove or get or check a consumer,\n"},
  {"RemoveConsumer", PyvtkProp_RemoveConsumer, METH_VARARGS,
   "RemoveConsumer(self, c:vtkObject) -> None\nC++: void RemoveConsumer(vtkObject *c)\n\n"},
  {"GetConsumer", PyvtkProp_GetConsumer, METH_VARARGS,
   "GetConsumer(self, i:int) -> vtkObject\nC++: vtkObject *GetConsumer(int i)\n\n"},
  {"IsConsumer", PyvtkProp_IsConsumer, METH_VARARGS,
   "IsConsumer(self, c:vtkObject) -> int\nC++: int IsConsumer(vtkObject *c)\n\n"},
  {"SetShaderProperty", PyvtkProp_SetShaderProperty, METH_VARARGS,
   "SetShaderProperty(self, property:vtkShaderProperty) -> None\nC++: virtual void SetShaderProperty(vtkShaderProperty *property)\n\nSet/Get the shader property.\n"},
  {"GetShaderProperty", PyvtkProp_GetShaderProperty, METH_VARARGS,
   "GetShaderProperty(self) -> vtkShaderProperty\nC++: virtual vtkShaderProperty *GetShaderProperty()\n\n"},
  {"IsRenderingTranslucentPolygonalGeometry", PyvtkProp_IsRenderingTranslucentPolygonalGeometry, METH_VARARGS,
   "IsRenderingTranslucentPolygonalGeometry(self) -> bool\nC++: virtual bool IsRenderingTranslucentPolygonalGeometry()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkProp_Doc =
  "vtkProp - abstract superclass for all actors, volumes and annotations\n\n"
  "Superclass: vtkObject\n\n"
  "vtkProp is an abstract superclass for any objects that can exist in a\n"
  "rendered scene (either 2D or 3D). Instances of vtkProp may respond to\n"
  "various render methods (e.g., RenderOpaqueGeometry()). vtkProp also\n"
  "defines the API for picking, LOD manipulation, and common instance\n"
  "variables that control visibility, picking, and dragging.\n"
  "@sa\n"
  "vtkActor2D vtkActor vtkVolume vtkProp3D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProp_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkProp", // tp_name
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
  PyvtkProp_Doc, // tp_doc
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

PyObject *PyvtkProp_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProp_Type, PyvtkProp_Methods,
    "vtkProp",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProp(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProp_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProp", o) != 0)
  {
    Py_DECREF(o);
  }

}

