// python wrapper for vtkContour3DLinearGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkContour3DLinearGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContour3DLinearGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkContour3DLinearGrid_ClassNew(); }


static PyObject *
PyvtkContour3DLinearGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContour3DLinearGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContour3DLinearGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContour3DLinearGrid *tempr = vtkContour3DLinearGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContour3DLinearGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContour3DLinearGrid::NewInstance());

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
PyvtkContour3DLinearGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkContour3DLinearGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkContour3DLinearGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkContour3DLinearGrid::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkContour3DLinearGrid::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkContour3DLinearGrid::GetValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkContour3DLinearGrid_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetValues(temp0);
    }
    else
    {
      op->vtkContour3DLinearGrid::GetValues(temp0);
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
PyvtkContour3DLinearGrid_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkContour3DLinearGrid_GetValues_s1(self, args);
    case 1:
      return PyvtkContour3DLinearGrid_GetValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return nullptr;
}


static PyObject *
PyvtkContour3DLinearGrid_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfContours(temp0);
    }
    else
    {
      op->vtkContour3DLinearGrid::SetNumberOfContours(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkContour3DLinearGrid::GetNumberOfContours());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

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

    if (ap.IsBound())
    {
      op->GenerateValues(temp0, temp1);
    }
    else
    {
      op->vtkContour3DLinearGrid::GenerateValues(temp0, temp1);
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
PyvtkContour3DLinearGrid_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  int temp0;
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
      op->GenerateValues(temp0, temp1, temp2);
    }
    else
    {
      op->vtkContour3DLinearGrid::GenerateValues(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContour3DLinearGrid_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContour3DLinearGrid_GenerateValues_s1(self, args);
    case 3:
      return PyvtkContour3DLinearGrid_GenerateValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return nullptr;
}


static PyObject *
PyvtkContour3DLinearGrid_SetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

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
      op->vtkContour3DLinearGrid::SetMergePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_GetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMergePoints() :
      op->vtkContour3DLinearGrid::GetMergePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_MergePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePointsOn();
    }
    else
    {
      op->vtkContour3DLinearGrid::MergePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_MergePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePointsOff();
    }
    else
    {
      op->vtkContour3DLinearGrid::MergePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_SetInterpolateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  int temp0;
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
      op->vtkContour3DLinearGrid::SetInterpolateAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_GetInterpolateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolateAttributes() :
      op->vtkContour3DLinearGrid::GetInterpolateAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_InterpolateAttributesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributesOn();
    }
    else
    {
      op->vtkContour3DLinearGrid::InterpolateAttributesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_InterpolateAttributesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributesOff();
    }
    else
    {
      op->vtkContour3DLinearGrid::InterpolateAttributesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  int temp0;
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
      op->vtkContour3DLinearGrid::SetComputeNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeNormals() :
      op->vtkContour3DLinearGrid::GetComputeNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOn();
    }
    else
    {
      op->vtkContour3DLinearGrid::ComputeNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOff();
    }
    else
    {
      op->vtkContour3DLinearGrid::ComputeNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_SetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeScalars(temp0);
    }
    else
    {
      op->vtkContour3DLinearGrid::SetComputeScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_GetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeScalars() :
      op->vtkContour3DLinearGrid::GetComputeScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_ComputeScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarsOn();
    }
    else
    {
      op->vtkContour3DLinearGrid::ComputeScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_ComputeScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarsOff();
    }
    else
    {
      op->vtkContour3DLinearGrid::ComputeScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

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
      op->vtkContour3DLinearGrid::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkContour3DLinearGrid::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkContour3DLinearGrid::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_SetUseScalarTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseScalarTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseScalarTree(temp0);
    }
    else
    {
      op->vtkContour3DLinearGrid::SetUseScalarTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_GetUseScalarTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseScalarTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseScalarTree() :
      op->vtkContour3DLinearGrid::GetUseScalarTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_UseScalarTreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseScalarTreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseScalarTreeOn();
    }
    else
    {
      op->vtkContour3DLinearGrid::UseScalarTreeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_UseScalarTreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseScalarTreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseScalarTreeOff();
    }
    else
    {
      op->vtkContour3DLinearGrid::UseScalarTreeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_SetScalarTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  vtkScalarTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarTree"))
  {
    if (ap.IsBound())
    {
      op->SetScalarTree(temp0);
    }
    else
    {
      op->vtkContour3DLinearGrid::SetScalarTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_GetScalarTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarTree *tempr = (ap.IsBound() ?
      op->GetScalarTree() :
      op->vtkContour3DLinearGrid::GetScalarTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_SetSequentialProcessing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSequentialProcessing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSequentialProcessing(temp0);
    }
    else
    {
      op->vtkContour3DLinearGrid::SetSequentialProcessing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_GetSequentialProcessing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSequentialProcessing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSequentialProcessing() :
      op->vtkContour3DLinearGrid::GetSequentialProcessing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_SequentialProcessingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SequentialProcessingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SequentialProcessingOn();
    }
    else
    {
      op->vtkContour3DLinearGrid::SequentialProcessingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_SequentialProcessingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SequentialProcessingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SequentialProcessingOff();
    }
    else
    {
      op->vtkContour3DLinearGrid::SequentialProcessingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_GetNumberOfThreadsUsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsUsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsUsed() :
      op->vtkContour3DLinearGrid::GetNumberOfThreadsUsed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_GetLargeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLargeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContour3DLinearGrid *op = static_cast<vtkContour3DLinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLargeIds() :
      op->vtkContour3DLinearGrid::GetLargeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContour3DLinearGrid_CanFullyProcessDataObject(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CanFullyProcessDataObject");

  vtkDataObject *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkContour3DLinearGrid::CanFullyProcessDataObject(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContour3DLinearGrid_Methods[] = {
  {"IsTypeOf", PyvtkContour3DLinearGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContour3DLinearGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContour3DLinearGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkContour3DLinearGrid\nC++: static vtkContour3DLinearGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContour3DLinearGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkContour3DLinearGrid\nC++: vtkContour3DLinearGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkContour3DLinearGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkContour3DLinearGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetValue", PyvtkContour3DLinearGrid_SetValue, METH_VARARGS,
   "SetValue(self, i:int, value:float) -> None\nC++: void SetValue(int i, double value)\n\nMethods to set / get contour values.\n"},
  {"GetValue", PyvtkContour3DLinearGrid_GetValue, METH_VARARGS,
   "GetValue(self, i:int) -> float\nC++: double GetValue(int i)\n\n"},
  {"GetValues", PyvtkContour3DLinearGrid_GetValues, METH_VARARGS,
   "GetValues(self) -> Pointer\nC++: double *GetValues()\nGetValues(self, contourValues:[float, ...]) -> None\nC++: void GetValues(double *contourValues)\n\n"},
  {"SetNumberOfContours", PyvtkContour3DLinearGrid_SetNumberOfContours, METH_VARARGS,
   "SetNumberOfContours(self, number:int) -> None\nC++: void SetNumberOfContours(int number)\n\n"},
  {"GetNumberOfContours", PyvtkContour3DLinearGrid_GetNumberOfContours, METH_VARARGS,
   "GetNumberOfContours(self) -> int\nC++: vtkIdType GetNumberOfContours()\n\n"},
  {"GenerateValues", PyvtkContour3DLinearGrid_GenerateValues, METH_VARARGS,
   "GenerateValues(self, numContours:int, range:[float, float])\n    -> None\nC++: void GenerateValues(int numContours, double range[2])\nGenerateValues(self, numContours:int, rangeStart:float,\n    rangeEnd:float) -> None\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\n"},
  {"SetMergePoints", PyvtkContour3DLinearGrid_SetMergePoints, METH_VARARGS,
   "SetMergePoints(self, _arg:int) -> None\nC++: virtual void SetMergePoints(vtkTypeBool _arg)\n\nIndicate whether to merge coincident points. This takes extra\ntime and produces fewer output points, creating a \"watertight\"\ncontour surface. By default this is off.\n"},
  {"GetMergePoints", PyvtkContour3DLinearGrid_GetMergePoints, METH_VARARGS,
   "GetMergePoints(self) -> int\nC++: virtual vtkTypeBool GetMergePoints()\n\n"},
  {"MergePointsOn", PyvtkContour3DLinearGrid_MergePointsOn, METH_VARARGS,
   "MergePointsOn(self) -> None\nC++: virtual void MergePointsOn()\n\n"},
  {"MergePointsOff", PyvtkContour3DLinearGrid_MergePointsOff, METH_VARARGS,
   "MergePointsOff(self) -> None\nC++: virtual void MergePointsOff()\n\n"},
  {"SetInterpolateAttributes", PyvtkContour3DLinearGrid_SetInterpolateAttributes, METH_VARARGS,
   "SetInterpolateAttributes(self, _arg:int) -> None\nC++: virtual void SetInterpolateAttributes(vtkTypeBool _arg)\n\nIndicate whether to interpolate input attributes onto the\nisosurface. By default this option is off.\n"},
  {"GetInterpolateAttributes", PyvtkContour3DLinearGrid_GetInterpolateAttributes, METH_VARARGS,
   "GetInterpolateAttributes(self) -> int\nC++: virtual vtkTypeBool GetInterpolateAttributes()\n\n"},
  {"InterpolateAttributesOn", PyvtkContour3DLinearGrid_InterpolateAttributesOn, METH_VARARGS,
   "InterpolateAttributesOn(self) -> None\nC++: virtual void InterpolateAttributesOn()\n\n"},
  {"InterpolateAttributesOff", PyvtkContour3DLinearGrid_InterpolateAttributesOff, METH_VARARGS,
   "InterpolateAttributesOff(self) -> None\nC++: virtual void InterpolateAttributesOff()\n\n"},
  {"SetComputeNormals", PyvtkContour3DLinearGrid_SetComputeNormals, METH_VARARGS,
   "SetComputeNormals(self, _arg:int) -> None\nC++: virtual void SetComputeNormals(vtkTypeBool _arg)\n\nIndicate whether to compute output point normals. An averaging\nmethod is used to average shared triangle normals. By default\nthis if off. This is a relatively expensive option so use\njudiciously.\n"},
  {"GetComputeNormals", PyvtkContour3DLinearGrid_GetComputeNormals, METH_VARARGS,
   "GetComputeNormals(self) -> int\nC++: virtual vtkTypeBool GetComputeNormals()\n\n"},
  {"ComputeNormalsOn", PyvtkContour3DLinearGrid_ComputeNormalsOn, METH_VARARGS,
   "ComputeNormalsOn(self) -> None\nC++: virtual void ComputeNormalsOn()\n\n"},
  {"ComputeNormalsOff", PyvtkContour3DLinearGrid_ComputeNormalsOff, METH_VARARGS,
   "ComputeNormalsOff(self) -> None\nC++: virtual void ComputeNormalsOff()\n\n"},
  {"SetComputeScalars", PyvtkContour3DLinearGrid_SetComputeScalars, METH_VARARGS,
   "SetComputeScalars(self, _arg:int) -> None\nC++: virtual void SetComputeScalars(vtkTypeBool _arg)\n\nSet/Get flag to compute scalars. When enabled, and when the\nInterpolateAttributes option is on, vtkContour3DLinearGrid will\nadd an array corresponding to the array used to compute the\ncontour and populate it with values.\n"},
  {"GetComputeScalars", PyvtkContour3DLinearGrid_GetComputeScalars, METH_VARARGS,
   "GetComputeScalars(self) -> int\nC++: virtual vtkTypeBool GetComputeScalars()\n\n"},
  {"ComputeScalarsOn", PyvtkContour3DLinearGrid_ComputeScalarsOn, METH_VARARGS,
   "ComputeScalarsOn(self) -> None\nC++: virtual void ComputeScalarsOn()\n\n"},
  {"ComputeScalarsOff", PyvtkContour3DLinearGrid_ComputeScalarsOff, METH_VARARGS,
   "ComputeScalarsOff(self) -> None\nC++: virtual void ComputeScalarsOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkContour3DLinearGrid_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkContour3DLinearGrid_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"GetMTime", PyvtkContour3DLinearGrid_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverloaded GetMTime() because of delegation to the internal\nvtkContourValues class.\n"},
  {"SetUseScalarTree", PyvtkContour3DLinearGrid_SetUseScalarTree, METH_VARARGS,
   "SetUseScalarTree(self, _arg:int) -> None\nC++: virtual void SetUseScalarTree(vtkTypeBool _arg)\n\nEnable the use of a scalar tree to accelerate contour extraction.\nBy default this is off. If enabled, and a scalar tree is not\nspecified, then a vtkSpanSpace instance will be constructed and\nused.\n"},
  {"GetUseScalarTree", PyvtkContour3DLinearGrid_GetUseScalarTree, METH_VARARGS,
   "GetUseScalarTree(self) -> int\nC++: virtual vtkTypeBool GetUseScalarTree()\n\n"},
  {"UseScalarTreeOn", PyvtkContour3DLinearGrid_UseScalarTreeOn, METH_VARARGS,
   "UseScalarTreeOn(self) -> None\nC++: virtual void UseScalarTreeOn()\n\n"},
  {"UseScalarTreeOff", PyvtkContour3DLinearGrid_UseScalarTreeOff, METH_VARARGS,
   "UseScalarTreeOff(self) -> None\nC++: virtual void UseScalarTreeOff()\n\n"},
  {"SetScalarTree", PyvtkContour3DLinearGrid_SetScalarTree, METH_VARARGS,
   "SetScalarTree(self, __a:vtkScalarTree) -> None\nC++: virtual void SetScalarTree(vtkScalarTree *)\n\nSpecify the scalar tree to use. By default a vtkSpanSpace scalar\ntree is used.\n"},
  {"GetScalarTree", PyvtkContour3DLinearGrid_GetScalarTree, METH_VARARGS,
   "GetScalarTree(self) -> vtkScalarTree\nC++: virtual vtkScalarTree *GetScalarTree()\n\n"},
  {"SetSequentialProcessing", PyvtkContour3DLinearGrid_SetSequentialProcessing, METH_VARARGS,
   "SetSequentialProcessing(self, _arg:int) -> None\nC++: virtual void SetSequentialProcessing(vtkTypeBool _arg)\n\nForce sequential processing (i.e. single thread) of the\ncontouring process. By default, sequential processing is off.\nNote this flag only applies if the class has been compiled with\nVTK_SMP_IMPLEMENTATION_TYPE set to something other than\nSequential. (If set to Sequential, then the filter always runs in\nserial mode.) This flag is typically used for benchmarking\npurposes.\n"},
  {"GetSequentialProcessing", PyvtkContour3DLinearGrid_GetSequentialProcessing, METH_VARARGS,
   "GetSequentialProcessing(self) -> int\nC++: virtual vtkTypeBool GetSequentialProcessing()\n\n"},
  {"SequentialProcessingOn", PyvtkContour3DLinearGrid_SequentialProcessingOn, METH_VARARGS,
   "SequentialProcessingOn(self) -> None\nC++: virtual void SequentialProcessingOn()\n\n"},
  {"SequentialProcessingOff", PyvtkContour3DLinearGrid_SequentialProcessingOff, METH_VARARGS,
   "SequentialProcessingOff(self) -> None\nC++: virtual void SequentialProcessingOff()\n\n"},
  {"GetNumberOfThreadsUsed", PyvtkContour3DLinearGrid_GetNumberOfThreadsUsed, METH_VARARGS,
   "GetNumberOfThreadsUsed(self) -> int\nC++: int GetNumberOfThreadsUsed()\n\nReturn the number of threads actually used during execution. This\nis valid only after algorithm execution.\n"},
  {"GetLargeIds", PyvtkContour3DLinearGrid_GetLargeIds, METH_VARARGS,
   "GetLargeIds(self) -> bool\nC++: bool GetLargeIds()\n\nInform the user as to whether large ids were used during filter\nexecution. This flag only has meaning after the filter has\nexecuted. Large ids are used when the id of the larges cell or\npoint is greater than signed 32-bit precision. (Smaller ids\nreduce memory usage and speed computation. Note that LargeIds are\nonly available on 64-bit architectures.)\n"},
  {"CanFullyProcessDataObject", PyvtkContour3DLinearGrid_CanFullyProcessDataObject, METH_VARARGS,
   "CanFullyProcessDataObject(object:vtkDataObject,\n    scalarArrayName:str) -> bool\nC++: static bool CanFullyProcessDataObject(vtkDataObject *object,\n    const char *scalarArrayName)\n\nReturns true if the data object passed in is fully supported by\nthis filter, i.e., all cell types are linear. For composite\ndatasets, this means all dataset leaves have only linear cell\ntypes that can be processed by this filter. The second array is\nthe name of the array to process.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkContour3DLinearGrid_Doc =
  "vtkContour3DLinearGrid - fast generation of isosurface from 3D linear\ncells\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkContour3DLinearGrid is a specialized filter that generates\n"
  "isocontours from an input vtkUnstructuredGrid consisting of 3D linear\n"
  "cells: tetrahedra, hexahedra, voxels, pyramids, and/or wedges. (The\n"
  "cells are linear in the sense that each cell edge is a straight\n"
  "line.) The filter is designed for high-speed, specialized operation.\n"
  "All other cell types are skipped and produce no output. (Note: the\n"
  "filter will also process input vtkCompositeDataSets containing\n"
  "vtkUnstructuredGrids.)\n\n"
  "To use this filter you must specify an input unstructured grid or\n"
  "vtkCompositeDataSet, and one or more contour values.  You can either\n"
  "use the method SetValue() to specify each contour value, or use\n"
  "GenerateValues() to generate a series of evenly spaced contours.\n\n"
  "The filter performance varies depending on optional output\n"
  "information. Basically if point merging is required (when\n"
  "PointMerging, InterpolateAttributes, and/or ComputeNormals is\n"
  "enabled), a sorting process is required to eliminate duplicate output\n"
  "points in the isosurface. Otherwise when point merging is not\n"
  "required, a fast path process produces independent triangles\n"
  "representing the isosurface. In many situations the results of the\n"
  "fast path are quite good and do not require additional processing.\n\n"
  "Note that another performance option exists, using a vtkScalarTree,\n"
  "which is an object that accelerates isosurface extraction, at the\n"
  "initial cost of building the scalar tree. (This feature is useful for\n"
  "exploratory isosurface extraction when the isovalue is frequently\n"
  "changed.) In some cases this can improve performance, however this\n"
  "algorithm is so highly tuned that random memory jumps (due to random\n"
  "access of cells provided by the scalar tree) can actually negatively\n"
  "impact performance, especially if the input dataset type consists of\n"
  "homogeneous cell types.\n\n"
  "@warning\n"
  "When the input is of type vtkCompositeDataSet the filter will process\n"
  "the unstructured grid(s) contained in the composite data set. As a\n"
  "result the output of this filter is then a composite data set (same\n"
  "as input) containing multiple vtkPolyData. When a vtkUnstructuredGrid\n"
  "is provided as input the output is a single vtkPolyData.\n\n"
  "@warning\n"
  "The fast path simply produces output points and triangles (the fast\n"
  "path executes when MergePoints if off; InterpolateAttributes is off;\n"
  "and ComputeNormals is off). Since the fast path does not merge\n"
  "points, it produces many more output points, typically on the order\n"
  "of 5-6x more than when MergePoints is enabled. Adding in the other\n"
  "options point merging, field interpolation, and normal generation\n"
  "results in additional performance impacts. By default the fast path\n"
  "is enabled.\n\n"
  "@warning\n"
  "When a vtkCompositeDataSet is provided as input, and UseScalarTree is\n"
  "enabled and a ScalarTree specified, then the specified scalar tree is\n"
  "cloned to create new ones for each dataset in the composite dataset.\n"
  "Otherwise (i.e., when vtkUnstructuredGrid input) the specified scalar\n"
  "tree is directly used (no cloning required).\n\n"
  "@warning\n"
  "Internal to this filter, a caching iterator is used to traverse the\n"
  "cells that compose the vtkUnstructuredGrid. Maximum performance is\n"
  "obtained if the cells are all of one type (i.e., input grid of\n"
  "homogeneous cell types); repeated switching from different types may\n"
  "have detrimental effects on performance.\n\n"
  "@warning\n"
  "For unstructured data, gradients are not computed. Normals are\n"
  "computed if requested; they are \"pseudo-normals\" in that the normals\n"
  "of output triangles that use a common point are averaged at the\n"
  "point. Alternatively use vtkPolyDataNormals to compute the surface\n"
  "normals.\n\n"
  "@warning\n"
  "The output of this filter is subtly different than the more general\n"
  "filter vtkContourGrid. vtkContourGrid eliminates small, degenerate\n"
  "triangles with concident points which are consequently not sent to\n"
  "the output. In practice this makes little impact on visual appearance\n"
  "but may have repercussions if the output is used for modelling and/or\n"
  "analysis.\n\n"
  "@warning\n"
  "Input cells that are not of 3D linear type (tetrahedron, hexahedron,\n"
  "wedge, pyramid, and voxel) are simply skipped and not processed.\n\n"
  "@warning\n"
  "The filter is templated on types of input and output points, and\n"
  "input scalar type. To reduce object file bloat, only real points\n"
  "(float,double) are processed, and a limited subset of scalar types.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkContourGrid vtkContourFilter vtkFlyingEdges3D vtkMarchingCubes\n"
  "vtkPolyDataNormals vtkStaticEdgeLocatorTemplate.h vtkScalarTree\n"
  "vtkSpanSpace\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkContour3DLinearGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkContour3DLinearGrid", // tp_name
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
  PyvtkContour3DLinearGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContour3DLinearGrid_StaticNew()
{
  return vtkContour3DLinearGrid::New();
}

PyObject *PyvtkContour3DLinearGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkContour3DLinearGrid_Type, PyvtkContour3DLinearGrid_Methods,
    "vtkContour3DLinearGrid",
 &PyvtkContour3DLinearGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContour3DLinearGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContour3DLinearGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContour3DLinearGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

