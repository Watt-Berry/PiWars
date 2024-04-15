// python wrapper for vtkAMRCutPlane
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAMRCutPlane.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRCutPlane(PyObject *dict); }
extern "C" { PyObject *PyvtkAMRCutPlane_ClassNew(); }


static PyObject *
PyvtkAMRCutPlane_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRCutPlane::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRCutPlane::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRCutPlane *tempr = vtkAMRCutPlane::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRCutPlane *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRCutPlane::NewInstance());

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
PyvtkAMRCutPlane_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAMRCutPlane::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAMRCutPlane::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

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
      op->vtkAMRCutPlane::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRCutPlane_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

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
      op->vtkAMRCutPlane::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRCutPlane_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRCutPlane_SetCenter_s1(self, args);
    case 1:
      return PyvtkAMRCutPlane_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkAMRCutPlane_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

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
      op->vtkAMRCutPlane::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRCutPlane_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

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
      op->vtkAMRCutPlane::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRCutPlane_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRCutPlane_SetNormal_s1(self, args);
    case 1:
      return PyvtkAMRCutPlane_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}


static PyObject *
PyvtkAMRCutPlane_SetLevelOfResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelOfResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevelOfResolution(temp0);
    }
    else
    {
      op->vtkAMRCutPlane::SetLevelOfResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_GetLevelOfResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelOfResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLevelOfResolution() :
      op->vtkAMRCutPlane::GetLevelOfResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_SetUseNativeCutter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNativeCutter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseNativeCutter(temp0);
    }
    else
    {
      op->vtkAMRCutPlane::SetUseNativeCutter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_GetUseNativeCutter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseNativeCutter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseNativeCutter() :
      op->vtkAMRCutPlane::GetUseNativeCutter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_UseNativeCutterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNativeCutterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseNativeCutterOn();
    }
    else
    {
      op->vtkAMRCutPlane::UseNativeCutterOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_UseNativeCutterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNativeCutterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseNativeCutterOff();
    }
    else
    {
      op->vtkAMRCutPlane::UseNativeCutterOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkAMRCutPlane::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRCutPlane::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkAMRCutPlane::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_FillOutputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillOutputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillOutputPortInformation(temp0, temp1) :
      op->vtkAMRCutPlane::FillOutputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRCutPlane_SetInitialRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRCutPlane *op = static_cast<vtkAMRCutPlane *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInitialRequest(temp0);
    }
    else
    {
      op->vtkAMRCutPlane::SetInitialRequest(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRCutPlane_Methods[] = {
  {"IsTypeOf", PyvtkAMRCutPlane_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRCutPlane_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRCutPlane_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAMRCutPlane\nC++: static vtkAMRCutPlane *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRCutPlane_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAMRCutPlane\nC++: vtkAMRCutPlane *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAMRCutPlane_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAMRCutPlane_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCenter", PyvtkAMRCutPlane_SetCenter, METH_VARARGS,
   "SetCenter(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCenter(double _arg1, double _arg2,\n    double _arg3)\nSetCenter(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCenter(const double _arg[3])\n\nSets the center\n"},
  {"SetNormal", PyvtkAMRCutPlane_SetNormal, METH_VARARGS,
   "SetNormal(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetNormal(double _arg1, double _arg2,\n    double _arg3)\nSetNormal(self, _arg:(float, float, float)) -> None\nC++: virtual void SetNormal(const double _arg[3])\n\nSets the normal\n"},
  {"SetLevelOfResolution", PyvtkAMRCutPlane_SetLevelOfResolution, METH_VARARGS,
   "SetLevelOfResolution(self, _arg:int) -> None\nC++: virtual void SetLevelOfResolution(int _arg)\n\nSets the level of resolution\n"},
  {"GetLevelOfResolution", PyvtkAMRCutPlane_GetLevelOfResolution, METH_VARARGS,
   "GetLevelOfResolution(self) -> int\nC++: virtual int GetLevelOfResolution()\n\n"},
  {"SetUseNativeCutter", PyvtkAMRCutPlane_SetUseNativeCutter, METH_VARARGS,
   "SetUseNativeCutter(self, _arg:bool) -> None\nC++: virtual void SetUseNativeCutter(bool _arg)\n\nSets if plane cutter is used instead of the specialized AMR\ncutter.\n\nDefault is true.\n"},
  {"GetUseNativeCutter", PyvtkAMRCutPlane_GetUseNativeCutter, METH_VARARGS,
   "GetUseNativeCutter(self) -> bool\nC++: virtual bool GetUseNativeCutter()\n\n"},
  {"UseNativeCutterOn", PyvtkAMRCutPlane_UseNativeCutterOn, METH_VARARGS,
   "UseNativeCutterOn(self) -> None\nC++: virtual void UseNativeCutterOn()\n\n"},
  {"UseNativeCutterOff", PyvtkAMRCutPlane_UseNativeCutterOff, METH_VARARGS,
   "UseNativeCutterOff(self) -> None\nC++: virtual void UseNativeCutterOff()\n\n"},
  {"SetController", PyvtkAMRCutPlane_SetController, METH_VARARGS,
   "SetController(self, __a:vtkMultiProcessController) -> None\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet/Get a multiprocess controller for parallel processing. By\ndefault this parameter is set to nullptr by the constructor.\n"},
  {"GetController", PyvtkAMRCutPlane_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"FillInputPortInformation", PyvtkAMRCutPlane_FillInputPortInformation, METH_VARARGS,
   "FillInputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nFill the input port information objects for this algorithm.  This\nis invoked by the first call to GetInputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {"FillOutputPortInformation", PyvtkAMRCutPlane_FillOutputPortInformation, METH_VARARGS,
   "FillOutputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillOutputPortInformation(int port, vtkInformation *info)\n     override;\n\nFill the output port information objects for this algorithm. This\nis invoked by the first call to GetOutputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {"SetInitialRequest", PyvtkAMRCutPlane_SetInitialRequest, METH_VARARGS,
   "SetInitialRequest(self, _arg:bool) -> None\nC++: virtual void SetInitialRequest(bool _arg)\n\nSet if it's the initial request.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAMRCutPlane_Doc =
  "vtkAMRCutPlane -  A concrete instance of vtkMultiBlockDataSet that\nprovides functionality for cutting an AMR dataset (an instance of\nvtkOverlappingAMR) with user supplied implicit plane function defined\nby a normal and center.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAMRCutPlane_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersAMR.vtkAMRCutPlane", // tp_name
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
  PyvtkAMRCutPlane_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRCutPlane_StaticNew()
{
  return vtkAMRCutPlane::New();
}

PyObject *PyvtkAMRCutPlane_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAMRCutPlane_Type, PyvtkAMRCutPlane_Methods,
    "vtkAMRCutPlane",
 &PyvtkAMRCutPlane_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRCutPlane(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRCutPlane_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRCutPlane", o) != 0)
  {
    Py_DECREF(o);
  }

}

