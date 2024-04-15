// python wrapper for vtkPointSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPointSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointSource(PyObject *dict); }
extern "C" { PyObject *PyvtkPointSource_ClassNew(); }


static PyObject *
PyvtkPointSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointSource *tempr = vtkPointSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointSource::NewInstance());

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
PyvtkPointSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPointSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPointSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPoints(temp0);
    }
    else
    {
      op->vtkPointSource::SetNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetNumberOfPointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPointsMinValue() :
      op->vtkPointSource::GetNumberOfPointsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetNumberOfPointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPointsMaxValue() :
      op->vtkPointSource::GetNumberOfPointsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkPointSource::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

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
      op->vtkPointSource::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

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
      op->vtkPointSource::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPointSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkPointSource_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkPointSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkPointSource::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

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
      op->vtkPointSource::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkPointSource::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkPointSource::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkPointSource::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetDistribution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistribution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistribution(temp0);
    }
    else
    {
      op->vtkPointSource::SetDistribution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetDistributionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistributionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDistributionMinValue() :
      op->vtkPointSource::GetDistributionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetDistributionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistributionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDistributionMaxValue() :
      op->vtkPointSource::GetDistributionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetDistributionToShell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistributionToShell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDistributionToShell();
    }
    else
    {
      op->vtkPointSource::SetDistributionToShell();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetDistributionToUniform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistributionToUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDistributionToUniform();
    }
    else
    {
      op->vtkPointSource::SetDistributionToUniform();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetDistributionToExponential(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistributionToExponential");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDistributionToExponential();
    }
    else
    {
      op->vtkPointSource::SetDistributionToExponential();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetDistribution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistribution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDistribution() :
      op->vtkPointSource::GetDistribution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetLambda(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLambda");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLambda(temp0);
    }
    else
    {
      op->vtkPointSource::SetLambda(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetLambda(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLambda");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLambda() :
      op->vtkPointSource::GetLambda());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

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
      op->vtkPointSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkPointSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_SetRandomSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  vtkRandomSequence *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRandomSequence"))
  {
    if (ap.IsBound())
    {
      op->SetRandomSequence(temp0);
    }
    else
    {
      op->vtkPointSource::SetRandomSequence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSource_GetRandomSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRandomSequence *tempr = (ap.IsBound() ?
      op->GetRandomSequence() :
      op->vtkPointSource::GetRandomSequence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPointSource_Methods[] = {
  {"IsTypeOf", PyvtkPointSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPointSource\nC++: static vtkPointSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPointSource\nC++: vtkPointSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPointSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPointSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfPoints", PyvtkPointSource_SetNumberOfPoints, METH_VARARGS,
   "SetNumberOfPoints(self, _arg:int) -> None\nC++: virtual void SetNumberOfPoints(vtkIdType _arg)\n\nSet the number of points to generate.\n"},
  {"GetNumberOfPointsMinValue", PyvtkPointSource_GetNumberOfPointsMinValue, METH_VARARGS,
   "GetNumberOfPointsMinValue(self) -> int\nC++: virtual vtkIdType GetNumberOfPointsMinValue()\n\n"},
  {"GetNumberOfPointsMaxValue", PyvtkPointSource_GetNumberOfPointsMaxValue, METH_VARARGS,
   "GetNumberOfPointsMaxValue(self) -> int\nC++: virtual vtkIdType GetNumberOfPointsMaxValue()\n\n"},
  {"GetNumberOfPoints", PyvtkPointSource_GetNumberOfPoints, METH_VARARGS,
   "GetNumberOfPoints(self) -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\n"},
  {"SetCenter", PyvtkPointSource_SetCenter, METH_VARARGS,
   "SetCenter(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCenter(double _arg1, double _arg2,\n    double _arg3)\nSetCenter(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCenter(const double _arg[3])\n\nSet the center of the point cloud.\n"},
  {"GetCenter", PyvtkPointSource_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: virtual double *GetCenter()\n\n"},
  {"SetRadius", PyvtkPointSource_SetRadius, METH_VARARGS,
   "SetRadius(self, _arg:float) -> None\nC++: virtual void SetRadius(double _arg)\n\nSet the radius of the point cloud.  If you are generating a\nGaussian distribution, then this is the standard deviation for\neach of x, y, and z.\n"},
  {"GetRadiusMinValue", PyvtkPointSource_GetRadiusMinValue, METH_VARARGS,
   "GetRadiusMinValue(self) -> float\nC++: virtual double GetRadiusMinValue()\n\n"},
  {"GetRadiusMaxValue", PyvtkPointSource_GetRadiusMaxValue, METH_VARARGS,
   "GetRadiusMaxValue(self) -> float\nC++: virtual double GetRadiusMaxValue()\n\n"},
  {"GetRadius", PyvtkPointSource_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: virtual double GetRadius()\n\n"},
  {"SetDistribution", PyvtkPointSource_SetDistribution, METH_VARARGS,
   "SetDistribution(self, _arg:int) -> None\nC++: virtual void SetDistribution(int _arg)\n\nSpecify the point distribution to use.  The default is a uniform\ndistribution.  The shell distribution produces random points on\nthe surface of the sphere Radius=constant, no points in the\ninterior.  The exponential distribution creates more points\ntowards the center point weighted by the exponential function.\n"},
  {"GetDistributionMinValue", PyvtkPointSource_GetDistributionMinValue, METH_VARARGS,
   "GetDistributionMinValue(self) -> int\nC++: virtual int GetDistributionMinValue()\n\n"},
  {"GetDistributionMaxValue", PyvtkPointSource_GetDistributionMaxValue, METH_VARARGS,
   "GetDistributionMaxValue(self) -> int\nC++: virtual int GetDistributionMaxValue()\n\n"},
  {"SetDistributionToShell", PyvtkPointSource_SetDistributionToShell, METH_VARARGS,
   "SetDistributionToShell(self) -> None\nC++: void SetDistributionToShell()\n\n"},
  {"SetDistributionToUniform", PyvtkPointSource_SetDistributionToUniform, METH_VARARGS,
   "SetDistributionToUniform(self) -> None\nC++: void SetDistributionToUniform()\n\n"},
  {"SetDistributionToExponential", PyvtkPointSource_SetDistributionToExponential, METH_VARARGS,
   "SetDistributionToExponential(self) -> None\nC++: void SetDistributionToExponential()\n\n"},
  {"GetDistribution", PyvtkPointSource_GetDistribution, METH_VARARGS,
   "GetDistribution(self) -> int\nC++: virtual int GetDistribution()\n\n"},
  {"SetLambda", PyvtkPointSource_SetLambda, METH_VARARGS,
   "SetLambda(self, _arg:float) -> None\nC++: virtual void SetLambda(double _arg)\n\nIf the distribution is set to exponential, then Lambda is used to\nscale the exponential distribution defined by f(x) =\nLambda*exp(-Lambda*radius) where the radius is the distance from\nthe Center of the point source. By default, the value of Lambda\nis Lambda=1.0.\n"},
  {"GetLambda", PyvtkPointSource_GetLambda, METH_VARARGS,
   "GetLambda(self) -> float\nC++: virtual double GetLambda()\n\n"},
  {"SetOutputPointsPrecision", PyvtkPointSource_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkPointSource_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"SetRandomSequence", PyvtkPointSource_SetRandomSequence, METH_VARARGS,
   "SetRandomSequence(self, randomSequence:vtkRandomSequence) -> None\nC++: virtual void SetRandomSequence(\n    vtkRandomSequence *randomSequence)\n\nSet/Get a random sequence generator. By default, the generator in\nvtkMath is used to maintain backwards compatibility.\n"},
  {"GetRandomSequence", PyvtkPointSource_GetRandomSequence, METH_VARARGS,
   "GetRandomSequence(self) -> vtkRandomSequence\nC++: virtual vtkRandomSequence *GetRandomSequence()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPointSource_Doc =
  "vtkPointSource - create a random cloud of points\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPointSource is a source object that creates a user-specified\n"
  "number of points within a specified radius about a specified center\n"
  "point.  By default the location of the points is random within the\n"
  "sphere. It is also possible to generate random points only on the\n"
  "surface of the sphere; or a exponential distribution weighted towards\n"
  "the center point. The output PolyData has the specified number of\n"
  "points and a single cell - a vtkPolyVertex cell referencing all of\n"
  "the points.\n\n"
  "ote If Lambda set to zero, a uniform distribution is used. Negative\n"
  "lambda values are allowed, but the distribution function becomes\n"
  "inverted.\n\n"
  "ote If you desire to create complex point clouds (e.g., stellar\n"
  "distributions) then use multiple point sources and then append them\n"
  "together using the an append filter (e.g., vtkAppendPolyData).\n\n"
  "@sa\n"
  "vtkAppendPolyData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkPointSource", // tp_name
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
  PyvtkPointSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointSource_StaticNew()
{
  return vtkPointSource::New();
}

PyObject *PyvtkPointSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPointSource_Type, PyvtkPointSource_Methods,
    "vtkPointSource",
 &PyvtkPointSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointSource", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_POINT_SHELL", 0 },
        { "VTK_POINT_UNIFORM", 1 },
        { "VTK_POINT_EXPONENTIAL", 2 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

