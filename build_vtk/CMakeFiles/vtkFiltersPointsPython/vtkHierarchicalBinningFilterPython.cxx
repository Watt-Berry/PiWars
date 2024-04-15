// python wrapper for vtkHierarchicalBinningFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHierarchicalBinningFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHierarchicalBinningFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkHierarchicalBinningFilter_ClassNew(); }


static PyObject *
PyvtkHierarchicalBinningFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHierarchicalBinningFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHierarchicalBinningFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHierarchicalBinningFilter *tempr = vtkHierarchicalBinningFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHierarchicalBinningFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHierarchicalBinningFilter::NewInstance());

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
PyvtkHierarchicalBinningFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHierarchicalBinningFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHierarchicalBinningFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_SetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

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
      op->vtkHierarchicalBinningFilter::SetNumberOfLevels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetNumberOfLevelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevelsMinValue() :
      op->vtkHierarchicalBinningFilter::GetNumberOfLevelsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetNumberOfLevelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevelsMaxValue() :
      op->vtkHierarchicalBinningFilter::GetNumberOfLevelsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkHierarchicalBinningFilter::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_SetAutomatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomatic(temp0);
    }
    else
    {
      op->vtkHierarchicalBinningFilter::SetAutomatic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetAutomatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutomatic() :
      op->vtkHierarchicalBinningFilter::GetAutomatic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_AutomaticOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticOn();
    }
    else
    {
      op->vtkHierarchicalBinningFilter::AutomaticOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_AutomaticOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticOff();
    }
    else
    {
      op->vtkHierarchicalBinningFilter::AutomaticOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_SetDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetDivisions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHierarchicalBinningFilter::SetDivisions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHierarchicalBinningFilter_SetDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDivisions(temp0);
    }
    else
    {
      op->vtkHierarchicalBinningFilter::SetDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHierarchicalBinningFilter_SetDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkHierarchicalBinningFilter_SetDivisions_s1(self, args);
    case 1:
      return PyvtkHierarchicalBinningFilter_SetDivisions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDivisions");
  return nullptr;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDivisions() :
      op->vtkHierarchicalBinningFilter::GetDivisions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkHierarchicalBinningFilter::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHierarchicalBinningFilter_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkHierarchicalBinningFilter::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHierarchicalBinningFilter_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkHierarchicalBinningFilter_SetBounds_s1(self, args);
    case 1:
      return PyvtkHierarchicalBinningFilter_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkHierarchicalBinningFilter::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetNumberOfGlobalBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGlobalBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGlobalBins() :
      op->vtkHierarchicalBinningFilter::GetNumberOfGlobalBins());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBins(temp0) :
      op->vtkHierarchicalBinningFilter::GetNumberOfBins(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetLevelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  int temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->GetLevelOffset(temp0, temp1) :
      op->vtkHierarchicalBinningFilter::GetLevelOffset(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetBinOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  int temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->GetBinOffset(temp0, temp1) :
      op->vtkHierarchicalBinningFilter::GetBinOffset(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetLocalBinOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalBinOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  int temp0;
  int temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    long long tempr = (ap.IsBound() ?
      op->GetLocalBinOffset(temp0, temp1, temp2) :
      op->vtkHierarchicalBinningFilter::GetLocalBinOffset(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetBinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  int temp0;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetBinBounds(temp0, temp1);
    }
    else
    {
      op->vtkHierarchicalBinningFilter::GetBinBounds(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetLocalBinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalBinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  int temp0;
  int temp1;
  const size_t size2 = 6;
  double temp2[6];
  double save2[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetLocalBinBounds(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHierarchicalBinningFilter::GetLocalBinBounds(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHierarchicalBinningFilter_Methods[] = {
  {"IsTypeOf", PyvtkHierarchicalBinningFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHierarchicalBinningFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHierarchicalBinningFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHierarchicalBinningFilter\nC++: static vtkHierarchicalBinningFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHierarchicalBinningFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHierarchicalBinningFilter\nC++: vtkHierarchicalBinningFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHierarchicalBinningFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHierarchicalBinningFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfLevels", PyvtkHierarchicalBinningFilter_SetNumberOfLevels, METH_VARARGS,
   "SetNumberOfLevels(self, _arg:int) -> None\nC++: virtual void SetNumberOfLevels(int _arg)\n\nSpecify the number of levels in the spatial hierarchy. By\ndefault, the number of levels is three.\n"},
  {"GetNumberOfLevelsMinValue", PyvtkHierarchicalBinningFilter_GetNumberOfLevelsMinValue, METH_VARARGS,
   "GetNumberOfLevelsMinValue(self) -> int\nC++: virtual int GetNumberOfLevelsMinValue()\n\n"},
  {"GetNumberOfLevelsMaxValue", PyvtkHierarchicalBinningFilter_GetNumberOfLevelsMaxValue, METH_VARARGS,
   "GetNumberOfLevelsMaxValue(self) -> int\nC++: virtual int GetNumberOfLevelsMaxValue()\n\n"},
  {"GetNumberOfLevels", PyvtkHierarchicalBinningFilter_GetNumberOfLevels, METH_VARARGS,
   "GetNumberOfLevels(self) -> int\nC++: virtual int GetNumberOfLevels()\n\n"},
  {"SetAutomatic", PyvtkHierarchicalBinningFilter_SetAutomatic, METH_VARARGS,
   "SetAutomatic(self, _arg:bool) -> None\nC++: virtual void SetAutomatic(bool _arg)\n\nSpecify whether to determine the determine the level divisions,\nand the bounding box automatically (by default this is on). If\noff, then the user must specify both the bounding box and bin\ndivisions. (Computing the bounding box can be slow for large\npoint clouds, manual specification can save time.)\n"},
  {"GetAutomatic", PyvtkHierarchicalBinningFilter_GetAutomatic, METH_VARARGS,
   "GetAutomatic(self) -> bool\nC++: virtual bool GetAutomatic()\n\n"},
  {"AutomaticOn", PyvtkHierarchicalBinningFilter_AutomaticOn, METH_VARARGS,
   "AutomaticOn(self) -> None\nC++: virtual void AutomaticOn()\n\n"},
  {"AutomaticOff", PyvtkHierarchicalBinningFilter_AutomaticOff, METH_VARARGS,
   "AutomaticOff(self) -> None\nC++: virtual void AutomaticOff()\n\n"},
  {"SetDivisions", PyvtkHierarchicalBinningFilter_SetDivisions, METH_VARARGS,
   "SetDivisions(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetDivisions(int _arg1, int _arg2, int _arg3)\nSetDivisions(self, _arg:(int, int, int)) -> None\nC++: virtual void SetDivisions(const int _arg[3])\n\nSet the number of branching divisions in each binning direction.\nEach level of the tree is subdivided by this factor. The\nDivisions[i] must be >= 1. Note: if Automatic subdivision is\nspecified, the Divisions are set by the filter.\n"},
  {"GetDivisions", PyvtkHierarchicalBinningFilter_GetDivisions, METH_VARARGS,
   "GetDivisions(self) -> (int, int, int)\nC++: virtual int *GetDivisions()\n\n"},
  {"SetBounds", PyvtkHierarchicalBinningFilter_SetBounds, METH_VARARGS,
   "SetBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetBounds(self, _arg:(float, float, float, float, float, float))\n    -> None\nC++: virtual void SetBounds(const double _arg[6])\n\nSet the bounding box of the point cloud. If Automatic is enabled,\nthen this is computed during filter execution. If manually\nspecified (Automatic is off) then make sure the bounds is\nrepresented as (xmin,xmax, ymin,ymax, zmin,zmax). If the bounds\nspecified is does not enclose the points, then points are clamped\nto lie in the bounding box.\n"},
  {"GetBounds", PyvtkHierarchicalBinningFilter_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\n\n"},
  {"GetNumberOfGlobalBins", PyvtkHierarchicalBinningFilter_GetNumberOfGlobalBins, METH_VARARGS,
   "GetNumberOfGlobalBins(self) -> int\nC++: int GetNumberOfGlobalBins()\n\nConvenience methods for extracting useful information about this\nbin tree.  Return the number of total bins across all levels\n(i.e., the total global bins). Invoke this method after the bin\ntree has been built.\n"},
  {"GetNumberOfBins", PyvtkHierarchicalBinningFilter_GetNumberOfBins, METH_VARARGS,
   "GetNumberOfBins(self, level:int) -> int\nC++: int GetNumberOfBins(int level)\n\nConvenience methods for extracting useful information about this\nbin tree.  Return the number of bins in a particular level of the\ntree. Invoke this method after the bin tree has been built.\n"},
  {"GetLevelOffset", PyvtkHierarchicalBinningFilter_GetLevelOffset, METH_VARARGS,
   "GetLevelOffset(self, level:int, npts:int) -> int\nC++: vtkIdType GetLevelOffset(int level, vtkIdType &npts)\n\nConvenience methods for extracting useful information about this\nbin tree.  Given a level, return the beginning point id and\nnumber of points that level. Invoke this method after the bin\ntree has been built.\n"},
  {"GetBinOffset", PyvtkHierarchicalBinningFilter_GetBinOffset, METH_VARARGS,
   "GetBinOffset(self, globalBin:int, npts:int) -> int\nC++: vtkIdType GetBinOffset(int globalBin, vtkIdType &npts)\n\nConvenience methods for extracting useful information about this\nbin tree.  Given a global bin number, return the point id and\nnumber of points for that bin. Invoke this method after the bin\ntree has been built.\n"},
  {"GetLocalBinOffset", PyvtkHierarchicalBinningFilter_GetLocalBinOffset, METH_VARARGS,
   "GetLocalBinOffset(self, level:int, localBin:int, npts:int) -> int\nC++: vtkIdType GetLocalBinOffset(int level, int localBin,\n    vtkIdType &npts)\n\nConvenience methods for extracting useful information about this\nbin tree.  Given a level, and the bin number in that level,\nreturn the offset point id and number of points for that bin.\nInvoke this method after the bin tree has been built.\n"},
  {"GetBinBounds", PyvtkHierarchicalBinningFilter_GetBinBounds, METH_VARARGS,
   "GetBinBounds(self, globalBin:int, bounds:[float, float, float,\n    float, float, float]) -> None\nC++: void GetBinBounds(int globalBin, double bounds[6])\n\nConvenience methods for extracting useful information about a bin\ntree. Given a global bin number, return the bounds\n(xmin,xmax,ymin,ymax,zmin,zmax) for that bin. Invoke this method\nafter the bin tree has been built.\n"},
  {"GetLocalBinBounds", PyvtkHierarchicalBinningFilter_GetLocalBinBounds, METH_VARARGS,
   "GetLocalBinBounds(self, level:int, localBin:int, bounds:[float,\n    float, float, float, float, float]) -> None\nC++: void GetLocalBinBounds(int level, int localBin,\n    double bounds[6])\n\nConvenience methods for extracting useful information about a bin\ntree. Given a level, and a local bin number, return the bounds\n(xmin,xmax,ymin,ymax,zmin,zmax) for that bin. Invoke this method\nafter the bin tree has been built.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHierarchicalBinningFilter_Doc =
  "vtkHierarchicalBinningFilter - uniform binning of points into a\nhierarchical structure\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkHierarchicalBinningFilter creates a spatial, hierarchical ordering\n"
  "of input points. This hierarchy is suitable for level-of-detail\n"
  "rendering, or multiresolution processing. Each level of the hierarchy\n"
  "is based on uniform binning of space, where deeper levels (and its\n"
  "bins) are repeatedly subdivided by a given branching factor. Points\n"
  "are associated with bins at different levels, with the number of\n"
  "points in each level proportional to the number of bins in that\n"
  "level. The output points are sorted according to a bin number, where\n"
  "the bin number is unique, monotonically increasing number\n"
  "representing the breadth first ordering of all of the levels and\n"
  "their bins. Thus all points in a bin (or even a level) are segmented\n"
  "into contiguous runs.\n\n"
  "Note that points are associated with different bins using a pseudo\n"
  "random process. No points are repeated, and no new points are\n"
  "created, thus the effect of executing this filter is simply to\n"
  "reorder the input points.\n\n"
  "The algorithm proceeds as follows: Given an initial bounding box, the\n"
  "space is uniformally subdivided into bins of (M x N x O) dimensions;\n"
  "in turn each subsequent level in the tree is further divided into (M\n"
  "x N x O) bins (note that level 0 is a single, root bin). Thus the\n"
  "number of bins at level L of the hierarchical tree is: Nbins=(M^L x\n"
  "N^L x O^L). Once the binning is created to a specified depth, then\n"
  "points are placed in the bins using a pseudo-random sampling\n"
  "proportional to the number of bins in each level. All input points\n"
  "are sorted in the order described above, with no points repeated.\n\n"
  "The output of this filter are sorted points and associated point\n"
  "attributes represented by a vtkPolyData. In addition, an offset\n"
  "integral array is associated with the field data of the output,\n"
  "providing offsets into the points list via a breadth-first traversal\n"
  "order. Metadata describing the output is provided in the field data.\n"
  "Convenience functions are also provided here to access the data in a\n"
  "particular bin or across a level. (Using the offset array directly\n"
  "may result in higher performance.)\n\n"
  "While any vtkPointSet type can be provided as input, the output is\n"
  "represented by an explicit representation of points via a\n"
  "vtkPolyData. This output polydata will populate its instance of\n"
  "vtkPoints, but no cells will be defined (i.e., no vtkVertex or\n"
  "vtkPolyVertex are contained in the output).\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkPointCloudFilter vtkQuadricClustering vtkStaticPointLocator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHierarchicalBinningFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkHierarchicalBinningFilter", // tp_name
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
  PyvtkHierarchicalBinningFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHierarchicalBinningFilter_StaticNew()
{
  return vtkHierarchicalBinningFilter::New();
}

PyObject *PyvtkHierarchicalBinningFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHierarchicalBinningFilter_Type, PyvtkHierarchicalBinningFilter_Methods,
    "vtkHierarchicalBinningFilter",
 &PyvtkHierarchicalBinningFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHierarchicalBinningFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHierarchicalBinningFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHierarchicalBinningFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyLong_FromLong(12);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MAX_LEVEL", o);
    Py_DECREF(o);
  }
}

