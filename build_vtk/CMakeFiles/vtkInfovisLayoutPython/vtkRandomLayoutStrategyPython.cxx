// python wrapper for vtkRandomLayoutStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRandomLayoutStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRandomLayoutStrategy(PyObject *dict); }
extern "C" { PyObject *PyvtkRandomLayoutStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkGraphLayoutStrategy_ClassNew
extern "C" { PyObject *PyvtkGraphLayoutStrategy_ClassNew(); }
#define DECLARED_PyvtkGraphLayoutStrategy_ClassNew
#endif

static PyObject *
PyvtkRandomLayoutStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRandomLayoutStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRandomLayoutStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRandomLayoutStrategy *tempr = vtkRandomLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRandomLayoutStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRandomLayoutStrategy::NewInstance());

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
PyvtkRandomLayoutStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRandomLayoutStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRandomLayoutStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_SetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRandomSeed(temp0);
    }
    else
    {
      op->vtkRandomLayoutStrategy::SetRandomSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_GetRandomSeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomSeedMinValue() :
      op->vtkRandomLayoutStrategy::GetRandomSeedMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_GetRandomSeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomSeedMaxValue() :
      op->vtkRandomLayoutStrategy::GetRandomSeedMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_GetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomSeed() :
      op->vtkRandomLayoutStrategy::GetRandomSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_SetGraphBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

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
      op->SetGraphBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkRandomLayoutStrategy::SetGraphBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRandomLayoutStrategy_SetGraphBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGraphBounds(temp0);
    }
    else
    {
      op->vtkRandomLayoutStrategy::SetGraphBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRandomLayoutStrategy_SetGraphBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkRandomLayoutStrategy_SetGraphBounds_s1(self, args);
    case 1:
      return PyvtkRandomLayoutStrategy_SetGraphBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphBounds");
  return nullptr;
}


static PyObject *
PyvtkRandomLayoutStrategy_GetGraphBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGraphBounds() :
      op->vtkRandomLayoutStrategy::GetGraphBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_SetAutomaticBoundsComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticBoundsComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticBoundsComputation(temp0);
    }
    else
    {
      op->vtkRandomLayoutStrategy::SetAutomaticBoundsComputation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_GetAutomaticBoundsComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticBoundsComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticBoundsComputation() :
      op->vtkRandomLayoutStrategy::GetAutomaticBoundsComputation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_AutomaticBoundsComputationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticBoundsComputationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticBoundsComputationOn();
    }
    else
    {
      op->vtkRandomLayoutStrategy::AutomaticBoundsComputationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_AutomaticBoundsComputationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticBoundsComputationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticBoundsComputationOff();
    }
    else
    {
      op->vtkRandomLayoutStrategy::AutomaticBoundsComputationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_SetThreeDimensionalLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreeDimensionalLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThreeDimensionalLayout(temp0);
    }
    else
    {
      op->vtkRandomLayoutStrategy::SetThreeDimensionalLayout(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_GetThreeDimensionalLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreeDimensionalLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThreeDimensionalLayout() :
      op->vtkRandomLayoutStrategy::GetThreeDimensionalLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_ThreeDimensionalLayoutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLayoutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThreeDimensionalLayoutOn();
    }
    else
    {
      op->vtkRandomLayoutStrategy::ThreeDimensionalLayoutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_ThreeDimensionalLayoutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLayoutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThreeDimensionalLayoutOff();
    }
    else
    {
      op->vtkRandomLayoutStrategy::ThreeDimensionalLayoutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_SetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    if (ap.IsBound())
    {
      op->SetGraph(temp0);
    }
    else
    {
      op->vtkRandomLayoutStrategy::SetGraph(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomLayoutStrategy *op = static_cast<vtkRandomLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Layout();
    }
    else
    {
      op->vtkRandomLayoutStrategy::Layout();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRandomLayoutStrategy_Methods[] = {
  {"IsTypeOf", PyvtkRandomLayoutStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRandomLayoutStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRandomLayoutStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRandomLayoutStrategy\nC++: static vtkRandomLayoutStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRandomLayoutStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRandomLayoutStrategy\nC++: vtkRandomLayoutStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRandomLayoutStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRandomLayoutStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRandomSeed", PyvtkRandomLayoutStrategy_SetRandomSeed, METH_VARARGS,
   "SetRandomSeed(self, _arg:int) -> None\nC++: virtual void SetRandomSeed(int _arg)\n\nSeed the random number generator used to compute point positions.\nThis has a significant effect on their final positions when the\nlayout is complete.\n"},
  {"GetRandomSeedMinValue", PyvtkRandomLayoutStrategy_GetRandomSeedMinValue, METH_VARARGS,
   "GetRandomSeedMinValue(self) -> int\nC++: virtual int GetRandomSeedMinValue()\n\n"},
  {"GetRandomSeedMaxValue", PyvtkRandomLayoutStrategy_GetRandomSeedMaxValue, METH_VARARGS,
   "GetRandomSeedMaxValue(self) -> int\nC++: virtual int GetRandomSeedMaxValue()\n\n"},
  {"GetRandomSeed", PyvtkRandomLayoutStrategy_GetRandomSeed, METH_VARARGS,
   "GetRandomSeed(self) -> int\nC++: virtual int GetRandomSeed()\n\n"},
  {"SetGraphBounds", PyvtkRandomLayoutStrategy_SetGraphBounds, METH_VARARGS,
   "SetGraphBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetGraphBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetGraphBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetGraphBounds(const double _arg[6])\n\nSet / get the region in space in which to place the final graph.\nThe GraphBounds only affects the results if\nAutomaticBoundsComputation is off.\n"},
  {"GetGraphBounds", PyvtkRandomLayoutStrategy_GetGraphBounds, METH_VARARGS,
   "GetGraphBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetGraphBounds()\n\n"},
  {"SetAutomaticBoundsComputation", PyvtkRandomLayoutStrategy_SetAutomaticBoundsComputation, METH_VARARGS,
   "SetAutomaticBoundsComputation(self, _arg:int) -> None\nC++: virtual void SetAutomaticBoundsComputation(vtkTypeBool _arg)\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {"GetAutomaticBoundsComputation", PyvtkRandomLayoutStrategy_GetAutomaticBoundsComputation, METH_VARARGS,
   "GetAutomaticBoundsComputation(self) -> int\nC++: virtual vtkTypeBool GetAutomaticBoundsComputation()\n\n"},
  {"AutomaticBoundsComputationOn", PyvtkRandomLayoutStrategy_AutomaticBoundsComputationOn, METH_VARARGS,
   "AutomaticBoundsComputationOn(self) -> None\nC++: virtual void AutomaticBoundsComputationOn()\n\n"},
  {"AutomaticBoundsComputationOff", PyvtkRandomLayoutStrategy_AutomaticBoundsComputationOff, METH_VARARGS,
   "AutomaticBoundsComputationOff(self) -> None\nC++: virtual void AutomaticBoundsComputationOff()\n\n"},
  {"SetThreeDimensionalLayout", PyvtkRandomLayoutStrategy_SetThreeDimensionalLayout, METH_VARARGS,
   "SetThreeDimensionalLayout(self, _arg:int) -> None\nC++: virtual void SetThreeDimensionalLayout(vtkTypeBool _arg)\n\nTurn on/off layout of graph in three dimensions. If off, graph\nlayout occurs in two dimensions. By default, three dimensional\nlayout is on.\n"},
  {"GetThreeDimensionalLayout", PyvtkRandomLayoutStrategy_GetThreeDimensionalLayout, METH_VARARGS,
   "GetThreeDimensionalLayout(self) -> int\nC++: virtual vtkTypeBool GetThreeDimensionalLayout()\n\n"},
  {"ThreeDimensionalLayoutOn", PyvtkRandomLayoutStrategy_ThreeDimensionalLayoutOn, METH_VARARGS,
   "ThreeDimensionalLayoutOn(self) -> None\nC++: virtual void ThreeDimensionalLayoutOn()\n\n"},
  {"ThreeDimensionalLayoutOff", PyvtkRandomLayoutStrategy_ThreeDimensionalLayoutOff, METH_VARARGS,
   "ThreeDimensionalLayoutOff(self) -> None\nC++: virtual void ThreeDimensionalLayoutOff()\n\n"},
  {"SetGraph", PyvtkRandomLayoutStrategy_SetGraph, METH_VARARGS,
   "SetGraph(self, graph:vtkGraph) -> None\nC++: void SetGraph(vtkGraph *graph) override;\n\nSet the graph to layout.\n"},
  {"Layout", PyvtkRandomLayoutStrategy_Layout, METH_VARARGS,
   "Layout(self) -> None\nC++: void Layout() override;\n\nPerform the random layout.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRandomLayoutStrategy_Doc =
  "vtkRandomLayoutStrategy - randomly places vertices in 2 or 3\ndimensions\n\n"
  "Superclass: vtkGraphLayoutStrategy\n\n"
  "Assigns points to the vertices of a graph randomly within a bounded\n"
  "range.\n\n"
  "Thanks:\n\n"
  "Thanks to Brian Wylie from Sandia National Laboratories for adding\n"
  "incremental layout capabilities.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRandomLayoutStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkRandomLayoutStrategy", // tp_name
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
  PyvtkRandomLayoutStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRandomLayoutStrategy_StaticNew()
{
  return vtkRandomLayoutStrategy::New();
}

PyObject *PyvtkRandomLayoutStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRandomLayoutStrategy_Type, PyvtkRandomLayoutStrategy_Methods,
    "vtkRandomLayoutStrategy",
 &PyvtkRandomLayoutStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGraphLayoutStrategy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRandomLayoutStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRandomLayoutStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRandomLayoutStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

