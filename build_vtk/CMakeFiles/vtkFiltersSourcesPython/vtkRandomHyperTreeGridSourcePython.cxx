// python wrapper for vtkRandomHyperTreeGridSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRandomHyperTreeGridSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRandomHyperTreeGridSource(PyObject *dict); }
extern "C" { PyObject *PyvtkRandomHyperTreeGridSource_ClassNew(); }


static PyObject *
PyvtkRandomHyperTreeGridSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRandomHyperTreeGridSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRandomHyperTreeGridSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRandomHyperTreeGridSource *tempr = vtkRandomHyperTreeGridSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRandomHyperTreeGridSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRandomHyperTreeGridSource::NewInstance());

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
PyvtkRandomHyperTreeGridSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRandomHyperTreeGridSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRandomHyperTreeGridSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkRandomHyperTreeGridSource::GetDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRandomHyperTreeGridSource::SetDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRandomHyperTreeGridSource_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  const size_t size0 = 3;
  unsigned int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0);
    }
    else
    {
      op->vtkRandomHyperTreeGridSource::SetDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRandomHyperTreeGridSource_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRandomHyperTreeGridSource_SetDimensions_s1(self, args);
    case 1:
      return PyvtkRandomHyperTreeGridSource_SetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return nullptr;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_GetOutputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutputBounds() :
      op->vtkRandomHyperTreeGridSource::GetOutputBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_SetOutputBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetOutputBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkRandomHyperTreeGridSource::SetOutputBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRandomHyperTreeGridSource_SetOutputBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputBounds(temp0);
    }
    else
    {
      op->vtkRandomHyperTreeGridSource::SetOutputBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRandomHyperTreeGridSource_SetOutputBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkRandomHyperTreeGridSource_SetOutputBounds_s1(self, args);
    case 1:
      return PyvtkRandomHyperTreeGridSource_SetOutputBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputBounds");
  return nullptr;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_GetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSeed() :
      op->vtkRandomHyperTreeGridSource::GetSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_SetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeed(temp0);
    }
    else
    {
      op->vtkRandomHyperTreeGridSource::SetSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_GetMaxDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaxDepth() :
      op->vtkRandomHyperTreeGridSource::GetMaxDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_SetMaxDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxDepth(temp0);
    }
    else
    {
      op->vtkRandomHyperTreeGridSource::SetMaxDepth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_GetMaxDepthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDepthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaxDepthMinValue() :
      op->vtkRandomHyperTreeGridSource::GetMaxDepthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_GetMaxDepthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDepthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaxDepthMaxValue() :
      op->vtkRandomHyperTreeGridSource::GetMaxDepthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_GetSplitFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSplitFraction() :
      op->vtkRandomHyperTreeGridSource::GetSplitFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_SetSplitFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSplitFraction(temp0);
    }
    else
    {
      op->vtkRandomHyperTreeGridSource::SetSplitFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_GetSplitFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSplitFractionMinValue() :
      op->vtkRandomHyperTreeGridSource::GetSplitFractionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomHyperTreeGridSource_GetSplitFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomHyperTreeGridSource *op = static_cast<vtkRandomHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSplitFractionMaxValue() :
      op->vtkRandomHyperTreeGridSource::GetSplitFractionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRandomHyperTreeGridSource_Methods[] = {
  {"IsTypeOf", PyvtkRandomHyperTreeGridSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRandomHyperTreeGridSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRandomHyperTreeGridSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRandomHyperTreeGridSource\nC++: static vtkRandomHyperTreeGridSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRandomHyperTreeGridSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRandomHyperTreeGridSource\nC++: vtkRandomHyperTreeGridSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRandomHyperTreeGridSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRandomHyperTreeGridSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDimensions", PyvtkRandomHyperTreeGridSource_GetDimensions, METH_VARARGS,
   "GetDimensions(self) -> (int, int, int)\nC++: virtual unsigned int *GetDimensions()\n\n"},
  {"SetDimensions", PyvtkRandomHyperTreeGridSource_SetDimensions, METH_VARARGS,
   "SetDimensions(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetDimensions(unsigned int _arg1,\n    unsigned int _arg2, unsigned int _arg3)\nSetDimensions(self, _arg:(int, int, int)) -> None\nC++: virtual void SetDimensions(const unsigned int _arg[3])\n\n"},
  {"GetOutputBounds", PyvtkRandomHyperTreeGridSource_GetOutputBounds, METH_VARARGS,
   "GetOutputBounds(self) -> (float, float, float, float, float,\n    float)\nC++: virtual double *GetOutputBounds()\n\nThe bounds of the output vtkHyperTreeGrid. The default is {-10,\n10, -10, 10, -10, 10}.\n"},
  {"SetOutputBounds", PyvtkRandomHyperTreeGridSource_SetOutputBounds, METH_VARARGS,
   "SetOutputBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetOutputBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetOutputBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetOutputBounds(const double _arg[6])\n\n"},
  {"GetSeed", PyvtkRandomHyperTreeGridSource_GetSeed, METH_VARARGS,
   "GetSeed(self) -> int\nC++: virtual vtkTypeUInt32 GetSeed()\n\n"},
  {"SetSeed", PyvtkRandomHyperTreeGridSource_SetSeed, METH_VARARGS,
   "SetSeed(self, _arg:int) -> None\nC++: virtual void SetSeed(vtkTypeUInt32 _arg)\n\n"},
  {"GetMaxDepth", PyvtkRandomHyperTreeGridSource_GetMaxDepth, METH_VARARGS,
   "GetMaxDepth(self) -> int\nC++: virtual vtkIdType GetMaxDepth()\n\n"},
  {"SetMaxDepth", PyvtkRandomHyperTreeGridSource_SetMaxDepth, METH_VARARGS,
   "SetMaxDepth(self, _arg:int) -> None\nC++: virtual void SetMaxDepth(vtkIdType _arg)\n\n"},
  {"GetMaxDepthMinValue", PyvtkRandomHyperTreeGridSource_GetMaxDepthMinValue, METH_VARARGS,
   "GetMaxDepthMinValue(self) -> int\nC++: virtual vtkIdType GetMaxDepthMinValue()\n\n"},
  {"GetMaxDepthMaxValue", PyvtkRandomHyperTreeGridSource_GetMaxDepthMaxValue, METH_VARARGS,
   "GetMaxDepthMaxValue(self) -> int\nC++: virtual vtkIdType GetMaxDepthMaxValue()\n\n"},
  {"GetSplitFraction", PyvtkRandomHyperTreeGridSource_GetSplitFraction, METH_VARARGS,
   "GetSplitFraction(self) -> float\nC++: virtual double GetSplitFraction()\n\n"},
  {"SetSplitFraction", PyvtkRandomHyperTreeGridSource_SetSplitFraction, METH_VARARGS,
   "SetSplitFraction(self, _arg:float) -> None\nC++: virtual void SetSplitFraction(double _arg)\n\n"},
  {"GetSplitFractionMinValue", PyvtkRandomHyperTreeGridSource_GetSplitFractionMinValue, METH_VARARGS,
   "GetSplitFractionMinValue(self) -> float\nC++: virtual double GetSplitFractionMinValue()\n\n"},
  {"GetSplitFractionMaxValue", PyvtkRandomHyperTreeGridSource_GetSplitFractionMaxValue, METH_VARARGS,
   "GetSplitFractionMaxValue(self) -> float\nC++: virtual double GetSplitFractionMaxValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRandomHyperTreeGridSource_Doc =
  "vtkRandomHyperTreeGridSource - Builds a randomized but reproducible\nvtkHyperTreeGrid.\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRandomHyperTreeGridSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkRandomHyperTreeGridSource", // tp_name
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
  PyvtkRandomHyperTreeGridSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRandomHyperTreeGridSource_StaticNew()
{
  return vtkRandomHyperTreeGridSource::New();
}

PyObject *PyvtkRandomHyperTreeGridSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRandomHyperTreeGridSource_Type, PyvtkRandomHyperTreeGridSource_Methods,
    "vtkRandomHyperTreeGridSource",
 &PyvtkRandomHyperTreeGridSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkHyperTreeGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRandomHyperTreeGridSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRandomHyperTreeGridSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRandomHyperTreeGridSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

