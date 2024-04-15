// python wrapper for vtkVolumeOfRevolutionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVolumeOfRevolutionFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVolumeOfRevolutionFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkVolumeOfRevolutionFilter_ClassNew(); }


static PyObject *
PyvtkVolumeOfRevolutionFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVolumeOfRevolutionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeOfRevolutionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVolumeOfRevolutionFilter *tempr = vtkVolumeOfRevolutionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeOfRevolutionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeOfRevolutionFilter::NewInstance());

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
PyvtkVolumeOfRevolutionFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVolumeOfRevolutionFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVolumeOfRevolutionFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkVolumeOfRevolutionFilter::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkVolumeOfRevolutionFilter::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkVolumeOfRevolutionFilter::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkVolumeOfRevolutionFilter::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_SetSweepAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSweepAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSweepAngle(temp0);
    }
    else
    {
      op->vtkVolumeOfRevolutionFilter::SetSweepAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetSweepAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSweepAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSweepAngleMinValue() :
      op->vtkVolumeOfRevolutionFilter::GetSweepAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetSweepAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSweepAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSweepAngleMaxValue() :
      op->vtkVolumeOfRevolutionFilter::GetSweepAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetSweepAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSweepAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSweepAngle() :
      op->vtkVolumeOfRevolutionFilter::GetSweepAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_SetAxisPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

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
      op->SetAxisPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVolumeOfRevolutionFilter::SetAxisPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeOfRevolutionFilter_SetAxisPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisPosition(temp0);
    }
    else
    {
      op->vtkVolumeOfRevolutionFilter::SetAxisPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeOfRevolutionFilter_SetAxisPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVolumeOfRevolutionFilter_SetAxisPosition_s1(self, args);
    case 1:
      return PyvtkVolumeOfRevolutionFilter_SetAxisPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisPosition");
  return nullptr;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetAxisPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisPosition() :
      op->vtkVolumeOfRevolutionFilter::GetAxisPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_SetAxisDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

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
      op->SetAxisDirection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVolumeOfRevolutionFilter::SetAxisDirection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeOfRevolutionFilter_SetAxisDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisDirection(temp0);
    }
    else
    {
      op->vtkVolumeOfRevolutionFilter::SetAxisDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeOfRevolutionFilter_SetAxisDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVolumeOfRevolutionFilter_SetAxisDirection_s1(self, args);
    case 1:
      return PyvtkVolumeOfRevolutionFilter_SetAxisDirection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisDirection");
  return nullptr;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetAxisDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisDirection() :
      op->vtkVolumeOfRevolutionFilter::GetAxisDirection());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

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
      op->vtkVolumeOfRevolutionFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkVolumeOfRevolutionFilter::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkVolumeOfRevolutionFilter::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOfRevolutionFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOfRevolutionFilter *op = static_cast<vtkVolumeOfRevolutionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkVolumeOfRevolutionFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVolumeOfRevolutionFilter_Methods[] = {
  {"IsTypeOf", PyvtkVolumeOfRevolutionFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVolumeOfRevolutionFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVolumeOfRevolutionFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVolumeOfRevolutionFilter\nC++: static vtkVolumeOfRevolutionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVolumeOfRevolutionFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVolumeOfRevolutionFilter\nC++: vtkVolumeOfRevolutionFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVolumeOfRevolutionFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVolumeOfRevolutionFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetResolution", PyvtkVolumeOfRevolutionFilter_SetResolution, METH_VARARGS,
   "SetResolution(self, _arg:int) -> None\nC++: virtual void SetResolution(int _arg)\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {"GetResolutionMinValue", PyvtkVolumeOfRevolutionFilter_GetResolutionMinValue, METH_VARARGS,
   "GetResolutionMinValue(self) -> int\nC++: virtual int GetResolutionMinValue()\n\n"},
  {"GetResolutionMaxValue", PyvtkVolumeOfRevolutionFilter_GetResolutionMaxValue, METH_VARARGS,
   "GetResolutionMaxValue(self) -> int\nC++: virtual int GetResolutionMaxValue()\n\n"},
  {"GetResolution", PyvtkVolumeOfRevolutionFilter_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual int GetResolution()\n\n"},
  {"SetSweepAngle", PyvtkVolumeOfRevolutionFilter_SetSweepAngle, METH_VARARGS,
   "SetSweepAngle(self, _arg:float) -> None\nC++: virtual void SetSweepAngle(double _arg)\n\nSet/Get angle of rotation in degrees.\n"},
  {"GetSweepAngleMinValue", PyvtkVolumeOfRevolutionFilter_GetSweepAngleMinValue, METH_VARARGS,
   "GetSweepAngleMinValue(self) -> float\nC++: virtual double GetSweepAngleMinValue()\n\n"},
  {"GetSweepAngleMaxValue", PyvtkVolumeOfRevolutionFilter_GetSweepAngleMaxValue, METH_VARARGS,
   "GetSweepAngleMaxValue(self) -> float\nC++: virtual double GetSweepAngleMaxValue()\n\n"},
  {"GetSweepAngle", PyvtkVolumeOfRevolutionFilter_GetSweepAngle, METH_VARARGS,
   "GetSweepAngle(self) -> float\nC++: virtual double GetSweepAngle()\n\n"},
  {"SetAxisPosition", PyvtkVolumeOfRevolutionFilter_SetAxisPosition, METH_VARARGS,
   "SetAxisPosition(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetAxisPosition(double _arg1, double _arg2,\n    double _arg3)\nSetAxisPosition(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAxisPosition(const double _arg[3])\n\nSet/Get the position of the axis of revolution.\n"},
  {"GetAxisPosition", PyvtkVolumeOfRevolutionFilter_GetAxisPosition, METH_VARARGS,
   "GetAxisPosition(self) -> (float, float, float)\nC++: virtual double *GetAxisPosition()\n\n"},
  {"SetAxisDirection", PyvtkVolumeOfRevolutionFilter_SetAxisDirection, METH_VARARGS,
   "SetAxisDirection(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetAxisDirection(double _arg1, double _arg2,\n    double _arg3)\nSetAxisDirection(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAxisDirection(const double _arg[3])\n\nSet/Get the direction of the axis of revolution.\n"},
  {"GetAxisDirection", PyvtkVolumeOfRevolutionFilter_GetAxisDirection, METH_VARARGS,
   "GetAxisDirection(self) -> (float, float, float)\nC++: virtual double *GetAxisDirection()\n\n"},
  {"SetOutputPointsPrecision", PyvtkVolumeOfRevolutionFilter_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMinValue", PyvtkVolumeOfRevolutionFilter_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   "GetOutputPointsPrecisionMinValue(self) -> int\nC++: virtual int GetOutputPointsPrecisionMinValue()\n\n"},
  {"GetOutputPointsPrecisionMaxValue", PyvtkVolumeOfRevolutionFilter_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   "GetOutputPointsPrecisionMaxValue(self) -> int\nC++: virtual int GetOutputPointsPrecisionMaxValue()\n\n"},
  {"GetOutputPointsPrecision", PyvtkVolumeOfRevolutionFilter_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVolumeOfRevolutionFilter_Doc =
  "vtkVolumeOfRevolutionFilter - sweep data about a line to create a\nvolume\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkVolumeOfRevolutionFilter is a modeling filter. It takes a\n"
  "2-dimensional dataset as input and generates an unstructured grid on\n"
  "output. The input dataset is swept around the axis of rotation to\n"
  "create dimension-elevated primitives. For example, sweeping a vertex\n"
  "creates a series of lines; sweeping a line creates a series of quads,\n"
  "etc.\n\n"
  "@warning\n"
  "The user must take care to ensure that the axis of revolution does\n"
  "not cross through the geometry, otherwise there will be intersecting\n"
  "cells in the output.\n\n"
  "@sa\n"
  "vtkRotationalExtrusionFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVolumeOfRevolutionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkVolumeOfRevolutionFilter", // tp_name
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
  PyvtkVolumeOfRevolutionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVolumeOfRevolutionFilter_StaticNew()
{
  return vtkVolumeOfRevolutionFilter::New();
}

PyObject *PyvtkVolumeOfRevolutionFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVolumeOfRevolutionFilter_Type, PyvtkVolumeOfRevolutionFilter_Methods,
    "vtkVolumeOfRevolutionFilter",
 &PyvtkVolumeOfRevolutionFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVolumeOfRevolutionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVolumeOfRevolutionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVolumeOfRevolutionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

