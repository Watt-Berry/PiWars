// python wrapper for vtkParallelCoordinatesHistogramRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkParallelCoordinatesHistogramRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParallelCoordinatesHistogramRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkParallelCoordinatesHistogramRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkParallelCoordinatesRepresentation_ClassNew
extern "C" { PyObject *PyvtkParallelCoordinatesRepresentation_ClassNew(); }
#define DECLARED_PyvtkParallelCoordinatesRepresentation_ClassNew
#endif

static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParallelCoordinatesHistogramRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelCoordinatesHistogramRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParallelCoordinatesHistogramRepresentation *tempr = vtkParallelCoordinatesHistogramRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParallelCoordinatesHistogramRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelCoordinatesHistogramRepresentation::NewInstance());

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
PyvtkParallelCoordinatesHistogramRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkParallelCoordinatesHistogramRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkParallelCoordinatesHistogramRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  vtkViewTheme *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewTheme"))
  {
    if (ap.IsBound())
    {
      op->ApplyViewTheme(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesHistogramRepresentation::ApplyViewTheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetUseHistograms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseHistograms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseHistograms(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesHistogramRepresentation::SetUseHistograms(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_GetUseHistograms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseHistograms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseHistograms() :
      op->vtkParallelCoordinatesHistogramRepresentation::GetUseHistograms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_UseHistogramsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHistogramsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseHistogramsOn();
    }
    else
    {
      op->vtkParallelCoordinatesHistogramRepresentation::UseHistogramsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_UseHistogramsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHistogramsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseHistogramsOff();
    }
    else
    {
      op->vtkParallelCoordinatesHistogramRepresentation::UseHistogramsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetShowOutliers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowOutliers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowOutliers(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesHistogramRepresentation::SetShowOutliers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_GetShowOutliers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowOutliers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowOutliers() :
      op->vtkParallelCoordinatesHistogramRepresentation::GetShowOutliers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_ShowOutliersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowOutliersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowOutliersOn();
    }
    else
    {
      op->vtkParallelCoordinatesHistogramRepresentation::ShowOutliersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_ShowOutliersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowOutliersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowOutliersOff();
    }
    else
    {
      op->vtkParallelCoordinatesHistogramRepresentation::ShowOutliersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetHistogramLookupTableRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramLookupTableRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetHistogramLookupTableRange(temp0, temp1);
    }
    else
    {
      op->vtkParallelCoordinatesHistogramRepresentation::SetHistogramLookupTableRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetHistogramLookupTableRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHistogramLookupTableRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetHistogramLookupTableRange(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesHistogramRepresentation::SetHistogramLookupTableRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetHistogramLookupTableRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkParallelCoordinatesHistogramRepresentation_SetHistogramLookupTableRange_s1(self, args);
    case 1:
      return PyvtkParallelCoordinatesHistogramRepresentation_SetHistogramLookupTableRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHistogramLookupTableRange");
  return nullptr;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_GetHistogramLookupTableRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHistogramLookupTableRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetHistogramLookupTableRange() :
      op->vtkParallelCoordinatesHistogramRepresentation::GetHistogramLookupTableRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetNumberOfHistogramBins_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHistogramBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfHistogramBins(temp0, temp1);
    }
    else
    {
      op->vtkParallelCoordinatesHistogramRepresentation::SetNumberOfHistogramBins(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetNumberOfHistogramBins_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHistogramBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetNumberOfHistogramBins(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesHistogramRepresentation::SetNumberOfHistogramBins(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetNumberOfHistogramBins(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkParallelCoordinatesHistogramRepresentation_SetNumberOfHistogramBins_s1(self, args);
    case 1:
      return PyvtkParallelCoordinatesHistogramRepresentation_SetNumberOfHistogramBins_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfHistogramBins");
  return nullptr;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_GetNumberOfHistogramBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHistogramBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNumberOfHistogramBins() :
      op->vtkParallelCoordinatesHistogramRepresentation::GetNumberOfHistogramBins());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetPreferredNumberOfOutliers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreferredNumberOfOutliers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreferredNumberOfOutliers(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesHistogramRepresentation::SetPreferredNumberOfOutliers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_GetPreferredNumberOfOutliers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreferredNumberOfOutliers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreferredNumberOfOutliers() :
      op->vtkParallelCoordinatesHistogramRepresentation::GetPreferredNumberOfOutliers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SwapAxisPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapAxisPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SwapAxisPositions(temp0, temp1) :
      op->vtkParallelCoordinatesHistogramRepresentation::SwapAxisPositions(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesHistogramRepresentation_SetRangeAtPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRangeAtPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesHistogramRepresentation *op = static_cast<vtkParallelCoordinatesHistogramRepresentation *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetRangeAtPosition(temp0, temp1) :
      op->vtkParallelCoordinatesHistogramRepresentation::SetRangeAtPosition(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkParallelCoordinatesHistogramRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkParallelCoordinatesHistogramRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParallelCoordinatesHistogramRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParallelCoordinatesHistogramRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkParallelCoordinatesHistogramRepresentation\nC++: static vtkParallelCoordinatesHistogramRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParallelCoordinatesHistogramRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkParallelCoordinatesHistogramRepresentation\nC++: vtkParallelCoordinatesHistogramRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkParallelCoordinatesHistogramRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkParallelCoordinatesHistogramRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ApplyViewTheme", PyvtkParallelCoordinatesHistogramRepresentation_ApplyViewTheme, METH_VARARGS,
   "ApplyViewTheme(self, theme:vtkViewTheme) -> None\nC++: void ApplyViewTheme(vtkViewTheme *theme) override;\n\nApply the theme to this view.\n"},
  {"SetUseHistograms", PyvtkParallelCoordinatesHistogramRepresentation_SetUseHistograms, METH_VARARGS,
   "SetUseHistograms(self, __a:int) -> None\nC++: virtual void SetUseHistograms(vtkTypeBool)\n\nWhether to use the histogram rendering mode or the superclass's\nline rendering mode\n"},
  {"GetUseHistograms", PyvtkParallelCoordinatesHistogramRepresentation_GetUseHistograms, METH_VARARGS,
   "GetUseHistograms(self) -> int\nC++: virtual vtkTypeBool GetUseHistograms()\n\n"},
  {"UseHistogramsOn", PyvtkParallelCoordinatesHistogramRepresentation_UseHistogramsOn, METH_VARARGS,
   "UseHistogramsOn(self) -> None\nC++: virtual void UseHistogramsOn()\n\n"},
  {"UseHistogramsOff", PyvtkParallelCoordinatesHistogramRepresentation_UseHistogramsOff, METH_VARARGS,
   "UseHistogramsOff(self) -> None\nC++: virtual void UseHistogramsOff()\n\n"},
  {"SetShowOutliers", PyvtkParallelCoordinatesHistogramRepresentation_SetShowOutliers, METH_VARARGS,
   "SetShowOutliers(self, __a:int) -> None\nC++: virtual void SetShowOutliers(vtkTypeBool)\n\nWhether to compute and show outlier lines\n"},
  {"GetShowOutliers", PyvtkParallelCoordinatesHistogramRepresentation_GetShowOutliers, METH_VARARGS,
   "GetShowOutliers(self) -> int\nC++: virtual vtkTypeBool GetShowOutliers()\n\n"},
  {"ShowOutliersOn", PyvtkParallelCoordinatesHistogramRepresentation_ShowOutliersOn, METH_VARARGS,
   "ShowOutliersOn(self) -> None\nC++: virtual void ShowOutliersOn()\n\n"},
  {"ShowOutliersOff", PyvtkParallelCoordinatesHistogramRepresentation_ShowOutliersOff, METH_VARARGS,
   "ShowOutliersOff(self) -> None\nC++: virtual void ShowOutliersOff()\n\n"},
  {"SetHistogramLookupTableRange", PyvtkParallelCoordinatesHistogramRepresentation_SetHistogramLookupTableRange, METH_VARARGS,
   "SetHistogramLookupTableRange(self, _arg1:float, _arg2:float)\n    -> None\nC++: virtual void SetHistogramLookupTableRange(double _arg1,\n    double _arg2)\nSetHistogramLookupTableRange(self, _arg:(float, float)) -> None\nC++: void SetHistogramLookupTableRange(const double _arg[2])\n\nControl over the range of the lookup table used to draw the\nhistogram quads.\n"},
  {"GetHistogramLookupTableRange", PyvtkParallelCoordinatesHistogramRepresentation_GetHistogramLookupTableRange, METH_VARARGS,
   "GetHistogramLookupTableRange(self) -> (float, float)\nC++: virtual double *GetHistogramLookupTableRange()\n\n"},
  {"SetNumberOfHistogramBins", PyvtkParallelCoordinatesHistogramRepresentation_SetNumberOfHistogramBins, METH_VARARGS,
   "SetNumberOfHistogramBins(self, __a:int, __b:int) -> None\nC++: void SetNumberOfHistogramBins(int, int)\nSetNumberOfHistogramBins(self, __a:[int, ...]) -> None\nC++: void SetNumberOfHistogramBins(int *)\n\nThe number of histogram bins on either side of each pair of axes.\n"},
  {"GetNumberOfHistogramBins", PyvtkParallelCoordinatesHistogramRepresentation_GetNumberOfHistogramBins, METH_VARARGS,
   "GetNumberOfHistogramBins(self) -> (int, int)\nC++: virtual int *GetNumberOfHistogramBins()\n\n"},
  {"SetPreferredNumberOfOutliers", PyvtkParallelCoordinatesHistogramRepresentation_SetPreferredNumberOfOutliers, METH_VARARGS,
   "SetPreferredNumberOfOutliers(self, __a:int) -> None\nC++: void SetPreferredNumberOfOutliers(int)\n\nTarget maximum number of outliers to be drawn, although not\nguaranteed.\n"},
  {"GetPreferredNumberOfOutliers", PyvtkParallelCoordinatesHistogramRepresentation_GetPreferredNumberOfOutliers, METH_VARARGS,
   "GetPreferredNumberOfOutliers(self) -> int\nC++: virtual int GetPreferredNumberOfOutliers()\n\n"},
  {"SwapAxisPositions", PyvtkParallelCoordinatesHistogramRepresentation_SwapAxisPositions, METH_VARARGS,
   "SwapAxisPositions(self, position1:int, position2:int) -> int\nC++: int SwapAxisPositions(int position1, int position2) override;\n\nCalls superclass swap, and assures that only histograms affected\nby the swap get recomputed.\n"},
  {"SetRangeAtPosition", PyvtkParallelCoordinatesHistogramRepresentation_SetRangeAtPosition, METH_VARARGS,
   "SetRangeAtPosition(self, position:int, range:[float, float])\n    -> int\nC++: int SetRangeAtPosition(int position, double range[2])\n    override;\n\nCalls the superclass method, and assures that only the two\nhistograms affect by this call get recomputed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkParallelCoordinatesHistogramRepresentation_Doc =
  "vtkParallelCoordinatesHistogramRepresentation - Data representation\n that takes generic multivariate data and produces a parallel\ncoordinates plot.\n\n"
  "Superclass: vtkParallelCoordinatesRepresentation\n\n"
  "This plot optionally can draw a histogram-based plot summary.\n\n\n"
  " A parallel coordinates plot represents each variable in a\n"
  "multivariate\n"
  " data set as a separate axis.  Individual samples of that data set\n"
  "are\n"
  " represented as a polyline that pass through each variable axis at\n"
  " positions that correspond to data values.  This class can generate\n"
  " parallel coordinates plots identical to its superclass\n"
  " (vtkParallelCoordinatesRepresentation) and has the same interaction\n"
  " styles.\n\n\n"
  " In addition to the standard parallel coordinates plot, this class\n"
  "also\n"
  " can draw a histogram summary of the parallel coordinates plot.\n"
  " Rather than draw every row in an input data set, first it computes\n"
  " a 2D histogram for all neighboring variable axes, then it draws\n"
  " bar (thickness corresponds to bin size) for each bin the histogram\n"
  " with opacity weighted by the number of rows contained in the bin.\n"
  " The result is essentially a density map.\n\n\n"
  " Because this emphasizes dense regions over sparse outliers, this\n"
  "class\n"
  " also uses a vtkComputeHistogram2DOutliers instance to identify\n"
  "outlier\n"
  " table rows and draws those as standard parallel coordinates lines.\n\n"
  "@sa\n"
  " vtkParallelCoordinatesView vtkParallelCoordinatesRepresentation\n"
  " vtkExtractHistogram2D vtkComputeHistogram2DOutliers\n\n"
  "@par Thanks:\n"
  " Developed by David Feng at Sandia National Laboratories\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParallelCoordinatesHistogramRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkParallelCoordinatesHistogramRepresentation", // tp_name
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
  PyvtkParallelCoordinatesHistogramRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParallelCoordinatesHistogramRepresentation_StaticNew()
{
  return vtkParallelCoordinatesHistogramRepresentation::New();
}

PyObject *PyvtkParallelCoordinatesHistogramRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkParallelCoordinatesHistogramRepresentation_Type, PyvtkParallelCoordinatesHistogramRepresentation_Methods,
    "vtkParallelCoordinatesHistogramRepresentation",
 &PyvtkParallelCoordinatesHistogramRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkParallelCoordinatesRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParallelCoordinatesHistogramRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParallelCoordinatesHistogramRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParallelCoordinatesHistogramRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

