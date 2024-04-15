// python wrapper for vtkDistancePolyDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDistancePolyDataFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDistancePolyDataFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkDistancePolyDataFilter_ClassNew(); }


static PyObject *
PyvtkDistancePolyDataFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDistancePolyDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDistancePolyDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDistancePolyDataFilter *tempr = vtkDistancePolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDistancePolyDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDistancePolyDataFilter::NewInstance());

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
PyvtkDistancePolyDataFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDistancePolyDataFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDistancePolyDataFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_SetSignedDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSignedDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSignedDistance(temp0);
    }
    else
    {
      op->vtkDistancePolyDataFilter::SetSignedDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_GetSignedDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSignedDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSignedDistance() :
      op->vtkDistancePolyDataFilter::GetSignedDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_SignedDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SignedDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SignedDistanceOn();
    }
    else
    {
      op->vtkDistancePolyDataFilter::SignedDistanceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_SignedDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SignedDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SignedDistanceOff();
    }
    else
    {
      op->vtkDistancePolyDataFilter::SignedDistanceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_SetNegateDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNegateDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNegateDistance(temp0);
    }
    else
    {
      op->vtkDistancePolyDataFilter::SetNegateDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_GetNegateDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNegateDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNegateDistance() :
      op->vtkDistancePolyDataFilter::GetNegateDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_NegateDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NegateDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NegateDistanceOn();
    }
    else
    {
      op->vtkDistancePolyDataFilter::NegateDistanceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_NegateDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NegateDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NegateDistanceOff();
    }
    else
    {
      op->vtkDistancePolyDataFilter::NegateDistanceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_SetComputeSecondDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeSecondDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeSecondDistance(temp0);
    }
    else
    {
      op->vtkDistancePolyDataFilter::SetComputeSecondDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_GetComputeSecondDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeSecondDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeSecondDistance() :
      op->vtkDistancePolyDataFilter::GetComputeSecondDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_ComputeSecondDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSecondDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeSecondDistanceOn();
    }
    else
    {
      op->vtkDistancePolyDataFilter::ComputeSecondDistanceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_ComputeSecondDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSecondDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeSecondDistanceOff();
    }
    else
    {
      op->vtkDistancePolyDataFilter::ComputeSecondDistanceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_GetSecondDistanceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondDistanceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSecondDistanceOutput() :
      op->vtkDistancePolyDataFilter::GetSecondDistanceOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_SetComputeCellCenterDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeCellCenterDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeCellCenterDistance(temp0);
    }
    else
    {
      op->vtkDistancePolyDataFilter::SetComputeCellCenterDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_GetComputeCellCenterDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeCellCenterDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeCellCenterDistance() :
      op->vtkDistancePolyDataFilter::GetComputeCellCenterDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_ComputeCellCenterDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellCenterDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeCellCenterDistanceOn();
    }
    else
    {
      op->vtkDistancePolyDataFilter::ComputeCellCenterDistanceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_ComputeCellCenterDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellCenterDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeCellCenterDistanceOff();
    }
    else
    {
      op->vtkDistancePolyDataFilter::ComputeCellCenterDistanceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_SetComputeDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeDirection(temp0);
    }
    else
    {
      op->vtkDistancePolyDataFilter::SetComputeDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_GetComputeDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeDirection() :
      op->vtkDistancePolyDataFilter::GetComputeDirection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_ComputeDirectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDirectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeDirectionOn();
    }
    else
    {
      op->vtkDistancePolyDataFilter::ComputeDirectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistancePolyDataFilter_ComputeDirectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDirectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistancePolyDataFilter *op = static_cast<vtkDistancePolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeDirectionOff();
    }
    else
    {
      op->vtkDistancePolyDataFilter::ComputeDirectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDistancePolyDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkDistancePolyDataFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDistancePolyDataFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDistancePolyDataFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDistancePolyDataFilter\nC++: static vtkDistancePolyDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDistancePolyDataFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDistancePolyDataFilter\nC++: vtkDistancePolyDataFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDistancePolyDataFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDistancePolyDataFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSignedDistance", PyvtkDistancePolyDataFilter_SetSignedDistance, METH_VARARGS,
   "SetSignedDistance(self, _arg:int) -> None\nC++: virtual void SetSignedDistance(vtkTypeBool _arg)\n\nEnable/disable computation of the signed distance between the\nfirst poly data and the second poly data. Defaults to on.\n"},
  {"GetSignedDistance", PyvtkDistancePolyDataFilter_GetSignedDistance, METH_VARARGS,
   "GetSignedDistance(self) -> int\nC++: virtual vtkTypeBool GetSignedDistance()\n\n"},
  {"SignedDistanceOn", PyvtkDistancePolyDataFilter_SignedDistanceOn, METH_VARARGS,
   "SignedDistanceOn(self) -> None\nC++: virtual void SignedDistanceOn()\n\n"},
  {"SignedDistanceOff", PyvtkDistancePolyDataFilter_SignedDistanceOff, METH_VARARGS,
   "SignedDistanceOff(self) -> None\nC++: virtual void SignedDistanceOff()\n\n"},
  {"SetNegateDistance", PyvtkDistancePolyDataFilter_SetNegateDistance, METH_VARARGS,
   "SetNegateDistance(self, _arg:int) -> None\nC++: virtual void SetNegateDistance(vtkTypeBool _arg)\n\nEnable/disable negation of the distance values. Defaults to off.\nHas no effect if SignedDistance is off.\n"},
  {"GetNegateDistance", PyvtkDistancePolyDataFilter_GetNegateDistance, METH_VARARGS,
   "GetNegateDistance(self) -> int\nC++: virtual vtkTypeBool GetNegateDistance()\n\n"},
  {"NegateDistanceOn", PyvtkDistancePolyDataFilter_NegateDistanceOn, METH_VARARGS,
   "NegateDistanceOn(self) -> None\nC++: virtual void NegateDistanceOn()\n\n"},
  {"NegateDistanceOff", PyvtkDistancePolyDataFilter_NegateDistanceOff, METH_VARARGS,
   "NegateDistanceOff(self) -> None\nC++: virtual void NegateDistanceOff()\n\n"},
  {"SetComputeSecondDistance", PyvtkDistancePolyDataFilter_SetComputeSecondDistance, METH_VARARGS,
   "SetComputeSecondDistance(self, _arg:int) -> None\nC++: virtual void SetComputeSecondDistance(vtkTypeBool _arg)\n\nEnable/disable computation of a second output poly data with the\ndistance from the first poly data at each point. Defaults to on.\n"},
  {"GetComputeSecondDistance", PyvtkDistancePolyDataFilter_GetComputeSecondDistance, METH_VARARGS,
   "GetComputeSecondDistance(self) -> int\nC++: virtual vtkTypeBool GetComputeSecondDistance()\n\n"},
  {"ComputeSecondDistanceOn", PyvtkDistancePolyDataFilter_ComputeSecondDistanceOn, METH_VARARGS,
   "ComputeSecondDistanceOn(self) -> None\nC++: virtual void ComputeSecondDistanceOn()\n\n"},
  {"ComputeSecondDistanceOff", PyvtkDistancePolyDataFilter_ComputeSecondDistanceOff, METH_VARARGS,
   "ComputeSecondDistanceOff(self) -> None\nC++: virtual void ComputeSecondDistanceOff()\n\n"},
  {"GetSecondDistanceOutput", PyvtkDistancePolyDataFilter_GetSecondDistanceOutput, METH_VARARGS,
   "GetSecondDistanceOutput(self) -> vtkPolyData\nC++: vtkPolyData *GetSecondDistanceOutput()\n\nGet the second output, which is a copy of the second input with\nan additional distance scalar field. Note this will return a\nvalid data object only after this->Update() is called.\n"},
  {"SetComputeCellCenterDistance", PyvtkDistancePolyDataFilter_SetComputeCellCenterDistance, METH_VARARGS,
   "SetComputeCellCenterDistance(self, _arg:int) -> None\nC++: virtual void SetComputeCellCenterDistance(vtkTypeBool _arg)\n\nEnable/disable computation of cell-center distance to the second\npoly data. Defaults to on for backwards compatibility.\n\nIf the first poly data consists of just vertex cells, computing\npoint and cell-center distances is redundant.\n"},
  {"GetComputeCellCenterDistance", PyvtkDistancePolyDataFilter_GetComputeCellCenterDistance, METH_VARARGS,
   "GetComputeCellCenterDistance(self) -> int\nC++: virtual vtkTypeBool GetComputeCellCenterDistance()\n\n"},
  {"ComputeCellCenterDistanceOn", PyvtkDistancePolyDataFilter_ComputeCellCenterDistanceOn, METH_VARARGS,
   "ComputeCellCenterDistanceOn(self) -> None\nC++: virtual void ComputeCellCenterDistanceOn()\n\n"},
  {"ComputeCellCenterDistanceOff", PyvtkDistancePolyDataFilter_ComputeCellCenterDistanceOff, METH_VARARGS,
   "ComputeCellCenterDistanceOff(self) -> None\nC++: virtual void ComputeCellCenterDistanceOff()\n\n"},
  {"SetComputeDirection", PyvtkDistancePolyDataFilter_SetComputeDirection, METH_VARARGS,
   "SetComputeDirection(self, _arg:int) -> None\nC++: virtual void SetComputeDirection(vtkTypeBool _arg)\n\nEnable/disable computation of unit directions for the distances.\nDefaults to off for backwards compatibility.\n"},
  {"GetComputeDirection", PyvtkDistancePolyDataFilter_GetComputeDirection, METH_VARARGS,
   "GetComputeDirection(self) -> int\nC++: virtual vtkTypeBool GetComputeDirection()\n\n"},
  {"ComputeDirectionOn", PyvtkDistancePolyDataFilter_ComputeDirectionOn, METH_VARARGS,
   "ComputeDirectionOn(self) -> None\nC++: virtual void ComputeDirectionOn()\n\n"},
  {"ComputeDirectionOff", PyvtkDistancePolyDataFilter_ComputeDirectionOff, METH_VARARGS,
   "ComputeDirectionOff(self) -> None\nC++: virtual void ComputeDirectionOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDistancePolyDataFilter_Doc =
  "vtkDistancePolyDataFilter - Computes the signed distance from one\nvtkPolyData to another.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "The signed distance to the second input is computed at every point in\n"
  "the first input using vtkImplicitPolyDataDistance. Optionally, the\n"
  "signed distance to the first input at every point in the second input\n"
  "can be computed. This may be enabled by calling\n"
  "ComputeSecondDistanceOn().\n\n"
  "If the signed distance is not desired, the unsigned distance can be\n"
  "computed by calling SignedDistanceOff(). The signed distance field\n"
  "may be negated by calling NegateDistanceOn();\n\n"
  "Directions can be computed in conjunction with distances by calling\n"
  "ComputeDirectionsOn().\n\n"
  "This code was contributed in the VTK Journal paper: \"Boolean Operations on Surfaces in VTK Without External\n"
  "Libraries\" by Cory Quammen, Chris Weigle C., Russ Taylor\n"
  "http://hdl.handle.net/10380/3262\n"
  "http://www.midasjournal.org/browse/publication/797\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDistancePolyDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkDistancePolyDataFilter", // tp_name
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
  PyvtkDistancePolyDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDistancePolyDataFilter_StaticNew()
{
  return vtkDistancePolyDataFilter::New();
}

PyObject *PyvtkDistancePolyDataFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDistancePolyDataFilter_Type, PyvtkDistancePolyDataFilter_Methods,
    "vtkDistancePolyDataFilter",
 &PyvtkDistancePolyDataFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDistancePolyDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDistancePolyDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDistancePolyDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

