// python wrapper for vtkLinearCellExtrusionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLinearCellExtrusionFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLinearCellExtrusionFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkLinearCellExtrusionFilter_ClassNew(); }


static PyObject *
PyvtkLinearCellExtrusionFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLinearCellExtrusionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLinearCellExtrusionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLinearCellExtrusionFilter *tempr = vtkLinearCellExtrusionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLinearCellExtrusionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLinearCellExtrusionFilter::NewInstance());

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
PyvtkLinearCellExtrusionFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLinearCellExtrusionFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLinearCellExtrusionFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkLinearCellExtrusionFilter::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkLinearCellExtrusionFilter::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_SetUseUserVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseUserVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseUserVector(temp0);
    }
    else
    {
      op->vtkLinearCellExtrusionFilter::SetUseUserVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_GetUseUserVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseUserVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseUserVector() :
      op->vtkLinearCellExtrusionFilter::GetUseUserVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_UseUserVectorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUserVectorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseUserVectorOn();
    }
    else
    {
      op->vtkLinearCellExtrusionFilter::UseUserVectorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_UseUserVectorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUserVectorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseUserVectorOff();
    }
    else
    {
      op->vtkLinearCellExtrusionFilter::UseUserVectorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_SetUserVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

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
      op->SetUserVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLinearCellExtrusionFilter::SetUserVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLinearCellExtrusionFilter_SetUserVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetUserVector(temp0);
    }
    else
    {
      op->vtkLinearCellExtrusionFilter::SetUserVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLinearCellExtrusionFilter_SetUserVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLinearCellExtrusionFilter_SetUserVector_s1(self, args);
    case 1:
      return PyvtkLinearCellExtrusionFilter_SetUserVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUserVector");
  return nullptr;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_GetUserVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetUserVector() :
      op->vtkLinearCellExtrusionFilter::GetUserVector());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_SetMergeDuplicatePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeDuplicatePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeDuplicatePoints(temp0);
    }
    else
    {
      op->vtkLinearCellExtrusionFilter::SetMergeDuplicatePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_GetMergeDuplicatePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeDuplicatePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergeDuplicatePoints() :
      op->vtkLinearCellExtrusionFilter::GetMergeDuplicatePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_MergeDuplicatePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeDuplicatePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeDuplicatePointsOn();
    }
    else
    {
      op->vtkLinearCellExtrusionFilter::MergeDuplicatePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_MergeDuplicatePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeDuplicatePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeDuplicatePointsOff();
    }
    else
    {
      op->vtkLinearCellExtrusionFilter::MergeDuplicatePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkLinearCellExtrusionFilter::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkLinearCellExtrusionFilter::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearCellExtrusionFilter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearCellExtrusionFilter *op = static_cast<vtkLinearCellExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkLinearCellExtrusionFilter::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLinearCellExtrusionFilter_Methods[] = {
  {"IsTypeOf", PyvtkLinearCellExtrusionFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLinearCellExtrusionFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLinearCellExtrusionFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLinearCellExtrusionFilter\nC++: static vtkLinearCellExtrusionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLinearCellExtrusionFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLinearCellExtrusionFilter\nC++: vtkLinearCellExtrusionFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLinearCellExtrusionFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLinearCellExtrusionFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetScaleFactor", PyvtkLinearCellExtrusionFilter_SetScaleFactor, METH_VARARGS,
   "SetScaleFactor(self, _arg:float) -> None\nC++: virtual void SetScaleFactor(double _arg)\n\nSpecify the scale factor applied on the cell value during\nextrusion. Default is 1.0\n"},
  {"GetScaleFactor", PyvtkLinearCellExtrusionFilter_GetScaleFactor, METH_VARARGS,
   "GetScaleFactor(self) -> float\nC++: virtual double GetScaleFactor()\n\n"},
  {"SetUseUserVector", PyvtkLinearCellExtrusionFilter_SetUseUserVector, METH_VARARGS,
   "SetUseUserVector(self, _arg:bool) -> None\nC++: virtual void SetUseUserVector(bool _arg)\n\nSpecify if the algorithm should use the specified vector instead\nof cell normals. Default is false\n"},
  {"GetUseUserVector", PyvtkLinearCellExtrusionFilter_GetUseUserVector, METH_VARARGS,
   "GetUseUserVector(self) -> bool\nC++: virtual bool GetUseUserVector()\n\n"},
  {"UseUserVectorOn", PyvtkLinearCellExtrusionFilter_UseUserVectorOn, METH_VARARGS,
   "UseUserVectorOn(self) -> None\nC++: virtual void UseUserVectorOn()\n\n"},
  {"UseUserVectorOff", PyvtkLinearCellExtrusionFilter_UseUserVectorOff, METH_VARARGS,
   "UseUserVectorOff(self) -> None\nC++: virtual void UseUserVectorOff()\n\n"},
  {"SetUserVector", PyvtkLinearCellExtrusionFilter_SetUserVector, METH_VARARGS,
   "SetUserVector(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetUserVector(double _arg1, double _arg2,\n    double _arg3)\nSetUserVector(self, _arg:(float, float, float)) -> None\nC++: virtual void SetUserVector(const double _arg[3])\n\nSpecify the scale factor applied on the cell value during\nextrusion.\n"},
  {"GetUserVector", PyvtkLinearCellExtrusionFilter_GetUserVector, METH_VARARGS,
   "GetUserVector(self) -> (float, float, float)\nC++: virtual double *GetUserVector()\n\n"},
  {"SetMergeDuplicatePoints", PyvtkLinearCellExtrusionFilter_SetMergeDuplicatePoints, METH_VARARGS,
   "SetMergeDuplicatePoints(self, _arg:bool) -> None\nC++: virtual void SetMergeDuplicatePoints(bool _arg)\n\nSpecify if the algorithm should merge duplicate points. Default\nis false\n"},
  {"GetMergeDuplicatePoints", PyvtkLinearCellExtrusionFilter_GetMergeDuplicatePoints, METH_VARARGS,
   "GetMergeDuplicatePoints(self) -> bool\nC++: virtual bool GetMergeDuplicatePoints()\n\n"},
  {"MergeDuplicatePointsOn", PyvtkLinearCellExtrusionFilter_MergeDuplicatePointsOn, METH_VARARGS,
   "MergeDuplicatePointsOn(self) -> None\nC++: virtual void MergeDuplicatePointsOn()\n\n"},
  {"MergeDuplicatePointsOff", PyvtkLinearCellExtrusionFilter_MergeDuplicatePointsOff, METH_VARARGS,
   "MergeDuplicatePointsOff(self) -> None\nC++: virtual void MergeDuplicatePointsOff()\n\n"},
  {"GetLocator", PyvtkLinearCellExtrusionFilter_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {"SetLocator", PyvtkLinearCellExtrusionFilter_SetLocator, METH_VARARGS,
   "SetLocator(self, _arg:vtkIncrementalPointLocator) -> None\nC++: virtual void SetLocator(vtkIncrementalPointLocator *_arg)\n\n"},
  {"CreateDefaultLocator", PyvtkLinearCellExtrusionFilter_CreateDefaultLocator, METH_VARARGS,
   "CreateDefaultLocator(self) -> None\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLinearCellExtrusionFilter_Doc =
  "vtkLinearCellExtrusionFilter - extrude polygonal data to create 3D\ncells from 2D cells\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkLinearCellExtrusionFilter is a modeling filter. It takes polygonal\n"
  "data as input and generates an unstructured grid data on output. The\n"
  "input dataset is swept according to the input cell data array value\n"
  "along the cell normal and creates new 3D primitives. Triangles will\n"
  "become Wedges, Quads will become Hexahedrons, and Polygons will\n"
  "become Polyhedrons. This filter currently takes into account only\n"
  "polys and discard vertices, lines and strips. Unlike the\n"
  "vtkLinearExtrusionFilter, this filter is designed to extrude each\n"
  "cell independently using its normal and its scalar value.\n\n"
  "@sa\n"
  "vtkLinearExtrusionFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLinearCellExtrusionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkLinearCellExtrusionFilter", // tp_name
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
  PyvtkLinearCellExtrusionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLinearCellExtrusionFilter_StaticNew()
{
  return vtkLinearCellExtrusionFilter::New();
}

PyObject *PyvtkLinearCellExtrusionFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLinearCellExtrusionFilter_Type, PyvtkLinearCellExtrusionFilter_Methods,
    "vtkLinearCellExtrusionFilter",
 &PyvtkLinearCellExtrusionFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLinearCellExtrusionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLinearCellExtrusionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLinearCellExtrusionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

