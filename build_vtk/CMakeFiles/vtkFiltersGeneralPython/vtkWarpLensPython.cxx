// python wrapper for vtkWarpLens
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWarpLens.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWarpLens(PyObject *dict); }
extern "C" { PyObject *PyvtkWarpLens_ClassNew(); }


static PyObject *
PyvtkWarpLens_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWarpLens::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWarpLens::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWarpLens *tempr = vtkWarpLens::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWarpLens *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWarpLens::NewInstance());

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
PyvtkWarpLens_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWarpLens::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWarpLens::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_SetKappa(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKappa");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKappa(temp0);
    }
    else
    {
      op->vtkWarpLens::SetKappa(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_GetKappa(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKappa");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKappa() :
      op->vtkWarpLens::GetKappa());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_SetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0, temp1);
    }
    else
    {
      op->vtkWarpLens::SetCenter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkWarpLens::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_SetPrincipalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrincipalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPrincipalPoint(temp0, temp1);
    }
    else
    {
      op->vtkWarpLens::SetPrincipalPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWarpLens_SetPrincipalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrincipalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPrincipalPoint(temp0);
    }
    else
    {
      op->vtkWarpLens::SetPrincipalPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWarpLens_SetPrincipalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkWarpLens_SetPrincipalPoint_s1(self, args);
    case 1:
      return PyvtkWarpLens_SetPrincipalPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPrincipalPoint");
  return nullptr;
}


static PyObject *
PyvtkWarpLens_GetPrincipalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrincipalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPrincipalPoint() :
      op->vtkWarpLens::GetPrincipalPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_SetK1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetK1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetK1(temp0);
    }
    else
    {
      op->vtkWarpLens::SetK1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_GetK1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetK1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetK1() :
      op->vtkWarpLens::GetK1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_SetK2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetK2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetK2(temp0);
    }
    else
    {
      op->vtkWarpLens::SetK2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_GetK2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetK2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetK2() :
      op->vtkWarpLens::GetK2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_SetP1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetP1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetP1(temp0);
    }
    else
    {
      op->vtkWarpLens::SetP1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_GetP1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetP1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetP1() :
      op->vtkWarpLens::GetP1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_SetP2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetP2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetP2(temp0);
    }
    else
    {
      op->vtkWarpLens::SetP2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_GetP2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetP2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetP2() :
      op->vtkWarpLens::GetP2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_SetFormatWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFormatWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFormatWidth(temp0);
    }
    else
    {
      op->vtkWarpLens::SetFormatWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_GetFormatWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFormatWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFormatWidth() :
      op->vtkWarpLens::GetFormatWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_SetFormatHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFormatHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFormatHeight(temp0);
    }
    else
    {
      op->vtkWarpLens::SetFormatHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_GetFormatHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFormatHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFormatHeight() :
      op->vtkWarpLens::GetFormatHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_SetImageWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageWidth(temp0);
    }
    else
    {
      op->vtkWarpLens::SetImageWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_GetImageWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageWidth() :
      op->vtkWarpLens::GetImageWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_SetImageHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageHeight(temp0);
    }
    else
    {
      op->vtkWarpLens::SetImageHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_GetImageHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageHeight() :
      op->vtkWarpLens::GetImageHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpLens_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpLens *op = static_cast<vtkWarpLens *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkWarpLens::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWarpLens_Methods[] = {
  {"IsTypeOf", PyvtkWarpLens_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWarpLens_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWarpLens_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWarpLens\nC++: static vtkWarpLens *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWarpLens_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWarpLens\nC++: vtkWarpLens *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWarpLens_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWarpLens_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetKappa", PyvtkWarpLens_SetKappa, METH_VARARGS,
   "SetKappa(self, kappa:float) -> None\nC++: void SetKappa(double kappa)\n\nSpecify second order symmetric radial lens distortion parameter.\nThis is obsoleted by newer instance variables.\n"},
  {"GetKappa", PyvtkWarpLens_GetKappa, METH_VARARGS,
   "GetKappa(self) -> float\nC++: double GetKappa()\n\n"},
  {"SetCenter", PyvtkWarpLens_SetCenter, METH_VARARGS,
   "SetCenter(self, centerX:float, centerY:float) -> None\nC++: void SetCenter(double centerX, double centerY)\n\nSpecify the center of radial distortion in pixels. This is\nobsoleted by newer instance variables.\n"},
  {"GetCenter", PyvtkWarpLens_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float)\nC++: double *GetCenter()\n\n"},
  {"SetPrincipalPoint", PyvtkWarpLens_SetPrincipalPoint, METH_VARARGS,
   "SetPrincipalPoint(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetPrincipalPoint(double _arg1, double _arg2)\nSetPrincipalPoint(self, _arg:(float, float)) -> None\nC++: void SetPrincipalPoint(const double _arg[2])\n\nSpecify the calibrated principal point of the camera/lens\n"},
  {"GetPrincipalPoint", PyvtkWarpLens_GetPrincipalPoint, METH_VARARGS,
   "GetPrincipalPoint(self) -> (float, float)\nC++: virtual double *GetPrincipalPoint()\n\n"},
  {"SetK1", PyvtkWarpLens_SetK1, METH_VARARGS,
   "SetK1(self, _arg:float) -> None\nC++: virtual void SetK1(double _arg)\n\nSpecify the symmetric radial distortion parameters for the lens\n"},
  {"GetK1", PyvtkWarpLens_GetK1, METH_VARARGS,
   "GetK1(self) -> float\nC++: virtual double GetK1()\n\n"},
  {"SetK2", PyvtkWarpLens_SetK2, METH_VARARGS,
   "SetK2(self, _arg:float) -> None\nC++: virtual void SetK2(double _arg)\n\n"},
  {"GetK2", PyvtkWarpLens_GetK2, METH_VARARGS,
   "GetK2(self) -> float\nC++: virtual double GetK2()\n\n"},
  {"SetP1", PyvtkWarpLens_SetP1, METH_VARARGS,
   "SetP1(self, _arg:float) -> None\nC++: virtual void SetP1(double _arg)\n\nSpecify the decentering distortion parameters for the lens\n"},
  {"GetP1", PyvtkWarpLens_GetP1, METH_VARARGS,
   "GetP1(self) -> float\nC++: virtual double GetP1()\n\n"},
  {"SetP2", PyvtkWarpLens_SetP2, METH_VARARGS,
   "SetP2(self, _arg:float) -> None\nC++: virtual void SetP2(double _arg)\n\n"},
  {"GetP2", PyvtkWarpLens_GetP2, METH_VARARGS,
   "GetP2(self) -> float\nC++: virtual double GetP2()\n\n"},
  {"SetFormatWidth", PyvtkWarpLens_SetFormatWidth, METH_VARARGS,
   "SetFormatWidth(self, _arg:float) -> None\nC++: virtual void SetFormatWidth(double _arg)\n\nSpecify the imager format width / height in mm\n"},
  {"GetFormatWidth", PyvtkWarpLens_GetFormatWidth, METH_VARARGS,
   "GetFormatWidth(self) -> float\nC++: virtual double GetFormatWidth()\n\n"},
  {"SetFormatHeight", PyvtkWarpLens_SetFormatHeight, METH_VARARGS,
   "SetFormatHeight(self, _arg:float) -> None\nC++: virtual void SetFormatHeight(double _arg)\n\n"},
  {"GetFormatHeight", PyvtkWarpLens_GetFormatHeight, METH_VARARGS,
   "GetFormatHeight(self) -> float\nC++: virtual double GetFormatHeight()\n\n"},
  {"SetImageWidth", PyvtkWarpLens_SetImageWidth, METH_VARARGS,
   "SetImageWidth(self, _arg:int) -> None\nC++: virtual void SetImageWidth(int _arg)\n\nSpecify the image width / height in pixels\n"},
  {"GetImageWidth", PyvtkWarpLens_GetImageWidth, METH_VARARGS,
   "GetImageWidth(self) -> int\nC++: virtual int GetImageWidth()\n\n"},
  {"SetImageHeight", PyvtkWarpLens_SetImageHeight, METH_VARARGS,
   "SetImageHeight(self, _arg:int) -> None\nC++: virtual void SetImageHeight(int _arg)\n\n"},
  {"GetImageHeight", PyvtkWarpLens_GetImageHeight, METH_VARARGS,
   "GetImageHeight(self) -> int\nC++: virtual int GetImageHeight()\n\n"},
  {"FillInputPortInformation", PyvtkWarpLens_FillInputPortInformation, METH_VARARGS,
   "FillInputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nFill the input port information objects for this algorithm.  This\nis invoked by the first call to GetInputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWarpLens_Doc =
  "vtkWarpLens - deform geometry by applying lens distortion\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "vtkWarpLens is a filter that modifies point coordinates by moving in\n"
  "accord with a lens distortion model.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWarpLens_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkWarpLens", // tp_name
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
  PyvtkWarpLens_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWarpLens_StaticNew()
{
  return vtkWarpLens::New();
}

PyObject *PyvtkWarpLens_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWarpLens_Type, PyvtkWarpLens_Methods,
    "vtkWarpLens",
 &PyvtkWarpLens_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPointSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWarpLens(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWarpLens_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWarpLens", o) != 0)
  {
    Py_DECREF(o);
  }

}

