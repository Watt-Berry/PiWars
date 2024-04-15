// python wrapper for vtkPointHandleRepresentation2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPointHandleRepresentation2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointHandleRepresentation2D(PyObject *dict); }
extern "C" { PyObject *PyvtkPointHandleRepresentation2D_ClassNew(); }

#ifndef DECLARED_PyvtkHandleRepresentation_ClassNew
extern "C" { PyObject *PyvtkHandleRepresentation_ClassNew(); }
#define DECLARED_PyvtkHandleRepresentation_ClassNew
#endif

static PyObject *
PyvtkPointHandleRepresentation2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointHandleRepresentation2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointHandleRepresentation2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointHandleRepresentation2D *tempr = vtkPointHandleRepresentation2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointHandleRepresentation2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointHandleRepresentation2D::NewInstance());

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
PyvtkPointHandleRepresentation2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPointHandleRepresentation2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPointHandleRepresentation2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_SetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetCursorShape(temp0);
    }
    else
    {
      op->vtkPointHandleRepresentation2D::SetCursorShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_GetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCursorShape() :
      op->vtkPointHandleRepresentation2D::GetCursorShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      op->SetDisplayPosition(temp0);
    }
    else
    {
      op->vtkPointHandleRepresentation2D::SetDisplayPosition(temp0);
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
PyvtkPointHandleRepresentation2D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkPointHandleRepresentation2D::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_SetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetSelectedProperty(temp0);
    }
    else
    {
      op->vtkPointHandleRepresentation2D::SetSelectedProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkPointHandleRepresentation2D::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkPointHandleRepresentation2D::GetSelectedProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPointHandleRepresentation2D::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkPointHandleRepresentation2D::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      op->vtkPointHandleRepresentation2D::StartWidgetInteraction(temp0);
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
PyvtkPointHandleRepresentation2D_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      op->vtkPointHandleRepresentation2D::WidgetInteraction(temp0);
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
PyvtkPointHandleRepresentation2D_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      op->vtkPointHandleRepresentation2D::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      op->vtkPointHandleRepresentation2D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkPointHandleRepresentation2D::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      op->vtkPointHandleRepresentation2D::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      op->vtkPointHandleRepresentation2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkPointHandleRepresentation2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Highlight(temp0);
    }
    else
    {
      op->vtkPointHandleRepresentation2D::Highlight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_SetPointPlacer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointPlacer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  vtkPointPlacer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointPlacer"))
  {
    if (ap.IsBound())
    {
      op->SetPointPlacer(temp0);
    }
    else
    {
      op->vtkPointHandleRepresentation2D::SetPointPlacer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

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
      op->vtkPointHandleRepresentation2D::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointHandleRepresentation2D_Translate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointHandleRepresentation2D *op = static_cast<vtkPointHandleRepresentation2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->Translate(temp0, temp1);
    }
    else
    {
      op->vtkPointHandleRepresentation2D::Translate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointHandleRepresentation2D_Methods[] = {
  {"IsTypeOf", PyvtkPointHandleRepresentation2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointHandleRepresentation2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointHandleRepresentation2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPointHandleRepresentation2D\nC++: static vtkPointHandleRepresentation2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointHandleRepresentation2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPointHandleRepresentation2D\nC++: vtkPointHandleRepresentation2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPointHandleRepresentation2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPointHandleRepresentation2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCursorShape", PyvtkPointHandleRepresentation2D_SetCursorShape, METH_VARARGS,
   "SetCursorShape(self, cursorShape:vtkPolyData) -> None\nC++: void SetCursorShape(vtkPolyData *cursorShape)\n\nSpecify the cursor shape with an instance of vtkPolyData. Note\nthat shape is assumed to be defined in the display coordinate\nsystem. By default a vtkCursor2D shape is used.\n"},
  {"GetCursorShape", PyvtkPointHandleRepresentation2D_GetCursorShape, METH_VARARGS,
   "GetCursorShape(self) -> vtkPolyData\nC++: vtkPolyData *GetCursorShape()\n\n"},
  {"SetDisplayPosition", PyvtkPointHandleRepresentation2D_SetDisplayPosition, METH_VARARGS,
   "SetDisplayPosition(self, xyz:[float, float, float]) -> None\nC++: void SetDisplayPosition(double xyz[3]) override;\n\nSet/Get the position of the point in display coordinates.  This\noverloads the superclasses SetDisplayPosition in order to set the\nfocal point of the cursor.\n"},
  {"SetProperty", PyvtkPointHandleRepresentation2D_SetProperty, METH_VARARGS,
   "SetProperty(self, __a:vtkProperty2D) -> None\nC++: void SetProperty(vtkProperty2D *)\n\nSet/Get the handle properties when unselected and selected.\n"},
  {"SetSelectedProperty", PyvtkPointHandleRepresentation2D_SetSelectedProperty, METH_VARARGS,
   "SetSelectedProperty(self, __a:vtkProperty2D) -> None\nC++: void SetSelectedProperty(vtkProperty2D *)\n\n"},
  {"GetProperty", PyvtkPointHandleRepresentation2D_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetProperty()\n\n"},
  {"GetSelectedProperty", PyvtkPointHandleRepresentation2D_GetSelectedProperty, METH_VARARGS,
   "GetSelectedProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetSelectedProperty()\n\n"},
  {"GetBounds", PyvtkPointHandleRepresentation2D_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nSubclasses of vtkPointHandleRepresentation2D must implement these\nmethods. These are the methods that the widget and its\nrepresentation use to communicate with each other.\n"},
  {"BuildRepresentation", PyvtkPointHandleRepresentation2D_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"StartWidgetInteraction", PyvtkPointHandleRepresentation2D_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkPointHandleRepresentation2D_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void WidgetInteraction(double eventPos[2]) override;\n\n"},
  {"ComputeInteractionState", PyvtkPointHandleRepresentation2D_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"ShallowCopy", PyvtkPointHandleRepresentation2D_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"DeepCopy", PyvtkPointHandleRepresentation2D_DeepCopy, METH_VARARGS,
   "DeepCopy(self, prop:vtkProp) -> None\nC++: void DeepCopy(vtkProp *prop) override;\n\n"},
  {"GetActors2D", PyvtkPointHandleRepresentation2D_GetActors2D, METH_VARARGS,
   "GetActors2D(self, __a:vtkPropCollection) -> None\nC++: void GetActors2D(vtkPropCollection *) override;\n\n"},
  {"ReleaseGraphicsResources", PyvtkPointHandleRepresentation2D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOverlay", PyvtkPointHandleRepresentation2D_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {"Highlight", PyvtkPointHandleRepresentation2D_Highlight, METH_VARARGS,
   "Highlight(self, highlight:int) -> None\nC++: void Highlight(int highlight) override;\n\n"},
  {"SetPointPlacer", PyvtkPointHandleRepresentation2D_SetPointPlacer, METH_VARARGS,
   "SetPointPlacer(self, __a:vtkPointPlacer) -> None\nC++: void SetPointPlacer(vtkPointPlacer *) override;\n\nOverride the superclass implementation. This class does not use a\npoint placer. Point placers dictate the placement of points in 3D\nspace. Since this class constrains points to lie in an overlay\nplane anyway, we don't care. Just returns.\n"},
  {"SetVisibility", PyvtkPointHandleRepresentation2D_SetVisibility, METH_VARARGS,
   "SetVisibility(self, visible:int) -> None\nC++: void SetVisibility(vtkTypeBool visible) override;\n\nOverride to ensure that the internal actor's visibility is\nconsistent with this representation's visibility. Inconsistency\nbetween the two would cause issues in picking logic which relies\non individual view prop visibility to determine whether the prop\nis pickable.\n"},
  {"Translate", PyvtkPointHandleRepresentation2D_Translate, METH_VARARGS,
   "Translate(self, p1:(float, ...), p2:(float, ...)) -> None\nC++: virtual void Translate(const double *p1, const double *p2)\n\nTranslates world position by vector p1p2 projected on the\nconstraint axis if any.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPointHandleRepresentation2D_Doc =
  "vtkPointHandleRepresentation2D - represent the position of a point in\ndisplay coordinates\n\n"
  "Superclass: vtkHandleRepresentation\n\n"
  "This class is used to represent a vtkHandleWidget. It represents a\n"
  "position in 2D world coordinates using a x-y cursor (the cursor\n"
  "defined by an instance of vtkPolyData and generated by a\n"
  "vtkPolyDataAlgorithm).\n\n"
  "@sa\n"
  "vtkHandleRepresentation vtkHandleWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointHandleRepresentation2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkPointHandleRepresentation2D", // tp_name
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
  PyvtkPointHandleRepresentation2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointHandleRepresentation2D_StaticNew()
{
  return vtkPointHandleRepresentation2D::New();
}

PyObject *PyvtkPointHandleRepresentation2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPointHandleRepresentation2D_Type, PyvtkPointHandleRepresentation2D_Methods,
    "vtkPointHandleRepresentation2D",
 &PyvtkPointHandleRepresentation2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkHandleRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointHandleRepresentation2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointHandleRepresentation2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointHandleRepresentation2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

