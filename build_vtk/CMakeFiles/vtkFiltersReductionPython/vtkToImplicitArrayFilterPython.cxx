// python wrapper for vtkToImplicitArrayFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkToImplicitArrayFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkToImplicitArrayFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkToImplicitArrayFilter_ClassNew(); }


static PyObject *
PyvtkToImplicitArrayFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkToImplicitArrayFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkToImplicitArrayFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkToImplicitArrayFilter *tempr = vtkToImplicitArrayFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkToImplicitArrayFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkToImplicitArrayFilter::NewInstance());

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
PyvtkToImplicitArrayFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkToImplicitArrayFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkToImplicitArrayFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_GetUseMaxNumberOfDegreesOfFreedom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMaxNumberOfDegreesOfFreedom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseMaxNumberOfDegreesOfFreedom() :
      op->vtkToImplicitArrayFilter::GetUseMaxNumberOfDegreesOfFreedom());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_SetUseMaxNumberOfDegreesOfFreedom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMaxNumberOfDegreesOfFreedom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseMaxNumberOfDegreesOfFreedom(temp0);
    }
    else
    {
      op->vtkToImplicitArrayFilter::SetUseMaxNumberOfDegreesOfFreedom(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_UseMaxNumberOfDegreesOfFreedomOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMaxNumberOfDegreesOfFreedomOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseMaxNumberOfDegreesOfFreedomOn();
    }
    else
    {
      op->vtkToImplicitArrayFilter::UseMaxNumberOfDegreesOfFreedomOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_UseMaxNumberOfDegreesOfFreedomOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMaxNumberOfDegreesOfFreedomOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseMaxNumberOfDegreesOfFreedomOff();
    }
    else
    {
      op->vtkToImplicitArrayFilter::UseMaxNumberOfDegreesOfFreedomOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_GetMaxNumberOfDegreesOfFreedom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfDegreesOfFreedom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetMaxNumberOfDegreesOfFreedom() :
      op->vtkToImplicitArrayFilter::GetMaxNumberOfDegreesOfFreedom());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_SetMaxNumberOfDegreesOfFreedom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumberOfDegreesOfFreedom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxNumberOfDegreesOfFreedom(temp0);
    }
    else
    {
      op->vtkToImplicitArrayFilter::SetMaxNumberOfDegreesOfFreedom(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_GetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReduction() :
      op->vtkToImplicitArrayFilter::GetTargetReduction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_SetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetReduction(temp0);
    }
    else
    {
      op->vtkToImplicitArrayFilter::SetTargetReduction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_SetStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  vtkToImplicitStrategy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkToImplicitStrategy"))
  {
    if (ap.IsBound())
    {
      op->SetStrategy(temp0);
    }
    else
    {
      op->vtkToImplicitArrayFilter::SetStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_GetStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkToImplicitStrategy *tempr = (ap.IsBound() ?
      op->GetStrategy() :
      op->vtkToImplicitArrayFilter::GetStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_GetArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetArraySelection(temp0) :
      op->vtkToImplicitArrayFilter::GetArraySelection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_GetPointDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPointDataArraySelection() :
      op->vtkToImplicitArrayFilter::GetPointDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_GetCellDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetCellDataArraySelection() :
      op->vtkToImplicitArrayFilter::GetCellDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_GetFieldDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetFieldDataArraySelection() :
      op->vtkToImplicitArrayFilter::GetFieldDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_GetPointsThenCellsDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsThenCellsDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPointsThenCellsDataArraySelection() :
      op->vtkToImplicitArrayFilter::GetPointsThenCellsDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_GetVertexDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetVertexDataArraySelection() :
      op->vtkToImplicitArrayFilter::GetVertexDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_GetEdgeDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetEdgeDataArraySelection() :
      op->vtkToImplicitArrayFilter::GetEdgeDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitArrayFilter_GetRowDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitArrayFilter *op = static_cast<vtkToImplicitArrayFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetRowDataArraySelection() :
      op->vtkToImplicitArrayFilter::GetRowDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkToImplicitArrayFilter_Methods[] = {
  {"IsTypeOf", PyvtkToImplicitArrayFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkToImplicitArrayFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkToImplicitArrayFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkToImplicitArrayFilter\nC++: static vtkToImplicitArrayFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkToImplicitArrayFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkToImplicitArrayFilter\nC++: vtkToImplicitArrayFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkToImplicitArrayFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkToImplicitArrayFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetUseMaxNumberOfDegreesOfFreedom", PyvtkToImplicitArrayFilter_GetUseMaxNumberOfDegreesOfFreedom, METH_VARARGS,
   "GetUseMaxNumberOfDegreesOfFreedom(self) -> bool\nC++: virtual bool GetUseMaxNumberOfDegreesOfFreedom()\n\nSetters/Getters for UseMaxNumberOfDegreesOfFreedom\n\nDetermines whether to use the MaxNumberOfDegreesOfFreedom (true)\nto accept a reduction or the TargetReduction (false) property\n(false by default).\n"},
  {"SetUseMaxNumberOfDegreesOfFreedom", PyvtkToImplicitArrayFilter_SetUseMaxNumberOfDegreesOfFreedom, METH_VARARGS,
   "SetUseMaxNumberOfDegreesOfFreedom(self, _arg:bool) -> None\nC++: virtual void SetUseMaxNumberOfDegreesOfFreedom(bool _arg)\n\n"},
  {"UseMaxNumberOfDegreesOfFreedomOn", PyvtkToImplicitArrayFilter_UseMaxNumberOfDegreesOfFreedomOn, METH_VARARGS,
   "UseMaxNumberOfDegreesOfFreedomOn(self) -> None\nC++: virtual void UseMaxNumberOfDegreesOfFreedomOn()\n\n"},
  {"UseMaxNumberOfDegreesOfFreedomOff", PyvtkToImplicitArrayFilter_UseMaxNumberOfDegreesOfFreedomOff, METH_VARARGS,
   "UseMaxNumberOfDegreesOfFreedomOff(self) -> None\nC++: virtual void UseMaxNumberOfDegreesOfFreedomOff()\n\n"},
  {"GetMaxNumberOfDegreesOfFreedom", PyvtkToImplicitArrayFilter_GetMaxNumberOfDegreesOfFreedom, METH_VARARGS,
   "GetMaxNumberOfDegreesOfFreedom(self) -> int\nC++: virtual std::size_t GetMaxNumberOfDegreesOfFreedom()\n\nSetters/Getters for MaxNumberOfDegreesOfFreedom\n\nThe max number of degrees of freedom to accept in an implicit\narray for reduction (100 by default).\n\n@see SetUseMaxNumberOfDegreesOfFreedom for use case\n"},
  {"SetMaxNumberOfDegreesOfFreedom", PyvtkToImplicitArrayFilter_SetMaxNumberOfDegreesOfFreedom, METH_VARARGS,
   "SetMaxNumberOfDegreesOfFreedom(self, _arg:int) -> None\nC++: virtual void SetMaxNumberOfDegreesOfFreedom(std::size_t _arg)\n\n"},
  {"GetTargetReduction", PyvtkToImplicitArrayFilter_GetTargetReduction, METH_VARARGS,
   "GetTargetReduction(self) -> float\nC++: virtual double GetTargetReduction()\n\nSetter/Getter for target reduction Value usually inbetween 0 and\n1 which sets the acceptible reduction in size of an array for\npassing it to its implicit form (0.1 by default).\n"},
  {"SetTargetReduction", PyvtkToImplicitArrayFilter_SetTargetReduction, METH_VARARGS,
   "SetTargetReduction(self, _arg:float) -> None\nC++: virtual void SetTargetReduction(double _arg)\n\n"},
  {"SetStrategy", PyvtkToImplicitArrayFilter_SetStrategy, METH_VARARGS,
   "SetStrategy(self, __a:vtkToImplicitStrategy) -> None\nC++: void SetStrategy(vtkToImplicitStrategy *)\n\nSetter/Getter for strategy\n"},
  {"GetStrategy", PyvtkToImplicitArrayFilter_GetStrategy, METH_VARARGS,
   "GetStrategy(self) -> vtkToImplicitStrategy\nC++: const vtkToImplicitStrategy *GetStrategy()\n\n"},
  {"GetArraySelection", PyvtkToImplicitArrayFilter_GetArraySelection, METH_VARARGS,
   "GetArraySelection(self, association:int) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetArraySelection(int association)\n\nMethods for managing array selections\n"},
  {"GetPointDataArraySelection", PyvtkToImplicitArrayFilter_GetPointDataArraySelection, METH_VARARGS,
   "GetPointDataArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetPointDataArraySelection()\n\n"},
  {"GetCellDataArraySelection", PyvtkToImplicitArrayFilter_GetCellDataArraySelection, METH_VARARGS,
   "GetCellDataArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetCellDataArraySelection()\n\n"},
  {"GetFieldDataArraySelection", PyvtkToImplicitArrayFilter_GetFieldDataArraySelection, METH_VARARGS,
   "GetFieldDataArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetFieldDataArraySelection()\n\n"},
  {"GetPointsThenCellsDataArraySelection", PyvtkToImplicitArrayFilter_GetPointsThenCellsDataArraySelection, METH_VARARGS,
   "GetPointsThenCellsDataArraySelection(self)\n    -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetPointsThenCellsDataArraySelection()\n\n"},
  {"GetVertexDataArraySelection", PyvtkToImplicitArrayFilter_GetVertexDataArraySelection, METH_VARARGS,
   "GetVertexDataArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetVertexDataArraySelection()\n\n"},
  {"GetEdgeDataArraySelection", PyvtkToImplicitArrayFilter_GetEdgeDataArraySelection, METH_VARARGS,
   "GetEdgeDataArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetEdgeDataArraySelection()\n\n"},
  {"GetRowDataArraySelection", PyvtkToImplicitArrayFilter_GetRowDataArraySelection, METH_VARARGS,
   "GetRowDataArraySelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetRowDataArraySelection()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkToImplicitArrayFilter_Doc =
  "vtkToImplicitArrayFilter - A VTK filter for compressing explicit\nmemory arrays into implicit arrays.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "The filter operates on arrays using strategies that inherit from\n"
  "`vtkToImplicitStrategy`. Arrays that are not compressed are shallow\n"
  "copied.\n\n"
  "Here is a code snippet using the filter considering that there is a\n"
  "`previousFilter` with an output data set that has a data array called\n"
  "\"Constant\" defined on its points: ``` vtkNewtoImpArr; vtkNewstrat;\n"
  "toImpArr->SetStrategy(strat);\n"
  "toImpArr->SetInputConnection(previousFilter->GetOutputPort()); auto\n"
  "select = toImpArr->GetPointDataArraySelection();\n"
  "select->EnableArray(\"Constant\"); toImpArr->Update(); ```\n\n"
  "@sa\n"
  "vtkToImplicitStrategy, vtkImplicitArray\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkToImplicitArrayFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersReduction.vtkToImplicitArrayFilter", // tp_name
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
  PyvtkToImplicitArrayFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkToImplicitArrayFilter_StaticNew()
{
  return vtkToImplicitArrayFilter::New();
}

PyObject *PyvtkToImplicitArrayFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkToImplicitArrayFilter_Type, PyvtkToImplicitArrayFilter_Methods,
    "vtkToImplicitArrayFilter",
 &PyvtkToImplicitArrayFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkToImplicitArrayFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkToImplicitArrayFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkToImplicitArrayFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

