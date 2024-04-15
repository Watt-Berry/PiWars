// python wrapper for vtkFlagpoleLabel
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFlagpoleLabel.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFlagpoleLabel(PyObject *dict); }
extern "C" { PyObject *PyvtkFlagpoleLabel_ClassNew(); }

#ifndef DECLARED_PyvtkActor_ClassNew
extern "C" { PyObject *PyvtkActor_ClassNew(); }
#define DECLARED_PyvtkActor_ClassNew
#endif

static PyObject *
PyvtkFlagpoleLabel_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFlagpoleLabel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFlagpoleLabel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFlagpoleLabel *tempr = vtkFlagpoleLabel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFlagpoleLabel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFlagpoleLabel::NewInstance());

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
PyvtkFlagpoleLabel_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFlagpoleLabel::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFlagpoleLabel::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkFlagpoleLabel::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkFlagpoleLabel::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperty(temp0);
    }
    else
    {
      op->vtkFlagpoleLabel::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkFlagpoleLabel::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_SetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceOpaque(temp0);
    }
    else
    {
      op->vtkFlagpoleLabel::SetForceOpaque(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_GetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceOpaque() :
      op->vtkFlagpoleLabel::GetForceOpaque());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_ForceOpaqueOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOn();
    }
    else
    {
      op->vtkFlagpoleLabel::ForceOpaqueOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_ForceOpaqueOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOff();
    }
    else
    {
      op->vtkFlagpoleLabel::ForceOpaqueOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_SetForceTranslucent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceTranslucent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceTranslucent(temp0);
    }
    else
    {
      op->vtkFlagpoleLabel::SetForceTranslucent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_GetForceTranslucent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceTranslucent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceTranslucent() :
      op->vtkFlagpoleLabel::GetForceTranslucent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_ForceTranslucentOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceTranslucentOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceTranslucentOn();
    }
    else
    {
      op->vtkFlagpoleLabel::ForceTranslucentOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_ForceTranslucentOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceTranslucentOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceTranslucentOff();
    }
    else
    {
      op->vtkFlagpoleLabel::ForceTranslucentOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkFlagpoleLabel::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkFlagpoleLabel::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkFlagpoleLabel::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

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
      op->vtkFlagpoleLabel::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkFlagpoleLabel::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkFlagpoleLabel_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

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
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkFlagpoleLabel::GetBounds(temp0);
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
PyvtkFlagpoleLabel_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkFlagpoleLabel_GetBounds_s1(self, args);
    case 1:
      return PyvtkFlagpoleLabel_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkFlagpoleLabel_GetBasePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBasePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBasePosition() :
      op->vtkFlagpoleLabel::GetBasePosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_SetBasePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBasePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

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
      op->SetBasePosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFlagpoleLabel::SetBasePosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_GetTopPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTopPosition() :
      op->vtkFlagpoleLabel::GetTopPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_SetTopPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

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
      op->SetTopPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFlagpoleLabel::SetTopPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_GetFlagSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlagSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFlagSize() :
      op->vtkFlagpoleLabel::GetFlagSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlagpoleLabel_SetFlagSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlagSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlagpoleLabel *op = static_cast<vtkFlagpoleLabel *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlagSize(temp0);
    }
    else
    {
      op->vtkFlagpoleLabel::SetFlagSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFlagpoleLabel_Methods[] = {
  {"IsTypeOf", PyvtkFlagpoleLabel_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFlagpoleLabel_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFlagpoleLabel_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFlagpoleLabel\nC++: static vtkFlagpoleLabel *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFlagpoleLabel_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFlagpoleLabel\nC++: vtkFlagpoleLabel *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFlagpoleLabel_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFlagpoleLabel_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInput", PyvtkFlagpoleLabel_SetInput, METH_VARARGS,
   "SetInput(self, in_:str) -> None\nC++: void SetInput(const char *in)\n\n"},
  {"GetInput", PyvtkFlagpoleLabel_GetInput, METH_VARARGS,
   "GetInput(self) -> str\nC++: virtual char *GetInput()\n\n"},
  {"SetTextProperty", PyvtkFlagpoleLabel_SetTextProperty, METH_VARARGS,
   "SetTextProperty(self, tprop:vtkTextProperty) -> None\nC++: void SetTextProperty(vtkTextProperty *tprop)\n\n"},
  {"GetTextProperty", PyvtkFlagpoleLabel_GetTextProperty, METH_VARARGS,
   "GetTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperty()\n\n"},
  {"SetForceOpaque", PyvtkFlagpoleLabel_SetForceOpaque, METH_VARARGS,
   "SetForceOpaque(self, opaque:bool) -> None\nC++: void SetForceOpaque(bool opaque) override;\n\n"},
  {"GetForceOpaque", PyvtkFlagpoleLabel_GetForceOpaque, METH_VARARGS,
   "GetForceOpaque(self) -> bool\nC++: bool GetForceOpaque() override;\n\nForce the actor to be treated as opaque or translucent\n"},
  {"ForceOpaqueOn", PyvtkFlagpoleLabel_ForceOpaqueOn, METH_VARARGS,
   "ForceOpaqueOn(self) -> None\nC++: void ForceOpaqueOn() override;\n\n"},
  {"ForceOpaqueOff", PyvtkFlagpoleLabel_ForceOpaqueOff, METH_VARARGS,
   "ForceOpaqueOff(self) -> None\nC++: void ForceOpaqueOff() override;\n\n"},
  {"SetForceTranslucent", PyvtkFlagpoleLabel_SetForceTranslucent, METH_VARARGS,
   "SetForceTranslucent(self, trans:bool) -> None\nC++: void SetForceTranslucent(bool trans) override;\n\n"},
  {"GetForceTranslucent", PyvtkFlagpoleLabel_GetForceTranslucent, METH_VARARGS,
   "GetForceTranslucent(self) -> bool\nC++: bool GetForceTranslucent() override;\n\n"},
  {"ForceTranslucentOn", PyvtkFlagpoleLabel_ForceTranslucentOn, METH_VARARGS,
   "ForceTranslucentOn(self) -> None\nC++: void ForceTranslucentOn() override;\n\n"},
  {"ForceTranslucentOff", PyvtkFlagpoleLabel_ForceTranslucentOff, METH_VARARGS,
   "ForceTranslucentOff(self) -> None\nC++: void ForceTranslucentOff() override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkFlagpoleLabel_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDefers to internal actor.\n"},
  {"RenderOpaqueGeometry", PyvtkFlagpoleLabel_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, vp:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *vp) override;\n\nCheck/update geometry/texture in opaque pass, since it only\nhappens once.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkFlagpoleLabel_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, vp:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *vp)\n    override;\n\nJust render in translucent pass, since it can execute multiple\ntimes (depth peeling, for instance).\n"},
  {"ReleaseGraphicsResources", PyvtkFlagpoleLabel_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, win:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *win) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetBounds", PyvtkFlagpoleLabel_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nGet the bounds for this Prop as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\nin world coordinates. NULL means that the bounds are not defined.\n"},
  {"GetBasePosition", PyvtkFlagpoleLabel_GetBasePosition, METH_VARARGS,
   "GetBasePosition(self) -> (float, float, float)\nC++: virtual double *GetBasePosition()\n\nSet/Get the world coordinate position of the base\n"},
  {"SetBasePosition", PyvtkFlagpoleLabel_SetBasePosition, METH_VARARGS,
   "SetBasePosition(self, x:float, y:float, z:float) -> None\nC++: void SetBasePosition(double x, double y, double z)\n\n"},
  {"GetTopPosition", PyvtkFlagpoleLabel_GetTopPosition, METH_VARARGS,
   "GetTopPosition(self) -> (float, float, float)\nC++: virtual double *GetTopPosition()\n\nSet/Get the world coordinate position of the top\n"},
  {"SetTopPosition", PyvtkFlagpoleLabel_SetTopPosition, METH_VARARGS,
   "SetTopPosition(self, x:float, y:float, z:float) -> None\nC++: void SetTopPosition(double x, double y, double z)\n\n"},
  {"GetFlagSize", PyvtkFlagpoleLabel_GetFlagSize, METH_VARARGS,
   "GetFlagSize(self) -> float\nC++: virtual double GetFlagSize()\n\nSet/Get the size of the flag. 1.0 is the default size which\ncorresponds to a preset texels/window value. Adjust this to\nincrease or decrease the default size.\n"},
  {"SetFlagSize", PyvtkFlagpoleLabel_SetFlagSize, METH_VARARGS,
   "SetFlagSize(self, _arg:float) -> None\nC++: virtual void SetFlagSize(double _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFlagpoleLabel_Doc =
  "vtkFlagpoleLabel - Renders a flagpole (line) with a label at the top\nthat faces the camera\n\n"
  "Superclass: vtkActor\n\n"
  "This class draws a line from the base to the top of the flagpole. It\n"
  "then places a text annotation at the top, centered horizontally. The\n"
  "text is always oriented with the flagpole but will rotate aroundthe\n"
  "flagpole to face the camera.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFlagpoleLabel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkFlagpoleLabel", // tp_name
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
  PyvtkFlagpoleLabel_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFlagpoleLabel_StaticNew()
{
  return vtkFlagpoleLabel::New();
}

PyObject *PyvtkFlagpoleLabel_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFlagpoleLabel_Type, PyvtkFlagpoleLabel_Methods,
    "vtkFlagpoleLabel",
 &PyvtkFlagpoleLabel_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkActor_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFlagpoleLabel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFlagpoleLabel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFlagpoleLabel", o) != 0)
  {
    Py_DECREF(o);
  }

}

