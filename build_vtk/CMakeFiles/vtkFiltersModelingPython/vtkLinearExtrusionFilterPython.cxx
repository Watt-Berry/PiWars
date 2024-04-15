// python wrapper for vtkLinearExtrusionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLinearExtrusionFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLinearExtrusionFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkLinearExtrusionFilter_ClassNew(); }


static PyObject *
PyvtkLinearExtrusionFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLinearExtrusionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLinearExtrusionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLinearExtrusionFilter *tempr = vtkLinearExtrusionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLinearExtrusionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLinearExtrusionFilter::NewInstance());

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
PyvtkLinearExtrusionFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLinearExtrusionFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLinearExtrusionFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SetExtrusionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtrusionType(temp0);
    }
    else
    {
      op->vtkLinearExtrusionFilter::SetExtrusionType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_GetExtrusionTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtrusionTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtrusionTypeMinValue() :
      op->vtkLinearExtrusionFilter::GetExtrusionTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_GetExtrusionTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtrusionTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtrusionTypeMaxValue() :
      op->vtkLinearExtrusionFilter::GetExtrusionTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_GetExtrusionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtrusionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtrusionType() :
      op->vtkLinearExtrusionFilter::GetExtrusionType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SetExtrusionTypeToVectorExtrusion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionTypeToVectorExtrusion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtrusionTypeToVectorExtrusion();
    }
    else
    {
      op->vtkLinearExtrusionFilter::SetExtrusionTypeToVectorExtrusion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SetExtrusionTypeToNormalExtrusion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionTypeToNormalExtrusion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtrusionTypeToNormalExtrusion();
    }
    else
    {
      op->vtkLinearExtrusionFilter::SetExtrusionTypeToNormalExtrusion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SetExtrusionTypeToPointExtrusion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionTypeToPointExtrusion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtrusionTypeToPointExtrusion();
    }
    else
    {
      op->vtkLinearExtrusionFilter::SetExtrusionTypeToPointExtrusion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCapping(temp0);
    }
    else
    {
      op->vtkLinearExtrusionFilter::SetCapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkLinearExtrusionFilter::GetCapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOn();
    }
    else
    {
      op->vtkLinearExtrusionFilter::CappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOff();
    }
    else
    {
      op->vtkLinearExtrusionFilter::CappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

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
      op->vtkLinearExtrusionFilter::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkLinearExtrusionFilter::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SetVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

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
      op->SetVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLinearExtrusionFilter::SetVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLinearExtrusionFilter_SetVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetVector(temp0);
    }
    else
    {
      op->vtkLinearExtrusionFilter::SetVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLinearExtrusionFilter_SetVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLinearExtrusionFilter_SetVector_s1(self, args);
    case 1:
      return PyvtkLinearExtrusionFilter_SetVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVector");
  return nullptr;
}


static PyObject *
PyvtkLinearExtrusionFilter_GetVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVector() :
      op->vtkLinearExtrusionFilter::GetVector());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearExtrusionFilter_SetExtrusionPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

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
      op->SetExtrusionPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLinearExtrusionFilter::SetExtrusionPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLinearExtrusionFilter_SetExtrusionPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtrusionPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetExtrusionPoint(temp0);
    }
    else
    {
      op->vtkLinearExtrusionFilter::SetExtrusionPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLinearExtrusionFilter_SetExtrusionPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLinearExtrusionFilter_SetExtrusionPoint_s1(self, args);
    case 1:
      return PyvtkLinearExtrusionFilter_SetExtrusionPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtrusionPoint");
  return nullptr;
}


static PyObject *
PyvtkLinearExtrusionFilter_GetExtrusionPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtrusionPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearExtrusionFilter *op = static_cast<vtkLinearExtrusionFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetExtrusionPoint() :
      op->vtkLinearExtrusionFilter::GetExtrusionPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkLinearExtrusionFilter_Methods[] = {
  {"IsTypeOf", PyvtkLinearExtrusionFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLinearExtrusionFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLinearExtrusionFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLinearExtrusionFilter\nC++: static vtkLinearExtrusionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLinearExtrusionFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLinearExtrusionFilter\nC++: vtkLinearExtrusionFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLinearExtrusionFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLinearExtrusionFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetExtrusionType", PyvtkLinearExtrusionFilter_SetExtrusionType, METH_VARARGS,
   "SetExtrusionType(self, _arg:int) -> None\nC++: virtual void SetExtrusionType(int _arg)\n\nSet/Get the type of extrusion.\n"},
  {"GetExtrusionTypeMinValue", PyvtkLinearExtrusionFilter_GetExtrusionTypeMinValue, METH_VARARGS,
   "GetExtrusionTypeMinValue(self) -> int\nC++: virtual int GetExtrusionTypeMinValue()\n\n"},
  {"GetExtrusionTypeMaxValue", PyvtkLinearExtrusionFilter_GetExtrusionTypeMaxValue, METH_VARARGS,
   "GetExtrusionTypeMaxValue(self) -> int\nC++: virtual int GetExtrusionTypeMaxValue()\n\n"},
  {"GetExtrusionType", PyvtkLinearExtrusionFilter_GetExtrusionType, METH_VARARGS,
   "GetExtrusionType(self) -> int\nC++: virtual int GetExtrusionType()\n\n"},
  {"SetExtrusionTypeToVectorExtrusion", PyvtkLinearExtrusionFilter_SetExtrusionTypeToVectorExtrusion, METH_VARARGS,
   "SetExtrusionTypeToVectorExtrusion(self) -> None\nC++: void SetExtrusionTypeToVectorExtrusion()\n\n"},
  {"SetExtrusionTypeToNormalExtrusion", PyvtkLinearExtrusionFilter_SetExtrusionTypeToNormalExtrusion, METH_VARARGS,
   "SetExtrusionTypeToNormalExtrusion(self) -> None\nC++: void SetExtrusionTypeToNormalExtrusion()\n\n"},
  {"SetExtrusionTypeToPointExtrusion", PyvtkLinearExtrusionFilter_SetExtrusionTypeToPointExtrusion, METH_VARARGS,
   "SetExtrusionTypeToPointExtrusion(self) -> None\nC++: void SetExtrusionTypeToPointExtrusion()\n\n"},
  {"SetCapping", PyvtkLinearExtrusionFilter_SetCapping, METH_VARARGS,
   "SetCapping(self, _arg:int) -> None\nC++: virtual void SetCapping(vtkTypeBool _arg)\n\nTurn on/off the capping of the skirt.\n"},
  {"GetCapping", PyvtkLinearExtrusionFilter_GetCapping, METH_VARARGS,
   "GetCapping(self) -> int\nC++: virtual vtkTypeBool GetCapping()\n\n"},
  {"CappingOn", PyvtkLinearExtrusionFilter_CappingOn, METH_VARARGS,
   "CappingOn(self) -> None\nC++: virtual void CappingOn()\n\n"},
  {"CappingOff", PyvtkLinearExtrusionFilter_CappingOff, METH_VARARGS,
   "CappingOff(self) -> None\nC++: virtual void CappingOff()\n\n"},
  {"SetScaleFactor", PyvtkLinearExtrusionFilter_SetScaleFactor, METH_VARARGS,
   "SetScaleFactor(self, _arg:float) -> None\nC++: virtual void SetScaleFactor(double _arg)\n\nSet/Get extrusion scale factor,\n"},
  {"GetScaleFactor", PyvtkLinearExtrusionFilter_GetScaleFactor, METH_VARARGS,
   "GetScaleFactor(self) -> float\nC++: virtual double GetScaleFactor()\n\n"},
  {"SetVector", PyvtkLinearExtrusionFilter_SetVector, METH_VARARGS,
   "SetVector(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetVector(double _arg1, double _arg2,\n    double _arg3)\nSetVector(self, _arg:(float, float, float)) -> None\nC++: virtual void SetVector(const double _arg[3])\n\nSet/Get extrusion vector. Only needs to be set if VectorExtrusion\nis turned on.\n"},
  {"GetVector", PyvtkLinearExtrusionFilter_GetVector, METH_VARARGS,
   "GetVector(self) -> (float, float, float)\nC++: virtual double *GetVector()\n\n"},
  {"SetExtrusionPoint", PyvtkLinearExtrusionFilter_SetExtrusionPoint, METH_VARARGS,
   "SetExtrusionPoint(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetExtrusionPoint(double _arg1, double _arg2,\n    double _arg3)\nSetExtrusionPoint(self, _arg:(float, float, float)) -> None\nC++: virtual void SetExtrusionPoint(const double _arg[3])\n\nSet/Get extrusion point. Only needs to be set if PointExtrusion\nis turned on. This is the point towards which extrusion occurs.\n"},
  {"GetExtrusionPoint", PyvtkLinearExtrusionFilter_GetExtrusionPoint, METH_VARARGS,
   "GetExtrusionPoint(self) -> (float, float, float)\nC++: virtual double *GetExtrusionPoint()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLinearExtrusionFilter_Doc =
  "vtkLinearExtrusionFilter - sweep polygonal data creating a \"skirt\"\nfrom free edges and lines, and lines from vertices\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkLinearExtrusionFilter is a modeling filter. It takes polygonal\n"
  "data as input and generates polygonal data on output. The input\n"
  "dataset is swept according to some extrusion function and creates new\n"
  "polygonal primitives. These primitives form a \"skirt\" or swept\n"
  "surface. For example, sweeping a line results in a quadrilateral, and\n"
  "sweeping a triangle creates a \"wedge\".\n\n"
  "There are a number of control parameters for this filter. You can\n"
  "control whether the sweep of a 2D object (i.e., polygon or triangle\n"
  "strip) is capped with the generating geometry via the \"Capping\" ivar.\n"
  "Also, you can extrude in the direction of a user specified vector,\n"
  "towards a point, or in the direction of vertex normals (normals must\n"
  "be provided - use vtkPolyDataNormals if necessary). The amount of\n"
  "extrusion is controlled by the \"ScaleFactor\" instance variable.\n\n"
  "The skirt is generated by locating certain topological features. Free\n"
  "edges (edges of polygons or triangle strips only used by one polygon\n"
  "or triangle strips) generate surfaces. This is true also of lines or\n"
  "polylines. Vertices generate lines.\n\n"
  "This filter can be used to create 3D fonts, 3D irregular bar charts,\n"
  "or to model 2 1/2D objects like punched plates. It also can be used\n"
  "to create solid objects from 2D polygonal meshes.\n\n"
  "@warning\n"
  "Some polygonal objects have no free edges (e.g., sphere). When swept,\n"
  "this will result in two separate surfaces if capping is on, or no\n"
  "surface if capping is off.\n\n"
  "@sa\n"
  "vtkRotationalExtrusionFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLinearExtrusionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkLinearExtrusionFilter", // tp_name
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
  PyvtkLinearExtrusionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLinearExtrusionFilter_StaticNew()
{
  return vtkLinearExtrusionFilter::New();
}

PyObject *PyvtkLinearExtrusionFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLinearExtrusionFilter_Type, PyvtkLinearExtrusionFilter_Methods,
    "vtkLinearExtrusionFilter",
 &PyvtkLinearExtrusionFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLinearExtrusionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLinearExtrusionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLinearExtrusionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_VECTOR_EXTRUSION", 1 },
        { "VTK_NORMAL_EXTRUSION", 2 },
        { "VTK_POINT_EXTRUSION", 3 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

