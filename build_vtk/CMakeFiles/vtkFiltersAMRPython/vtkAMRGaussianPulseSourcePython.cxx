// python wrapper for vtkAMRGaussianPulseSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAMRGaussianPulseSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRGaussianPulseSource(PyObject *dict); }
extern "C" { PyObject *PyvtkAMRGaussianPulseSource_ClassNew(); }


static PyObject *
PyvtkAMRGaussianPulseSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRGaussianPulseSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRGaussianPulseSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRGaussianPulseSource *tempr = vtkAMRGaussianPulseSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRGaussianPulseSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRGaussianPulseSource::NewInstance());

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
PyvtkAMRGaussianPulseSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAMRGaussianPulseSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAMRGaussianPulseSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimension(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLevels(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetNumberOfLevels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRefinementRatio(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetRefinementRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetRootSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRootSpacing(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetRootSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

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
      op->SetPulseOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetPulseOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPulseOrigin(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetPulseOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRGaussianPulseSource_SetPulseOrigin_s1(self, args);
    case 1:
      return PyvtkAMRGaussianPulseSource_SetPulseOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPulseOrigin");
  return nullptr;
}


static PyObject *
PyvtkAMRGaussianPulseSource_GetPulseOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPulseOrigin() :
      op->vtkAMRGaussianPulseSource::GetPulseOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetXPulseOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXPulseOrigin(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetXPulseOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetYPulseOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYPulseOrigin(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetYPulseOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetZPulseOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZPulseOrigin(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetZPulseOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseWidth_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

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
      op->SetPulseWidth(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetPulseWidth(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseWidth_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPulseWidth(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetPulseWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseWidth(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRGaussianPulseSource_SetPulseWidth_s1(self, args);
    case 1:
      return PyvtkAMRGaussianPulseSource_SetPulseWidth_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPulseWidth");
  return nullptr;
}


static PyObject *
PyvtkAMRGaussianPulseSource_GetPulseWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPulseWidth() :
      op->vtkAMRGaussianPulseSource::GetPulseWidth());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetXPulseWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXPulseWidth(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetXPulseWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetYPulseWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYPulseWidth(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetYPulseWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetZPulseWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZPulseWidth(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetZPulseWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPulseAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPulseAmplitude(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetPulseAmplitude(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_GetPulseAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPulseAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPulseAmplitude() :
      op->vtkAMRGaussianPulseSource::GetPulseAmplitude());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRGaussianPulseSource_Methods[] = {
  {"IsTypeOf", PyvtkAMRGaussianPulseSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRGaussianPulseSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRGaussianPulseSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAMRGaussianPulseSource\nC++: static vtkAMRGaussianPulseSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRGaussianPulseSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAMRGaussianPulseSource\nC++: vtkAMRGaussianPulseSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAMRGaussianPulseSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAMRGaussianPulseSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDimension", PyvtkAMRGaussianPulseSource_SetDimension, METH_VARARGS,
   "SetDimension(self, _arg:int) -> None\nC++: virtual void SetDimension(int _arg)\n\nSets the dimension of the AMR dataset to generate\n"},
  {"SetNumberOfLevels", PyvtkAMRGaussianPulseSource_SetNumberOfLevels, METH_VARARGS,
   "SetNumberOfLevels(self, _arg:int) -> None\nC++: virtual void SetNumberOfLevels(int _arg)\n\nSets the number of levels to generate\n"},
  {"SetRefinementRatio", PyvtkAMRGaussianPulseSource_SetRefinementRatio, METH_VARARGS,
   "SetRefinementRatio(self, r:int) -> None\nC++: void SetRefinementRatio(int r)\n\nSet the refinement ratio\n"},
  {"SetRootSpacing", PyvtkAMRGaussianPulseSource_SetRootSpacing, METH_VARARGS,
   "SetRootSpacing(self, h0:float) -> None\nC++: void SetRootSpacing(double h0)\n\nSet the root spacing\n"},
  {"SetPulseOrigin", PyvtkAMRGaussianPulseSource_SetPulseOrigin, METH_VARARGS,
   "SetPulseOrigin(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetPulseOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetPulseOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetPulseOrigin(const double _arg[3])\n\nSet & Get macro for the pulse origin\n"},
  {"GetPulseOrigin", PyvtkAMRGaussianPulseSource_GetPulseOrigin, METH_VARARGS,
   "GetPulseOrigin(self) -> (float, float, float)\nC++: virtual double *GetPulseOrigin()\n\n"},
  {"SetXPulseOrigin", PyvtkAMRGaussianPulseSource_SetXPulseOrigin, METH_VARARGS,
   "SetXPulseOrigin(self, f:float) -> None\nC++: void SetXPulseOrigin(double f)\n\n"},
  {"SetYPulseOrigin", PyvtkAMRGaussianPulseSource_SetYPulseOrigin, METH_VARARGS,
   "SetYPulseOrigin(self, f:float) -> None\nC++: void SetYPulseOrigin(double f)\n\n"},
  {"SetZPulseOrigin", PyvtkAMRGaussianPulseSource_SetZPulseOrigin, METH_VARARGS,
   "SetZPulseOrigin(self, f:float) -> None\nC++: void SetZPulseOrigin(double f)\n\n"},
  {"SetPulseWidth", PyvtkAMRGaussianPulseSource_SetPulseWidth, METH_VARARGS,
   "SetPulseWidth(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetPulseWidth(double _arg1, double _arg2,\n    double _arg3)\nSetPulseWidth(self, _arg:(float, float, float)) -> None\nC++: virtual void SetPulseWidth(const double _arg[3])\n\nSet & Get macro for the pulse width\n"},
  {"GetPulseWidth", PyvtkAMRGaussianPulseSource_GetPulseWidth, METH_VARARGS,
   "GetPulseWidth(self) -> (float, float, float)\nC++: virtual double *GetPulseWidth()\n\n"},
  {"SetXPulseWidth", PyvtkAMRGaussianPulseSource_SetXPulseWidth, METH_VARARGS,
   "SetXPulseWidth(self, f:float) -> None\nC++: void SetXPulseWidth(double f)\n\n"},
  {"SetYPulseWidth", PyvtkAMRGaussianPulseSource_SetYPulseWidth, METH_VARARGS,
   "SetYPulseWidth(self, f:float) -> None\nC++: void SetYPulseWidth(double f)\n\n"},
  {"SetZPulseWidth", PyvtkAMRGaussianPulseSource_SetZPulseWidth, METH_VARARGS,
   "SetZPulseWidth(self, f:float) -> None\nC++: void SetZPulseWidth(double f)\n\n"},
  {"SetPulseAmplitude", PyvtkAMRGaussianPulseSource_SetPulseAmplitude, METH_VARARGS,
   "SetPulseAmplitude(self, _arg:float) -> None\nC++: virtual void SetPulseAmplitude(double _arg)\n\nSet & Get macro for the pulse amplitude\n"},
  {"GetPulseAmplitude", PyvtkAMRGaussianPulseSource_GetPulseAmplitude, METH_VARARGS,
   "GetPulseAmplitude(self) -> float\nC++: virtual double GetPulseAmplitude()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAMRGaussianPulseSource_Doc =
  "vtkAMRGaussianPulseSource -  A source that generates sample AMR data\nwith gaussian pulse field.\n\n"
  "Superclass: vtkOverlappingAMRAlgorithm\n\n"
  "The user\n"
  " can control the refinement ratio as well as the pulse attributes\n"
  "such as\n"
  " the pulse origin, length and amplitude.\n\n"
  "@sa\n"
  " vtkOverlappingAMR\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAMRGaussianPulseSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersAMR.vtkAMRGaussianPulseSource", // tp_name
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
  PyvtkAMRGaussianPulseSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRGaussianPulseSource_StaticNew()
{
  return vtkAMRGaussianPulseSource::New();
}

PyObject *PyvtkAMRGaussianPulseSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAMRGaussianPulseSource_Type, PyvtkAMRGaussianPulseSource_Methods,
    "vtkAMRGaussianPulseSource",
 &PyvtkAMRGaussianPulseSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkOverlappingAMRAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRGaussianPulseSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRGaussianPulseSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRGaussianPulseSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

