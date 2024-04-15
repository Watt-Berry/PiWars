// python wrapper for vtkWarpScalar
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWarpScalar.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWarpScalar(PyObject *dict); }
extern "C" { PyObject *PyvtkWarpScalar_ClassNew(); }


static PyObject *
PyvtkWarpScalar_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWarpScalar::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWarpScalar::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWarpScalar *tempr = vtkWarpScalar::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWarpScalar *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWarpScalar::NewInstance());

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
PyvtkWarpScalar_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWarpScalar::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWarpScalar::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkWarpScalar::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkWarpScalar::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_SetUseNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseNormal(temp0);
    }
    else
    {
      op->vtkWarpScalar::SetUseNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_GetUseNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseNormal() :
      op->vtkWarpScalar::GetUseNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_UseNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseNormalOn();
    }
    else
    {
      op->vtkWarpScalar::UseNormalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_UseNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseNormalOff();
    }
    else
    {
      op->vtkWarpScalar::UseNormalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

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
      op->vtkWarpScalar::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWarpScalar_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

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
      op->vtkWarpScalar::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWarpScalar_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkWarpScalar_SetNormal_s1(self, args);
    case 1:
      return PyvtkWarpScalar_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}


static PyObject *
PyvtkWarpScalar_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkWarpScalar::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_SetXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXYPlane(temp0);
    }
    else
    {
      op->vtkWarpScalar::SetXYPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_GetXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXYPlane() :
      op->vtkWarpScalar::GetXYPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_XYPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XYPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XYPlaneOn();
    }
    else
    {
      op->vtkWarpScalar::XYPlaneOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_XYPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XYPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XYPlaneOff();
    }
    else
    {
      op->vtkWarpScalar::XYPlaneOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

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
      op->vtkWarpScalar::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkWarpScalar::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_GetGenerateEnclosure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateEnclosure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateEnclosure() :
      op->vtkWarpScalar::GetGenerateEnclosure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_SetGenerateEnclosure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateEnclosure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateEnclosure(temp0);
    }
    else
    {
      op->vtkWarpScalar::SetGenerateEnclosure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_GenerateEnclosureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEnclosureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEnclosureOn();
    }
    else
    {
      op->vtkWarpScalar::GenerateEnclosureOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_GenerateEnclosureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEnclosureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEnclosureOff();
    }
    else
    {
      op->vtkWarpScalar::GenerateEnclosureOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpScalar_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpScalar *op = static_cast<vtkWarpScalar *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkWarpScalar::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWarpScalar_Methods[] = {
  {"IsTypeOf", PyvtkWarpScalar_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWarpScalar_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWarpScalar_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWarpScalar\nC++: static vtkWarpScalar *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWarpScalar_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWarpScalar\nC++: vtkWarpScalar *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWarpScalar_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWarpScalar_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetScaleFactor", PyvtkWarpScalar_SetScaleFactor, METH_VARARGS,
   "SetScaleFactor(self, _arg:float) -> None\nC++: virtual void SetScaleFactor(double _arg)\n\nSpecify value to scale displacement.\n"},
  {"GetScaleFactor", PyvtkWarpScalar_GetScaleFactor, METH_VARARGS,
   "GetScaleFactor(self) -> float\nC++: virtual double GetScaleFactor()\n\n"},
  {"SetUseNormal", PyvtkWarpScalar_SetUseNormal, METH_VARARGS,
   "SetUseNormal(self, _arg:int) -> None\nC++: virtual void SetUseNormal(vtkTypeBool _arg)\n\nTurn on/off use of user specified normal. If on, data normals\nwill be ignored and instance variable Normal will be used\ninstead.\n"},
  {"GetUseNormal", PyvtkWarpScalar_GetUseNormal, METH_VARARGS,
   "GetUseNormal(self) -> int\nC++: virtual vtkTypeBool GetUseNormal()\n\n"},
  {"UseNormalOn", PyvtkWarpScalar_UseNormalOn, METH_VARARGS,
   "UseNormalOn(self) -> None\nC++: virtual void UseNormalOn()\n\n"},
  {"UseNormalOff", PyvtkWarpScalar_UseNormalOff, METH_VARARGS,
   "UseNormalOff(self) -> None\nC++: virtual void UseNormalOff()\n\n"},
  {"SetNormal", PyvtkWarpScalar_SetNormal, METH_VARARGS,
   "SetNormal(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetNormal(double _arg1, double _arg2,\n    double _arg3)\nSetNormal(self, _arg:(float, float, float)) -> None\nC++: virtual void SetNormal(const double _arg[3])\n\nNormal (i.e., direction) along which to warp geometry. Only used\nif UseNormal boolean set to true or no normals available in data.\n"},
  {"GetNormal", PyvtkWarpScalar_GetNormal, METH_VARARGS,
   "GetNormal(self) -> (float, float, float)\nC++: virtual double *GetNormal()\n\n"},
  {"SetXYPlane", PyvtkWarpScalar_SetXYPlane, METH_VARARGS,
   "SetXYPlane(self, _arg:int) -> None\nC++: virtual void SetXYPlane(vtkTypeBool _arg)\n\nTurn on/off flag specifying that input data is x-y plane. If x-y\nplane, then the z value is used to warp the surface in the z-axis\ndirection (times the scale factor) and scalars are used to color\nthe surface.\n"},
  {"GetXYPlane", PyvtkWarpScalar_GetXYPlane, METH_VARARGS,
   "GetXYPlane(self) -> int\nC++: virtual vtkTypeBool GetXYPlane()\n\n"},
  {"XYPlaneOn", PyvtkWarpScalar_XYPlaneOn, METH_VARARGS,
   "XYPlaneOn(self) -> None\nC++: virtual void XYPlaneOn()\n\n"},
  {"XYPlaneOff", PyvtkWarpScalar_XYPlaneOff, METH_VARARGS,
   "XYPlaneOff(self) -> None\nC++: virtual void XYPlaneOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkWarpScalar_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points type. By\ndefault (DEFAULT_PRECISION) the output type is SINGLE_PRECISION,\notherwise it is either SINGLE_PRECISION or DOUBLE_PRECISION as\nspecified by the user.\n"},
  {"GetOutputPointsPrecision", PyvtkWarpScalar_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"GetGenerateEnclosure", PyvtkWarpScalar_GetGenerateEnclosure, METH_VARARGS,
   "GetGenerateEnclosure(self) -> bool\nC++: virtual bool GetGenerateEnclosure()\n\nSet/Get for a property flag that makes the filter include the\ninput data set in the output and connects the output surface to\nthe input surface through \"side walls\" effectively making a\nsingle grid enclosing a volume.\n\nIn order to use this functionality correctly, the input must be a\ntwo dimensional surface and cannot be 3D.\n"},
  {"SetGenerateEnclosure", PyvtkWarpScalar_SetGenerateEnclosure, METH_VARARGS,
   "SetGenerateEnclosure(self, _arg:bool) -> None\nC++: virtual void SetGenerateEnclosure(bool _arg)\n\n"},
  {"GenerateEnclosureOn", PyvtkWarpScalar_GenerateEnclosureOn, METH_VARARGS,
   "GenerateEnclosureOn(self) -> None\nC++: virtual void GenerateEnclosureOn()\n\n"},
  {"GenerateEnclosureOff", PyvtkWarpScalar_GenerateEnclosureOff, METH_VARARGS,
   "GenerateEnclosureOff(self) -> None\nC++: virtual void GenerateEnclosureOff()\n\n"},
  {"FillInputPortInformation", PyvtkWarpScalar_FillInputPortInformation, METH_VARARGS,
   "FillInputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nFill the input port information objects for this algorithm.  This\nis invoked by the first call to GetInputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWarpScalar_Doc =
  "vtkWarpScalar - deform geometry with scalar data\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "vtkWarpScalar is a filter that modifies point coordinates by moving\n"
  "points along point normals by the scalar amount times the scale\n"
  "factor. Useful for creating carpet or x-y-z plots.\n\n"
  "If normals are not present in data, the Normal instance variable will\n"
  "be used as the direction along which to warp the geometry. If normals\n"
  "are present but you would like to use the Normal instance variable,\n"
  "set the UseNormal boolean to true.\n\n"
  "If XYPlane boolean is set true, then the z-value is considered to be\n"
  "a scalar value (still scaled by scale factor), and the displacement\n"
  "is along the z-axis. If scalars are also present, these are copied\n"
  "through and can be used to color the surface.\n\n"
  "Note that the filter passes both its point data and cell data to its\n"
  "output, except for normals, since these are distorted by the warping.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWarpScalar_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkWarpScalar", // tp_name
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
  PyvtkWarpScalar_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWarpScalar_StaticNew()
{
  return vtkWarpScalar::New();
}

PyObject *PyvtkWarpScalar_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWarpScalar_Type, PyvtkWarpScalar_Methods,
    "vtkWarpScalar",
 &PyvtkWarpScalar_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPointSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWarpScalar(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWarpScalar_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWarpScalar", o) != 0)
  {
    Py_DECREF(o);
  }

}

