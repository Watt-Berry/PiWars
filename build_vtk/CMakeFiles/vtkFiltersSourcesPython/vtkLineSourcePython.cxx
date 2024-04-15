// python wrapper for vtkLineSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLineSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLineSource(PyObject *dict); }
extern "C" { PyObject *PyvtkLineSource_ClassNew(); }


static PyObject *
PyvtkLineSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLineSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLineSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLineSource *tempr = vtkLineSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLineSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLineSource::NewInstance());

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
PyvtkLineSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLineSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLineSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLineSource::SetPoint1(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLineSource_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint1(temp0);
    }
    else
    {
      op->vtkLineSource::SetPoint1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLineSource_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLineSource_SetPoint1_s1(self, args);
    case 1:
      return PyvtkLineSource_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}


static PyObject *
PyvtkLineSource_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkLineSource::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLineSource::SetPoint2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLineSource_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint2(temp0);
    }
    else
    {
      op->vtkLineSource::SetPoint2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLineSource_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLineSource_SetPoint2_s1(self, args);
    case 1:
      return PyvtkLineSource_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}


static PyObject *
PyvtkLineSource_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkLineSource::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_SetUseRegularRefinement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRegularRefinement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRegularRefinement(temp0);
    }
    else
    {
      op->vtkLineSource::SetUseRegularRefinement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_GetUseRegularRefinement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRegularRefinement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseRegularRefinement() :
      op->vtkLineSource::GetUseRegularRefinement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_UseRegularRefinementOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRegularRefinementOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRegularRefinementOn();
    }
    else
    {
      op->vtkLineSource::UseRegularRefinementOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_UseRegularRefinementOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRegularRefinementOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRegularRefinementOff();
    }
    else
    {
      op->vtkLineSource::UseRegularRefinementOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

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
      op->vtkLineSource::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkLineSource::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkLineSource::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkLineSource::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_SetNumberOfRefinementRatios(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRefinementRatios");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfRefinementRatios(temp0);
    }
    else
    {
      op->vtkLineSource::SetNumberOfRefinementRatios(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_SetRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRefinementRatio(temp0, temp1);
    }
    else
    {
      op->vtkLineSource::SetRefinementRatio(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_GetNumberOfRefinementRatios(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRefinementRatios");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRefinementRatios() :
      op->vtkLineSource::GetNumberOfRefinementRatios());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_GetRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRefinementRatio(temp0) :
      op->vtkLineSource::GetRefinementRatio(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetPoints(temp0);
    }
    else
    {
      op->vtkLineSource::SetPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkLineSource::GetPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

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
      op->vtkLineSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkLineSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLineSource_Methods[] = {
  {"IsTypeOf", PyvtkLineSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLineSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLineSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLineSource\nC++: static vtkLineSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLineSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLineSource\nC++: vtkLineSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLineSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLineSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPoint1", PyvtkLineSource_SetPoint1, METH_VARARGS,
   "SetPoint1(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetPoint1(double _arg1, double _arg2,\n    double _arg3)\nSetPoint1(self, _arg:(float, float, float)) -> None\nC++: virtual void SetPoint1(const double _arg[3])\n\nSet position of first end point.\n"},
  {"GetPoint1", PyvtkLineSource_GetPoint1, METH_VARARGS,
   "GetPoint1(self) -> (float, float, float)\nC++: virtual double *GetPoint1()\n\n"},
  {"SetPoint2", PyvtkLineSource_SetPoint2, METH_VARARGS,
   "SetPoint2(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetPoint2(double _arg1, double _arg2,\n    double _arg3)\nSetPoint2(self, _arg:(float, float, float)) -> None\nC++: virtual void SetPoint2(const double _arg[3])\n\nSet position of other end point.\n"},
  {"GetPoint2", PyvtkLineSource_GetPoint2, METH_VARARGS,
   "GetPoint2(self) -> (float, float, float)\nC++: virtual double *GetPoint2()\n\n"},
  {"SetUseRegularRefinement", PyvtkLineSource_SetUseRegularRefinement, METH_VARARGS,
   "SetUseRegularRefinement(self, _arg:bool) -> None\nC++: virtual void SetUseRegularRefinement(bool _arg)\n\nSet/Get how the line segment is to be refined. One can choose to\nadd points at regular intervals per segment (defined using\n`Resolution`) or explicit locations (defined using\n`SetRefinementRatio`). Default is true i.e `Resolution` will be\nused to determine placement of points within each line segment.\n"},
  {"GetUseRegularRefinement", PyvtkLineSource_GetUseRegularRefinement, METH_VARARGS,
   "GetUseRegularRefinement(self) -> bool\nC++: virtual bool GetUseRegularRefinement()\n\n"},
  {"UseRegularRefinementOn", PyvtkLineSource_UseRegularRefinementOn, METH_VARARGS,
   "UseRegularRefinementOn(self) -> None\nC++: virtual void UseRegularRefinementOn()\n\n"},
  {"UseRegularRefinementOff", PyvtkLineSource_UseRegularRefinementOff, METH_VARARGS,
   "UseRegularRefinementOff(self) -> None\nC++: virtual void UseRegularRefinementOff()\n\n"},
  {"SetResolution", PyvtkLineSource_SetResolution, METH_VARARGS,
   "SetResolution(self, _arg:int) -> None\nC++: virtual void SetResolution(int _arg)\n\nDivide line into Resolution number of pieces. This is used when\n`UseRegularRefinement` is true.\n"},
  {"GetResolutionMinValue", PyvtkLineSource_GetResolutionMinValue, METH_VARARGS,
   "GetResolutionMinValue(self) -> int\nC++: virtual int GetResolutionMinValue()\n\n"},
  {"GetResolutionMaxValue", PyvtkLineSource_GetResolutionMaxValue, METH_VARARGS,
   "GetResolutionMaxValue(self) -> int\nC++: virtual int GetResolutionMaxValue()\n\n"},
  {"GetResolution", PyvtkLineSource_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual int GetResolution()\n\n"},
  {"SetNumberOfRefinementRatios", PyvtkLineSource_SetNumberOfRefinementRatios, METH_VARARGS,
   "SetNumberOfRefinementRatios(self, __a:int) -> None\nC++: void SetNumberOfRefinementRatios(int)\n\nAPI for setting/getting refinement ratios for points added to the\nline segment. The ratio is in the range `[0.0, 1.0]` where 0.0 is\nthe start of the line segment and 1.0 is the end. When generating\nbroken lines i.e. using `SetPoints`, this specifies refinement\npoints for each of the individual line segment. Note that `0.0`\nand `1.0` must be explicitly included to generate a point and the\nstart and/or end of the line segment. This is used only when\n`UseRegularRefinement` is false.\n"},
  {"SetRefinementRatio", PyvtkLineSource_SetRefinementRatio, METH_VARARGS,
   "SetRefinementRatio(self, index:int, value:float) -> None\nC++: void SetRefinementRatio(int index, double value)\n\n"},
  {"GetNumberOfRefinementRatios", PyvtkLineSource_GetNumberOfRefinementRatios, METH_VARARGS,
   "GetNumberOfRefinementRatios(self) -> int\nC++: int GetNumberOfRefinementRatios()\n\n"},
  {"GetRefinementRatio", PyvtkLineSource_GetRefinementRatio, METH_VARARGS,
   "GetRefinementRatio(self, index:int) -> float\nC++: double GetRefinementRatio(int index)\n\n"},
  {"SetPoints", PyvtkLineSource_SetPoints, METH_VARARGS,
   "SetPoints(self, __a:vtkPoints) -> None\nC++: virtual void SetPoints(vtkPoints *)\n\nSet/Get the list of points defining a broken line\n"},
  {"GetPoints", PyvtkLineSource_GetPoints, METH_VARARGS,
   "GetPoints(self) -> vtkPoints\nC++: virtual vtkPoints *GetPoints()\n\n"},
  {"SetOutputPointsPrecision", PyvtkLineSource_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkLineSource_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLineSource_Doc =
  "vtkLineSource - create a line defined by two end points\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkLineSource is a source object that creates a polyline defined by\n"
  "two endpoints or a collection of connected line segments. To define\n"
  "the line by end points, use `SetPoint1` and `SetPoint2` methods. To\n"
  "define a broken line comprising of multiple line segments, use\n"
  "`SetPoints` to provide the corner points that for the line.\n\n"
  "Intermediate points within line segment (when specifying end points\n"
  "alone) or each of the individual line segments (when specifying\n"
  "broken line) can be specified in two ways. First, when\n"
  "`UseRegularRefinement` is true (default), the `Resolution` is used to\n"
  "determine how many intermediate points to add using regular\n"
  "refinement. Thus, if `Resolution` is set to 1, a mid point will be\n"
  "added for each of the line segments resulting in a line with 3\n"
  "points: the two end points and the mid point. Second, when\n"
  "`UseRegularRefinement` is false, refinement ratios for points per\n"
  "segment are specified using `SetRefinementRatio` and\n"
  "`SetNumberOfRefinementRatios`. To generate same points as\n"
  "`Resolution` set to 1, the refinement ratios will be `[0, 0.5, 1.0]`.\n"
  "To add the end points of the line segment `0.0` and `1.0` must be\n"
  "included in the collection of refinement ratios.\n\n"
  "@section ChangesVTK9 Changes in VTK 9.0\n\n"
  "Prior to VTK 9.0, when broken line was being generated, the texture\n"
  "coordinates for each of the individual breaks in the line ranged from\n"
  "[0.0, 1.0]. This has been changed to generate texture coordinates in\n"
  "the range [0.0, 1.0] over the entire output line irrespective of\n"
  "whether the line was generated by simply specifying the end points or\n"
  "multiple line segments.\n\n"
  "@par Thanks: This class was extended by Philippe Pebay, Kitware SAS\n"
  "2011, to support broken lines as well as simple lines.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLineSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkLineSource", // tp_name
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
  PyvtkLineSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLineSource_StaticNew()
{
  return vtkLineSource::New();
}

PyObject *PyvtkLineSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLineSource_Type, PyvtkLineSource_Methods,
    "vtkLineSource",
 &PyvtkLineSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLineSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLineSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLineSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

