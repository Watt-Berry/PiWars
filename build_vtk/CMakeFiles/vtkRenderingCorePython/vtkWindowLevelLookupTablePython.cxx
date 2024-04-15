// python wrapper for vtkWindowLevelLookupTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWindowLevelLookupTable.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWindowLevelLookupTable(PyObject *dict); }
extern "C" { PyObject *PyvtkWindowLevelLookupTable_ClassNew(); }


static PyObject *
PyvtkWindowLevelLookupTable_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWindowLevelLookupTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWindowLevelLookupTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWindowLevelLookupTable *tempr = vtkWindowLevelLookupTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWindowLevelLookupTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWindowLevelLookupTable::NewInstance());

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
PyvtkWindowLevelLookupTable_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWindowLevelLookupTable::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWindowLevelLookupTable::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_ForceBuild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceBuild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceBuild();
    }
    else
    {
      op->vtkWindowLevelLookupTable::ForceBuild();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindow(temp0);
    }
    else
    {
      op->vtkWindowLevelLookupTable::SetWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWindow() :
      op->vtkWindowLevelLookupTable::GetWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevel(temp0);
    }
    else
    {
      op->vtkWindowLevelLookupTable::SetLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkWindowLevelLookupTable::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetInverseVideo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverseVideo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInverseVideo(temp0);
    }
    else
    {
      op->vtkWindowLevelLookupTable::SetInverseVideo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_GetInverseVideo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseVideo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInverseVideo() :
      op->vtkWindowLevelLookupTable::GetInverseVideo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_InverseVideoOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseVideoOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InverseVideoOn();
    }
    else
    {
      op->vtkWindowLevelLookupTable::InverseVideoOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_InverseVideoOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseVideoOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InverseVideoOff();
    }
    else
    {
      op->vtkWindowLevelLookupTable::InverseVideoOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetMinimumTableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetMinimumTableValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWindowLevelLookupTable::SetMinimumTableValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindowLevelLookupTable_SetMinimumTableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumTableValue(temp0);
    }
    else
    {
      op->vtkWindowLevelLookupTable::SetMinimumTableValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindowLevelLookupTable_SetMinimumTableValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkWindowLevelLookupTable_SetMinimumTableValue_s1(self, args);
    case 1:
      return PyvtkWindowLevelLookupTable_SetMinimumTableValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMinimumTableValue");
  return nullptr;
}


static PyObject *
PyvtkWindowLevelLookupTable_GetMinimumTableValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMinimumTableValue() :
      op->vtkWindowLevelLookupTable::GetMinimumTableValue());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowLevelLookupTable_SetMaximumTableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetMaximumTableValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWindowLevelLookupTable::SetMaximumTableValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindowLevelLookupTable_SetMaximumTableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumTableValue(temp0);
    }
    else
    {
      op->vtkWindowLevelLookupTable::SetMaximumTableValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindowLevelLookupTable_SetMaximumTableValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkWindowLevelLookupTable_SetMaximumTableValue_s1(self, args);
    case 1:
      return PyvtkWindowLevelLookupTable_SetMaximumTableValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaximumTableValue");
  return nullptr;
}


static PyObject *
PyvtkWindowLevelLookupTable_GetMaximumTableValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowLevelLookupTable *op = static_cast<vtkWindowLevelLookupTable *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaximumTableValue() :
      op->vtkWindowLevelLookupTable::GetMaximumTableValue());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkWindowLevelLookupTable_Methods[] = {
  {"IsTypeOf", PyvtkWindowLevelLookupTable_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWindowLevelLookupTable_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWindowLevelLookupTable_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWindowLevelLookupTable\nC++: static vtkWindowLevelLookupTable *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWindowLevelLookupTable_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWindowLevelLookupTable\nC++: vtkWindowLevelLookupTable *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWindowLevelLookupTable_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWindowLevelLookupTable_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ForceBuild", PyvtkWindowLevelLookupTable_ForceBuild, METH_VARARGS,
   "ForceBuild(self) -> None\nC++: void ForceBuild() override;\n\nGenerate lookup table as a linear ramp between MinimumTableValue\nand MaximumTableValue.\n"},
  {"SetWindow", PyvtkWindowLevelLookupTable_SetWindow, METH_VARARGS,
   "SetWindow(self, window:float) -> None\nC++: void SetWindow(double window)\n\nSet the window for the lookup table.  The window is the\ndifference between TableRange[0] and TableRange[1].\n"},
  {"GetWindow", PyvtkWindowLevelLookupTable_GetWindow, METH_VARARGS,
   "GetWindow(self) -> float\nC++: virtual double GetWindow()\n\n"},
  {"SetLevel", PyvtkWindowLevelLookupTable_SetLevel, METH_VARARGS,
   "SetLevel(self, level:float) -> None\nC++: void SetLevel(double level)\n\nSet the Level for the lookup table.  The level is the average of\nTableRange[0] and TableRange[1].\n"},
  {"GetLevel", PyvtkWindowLevelLookupTable_GetLevel, METH_VARARGS,
   "GetLevel(self) -> float\nC++: virtual double GetLevel()\n\n"},
  {"SetInverseVideo", PyvtkWindowLevelLookupTable_SetInverseVideo, METH_VARARGS,
   "SetInverseVideo(self, iv:int) -> None\nC++: void SetInverseVideo(vtkTypeBool iv)\n\nSet inverse video on or off.  You can achieve the same effect by\nswitching the MinimumTableValue and the MaximumTableValue.\n"},
  {"GetInverseVideo", PyvtkWindowLevelLookupTable_GetInverseVideo, METH_VARARGS,
   "GetInverseVideo(self) -> int\nC++: virtual vtkTypeBool GetInverseVideo()\n\n"},
  {"InverseVideoOn", PyvtkWindowLevelLookupTable_InverseVideoOn, METH_VARARGS,
   "InverseVideoOn(self) -> None\nC++: virtual void InverseVideoOn()\n\n"},
  {"InverseVideoOff", PyvtkWindowLevelLookupTable_InverseVideoOff, METH_VARARGS,
   "InverseVideoOff(self) -> None\nC++: virtual void InverseVideoOff()\n\n"},
  {"SetMinimumTableValue", PyvtkWindowLevelLookupTable_SetMinimumTableValue, METH_VARARGS,
   "SetMinimumTableValue(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float) -> None\nC++: virtual void SetMinimumTableValue(double _arg1, double _arg2,\n     double _arg3, double _arg4)\nSetMinimumTableValue(self, _arg:(float, float, float, float))\n    -> None\nC++: virtual void SetMinimumTableValue(const double _arg[4])\n\nSet the minimum table value.  All lookup table entries below the\nstart of the ramp will be set to this color.  After you change\nthis value, you must re-build the lookup table.\n"},
  {"GetMinimumTableValue", PyvtkWindowLevelLookupTable_GetMinimumTableValue, METH_VARARGS,
   "GetMinimumTableValue(self) -> (float, float, float, float)\nC++: virtual double *GetMinimumTableValue()\n\n"},
  {"SetMaximumTableValue", PyvtkWindowLevelLookupTable_SetMaximumTableValue, METH_VARARGS,
   "SetMaximumTableValue(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float) -> None\nC++: virtual void SetMaximumTableValue(double _arg1, double _arg2,\n     double _arg3, double _arg4)\nSetMaximumTableValue(self, _arg:(float, float, float, float))\n    -> None\nC++: virtual void SetMaximumTableValue(const double _arg[4])\n\nSet the maximum table value. All lookup table entries above the\nend of the ramp will be set to this color.  After you change this\nvalue, you must re-build the lookup table.\n"},
  {"GetMaximumTableValue", PyvtkWindowLevelLookupTable_GetMaximumTableValue, METH_VARARGS,
   "GetMaximumTableValue(self) -> (float, float, float, float)\nC++: virtual double *GetMaximumTableValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWindowLevelLookupTable_Doc =
  "vtkWindowLevelLookupTable - map scalar values into colors or colors\nto scalars; generate color table\n\n"
  "Superclass: vtkLookupTable\n\n"
  "vtkWindowLevelLookupTable is an object that is used by mapper objects\n"
  "to map scalar values into rgba (red-green-blue-alpha transparency)\n"
  "color specification, or rgba into scalar values. The color table can\n"
  "be created by direct insertion of color values, or by specifying a\n"
  "window and level. Window / Level is used in medical imaging to\n"
  "specify a linear greyscale ramp. The Level is the center of the ramp.\n"
  " The Window is the width of the ramp.\n\n"
  "@warning\n"
  "vtkWindowLevelLookupTable is a reference counted object. Therefore,\n"
  "you should always use operator \"new\" to construct new objects. This\n"
  "procedure will avoid memory problems (see text).\n\n"
  "@sa\n"
  "vtkLogLookupTable\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWindowLevelLookupTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkWindowLevelLookupTable", // tp_name
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
  PyvtkWindowLevelLookupTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWindowLevelLookupTable_StaticNew()
{
  return vtkWindowLevelLookupTable::New();
}

PyObject *PyvtkWindowLevelLookupTable_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWindowLevelLookupTable_Type, PyvtkWindowLevelLookupTable_Methods,
    "vtkWindowLevelLookupTable",
 &PyvtkWindowLevelLookupTable_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkLookupTable");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWindowLevelLookupTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWindowLevelLookupTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWindowLevelLookupTable", o) != 0)
  {
    Py_DECREF(o);
  }

}

