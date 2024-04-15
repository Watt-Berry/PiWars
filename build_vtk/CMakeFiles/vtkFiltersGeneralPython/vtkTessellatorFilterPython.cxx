// python wrapper for vtkTessellatorFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTessellatorFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTessellatorFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkTessellatorFilter_ClassNew(); }


static PyObject *
PyvtkTessellatorFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTessellatorFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTessellatorFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTessellatorFilter *tempr = vtkTessellatorFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTessellatorFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTessellatorFilter::NewInstance());

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
PyvtkTessellatorFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTessellatorFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTessellatorFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetTessellator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTessellator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  vtkStreamingTessellator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStreamingTessellator"))
  {
    if (ap.IsBound())
    {
      op->SetTessellator(temp0);
    }
    else
    {
      op->vtkTessellatorFilter::SetTessellator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetTessellator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTessellator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStreamingTessellator *tempr = (ap.IsBound() ?
      op->GetTessellator() :
      op->vtkTessellatorFilter::GetTessellator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetSubdivider(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivider");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  vtkDataSetEdgeSubdivisionCriterion *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetEdgeSubdivisionCriterion"))
  {
    if (ap.IsBound())
    {
      op->SetSubdivider(temp0);
    }
    else
    {
      op->vtkTessellatorFilter::SetSubdivider(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetSubdivider(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivider");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetEdgeSubdivisionCriterion *tempr = (ap.IsBound() ?
      op->GetSubdivider() :
      op->vtkTessellatorFilter::GetSubdivider());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTessellatorFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetOutputDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputDimension(temp0);
    }
    else
    {
      op->vtkTessellatorFilter::SetOutputDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetOutputDimensionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimensionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputDimensionMinValue() :
      op->vtkTessellatorFilter::GetOutputDimensionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetOutputDimensionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimensionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputDimensionMaxValue() :
      op->vtkTessellatorFilter::GetOutputDimensionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetOutputDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputDimension() :
      op->vtkTessellatorFilter::GetOutputDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfSubdivisions(temp0);
    }
    else
    {
      op->vtkTessellatorFilter::SetMaximumNumberOfSubdivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSubdivisions() :
      op->vtkTessellatorFilter::GetMaximumNumberOfSubdivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetChordError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChordError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetChordError(temp0);
    }
    else
    {
      op->vtkTessellatorFilter::SetChordError(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetChordError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChordError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetChordError() :
      op->vtkTessellatorFilter::GetChordError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_ResetFieldCriteria(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFieldCriteria");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetFieldCriteria();
    }
    else
    {
      op->vtkTessellatorFilter::ResetFieldCriteria();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetFieldCriterion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldCriterion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFieldCriterion(temp0, temp1);
    }
    else
    {
      op->vtkTessellatorFilter::SetFieldCriterion(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_GetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMergePoints() :
      op->vtkTessellatorFilter::GetMergePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_SetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergePoints(temp0);
    }
    else
    {
      op->vtkTessellatorFilter::SetMergePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_MergePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePointsOn();
    }
    else
    {
      op->vtkTessellatorFilter::MergePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTessellatorFilter_MergePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTessellatorFilter *op = static_cast<vtkTessellatorFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePointsOff();
    }
    else
    {
      op->vtkTessellatorFilter::MergePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTessellatorFilter_Methods[] = {
  {"IsTypeOf", PyvtkTessellatorFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTessellatorFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTessellatorFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTessellatorFilter\nC++: static vtkTessellatorFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTessellatorFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTessellatorFilter\nC++: vtkTessellatorFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTessellatorFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTessellatorFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTessellator", PyvtkTessellatorFilter_SetTessellator, METH_VARARGS,
   "SetTessellator(self, __a:vtkStreamingTessellator) -> None\nC++: virtual void SetTessellator(vtkStreamingTessellator *)\n\n"},
  {"GetTessellator", PyvtkTessellatorFilter_GetTessellator, METH_VARARGS,
   "GetTessellator(self) -> vtkStreamingTessellator\nC++: virtual vtkStreamingTessellator *GetTessellator()\n\n"},
  {"SetSubdivider", PyvtkTessellatorFilter_SetSubdivider, METH_VARARGS,
   "SetSubdivider(self, __a:vtkDataSetEdgeSubdivisionCriterion)\n    -> None\nC++: virtual void SetSubdivider(\n    vtkDataSetEdgeSubdivisionCriterion *)\n\n"},
  {"GetSubdivider", PyvtkTessellatorFilter_GetSubdivider, METH_VARARGS,
   "GetSubdivider(self) -> vtkDataSetEdgeSubdivisionCriterion\nC++: virtual vtkDataSetEdgeSubdivisionCriterion *GetSubdivider()\n\n"},
  {"GetMTime", PyvtkTessellatorFilter_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this object's modified time.\n"},
  {"SetOutputDimension", PyvtkTessellatorFilter_SetOutputDimension, METH_VARARGS,
   "SetOutputDimension(self, _arg:int) -> None\nC++: virtual void SetOutputDimension(int _arg)\n\nSet the dimension of the output tessellation. Cells in dimensions\nhigher than the given value will have their boundaries of\ndimension OutputDimension tessellated. For example, if\nOutputDimension is 2, a hexahedron's quadrilateral faces would be\ntessellated rather than its interior.\n"},
  {"GetOutputDimensionMinValue", PyvtkTessellatorFilter_GetOutputDimensionMinValue, METH_VARARGS,
   "GetOutputDimensionMinValue(self) -> int\nC++: virtual int GetOutputDimensionMinValue()\n\n"},
  {"GetOutputDimensionMaxValue", PyvtkTessellatorFilter_GetOutputDimensionMaxValue, METH_VARARGS,
   "GetOutputDimensionMaxValue(self) -> int\nC++: virtual int GetOutputDimensionMaxValue()\n\n"},
  {"GetOutputDimension", PyvtkTessellatorFilter_GetOutputDimension, METH_VARARGS,
   "GetOutputDimension(self) -> int\nC++: virtual int GetOutputDimension()\n\n"},
  {"SetMaximumNumberOfSubdivisions", PyvtkTessellatorFilter_SetMaximumNumberOfSubdivisions, METH_VARARGS,
   "SetMaximumNumberOfSubdivisions(self, num_subdiv_in:int) -> None\nC++: virtual void SetMaximumNumberOfSubdivisions(\n    int num_subdiv_in)\n\nThese are convenience routines for setting properties maintained\nby the tessellator and subdivider. They are implemented here for\nParaView's sake.\n"},
  {"GetMaximumNumberOfSubdivisions", PyvtkTessellatorFilter_GetMaximumNumberOfSubdivisions, METH_VARARGS,
   "GetMaximumNumberOfSubdivisions(self) -> int\nC++: int GetMaximumNumberOfSubdivisions()\n\n"},
  {"SetChordError", PyvtkTessellatorFilter_SetChordError, METH_VARARGS,
   "SetChordError(self, ce:float) -> None\nC++: virtual void SetChordError(double ce)\n\n"},
  {"GetChordError", PyvtkTessellatorFilter_GetChordError, METH_VARARGS,
   "GetChordError(self) -> float\nC++: double GetChordError()\n\n"},
  {"ResetFieldCriteria", PyvtkTessellatorFilter_ResetFieldCriteria, METH_VARARGS,
   "ResetFieldCriteria(self) -> None\nC++: virtual void ResetFieldCriteria()\n\nThese methods are for the ParaView client.\n"},
  {"SetFieldCriterion", PyvtkTessellatorFilter_SetFieldCriterion, METH_VARARGS,
   "SetFieldCriterion(self, field:int, err:float) -> None\nC++: virtual void SetFieldCriterion(int field, double err)\n\n"},
  {"GetMergePoints", PyvtkTessellatorFilter_GetMergePoints, METH_VARARGS,
   "GetMergePoints(self) -> int\nC++: virtual vtkTypeBool GetMergePoints()\n\nThe adaptive tessellation will output vertices that are not\nshared among cells, even where they should be. This can be\ncorrected to some extents with a vtkMergeFilter. By default, the\nfilter is off and vertices will not be shared.\n"},
  {"SetMergePoints", PyvtkTessellatorFilter_SetMergePoints, METH_VARARGS,
   "SetMergePoints(self, _arg:int) -> None\nC++: virtual void SetMergePoints(vtkTypeBool _arg)\n\n"},
  {"MergePointsOn", PyvtkTessellatorFilter_MergePointsOn, METH_VARARGS,
   "MergePointsOn(self) -> None\nC++: virtual void MergePointsOn()\n\n"},
  {"MergePointsOff", PyvtkTessellatorFilter_MergePointsOff, METH_VARARGS,
   "MergePointsOff(self) -> None\nC++: virtual void MergePointsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTessellatorFilter_Doc =
  "vtkTessellatorFilter - approximate nonlinear FEM elements with\nsimplices\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "This class approximates nonlinear FEM elements with linear simplices.\n\n"
  "Warning: This class is temporary and will go away at some point after\n"
  "ParaView 1.4.0.\n\n"
  "This filter rifles through all the cells in an input vtkDataSet. It\n"
  "tesselates each cell and uses the vtkStreamingTessellator and\n"
  "vtkDataSetEdgeSubdivisionCriterion classes to generate simplices that\n"
  "approximate the nonlinear mesh using some approximation metric\n"
  "(encoded in the particular\n"
  "vtkDataSetEdgeSubdivisionCriterion::EvaluateLocationAndFields\n"
  "implementation). The simplices are placed into the filter's output\n"
  "vtkDataSet object by the callback routines AddATetrahedron,\n"
  "AddATriangle, and AddALine, which are registered with the\n"
  "triangulator.\n\n"
  "The output mesh will have geometry and any fields specified as\n"
  "attributes in the input mesh's point data.  The attribute's copy\n"
  "flags are honored, except for normals.\n\n"
  "@par Internals: The filter's main member function is RequestData().\n"
  "This function first calls SetupOutput() which allocates arrays and\n"
  "some temporary variables for the primitive callbacks (OutputTriangle\n"
  "and OutputLine which are called by AddATriangle and AddALine,\n"
  "respectively).  Each cell is given an initial tessellation, which\n"
  "results in one or more calls to OutputTetrahedron, OutputTriangle or\n"
  "OutputLine to add elements to the OutputMesh. Finally, Teardown() is\n"
  "called to free the filter's working space.\n\n"
  "@sa\n"
  "vtkDataSetToUnstructuredGridFilter vtkDataSet vtkStreamingTessellator\n"
  "vtkDataSetEdgeSubdivisionCriterion\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTessellatorFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkTessellatorFilter", // tp_name
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
  PyvtkTessellatorFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTessellatorFilter_StaticNew()
{
  return vtkTessellatorFilter::New();
}

PyObject *PyvtkTessellatorFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTessellatorFilter_Type, PyvtkTessellatorFilter_Methods,
    "vtkTessellatorFilter",
 &PyvtkTessellatorFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTessellatorFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTessellatorFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTessellatorFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

