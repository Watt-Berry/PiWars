// python wrapper for vtkHyperTreeGridProbeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridProbeFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridProbeFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGridProbeFilter_ClassNew(); }


static PyObject *
PyvtkHyperTreeGridProbeFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridProbeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridProbeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridProbeFilter *tempr = vtkHyperTreeGridProbeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridProbeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridProbeFilter::NewInstance());

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
PyvtkHyperTreeGridProbeFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridProbeFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridProbeFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkHyperTreeGridProbeFilter::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGrid *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkHyperTreeGridProbeFilter::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkHyperTreeGridProbeFilter::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkHyperTreeGridProbeFilter::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  vtkHyperTreeGridLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGridLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkHyperTreeGridProbeFilter::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_SetPassCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassCellArrays(temp0);
    }
    else
    {
      op->vtkHyperTreeGridProbeFilter::SetPassCellArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_PassCellArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellArraysOn();
    }
    else
    {
      op->vtkHyperTreeGridProbeFilter::PassCellArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_PassCellArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellArraysOff();
    }
    else
    {
      op->vtkHyperTreeGridProbeFilter::PassCellArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_GetPassCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassCellArrays() :
      op->vtkHyperTreeGridProbeFilter::GetPassCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_SetPassPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassPointArrays(temp0);
    }
    else
    {
      op->vtkHyperTreeGridProbeFilter::SetPassPointArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_PassPointArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointArraysOn();
    }
    else
    {
      op->vtkHyperTreeGridProbeFilter::PassPointArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_PassPointArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointArraysOff();
    }
    else
    {
      op->vtkHyperTreeGridProbeFilter::PassPointArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_GetPassPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassPointArrays() :
      op->vtkHyperTreeGridProbeFilter::GetPassPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_SetPassFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassFieldArrays(temp0);
    }
    else
    {
      op->vtkHyperTreeGridProbeFilter::SetPassFieldArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_PassFieldArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassFieldArraysOn();
    }
    else
    {
      op->vtkHyperTreeGridProbeFilter::PassFieldArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_PassFieldArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassFieldArraysOff();
    }
    else
    {
      op->vtkHyperTreeGridProbeFilter::PassFieldArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_GetPassFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassFieldArrays() :
      op->vtkHyperTreeGridProbeFilter::GetPassFieldArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_SetValidPointMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidPointMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValidPointMaskArrayName(temp0);
    }
    else
    {
      op->vtkHyperTreeGridProbeFilter::SetValidPointMaskArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_GetValidPointMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPointMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetValidPointMaskArrayName() :
      op->vtkHyperTreeGridProbeFilter::GetValidPointMaskArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_GetValidPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetValidPoints() :
      op->vtkHyperTreeGridProbeFilter::GetValidPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkHyperTreeGridProbeFilter::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkHyperTreeGridProbeFilter::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_SetComputeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeTolerance(temp0);
    }
    else
    {
      op->vtkHyperTreeGridProbeFilter::SetComputeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridProbeFilter_GetComputeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridProbeFilter *op = static_cast<vtkHyperTreeGridProbeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeTolerance() :
      op->vtkHyperTreeGridProbeFilter::GetComputeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridProbeFilter_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridProbeFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridProbeFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridProbeFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGridProbeFilter\nC++: static vtkHyperTreeGridProbeFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridProbeFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridProbeFilter\nC++: vtkHyperTreeGridProbeFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridProbeFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridProbeFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSourceData", PyvtkHyperTreeGridProbeFilter_SetSourceData, METH_VARARGS,
   "SetSourceData(self, source:vtkHyperTreeGrid) -> None\nC++: void SetSourceData(vtkHyperTreeGrid *source)\n\nSpecify the data set that will be probed at the input points. The\nInput gives the geometry (the points and cells) for the output,\nwhile the Source is probed (interpolated) to generate the\nscalars, vectors, etc. for the output points based on the point\nlocations.\n"},
  {"GetSource", PyvtkHyperTreeGridProbeFilter_GetSource, METH_VARARGS,
   "GetSource(self) -> vtkHyperTreeGrid\nC++: vtkHyperTreeGrid *GetSource()\n\n"},
  {"SetSourceConnection", PyvtkHyperTreeGridProbeFilter_SetSourceConnection, METH_VARARGS,
   "SetSourceConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the data set that will be probed at the input points. The\nInput gives the geometry (the points and cells) for the output,\nwhile the Source is probed (interpolated) to generate the\nscalars, vectors, etc. for the output points based on the point\nlocations.\n"},
  {"GetLocator", PyvtkHyperTreeGridProbeFilter_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkHyperTreeGridLocator\nC++: virtual vtkHyperTreeGridLocator *GetLocator()\n\nSet and get the locator object\n"},
  {"SetLocator", PyvtkHyperTreeGridProbeFilter_SetLocator, METH_VARARGS,
   "SetLocator(self, __a:vtkHyperTreeGridLocator) -> None\nC++: virtual void SetLocator(vtkHyperTreeGridLocator *)\n\n"},
  {"SetPassCellArrays", PyvtkHyperTreeGridProbeFilter_SetPassCellArrays, METH_VARARGS,
   "SetPassCellArrays(self, _arg:bool) -> None\nC++: virtual void SetPassCellArrays(bool _arg)\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {"PassCellArraysOn", PyvtkHyperTreeGridProbeFilter_PassCellArraysOn, METH_VARARGS,
   "PassCellArraysOn(self) -> None\nC++: virtual void PassCellArraysOn()\n\n"},
  {"PassCellArraysOff", PyvtkHyperTreeGridProbeFilter_PassCellArraysOff, METH_VARARGS,
   "PassCellArraysOff(self) -> None\nC++: virtual void PassCellArraysOff()\n\n"},
  {"GetPassCellArrays", PyvtkHyperTreeGridProbeFilter_GetPassCellArrays, METH_VARARGS,
   "GetPassCellArrays(self) -> bool\nC++: virtual bool GetPassCellArrays()\n\n"},
  {"SetPassPointArrays", PyvtkHyperTreeGridProbeFilter_SetPassPointArrays, METH_VARARGS,
   "SetPassPointArrays(self, _arg:bool) -> None\nC++: virtual void SetPassPointArrays(bool _arg)\n\nShallow copy the input point data arrays to the output Off by\ndefault.\n"},
  {"PassPointArraysOn", PyvtkHyperTreeGridProbeFilter_PassPointArraysOn, METH_VARARGS,
   "PassPointArraysOn(self) -> None\nC++: virtual void PassPointArraysOn()\n\n"},
  {"PassPointArraysOff", PyvtkHyperTreeGridProbeFilter_PassPointArraysOff, METH_VARARGS,
   "PassPointArraysOff(self) -> None\nC++: virtual void PassPointArraysOff()\n\n"},
  {"GetPassPointArrays", PyvtkHyperTreeGridProbeFilter_GetPassPointArrays, METH_VARARGS,
   "GetPassPointArrays(self) -> bool\nC++: virtual bool GetPassPointArrays()\n\n"},
  {"SetPassFieldArrays", PyvtkHyperTreeGridProbeFilter_SetPassFieldArrays, METH_VARARGS,
   "SetPassFieldArrays(self, _arg:bool) -> None\nC++: virtual void SetPassFieldArrays(bool _arg)\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {"PassFieldArraysOn", PyvtkHyperTreeGridProbeFilter_PassFieldArraysOn, METH_VARARGS,
   "PassFieldArraysOn(self) -> None\nC++: virtual void PassFieldArraysOn()\n\n"},
  {"PassFieldArraysOff", PyvtkHyperTreeGridProbeFilter_PassFieldArraysOff, METH_VARARGS,
   "PassFieldArraysOff(self) -> None\nC++: virtual void PassFieldArraysOff()\n\n"},
  {"GetPassFieldArrays", PyvtkHyperTreeGridProbeFilter_GetPassFieldArrays, METH_VARARGS,
   "GetPassFieldArrays(self) -> bool\nC++: virtual bool GetPassFieldArrays()\n\n"},
  {"SetValidPointMaskArrayName", PyvtkHyperTreeGridProbeFilter_SetValidPointMaskArrayName, METH_VARARGS,
   "SetValidPointMaskArrayName(self, _arg:str) -> None\nC++: virtual void SetValidPointMaskArrayName(std::string _arg)\n\nReturns the name of the char array added to the output with\nvalues 1 for valid points and 0 for invalid points. Set to\n\"vtkValidPointMask\" by default.\n"},
  {"GetValidPointMaskArrayName", PyvtkHyperTreeGridProbeFilter_GetValidPointMaskArrayName, METH_VARARGS,
   "GetValidPointMaskArrayName(self) -> str\nC++: virtual std::string GetValidPointMaskArrayName()\n\n"},
  {"GetValidPoints", PyvtkHyperTreeGridProbeFilter_GetValidPoints, METH_VARARGS,
   "GetValidPoints(self) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetValidPoints()\n\nGet the list of point ids in the output that contain attribute\ndata from the source.\n"},
  {"SetTolerance", PyvtkHyperTreeGridProbeFilter_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nGet/Set tolerance used when finding points in the HTG source.\nOverridden when ComputeTolerance == true.\n\nDefault is 0.0\n"},
  {"GetTolerance", PyvtkHyperTreeGridProbeFilter_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {"SetComputeTolerance", PyvtkHyperTreeGridProbeFilter_SetComputeTolerance, METH_VARARGS,
   "SetComputeTolerance(self, _arg:bool) -> None\nC++: virtual void SetComputeTolerance(bool _arg)\n\nGet/Set whether or not to compute the tolerance automatically for\nwhen finding points in the HTG source. If false use the tolerance\nfrom SetTolerance .\n\nDefault is true\n"},
  {"GetComputeTolerance", PyvtkHyperTreeGridProbeFilter_GetComputeTolerance, METH_VARARGS,
   "GetComputeTolerance(self) -> bool\nC++: virtual bool GetComputeTolerance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGridProbeFilter_Doc =
  "vtkHyperTreeGridProbeFilter - Probe a vtkHyperTreeGrid\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "Heavily modeled after the vtkProbeFilter, this class\n"
  " is meant to be used to probe vtkHyperTreeGrid objects.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridProbeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkHyperTreeGridProbeFilter", // tp_name
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
  PyvtkHyperTreeGridProbeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridProbeFilter_StaticNew()
{
  return vtkHyperTreeGridProbeFilter::New();
}

PyObject *PyvtkHyperTreeGridProbeFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridProbeFilter_Type, PyvtkHyperTreeGridProbeFilter_Methods,
    "vtkHyperTreeGridProbeFilter",
 &PyvtkHyperTreeGridProbeFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridProbeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridProbeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridProbeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

