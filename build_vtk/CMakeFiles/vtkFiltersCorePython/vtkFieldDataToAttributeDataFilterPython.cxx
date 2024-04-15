// python wrapper for vtkFieldDataToAttributeDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFieldDataToAttributeDataFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFieldDataToAttributeDataFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkFieldDataToAttributeDataFilter_ClassNew(); }


static PyObject *
PyvtkFieldDataToAttributeDataFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFieldDataToAttributeDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFieldDataToAttributeDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFieldDataToAttributeDataFilter *tempr = vtkFieldDataToAttributeDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFieldDataToAttributeDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFieldDataToAttributeDataFilter::NewInstance());

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
PyvtkFieldDataToAttributeDataFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFieldDataToAttributeDataFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetInputField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputField(temp0);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetInputField(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetInputField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputField() :
      op->vtkFieldDataToAttributeDataFilter::GetInputField());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetInputFieldToDataObjectField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputFieldToDataObjectField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputFieldToDataObjectField();
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetInputFieldToDataObjectField();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetInputFieldToPointDataField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputFieldToPointDataField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputFieldToPointDataField();
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetInputFieldToPointDataField();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetInputFieldToCellDataField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputFieldToCellDataField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputFieldToCellDataField();
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetInputFieldToCellDataField();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputAttributeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputAttributeData(temp0);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetOutputAttributeData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetOutputAttributeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputAttributeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputAttributeData() :
      op->vtkFieldDataToAttributeDataFilter::GetOutputAttributeData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeDataToCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputAttributeDataToCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputAttributeDataToCellData();
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetOutputAttributeDataToCellData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeDataToPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputAttributeDataToPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputAttributeDataToPointData();
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetOutputAttributeDataToPointData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetScalarComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetScalarComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetScalarComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetScalarComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetScalarComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetScalarComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetScalarComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkFieldDataToAttributeDataFilter_SetScalarComponent_s1(self, args);
    case 3:
      return PyvtkFieldDataToAttributeDataFilter_SetScalarComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarComponent");
  return nullptr;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetScalarComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarComponentArrayName(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetScalarComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetScalarComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarComponentArrayComponent(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetScalarComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetScalarComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarComponentMinRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetScalarComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetScalarComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarComponentMaxRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetScalarComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetScalarComponentNormalizeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentNormalizeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarComponentNormalizeFlag(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetScalarComponentNormalizeFlag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetVectorComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetVectorComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetVectorComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetVectorComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetVectorComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetVectorComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetVectorComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkFieldDataToAttributeDataFilter_SetVectorComponent_s1(self, args);
    case 3:
      return PyvtkFieldDataToAttributeDataFilter_SetVectorComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVectorComponent");
  return nullptr;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetVectorComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVectorComponentArrayName(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetVectorComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetVectorComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponentArrayComponent(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetVectorComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetVectorComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponentMinRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetVectorComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetVectorComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponentMaxRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetVectorComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetVectorComponentNormalizeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentNormalizeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponentNormalizeFlag(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetVectorComponentNormalizeFlag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetNormalComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetNormalComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetNormalComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetNormalComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetNormalComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetNormalComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetNormalComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkFieldDataToAttributeDataFilter_SetNormalComponent_s1(self, args);
    case 3:
      return PyvtkFieldDataToAttributeDataFilter_SetNormalComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormalComponent");
  return nullptr;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetNormalComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNormalComponentArrayName(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetNormalComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetNormalComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalComponentArrayComponent(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetNormalComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetNormalComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalComponentMinRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetNormalComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetNormalComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalComponentMaxRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetNormalComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetNormalComponentNormalizeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponentNormalizeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalComponentNormalizeFlag(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetNormalComponentNormalizeFlag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTensorComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetTensorComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetTensorComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTensorComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetTensorComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetTensorComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTensorComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkFieldDataToAttributeDataFilter_SetTensorComponent_s1(self, args);
    case 3:
      return PyvtkFieldDataToAttributeDataFilter_SetTensorComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTensorComponent");
  return nullptr;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTensorComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTensorComponentArrayName(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTensorComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTensorComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTensorComponentArrayComponent(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTensorComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTensorComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTensorComponentMinRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTensorComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTensorComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTensorComponentMaxRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTensorComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTensorComponentNormalizeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorComponentNormalizeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTensorComponentNormalizeFlag(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTensorComponentNormalizeFlag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetTCoordComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetTCoordComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetTCoordComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetTCoordComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent_s1(self, args);
    case 3:
      return PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTCoordComponent");
  return nullptr;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTCoordComponentArrayName(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTCoordComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTCoordComponentArrayComponent(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTCoordComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTCoordComponentMinRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTCoordComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTCoordComponentMaxRange(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTCoordComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentNormalizeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponentNormalizeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTCoordComponentNormalizeFlag(temp0) :
      op->vtkFieldDataToAttributeDataFilter::GetTCoordComponentNormalizeFlag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_SetDefaultNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultNormalize(temp0);
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::SetDefaultNormalize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetDefaultNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultNormalize() :
      op->vtkFieldDataToAttributeDataFilter::GetDefaultNormalize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_DefaultNormalizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DefaultNormalizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DefaultNormalizeOn();
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::DefaultNormalizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_DefaultNormalizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DefaultNormalizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldDataToAttributeDataFilter *op = static_cast<vtkFieldDataToAttributeDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DefaultNormalizeOff();
    }
    else
    {
      op->vtkFieldDataToAttributeDataFilter::DefaultNormalizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_ConstructArray(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConstructArray");

  vtkDataArray *temp0 = nullptr;
  int temp1;
  vtkDataArray *temp2 = nullptr;
  int temp3;
  long long temp4;
  long long temp5;
  int temp6;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    int tempr = vtkFieldDataToAttributeDataFilter::ConstructArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_GetFieldArray(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFieldArray");

  vtkFieldData *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkFieldData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkDataArray *tempr = vtkFieldDataToAttributeDataFilter::GetFieldArray(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldDataToAttributeDataFilter_UpdateComponentRange(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UpdateComponentRange");

  vtkDataArray *temp0 = nullptr;
  const size_t size1 = 2;
  long long temp1[2];
  long long save1[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = vtkFieldDataToAttributeDataFilter::UpdateComponentRange(temp0, temp1);

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

static PyMethodDef PyvtkFieldDataToAttributeDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkFieldDataToAttributeDataFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFieldDataToAttributeDataFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFieldDataToAttributeDataFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFieldDataToAttributeDataFilter\nC++: static vtkFieldDataToAttributeDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFieldDataToAttributeDataFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFieldDataToAttributeDataFilter\nC++: vtkFieldDataToAttributeDataFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFieldDataToAttributeDataFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFieldDataToAttributeDataFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputField", PyvtkFieldDataToAttributeDataFilter_SetInputField, METH_VARARGS,
   "SetInputField(self, _arg:int) -> None\nC++: virtual void SetInputField(int _arg)\n\nSpecify which field data to use to generate the output attribute\ndata. There are three choices: the field data associated with the\nvtkDataObject superclass; the point field attribute data; and the\ncell field attribute data.\n"},
  {"GetInputField", PyvtkFieldDataToAttributeDataFilter_GetInputField, METH_VARARGS,
   "GetInputField(self) -> int\nC++: virtual int GetInputField()\n\n"},
  {"SetInputFieldToDataObjectField", PyvtkFieldDataToAttributeDataFilter_SetInputFieldToDataObjectField, METH_VARARGS,
   "SetInputFieldToDataObjectField(self) -> None\nC++: void SetInputFieldToDataObjectField()\n\n"},
  {"SetInputFieldToPointDataField", PyvtkFieldDataToAttributeDataFilter_SetInputFieldToPointDataField, METH_VARARGS,
   "SetInputFieldToPointDataField(self) -> None\nC++: void SetInputFieldToPointDataField()\n\n"},
  {"SetInputFieldToCellDataField", PyvtkFieldDataToAttributeDataFilter_SetInputFieldToCellDataField, METH_VARARGS,
   "SetInputFieldToCellDataField(self) -> None\nC++: void SetInputFieldToCellDataField()\n\n"},
  {"SetOutputAttributeData", PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeData, METH_VARARGS,
   "SetOutputAttributeData(self, _arg:int) -> None\nC++: virtual void SetOutputAttributeData(int _arg)\n\nSpecify which attribute data to output: point or cell data\nattributes.\n"},
  {"GetOutputAttributeData", PyvtkFieldDataToAttributeDataFilter_GetOutputAttributeData, METH_VARARGS,
   "GetOutputAttributeData(self) -> int\nC++: virtual int GetOutputAttributeData()\n\n"},
  {"SetOutputAttributeDataToCellData", PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeDataToCellData, METH_VARARGS,
   "SetOutputAttributeDataToCellData(self) -> None\nC++: void SetOutputAttributeDataToCellData()\n\n"},
  {"SetOutputAttributeDataToPointData", PyvtkFieldDataToAttributeDataFilter_SetOutputAttributeDataToPointData, METH_VARARGS,
   "SetOutputAttributeDataToPointData(self) -> None\nC++: void SetOutputAttributeDataToPointData()\n\n"},
  {"SetScalarComponent", PyvtkFieldDataToAttributeDataFilter_SetScalarComponent, METH_VARARGS,
   "SetScalarComponent(self, comp:int, arrayName:str, arrayComp:int,\n    min:int, max:int, normalize:int) -> None\nC++: void SetScalarComponent(int comp, const char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nSetScalarComponent(self, comp:int, arrayName:str, arrayComp:int)\n    -> None\nC++: void SetScalarComponent(int comp, const char *arrayName,\n    int arrayComp)\n\nDefine the component(s) of the field to be used for the scalar\ncomponents.  Note that the parameter comp must lie between (0,4).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetScalarComponentArrayName", PyvtkFieldDataToAttributeDataFilter_GetScalarComponentArrayName, METH_VARARGS,
   "GetScalarComponentArrayName(self, comp:int) -> str\nC++: const char *GetScalarComponentArrayName(int comp)\n\n"},
  {"GetScalarComponentArrayComponent", PyvtkFieldDataToAttributeDataFilter_GetScalarComponentArrayComponent, METH_VARARGS,
   "GetScalarComponentArrayComponent(self, comp:int) -> int\nC++: int GetScalarComponentArrayComponent(int comp)\n\n"},
  {"GetScalarComponentMinRange", PyvtkFieldDataToAttributeDataFilter_GetScalarComponentMinRange, METH_VARARGS,
   "GetScalarComponentMinRange(self, comp:int) -> int\nC++: int GetScalarComponentMinRange(int comp)\n\n"},
  {"GetScalarComponentMaxRange", PyvtkFieldDataToAttributeDataFilter_GetScalarComponentMaxRange, METH_VARARGS,
   "GetScalarComponentMaxRange(self, comp:int) -> int\nC++: int GetScalarComponentMaxRange(int comp)\n\n"},
  {"GetScalarComponentNormalizeFlag", PyvtkFieldDataToAttributeDataFilter_GetScalarComponentNormalizeFlag, METH_VARARGS,
   "GetScalarComponentNormalizeFlag(self, comp:int) -> int\nC++: int GetScalarComponentNormalizeFlag(int comp)\n\n"},
  {"SetVectorComponent", PyvtkFieldDataToAttributeDataFilter_SetVectorComponent, METH_VARARGS,
   "SetVectorComponent(self, comp:int, arrayName:str, arrayComp:int,\n    min:int, max:int, normalize:int) -> None\nC++: void SetVectorComponent(int comp, const char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nSetVectorComponent(self, comp:int, arrayName:str, arrayComp:int)\n    -> None\nC++: void SetVectorComponent(int comp, const char *arrayName,\n    int arrayComp)\n\nDefine the component(s) of the field to be used for the vector\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetVectorComponentArrayName", PyvtkFieldDataToAttributeDataFilter_GetVectorComponentArrayName, METH_VARARGS,
   "GetVectorComponentArrayName(self, comp:int) -> str\nC++: const char *GetVectorComponentArrayName(int comp)\n\n"},
  {"GetVectorComponentArrayComponent", PyvtkFieldDataToAttributeDataFilter_GetVectorComponentArrayComponent, METH_VARARGS,
   "GetVectorComponentArrayComponent(self, comp:int) -> int\nC++: int GetVectorComponentArrayComponent(int comp)\n\n"},
  {"GetVectorComponentMinRange", PyvtkFieldDataToAttributeDataFilter_GetVectorComponentMinRange, METH_VARARGS,
   "GetVectorComponentMinRange(self, comp:int) -> int\nC++: int GetVectorComponentMinRange(int comp)\n\n"},
  {"GetVectorComponentMaxRange", PyvtkFieldDataToAttributeDataFilter_GetVectorComponentMaxRange, METH_VARARGS,
   "GetVectorComponentMaxRange(self, comp:int) -> int\nC++: int GetVectorComponentMaxRange(int comp)\n\n"},
  {"GetVectorComponentNormalizeFlag", PyvtkFieldDataToAttributeDataFilter_GetVectorComponentNormalizeFlag, METH_VARARGS,
   "GetVectorComponentNormalizeFlag(self, comp:int) -> int\nC++: int GetVectorComponentNormalizeFlag(int comp)\n\n"},
  {"SetNormalComponent", PyvtkFieldDataToAttributeDataFilter_SetNormalComponent, METH_VARARGS,
   "SetNormalComponent(self, comp:int, arrayName:str, arrayComp:int,\n    min:int, max:int, normalize:int) -> None\nC++: void SetNormalComponent(int comp, const char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nSetNormalComponent(self, comp:int, arrayName:str, arrayComp:int)\n    -> None\nC++: void SetNormalComponent(int comp, const char *arrayName,\n    int arrayComp)\n\nDefine the component(s) of the field to be used for the normal\ncomponents.  Note that the parameter comp must lie between (0,3).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetNormalComponentArrayName", PyvtkFieldDataToAttributeDataFilter_GetNormalComponentArrayName, METH_VARARGS,
   "GetNormalComponentArrayName(self, comp:int) -> str\nC++: const char *GetNormalComponentArrayName(int comp)\n\n"},
  {"GetNormalComponentArrayComponent", PyvtkFieldDataToAttributeDataFilter_GetNormalComponentArrayComponent, METH_VARARGS,
   "GetNormalComponentArrayComponent(self, comp:int) -> int\nC++: int GetNormalComponentArrayComponent(int comp)\n\n"},
  {"GetNormalComponentMinRange", PyvtkFieldDataToAttributeDataFilter_GetNormalComponentMinRange, METH_VARARGS,
   "GetNormalComponentMinRange(self, comp:int) -> int\nC++: int GetNormalComponentMinRange(int comp)\n\n"},
  {"GetNormalComponentMaxRange", PyvtkFieldDataToAttributeDataFilter_GetNormalComponentMaxRange, METH_VARARGS,
   "GetNormalComponentMaxRange(self, comp:int) -> int\nC++: int GetNormalComponentMaxRange(int comp)\n\n"},
  {"GetNormalComponentNormalizeFlag", PyvtkFieldDataToAttributeDataFilter_GetNormalComponentNormalizeFlag, METH_VARARGS,
   "GetNormalComponentNormalizeFlag(self, comp:int) -> int\nC++: int GetNormalComponentNormalizeFlag(int comp)\n\n"},
  {"SetTensorComponent", PyvtkFieldDataToAttributeDataFilter_SetTensorComponent, METH_VARARGS,
   "SetTensorComponent(self, comp:int, arrayName:str, arrayComp:int,\n    min:int, max:int, normalize:int) -> None\nC++: void SetTensorComponent(int comp, const char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nSetTensorComponent(self, comp:int, arrayName:str, arrayComp:int)\n    -> None\nC++: void SetTensorComponent(int comp, const char *arrayName,\n    int arrayComp)\n\nDefine the components of the field to be used for the tensor\ncomponents.  Note that the parameter comp must lie between (0,9).\nTo define the field component to use you specify an array name\nand the component in that array. The (min,max) values are the\nrange of data in the component you wish to extract.\n"},
  {"GetTensorComponentArrayName", PyvtkFieldDataToAttributeDataFilter_GetTensorComponentArrayName, METH_VARARGS,
   "GetTensorComponentArrayName(self, comp:int) -> str\nC++: const char *GetTensorComponentArrayName(int comp)\n\n"},
  {"GetTensorComponentArrayComponent", PyvtkFieldDataToAttributeDataFilter_GetTensorComponentArrayComponent, METH_VARARGS,
   "GetTensorComponentArrayComponent(self, comp:int) -> int\nC++: int GetTensorComponentArrayComponent(int comp)\n\n"},
  {"GetTensorComponentMinRange", PyvtkFieldDataToAttributeDataFilter_GetTensorComponentMinRange, METH_VARARGS,
   "GetTensorComponentMinRange(self, comp:int) -> int\nC++: int GetTensorComponentMinRange(int comp)\n\n"},
  {"GetTensorComponentMaxRange", PyvtkFieldDataToAttributeDataFilter_GetTensorComponentMaxRange, METH_VARARGS,
   "GetTensorComponentMaxRange(self, comp:int) -> int\nC++: int GetTensorComponentMaxRange(int comp)\n\n"},
  {"GetTensorComponentNormalizeFlag", PyvtkFieldDataToAttributeDataFilter_GetTensorComponentNormalizeFlag, METH_VARARGS,
   "GetTensorComponentNormalizeFlag(self, comp:int) -> int\nC++: int GetTensorComponentNormalizeFlag(int comp)\n\n"},
  {"SetTCoordComponent", PyvtkFieldDataToAttributeDataFilter_SetTCoordComponent, METH_VARARGS,
   "SetTCoordComponent(self, comp:int, arrayName:str, arrayComp:int,\n    min:int, max:int, normalize:int) -> None\nC++: void SetTCoordComponent(int comp, const char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nSetTCoordComponent(self, comp:int, arrayName:str, arrayComp:int)\n    -> None\nC++: void SetTCoordComponent(int comp, const char *arrayName,\n    int arrayComp)\n\nDefine the components of the field to be used for the cell\ntexture coord components.  Note that the parameter comp must lie\nbetween (0,9). To define the field component to use you specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract.\n"},
  {"GetTCoordComponentArrayName", PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentArrayName, METH_VARARGS,
   "GetTCoordComponentArrayName(self, comp:int) -> str\nC++: const char *GetTCoordComponentArrayName(int comp)\n\n"},
  {"GetTCoordComponentArrayComponent", PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentArrayComponent, METH_VARARGS,
   "GetTCoordComponentArrayComponent(self, comp:int) -> int\nC++: int GetTCoordComponentArrayComponent(int comp)\n\n"},
  {"GetTCoordComponentMinRange", PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentMinRange, METH_VARARGS,
   "GetTCoordComponentMinRange(self, comp:int) -> int\nC++: int GetTCoordComponentMinRange(int comp)\n\n"},
  {"GetTCoordComponentMaxRange", PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentMaxRange, METH_VARARGS,
   "GetTCoordComponentMaxRange(self, comp:int) -> int\nC++: int GetTCoordComponentMaxRange(int comp)\n\n"},
  {"GetTCoordComponentNormalizeFlag", PyvtkFieldDataToAttributeDataFilter_GetTCoordComponentNormalizeFlag, METH_VARARGS,
   "GetTCoordComponentNormalizeFlag(self, comp:int) -> int\nC++: int GetTCoordComponentNormalizeFlag(int comp)\n\n"},
  {"SetDefaultNormalize", PyvtkFieldDataToAttributeDataFilter_SetDefaultNormalize, METH_VARARGS,
   "SetDefaultNormalize(self, _arg:int) -> None\nC++: virtual void SetDefaultNormalize(vtkTypeBool _arg)\n\nSet the default Normalize() flag for those methods setting a\ndefault Normalize value (e.g., SetScalarComponents).\n"},
  {"GetDefaultNormalize", PyvtkFieldDataToAttributeDataFilter_GetDefaultNormalize, METH_VARARGS,
   "GetDefaultNormalize(self) -> int\nC++: virtual vtkTypeBool GetDefaultNormalize()\n\n"},
  {"DefaultNormalizeOn", PyvtkFieldDataToAttributeDataFilter_DefaultNormalizeOn, METH_VARARGS,
   "DefaultNormalizeOn(self) -> None\nC++: virtual void DefaultNormalizeOn()\n\n"},
  {"DefaultNormalizeOff", PyvtkFieldDataToAttributeDataFilter_DefaultNormalizeOff, METH_VARARGS,
   "DefaultNormalizeOff(self) -> None\nC++: virtual void DefaultNormalizeOff()\n\n"},
  {"ConstructArray", PyvtkFieldDataToAttributeDataFilter_ConstructArray, METH_VARARGS,
   "ConstructArray(da:vtkDataArray, comp:int, fieldArray:vtkDataArray,\n     fieldComp:int, min:int, max:int, normalize:int) -> int\nC++: static int ConstructArray(vtkDataArray *da, int comp,\n    vtkDataArray *fieldArray, int fieldComp, vtkIdType min,\n    vtkIdType max, int normalize)\n\nConstruct a portion of a data array (the comp portion) from\nanother data array and its component. The variables min and max\ncontrol the range of the data to use from the other data array;\nnormalize is a flag that when set will normalize the data between\n(0,1).\n"},
  {"GetFieldArray", PyvtkFieldDataToAttributeDataFilter_GetFieldArray, METH_VARARGS,
   "GetFieldArray(fd:vtkFieldData, name:str, comp:int) -> vtkDataArray\nC++: static vtkDataArray *GetFieldArray(vtkFieldData *fd,\n    const char *name, int comp)\n\nReturn an array of a particular name from field data and do error\nchecking.\n"},
  {"UpdateComponentRange", PyvtkFieldDataToAttributeDataFilter_UpdateComponentRange, METH_VARARGS,
   "UpdateComponentRange(da:vtkDataArray, compRange:[int, int]) -> int\nC++: static int UpdateComponentRange(vtkDataArray *da,\n    vtkIdType compRange[2])\n\nUpdate the maximum and minimum component range values. Returns a\nflag indicating whether the range was updated.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFieldDataToAttributeDataFilter_Doc =
  "vtkFieldDataToAttributeDataFilter - map field data to dataset\nattribute data\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkFieldDataToAttributeDataFilter is a class that maps field data\n"
  "into dataset attributes. The input to this filter is any type of\n"
  "dataset and the output is the same dataset (geometry/topology) with\n"
  "new attribute data (attribute data is passed through if not replaced\n"
  "during filter execution).\n\n"
  "To use this filter you must specify which field data from the input\n"
  "dataset to use. There are three possibilities: the cell field data,\n"
  "the point field data, or the field data associated with the data\n"
  "object superclass. Then you specify which attribute data to create:\n"
  "either cell attribute data or point attribute data.  Finally, you\n"
  "must define how to construct the various attribute data types (e.g.,\n"
  "scalars, vectors, normals, etc.) from the arrays and the components\n"
  "of the arrays from the field data. This is done by associating\n"
  "components in the input field with components making up the attribute\n"
  "data. For example, you would specify a scalar with three components\n"
  "(RGB) by assigning components from the field for the R, then G, then\n"
  "B values of the scalars.  You may also have to specify component\n"
  "ranges (for each R-G-B) to make sure that the number of R, G, and B\n"
  "values is the same. Also, you may want to normalize the components\n"
  "which helps distribute the data uniformly.\n\n"
  "This filter is often used in conjunction with\n"
  "vtkDataObjectToDataSetFilter.  vtkDataObjectToDataSetFilter filter\n"
  "generates dataset topology and geometry and passes its input field\n"
  "data along to its output. Then this filter is used to generate the\n"
  "attribute data to go along with the dataset.\n\n"
  "@warning\n"
  "Make sure that the data you extract is consistent. That is, if you\n"
  "have N points, extract N point attributes (scalars, vectors, etc.).\n\n"
  "@sa\n"
  "vtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\n"
  "vtkDataSetAttributes vtkDataArray\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFieldDataToAttributeDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkFieldDataToAttributeDataFilter", // tp_name
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
  PyvtkFieldDataToAttributeDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFieldDataToAttributeDataFilter_StaticNew()
{
  return vtkFieldDataToAttributeDataFilter::New();
}

PyObject *PyvtkFieldDataToAttributeDataFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFieldDataToAttributeDataFilter_Type, PyvtkFieldDataToAttributeDataFilter_Methods,
    "vtkFieldDataToAttributeDataFilter",
 &PyvtkFieldDataToAttributeDataFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFieldDataToAttributeDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFieldDataToAttributeDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFieldDataToAttributeDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_DATA_OBJECT_FIELD", 0 },
        { "VTK_POINT_DATA_FIELD", 1 },
        { "VTK_CELL_DATA_FIELD", 2 },
        { "VTK_CELL_DATA", 0 },
        { "VTK_POINT_DATA", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

