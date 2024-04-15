// python wrapper for vtkCheckerboardRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCheckerboardRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCheckerboardRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkCheckerboardRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static PyObject *
PyvtkCheckerboardRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCheckerboardRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCheckerboardRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCheckerboardRepresentation *tempr = vtkCheckerboardRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCheckerboardRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCheckerboardRepresentation::NewInstance());

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
PyvtkCheckerboardRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCheckerboardRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCheckerboardRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetCheckerboard(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckerboard");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkImageCheckerboard *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageCheckerboard"))
  {
    if (ap.IsBound())
    {
      op->SetCheckerboard(temp0);
    }
    else
    {
      op->vtkCheckerboardRepresentation::SetCheckerboard(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetCheckerboard(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckerboard");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageCheckerboard *tempr = (ap.IsBound() ?
      op->GetCheckerboard() :
      op->vtkCheckerboardRepresentation::GetCheckerboard());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkImageActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageActor"))
  {
    if (ap.IsBound())
    {
      op->SetImageActor(temp0);
    }
    else
    {
      op->vtkCheckerboardRepresentation::SetImageActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageActor *tempr = (ap.IsBound() ?
      op->GetImageActor() :
      op->vtkCheckerboardRepresentation::GetImageActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCornerOffset(temp0);
    }
    else
    {
      op->vtkCheckerboardRepresentation::SetCornerOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetCornerOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffsetMinValue() :
      op->vtkCheckerboardRepresentation::GetCornerOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetCornerOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffsetMaxValue() :
      op->vtkCheckerboardRepresentation::GetCornerOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetCornerOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCornerOffset() :
      op->vtkCheckerboardRepresentation::GetCornerOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SliderValueChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliderValueChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SliderValueChanged(temp0);
    }
    else
    {
      op->vtkCheckerboardRepresentation::SliderValueChanged(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetTopRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation3D"))
  {
    if (ap.IsBound())
    {
      op->SetTopRepresentation(temp0);
    }
    else
    {
      op->vtkCheckerboardRepresentation::SetTopRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetRightRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation3D"))
  {
    if (ap.IsBound())
    {
      op->SetRightRepresentation(temp0);
    }
    else
    {
      op->vtkCheckerboardRepresentation::SetRightRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetBottomRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation3D"))
  {
    if (ap.IsBound())
    {
      op->SetBottomRepresentation(temp0);
    }
    else
    {
      op->vtkCheckerboardRepresentation::SetBottomRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_SetLeftRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkSliderRepresentation3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSliderRepresentation3D"))
  {
    if (ap.IsBound())
    {
      op->SetLeftRepresentation(temp0);
    }
    else
    {
      op->vtkCheckerboardRepresentation::SetLeftRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetTopRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSliderRepresentation3D *tempr = (ap.IsBound() ?
      op->GetTopRepresentation() :
      op->vtkCheckerboardRepresentation::GetTopRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetRightRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSliderRepresentation3D *tempr = (ap.IsBound() ?
      op->GetRightRepresentation() :
      op->vtkCheckerboardRepresentation::GetRightRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetBottomRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBottomRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSliderRepresentation3D *tempr = (ap.IsBound() ?
      op->GetBottomRepresentation() :
      op->vtkCheckerboardRepresentation::GetBottomRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetLeftRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSliderRepresentation3D *tempr = (ap.IsBound() ?
      op->GetLeftRepresentation() :
      op->vtkCheckerboardRepresentation::GetLeftRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkCheckerboardRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

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
      op->vtkCheckerboardRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

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
      op->vtkCheckerboardRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCheckerboardRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCheckerboardRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCheckerboardRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCheckerboardRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCheckerboardRepresentation *op = static_cast<vtkCheckerboardRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCheckerboardRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCheckerboardRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkCheckerboardRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCheckerboardRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCheckerboardRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCheckerboardRepresentation\nC++: static vtkCheckerboardRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCheckerboardRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCheckerboardRepresentation\nC++: vtkCheckerboardRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCheckerboardRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCheckerboardRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCheckerboard", PyvtkCheckerboardRepresentation_SetCheckerboard, METH_VARARGS,
   "SetCheckerboard(self, chkrbrd:vtkImageCheckerboard) -> None\nC++: void SetCheckerboard(vtkImageCheckerboard *chkrbrd)\n\nSpecify an instance of vtkImageCheckerboard to manipulate.\n"},
  {"GetCheckerboard", PyvtkCheckerboardRepresentation_GetCheckerboard, METH_VARARGS,
   "GetCheckerboard(self) -> vtkImageCheckerboard\nC++: virtual vtkImageCheckerboard *GetCheckerboard()\n\n"},
  {"SetImageActor", PyvtkCheckerboardRepresentation_SetImageActor, METH_VARARGS,
   "SetImageActor(self, imageActor:vtkImageActor) -> None\nC++: void SetImageActor(vtkImageActor *imageActor)\n\nSpecify an instance of vtkImageActor to decorate.\n"},
  {"GetImageActor", PyvtkCheckerboardRepresentation_GetImageActor, METH_VARARGS,
   "GetImageActor(self) -> vtkImageActor\nC++: virtual vtkImageActor *GetImageActor()\n\n"},
  {"SetCornerOffset", PyvtkCheckerboardRepresentation_SetCornerOffset, METH_VARARGS,
   "SetCornerOffset(self, _arg:float) -> None\nC++: virtual void SetCornerOffset(double _arg)\n\nSpecify the offset of the ends of the sliders (on the boundary\nedges of the image) from the corner of the image. The offset is\nexpressed as a normalized fraction of the border edges.\n"},
  {"GetCornerOffsetMinValue", PyvtkCheckerboardRepresentation_GetCornerOffsetMinValue, METH_VARARGS,
   "GetCornerOffsetMinValue(self) -> float\nC++: virtual double GetCornerOffsetMinValue()\n\n"},
  {"GetCornerOffsetMaxValue", PyvtkCheckerboardRepresentation_GetCornerOffsetMaxValue, METH_VARARGS,
   "GetCornerOffsetMaxValue(self) -> float\nC++: virtual double GetCornerOffsetMaxValue()\n\n"},
  {"GetCornerOffset", PyvtkCheckerboardRepresentation_GetCornerOffset, METH_VARARGS,
   "GetCornerOffset(self) -> float\nC++: virtual double GetCornerOffset()\n\n"},
  {"SliderValueChanged", PyvtkCheckerboardRepresentation_SliderValueChanged, METH_VARARGS,
   "SliderValueChanged(self, sliderNum:int) -> None\nC++: void SliderValueChanged(int sliderNum)\n\nThis method is invoked by the vtkCheckerboardWidget() when a\nvalue of some slider has changed.\n"},
  {"SetTopRepresentation", PyvtkCheckerboardRepresentation_SetTopRepresentation, METH_VARARGS,
   "SetTopRepresentation(self, __a:vtkSliderRepresentation3D) -> None\nC++: void SetTopRepresentation(vtkSliderRepresentation3D *)\n\nSet and get the instances of vtkSliderRepresentation used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {"SetRightRepresentation", PyvtkCheckerboardRepresentation_SetRightRepresentation, METH_VARARGS,
   "SetRightRepresentation(self, __a:vtkSliderRepresentation3D)\n    -> None\nC++: void SetRightRepresentation(vtkSliderRepresentation3D *)\n\n"},
  {"SetBottomRepresentation", PyvtkCheckerboardRepresentation_SetBottomRepresentation, METH_VARARGS,
   "SetBottomRepresentation(self, __a:vtkSliderRepresentation3D)\n    -> None\nC++: void SetBottomRepresentation(vtkSliderRepresentation3D *)\n\n"},
  {"SetLeftRepresentation", PyvtkCheckerboardRepresentation_SetLeftRepresentation, METH_VARARGS,
   "SetLeftRepresentation(self, __a:vtkSliderRepresentation3D) -> None\nC++: void SetLeftRepresentation(vtkSliderRepresentation3D *)\n\n"},
  {"GetTopRepresentation", PyvtkCheckerboardRepresentation_GetTopRepresentation, METH_VARARGS,
   "GetTopRepresentation(self) -> vtkSliderRepresentation3D\nC++: virtual vtkSliderRepresentation3D *GetTopRepresentation()\n\n"},
  {"GetRightRepresentation", PyvtkCheckerboardRepresentation_GetRightRepresentation, METH_VARARGS,
   "GetRightRepresentation(self) -> vtkSliderRepresentation3D\nC++: virtual vtkSliderRepresentation3D *GetRightRepresentation()\n\n"},
  {"GetBottomRepresentation", PyvtkCheckerboardRepresentation_GetBottomRepresentation, METH_VARARGS,
   "GetBottomRepresentation(self) -> vtkSliderRepresentation3D\nC++: virtual vtkSliderRepresentation3D *GetBottomRepresentation()\n\n"},
  {"GetLeftRepresentation", PyvtkCheckerboardRepresentation_GetLeftRepresentation, METH_VARARGS,
   "GetLeftRepresentation(self) -> vtkSliderRepresentation3D\nC++: virtual vtkSliderRepresentation3D *GetLeftRepresentation()\n\n"},
  {"BuildRepresentation", PyvtkCheckerboardRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nMethods required by superclass.\n"},
  {"GetActors", PyvtkCheckerboardRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"ReleaseGraphicsResources", PyvtkCheckerboardRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, w:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOverlay", PyvtkCheckerboardRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {"RenderOpaqueGeometry", PyvtkCheckerboardRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkCheckerboardRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCheckerboardRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCheckerboardRepresentation_Doc =
  "vtkCheckerboardRepresentation - represent the vtkCheckerboardWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "The vtkCheckerboardRepresentation is used to implement the\n"
  "representation of the vtkCheckerboardWidget. The user can adjust the\n"
  "number of divisions in each of the i-j directions in a 2D image. A\n"
  "frame appears around the vtkImageActor with sliders along each side\n"
  "of the frame. The user can interactively adjust the sliders to the\n"
  "desired number of checkerboard subdivisions. The representation uses\n"
  "four instances of vtkSliderRepresentation3D to implement itself.\n\n"
  "@sa\n"
  "vtkCheckerboardWidget vtkImageCheckerboard vtkImageActor\n"
  "vtkSliderWidget vtkRectilinearWipeWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCheckerboardRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkCheckerboardRepresentation", // tp_name
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
  PyvtkCheckerboardRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCheckerboardRepresentation_StaticNew()
{
  return vtkCheckerboardRepresentation::New();
}

PyObject *PyvtkCheckerboardRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCheckerboardRepresentation_Type, PyvtkCheckerboardRepresentation_Methods,
    "vtkCheckerboardRepresentation",
 &PyvtkCheckerboardRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "TopSlider", vtkCheckerboardRepresentation::TopSlider },
        { "RightSlider", vtkCheckerboardRepresentation::RightSlider },
        { "BottomSlider", vtkCheckerboardRepresentation::BottomSlider },
        { "LeftSlider", vtkCheckerboardRepresentation::LeftSlider },
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

void PyVTKAddFile_vtkCheckerboardRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCheckerboardRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCheckerboardRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

