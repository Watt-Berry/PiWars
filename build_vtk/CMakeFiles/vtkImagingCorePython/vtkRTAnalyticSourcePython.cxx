// python wrapper for vtkRTAnalyticSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRTAnalyticSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRTAnalyticSource(PyObject *dict); }
extern "C" { PyObject *PyvtkRTAnalyticSource_ClassNew(); }


static PyObject *
PyvtkRTAnalyticSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRTAnalyticSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRTAnalyticSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRTAnalyticSource *tempr = vtkRTAnalyticSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRTAnalyticSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRTAnalyticSource::NewInstance());

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
PyvtkRTAnalyticSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRTAnalyticSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRTAnalyticSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkRTAnalyticSource::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkRTAnalyticSource::GetWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

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
      op->vtkRTAnalyticSource::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRTAnalyticSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

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
      op->vtkRTAnalyticSource::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRTAnalyticSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRTAnalyticSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkRTAnalyticSource_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkRTAnalyticSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkRTAnalyticSource::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximum(temp0);
    }
    else
    {
      op->vtkRTAnalyticSource::SetMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximum() :
      op->vtkRTAnalyticSource::GetMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStandardDeviation(temp0);
    }
    else
    {
      op->vtkRTAnalyticSource::SetStandardDeviation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStandardDeviation() :
      op->vtkRTAnalyticSource::GetStandardDeviation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetXFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXFreq(temp0);
    }
    else
    {
      op->vtkRTAnalyticSource::SetXFreq(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetXFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXFreq() :
      op->vtkRTAnalyticSource::GetXFreq());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetYFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYFreq(temp0);
    }
    else
    {
      op->vtkRTAnalyticSource::SetYFreq(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetYFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetYFreq() :
      op->vtkRTAnalyticSource::GetYFreq());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetZFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZFreq(temp0);
    }
    else
    {
      op->vtkRTAnalyticSource::SetZFreq(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetZFreq(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZFreq");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZFreq() :
      op->vtkRTAnalyticSource::GetZFreq());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetXMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXMag(temp0);
    }
    else
    {
      op->vtkRTAnalyticSource::SetXMag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetXMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXMag() :
      op->vtkRTAnalyticSource::GetXMag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetYMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYMag(temp0);
    }
    else
    {
      op->vtkRTAnalyticSource::SetYMag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetYMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetYMag() :
      op->vtkRTAnalyticSource::GetYMag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetZMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZMag(temp0);
    }
    else
    {
      op->vtkRTAnalyticSource::SetZMag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetZMag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZMag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZMag() :
      op->vtkRTAnalyticSource::GetZMag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_SetSubsampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubsampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubsampleRate(temp0);
    }
    else
    {
      op->vtkRTAnalyticSource::SetSubsampleRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRTAnalyticSource_GetSubsampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubsampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTAnalyticSource *op = static_cast<vtkRTAnalyticSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubsampleRate() :
      op->vtkRTAnalyticSource::GetSubsampleRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRTAnalyticSource_Methods[] = {
  {"IsTypeOf", PyvtkRTAnalyticSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRTAnalyticSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRTAnalyticSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRTAnalyticSource\nC++: static vtkRTAnalyticSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRTAnalyticSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRTAnalyticSource\nC++: vtkRTAnalyticSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRTAnalyticSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRTAnalyticSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetWholeExtent", PyvtkRTAnalyticSource_SetWholeExtent, METH_VARARGS,
   "SetWholeExtent(self, xMinx:int, xMax:int, yMin:int, yMax:int,\n    zMin:int, zMax:int) -> None\nC++: void SetWholeExtent(int xMinx, int xMax, int yMin, int yMax,\n    int zMin, int zMax)\n\nSet/Get the extent of the whole output image. Initial value is\n{-10,10,-10,10,-10,10}\n"},
  {"GetWholeExtent", PyvtkRTAnalyticSource_GetWholeExtent, METH_VARARGS,
   "GetWholeExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetWholeExtent()\n\n"},
  {"SetCenter", PyvtkRTAnalyticSource_SetCenter, METH_VARARGS,
   "SetCenter(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCenter(double _arg1, double _arg2,\n    double _arg3)\nSetCenter(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCenter(const double _arg[3])\n\nSet/Get the center of function. Initial value is {0.0,0.0,0.0}\n"},
  {"GetCenter", PyvtkRTAnalyticSource_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: virtual double *GetCenter()\n\n"},
  {"SetMaximum", PyvtkRTAnalyticSource_SetMaximum, METH_VARARGS,
   "SetMaximum(self, _arg:float) -> None\nC++: virtual void SetMaximum(double _arg)\n\nSet/Get the Maximum value of the function. Initial value is\n255.0.\n"},
  {"GetMaximum", PyvtkRTAnalyticSource_GetMaximum, METH_VARARGS,
   "GetMaximum(self) -> float\nC++: virtual double GetMaximum()\n\n"},
  {"SetStandardDeviation", PyvtkRTAnalyticSource_SetStandardDeviation, METH_VARARGS,
   "SetStandardDeviation(self, _arg:float) -> None\nC++: virtual void SetStandardDeviation(double _arg)\n\nSet/Get the standard deviation of the function. Initial value is\n0.5.\n"},
  {"GetStandardDeviation", PyvtkRTAnalyticSource_GetStandardDeviation, METH_VARARGS,
   "GetStandardDeviation(self) -> float\nC++: virtual double GetStandardDeviation()\n\n"},
  {"SetXFreq", PyvtkRTAnalyticSource_SetXFreq, METH_VARARGS,
   "SetXFreq(self, _arg:float) -> None\nC++: virtual void SetXFreq(double _arg)\n\nSet/Get the natural frequency in x. Initial value is 60.\n"},
  {"GetXFreq", PyvtkRTAnalyticSource_GetXFreq, METH_VARARGS,
   "GetXFreq(self) -> float\nC++: virtual double GetXFreq()\n\n"},
  {"SetYFreq", PyvtkRTAnalyticSource_SetYFreq, METH_VARARGS,
   "SetYFreq(self, _arg:float) -> None\nC++: virtual void SetYFreq(double _arg)\n\nSet/Get the natural frequency in y. Initial value is 30.\n"},
  {"GetYFreq", PyvtkRTAnalyticSource_GetYFreq, METH_VARARGS,
   "GetYFreq(self) -> float\nC++: virtual double GetYFreq()\n\n"},
  {"SetZFreq", PyvtkRTAnalyticSource_SetZFreq, METH_VARARGS,
   "SetZFreq(self, _arg:float) -> None\nC++: virtual void SetZFreq(double _arg)\n\nSet/Get the natural frequency in z. Initial value is 40.\n"},
  {"GetZFreq", PyvtkRTAnalyticSource_GetZFreq, METH_VARARGS,
   "GetZFreq(self) -> float\nC++: virtual double GetZFreq()\n\n"},
  {"SetXMag", PyvtkRTAnalyticSource_SetXMag, METH_VARARGS,
   "SetXMag(self, _arg:float) -> None\nC++: virtual void SetXMag(double _arg)\n\nSet/Get the magnitude in x. Initial value is 10.\n"},
  {"GetXMag", PyvtkRTAnalyticSource_GetXMag, METH_VARARGS,
   "GetXMag(self) -> float\nC++: virtual double GetXMag()\n\n"},
  {"SetYMag", PyvtkRTAnalyticSource_SetYMag, METH_VARARGS,
   "SetYMag(self, _arg:float) -> None\nC++: virtual void SetYMag(double _arg)\n\nSet/Get the magnitude in y. Initial value is 18.\n"},
  {"GetYMag", PyvtkRTAnalyticSource_GetYMag, METH_VARARGS,
   "GetYMag(self) -> float\nC++: virtual double GetYMag()\n\n"},
  {"SetZMag", PyvtkRTAnalyticSource_SetZMag, METH_VARARGS,
   "SetZMag(self, _arg:float) -> None\nC++: virtual void SetZMag(double _arg)\n\nSet/Get the magnitude in z. Initial value is 5.\n"},
  {"GetZMag", PyvtkRTAnalyticSource_GetZMag, METH_VARARGS,
   "GetZMag(self) -> float\nC++: virtual double GetZMag()\n\n"},
  {"SetSubsampleRate", PyvtkRTAnalyticSource_SetSubsampleRate, METH_VARARGS,
   "SetSubsampleRate(self, _arg:int) -> None\nC++: virtual void SetSubsampleRate(int _arg)\n\nSet/Get the sub-sample rate. Initial value is 1.\n"},
  {"GetSubsampleRate", PyvtkRTAnalyticSource_GetSubsampleRate, METH_VARARGS,
   "GetSubsampleRate(self) -> int\nC++: virtual int GetSubsampleRate()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRTAnalyticSource_Doc =
  "vtkRTAnalyticSource - Create an image for regression testing\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkRTAnalyticSource just produces images with pixel values determined\n"
  "by a Maximum*Gaussian*XMag*sin(XFreq*x)*sin(YFreq*y)*cos(ZFreq*z)\n"
  "Values are float scalars on point data with name \"RTData\".\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRTAnalyticSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkRTAnalyticSource", // tp_name
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
  PyvtkRTAnalyticSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRTAnalyticSource_StaticNew()
{
  return vtkRTAnalyticSource::New();
}

PyObject *PyvtkRTAnalyticSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRTAnalyticSource_Type, PyvtkRTAnalyticSource_Methods,
    "vtkRTAnalyticSource",
 &PyvtkRTAnalyticSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRTAnalyticSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRTAnalyticSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRTAnalyticSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

