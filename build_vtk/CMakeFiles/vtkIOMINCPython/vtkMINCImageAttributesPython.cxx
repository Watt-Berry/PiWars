// python wrapper for vtkMINCImageAttributes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMINCImageAttributes.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMINCImageAttributes(PyObject *dict); }
extern "C" { PyObject *PyvtkMINCImageAttributes_ClassNew(); }


static PyObject *
PyvtkMINCImageAttributes_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMINCImageAttributes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMINCImageAttributes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMINCImageAttributes *tempr = vtkMINCImageAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMINCImageAttributes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMINCImageAttributes::NewInstance());

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
PyvtkMINCImageAttributes_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMINCImageAttributes::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMINCImageAttributes::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkMINCImageAttributes::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetName(temp0);
    }
    else
    {
      op->vtkMINCImageAttributes::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkMINCImageAttributes::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataType(temp0);
    }
    else
    {
      op->vtkMINCImageAttributes::SetDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkMINCImageAttributes::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_AddDimension_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddDimension(temp0);
    }
    else
    {
      op->vtkMINCImageAttributes::AddDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMINCImageAttributes_AddDimension_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const char *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddDimension(temp0, temp1);
    }
    else
    {
      op->vtkMINCImageAttributes::AddDimension(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMINCImageAttributes_AddDimension(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMINCImageAttributes_AddDimension_s1(self, args);
    case 2:
      return PyvtkMINCImageAttributes_AddDimension_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddDimension");
  return nullptr;
}


static PyObject *
PyvtkMINCImageAttributes_GetDimensionNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetDimensionNames() :
      op->vtkMINCImageAttributes::GetDimensionNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetDimensionLengths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionLengths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetDimensionLengths() :
      op->vtkMINCImageAttributes::GetDimensionLengths());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetVariableNames() :
      op->vtkMINCImageAttributes::GetVariableNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetAttributeNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAttributeNames(temp0) :
      op->vtkMINCImageAttributes::GetAttributeNames(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetImageMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->SetImageMin(temp0);
    }
    else
    {
      op->vtkMINCImageAttributes::SetImageMin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetImageMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->SetImageMax(temp0);
    }
    else
    {
      op->vtkMINCImageAttributes::SetImageMax(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetImageMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetImageMin() :
      op->vtkMINCImageAttributes::GetImageMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetImageMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetImageMax() :
      op->vtkMINCImageAttributes::GetImageMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetNumberOfImageMinMaxDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfImageMinMaxDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfImageMinMaxDimensions() :
      op->vtkMINCImageAttributes::GetNumberOfImageMinMaxDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetNumberOfImageMinMaxDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfImageMinMaxDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfImageMinMaxDimensions(temp0);
    }
    else
    {
      op->vtkMINCImageAttributes::SetNumberOfImageMinMaxDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_HasAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->HasAttribute(temp0, temp1) :
      op->vtkMINCImageAttributes::HasAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetAttributeValueAsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeValueAsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetAttributeValueAsArray(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMINCImageAttributes::SetAttributeValueAsArray(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetAttributeValueAsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValueAsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetAttributeValueAsArray(temp0, temp1) :
      op->vtkMINCImageAttributes::GetAttributeValueAsArray(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetAttributeValueAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeValueAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAttributeValueAsString(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMINCImageAttributes::SetAttributeValueAsString(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetAttributeValueAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValueAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeValueAsString(temp0, temp1) :
      op->vtkMINCImageAttributes::GetAttributeValueAsString(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetAttributeValueAsInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeValueAsInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const char *temp0 = nullptr;
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
      op->SetAttributeValueAsInt(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMINCImageAttributes::SetAttributeValueAsInt(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetAttributeValueAsInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValueAsInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeValueAsInt(temp0, temp1) :
      op->vtkMINCImageAttributes::GetAttributeValueAsInt(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetAttributeValueAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeValueAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAttributeValueAsDouble(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMINCImageAttributes::SetAttributeValueAsDouble(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetAttributeValueAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeValueAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetAttributeValueAsDouble(temp0, temp1) :
      op->vtkMINCImageAttributes::GetAttributeValueAsDouble(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_ValidateAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->ValidateAttribute(temp0, temp1, temp2) :
      op->vtkMINCImageAttributes::ValidateAttribute(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_SetValidateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValidateAttributes(temp0);
    }
    else
    {
      op->vtkMINCImageAttributes::SetValidateAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_ValidateAttributesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateAttributesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ValidateAttributesOn();
    }
    else
    {
      op->vtkMINCImageAttributes::ValidateAttributesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_ValidateAttributesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateAttributesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ValidateAttributesOff();
    }
    else
    {
      op->vtkMINCImageAttributes::ValidateAttributesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_GetValidateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetValidateAttributes() :
      op->vtkMINCImageAttributes::GetValidateAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  vtkMINCImageAttributes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMINCImageAttributes"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkMINCImageAttributes::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMINCImageAttributes_FindValidRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindValidRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->FindValidRange(temp0);
    }
    else
    {
      op->vtkMINCImageAttributes::FindValidRange(temp0);
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
PyvtkMINCImageAttributes_FindImageRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindImageRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->FindImageRange(temp0);
    }
    else
    {
      op->vtkMINCImageAttributes::FindImageRange(temp0);
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
PyvtkMINCImageAttributes_PrintFileHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintFileHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMINCImageAttributes *op = static_cast<vtkMINCImageAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrintFileHeader();
    }
    else
    {
      op->vtkMINCImageAttributes::PrintFileHeader();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMINCImageAttributes_Methods[] = {
  {"IsTypeOf", PyvtkMINCImageAttributes_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMINCImageAttributes_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMINCImageAttributes_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMINCImageAttributes\nC++: static vtkMINCImageAttributes *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMINCImageAttributes_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMINCImageAttributes\nC++: vtkMINCImageAttributes *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMINCImageAttributes_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMINCImageAttributes_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Reset", PyvtkMINCImageAttributes_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: virtual void Reset()\n\nReset all the attributes in preparation for loading new\ninformation.\n"},
  {"SetName", PyvtkMINCImageAttributes_SetName, METH_VARARGS,
   "SetName(self, _arg:str) -> None\nC++: virtual void SetName(const char *_arg)\n\nGet the name of the image, not including the path or the\nextension.  This is only needed for printing the header and there\nis usually no need to set it.\n"},
  {"GetName", PyvtkMINCImageAttributes_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: virtual char *GetName()\n\n"},
  {"SetDataType", PyvtkMINCImageAttributes_SetDataType, METH_VARARGS,
   "SetDataType(self, _arg:int) -> None\nC++: virtual void SetDataType(int _arg)\n\nGet the image data type, as stored on disk.  This information is\nuseful if the file was converted to floating-point when it was\nloaded.  When writing a file from float or double image data, you\ncan use this method to prescribe the output type.\n"},
  {"GetDataType", PyvtkMINCImageAttributes_GetDataType, METH_VARARGS,
   "GetDataType(self) -> int\nC++: virtual int GetDataType()\n\n"},
  {"AddDimension", PyvtkMINCImageAttributes_AddDimension, METH_VARARGS,
   "AddDimension(self, dimension:str) -> None\nC++: virtual void AddDimension(const char *dimension)\nAddDimension(self, dimension:str, length:int) -> None\nC++: virtual void AddDimension(const char *dimension,\n    vtkIdType length)\n\nAdd the names of up to five dimensions. The ordering of these\ndimensions will determine the dimension order of the file.  If no\nDimensionNames are set, the writer will set the dimension order\nof the file to be the same as the dimension order in memory.\n"},
  {"GetDimensionNames", PyvtkMINCImageAttributes_GetDimensionNames, METH_VARARGS,
   "GetDimensionNames(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetDimensionNames()\n\nGet the dimension names.  The dimension names are same order as\nwritten in the file, starting with the slowest-varying dimension.\n Use this method to get the array if you need to change \"space\"\ndimensions to \"frequency\" after performing a Fourier transform.\n"},
  {"GetDimensionLengths", PyvtkMINCImageAttributes_GetDimensionLengths, METH_VARARGS,
   "GetDimensionLengths(self) -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetDimensionLengths()\n\nGet the lengths of all the dimensions.  The dimension lengths are\ninformative, the vtkMINCImageWriter does not look at these values\nbut instead uses the dimension sizes of its input.\n"},
  {"GetVariableNames", PyvtkMINCImageAttributes_GetVariableNames, METH_VARARGS,
   "GetVariableNames(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetVariableNames()\n\nGet the names of all the variables.\n"},
  {"GetAttributeNames", PyvtkMINCImageAttributes_GetAttributeNames, METH_VARARGS,
   "GetAttributeNames(self, variable:str) -> vtkStringArray\nC++: virtual vtkStringArray *GetAttributeNames(\n    const char *variable)\n\nList the attribute names for a variable.  Set the variable to the\nempty string to get a list of the global attributes.\n"},
  {"SetImageMin", PyvtkMINCImageAttributes_SetImageMin, METH_VARARGS,
   "SetImageMin(self, imageMin:vtkDoubleArray) -> None\nC++: virtual void SetImageMin(vtkDoubleArray *imageMin)\n\nGet the image min and max arrays. These are set by the reader,\nbut they aren't used by the writer except to compute the full\nreal data range of the original file.\n"},
  {"SetImageMax", PyvtkMINCImageAttributes_SetImageMax, METH_VARARGS,
   "SetImageMax(self, imageMax:vtkDoubleArray) -> None\nC++: virtual void SetImageMax(vtkDoubleArray *imageMax)\n\n"},
  {"GetImageMin", PyvtkMINCImageAttributes_GetImageMin, METH_VARARGS,
   "GetImageMin(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetImageMin()\n\n"},
  {"GetImageMax", PyvtkMINCImageAttributes_GetImageMax, METH_VARARGS,
   "GetImageMax(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetImageMax()\n\n"},
  {"GetNumberOfImageMinMaxDimensions", PyvtkMINCImageAttributes_GetNumberOfImageMinMaxDimensions, METH_VARARGS,
   "GetNumberOfImageMinMaxDimensions(self) -> int\nC++: virtual int GetNumberOfImageMinMaxDimensions()\n\nGet the number of ImageMinMax dimensions.\n"},
  {"SetNumberOfImageMinMaxDimensions", PyvtkMINCImageAttributes_SetNumberOfImageMinMaxDimensions, METH_VARARGS,
   "SetNumberOfImageMinMaxDimensions(self, _arg:int) -> None\nC++: virtual void SetNumberOfImageMinMaxDimensions(int _arg)\n\n"},
  {"HasAttribute", PyvtkMINCImageAttributes_HasAttribute, METH_VARARGS,
   "HasAttribute(self, variable:str, attribute:str) -> int\nC++: virtual vtkTypeBool HasAttribute(const char *variable,\n    const char *attribute)\n\nCheck to see if a particular attribute exists.\n"},
  {"SetAttributeValueAsArray", PyvtkMINCImageAttributes_SetAttributeValueAsArray, METH_VARARGS,
   "SetAttributeValueAsArray(self, variable:str, attribute:str,\n    array:vtkDataArray) -> None\nC++: virtual void SetAttributeValueAsArray(const char *variable,\n    const char *attribute, vtkDataArray *array)\n\nSet attribute values for a variable as a vtkDataArray. Set the\nvariable to the empty string to access global attributes.\n"},
  {"GetAttributeValueAsArray", PyvtkMINCImageAttributes_GetAttributeValueAsArray, METH_VARARGS,
   "GetAttributeValueAsArray(self, variable:str, attribute:str)\n    -> vtkDataArray\nC++: virtual vtkDataArray *GetAttributeValueAsArray(\n    const char *variable, const char *attribute)\n\n"},
  {"SetAttributeValueAsString", PyvtkMINCImageAttributes_SetAttributeValueAsString, METH_VARARGS,
   "SetAttributeValueAsString(self, variable:str, attribute:str,\n    value:str) -> None\nC++: virtual void SetAttributeValueAsString(const char *variable,\n    const char *attribute, const char *value)\n\nSet an attribute value as a string.  Set the variable to the\nempty string to access global attributes. If you specify a\nvariable that does not exist, it will be created.\n"},
  {"GetAttributeValueAsString", PyvtkMINCImageAttributes_GetAttributeValueAsString, METH_VARARGS,
   "GetAttributeValueAsString(self, variable:str, attribute:str)\n    -> str\nC++: virtual const char *GetAttributeValueAsString(\n    const char *variable, const char *attribute)\n\n"},
  {"SetAttributeValueAsInt", PyvtkMINCImageAttributes_SetAttributeValueAsInt, METH_VARARGS,
   "SetAttributeValueAsInt(self, variable:str, attribute:str,\n    value:int) -> None\nC++: virtual void SetAttributeValueAsInt(const char *variable,\n    const char *attribute, int value)\n\nSet an attribute value as an int. Set the variable to the empty\nstring to access global attributes. If you specify a variable\nthat does not exist, it will be created.\n"},
  {"GetAttributeValueAsInt", PyvtkMINCImageAttributes_GetAttributeValueAsInt, METH_VARARGS,
   "GetAttributeValueAsInt(self, variable:str, attribute:str) -> int\nC++: virtual int GetAttributeValueAsInt(const char *variable,\n    const char *attribute)\n\n"},
  {"SetAttributeValueAsDouble", PyvtkMINCImageAttributes_SetAttributeValueAsDouble, METH_VARARGS,
   "SetAttributeValueAsDouble(self, variable:str, attribute:str,\n    value:float) -> None\nC++: virtual void SetAttributeValueAsDouble(const char *variable,\n    const char *attribute, double value)\n\nSet an attribute value as a double.  Set the variable to the\nempty string to access global attributes. If you specify a\nvariable that does not exist, it will be created.\n"},
  {"GetAttributeValueAsDouble", PyvtkMINCImageAttributes_GetAttributeValueAsDouble, METH_VARARGS,
   "GetAttributeValueAsDouble(self, variable:str, attribute:str)\n    -> float\nC++: virtual double GetAttributeValueAsDouble(\n    const char *variable, const char *attribute)\n\n"},
  {"ValidateAttribute", PyvtkMINCImageAttributes_ValidateAttribute, METH_VARARGS,
   "ValidateAttribute(self, varname:str, attname:str,\n    array:vtkDataArray) -> int\nC++: virtual int ValidateAttribute(const char *varname,\n    const char *attname, vtkDataArray *array)\n\nValidate a particular attribute.  This involves checking that the\nattribute is a MINC standard attribute, and checking whether it\ncan be set (as opposed to being set automatically from the image\ninformation).  The return values is 0 if the attribute is set\nautomatically and therefore should not be copied from here, 1 if\nthis attribute is valid and should be set, and 2 if the attribute\nis non-standard.\n"},
  {"SetValidateAttributes", PyvtkMINCImageAttributes_SetValidateAttributes, METH_VARARGS,
   "SetValidateAttributes(self, _arg:int) -> None\nC++: virtual void SetValidateAttributes(vtkTypeBool _arg)\n\nSet this to Off if you do not want to automatically validate\nevery attribute that is set.\n"},
  {"ValidateAttributesOn", PyvtkMINCImageAttributes_ValidateAttributesOn, METH_VARARGS,
   "ValidateAttributesOn(self) -> None\nC++: virtual void ValidateAttributesOn()\n\n"},
  {"ValidateAttributesOff", PyvtkMINCImageAttributes_ValidateAttributesOff, METH_VARARGS,
   "ValidateAttributesOff(self) -> None\nC++: virtual void ValidateAttributesOff()\n\n"},
  {"GetValidateAttributes", PyvtkMINCImageAttributes_GetValidateAttributes, METH_VARARGS,
   "GetValidateAttributes(self) -> int\nC++: virtual vtkTypeBool GetValidateAttributes()\n\n"},
  {"ShallowCopy", PyvtkMINCImageAttributes_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, source:vtkMINCImageAttributes) -> None\nC++: virtual void ShallowCopy(vtkMINCImageAttributes *source)\n\nDo a shallow copy.  This will copy all the attributes from the\nsource.  It is much more efficient than a DeepCopy would be,\nsince it only copies pointers to the attribute values instead of\ncopying the arrays themselves.  You must use this method to make\na copy if you want to modify any MINC attributes from a\nMINCReader before you pass them to a MINCWriter.\n"},
  {"FindValidRange", PyvtkMINCImageAttributes_FindValidRange, METH_VARARGS,
   "FindValidRange(self, range:[float, float]) -> None\nC++: virtual void FindValidRange(double range[2])\n\nFind the valid range of the data from the information stored in\nthe attributes.\n"},
  {"FindImageRange", PyvtkMINCImageAttributes_FindImageRange, METH_VARARGS,
   "FindImageRange(self, range:[float, float]) -> None\nC++: virtual void FindImageRange(double range[2])\n\nFind the image range of the data from the information stored in\nthe attributes.\n"},
  {"PrintFileHeader", PyvtkMINCImageAttributes_PrintFileHeader, METH_VARARGS,
   "PrintFileHeader(self) -> None\nC++: virtual void PrintFileHeader()\n\nA diagnostic function.  Print the header of the file in the same\nformat as ncdump or mincheader.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMINCImageAttributes_Doc =
  "vtkMINCImageAttributes - A container for a MINC image header.\n\n"
  "Superclass: vtkObject\n\n"
  "This class provides methods to access all of the information\n"
  "contained in the MINC header.  If you read a MINC file into VTK and\n"
  "then write it out again, you can use\n"
  "writer->SetImageAttributes(reader->GetImageAttributes) to ensure that\n"
  "all of the medical information contained in the file is transferred\n"
  "from the reader to the writer.  If you want to change any of the\n"
  "header information, you must use ShallowCopy to make a copy of the\n"
  "reader's attributes and then modify only the copy.\n"
  "@sa\n"
  "vtkMINCImageReader vtkMINCImageWriter@par Thanks: Thanks to David\n"
  "Gobbi for writing this class and Atamai Inc. for contributing it to\n"
  "VTK.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMINCImageAttributes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOMINC.vtkMINCImageAttributes", // tp_name
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
  PyvtkMINCImageAttributes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMINCImageAttributes_StaticNew()
{
  return vtkMINCImageAttributes::New();
}

PyObject *PyvtkMINCImageAttributes_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMINCImageAttributes_Type, PyvtkMINCImageAttributes_Methods,
    "vtkMINCImageAttributes",
 &PyvtkMINCImageAttributes_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMINCImageAttributes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMINCImageAttributes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMINCImageAttributes", o) != 0)
  {
    Py_DECREF(o);
  }

}

