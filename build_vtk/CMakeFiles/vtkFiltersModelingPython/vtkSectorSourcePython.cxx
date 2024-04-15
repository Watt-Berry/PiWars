// python wrapper for vtkSectorSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSectorSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSectorSource(PyObject *dict); }
extern "C" { PyObject *PyvtkSectorSource_ClassNew(); }


static PyObject *
PyvtkSectorSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSectorSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSectorSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSectorSource *tempr = vtkSectorSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSectorSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSectorSource::NewInstance());

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
PyvtkSectorSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSectorSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSectorSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_SetInnerRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInnerRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInnerRadius(temp0);
    }
    else
    {
      op->vtkSectorSource::SetInnerRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetInnerRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInnerRadiusMinValue() :
      op->vtkSectorSource::GetInnerRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetInnerRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInnerRadiusMaxValue() :
      op->vtkSectorSource::GetInnerRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetInnerRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInnerRadius() :
      op->vtkSectorSource::GetInnerRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_SetOuterRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOuterRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOuterRadius(temp0);
    }
    else
    {
      op->vtkSectorSource::SetOuterRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetOuterRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOuterRadiusMinValue() :
      op->vtkSectorSource::GetOuterRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetOuterRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOuterRadiusMaxValue() :
      op->vtkSectorSource::GetOuterRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetOuterRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOuterRadius() :
      op->vtkSectorSource::GetOuterRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_SetZCoord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZCoord(temp0);
    }
    else
    {
      op->vtkSectorSource::SetZCoord(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetZCoordMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoordMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZCoordMinValue() :
      op->vtkSectorSource::GetZCoordMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetZCoordMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoordMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZCoordMaxValue() :
      op->vtkSectorSource::GetZCoordMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetZCoord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZCoord() :
      op->vtkSectorSource::GetZCoord());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_SetRadialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialResolution(temp0);
    }
    else
    {
      op->vtkSectorSource::SetRadialResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetRadialResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRadialResolutionMinValue() :
      op->vtkSectorSource::GetRadialResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetRadialResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRadialResolutionMaxValue() :
      op->vtkSectorSource::GetRadialResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetRadialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRadialResolution() :
      op->vtkSectorSource::GetRadialResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_SetCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCircumferentialResolution(temp0);
    }
    else
    {
      op->vtkSectorSource::SetCircumferentialResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetCircumferentialResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCircumferentialResolutionMinValue() :
      op->vtkSectorSource::GetCircumferentialResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetCircumferentialResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCircumferentialResolutionMaxValue() :
      op->vtkSectorSource::GetCircumferentialResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCircumferentialResolution() :
      op->vtkSectorSource::GetCircumferentialResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_SetStartAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartAngle(temp0);
    }
    else
    {
      op->vtkSectorSource::SetStartAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetStartAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartAngleMinValue() :
      op->vtkSectorSource::GetStartAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetStartAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartAngleMaxValue() :
      op->vtkSectorSource::GetStartAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetStartAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartAngle() :
      op->vtkSectorSource::GetStartAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_SetEndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndAngle(temp0);
    }
    else
    {
      op->vtkSectorSource::SetEndAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetEndAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndAngleMinValue() :
      op->vtkSectorSource::GetEndAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetEndAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndAngleMaxValue() :
      op->vtkSectorSource::GetEndAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetEndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndAngle() :
      op->vtkSectorSource::GetEndAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSectorSource_Methods[] = {
  {"IsTypeOf", PyvtkSectorSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSectorSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSectorSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSectorSource\nC++: static vtkSectorSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSectorSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSectorSource\nC++: vtkSectorSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSectorSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSectorSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInnerRadius", PyvtkSectorSource_SetInnerRadius, METH_VARARGS,
   "SetInnerRadius(self, _arg:float) -> None\nC++: virtual void SetInnerRadius(double _arg)\n\nSpecify inner radius of the sector.\n"},
  {"GetInnerRadiusMinValue", PyvtkSectorSource_GetInnerRadiusMinValue, METH_VARARGS,
   "GetInnerRadiusMinValue(self) -> float\nC++: virtual double GetInnerRadiusMinValue()\n\n"},
  {"GetInnerRadiusMaxValue", PyvtkSectorSource_GetInnerRadiusMaxValue, METH_VARARGS,
   "GetInnerRadiusMaxValue(self) -> float\nC++: virtual double GetInnerRadiusMaxValue()\n\n"},
  {"GetInnerRadius", PyvtkSectorSource_GetInnerRadius, METH_VARARGS,
   "GetInnerRadius(self) -> float\nC++: virtual double GetInnerRadius()\n\n"},
  {"SetOuterRadius", PyvtkSectorSource_SetOuterRadius, METH_VARARGS,
   "SetOuterRadius(self, _arg:float) -> None\nC++: virtual void SetOuterRadius(double _arg)\n\nSpecify outer radius of the sector.\n"},
  {"GetOuterRadiusMinValue", PyvtkSectorSource_GetOuterRadiusMinValue, METH_VARARGS,
   "GetOuterRadiusMinValue(self) -> float\nC++: virtual double GetOuterRadiusMinValue()\n\n"},
  {"GetOuterRadiusMaxValue", PyvtkSectorSource_GetOuterRadiusMaxValue, METH_VARARGS,
   "GetOuterRadiusMaxValue(self) -> float\nC++: virtual double GetOuterRadiusMaxValue()\n\n"},
  {"GetOuterRadius", PyvtkSectorSource_GetOuterRadius, METH_VARARGS,
   "GetOuterRadius(self) -> float\nC++: virtual double GetOuterRadius()\n\n"},
  {"SetZCoord", PyvtkSectorSource_SetZCoord, METH_VARARGS,
   "SetZCoord(self, _arg:float) -> None\nC++: virtual void SetZCoord(double _arg)\n\nSpecify the z coordinate of the sector.\n"},
  {"GetZCoordMinValue", PyvtkSectorSource_GetZCoordMinValue, METH_VARARGS,
   "GetZCoordMinValue(self) -> float\nC++: virtual double GetZCoordMinValue()\n\n"},
  {"GetZCoordMaxValue", PyvtkSectorSource_GetZCoordMaxValue, METH_VARARGS,
   "GetZCoordMaxValue(self) -> float\nC++: virtual double GetZCoordMaxValue()\n\n"},
  {"GetZCoord", PyvtkSectorSource_GetZCoord, METH_VARARGS,
   "GetZCoord(self) -> float\nC++: virtual double GetZCoord()\n\n"},
  {"SetRadialResolution", PyvtkSectorSource_SetRadialResolution, METH_VARARGS,
   "SetRadialResolution(self, _arg:int) -> None\nC++: virtual void SetRadialResolution(int _arg)\n\nSet the number of points in radius direction.\n"},
  {"GetRadialResolutionMinValue", PyvtkSectorSource_GetRadialResolutionMinValue, METH_VARARGS,
   "GetRadialResolutionMinValue(self) -> int\nC++: virtual int GetRadialResolutionMinValue()\n\n"},
  {"GetRadialResolutionMaxValue", PyvtkSectorSource_GetRadialResolutionMaxValue, METH_VARARGS,
   "GetRadialResolutionMaxValue(self) -> int\nC++: virtual int GetRadialResolutionMaxValue()\n\n"},
  {"GetRadialResolution", PyvtkSectorSource_GetRadialResolution, METH_VARARGS,
   "GetRadialResolution(self) -> int\nC++: virtual int GetRadialResolution()\n\n"},
  {"SetCircumferentialResolution", PyvtkSectorSource_SetCircumferentialResolution, METH_VARARGS,
   "SetCircumferentialResolution(self, _arg:int) -> None\nC++: virtual void SetCircumferentialResolution(int _arg)\n\nSet the number of points in circumferential direction.\n"},
  {"GetCircumferentialResolutionMinValue", PyvtkSectorSource_GetCircumferentialResolutionMinValue, METH_VARARGS,
   "GetCircumferentialResolutionMinValue(self) -> int\nC++: virtual int GetCircumferentialResolutionMinValue()\n\n"},
  {"GetCircumferentialResolutionMaxValue", PyvtkSectorSource_GetCircumferentialResolutionMaxValue, METH_VARARGS,
   "GetCircumferentialResolutionMaxValue(self) -> int\nC++: virtual int GetCircumferentialResolutionMaxValue()\n\n"},
  {"GetCircumferentialResolution", PyvtkSectorSource_GetCircumferentialResolution, METH_VARARGS,
   "GetCircumferentialResolution(self) -> int\nC++: virtual int GetCircumferentialResolution()\n\n"},
  {"SetStartAngle", PyvtkSectorSource_SetStartAngle, METH_VARARGS,
   "SetStartAngle(self, _arg:float) -> None\nC++: virtual void SetStartAngle(double _arg)\n\nSet the start angle of the sector.\n"},
  {"GetStartAngleMinValue", PyvtkSectorSource_GetStartAngleMinValue, METH_VARARGS,
   "GetStartAngleMinValue(self) -> float\nC++: virtual double GetStartAngleMinValue()\n\n"},
  {"GetStartAngleMaxValue", PyvtkSectorSource_GetStartAngleMaxValue, METH_VARARGS,
   "GetStartAngleMaxValue(self) -> float\nC++: virtual double GetStartAngleMaxValue()\n\n"},
  {"GetStartAngle", PyvtkSectorSource_GetStartAngle, METH_VARARGS,
   "GetStartAngle(self) -> float\nC++: virtual double GetStartAngle()\n\n"},
  {"SetEndAngle", PyvtkSectorSource_SetEndAngle, METH_VARARGS,
   "SetEndAngle(self, _arg:float) -> None\nC++: virtual void SetEndAngle(double _arg)\n\nSet the end angle of the sector.\n"},
  {"GetEndAngleMinValue", PyvtkSectorSource_GetEndAngleMinValue, METH_VARARGS,
   "GetEndAngleMinValue(self) -> float\nC++: virtual double GetEndAngleMinValue()\n\n"},
  {"GetEndAngleMaxValue", PyvtkSectorSource_GetEndAngleMaxValue, METH_VARARGS,
   "GetEndAngleMaxValue(self) -> float\nC++: virtual double GetEndAngleMaxValue()\n\n"},
  {"GetEndAngle", PyvtkSectorSource_GetEndAngle, METH_VARARGS,
   "GetEndAngle(self) -> float\nC++: virtual double GetEndAngle()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSectorSource_Doc =
  "vtkSectorSource - create a sector of a disk\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSectorSource creates a sector of a polygonal disk. The disk has\n"
  "zero height. The user can specify the inner and outer radius of the\n"
  "disk, the z-coordinate, and the radial and circumferential resolution\n"
  "of the polygonal representation.\n"
  "@sa\n"
  "vtkLinearExtrusionFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSectorSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkSectorSource", // tp_name
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
  PyvtkSectorSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSectorSource_StaticNew()
{
  return vtkSectorSource::New();
}

PyObject *PyvtkSectorSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSectorSource_Type, PyvtkSectorSource_Methods,
    "vtkSectorSource",
 &PyvtkSectorSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSectorSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSectorSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSectorSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

