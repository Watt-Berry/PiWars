// python wrapper for vtkImplicitSelectionLoop
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImplicitSelectionLoop.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitSelectionLoop(PyObject *dict); }
extern "C" { PyObject *PyvtkImplicitSelectionLoop_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static PyObject *
PyvtkImplicitSelectionLoop_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitSelectionLoop::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitSelectionLoop::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitSelectionLoop *tempr = vtkImplicitSelectionLoop::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitSelectionLoop *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitSelectionLoop::NewInstance());

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
PyvtkImplicitSelectionLoop_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImplicitSelectionLoop::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImplicitSelectionLoop::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

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
      op->vtkImplicitSelectionLoop::EvaluateFunction(temp0));

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
PyvtkImplicitSelectionLoop_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

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
      op->vtkImplicitSelectionLoop::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitSelectionLoop_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

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
      op->vtkImplicitSelectionLoop::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitSelectionLoop_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImplicitSelectionLoop_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkImplicitSelectionLoop_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkImplicitSelectionLoop_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}


static PyObject *
PyvtkImplicitSelectionLoop_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

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
      op->vtkImplicitSelectionLoop::EvaluateGradient(temp0, temp1);
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
PyvtkImplicitSelectionLoop_SetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetLoop(temp0);
    }
    else
    {
      op->vtkImplicitSelectionLoop::SetLoop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_GetLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetLoop() :
      op->vtkImplicitSelectionLoop::GetLoop());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_SetAutomaticNormalGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticNormalGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticNormalGeneration(temp0);
    }
    else
    {
      op->vtkImplicitSelectionLoop::SetAutomaticNormalGeneration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_GetAutomaticNormalGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticNormalGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticNormalGeneration() :
      op->vtkImplicitSelectionLoop::GetAutomaticNormalGeneration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_AutomaticNormalGenerationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticNormalGenerationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticNormalGenerationOn();
    }
    else
    {
      op->vtkImplicitSelectionLoop::AutomaticNormalGenerationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_AutomaticNormalGenerationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticNormalGenerationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticNormalGenerationOff();
    }
    else
    {
      op->vtkImplicitSelectionLoop::AutomaticNormalGenerationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImplicitSelectionLoop::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitSelectionLoop_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkImplicitSelectionLoop::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitSelectionLoop_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitSelectionLoop_SetNormal_s1(self, args);
    case 1:
      return PyvtkImplicitSelectionLoop_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}


static PyObject *
PyvtkImplicitSelectionLoop_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkImplicitSelectionLoop::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSelectionLoop_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSelectionLoop *op = static_cast<vtkImplicitSelectionLoop *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImplicitSelectionLoop::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitSelectionLoop_Methods[] = {
  {"IsTypeOf", PyvtkImplicitSelectionLoop_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitSelectionLoop_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitSelectionLoop_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImplicitSelectionLoop\nC++: static vtkImplicitSelectionLoop *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitSelectionLoop_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImplicitSelectionLoop\nC++: vtkImplicitSelectionLoop *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImplicitSelectionLoop_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImplicitSelectionLoop_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"EvaluateFunction", PyvtkImplicitSelectionLoop_EvaluateFunction, METH_VARARGS,
   "EvaluateFunction(self, x:[float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nEvaluateFunction(self, input:vtkDataArray, output:vtkDataArray)\n    -> None\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nEvaluateFunction(self, x:float, y:float, z:float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate function at position x-y-z and return value.  You should\ngenerally not call this method directly, you should use\nFunctionValue() instead.  This method must be implemented by any\nderived class.\n"},
  {"EvaluateGradient", PyvtkImplicitSelectionLoop_EvaluateGradient, METH_VARARGS,
   "EvaluateGradient(self, x:[float, float, float], n:[float, float,\n    float]) -> None\nC++: void EvaluateGradient(double x[3], double n[3]) override;\n\nEvaluate selection loop returning the gradient.\n"},
  {"SetLoop", PyvtkImplicitSelectionLoop_SetLoop, METH_VARARGS,
   "SetLoop(self, __a:vtkPoints) -> None\nC++: virtual void SetLoop(vtkPoints *)\n\nSet/Get the array of point coordinates defining the loop. There\nmust be at least three points used to define a loop.\n"},
  {"GetLoop", PyvtkImplicitSelectionLoop_GetLoop, METH_VARARGS,
   "GetLoop(self) -> vtkPoints\nC++: virtual vtkPoints *GetLoop()\n\n"},
  {"SetAutomaticNormalGeneration", PyvtkImplicitSelectionLoop_SetAutomaticNormalGeneration, METH_VARARGS,
   "SetAutomaticNormalGeneration(self, _arg:int) -> None\nC++: virtual void SetAutomaticNormalGeneration(vtkTypeBool _arg)\n\nTurn on/off automatic normal generation. By default, the normal\nis computed from the accumulated cross product of the edges. You\ncan also specify the normal to use.\n"},
  {"GetAutomaticNormalGeneration", PyvtkImplicitSelectionLoop_GetAutomaticNormalGeneration, METH_VARARGS,
   "GetAutomaticNormalGeneration(self) -> int\nC++: virtual vtkTypeBool GetAutomaticNormalGeneration()\n\n"},
  {"AutomaticNormalGenerationOn", PyvtkImplicitSelectionLoop_AutomaticNormalGenerationOn, METH_VARARGS,
   "AutomaticNormalGenerationOn(self) -> None\nC++: virtual void AutomaticNormalGenerationOn()\n\n"},
  {"AutomaticNormalGenerationOff", PyvtkImplicitSelectionLoop_AutomaticNormalGenerationOff, METH_VARARGS,
   "AutomaticNormalGenerationOff(self) -> None\nC++: virtual void AutomaticNormalGenerationOff()\n\n"},
  {"SetNormal", PyvtkImplicitSelectionLoop_SetNormal, METH_VARARGS,
   "SetNormal(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetNormal(double _arg1, double _arg2,\n    double _arg3)\nSetNormal(self, _arg:(float, float, float)) -> None\nC++: virtual void SetNormal(const double _arg[3])\n\nSet / get the normal used to determine whether a point is inside\nor outside the selection loop.\n"},
  {"GetNormal", PyvtkImplicitSelectionLoop_GetNormal, METH_VARARGS,
   "GetNormal(self) -> (float, float, float)\nC++: virtual double *GetNormal()\n\n"},
  {"GetMTime", PyvtkImplicitSelectionLoop_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverload GetMTime() because we depend on the Loop\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImplicitSelectionLoop_Doc =
  "vtkImplicitSelectionLoop - implicit function for a selection loop\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "vtkImplicitSelectionLoop computes the implicit function value and\n"
  "function gradient for an irregular, cylinder-like object whose cross\n"
  "section is defined by a set of points forming a loop. The loop need\n"
  "not be convex nor its points coplanar. However, the loop must be\n"
  "non-self-intersecting when projected onto the plane defined by the\n"
  "accumulated cross product around the loop (i.e., the axis of the\n"
  "loop). (Alternatively, you can specify the normal to use.)\n\n"
  "The following procedure is used to compute the implicit function\n"
  "value for a point x. Each point of the loop is first projected onto\n"
  "the plane defined by the loop normal. This forms a polygon. Then, to\n"
  "evaluate the implicit function value, inside/outside tests are used\n"
  "to determine if x is inside the polygon, and the distance to the loop\n"
  "boundary is computed (negative values are inside the loop).\n\n"
  "One example application of this implicit function class is to draw a\n"
  "loop on the surface of a mesh, and use the loop to clip or extract\n"
  "cells from within the loop. Remember, the selection loop is\n"
  "\"infinite\" in length, you can use a plane (in boolean combination) to\n"
  "cap the extent of the selection loop. Another trick is to use a\n"
  "connectivity filter to extract the closest region to a given point\n"
  "(i.e., one of the points used to define the selection loop).\n\n"
  "@sa\n"
  "vtkImplicitFunction vtkImplicitBoolean vtkExtractGeometry\n"
  "vtkClipPolyData vtkConnectivityFilter vtkPolyDataConnectivityFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitSelectionLoop_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkImplicitSelectionLoop", // tp_name
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
  PyvtkImplicitSelectionLoop_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitSelectionLoop_StaticNew()
{
  return vtkImplicitSelectionLoop::New();
}

PyObject *PyvtkImplicitSelectionLoop_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImplicitSelectionLoop_Type, PyvtkImplicitSelectionLoop_Methods,
    "vtkImplicitSelectionLoop",
 &PyvtkImplicitSelectionLoop_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImplicitFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitSelectionLoop(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitSelectionLoop_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitSelectionLoop", o) != 0)
  {
    Py_DECREF(o);
  }

}

