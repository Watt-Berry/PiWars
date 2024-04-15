// python wrapper for vtkDelaunay2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDelaunay2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDelaunay2D(PyObject *dict); }
extern "C" { PyObject *PyvtkDelaunay2D_ClassNew(); }


static PyObject *
PyvtkDelaunay2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDelaunay2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDelaunay2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDelaunay2D *tempr = vtkDelaunay2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDelaunay2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDelaunay2D::NewInstance());

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
PyvtkDelaunay2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDelaunay2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDelaunay2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkDelaunay2D::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

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
      op->vtkDelaunay2D::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkDelaunay2D::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlpha(temp0);
    }
    else
    {
      op->vtkDelaunay2D::SetAlpha(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetAlphaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAlphaMinValue() :
      op->vtkDelaunay2D::GetAlphaMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetAlphaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAlphaMaxValue() :
      op->vtkDelaunay2D::GetAlphaMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAlpha() :
      op->vtkDelaunay2D::GetAlpha());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

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
      op->vtkDelaunay2D::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkDelaunay2D::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkDelaunay2D::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkDelaunay2D::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0);
    }
    else
    {
      op->vtkDelaunay2D::SetOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOffsetMinValue() :
      op->vtkDelaunay2D::GetOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOffsetMaxValue() :
      op->vtkDelaunay2D::GetOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkDelaunay2D::GetOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetBoundingTriangulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingTriangulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundingTriangulation(temp0);
    }
    else
    {
      op->vtkDelaunay2D::SetBoundingTriangulation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetBoundingTriangulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingTriangulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundingTriangulation() :
      op->vtkDelaunay2D::GetBoundingTriangulation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_BoundingTriangulationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundingTriangulationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundingTriangulationOn();
    }
    else
    {
      op->vtkDelaunay2D::BoundingTriangulationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_BoundingTriangulationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundingTriangulationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundingTriangulationOff();
    }
    else
    {
      op->vtkDelaunay2D::BoundingTriangulationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkDelaunay2D::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkDelaunay2D::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetProjectionPlaneMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPlaneMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionPlaneMode(temp0);
    }
    else
    {
      op->vtkDelaunay2D::SetProjectionPlaneMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetProjectionPlaneModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPlaneModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionPlaneModeMinValue() :
      op->vtkDelaunay2D::GetProjectionPlaneModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetProjectionPlaneModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPlaneModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionPlaneModeMaxValue() :
      op->vtkDelaunay2D::GetProjectionPlaneModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetProjectionPlaneMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPlaneMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionPlaneMode() :
      op->vtkDelaunay2D::GetProjectionPlaneMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_ComputeBestFittingPlane(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeBestFittingPlane");

  vtkPointSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointSet"))
  {
    vtkAbstractTransform *tempr = vtkDelaunay2D::ComputeBestFittingPlane(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_SetRandomPointInsertion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRandomPointInsertion(temp0);
    }
    else
    {
      op->vtkDelaunay2D::SetRandomPointInsertion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_GetRandomPointInsertion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomPointInsertion() :
      op->vtkDelaunay2D::GetRandomPointInsertion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_RandomPointInsertionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomPointInsertionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RandomPointInsertionOn();
    }
    else
    {
      op->vtkDelaunay2D::RandomPointInsertionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay2D_RandomPointInsertionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomPointInsertionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay2D *op = static_cast<vtkDelaunay2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RandomPointInsertionOff();
    }
    else
    {
      op->vtkDelaunay2D::RandomPointInsertionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDelaunay2D_Methods[] = {
  {"IsTypeOf", PyvtkDelaunay2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDelaunay2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDelaunay2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDelaunay2D\nC++: static vtkDelaunay2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDelaunay2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDelaunay2D\nC++: vtkDelaunay2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDelaunay2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDelaunay2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSourceData", PyvtkDelaunay2D_SetSourceData, METH_VARARGS,
   "SetSourceData(self, __a:vtkPolyData) -> None\nC++: void SetSourceData(vtkPolyData *)\n\nSpecify the source object used to specify constrained edges and\nloops. (This is optional.) If set, and lines/polygons are\ndefined, a constrained triangulation is created. The\nlines/polygons are assumed to reference points in the input point\nset (i.e. point ids are identical in the input and source). Note\nthat this method does not connect the pipeline. See\nSetSourceConnection for connecting the pipeline.\n"},
  {"SetSourceConnection", PyvtkDelaunay2D_SetSourceConnection, METH_VARARGS,
   "SetSourceConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the source object used to specify constrained edges and\nloops. (This is optional.) If set, and lines/polygons are\ndefined, a constrained triangulation is created. The\nlines/polygons are assumed to reference points in the input point\nset (i.e. point ids are identical in the input and source). New\nstyle. This method is equivalent to SetInputConnection(1,\nalgOutput).\n"},
  {"GetSource", PyvtkDelaunay2D_GetSource, METH_VARARGS,
   "GetSource(self) -> vtkPolyData\nC++: vtkPolyData *GetSource()\n\nGet a pointer to the source object.\n"},
  {"SetAlpha", PyvtkDelaunay2D_SetAlpha, METH_VARARGS,
   "SetAlpha(self, _arg:float) -> None\nC++: virtual void SetAlpha(double _arg)\n\nSpecify alpha (or distance) value to control output of this\nfilter. For a non-zero alpha value, only edges or triangles\ncontained within a sphere centered at mesh vertices will be\noutput. Otherwise, only triangles will be output.\n"},
  {"GetAlphaMinValue", PyvtkDelaunay2D_GetAlphaMinValue, METH_VARARGS,
   "GetAlphaMinValue(self) -> float\nC++: virtual double GetAlphaMinValue()\n\n"},
  {"GetAlphaMaxValue", PyvtkDelaunay2D_GetAlphaMaxValue, METH_VARARGS,
   "GetAlphaMaxValue(self) -> float\nC++: virtual double GetAlphaMaxValue()\n\n"},
  {"GetAlpha", PyvtkDelaunay2D_GetAlpha, METH_VARARGS,
   "GetAlpha(self) -> float\nC++: virtual double GetAlpha()\n\n"},
  {"SetTolerance", PyvtkDelaunay2D_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nSpecify a tolerance to control discarding of closely spaced\npoints. This tolerance is specified as a fraction of the diagonal\nlength of the bounding box of the points.\n"},
  {"GetToleranceMinValue", PyvtkDelaunay2D_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> float\nC++: virtual double GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkDelaunay2D_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> float\nC++: virtual double GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkDelaunay2D_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {"SetOffset", PyvtkDelaunay2D_SetOffset, METH_VARARGS,
   "SetOffset(self, _arg:float) -> None\nC++: virtual void SetOffset(double _arg)\n\nSpecify a multiplier to control the size of the initial, bounding\nDelaunay triangulation.\n"},
  {"GetOffsetMinValue", PyvtkDelaunay2D_GetOffsetMinValue, METH_VARARGS,
   "GetOffsetMinValue(self) -> float\nC++: virtual double GetOffsetMinValue()\n\n"},
  {"GetOffsetMaxValue", PyvtkDelaunay2D_GetOffsetMaxValue, METH_VARARGS,
   "GetOffsetMaxValue(self) -> float\nC++: virtual double GetOffsetMaxValue()\n\n"},
  {"GetOffset", PyvtkDelaunay2D_GetOffset, METH_VARARGS,
   "GetOffset(self) -> float\nC++: virtual double GetOffset()\n\n"},
  {"SetBoundingTriangulation", PyvtkDelaunay2D_SetBoundingTriangulation, METH_VARARGS,
   "SetBoundingTriangulation(self, _arg:int) -> None\nC++: virtual void SetBoundingTriangulation(vtkTypeBool _arg)\n\nBoolean controls whether bounding triangulation points (and\nassociated triangles) are included in the output. (These are\nintroduced as an initial triangulation to begin the triangulation\nprocess. This feature is nice for debugging output.)\n"},
  {"GetBoundingTriangulation", PyvtkDelaunay2D_GetBoundingTriangulation, METH_VARARGS,
   "GetBoundingTriangulation(self) -> int\nC++: virtual vtkTypeBool GetBoundingTriangulation()\n\n"},
  {"BoundingTriangulationOn", PyvtkDelaunay2D_BoundingTriangulationOn, METH_VARARGS,
   "BoundingTriangulationOn(self) -> None\nC++: virtual void BoundingTriangulationOn()\n\n"},
  {"BoundingTriangulationOff", PyvtkDelaunay2D_BoundingTriangulationOff, METH_VARARGS,
   "BoundingTriangulationOff(self) -> None\nC++: virtual void BoundingTriangulationOff()\n\n"},
  {"SetTransform", PyvtkDelaunay2D_SetTransform, METH_VARARGS,
   "SetTransform(self, _arg:vtkAbstractTransform) -> None\nC++: virtual void SetTransform(vtkAbstractTransform *_arg)\n\nSet / get the transform which is applied to points to generate a\n2D problem.  This maps a 3D dataset into a 2D dataset where\ntriangulation can be done on the XY plane.  The points are\ntransformed and triangulated.  The topology of triangulated\npoints is used as the output topology.  The output points are the\noriginal (untransformed) points.  The transform can be any\nsubclass of vtkAbstractTransform (thus it does not need to be a\nlinear or invertible transform).\n"},
  {"GetTransform", PyvtkDelaunay2D_GetTransform, METH_VARARGS,
   "GetTransform(self) -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform()\n\n"},
  {"SetProjectionPlaneMode", PyvtkDelaunay2D_SetProjectionPlaneMode, METH_VARARGS,
   "SetProjectionPlaneMode(self, _arg:int) -> None\nC++: virtual void SetProjectionPlaneMode(int _arg)\n\nDefine the method to project the input 3D points into a 2D plane\nfor triangulation. When the VTK_DELAUNAY_XY_PLANE is set, the\nz-coordinate is simply ignored. When VTK_SET_TRANSFORM_PLANE is\nset, then a transform must be supplied and the points are\ntransformed using it. Finally, if VTK_BEST_FITTING_PLANE is set,\nthen the filter computes a best fitting plane and projects the\npoints onto it.\n"},
  {"GetProjectionPlaneModeMinValue", PyvtkDelaunay2D_GetProjectionPlaneModeMinValue, METH_VARARGS,
   "GetProjectionPlaneModeMinValue(self) -> int\nC++: virtual int GetProjectionPlaneModeMinValue()\n\n"},
  {"GetProjectionPlaneModeMaxValue", PyvtkDelaunay2D_GetProjectionPlaneModeMaxValue, METH_VARARGS,
   "GetProjectionPlaneModeMaxValue(self) -> int\nC++: virtual int GetProjectionPlaneModeMaxValue()\n\n"},
  {"GetProjectionPlaneMode", PyvtkDelaunay2D_GetProjectionPlaneMode, METH_VARARGS,
   "GetProjectionPlaneMode(self) -> int\nC++: virtual int GetProjectionPlaneMode()\n\n"},
  {"ComputeBestFittingPlane", PyvtkDelaunay2D_ComputeBestFittingPlane, METH_VARARGS,
   "ComputeBestFittingPlane(input:vtkPointSet) -> vtkAbstractTransform\nC++: static vtkAbstractTransform *ComputeBestFittingPlane(\n    vtkPointSet *input)\n\nThis method computes the best fit plane to a set of points\nrepresented by a vtkPointSet. The method constructs a transform\nand returns it on successful completion (null otherwise). The\nuser is responsible for deleting the transform instance.\n"},
  {"SetRandomPointInsertion", PyvtkDelaunay2D_SetRandomPointInsertion, METH_VARARGS,
   "SetRandomPointInsertion(self, _arg:int) -> None\nC++: virtual void SetRandomPointInsertion(vtkTypeBool _arg)\n\nIndicate whether to insert the points in given order, or\npseudo-random order. Inserting in random order can improve\nperformance and numerics in many circumstances.\n"},
  {"GetRandomPointInsertion", PyvtkDelaunay2D_GetRandomPointInsertion, METH_VARARGS,
   "GetRandomPointInsertion(self) -> int\nC++: virtual vtkTypeBool GetRandomPointInsertion()\n\n"},
  {"RandomPointInsertionOn", PyvtkDelaunay2D_RandomPointInsertionOn, METH_VARARGS,
   "RandomPointInsertionOn(self) -> None\nC++: virtual void RandomPointInsertionOn()\n\n"},
  {"RandomPointInsertionOff", PyvtkDelaunay2D_RandomPointInsertionOff, METH_VARARGS,
   "RandomPointInsertionOff(self) -> None\nC++: virtual void RandomPointInsertionOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDelaunay2D_Doc =
  "vtkDelaunay2D - create 2D Delaunay triangulation of input points\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkDelaunay2D is a filter that constructs a 2D Delaunay triangulation\n"
  "from a list of input points. These points may be represented by any\n"
  "dataset of type vtkPointSet and subclasses. The output of the filter\n"
  "is a polygonal dataset. Usually the output is a triangle mesh, but if\n"
  "a non-zero alpha distance value is specified (called the \"alpha\"\n"
  "value), then only triangles, edges, and vertices laying within the\n"
  "alpha radius are output. In other words, non-zero alpha values may\n"
  "result in arbitrary combinations of triangles, lines, and vertices.\n"
  "(The notion of alpha value is derived from Edelsbrunner's work on \"alpha\n"
  "shapes\".) Also, it is possible to generate \"constrained\n"
  "triangulations\" using this filter. A constrained triangulation is one\n"
  "where edges and loops (i.e., polygons) can be defined and the\n"
  "triangulation will preserve them (read on for more information).\n\n"
  "The 2D Delaunay triangulation is defined as the triangulation that\n"
  "satisfies the Delaunay criterion for n-dimensional simplexes (in this\n"
  "case n=2 and the simplexes are triangles). This criterion states that\n"
  "a circumsphere of each simplex in a triangulation contains only the\n"
  "n+1 defining points of the simplex. (See \"The Visualization Toolkit\"\n"
  "text for more information.) In two dimensions, this translates into\n"
  "an optimal triangulation. That is, the maximum interior angle of any\n"
  "triangle is less than or equal to that of any possible triangulation.\n\n"
  "Delaunay triangulations are used to build topological structures from\n"
  "unorganized (or unstructured) points. The input to this filter is a\n"
  "list of points specified in 3D, even though the triangulation is 2D.\n"
  "Thus the triangulation is constructed in the x-y plane, and the z\n"
  "coordinate is ignored (although carried through to the output). If\n"
  "you desire to triangulate in a different plane, you can use the\n"
  "vtkTransformFilter to transform the points into and out of the x-y\n"
  "plane or you can specify a transform to the Delaunay2D directly.  In\n"
  "the latter case, the input points are transformed, the transformed\n"
  "points are triangulated, and the output will use the triangulated\n"
  "topology for the original (non-transformed) points.  This avoids\n"
  "transforming the data back as would be required when using the\n"
  "vtkTransformFilter method.  Specifying a transform directly also\n"
  "allows any transform to be used: rigid, non-rigid, non-invertible,\n"
  "etc.\n\n"
  "If an input transform is used, then alpha values are applied (for the\n"
  "most part) in the original data space.  The exception is when\n"
  "BoundingTriangulation is on.  In this case, alpha values are applied\n"
  "in the original data space unless a cell uses a bounding vertex.\n\n"
  "The Delaunay triangulation can be numerically sensitive in some\n"
  "cases. To prevent problems, try to avoid injecting points that will\n"
  "result in triangles with bad aspect ratios (1000:1 or greater). In\n"
  "practice this means inserting points that are \"widely dispersed\", and\n"
  "enables smooth transition of triangle sizes throughout the mesh. (You\n"
  "may even want to add extra points to create a better point\n"
  "distribution.) If numerical problems are present, you will see a\n"
  "warning message to this effect at the end of the triangulation\n"
  "process. Note also that the RandomPointInsertion mode can be set\n"
  "which will insert the points in pseudo-random order.\n\n"
  "To create constrained meshes, you must define an additional input.\n"
  "This input is an instance of vtkPolyData which contains lines,\n"
  "polylines, and/or polygons that define constrained edges and loops.\n"
  "Only the topology of (lines and polygons) from this second input are\n"
  "used.  The topology is assumed to reference points in the input point\n"
  "set (the one to be triangulated). In other words, the lines and\n"
  "polygons use point ids from the first input point set. Lines and\n"
  "polylines found in the input will be mesh edges in the output.\n"
  "Polygons define a loop with inside and outside regions. The inside of\n"
  "the polygon is determined by using the right-hand-rule, i.e., looking\n"
  "down the z-axis a polygon should be ordered counter-clockwise. Holes\n"
  "in a polygon should be ordered clockwise. If you choose to create a\n"
  "constrained triangulation, the final mesh may not satisfy the\n"
  "Delaunay criterion. (Noted: the lines/polygon edges must not\n"
  "intersect when projected onto the 2D plane.  It may not be possible\n"
  "to recover all edges due to not enough points in the triangulation,\n"
  "or poorly defined edges (coincident or excessively long).  The form\n"
  "of the lines or polygons is a list of point ids that correspond to\n"
  "the input point ids used to generate the triangulation.)\n\n"
  "If an input transform is used, constraints are defined in the\n"
  "\"transformed\" space.  So when the right hand rule is used for a\n"
  "polygon constraint, that operation is applied using the transformed\n"
  "points.  Since the input transform can be any transformation (rigid\n"
  "or non-rigid), care must be taken in constructing constraints when an\n"
  "input transform is used.\n\n"
  "@warning\n"
  "Points arranged on a regular lattice (termed degenerate cases) can be\n"
  "triangulated in more than one way (at least according to the Delaunay\n"
  "criterion). The choice of triangulation (as implemented by this\n"
  "algorithm) depends on the order of the input points. The first three\n"
  "points will form a triangle; other degenerate points will not break\n"
  "this triangle.\n\n"
  "@warning\n"
  "Points that are coincident (or nearly so) may be discarded by the\n"
  "algorithm. This is because the Delaunay triangulation requires unique\n"
  "input points. You can control the definition of coincidence with the\n"
  "\"Tolerance\" instance variable.\n\n"
  "@warning\n"
  "The output of the Delaunay triangulation is supposedly a convex hull.\n"
  "In certain cases this implementation may not generate the convex\n"
  "hull. This behavior can be controlled by the Offset instance\n"
  "variable. Offset is a multiplier used to control the size of the\n"
  "initial triangulation. The larger the offset value, the more likely\n"
  "you will generate a convex hull; but the more likely you are to see\n"
  "numerical problems.\n\n"
  "@sa\n"
  "vtkDelaunay3D vtkTransformFilter vtkGaussianSplatter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDelaunay2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkDelaunay2D", // tp_name
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
  PyvtkDelaunay2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDelaunay2D_StaticNew()
{
  return vtkDelaunay2D::New();
}

PyObject *PyvtkDelaunay2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDelaunay2D_Type, PyvtkDelaunay2D_Methods,
    "vtkDelaunay2D",
 &PyvtkDelaunay2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDelaunay2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDelaunay2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDelaunay2D", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_DELAUNAY_XY_PLANE", 0 },
        { "VTK_SET_TRANSFORM_PLANE", 1 },
        { "VTK_BEST_FITTING_PLANE", 2 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

