// python wrapper for vtkCapsuleSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCapsuleSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCapsuleSource(PyObject *dict); }
extern "C" { PyObject *PyvtkCapsuleSource_ClassNew(); }


static PyObject *
PyvtkCapsuleSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCapsuleSource."
    " (" "Use vtkCylinderSource with SetCapping(true) and SetCapsuleCap(true) instead of vtkCapsuleSource." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCapsuleSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCapsuleSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCapsuleSource."
    " (" "Use vtkCylinderSource with SetCapping(true) and SetCapsuleCap(true) instead of vtkCapsuleSource." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCapsuleSource *tempr = vtkCapsuleSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCapsuleSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCapsuleSource::NewInstance());

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
PyvtkCapsuleSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCapsuleSource."
    " (" "Use vtkCylinderSource with SetCapping(true) and SetCapsuleCap(true) instead of vtkCapsuleSource." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCapsuleSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCapsuleSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkCapsuleSource::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkCapsuleSource::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkCapsuleSource::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkCapsuleSource::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCapsuleSource::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCapsuleSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkCapsuleSource::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCapsuleSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCapsuleSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkCapsuleSource_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkCapsuleSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkCapsuleSource::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_SetCylinderLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCylinderLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCylinderLength(temp0);
    }
    else
    {
      op->vtkCapsuleSource::SetCylinderLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_GetCylinderLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCylinderLengthMinValue() :
      op->vtkCapsuleSource::GetCylinderLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_GetCylinderLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCylinderLengthMaxValue() :
      op->vtkCapsuleSource::GetCylinderLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_GetCylinderLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCylinderLength() :
      op->vtkCapsuleSource::GetCylinderLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_SetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThetaResolution(temp0);
    }
    else
    {
      op->vtkCapsuleSource::SetThetaResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_GetThetaResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolutionMinValue() :
      op->vtkCapsuleSource::GetThetaResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_GetThetaResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolutionMaxValue() :
      op->vtkCapsuleSource::GetThetaResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_GetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolution() :
      op->vtkCapsuleSource::GetThetaResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_SetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPhiResolution(temp0);
    }
    else
    {
      op->vtkCapsuleSource::SetPhiResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_GetPhiResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolutionMinValue() :
      op->vtkCapsuleSource::GetPhiResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_GetPhiResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolutionMaxValue() :
      op->vtkCapsuleSource::GetPhiResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_GetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolution() :
      op->vtkCapsuleSource::GetPhiResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_SetLatLongTessellation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatLongTessellation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLatLongTessellation(temp0);
    }
    else
    {
      op->vtkCapsuleSource::SetLatLongTessellation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_GetLatLongTessellation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatLongTessellation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLatLongTessellation() :
      op->vtkCapsuleSource::GetLatLongTessellation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_LatLongTessellationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LatLongTessellationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LatLongTessellationOn();
    }
    else
    {
      op->vtkCapsuleSource::LatLongTessellationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_LatLongTessellationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LatLongTessellationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LatLongTessellationOff();
    }
    else
    {
      op->vtkCapsuleSource::LatLongTessellationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkCapsuleSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCapsuleSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCapsuleSource *op = static_cast<vtkCapsuleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkCapsuleSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCapsuleSource_Methods[] = {
  {"IsTypeOf", PyvtkCapsuleSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCapsuleSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCapsuleSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCapsuleSource\nC++: static vtkCapsuleSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCapsuleSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCapsuleSource\nC++: vtkCapsuleSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCapsuleSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCapsuleSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRadius", PyvtkCapsuleSource_SetRadius, METH_VARARGS,
   "SetRadius(self, _arg:float) -> None\nC++: virtual void SetRadius(double _arg)\n\nSet/get the radius of the capsule. The initial value is 0.5.\n"},
  {"GetRadiusMinValue", PyvtkCapsuleSource_GetRadiusMinValue, METH_VARARGS,
   "GetRadiusMinValue(self) -> float\nC++: virtual double GetRadiusMinValue()\n\n"},
  {"GetRadiusMaxValue", PyvtkCapsuleSource_GetRadiusMaxValue, METH_VARARGS,
   "GetRadiusMaxValue(self) -> float\nC++: virtual double GetRadiusMaxValue()\n\n"},
  {"GetRadius", PyvtkCapsuleSource_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: virtual double GetRadius()\n\n"},
  {"SetCenter", PyvtkCapsuleSource_SetCenter, METH_VARARGS,
   "SetCenter(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCenter(double _arg1, double _arg2,\n    double _arg3)\nSetCenter(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCenter(const double _arg[3])\n\nSet/get the center of the capsule. The initial value is (0.0,\n0.0, 0.0).\n"},
  {"GetCenter", PyvtkCapsuleSource_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: virtual double *GetCenter()\n\n"},
  {"SetCylinderLength", PyvtkCapsuleSource_SetCylinderLength, METH_VARARGS,
   "SetCylinderLength(self, _arg:float) -> None\nC++: virtual void SetCylinderLength(double _arg)\n\nSet/get the length of the cylinder. The initial value is 1.0.\n"},
  {"GetCylinderLengthMinValue", PyvtkCapsuleSource_GetCylinderLengthMinValue, METH_VARARGS,
   "GetCylinderLengthMinValue(self) -> float\nC++: virtual double GetCylinderLengthMinValue()\n\n"},
  {"GetCylinderLengthMaxValue", PyvtkCapsuleSource_GetCylinderLengthMaxValue, METH_VARARGS,
   "GetCylinderLengthMaxValue(self) -> float\nC++: virtual double GetCylinderLengthMaxValue()\n\n"},
  {"GetCylinderLength", PyvtkCapsuleSource_GetCylinderLength, METH_VARARGS,
   "GetCylinderLength(self) -> float\nC++: virtual double GetCylinderLength()\n\n"},
  {"SetThetaResolution", PyvtkCapsuleSource_SetThetaResolution, METH_VARARGS,
   "SetThetaResolution(self, _arg:int) -> None\nC++: virtual void SetThetaResolution(int _arg)\n\nSet/get the number of points in the longitude direction for the\nspheres. The initial value is 8.\n"},
  {"GetThetaResolutionMinValue", PyvtkCapsuleSource_GetThetaResolutionMinValue, METH_VARARGS,
   "GetThetaResolutionMinValue(self) -> int\nC++: virtual int GetThetaResolutionMinValue()\n\n"},
  {"GetThetaResolutionMaxValue", PyvtkCapsuleSource_GetThetaResolutionMaxValue, METH_VARARGS,
   "GetThetaResolutionMaxValue(self) -> int\nC++: virtual int GetThetaResolutionMaxValue()\n\n"},
  {"GetThetaResolution", PyvtkCapsuleSource_GetThetaResolution, METH_VARARGS,
   "GetThetaResolution(self) -> int\nC++: virtual int GetThetaResolution()\n\n"},
  {"SetPhiResolution", PyvtkCapsuleSource_SetPhiResolution, METH_VARARGS,
   "SetPhiResolution(self, _arg:int) -> None\nC++: virtual void SetPhiResolution(int _arg)\n\nSet/get the number of points in the latitude direction for the\nspheres. The initial value is 8.\n"},
  {"GetPhiResolutionMinValue", PyvtkCapsuleSource_GetPhiResolutionMinValue, METH_VARARGS,
   "GetPhiResolutionMinValue(self) -> int\nC++: virtual int GetPhiResolutionMinValue()\n\n"},
  {"GetPhiResolutionMaxValue", PyvtkCapsuleSource_GetPhiResolutionMaxValue, METH_VARARGS,
   "GetPhiResolutionMaxValue(self) -> int\nC++: virtual int GetPhiResolutionMaxValue()\n\n"},
  {"GetPhiResolution", PyvtkCapsuleSource_GetPhiResolution, METH_VARARGS,
   "GetPhiResolution(self) -> int\nC++: virtual int GetPhiResolution()\n\n"},
  {"SetLatLongTessellation", PyvtkCapsuleSource_SetLatLongTessellation, METH_VARARGS,
   "SetLatLongTessellation(self, _arg:int) -> None\nC++: virtual void SetLatLongTessellation(int _arg)\n\nCause the spheres to be tessellated with edges along the latitude\nand longitude lines. If off, triangles are generated at non-polar\nregions, which results in edges that are not parallel to latitude\nand longitude lines. If on, quadrilaterals are generated\neverywhere except at the poles. This can be useful for generating\nwireframe spheres with natural latitude and longitude lines.\n"},
  {"GetLatLongTessellation", PyvtkCapsuleSource_GetLatLongTessellation, METH_VARARGS,
   "GetLatLongTessellation(self) -> int\nC++: virtual int GetLatLongTessellation()\n\n"},
  {"LatLongTessellationOn", PyvtkCapsuleSource_LatLongTessellationOn, METH_VARARGS,
   "LatLongTessellationOn(self) -> None\nC++: virtual void LatLongTessellationOn()\n\n"},
  {"LatLongTessellationOff", PyvtkCapsuleSource_LatLongTessellationOff, METH_VARARGS,
   "LatLongTessellationOff(self) -> None\nC++: virtual void LatLongTessellationOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkCapsuleSource_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkCapsuleSource_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCapsuleSource_Doc =
  "vtkCapsuleSource - Generate a capsule centered at the origin\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkCapsuleSource creates a capsule (represented by polygons) of\n"
  "specified radius centered at the origin. The resolution (polygonal\n"
  "discretization) in both the latitude (phi) and longitude (theta)\n"
  "directions can be specified as well as the length of the capsule\n"
  "cylinder (CylinderLength). By default, the surface tessellation of\n"
  "the sphere uses triangles; however you can set LatLongTessellation to\n"
  "produce a tessellation using quadrilaterals (except at the poles of\n"
  "the capsule).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCapsuleSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkCapsuleSource", // tp_name
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
  PyvtkCapsuleSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCapsuleSource_StaticNew()
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCapsuleSource."
    " (" "Use vtkCylinderSource with SetCapping(true) and SetCapsuleCap(true) instead of vtkCapsuleSource." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  return vtkCapsuleSource::New();
}

PyObject *PyvtkCapsuleSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCapsuleSource_Type, PyvtkCapsuleSource_Methods,
    "vtkCapsuleSource",
 &PyvtkCapsuleSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCapsuleSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCapsuleSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCapsuleSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

