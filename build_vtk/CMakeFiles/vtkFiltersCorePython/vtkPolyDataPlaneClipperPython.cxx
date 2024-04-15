// python wrapper for vtkPolyDataPlaneClipper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPolyDataPlaneClipper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataPlaneClipper(PyObject *dict); }
extern "C" { PyObject *PyvtkPolyDataPlaneClipper_ClassNew(); }


static PyObject *
PyvtkPolyDataPlaneClipper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataPlaneClipper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataPlaneClipper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataPlaneClipper *tempr = vtkPolyDataPlaneClipper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataPlaneClipper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataPlaneClipper::NewInstance());

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
PyvtkPolyDataPlaneClipper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolyDataPlaneClipper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolyDataPlaneClipper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPolyDataPlaneClipper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0);
    }
    else
    {
      op->vtkPolyDataPlaneClipper::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetPlane() :
      op->vtkPolyDataPlaneClipper::GetPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_SetClippingLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClippingLoops(temp0);
    }
    else
    {
      op->vtkPolyDataPlaneClipper::SetClippingLoops(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_GetClippingLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetClippingLoops() :
      op->vtkPolyDataPlaneClipper::GetClippingLoops());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_ClippingLoopsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClippingLoopsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClippingLoopsOn();
    }
    else
    {
      op->vtkPolyDataPlaneClipper::ClippingLoopsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_ClippingLoopsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClippingLoopsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClippingLoopsOff();
    }
    else
    {
      op->vtkPolyDataPlaneClipper::ClippingLoopsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  bool temp0 = false;
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
      op->vtkPolyDataPlaneClipper::SetCapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkPolyDataPlaneClipper::GetCapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOn();
    }
    else
    {
      op->vtkPolyDataPlaneClipper::CappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOff();
    }
    else
    {
      op->vtkPolyDataPlaneClipper::CappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_GetCap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCap() :
      op->vtkPolyDataPlaneClipper::GetCap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_SetPassCapPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCapPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassCapPointData(temp0);
    }
    else
    {
      op->vtkPolyDataPlaneClipper::SetPassCapPointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_GetPassCapPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCapPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassCapPointData() :
      op->vtkPolyDataPlaneClipper::GetPassCapPointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_PassCapPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCapPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCapPointDataOn();
    }
    else
    {
      op->vtkPolyDataPlaneClipper::PassCapPointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_PassCapPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCapPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCapPointDataOff();
    }
    else
    {
      op->vtkPolyDataPlaneClipper::PassCapPointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

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
      op->vtkPolyDataPlaneClipper::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkPolyDataPlaneClipper::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_SetBatchSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBatchSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBatchSize(temp0);
    }
    else
    {
      op->vtkPolyDataPlaneClipper::SetBatchSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_GetBatchSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBatchSizeMinValue() :
      op->vtkPolyDataPlaneClipper::GetBatchSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_GetBatchSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBatchSizeMaxValue() :
      op->vtkPolyDataPlaneClipper::GetBatchSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_GetBatchSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneClipper *op = static_cast<vtkPolyDataPlaneClipper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBatchSize() :
      op->vtkPolyDataPlaneClipper::GetBatchSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneClipper_CanFullyProcessDataObject(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CanFullyProcessDataObject");

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = vtkPolyDataPlaneClipper::CanFullyProcessDataObject(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataPlaneClipper_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataPlaneClipper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyDataPlaneClipper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyDataPlaneClipper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPolyDataPlaneClipper\nC++: static vtkPolyDataPlaneClipper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyDataPlaneClipper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolyDataPlaneClipper\nC++: vtkPolyDataPlaneClipper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolyDataPlaneClipper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolyDataPlaneClipper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkPolyDataPlaneClipper_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time depends on the delegated clipping plane.\n"},
  {"SetPlane", PyvtkPolyDataPlaneClipper_SetPlane, METH_VARARGS,
   "SetPlane(self, __a:vtkPlane) -> None\nC++: void SetPlane(vtkPlane *)\n\nSpecify the plane (an implicit function) to perform the clipping.\nThe definition of the plane used to perform the clipping (i.e.,\nits origin and normal) is controlled via this instance of\nvtkPlane.\n"},
  {"GetPlane", PyvtkPolyDataPlaneClipper_GetPlane, METH_VARARGS,
   "GetPlane(self) -> vtkPlane\nC++: virtual vtkPlane *GetPlane()\n\n"},
  {"SetClippingLoops", PyvtkPolyDataPlaneClipper_SetClippingLoops, METH_VARARGS,
   "SetClippingLoops(self, _arg:bool) -> None\nC++: virtual void SetClippingLoops(bool _arg)\n\nSpecify whether to generate clipping loops, i.e., the\nintersection of the plane with the input polydata. The generation\nof clipping loops will function correctly even if the input\nvtkPolyData consists of non-closed shells; however if the shells\nare not closed, the loops will not be either. If enabled, a\nsecond vtkPolyData output will be produced that contains the\nclipping loops (in vtkPolyData::Lines)\n"},
  {"GetClippingLoops", PyvtkPolyDataPlaneClipper_GetClippingLoops, METH_VARARGS,
   "GetClippingLoops(self) -> bool\nC++: virtual bool GetClippingLoops()\n\n"},
  {"ClippingLoopsOn", PyvtkPolyDataPlaneClipper_ClippingLoopsOn, METH_VARARGS,
   "ClippingLoopsOn(self) -> None\nC++: virtual void ClippingLoopsOn()\n\n"},
  {"ClippingLoopsOff", PyvtkPolyDataPlaneClipper_ClippingLoopsOff, METH_VARARGS,
   "ClippingLoopsOff(self) -> None\nC++: virtual void ClippingLoopsOff()\n\n"},
  {"SetCapping", PyvtkPolyDataPlaneClipper_SetCapping, METH_VARARGS,
   "SetCapping(self, _arg:bool) -> None\nC++: virtual void SetCapping(bool _arg)\n\nSpecify whether to cap the clipped output vtkPolyData. If\nenabled, a second vtkPolyData output will be produced that\ncontains the capping polygons (in vtkPolyData:Polys). Note that\nthe capping operation assumes that the input to this filter is a\nmanifold shell. If not, no output will be generated. Note that\npoint data or cell data is not produced on this second output\n(because the results of interpolation across the cap(s) are\ngenerally nonsensical).\n"},
  {"GetCapping", PyvtkPolyDataPlaneClipper_GetCapping, METH_VARARGS,
   "GetCapping(self) -> bool\nC++: virtual bool GetCapping()\n\n"},
  {"CappingOn", PyvtkPolyDataPlaneClipper_CappingOn, METH_VARARGS,
   "CappingOn(self) -> None\nC++: virtual void CappingOn()\n\n"},
  {"CappingOff", PyvtkPolyDataPlaneClipper_CappingOff, METH_VARARGS,
   "CappingOff(self) -> None\nC++: virtual void CappingOff()\n\n"},
  {"GetCap", PyvtkPolyDataPlaneClipper_GetCap, METH_VARARGS,
   "GetCap(self) -> vtkPolyData\nC++: vtkPolyData *GetCap()\n\nGet the output dataset representing the clipping loops and\ncapping polygons.  This output is empty if both ClippingLoops and\nCapping is off. Otherwise, if there is an intersection with the\nclipping plane, then polyline loops are available from the\nvtkPolyData::Lines, and the capping polygons are available from\nthe vtkPolyData::Polys data arrays.\n"},
  {"SetPassCapPointData", PyvtkPolyDataPlaneClipper_SetPassCapPointData, METH_VARARGS,
   "SetPassCapPointData(self, _arg:bool) -> None\nC++: virtual void SetPassCapPointData(bool _arg)\n\nSpecify whether to pass point data through to the second (Cap)\noutput. By default this is disabled. This feature is useful in\ncertain situations when trying to combine the cap with clipped\npolydata.\n"},
  {"GetPassCapPointData", PyvtkPolyDataPlaneClipper_GetPassCapPointData, METH_VARARGS,
   "GetPassCapPointData(self) -> bool\nC++: virtual bool GetPassCapPointData()\n\n"},
  {"PassCapPointDataOn", PyvtkPolyDataPlaneClipper_PassCapPointDataOn, METH_VARARGS,
   "PassCapPointDataOn(self) -> None\nC++: virtual void PassCapPointDataOn()\n\n"},
  {"PassCapPointDataOff", PyvtkPolyDataPlaneClipper_PassCapPointDataOff, METH_VARARGS,
   "PassCapPointDataOff(self) -> None\nC++: virtual void PassCapPointDataOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkPolyDataPlaneClipper_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points type. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\nOutputPointsPrecision is DEFAULT_PRECISION by default.\n"},
  {"GetOutputPointsPrecision", PyvtkPolyDataPlaneClipper_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"SetBatchSize", PyvtkPolyDataPlaneClipper_SetBatchSize, METH_VARARGS,
   "SetBatchSize(self, _arg:int) -> None\nC++: virtual void SetBatchSize(unsigned int _arg)\n\nSpecify the number of input triangles in a batch, where a batch\ndefines a subset of the input triangles operated on during\nthreaded execution. Generally this is only used for debugging or\nperformance studies (since batch size affects the thread\nworkload).\n"},
  {"GetBatchSizeMinValue", PyvtkPolyDataPlaneClipper_GetBatchSizeMinValue, METH_VARARGS,
   "GetBatchSizeMinValue(self) -> int\nC++: virtual unsigned int GetBatchSizeMinValue()\n\n"},
  {"GetBatchSizeMaxValue", PyvtkPolyDataPlaneClipper_GetBatchSizeMaxValue, METH_VARARGS,
   "GetBatchSizeMaxValue(self) -> int\nC++: virtual unsigned int GetBatchSizeMaxValue()\n\n"},
  {"GetBatchSize", PyvtkPolyDataPlaneClipper_GetBatchSize, METH_VARARGS,
   "GetBatchSize(self) -> int\nC++: virtual unsigned int GetBatchSize()\n\n"},
  {"CanFullyProcessDataObject", PyvtkPolyDataPlaneClipper_CanFullyProcessDataObject, METH_VARARGS,
   "CanFullyProcessDataObject(object:vtkDataObject) -> bool\nC++: static bool CanFullyProcessDataObject(vtkDataObject *object)\n\nThis helper method can be used to determine the if the input\nvtkPolyData contains convex polygonal cells, and therefore is\nsuitable for processing by this filter. (The name of the method\nis consistent with other filters that perform similar\noperations.) This method returns true when the input contains\nonly polygons (i.e., no verts, lines, or triangle strips); and\neach polygon is convex. It returns false otherwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPolyDataPlaneClipper_Doc =
  "vtkPolyDataPlaneClipper - clip a vtkPolyData with a plane and\noptionally cap it\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPolyDataPlaneClipper clips an input vtkPolyData with a plane to\n"
  "produce an output vtkPolyData. (Here clipping means extracting cells,\n"
  "or portions of cells, that are on one side of a specified plane.) The\n"
  "input vtkPolyData must consist of convex polygons forming one or more\n"
  "manifold shells (use vtkTriangleFilter to triangulate the input if\n"
  "necessary. Note that if the input cells are non-convex, then the\n"
  "clipping operation will likely produce erroneous results.)\n\n"
  "An optional, second vtkPolyData output may also be generated if\n"
  "either ClippingLoops or Capping is enabled. The clipping loops are a\n"
  "set of lines representing the curve(s) of intersection between the\n"
  "plane and the one or more shells of the input vtkPolyData. If Capping\n"
  "is enabled, then the clipping loops are tessellated to produce a\n"
  "\"cap\" across the clipped output. The capping option is only available\n"
  "if the input consists of one or more manifold shells. If not, the\n"
  "loop generation will fail and no cap(s) will be generated.\n\n"
  "@warning\n"
  "The method CanFullyProcessDataObject() is available to see whether\n"
  "the input data can be successfully processed by this filter. Use this\n"
  "method sparingly because it can be slow.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkClipPolyData vtkClipClosedSurface vtkPolyDataPlaneCutter\n"
  "vtkPlaneCutter vtkTriangleFilter vtkCutter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolyDataPlaneClipper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkPolyDataPlaneClipper", // tp_name
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
  PyvtkPolyDataPlaneClipper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyDataPlaneClipper_StaticNew()
{
  return vtkPolyDataPlaneClipper::New();
}

PyObject *PyvtkPolyDataPlaneClipper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolyDataPlaneClipper_Type, PyvtkPolyDataPlaneClipper_Methods,
    "vtkPolyDataPlaneClipper",
 &PyvtkPolyDataPlaneClipper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyDataPlaneClipper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataPlaneClipper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataPlaneClipper", o) != 0)
  {
    Py_DECREF(o);
  }

}

