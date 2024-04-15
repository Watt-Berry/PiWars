// python wrapper for vtkTableToPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTableToPolyData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTableToPolyData(PyObject *dict); }
extern "C" { PyObject *PyvtkTableToPolyData_ClassNew(); }


static PyObject *
PyvtkTableToPolyData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTableToPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableToPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTableToPolyData *tempr = vtkTableToPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTableToPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableToPolyData::NewInstance());

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
PyvtkTableToPolyData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTableToPolyData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTableToPolyData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetXColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXColumn(temp0);
    }
    else
    {
      op->vtkTableToPolyData::SetXColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetXColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXColumn() :
      op->vtkTableToPolyData::GetXColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetXColumnIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXColumnIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXColumnIndex(temp0);
    }
    else
    {
      op->vtkTableToPolyData::SetXColumnIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetXColumnIndexMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXColumnIndexMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXColumnIndexMinValue() :
      op->vtkTableToPolyData::GetXColumnIndexMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetXColumnIndexMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXColumnIndexMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXColumnIndexMaxValue() :
      op->vtkTableToPolyData::GetXColumnIndexMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetXColumnIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXColumnIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXColumnIndex() :
      op->vtkTableToPolyData::GetXColumnIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXComponent(temp0);
    }
    else
    {
      op->vtkTableToPolyData::SetXComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetXComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXComponentMinValue() :
      op->vtkTableToPolyData::GetXComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetXComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXComponentMaxValue() :
      op->vtkTableToPolyData::GetXComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXComponent() :
      op->vtkTableToPolyData::GetXComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetYColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYColumn(temp0);
    }
    else
    {
      op->vtkTableToPolyData::SetYColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetYColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYColumn() :
      op->vtkTableToPolyData::GetYColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetYColumnIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYColumnIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYColumnIndex(temp0);
    }
    else
    {
      op->vtkTableToPolyData::SetYColumnIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetYColumnIndexMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYColumnIndexMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYColumnIndexMinValue() :
      op->vtkTableToPolyData::GetYColumnIndexMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetYColumnIndexMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYColumnIndexMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYColumnIndexMaxValue() :
      op->vtkTableToPolyData::GetYColumnIndexMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetYColumnIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYColumnIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYColumnIndex() :
      op->vtkTableToPolyData::GetYColumnIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYComponent(temp0);
    }
    else
    {
      op->vtkTableToPolyData::SetYComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetYComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYComponentMinValue() :
      op->vtkTableToPolyData::GetYComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetYComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYComponentMaxValue() :
      op->vtkTableToPolyData::GetYComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYComponent() :
      op->vtkTableToPolyData::GetYComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetZColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZColumn(temp0);
    }
    else
    {
      op->vtkTableToPolyData::SetZColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetZColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetZColumn() :
      op->vtkTableToPolyData::GetZColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetZColumnIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZColumnIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZColumnIndex(temp0);
    }
    else
    {
      op->vtkTableToPolyData::SetZColumnIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetZColumnIndexMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZColumnIndexMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZColumnIndexMinValue() :
      op->vtkTableToPolyData::GetZColumnIndexMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetZColumnIndexMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZColumnIndexMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZColumnIndexMaxValue() :
      op->vtkTableToPolyData::GetZColumnIndexMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetZColumnIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZColumnIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZColumnIndex() :
      op->vtkTableToPolyData::GetZColumnIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetZComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZComponent(temp0);
    }
    else
    {
      op->vtkTableToPolyData::SetZComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetZComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZComponentMinValue() :
      op->vtkTableToPolyData::GetZComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetZComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZComponentMaxValue() :
      op->vtkTableToPolyData::GetZComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetZComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZComponent() :
      op->vtkTableToPolyData::GetZComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetCreate2DPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreate2DPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCreate2DPoints(temp0);
    }
    else
    {
      op->vtkTableToPolyData::SetCreate2DPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetCreate2DPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreate2DPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCreate2DPoints() :
      op->vtkTableToPolyData::GetCreate2DPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_Create2DPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create2DPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Create2DPointsOn();
    }
    else
    {
      op->vtkTableToPolyData::Create2DPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_Create2DPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create2DPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Create2DPointsOff();
    }
    else
    {
      op->vtkTableToPolyData::Create2DPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_SetPreserveCoordinateColumnsAsDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveCoordinateColumnsAsDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreserveCoordinateColumnsAsDataArrays(temp0);
    }
    else
    {
      op->vtkTableToPolyData::SetPreserveCoordinateColumnsAsDataArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_GetPreserveCoordinateColumnsAsDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveCoordinateColumnsAsDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPreserveCoordinateColumnsAsDataArrays() :
      op->vtkTableToPolyData::GetPreserveCoordinateColumnsAsDataArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_PreserveCoordinateColumnsAsDataArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveCoordinateColumnsAsDataArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveCoordinateColumnsAsDataArraysOn();
    }
    else
    {
      op->vtkTableToPolyData::PreserveCoordinateColumnsAsDataArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToPolyData_PreserveCoordinateColumnsAsDataArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveCoordinateColumnsAsDataArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToPolyData *op = static_cast<vtkTableToPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveCoordinateColumnsAsDataArraysOff();
    }
    else
    {
      op->vtkTableToPolyData::PreserveCoordinateColumnsAsDataArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTableToPolyData_Methods[] = {
  {"IsTypeOf", PyvtkTableToPolyData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTableToPolyData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTableToPolyData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTableToPolyData\nC++: static vtkTableToPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTableToPolyData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTableToPolyData\nC++: vtkTableToPolyData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTableToPolyData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTableToPolyData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetXColumn", PyvtkTableToPolyData_SetXColumn, METH_VARARGS,
   "SetXColumn(self, _arg:str) -> None\nC++: virtual void SetXColumn(const char *_arg)\n\nSet the name of the column to use as the X coordinate for the\npoints.\n"},
  {"GetXColumn", PyvtkTableToPolyData_GetXColumn, METH_VARARGS,
   "GetXColumn(self) -> str\nC++: virtual char *GetXColumn()\n\n"},
  {"SetXColumnIndex", PyvtkTableToPolyData_SetXColumnIndex, METH_VARARGS,
   "SetXColumnIndex(self, _arg:int) -> None\nC++: virtual void SetXColumnIndex(int _arg)\n\nSet the index of the column to use as the X coordinate for the\npoints.\n"},
  {"GetXColumnIndexMinValue", PyvtkTableToPolyData_GetXColumnIndexMinValue, METH_VARARGS,
   "GetXColumnIndexMinValue(self) -> int\nC++: virtual int GetXColumnIndexMinValue()\n\n"},
  {"GetXColumnIndexMaxValue", PyvtkTableToPolyData_GetXColumnIndexMaxValue, METH_VARARGS,
   "GetXColumnIndexMaxValue(self) -> int\nC++: virtual int GetXColumnIndexMaxValue()\n\n"},
  {"GetXColumnIndex", PyvtkTableToPolyData_GetXColumnIndex, METH_VARARGS,
   "GetXColumnIndex(self) -> int\nC++: virtual int GetXColumnIndex()\n\n"},
  {"SetXComponent", PyvtkTableToPolyData_SetXComponent, METH_VARARGS,
   "SetXComponent(self, _arg:int) -> None\nC++: virtual void SetXComponent(int _arg)\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {"GetXComponentMinValue", PyvtkTableToPolyData_GetXComponentMinValue, METH_VARARGS,
   "GetXComponentMinValue(self) -> int\nC++: virtual int GetXComponentMinValue()\n\n"},
  {"GetXComponentMaxValue", PyvtkTableToPolyData_GetXComponentMaxValue, METH_VARARGS,
   "GetXComponentMaxValue(self) -> int\nC++: virtual int GetXComponentMaxValue()\n\n"},
  {"GetXComponent", PyvtkTableToPolyData_GetXComponent, METH_VARARGS,
   "GetXComponent(self) -> int\nC++: virtual int GetXComponent()\n\n"},
  {"SetYColumn", PyvtkTableToPolyData_SetYColumn, METH_VARARGS,
   "SetYColumn(self, _arg:str) -> None\nC++: virtual void SetYColumn(const char *_arg)\n\nSet the name of the column to use as the Y coordinate for the\npoints. Default is 0.\n"},
  {"GetYColumn", PyvtkTableToPolyData_GetYColumn, METH_VARARGS,
   "GetYColumn(self) -> str\nC++: virtual char *GetYColumn()\n\n"},
  {"SetYColumnIndex", PyvtkTableToPolyData_SetYColumnIndex, METH_VARARGS,
   "SetYColumnIndex(self, _arg:int) -> None\nC++: virtual void SetYColumnIndex(int _arg)\n\nSet the index of the column to use as the Y coordinate for the\npoints.\n"},
  {"GetYColumnIndexMinValue", PyvtkTableToPolyData_GetYColumnIndexMinValue, METH_VARARGS,
   "GetYColumnIndexMinValue(self) -> int\nC++: virtual int GetYColumnIndexMinValue()\n\n"},
  {"GetYColumnIndexMaxValue", PyvtkTableToPolyData_GetYColumnIndexMaxValue, METH_VARARGS,
   "GetYColumnIndexMaxValue(self) -> int\nC++: virtual int GetYColumnIndexMaxValue()\n\n"},
  {"GetYColumnIndex", PyvtkTableToPolyData_GetYColumnIndex, METH_VARARGS,
   "GetYColumnIndex(self) -> int\nC++: virtual int GetYColumnIndex()\n\n"},
  {"SetYComponent", PyvtkTableToPolyData_SetYComponent, METH_VARARGS,
   "SetYComponent(self, _arg:int) -> None\nC++: virtual void SetYComponent(int _arg)\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {"GetYComponentMinValue", PyvtkTableToPolyData_GetYComponentMinValue, METH_VARARGS,
   "GetYComponentMinValue(self) -> int\nC++: virtual int GetYComponentMinValue()\n\n"},
  {"GetYComponentMaxValue", PyvtkTableToPolyData_GetYComponentMaxValue, METH_VARARGS,
   "GetYComponentMaxValue(self) -> int\nC++: virtual int GetYComponentMaxValue()\n\n"},
  {"GetYComponent", PyvtkTableToPolyData_GetYComponent, METH_VARARGS,
   "GetYComponent(self) -> int\nC++: virtual int GetYComponent()\n\n"},
  {"SetZColumn", PyvtkTableToPolyData_SetZColumn, METH_VARARGS,
   "SetZColumn(self, _arg:str) -> None\nC++: virtual void SetZColumn(const char *_arg)\n\nSet the name of the column to use as the Z coordinate for the\npoints. Default is 0.\n"},
  {"GetZColumn", PyvtkTableToPolyData_GetZColumn, METH_VARARGS,
   "GetZColumn(self) -> str\nC++: virtual char *GetZColumn()\n\n"},
  {"SetZColumnIndex", PyvtkTableToPolyData_SetZColumnIndex, METH_VARARGS,
   "SetZColumnIndex(self, _arg:int) -> None\nC++: virtual void SetZColumnIndex(int _arg)\n\nSet the index of the column to use as the Z coordinate for the\npoints.\n"},
  {"GetZColumnIndexMinValue", PyvtkTableToPolyData_GetZColumnIndexMinValue, METH_VARARGS,
   "GetZColumnIndexMinValue(self) -> int\nC++: virtual int GetZColumnIndexMinValue()\n\n"},
  {"GetZColumnIndexMaxValue", PyvtkTableToPolyData_GetZColumnIndexMaxValue, METH_VARARGS,
   "GetZColumnIndexMaxValue(self) -> int\nC++: virtual int GetZColumnIndexMaxValue()\n\n"},
  {"GetZColumnIndex", PyvtkTableToPolyData_GetZColumnIndex, METH_VARARGS,
   "GetZColumnIndex(self) -> int\nC++: virtual int GetZColumnIndex()\n\n"},
  {"SetZComponent", PyvtkTableToPolyData_SetZComponent, METH_VARARGS,
   "SetZComponent(self, _arg:int) -> None\nC++: virtual void SetZComponent(int _arg)\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {"GetZComponentMinValue", PyvtkTableToPolyData_GetZComponentMinValue, METH_VARARGS,
   "GetZComponentMinValue(self) -> int\nC++: virtual int GetZComponentMinValue()\n\n"},
  {"GetZComponentMaxValue", PyvtkTableToPolyData_GetZComponentMaxValue, METH_VARARGS,
   "GetZComponentMaxValue(self) -> int\nC++: virtual int GetZComponentMaxValue()\n\n"},
  {"GetZComponent", PyvtkTableToPolyData_GetZComponent, METH_VARARGS,
   "GetZComponent(self) -> int\nC++: virtual int GetZComponent()\n\n"},
  {"SetCreate2DPoints", PyvtkTableToPolyData_SetCreate2DPoints, METH_VARARGS,
   "SetCreate2DPoints(self, _arg:bool) -> None\nC++: virtual void SetCreate2DPoints(bool _arg)\n\nSpecify whether the points of the polydata are 3D or 2D. If this\nis set to true then the Z Column will be ignored and the z value\nof each point on the polydata will be set to 0. By default this\nwill be off.\n"},
  {"GetCreate2DPoints", PyvtkTableToPolyData_GetCreate2DPoints, METH_VARARGS,
   "GetCreate2DPoints(self) -> bool\nC++: virtual bool GetCreate2DPoints()\n\n"},
  {"Create2DPointsOn", PyvtkTableToPolyData_Create2DPointsOn, METH_VARARGS,
   "Create2DPointsOn(self) -> None\nC++: virtual void Create2DPointsOn()\n\n"},
  {"Create2DPointsOff", PyvtkTableToPolyData_Create2DPointsOff, METH_VARARGS,
   "Create2DPointsOff(self) -> None\nC++: virtual void Create2DPointsOff()\n\n"},
  {"SetPreserveCoordinateColumnsAsDataArrays", PyvtkTableToPolyData_SetPreserveCoordinateColumnsAsDataArrays, METH_VARARGS,
   "SetPreserveCoordinateColumnsAsDataArrays(self, _arg:bool) -> None\nC++: virtual void SetPreserveCoordinateColumnsAsDataArrays(\n    bool _arg)\n\nAllow user to keep columns specified as X,Y,Z as Data arrays. By\ndefault this will be off.\n"},
  {"GetPreserveCoordinateColumnsAsDataArrays", PyvtkTableToPolyData_GetPreserveCoordinateColumnsAsDataArrays, METH_VARARGS,
   "GetPreserveCoordinateColumnsAsDataArrays(self) -> bool\nC++: virtual bool GetPreserveCoordinateColumnsAsDataArrays()\n\n"},
  {"PreserveCoordinateColumnsAsDataArraysOn", PyvtkTableToPolyData_PreserveCoordinateColumnsAsDataArraysOn, METH_VARARGS,
   "PreserveCoordinateColumnsAsDataArraysOn(self) -> None\nC++: virtual void PreserveCoordinateColumnsAsDataArraysOn()\n\n"},
  {"PreserveCoordinateColumnsAsDataArraysOff", PyvtkTableToPolyData_PreserveCoordinateColumnsAsDataArraysOff, METH_VARARGS,
   "PreserveCoordinateColumnsAsDataArraysOff(self) -> None\nC++: virtual void PreserveCoordinateColumnsAsDataArraysOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTableToPolyData_Doc =
  "vtkTableToPolyData - filter used to convert a vtkTable to a\nvtkPolyData consisting of vertices.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkTableToPolyData is a filter used to convert a vtkTable  to a\n"
  "vtkPolyData consisting of vertices.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTableToPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkTableToPolyData", // tp_name
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
  PyvtkTableToPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTableToPolyData_StaticNew()
{
  return vtkTableToPolyData::New();
}

PyObject *PyvtkTableToPolyData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTableToPolyData_Type, PyvtkTableToPolyData_Methods,
    "vtkTableToPolyData",
 &PyvtkTableToPolyData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTableToPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTableToPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTableToPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

