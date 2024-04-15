// python wrapper for vtkTreeLayoutStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTreeLayoutStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTreeLayoutStrategy(PyObject *dict); }
extern "C" { PyObject *PyvtkTreeLayoutStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkGraphLayoutStrategy_ClassNew
extern "C" { PyObject *PyvtkGraphLayoutStrategy_ClassNew(); }
#define DECLARED_PyvtkGraphLayoutStrategy_ClassNew
#endif

static PyObject *
PyvtkTreeLayoutStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTreeLayoutStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeLayoutStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTreeLayoutStrategy *tempr = vtkTreeLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTreeLayoutStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeLayoutStrategy::NewInstance());

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
PyvtkTreeLayoutStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTreeLayoutStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTreeLayoutStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Layout();
    }
    else
    {
      op->vtkTreeLayoutStrategy::Layout();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngle(temp0);
    }
    else
    {
      op->vtkTreeLayoutStrategy::SetAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleMinValue() :
      op->vtkTreeLayoutStrategy::GetAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleMaxValue() :
      op->vtkTreeLayoutStrategy::GetAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkTreeLayoutStrategy::GetAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_SetRadial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadial(temp0);
    }
    else
    {
      op->vtkTreeLayoutStrategy::SetRadial(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetRadial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRadial() :
      op->vtkTreeLayoutStrategy::GetRadial());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_RadialOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RadialOn();
    }
    else
    {
      op->vtkTreeLayoutStrategy::RadialOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_RadialOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RadialOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RadialOff();
    }
    else
    {
      op->vtkTreeLayoutStrategy::RadialOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_SetLogSpacingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogSpacingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLogSpacingValue(temp0);
    }
    else
    {
      op->vtkTreeLayoutStrategy::SetLogSpacingValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetLogSpacingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogSpacingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLogSpacingValue() :
      op->vtkTreeLayoutStrategy::GetLogSpacingValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_SetLeafSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeafSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeafSpacing(temp0);
    }
    else
    {
      op->vtkTreeLayoutStrategy::SetLeafSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetLeafSpacingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafSpacingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLeafSpacingMinValue() :
      op->vtkTreeLayoutStrategy::GetLeafSpacingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetLeafSpacingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafSpacingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLeafSpacingMaxValue() :
      op->vtkTreeLayoutStrategy::GetLeafSpacingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetLeafSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLeafSpacing() :
      op->vtkTreeLayoutStrategy::GetLeafSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_SetDistanceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceArrayName(temp0);
    }
    else
    {
      op->vtkTreeLayoutStrategy::SetDistanceArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetDistanceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDistanceArrayName() :
      op->vtkTreeLayoutStrategy::GetDistanceArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_SetRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotation(temp0);
    }
    else
    {
      op->vtkTreeLayoutStrategy::SetRotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotation() :
      op->vtkTreeLayoutStrategy::GetRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_SetReverseEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReverseEdges(temp0);
    }
    else
    {
      op->vtkTreeLayoutStrategy::SetReverseEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_GetReverseEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReverseEdges() :
      op->vtkTreeLayoutStrategy::GetReverseEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_ReverseEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseEdgesOn();
    }
    else
    {
      op->vtkTreeLayoutStrategy::ReverseEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeLayoutStrategy_ReverseEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeLayoutStrategy *op = static_cast<vtkTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseEdgesOff();
    }
    else
    {
      op->vtkTreeLayoutStrategy::ReverseEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTreeLayoutStrategy_Methods[] = {
  {"IsTypeOf", PyvtkTreeLayoutStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTreeLayoutStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTreeLayoutStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTreeLayoutStrategy\nC++: static vtkTreeLayoutStrategy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTreeLayoutStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTreeLayoutStrategy\nC++: vtkTreeLayoutStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTreeLayoutStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTreeLayoutStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Layout", PyvtkTreeLayoutStrategy_Layout, METH_VARARGS,
   "Layout(self) -> None\nC++: void Layout() override;\n\nPerform the tree layout.\n"},
  {"SetAngle", PyvtkTreeLayoutStrategy_SetAngle, METH_VARARGS,
   "SetAngle(self, _arg:float) -> None\nC++: virtual void SetAngle(double _arg)\n\nThe sweep angle of the tree. For a standard tree layout, this\nshould be between 0 and 180. For a radial tree layout, this can\nbe between 0 and 360.\n"},
  {"GetAngleMinValue", PyvtkTreeLayoutStrategy_GetAngleMinValue, METH_VARARGS,
   "GetAngleMinValue(self) -> float\nC++: virtual double GetAngleMinValue()\n\n"},
  {"GetAngleMaxValue", PyvtkTreeLayoutStrategy_GetAngleMaxValue, METH_VARARGS,
   "GetAngleMaxValue(self) -> float\nC++: virtual double GetAngleMaxValue()\n\n"},
  {"GetAngle", PyvtkTreeLayoutStrategy_GetAngle, METH_VARARGS,
   "GetAngle(self) -> float\nC++: virtual double GetAngle()\n\n"},
  {"SetRadial", PyvtkTreeLayoutStrategy_SetRadial, METH_VARARGS,
   "SetRadial(self, _arg:bool) -> None\nC++: virtual void SetRadial(bool _arg)\n\nIf set, the tree is laid out with levels on concentric circles\naround the root. If unset (default), the tree is laid out with\nlevels on horizontal lines.\n"},
  {"GetRadial", PyvtkTreeLayoutStrategy_GetRadial, METH_VARARGS,
   "GetRadial(self) -> bool\nC++: virtual bool GetRadial()\n\n"},
  {"RadialOn", PyvtkTreeLayoutStrategy_RadialOn, METH_VARARGS,
   "RadialOn(self) -> None\nC++: virtual void RadialOn()\n\n"},
  {"RadialOff", PyvtkTreeLayoutStrategy_RadialOff, METH_VARARGS,
   "RadialOff(self) -> None\nC++: virtual void RadialOff()\n\n"},
  {"SetLogSpacingValue", PyvtkTreeLayoutStrategy_SetLogSpacingValue, METH_VARARGS,
   "SetLogSpacingValue(self, _arg:float) -> None\nC++: virtual void SetLogSpacingValue(double _arg)\n\nThe spacing of tree levels. Levels near zero give more space to\nlevels near the root, while levels near one (the default) create\nevenly-spaced levels. Levels above one give more space to levels\nnear the leaves.\n"},
  {"GetLogSpacingValue", PyvtkTreeLayoutStrategy_GetLogSpacingValue, METH_VARARGS,
   "GetLogSpacingValue(self) -> float\nC++: virtual double GetLogSpacingValue()\n\n"},
  {"SetLeafSpacing", PyvtkTreeLayoutStrategy_SetLeafSpacing, METH_VARARGS,
   "SetLeafSpacing(self, _arg:float) -> None\nC++: virtual void SetLeafSpacing(double _arg)\n\nThe spacing of leaves.  Levels near one evenly space leaves with\nno gaps between subtrees.  Levels near zero creates large gaps\nbetween subtrees.\n"},
  {"GetLeafSpacingMinValue", PyvtkTreeLayoutStrategy_GetLeafSpacingMinValue, METH_VARARGS,
   "GetLeafSpacingMinValue(self) -> float\nC++: virtual double GetLeafSpacingMinValue()\n\n"},
  {"GetLeafSpacingMaxValue", PyvtkTreeLayoutStrategy_GetLeafSpacingMaxValue, METH_VARARGS,
   "GetLeafSpacingMaxValue(self) -> float\nC++: virtual double GetLeafSpacingMaxValue()\n\n"},
  {"GetLeafSpacing", PyvtkTreeLayoutStrategy_GetLeafSpacing, METH_VARARGS,
   "GetLeafSpacing(self) -> float\nC++: virtual double GetLeafSpacing()\n\n"},
  {"SetDistanceArrayName", PyvtkTreeLayoutStrategy_SetDistanceArrayName, METH_VARARGS,
   "SetDistanceArrayName(self, _arg:str) -> None\nC++: virtual void SetDistanceArrayName(const char *_arg)\n\nGet/Set the array to use to determine the distance from the root.\n"},
  {"GetDistanceArrayName", PyvtkTreeLayoutStrategy_GetDistanceArrayName, METH_VARARGS,
   "GetDistanceArrayName(self) -> str\nC++: virtual char *GetDistanceArrayName()\n\n"},
  {"SetRotation", PyvtkTreeLayoutStrategy_SetRotation, METH_VARARGS,
   "SetRotation(self, _arg:float) -> None\nC++: virtual void SetRotation(double _arg)\n\nThe amount of counter-clockwise rotation to apply after the\nlayout.\n"},
  {"GetRotation", PyvtkTreeLayoutStrategy_GetRotation, METH_VARARGS,
   "GetRotation(self) -> float\nC++: virtual double GetRotation()\n\n"},
  {"SetReverseEdges", PyvtkTreeLayoutStrategy_SetReverseEdges, METH_VARARGS,
   "SetReverseEdges(self, _arg:bool) -> None\nC++: virtual void SetReverseEdges(bool _arg)\n\nIf set and the input is not a tree but a general graph, the\nfilter will reverse the edges on the graph before extracting a\ntree using breadth first search.\n"},
  {"GetReverseEdges", PyvtkTreeLayoutStrategy_GetReverseEdges, METH_VARARGS,
   "GetReverseEdges(self) -> bool\nC++: virtual bool GetReverseEdges()\n\n"},
  {"ReverseEdgesOn", PyvtkTreeLayoutStrategy_ReverseEdgesOn, METH_VARARGS,
   "ReverseEdgesOn(self) -> None\nC++: virtual void ReverseEdgesOn()\n\n"},
  {"ReverseEdgesOff", PyvtkTreeLayoutStrategy_ReverseEdgesOff, METH_VARARGS,
   "ReverseEdgesOff(self) -> None\nC++: virtual void ReverseEdgesOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTreeLayoutStrategy_Doc =
  "vtkTreeLayoutStrategy - hierarchical layout\n\n"
  "Superclass: vtkGraphLayoutStrategy\n\n"
  "Assigns points to the nodes of a tree in either a standard or radial\n"
  "layout. The standard layout places each level on a horizontal line,\n"
  "while the radial layout places each level on a concentric circle. You\n"
  "may specify the sweep angle of the tree which constrains the tree to\n"
  "be contained within a wedge. Also, you may indicate the log scale of\n"
  "the tree, which diminishes the length of arcs at lower levels of the\n"
  "tree. Values near zero give a large proportion of the space to the\n"
  "tree levels near the root, while values near one give nearly equal\n"
  "proportions of space to all tree levels.\n\n"
  "The user may also specify an array to use to indicate the distance\n"
  "from the root, either vertically (for standard layout) or radially\n"
  "(for radial layout).  You specify this with SetDistanceArrayName().\n\n"
  "If the input is not a tree but a general graph, this strategy first\n"
  "extracts a tree from the graph using a breadth-first search starting\n"
  "at vertex ID 0.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTreeLayoutStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkTreeLayoutStrategy", // tp_name
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
  PyvtkTreeLayoutStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTreeLayoutStrategy_StaticNew()
{
  return vtkTreeLayoutStrategy::New();
}

PyObject *PyvtkTreeLayoutStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTreeLayoutStrategy_Type, PyvtkTreeLayoutStrategy_Methods,
    "vtkTreeLayoutStrategy",
 &PyvtkTreeLayoutStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGraphLayoutStrategy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTreeLayoutStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTreeLayoutStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTreeLayoutStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

