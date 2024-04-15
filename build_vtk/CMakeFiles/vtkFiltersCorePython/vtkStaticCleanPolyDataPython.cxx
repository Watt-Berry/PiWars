// python wrapper for vtkStaticCleanPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStaticCleanPolyData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStaticCleanPolyData(PyObject *dict); }
extern "C" { PyObject *PyvtkStaticCleanPolyData_ClassNew(); }


static PyObject *
PyvtkStaticCleanPolyData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStaticCleanPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStaticCleanPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStaticCleanPolyData *tempr = vtkStaticCleanPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStaticCleanPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStaticCleanPolyData::NewInstance());

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
PyvtkStaticCleanPolyData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStaticCleanPolyData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStaticCleanPolyData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetToleranceIsAbsolute(temp0);
    }
    else
    {
      op->vtkStaticCleanPolyData::SetToleranceIsAbsolute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ToleranceIsAbsoluteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToleranceIsAbsoluteOn();
    }
    else
    {
      op->vtkStaticCleanPolyData::ToleranceIsAbsoluteOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ToleranceIsAbsoluteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToleranceIsAbsoluteOff();
    }
    else
    {
      op->vtkStaticCleanPolyData::ToleranceIsAbsoluteOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetToleranceIsAbsolute() :
      op->vtkStaticCleanPolyData::GetToleranceIsAbsolute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

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
      op->vtkStaticCleanPolyData::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkStaticCleanPolyData::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkStaticCleanPolyData::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkStaticCleanPolyData::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetAbsoluteTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbsoluteTolerance(temp0);
    }
    else
    {
      op->vtkStaticCleanPolyData::SetAbsoluteTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetAbsoluteToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteToleranceMinValue() :
      op->vtkStaticCleanPolyData::GetAbsoluteToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetAbsoluteToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteToleranceMaxValue() :
      op->vtkStaticCleanPolyData::GetAbsoluteToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetAbsoluteTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteTolerance() :
      op->vtkStaticCleanPolyData::GetAbsoluteTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetMergingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergingArray(temp0);
    }
    else
    {
      op->vtkStaticCleanPolyData::SetMergingArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetMergingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMergingArray() :
      op->vtkStaticCleanPolyData::GetMergingArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetConvertLinesToPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertLinesToPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertLinesToPoints(temp0);
    }
    else
    {
      op->vtkStaticCleanPolyData::SetConvertLinesToPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ConvertLinesToPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertLinesToPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertLinesToPointsOn();
    }
    else
    {
      op->vtkStaticCleanPolyData::ConvertLinesToPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ConvertLinesToPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertLinesToPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertLinesToPointsOff();
    }
    else
    {
      op->vtkStaticCleanPolyData::ConvertLinesToPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetConvertLinesToPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertLinesToPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConvertLinesToPoints() :
      op->vtkStaticCleanPolyData::GetConvertLinesToPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetConvertPolysToLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertPolysToLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertPolysToLines(temp0);
    }
    else
    {
      op->vtkStaticCleanPolyData::SetConvertPolysToLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ConvertPolysToLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertPolysToLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertPolysToLinesOn();
    }
    else
    {
      op->vtkStaticCleanPolyData::ConvertPolysToLinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ConvertPolysToLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertPolysToLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertPolysToLinesOff();
    }
    else
    {
      op->vtkStaticCleanPolyData::ConvertPolysToLinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetConvertPolysToLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertPolysToLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConvertPolysToLines() :
      op->vtkStaticCleanPolyData::GetConvertPolysToLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetConvertStripsToPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertStripsToPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertStripsToPolys(temp0);
    }
    else
    {
      op->vtkStaticCleanPolyData::SetConvertStripsToPolys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ConvertStripsToPolysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertStripsToPolysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertStripsToPolysOn();
    }
    else
    {
      op->vtkStaticCleanPolyData::ConvertStripsToPolysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ConvertStripsToPolysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertStripsToPolysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertStripsToPolysOff();
    }
    else
    {
      op->vtkStaticCleanPolyData::ConvertStripsToPolysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetConvertStripsToPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertStripsToPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConvertStripsToPolys() :
      op->vtkStaticCleanPolyData::GetConvertStripsToPolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetRemoveUnusedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveUnusedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoveUnusedPoints(temp0);
    }
    else
    {
      op->vtkStaticCleanPolyData::SetRemoveUnusedPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_RemoveUnusedPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUnusedPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveUnusedPointsOn();
    }
    else
    {
      op->vtkStaticCleanPolyData::RemoveUnusedPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_RemoveUnusedPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUnusedPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveUnusedPointsOff();
    }
    else
    {
      op->vtkStaticCleanPolyData::RemoveUnusedPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetRemoveUnusedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveUnusedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveUnusedPoints() :
      op->vtkStaticCleanPolyData::GetRemoveUnusedPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetProduceMergeMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProduceMergeMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProduceMergeMap(temp0);
    }
    else
    {
      op->vtkStaticCleanPolyData::SetProduceMergeMap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ProduceMergeMapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProduceMergeMapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProduceMergeMapOn();
    }
    else
    {
      op->vtkStaticCleanPolyData::ProduceMergeMapOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_ProduceMergeMapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProduceMergeMapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProduceMergeMapOff();
    }
    else
    {
      op->vtkStaticCleanPolyData::ProduceMergeMapOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetProduceMergeMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProduceMergeMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProduceMergeMap() :
      op->vtkStaticCleanPolyData::GetProduceMergeMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetAveragePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAveragePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAveragePointData(temp0);
    }
    else
    {
      op->vtkStaticCleanPolyData::SetAveragePointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_AveragePointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AveragePointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AveragePointDataOn();
    }
    else
    {
      op->vtkStaticCleanPolyData::AveragePointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_AveragePointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AveragePointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AveragePointDataOff();
    }
    else
    {
      op->vtkStaticCleanPolyData::AveragePointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetAveragePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAveragePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAveragePointData() :
      op->vtkStaticCleanPolyData::GetAveragePointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

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
      op->vtkStaticCleanPolyData::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkStaticCleanPolyData::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStaticPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkStaticCleanPolyData::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPieceInvariant(temp0);
    }
    else
    {
      op->vtkStaticCleanPolyData::SetPieceInvariant(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPieceInvariant() :
      op->vtkStaticCleanPolyData::GetPieceInvariant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_PieceInvariantOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOn();
    }
    else
    {
      op->vtkStaticCleanPolyData::PieceInvariantOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_PieceInvariantOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOff();
    }
    else
    {
      op->vtkStaticCleanPolyData::PieceInvariantOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanPolyData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanPolyData *op = static_cast<vtkStaticCleanPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkStaticCleanPolyData::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStaticCleanPolyData_Methods[] = {
  {"IsTypeOf", PyvtkStaticCleanPolyData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStaticCleanPolyData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStaticCleanPolyData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStaticCleanPolyData\nC++: static vtkStaticCleanPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStaticCleanPolyData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStaticCleanPolyData\nC++: vtkStaticCleanPolyData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStaticCleanPolyData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStaticCleanPolyData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetToleranceIsAbsolute", PyvtkStaticCleanPolyData_SetToleranceIsAbsolute, METH_VARARGS,
   "SetToleranceIsAbsolute(self, _arg:bool) -> None\nC++: virtual void SetToleranceIsAbsolute(bool _arg)\n\nBy default ToleranceIsAbsolute is false and Tolerance is a\nfraction of Bounding box diagonal, if true, AbsoluteTolerance is\nused when adding points to locator (merging)\n"},
  {"ToleranceIsAbsoluteOn", PyvtkStaticCleanPolyData_ToleranceIsAbsoluteOn, METH_VARARGS,
   "ToleranceIsAbsoluteOn(self) -> None\nC++: virtual void ToleranceIsAbsoluteOn()\n\n"},
  {"ToleranceIsAbsoluteOff", PyvtkStaticCleanPolyData_ToleranceIsAbsoluteOff, METH_VARARGS,
   "ToleranceIsAbsoluteOff(self) -> None\nC++: virtual void ToleranceIsAbsoluteOff()\n\n"},
  {"GetToleranceIsAbsolute", PyvtkStaticCleanPolyData_GetToleranceIsAbsolute, METH_VARARGS,
   "GetToleranceIsAbsolute(self) -> bool\nC++: virtual bool GetToleranceIsAbsolute()\n\n"},
  {"SetTolerance", PyvtkStaticCleanPolyData_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nSpecify tolerance in terms of fraction of bounding box length. \nDefault is 0.0. This takes effect only if ToleranceIsAbsolute is\nfalse.\n"},
  {"GetToleranceMinValue", PyvtkStaticCleanPolyData_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> float\nC++: virtual double GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkStaticCleanPolyData_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> float\nC++: virtual double GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkStaticCleanPolyData_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {"SetAbsoluteTolerance", PyvtkStaticCleanPolyData_SetAbsoluteTolerance, METH_VARARGS,
   "SetAbsoluteTolerance(self, _arg:float) -> None\nC++: virtual void SetAbsoluteTolerance(double _arg)\n\nSpecify tolerance in absolute terms. Default is 1.0.\n"},
  {"GetAbsoluteToleranceMinValue", PyvtkStaticCleanPolyData_GetAbsoluteToleranceMinValue, METH_VARARGS,
   "GetAbsoluteToleranceMinValue(self) -> float\nC++: virtual double GetAbsoluteToleranceMinValue()\n\n"},
  {"GetAbsoluteToleranceMaxValue", PyvtkStaticCleanPolyData_GetAbsoluteToleranceMaxValue, METH_VARARGS,
   "GetAbsoluteToleranceMaxValue(self) -> float\nC++: virtual double GetAbsoluteToleranceMaxValue()\n\n"},
  {"GetAbsoluteTolerance", PyvtkStaticCleanPolyData_GetAbsoluteTolerance, METH_VARARGS,
   "GetAbsoluteTolerance(self) -> float\nC++: virtual double GetAbsoluteTolerance()\n\n"},
  {"SetMergingArray", PyvtkStaticCleanPolyData_SetMergingArray, METH_VARARGS,
   "SetMergingArray(self, _arg:str) -> None\nC++: virtual void SetMergingArray(const char *_arg)\n\nSpecify the name of a point data array associated with the point\nmerging process. If a data array is specified, and exists in the\ninput point data, then point merging will switch into a mode\nwhere merged points must be both geometrically coincident and\nhave matching point data (i.e., an exact match of position and\ndata - tolerances have no effect). Note that the number of tuples\nin the merging data array must be equal to the number of points\nin the input. By default, no data array is associated with the\ninput points (i.e., the name of the data array is empty).\n"},
  {"GetMergingArray", PyvtkStaticCleanPolyData_GetMergingArray, METH_VARARGS,
   "GetMergingArray(self) -> str\nC++: virtual char *GetMergingArray()\n\n"},
  {"SetConvertLinesToPoints", PyvtkStaticCleanPolyData_SetConvertLinesToPoints, METH_VARARGS,
   "SetConvertLinesToPoints(self, _arg:bool) -> None\nC++: virtual void SetConvertLinesToPoints(bool _arg)\n\nTurn on/off conversion of degenerate lines to points. Default is\nOff.\n"},
  {"ConvertLinesToPointsOn", PyvtkStaticCleanPolyData_ConvertLinesToPointsOn, METH_VARARGS,
   "ConvertLinesToPointsOn(self) -> None\nC++: virtual void ConvertLinesToPointsOn()\n\n"},
  {"ConvertLinesToPointsOff", PyvtkStaticCleanPolyData_ConvertLinesToPointsOff, METH_VARARGS,
   "ConvertLinesToPointsOff(self) -> None\nC++: virtual void ConvertLinesToPointsOff()\n\n"},
  {"GetConvertLinesToPoints", PyvtkStaticCleanPolyData_GetConvertLinesToPoints, METH_VARARGS,
   "GetConvertLinesToPoints(self) -> bool\nC++: virtual bool GetConvertLinesToPoints()\n\n"},
  {"SetConvertPolysToLines", PyvtkStaticCleanPolyData_SetConvertPolysToLines, METH_VARARGS,
   "SetConvertPolysToLines(self, _arg:bool) -> None\nC++: virtual void SetConvertPolysToLines(bool _arg)\n\nTurn on/off conversion of degenerate polys to lines. Default is\nOff.\n"},
  {"ConvertPolysToLinesOn", PyvtkStaticCleanPolyData_ConvertPolysToLinesOn, METH_VARARGS,
   "ConvertPolysToLinesOn(self) -> None\nC++: virtual void ConvertPolysToLinesOn()\n\n"},
  {"ConvertPolysToLinesOff", PyvtkStaticCleanPolyData_ConvertPolysToLinesOff, METH_VARARGS,
   "ConvertPolysToLinesOff(self) -> None\nC++: virtual void ConvertPolysToLinesOff()\n\n"},
  {"GetConvertPolysToLines", PyvtkStaticCleanPolyData_GetConvertPolysToLines, METH_VARARGS,
   "GetConvertPolysToLines(self) -> bool\nC++: virtual bool GetConvertPolysToLines()\n\n"},
  {"SetConvertStripsToPolys", PyvtkStaticCleanPolyData_SetConvertStripsToPolys, METH_VARARGS,
   "SetConvertStripsToPolys(self, _arg:bool) -> None\nC++: virtual void SetConvertStripsToPolys(bool _arg)\n\nTurn on/off conversion of degenerate strips to polys. Default is\nOff.\n"},
  {"ConvertStripsToPolysOn", PyvtkStaticCleanPolyData_ConvertStripsToPolysOn, METH_VARARGS,
   "ConvertStripsToPolysOn(self) -> None\nC++: virtual void ConvertStripsToPolysOn()\n\n"},
  {"ConvertStripsToPolysOff", PyvtkStaticCleanPolyData_ConvertStripsToPolysOff, METH_VARARGS,
   "ConvertStripsToPolysOff(self) -> None\nC++: virtual void ConvertStripsToPolysOff()\n\n"},
  {"GetConvertStripsToPolys", PyvtkStaticCleanPolyData_GetConvertStripsToPolys, METH_VARARGS,
   "GetConvertStripsToPolys(self) -> bool\nC++: virtual bool GetConvertStripsToPolys()\n\n"},
  {"SetRemoveUnusedPoints", PyvtkStaticCleanPolyData_SetRemoveUnusedPoints, METH_VARARGS,
   "SetRemoveUnusedPoints(self, _arg:bool) -> None\nC++: virtual void SetRemoveUnusedPoints(bool _arg)\n\nIndicate whether points unused by any cell are removed from the\noutput. By default this point removal is on. Note that when this\nis off, the filter can successfully process datasets with no\ncells (and just points). If on, and there are no cells, than the\noutput will be empty.\n"},
  {"RemoveUnusedPointsOn", PyvtkStaticCleanPolyData_RemoveUnusedPointsOn, METH_VARARGS,
   "RemoveUnusedPointsOn(self) -> None\nC++: virtual void RemoveUnusedPointsOn()\n\n"},
  {"RemoveUnusedPointsOff", PyvtkStaticCleanPolyData_RemoveUnusedPointsOff, METH_VARARGS,
   "RemoveUnusedPointsOff(self) -> None\nC++: virtual void RemoveUnusedPointsOff()\n\n"},
  {"GetRemoveUnusedPoints", PyvtkStaticCleanPolyData_GetRemoveUnusedPoints, METH_VARARGS,
   "GetRemoveUnusedPoints(self) -> bool\nC++: virtual bool GetRemoveUnusedPoints()\n\n"},
  {"SetProduceMergeMap", PyvtkStaticCleanPolyData_SetProduceMergeMap, METH_VARARGS,
   "SetProduceMergeMap(self, _arg:bool) -> None\nC++: virtual void SetProduceMergeMap(bool _arg)\n\nIndicate whether a merge map should be produced on output. The\nmerge map, if requested, maps each input point to its output\npoint id, or provides a value of -1 if the input point is not\nused in the output. The merge map is associated with the filter's\noutput field data and is named \"PointMergeMap\". By default,\nProduceMergeMap is disabled.\n"},
  {"ProduceMergeMapOn", PyvtkStaticCleanPolyData_ProduceMergeMapOn, METH_VARARGS,
   "ProduceMergeMapOn(self) -> None\nC++: virtual void ProduceMergeMapOn()\n\n"},
  {"ProduceMergeMapOff", PyvtkStaticCleanPolyData_ProduceMergeMapOff, METH_VARARGS,
   "ProduceMergeMapOff(self) -> None\nC++: virtual void ProduceMergeMapOff()\n\n"},
  {"GetProduceMergeMap", PyvtkStaticCleanPolyData_GetProduceMergeMap, METH_VARARGS,
   "GetProduceMergeMap(self) -> bool\nC++: virtual bool GetProduceMergeMap()\n\n"},
  {"SetAveragePointData", PyvtkStaticCleanPolyData_SetAveragePointData, METH_VARARGS,
   "SetAveragePointData(self, _arg:bool) -> None\nC++: virtual void SetAveragePointData(bool _arg)\n\nIndicate whether point coordinates and point data of merged\npoints are averaged. By default, the point coordinates and\nattribute data are not averaged, and the point coordinate and\ndata of the single, remaining merged point is retained.\nOtherwise, the data coordinates and attribute values of all\nmerged points are averaged. By default this feature is disabled.\n"},
  {"AveragePointDataOn", PyvtkStaticCleanPolyData_AveragePointDataOn, METH_VARARGS,
   "AveragePointDataOn(self) -> None\nC++: virtual void AveragePointDataOn()\n\n"},
  {"AveragePointDataOff", PyvtkStaticCleanPolyData_AveragePointDataOff, METH_VARARGS,
   "AveragePointDataOff(self) -> None\nC++: virtual void AveragePointDataOff()\n\n"},
  {"GetAveragePointData", PyvtkStaticCleanPolyData_GetAveragePointData, METH_VARARGS,
   "GetAveragePointData(self) -> bool\nC++: virtual bool GetAveragePointData()\n\n"},
  {"SetOutputPointsPrecision", PyvtkStaticCleanPolyData_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkStaticCleanPolyData_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"GetLocator", PyvtkStaticCleanPolyData_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkStaticPointLocator\nC++: virtual vtkStaticPointLocator *GetLocator()\n\nRetrieve the internal locator to manually configure it, for\nexample specifying the number of points per bucket, or\ncontrolling the traversal order. This method is generally used\nfor debugging or testing purposes.\n"},
  {"SetPieceInvariant", PyvtkStaticCleanPolyData_SetPieceInvariant, METH_VARARGS,
   "SetPieceInvariant(self, _arg:bool) -> None\nC++: virtual void SetPieceInvariant(bool _arg)\n\n"},
  {"GetPieceInvariant", PyvtkStaticCleanPolyData_GetPieceInvariant, METH_VARARGS,
   "GetPieceInvariant(self) -> bool\nC++: virtual bool GetPieceInvariant()\n\n"},
  {"PieceInvariantOn", PyvtkStaticCleanPolyData_PieceInvariantOn, METH_VARARGS,
   "PieceInvariantOn(self) -> None\nC++: virtual void PieceInvariantOn()\n\n"},
  {"PieceInvariantOff", PyvtkStaticCleanPolyData_PieceInvariantOff, METH_VARARGS,
   "PieceInvariantOff(self) -> None\nC++: virtual void PieceInvariantOff()\n\n"},
  {"GetMTime", PyvtkStaticCleanPolyData_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime of this object also considering the locator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStaticCleanPolyData_Doc =
  "vtkStaticCleanPolyData - merge duplicate points, and/or remove unused\npoints and/or remove degenerate cells\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkStaticCleanPolyData is a filter that takes polygonal data as input\n"
  "and generates polygonal data as output. vtkStaticCleanPolyData will\n"
  "merge duplicate points (within specified tolerance), and if enabled,\n"
  "transform degenerate cells into appropriate forms (for example, a\n"
  "triangle is converted into a line if two points of triangle are\n"
  "merged).\n\n"
  "Conversion of degenerate cells is controlled by the flags\n"
  "ConvertLinesToPoints, ConvertPolysToLines, ConvertStripsToPolys which\n"
  "act cumulatively such that a degenerate strip may become a poly. The\n"
  "full set is Line with 1 points -> Vert (if ConvertLinesToPoints) Poly\n"
  "with 2 points -> Line (if ConvertPolysToLines) Poly with 1 points ->\n"
  "Vert (if ConvertPolysToLines && ConvertLinesToPoints) Strp with 3\n"
  "points -> Poly (if ConvertStripsToPolys) Strp with 2 points -> Line\n"
  "(if ConvertStripsToPolys && ConvertPolysToLines) Strp with 1 points\n"
  "-> Vert (if ConvertStripsToPolys && ConvertPolysToLines\n"
  "  && ConvertLinesToPoints)\n\n"
  "Internally this class uses vtkStaticPointLocator, which is a\n"
  "threaded, and much faster locator (especially for large data) than\n"
  "the incremental locators that vtkCleanPolyData uses. Note because of\n"
  "these and other differences, the output of this filter may be\n"
  "different than vtkCleanPolyData.\n\n"
  "@warning\n"
  "Merging points can alter topology, including introducing non-manifold\n"
  "forms. The tolerance should be chosen carefully to avoid these\n"
  "problems. Large tolerances (of size > locator bin width) may generate\n"
  "poor results.\n\n"
  "@warning\n"
  "Unlike vtkCleanPolyData, point merging is always performed (i.e.,\n"
  "there is no PointMergingOff()).\n\n"
  "@warning\n"
  "Unlike vtkCleanPolyData, conversion from one cell type to another is\n"
  "disabled/off. This produces more predictable behavior in many\n"
  "applications.\n\n"
  "@warning\n"
  "The vtkStaticCleanPolyData filter is similar in operation to\n"
  "vtkCleanPolyData. However, vtkStaticCleanPolyData is non-incremental\n"
  "and uses a much faster (especially for larger datasets) threading\n"
  "approach and when merging points with a non-zero tolerance. However\n"
  "because of the difference in the traversal order in the point merging\n"
  "process, the output of the filters may be different.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkCleanPolyData vtkStaticCleanUnstructuredGrid\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStaticCleanPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkStaticCleanPolyData", // tp_name
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
  PyvtkStaticCleanPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStaticCleanPolyData_StaticNew()
{
  return vtkStaticCleanPolyData::New();
}

PyObject *PyvtkStaticCleanPolyData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStaticCleanPolyData_Type, PyvtkStaticCleanPolyData_Methods,
    "vtkStaticCleanPolyData",
 &PyvtkStaticCleanPolyData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStaticCleanPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStaticCleanPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStaticCleanPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

