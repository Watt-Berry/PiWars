// python wrapper for vtkPolyDataPlaneCutter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPolyDataPlaneCutter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataPlaneCutter(PyObject *dict); }
extern "C" { PyObject *PyvtkPolyDataPlaneCutter_ClassNew(); }


static PyObject *
PyvtkPolyDataPlaneCutter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataPlaneCutter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataPlaneCutter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataPlaneCutter *tempr = vtkPolyDataPlaneCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataPlaneCutter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataPlaneCutter::NewInstance());

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
PyvtkPolyDataPlaneCutter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolyDataPlaneCutter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolyDataPlaneCutter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

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
      op->vtkPolyDataPlaneCutter::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetPlane() :
      op->vtkPolyDataPlaneCutter::GetPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeNormals(temp0);
    }
    else
    {
      op->vtkPolyDataPlaneCutter::SetComputeNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeNormals() :
      op->vtkPolyDataPlaneCutter::GetComputeNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOn();
    }
    else
    {
      op->vtkPolyDataPlaneCutter::ComputeNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOff();
    }
    else
    {
      op->vtkPolyDataPlaneCutter::ComputeNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_SetInterpolateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolateAttributes(temp0);
    }
    else
    {
      op->vtkPolyDataPlaneCutter::SetInterpolateAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_GetInterpolateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInterpolateAttributes() :
      op->vtkPolyDataPlaneCutter::GetInterpolateAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_InterpolateAttributesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributesOn();
    }
    else
    {
      op->vtkPolyDataPlaneCutter::InterpolateAttributesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_InterpolateAttributesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributesOff();
    }
    else
    {
      op->vtkPolyDataPlaneCutter::InterpolateAttributesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

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
      op->vtkPolyDataPlaneCutter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkPolyDataPlaneCutter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPolyDataPlaneCutter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_SetBatchSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBatchSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

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
      op->vtkPolyDataPlaneCutter::SetBatchSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_GetBatchSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBatchSizeMinValue() :
      op->vtkPolyDataPlaneCutter::GetBatchSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_GetBatchSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBatchSizeMaxValue() :
      op->vtkPolyDataPlaneCutter::GetBatchSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_GetBatchSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPlaneCutter *op = static_cast<vtkPolyDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBatchSize() :
      op->vtkPolyDataPlaneCutter::GetBatchSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPlaneCutter_CanFullyProcessDataObject(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CanFullyProcessDataObject");

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = vtkPolyDataPlaneCutter::CanFullyProcessDataObject(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataPlaneCutter_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataPlaneCutter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyDataPlaneCutter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyDataPlaneCutter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPolyDataPlaneCutter\nC++: static vtkPolyDataPlaneCutter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyDataPlaneCutter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolyDataPlaneCutter\nC++: vtkPolyDataPlaneCutter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolyDataPlaneCutter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolyDataPlaneCutter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPlane", PyvtkPolyDataPlaneCutter_SetPlane, METH_VARARGS,
   "SetPlane(self, __a:vtkPlane) -> None\nC++: void SetPlane(vtkPlane *)\n\nSpecify the plane (an implicit function) to perform the cutting.\nThe definition of the plane used to perform the cutting (i.e.,\nits origin and normal) is controlled via this instance of\nvtkPlane.\n"},
  {"GetPlane", PyvtkPolyDataPlaneCutter_GetPlane, METH_VARARGS,
   "GetPlane(self) -> vtkPlane\nC++: virtual vtkPlane *GetPlane()\n\n"},
  {"SetComputeNormals", PyvtkPolyDataPlaneCutter_SetComputeNormals, METH_VARARGS,
   "SetComputeNormals(self, _arg:bool) -> None\nC++: virtual void SetComputeNormals(bool _arg)\n\nSet/Get the computation of normals. The normal generated is\nsimply the cut plane normal. The normals are associated with the\noutput points. By default the computation of normals is disabled.\n"},
  {"GetComputeNormals", PyvtkPolyDataPlaneCutter_GetComputeNormals, METH_VARARGS,
   "GetComputeNormals(self) -> bool\nC++: virtual bool GetComputeNormals()\n\n"},
  {"ComputeNormalsOn", PyvtkPolyDataPlaneCutter_ComputeNormalsOn, METH_VARARGS,
   "ComputeNormalsOn(self) -> None\nC++: virtual void ComputeNormalsOn()\n\n"},
  {"ComputeNormalsOff", PyvtkPolyDataPlaneCutter_ComputeNormalsOff, METH_VARARGS,
   "ComputeNormalsOff(self) -> None\nC++: virtual void ComputeNormalsOff()\n\n"},
  {"SetInterpolateAttributes", PyvtkPolyDataPlaneCutter_SetInterpolateAttributes, METH_VARARGS,
   "SetInterpolateAttributes(self, _arg:bool) -> None\nC++: virtual void SetInterpolateAttributes(bool _arg)\n\nIndicate whether to interpolate attribute data. By default this\nis enabled. Note that both cell data and point data is\ninterpolated and output.\n"},
  {"GetInterpolateAttributes", PyvtkPolyDataPlaneCutter_GetInterpolateAttributes, METH_VARARGS,
   "GetInterpolateAttributes(self) -> bool\nC++: virtual bool GetInterpolateAttributes()\n\n"},
  {"InterpolateAttributesOn", PyvtkPolyDataPlaneCutter_InterpolateAttributesOn, METH_VARARGS,
   "InterpolateAttributesOn(self) -> None\nC++: virtual void InterpolateAttributesOn()\n\n"},
  {"InterpolateAttributesOff", PyvtkPolyDataPlaneCutter_InterpolateAttributesOff, METH_VARARGS,
   "InterpolateAttributesOff(self) -> None\nC++: virtual void InterpolateAttributesOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkPolyDataPlaneCutter_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points type. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\nOutputPointsPrecision is DEFAULT_PRECISION by default.\n"},
  {"GetOutputPointsPrecision", PyvtkPolyDataPlaneCutter_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"GetMTime", PyvtkPolyDataPlaneCutter_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time depends on the delegated cutting plane.\n"},
  {"SetBatchSize", PyvtkPolyDataPlaneCutter_SetBatchSize, METH_VARARGS,
   "SetBatchSize(self, _arg:int) -> None\nC++: virtual void SetBatchSize(unsigned int _arg)\n\nSpecify the number of input cells in a batch, where a batch\ndefines a subset of the input cells operated on during threaded\nexecution. Generally this is only used for debugging or\nperformance studies (since batch size affects the thread\nworkload). By default, the batch size is 10,000 cells.\n"},
  {"GetBatchSizeMinValue", PyvtkPolyDataPlaneCutter_GetBatchSizeMinValue, METH_VARARGS,
   "GetBatchSizeMinValue(self) -> int\nC++: virtual unsigned int GetBatchSizeMinValue()\n\n"},
  {"GetBatchSizeMaxValue", PyvtkPolyDataPlaneCutter_GetBatchSizeMaxValue, METH_VARARGS,
   "GetBatchSizeMaxValue(self) -> int\nC++: virtual unsigned int GetBatchSizeMaxValue()\n\n"},
  {"GetBatchSize", PyvtkPolyDataPlaneCutter_GetBatchSize, METH_VARARGS,
   "GetBatchSize(self) -> int\nC++: virtual unsigned int GetBatchSize()\n\n"},
  {"CanFullyProcessDataObject", PyvtkPolyDataPlaneCutter_CanFullyProcessDataObject, METH_VARARGS,
   "CanFullyProcessDataObject(object:vtkDataObject) -> bool\nC++: static bool CanFullyProcessDataObject(vtkDataObject *object)\n\nThis helper method can be used to determine the if the input\nvtkPolyData contains convex polygonal cells, and therefore is\nsuitable for processing by this filter. (The name of the method\nis consistent with other filters that perform similar\noperations.) This method returns true when the input contains\nonly polygons (i.e., no verts, lines, or triangle strips); and\neach polygon is convex. It returns false otherwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPolyDataPlaneCutter_Doc =
  "vtkPolyDataPlaneCutter - threaded (high-performance) cutting of a\nvtkPolyData with a plane\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPolyDataPlaneCutter cuts an input vtkPolyData with a plane to\n"
  "produce an output vtkPolyData. (Here cutting means slicing through\n"
  "the polydata to generates lines of intersection.) The input\n"
  "vtkPolyData must consist of convex polygons - vertices, lines, and\n"
  "triangle strips are ignored. (Note: use vtkTriangleFilter to\n"
  "triangulate non-convex input polygons if necessary. If the input\n"
  "cells are non-convex, then the cutting operation will likely produce\n"
  "erroneous results.)\n\n"
  "The main difference between this filter and other cutting filters is\n"
  "that vtkPolyDataPlaneCutter is tuned for performance on vtkPolyData\n"
  "with convex polygonal cells.\n\n"
  "@warning\n"
  "The method CanFullyProcessDataObject() is available to see whether\n"
  "the input data can be successfully processed by this filter. Use this\n"
  "method sparingly because it can be slow.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkPlaneCutter vtkCutter vtkPolyDataPlaneClipper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolyDataPlaneCutter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkPolyDataPlaneCutter", // tp_name
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
  PyvtkPolyDataPlaneCutter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyDataPlaneCutter_StaticNew()
{
  return vtkPolyDataPlaneCutter::New();
}

PyObject *PyvtkPolyDataPlaneCutter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolyDataPlaneCutter_Type, PyvtkPolyDataPlaneCutter_Methods,
    "vtkPolyDataPlaneCutter",
 &PyvtkPolyDataPlaneCutter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyDataPlaneCutter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataPlaneCutter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataPlaneCutter", o) != 0)
  {
    Py_DECREF(o);
  }

}

