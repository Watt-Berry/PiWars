// python wrapper for vtkStackedTreeLayoutStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStackedTreeLayoutStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStackedTreeLayoutStrategy(PyObject *dict); }
extern "C" { PyObject *PyvtkStackedTreeLayoutStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkAreaLayoutStrategy_ClassNew
extern "C" { PyObject *PyvtkAreaLayoutStrategy_ClassNew(); }
#define DECLARED_PyvtkAreaLayoutStrategy_ClassNew
#endif

static PyObject *
PyvtkStackedTreeLayoutStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStackedTreeLayoutStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStackedTreeLayoutStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStackedTreeLayoutStrategy *tempr = vtkStackedTreeLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStackedTreeLayoutStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStackedTreeLayoutStrategy::NewInstance());

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
PyvtkStackedTreeLayoutStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStackedTreeLayoutStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStackedTreeLayoutStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  vtkTree *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTree") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->Layout(temp0, temp1, temp2);
    }
    else
    {
      op->vtkStackedTreeLayoutStrategy::Layout(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_LayoutEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LayoutEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  vtkTree *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  vtkTree *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTree") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkTree"))
  {
    if (ap.IsBound())
    {
      op->LayoutEdgePoints(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkStackedTreeLayoutStrategy::LayoutEdgePoints(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_SetInteriorRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteriorRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteriorRadius(temp0);
    }
    else
    {
      op->vtkStackedTreeLayoutStrategy::SetInteriorRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_GetInteriorRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteriorRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInteriorRadius() :
      op->vtkStackedTreeLayoutStrategy::GetInteriorRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_SetRingThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRingThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRingThickness(temp0);
    }
    else
    {
      op->vtkStackedTreeLayoutStrategy::SetRingThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_GetRingThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRingThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRingThickness() :
      op->vtkStackedTreeLayoutStrategy::GetRingThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_SetRootStartAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootStartAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRootStartAngle(temp0);
    }
    else
    {
      op->vtkStackedTreeLayoutStrategy::SetRootStartAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_GetRootStartAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootStartAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRootStartAngle() :
      op->vtkStackedTreeLayoutStrategy::GetRootStartAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_SetRootEndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootEndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRootEndAngle(temp0);
    }
    else
    {
      op->vtkStackedTreeLayoutStrategy::SetRootEndAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_GetRootEndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootEndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRootEndAngle() :
      op->vtkStackedTreeLayoutStrategy::GetRootEndAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_SetUseRectangularCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRectangularCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRectangularCoordinates(temp0);
    }
    else
    {
      op->vtkStackedTreeLayoutStrategy::SetUseRectangularCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_GetUseRectangularCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRectangularCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseRectangularCoordinates() :
      op->vtkStackedTreeLayoutStrategy::GetUseRectangularCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_UseRectangularCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRectangularCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRectangularCoordinatesOn();
    }
    else
    {
      op->vtkStackedTreeLayoutStrategy::UseRectangularCoordinatesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_UseRectangularCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRectangularCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRectangularCoordinatesOff();
    }
    else
    {
      op->vtkStackedTreeLayoutStrategy::UseRectangularCoordinatesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_SetReverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReverse(temp0);
    }
    else
    {
      op->vtkStackedTreeLayoutStrategy::SetReverse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_GetReverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReverse() :
      op->vtkStackedTreeLayoutStrategy::GetReverse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_ReverseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseOn();
    }
    else
    {
      op->vtkStackedTreeLayoutStrategy::ReverseOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_ReverseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseOff();
    }
    else
    {
      op->vtkStackedTreeLayoutStrategy::ReverseOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_SetInteriorLogSpacingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteriorLogSpacingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteriorLogSpacingValue(temp0);
    }
    else
    {
      op->vtkStackedTreeLayoutStrategy::SetInteriorLogSpacingValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_GetInteriorLogSpacingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteriorLogSpacingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInteriorLogSpacingValue() :
      op->vtkStackedTreeLayoutStrategy::GetInteriorLogSpacingValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStackedTreeLayoutStrategy_FindVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStackedTreeLayoutStrategy *op = static_cast<vtkStackedTreeLayoutStrategy *>(vp);

  vtkTree *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  const size_t size2 = 2;
  float temp2[2];
  float save2[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTree") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    long long tempr = (ap.IsBound() ?
      op->FindVertex(temp0, temp1, temp2) :
      op->vtkStackedTreeLayoutStrategy::FindVertex(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStackedTreeLayoutStrategy_Methods[] = {
  {"IsTypeOf", PyvtkStackedTreeLayoutStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStackedTreeLayoutStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStackedTreeLayoutStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStackedTreeLayoutStrategy\nC++: static vtkStackedTreeLayoutStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStackedTreeLayoutStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStackedTreeLayoutStrategy\nC++: vtkStackedTreeLayoutStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStackedTreeLayoutStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStackedTreeLayoutStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Layout", PyvtkStackedTreeLayoutStrategy_Layout, METH_VARARGS,
   "Layout(self, inputTree:vtkTree, sectorArray:vtkDataArray,\n    sizeArray:vtkDataArray) -> None\nC++: void Layout(vtkTree *inputTree, vtkDataArray *sectorArray,\n    vtkDataArray *sizeArray) override;\n\nPerform the layout of the input tree, and store the sector bounds\nof each vertex as a tuple (innerRadius, outerRadius, startAngle,\nendAngle) in a data array.\n"},
  {"LayoutEdgePoints", PyvtkStackedTreeLayoutStrategy_LayoutEdgePoints, METH_VARARGS,
   "LayoutEdgePoints(self, inputTree:vtkTree,\n    sectorArray:vtkDataArray, sizeArray:vtkDataArray,\n    edgeRoutingTree:vtkTree) -> None\nC++: void LayoutEdgePoints(vtkTree *inputTree,\n    vtkDataArray *sectorArray, vtkDataArray *sizeArray,\n    vtkTree *edgeRoutingTree) override;\n\nFill edgeRoutingTree with points suitable for routing edges of an\noverlaid graph.\n"},
  {"SetInteriorRadius", PyvtkStackedTreeLayoutStrategy_SetInteriorRadius, METH_VARARGS,
   "SetInteriorRadius(self, _arg:float) -> None\nC++: virtual void SetInteriorRadius(double _arg)\n\nDefine the tree ring's interior radius.\n"},
  {"GetInteriorRadius", PyvtkStackedTreeLayoutStrategy_GetInteriorRadius, METH_VARARGS,
   "GetInteriorRadius(self) -> float\nC++: virtual double GetInteriorRadius()\n\n"},
  {"SetRingThickness", PyvtkStackedTreeLayoutStrategy_SetRingThickness, METH_VARARGS,
   "SetRingThickness(self, _arg:float) -> None\nC++: virtual void SetRingThickness(double _arg)\n\nDefine the thickness of each of the tree rings.\n"},
  {"GetRingThickness", PyvtkStackedTreeLayoutStrategy_GetRingThickness, METH_VARARGS,
   "GetRingThickness(self) -> float\nC++: virtual double GetRingThickness()\n\n"},
  {"SetRootStartAngle", PyvtkStackedTreeLayoutStrategy_SetRootStartAngle, METH_VARARGS,
   "SetRootStartAngle(self, _arg:float) -> None\nC++: virtual void SetRootStartAngle(double _arg)\n\nDefine the start angle for the root node. NOTE: It is assumed\nthat the root end angle is greater than the root start angle and\nsubtends no more than 360 degrees.\n"},
  {"GetRootStartAngle", PyvtkStackedTreeLayoutStrategy_GetRootStartAngle, METH_VARARGS,
   "GetRootStartAngle(self) -> float\nC++: virtual double GetRootStartAngle()\n\n"},
  {"SetRootEndAngle", PyvtkStackedTreeLayoutStrategy_SetRootEndAngle, METH_VARARGS,
   "SetRootEndAngle(self, _arg:float) -> None\nC++: virtual void SetRootEndAngle(double _arg)\n\nDefine the end angle for the root node. NOTE: It is assumed that\nthe root end angle is greater than the root start angle and\nsubtends no more than 360 degrees.\n"},
  {"GetRootEndAngle", PyvtkStackedTreeLayoutStrategy_GetRootEndAngle, METH_VARARGS,
   "GetRootEndAngle(self) -> float\nC++: virtual double GetRootEndAngle()\n\n"},
  {"SetUseRectangularCoordinates", PyvtkStackedTreeLayoutStrategy_SetUseRectangularCoordinates, METH_VARARGS,
   "SetUseRectangularCoordinates(self, _arg:bool) -> None\nC++: virtual void SetUseRectangularCoordinates(bool _arg)\n\nDefine whether or not rectangular coordinates are being used (as\nopposed to polar coordinates).\n"},
  {"GetUseRectangularCoordinates", PyvtkStackedTreeLayoutStrategy_GetUseRectangularCoordinates, METH_VARARGS,
   "GetUseRectangularCoordinates(self) -> bool\nC++: virtual bool GetUseRectangularCoordinates()\n\n"},
  {"UseRectangularCoordinatesOn", PyvtkStackedTreeLayoutStrategy_UseRectangularCoordinatesOn, METH_VARARGS,
   "UseRectangularCoordinatesOn(self) -> None\nC++: virtual void UseRectangularCoordinatesOn()\n\n"},
  {"UseRectangularCoordinatesOff", PyvtkStackedTreeLayoutStrategy_UseRectangularCoordinatesOff, METH_VARARGS,
   "UseRectangularCoordinatesOff(self) -> None\nC++: virtual void UseRectangularCoordinatesOff()\n\n"},
  {"SetReverse", PyvtkStackedTreeLayoutStrategy_SetReverse, METH_VARARGS,
   "SetReverse(self, _arg:bool) -> None\nC++: virtual void SetReverse(bool _arg)\n\nDefine whether to reverse the order of the tree stacks from low\nto high.\n"},
  {"GetReverse", PyvtkStackedTreeLayoutStrategy_GetReverse, METH_VARARGS,
   "GetReverse(self) -> bool\nC++: virtual bool GetReverse()\n\n"},
  {"ReverseOn", PyvtkStackedTreeLayoutStrategy_ReverseOn, METH_VARARGS,
   "ReverseOn(self) -> None\nC++: virtual void ReverseOn()\n\n"},
  {"ReverseOff", PyvtkStackedTreeLayoutStrategy_ReverseOff, METH_VARARGS,
   "ReverseOff(self) -> None\nC++: virtual void ReverseOff()\n\n"},
  {"SetInteriorLogSpacingValue", PyvtkStackedTreeLayoutStrategy_SetInteriorLogSpacingValue, METH_VARARGS,
   "SetInteriorLogSpacingValue(self, _arg:float) -> None\nC++: virtual void SetInteriorLogSpacingValue(double _arg)\n\nThe spacing of tree levels in the edge routing tree. Levels near\nzero give more space to levels near the root, while levels near\none (the default) create evenly-spaced levels. Levels above one\ngive more space to levels near the leaves.\n"},
  {"GetInteriorLogSpacingValue", PyvtkStackedTreeLayoutStrategy_GetInteriorLogSpacingValue, METH_VARARGS,
   "GetInteriorLogSpacingValue(self) -> float\nC++: virtual double GetInteriorLogSpacingValue()\n\n"},
  {"FindVertex", PyvtkStackedTreeLayoutStrategy_FindVertex, METH_VARARGS,
   "FindVertex(self, tree:vtkTree, array:vtkDataArray, pnt:[float,\n    float]) -> int\nC++: vtkIdType FindVertex(vtkTree *tree, vtkDataArray *array,\n    float pnt[2]) override;\n\nReturns the vertex id that contains pnt (or -1 if no one contains\nit).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStackedTreeLayoutStrategy_Doc =
  "vtkStackedTreeLayoutStrategy - lays out tree in stacked boxes or rings\n\n"
  "Superclass: vtkAreaLayoutStrategy\n\n"
  "Performs a tree ring layout or \"icicle\" layout on a tree. This\n"
  "involves assigning a sector region to each vertex in the tree, and\n"
  "placing that information in a data array with four components per\n"
  "tuple representing (innerRadius, outerRadius, startAngle, endAngle).\n\n"
  "This class may be assigned as the layout strategy to vtkAreaLayout.\n\n"
  "@par Thanks: Thanks to Jason Shepherd from Sandia National\n"
  "Laboratories for help developing this class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStackedTreeLayoutStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkStackedTreeLayoutStrategy", // tp_name
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
  PyvtkStackedTreeLayoutStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStackedTreeLayoutStrategy_StaticNew()
{
  return vtkStackedTreeLayoutStrategy::New();
}

PyObject *PyvtkStackedTreeLayoutStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStackedTreeLayoutStrategy_Type, PyvtkStackedTreeLayoutStrategy_Methods,
    "vtkStackedTreeLayoutStrategy",
 &PyvtkStackedTreeLayoutStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAreaLayoutStrategy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStackedTreeLayoutStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStackedTreeLayoutStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStackedTreeLayoutStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

