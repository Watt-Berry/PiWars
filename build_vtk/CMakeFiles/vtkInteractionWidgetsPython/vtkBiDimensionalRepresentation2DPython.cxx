// python wrapper for vtkBiDimensionalRepresentation2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBiDimensionalRepresentation2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBiDimensionalRepresentation2D(PyObject *dict); }
extern "C" { PyObject *PyvtkBiDimensionalRepresentation2D_ClassNew(); }

#ifndef DECLARED_PyvtkBiDimensionalRepresentation_ClassNew
extern "C" { PyObject *PyvtkBiDimensionalRepresentation_ClassNew(); }
#define DECLARED_PyvtkBiDimensionalRepresentation_ClassNew
#endif

static PyObject *
PyvtkBiDimensionalRepresentation2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBiDimensionalRepresentation2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBiDimensionalRepresentation2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBiDimensionalRepresentation2D *tempr = vtkBiDimensionalRepresentation2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBiDimensionalRepresentation2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBiDimensionalRepresentation2D::NewInstance());

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
PyvtkBiDimensionalRepresentation2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBiDimensionalRepresentation2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBiDimensionalRepresentation2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetLineProperty() :
      op->vtkBiDimensionalRepresentation2D::GetLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetSelectedLineProperty() :
      op->vtkBiDimensionalRepresentation2D::GetSelectedLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkBiDimensionalRepresentation2D::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkBiDimensionalRepresentation2D::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->vtkBiDimensionalRepresentation2D::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_StartWidgetDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->StartWidgetDefinition(temp0);
    }
    else
    {
      op->vtkBiDimensionalRepresentation2D::StartWidgetDefinition(temp0);
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
PyvtkBiDimensionalRepresentation2D_Point2WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Point2WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->Point2WidgetInteraction(temp0);
    }
    else
    {
      op->vtkBiDimensionalRepresentation2D::Point2WidgetInteraction(temp0);
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
PyvtkBiDimensionalRepresentation2D_Point3WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Point3WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->Point3WidgetInteraction(temp0);
    }
    else
    {
      op->vtkBiDimensionalRepresentation2D::Point3WidgetInteraction(temp0);
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
PyvtkBiDimensionalRepresentation2D_StartWidgetManipulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetManipulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->StartWidgetManipulation(temp0);
    }
    else
    {
      op->vtkBiDimensionalRepresentation2D::StartWidgetManipulation(temp0);
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
PyvtkBiDimensionalRepresentation2D_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->vtkBiDimensionalRepresentation2D::WidgetInteraction(temp0);
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
PyvtkBiDimensionalRepresentation2D_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->vtkBiDimensionalRepresentation2D::Highlight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->vtkBiDimensionalRepresentation2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkBiDimensionalRepresentation2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelText() :
      op->vtkBiDimensionalRepresentation2D::GetLabelText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetLabelPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLabelPosition() :
      op->vtkBiDimensionalRepresentation2D::GetLabelPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBiDimensionalRepresentation2D_GetLabelPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->GetLabelPosition(temp0);
    }
    else
    {
      op->vtkBiDimensionalRepresentation2D::GetLabelPosition(temp0);
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
PyvtkBiDimensionalRepresentation2D_GetLabelPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkBiDimensionalRepresentation2D_GetLabelPosition_s1(self, args);
    case 1:
      return PyvtkBiDimensionalRepresentation2D_GetLabelPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLabelPosition");
  return nullptr;
}


static PyObject *
PyvtkBiDimensionalRepresentation2D_GetWorldLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBiDimensionalRepresentation2D *op = static_cast<vtkBiDimensionalRepresentation2D *>(vp);

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
      op->GetWorldLabelPosition(temp0);
    }
    else
    {
      op->vtkBiDimensionalRepresentation2D::GetWorldLabelPosition(temp0);
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

static PyMethodDef PyvtkBiDimensionalRepresentation2D_Methods[] = {
  {"IsTypeOf", PyvtkBiDimensionalRepresentation2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBiDimensionalRepresentation2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBiDimensionalRepresentation2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBiDimensionalRepresentation2D\nC++: static vtkBiDimensionalRepresentation2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBiDimensionalRepresentation2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBiDimensionalRepresentation2D\nC++: vtkBiDimensionalRepresentation2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBiDimensionalRepresentation2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBiDimensionalRepresentation2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetLineProperty", PyvtkBiDimensionalRepresentation2D_GetLineProperty, METH_VARARGS,
   "GetLineProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetLineProperty()\n\nRetrieve the property used to control the appearance of the two\northogonal lines.\n"},
  {"GetSelectedLineProperty", PyvtkBiDimensionalRepresentation2D_GetSelectedLineProperty, METH_VARARGS,
   "GetSelectedLineProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetSelectedLineProperty()\n\n"},
  {"GetTextProperty", PyvtkBiDimensionalRepresentation2D_GetTextProperty, METH_VARARGS,
   "GetTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperty()\n\nRetrieve the property used to control the appearance of the text\nlabels.\n"},
  {"BuildRepresentation", PyvtkBiDimensionalRepresentation2D_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComputeInteractionState", PyvtkBiDimensionalRepresentation2D_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"StartWidgetDefinition", PyvtkBiDimensionalRepresentation2D_StartWidgetDefinition, METH_VARARGS,
   "StartWidgetDefinition(self, e:[float, float]) -> None\nC++: void StartWidgetDefinition(double e[2]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"Point2WidgetInteraction", PyvtkBiDimensionalRepresentation2D_Point2WidgetInteraction, METH_VARARGS,
   "Point2WidgetInteraction(self, e:[float, float]) -> None\nC++: void Point2WidgetInteraction(double e[2]) override;\n\n"},
  {"Point3WidgetInteraction", PyvtkBiDimensionalRepresentation2D_Point3WidgetInteraction, METH_VARARGS,
   "Point3WidgetInteraction(self, e:[float, float]) -> None\nC++: void Point3WidgetInteraction(double e[2]) override;\n\n"},
  {"StartWidgetManipulation", PyvtkBiDimensionalRepresentation2D_StartWidgetManipulation, METH_VARARGS,
   "StartWidgetManipulation(self, e:[float, float]) -> None\nC++: void StartWidgetManipulation(double e[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkBiDimensionalRepresentation2D_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, e:[float, float]) -> None\nC++: void WidgetInteraction(double e[2]) override;\n\n"},
  {"Highlight", PyvtkBiDimensionalRepresentation2D_Highlight, METH_VARARGS,
   "Highlight(self, highlightOn:int) -> None\nC++: void Highlight(int highlightOn) override;\n\n"},
  {"ReleaseGraphicsResources", PyvtkBiDimensionalRepresentation2D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, w:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderOverlay", PyvtkBiDimensionalRepresentation2D_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {"GetLabelText", PyvtkBiDimensionalRepresentation2D_GetLabelText, METH_VARARGS,
   "GetLabelText(self) -> str\nC++: char *GetLabelText() override;\n\nGet the text shown in the widget's label.\n"},
  {"GetLabelPosition", PyvtkBiDimensionalRepresentation2D_GetLabelPosition, METH_VARARGS,
   "GetLabelPosition(self) -> Pointer\nC++: double *GetLabelPosition() override;\nGetLabelPosition(self, pos:[float, float, float]) -> None\nC++: void GetLabelPosition(double pos[3]) override;\n\nGet the position of the widget's label in display coordinates.\n"},
  {"GetWorldLabelPosition", PyvtkBiDimensionalRepresentation2D_GetWorldLabelPosition, METH_VARARGS,
   "GetWorldLabelPosition(self, pos:[float, float, float]) -> None\nC++: void GetWorldLabelPosition(double pos[3]) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBiDimensionalRepresentation2D_Doc =
  "vtkBiDimensionalRepresentation2D - represent the\nvtkBiDimensionalWidget\n\n"
  "Superclass: vtkBiDimensionalRepresentation\n\n"
  "The vtkBiDimensionalRepresentation2D is used to represent the\n"
  "bi-dimensional measure in a 2D (overlay) context. This representation\n"
  "consists of two perpendicular lines defined by four\n"
  "vtkHandleRepresentations. The four handles can be independently\n"
  "manipulated consistent with the orthogonal constraint on the lines.\n"
  "(Note: the four points are referred to as Point1, Point2, Point3 and\n"
  "Point4. Point1 and Point2 define the first line; and Point3 and\n"
  "Point4 define the second orthogonal line.)\n\n"
  "To create this widget, you click to place the first two points. The\n"
  "third point is mirrored with the fourth point; when you place the\n"
  "third point (which is orthogonal to the lined defined by the first\n"
  "two points), the fourth point is dropped as well. After definition,\n"
  "the four points can be moved (in constrained fashion, preserving\n"
  "orthogonality). Further, the entire widget can be translated by\n"
  "grabbing the center point of the widget; each line can be moved along\n"
  "the other line; and the entire widget can be rotated around its\n"
  "center point.\n\n"
  "@sa\n"
  "vtkAngleWidget vtkHandleRepresentation vtkBiDimensionalRepresentation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBiDimensionalRepresentation2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkBiDimensionalRepresentation2D", // tp_name
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
  PyvtkBiDimensionalRepresentation2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBiDimensionalRepresentation2D_StaticNew()
{
  return vtkBiDimensionalRepresentation2D::New();
}

PyObject *PyvtkBiDimensionalRepresentation2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBiDimensionalRepresentation2D_Type, PyvtkBiDimensionalRepresentation2D_Methods,
    "vtkBiDimensionalRepresentation2D",
 &PyvtkBiDimensionalRepresentation2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkBiDimensionalRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 10; c++)
  {
    static const struct { const char *name; int value; }
      constants[10] = {
        { "Outside", vtkBiDimensionalRepresentation2D::Outside },
        { "NearP1", vtkBiDimensionalRepresentation2D::NearP1 },
        { "NearP2", vtkBiDimensionalRepresentation2D::NearP2 },
        { "NearP3", vtkBiDimensionalRepresentation2D::NearP3 },
        { "NearP4", vtkBiDimensionalRepresentation2D::NearP4 },
        { "OnL1Inner", vtkBiDimensionalRepresentation2D::OnL1Inner },
        { "OnL1Outer", vtkBiDimensionalRepresentation2D::OnL1Outer },
        { "OnL2Inner", vtkBiDimensionalRepresentation2D::OnL2Inner },
        { "OnL2Outer", vtkBiDimensionalRepresentation2D::OnL2Outer },
        { "OnCenter", vtkBiDimensionalRepresentation2D::OnCenter },
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

void PyVTKAddFile_vtkBiDimensionalRepresentation2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBiDimensionalRepresentation2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBiDimensionalRepresentation2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

