// python wrapper for vtkCoordinateFrame
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCoordinateFrame.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCoordinateFrame(PyObject *dict); }
extern "C" { PyObject *PyvtkCoordinateFrame_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static PyObject *
PyvtkCoordinateFrame_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCoordinateFrame::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrame_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCoordinateFrame::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrame_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCoordinateFrame *tempr = vtkCoordinateFrame::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrame_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinateFrame *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCoordinateFrame::NewInstance());

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
PyvtkCoordinateFrame_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCoordinateFrame::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrame_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCoordinateFrame::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrame_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0) :
      op->vtkCoordinateFrame::EvaluateFunction(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrame_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->EvaluateFunction(temp0, temp1);
    }
    else
    {
      op->vtkCoordinateFrame::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrame_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0, temp1, temp2) :
      op->vtkCoordinateFrame::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrame_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCoordinateFrame_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkCoordinateFrame_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkCoordinateFrame_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}


static PyObject *
PyvtkCoordinateFrame_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
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
      op->EvaluateGradient(temp0, temp1);
    }
    else
    {
      op->vtkCoordinateFrame::EvaluateGradient(temp0, temp1);
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
PyvtkCoordinateFrame_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCoordinateFrame::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrame_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkCoordinateFrame::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrame_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCoordinateFrame_SetOrigin_s1(self, args);
    case 1:
      return PyvtkCoordinateFrame_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkCoordinateFrame_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkCoordinateFrame::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrame_SetXAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

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
      op->SetXAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCoordinateFrame::SetXAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrame_SetXAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetXAxis(temp0);
    }
    else
    {
      op->vtkCoordinateFrame::SetXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrame_SetXAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCoordinateFrame_SetXAxis_s1(self, args);
    case 1:
      return PyvtkCoordinateFrame_SetXAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXAxis");
  return nullptr;
}


static PyObject *
PyvtkCoordinateFrame_GetXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetXAxis() :
      op->vtkCoordinateFrame::GetXAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrame_SetYAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

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
      op->SetYAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCoordinateFrame::SetYAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrame_SetYAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetYAxis(temp0);
    }
    else
    {
      op->vtkCoordinateFrame::SetYAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrame_SetYAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCoordinateFrame_SetYAxis_s1(self, args);
    case 1:
      return PyvtkCoordinateFrame_SetYAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetYAxis");
  return nullptr;
}


static PyObject *
PyvtkCoordinateFrame_GetYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetYAxis() :
      op->vtkCoordinateFrame::GetYAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrame_SetZAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

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
      op->SetZAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCoordinateFrame::SetZAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrame_SetZAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetZAxis(temp0);
    }
    else
    {
      op->vtkCoordinateFrame::SetZAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinateFrame_SetZAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCoordinateFrame_SetZAxis_s1(self, args);
    case 1:
      return PyvtkCoordinateFrame_SetZAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZAxis");
  return nullptr;
}


static PyObject *
PyvtkCoordinateFrame_GetZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrame *op = static_cast<vtkCoordinateFrame *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetZAxis() :
      op->vtkCoordinateFrame::GetZAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkCoordinateFrame_Methods[] = {
  {"IsTypeOf", PyvtkCoordinateFrame_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCoordinateFrame_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCoordinateFrame_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCoordinateFrame\nC++: static vtkCoordinateFrame *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCoordinateFrame_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCoordinateFrame\nC++: vtkCoordinateFrame *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCoordinateFrame_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCoordinateFrame_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"EvaluateFunction", PyvtkCoordinateFrame_EvaluateFunction, METH_VARARGS,
   "EvaluateFunction(self, x:[float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nEvaluateFunction(self, input:vtkDataArray, output:vtkDataArray)\n    -> None\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nEvaluateFunction(self, x:float, y:float, z:float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate function at position x-y-z and return value.  You should\ngenerally not call this method directly, you should use\nFunctionValue() instead.  This method must be implemented by any\nderived class.\n"},
  {"EvaluateGradient", PyvtkCoordinateFrame_EvaluateGradient, METH_VARARGS,
   "EvaluateGradient(self, x:[float, float, float], n:[float, float,\n    float]) -> None\nC++: void EvaluateGradient(double x[3], double n[3]) override;\n\nEvaluate coordinate frame gradient.\n\nn is the output gradient evaluated at point x.\n"},
  {"SetOrigin", PyvtkCoordinateFrame_SetOrigin, METH_VARARGS,
   "SetOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOrigin(const double _arg[3])\n\nSpecify the point through which all 3 planes pass.\n"},
  {"GetOrigin", PyvtkCoordinateFrame_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetXAxis", PyvtkCoordinateFrame_SetXAxis, METH_VARARGS,
   "SetXAxis(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetXAxis(double _arg1, double _arg2,\n    double _arg3)\nSetXAxis(self, _arg:(float, float, float)) -> None\nC++: virtual void SetXAxis(const double _arg[3])\n\nSpecify a list of unit-length normal vectors for each plane.\n"},
  {"GetXAxis", PyvtkCoordinateFrame_GetXAxis, METH_VARARGS,
   "GetXAxis(self) -> (float, float, float)\nC++: virtual double *GetXAxis()\n\n"},
  {"SetYAxis", PyvtkCoordinateFrame_SetYAxis, METH_VARARGS,
   "SetYAxis(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetYAxis(double _arg1, double _arg2,\n    double _arg3)\nSetYAxis(self, _arg:(float, float, float)) -> None\nC++: virtual void SetYAxis(const double _arg[3])\n\n"},
  {"GetYAxis", PyvtkCoordinateFrame_GetYAxis, METH_VARARGS,
   "GetYAxis(self) -> (float, float, float)\nC++: virtual double *GetYAxis()\n\n"},
  {"SetZAxis", PyvtkCoordinateFrame_SetZAxis, METH_VARARGS,
   "SetZAxis(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetZAxis(double _arg1, double _arg2,\n    double _arg3)\nSetZAxis(self, _arg:(float, float, float)) -> None\nC++: virtual void SetZAxis(const double _arg[3])\n\n"},
  {"GetZAxis", PyvtkCoordinateFrame_GetZAxis, METH_VARARGS,
   "GetZAxis(self) -> (float, float, float)\nC++: virtual double *GetZAxis()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCoordinateFrame_Doc =
  "vtkCoordinateFrame - implicit function for a right-handed coordinate\nsystem\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "vtkCoordinateFrame computes an implicit function and function\n"
  "gradient for a set of 3 orthogonal planes.\n\n"
  "The function evaluates to a combination of quartic spherical harmonic\n"
  "basis functions:$\\sqrt(\\frac{7}{12})*Y_{4,0} +\n"
  "\\sqrt(\\frac{5}{12})*Y_{4,4} $ that \342\200\223 when evaluated on a unit\n"
  "sphere centered at the coordinate frame's origin \342\200\223 form a 6-lobed\n"
  "function with a maximum along each of the 6 axes (3 positive, 3\n"
  "negative). This function is frequently used in frame-field design.\n\n"
  "See the paper \"On Smooth Frame Field Design\" by Nicolas Ray and\n"
  "Dmitry Sokolov (2016, hal-01245657,\n"
  "https://hal.inria.fr/hal-01245657/file/framefield.pdf ) for more\n"
  "information.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCoordinateFrame_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCoordinateFrame", // tp_name
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
  PyvtkCoordinateFrame_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCoordinateFrame_StaticNew()
{
  return vtkCoordinateFrame::New();
}

PyObject *PyvtkCoordinateFrame_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCoordinateFrame_Type, PyvtkCoordinateFrame_Methods,
    "vtkCoordinateFrame",
 &PyvtkCoordinateFrame_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImplicitFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCoordinateFrame(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCoordinateFrame_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCoordinateFrame", o) != 0)
  {
    Py_DECREF(o);
  }

}

