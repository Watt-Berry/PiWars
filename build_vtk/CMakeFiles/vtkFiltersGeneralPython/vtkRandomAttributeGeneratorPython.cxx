// python wrapper for vtkRandomAttributeGenerator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRandomAttributeGenerator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRandomAttributeGenerator(PyObject *dict); }
extern "C" { PyObject *PyvtkRandomAttributeGenerator_ClassNew(); }


static PyObject *
PyvtkRandomAttributeGenerator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRandomAttributeGenerator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRandomAttributeGenerator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRandomAttributeGenerator *tempr = vtkRandomAttributeGenerator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRandomAttributeGenerator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRandomAttributeGenerator::NewInstance());

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
PyvtkRandomAttributeGenerator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRandomAttributeGenerator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRandomAttributeGenerator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

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
      op->vtkRandomAttributeGenerator::SetDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToBit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToBit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToBit();
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetDataTypeToBit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToChar();
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetDataTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedChar();
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetDataTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToShort();
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetDataTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedShort();
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetDataTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToInt();
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetDataTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedInt();
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetDataTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToLong();
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetDataTypeToLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToLongLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToLongLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToLongLong();
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetDataTypeToLongLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedLong();
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetDataTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedLongLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedLongLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedLongLong();
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetDataTypeToUnsignedLongLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToIdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToIdType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToIdType();
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetDataTypeToIdType();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToFloat();
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetDataTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetDataTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToDouble();
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetDataTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkRandomAttributeGenerator::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetNumberOfComponentsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsMinValue() :
      op->vtkRandomAttributeGenerator::GetNumberOfComponentsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetNumberOfComponentsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsMaxValue() :
      op->vtkRandomAttributeGenerator::GetNumberOfComponentsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkRandomAttributeGenerator::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetMinimumComponentValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumComponentValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumComponentValue(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetMinimumComponentValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetMinimumComponentValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumComponentValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumComponentValue() :
      op->vtkRandomAttributeGenerator::GetMinimumComponentValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetComponentRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetComponentRange(temp0, temp1);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetComponentRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetMaximumComponentValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumComponentValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumComponentValue(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetMaximumComponentValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetMaximumComponentValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumComponentValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumComponentValue() :
      op->vtkRandomAttributeGenerator::GetMaximumComponentValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfTuples(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetNumberOfTuples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetNumberOfTuplesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuplesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfTuplesMinValue() :
      op->vtkRandomAttributeGenerator::GetNumberOfTuplesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetNumberOfTuplesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuplesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfTuplesMaxValue() :
      op->vtkRandomAttributeGenerator::GetNumberOfTuplesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkRandomAttributeGenerator::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGeneratePointScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePointScalars(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetGeneratePointScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGeneratePointScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePointScalars() :
      op->vtkRandomAttributeGenerator::GetGeneratePointScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointScalarsOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GeneratePointScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointScalarsOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GeneratePointScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGeneratePointVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePointVectors(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetGeneratePointVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGeneratePointVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePointVectors() :
      op->vtkRandomAttributeGenerator::GetGeneratePointVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointVectorsOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GeneratePointVectorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointVectorsOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GeneratePointVectorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGeneratePointNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePointNormals(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetGeneratePointNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGeneratePointNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePointNormals() :
      op->vtkRandomAttributeGenerator::GetGeneratePointNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointNormalsOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GeneratePointNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointNormalsOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GeneratePointNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGeneratePointTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePointTensors(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetGeneratePointTensors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGeneratePointTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePointTensors() :
      op->vtkRandomAttributeGenerator::GetGeneratePointTensors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointTensorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointTensorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointTensorsOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GeneratePointTensorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointTensorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointTensorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointTensorsOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GeneratePointTensorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGeneratePointTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePointTCoords(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetGeneratePointTCoords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGeneratePointTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePointTCoords() :
      op->vtkRandomAttributeGenerator::GetGeneratePointTCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointTCoordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointTCoordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointTCoordsOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GeneratePointTCoordsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointTCoordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointTCoordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointTCoordsOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GeneratePointTCoordsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGeneratePointArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePointArray(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetGeneratePointArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGeneratePointArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePointArray() :
      op->vtkRandomAttributeGenerator::GetGeneratePointArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointArrayOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GeneratePointArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GeneratePointArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointArrayOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GeneratePointArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGenerateCellScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateCellScalars(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetGenerateCellScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGenerateCellScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCellScalars() :
      op->vtkRandomAttributeGenerator::GetGenerateCellScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellScalarsOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateCellScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellScalarsOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateCellScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGenerateCellVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateCellVectors(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetGenerateCellVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGenerateCellVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCellVectors() :
      op->vtkRandomAttributeGenerator::GetGenerateCellVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellVectorsOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateCellVectorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellVectorsOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateCellVectorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGenerateCellNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateCellNormals(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetGenerateCellNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGenerateCellNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCellNormals() :
      op->vtkRandomAttributeGenerator::GetGenerateCellNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellNormalsOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateCellNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellNormalsOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateCellNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGenerateCellTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateCellTensors(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetGenerateCellTensors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGenerateCellTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCellTensors() :
      op->vtkRandomAttributeGenerator::GetGenerateCellTensors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellTensorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellTensorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellTensorsOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateCellTensorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellTensorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellTensorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellTensorsOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateCellTensorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGenerateCellTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateCellTCoords(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetGenerateCellTCoords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGenerateCellTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCellTCoords() :
      op->vtkRandomAttributeGenerator::GetGenerateCellTCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellTCoordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellTCoordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellTCoordsOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateCellTCoordsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellTCoordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellTCoordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellTCoordsOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateCellTCoordsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGenerateCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateCellArray(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetGenerateCellArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGenerateCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCellArray() :
      op->vtkRandomAttributeGenerator::GetGenerateCellArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellArrayOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateCellArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateCellArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellArrayOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateCellArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetGenerateFieldArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFieldArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateFieldArray(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetGenerateFieldArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetGenerateFieldArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFieldArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateFieldArray() :
      op->vtkRandomAttributeGenerator::GetGenerateFieldArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateFieldArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFieldArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFieldArrayOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateFieldArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateFieldArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFieldArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFieldArrayOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateFieldArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_SetAttributesConstantPerBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributesConstantPerBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributesConstantPerBlock(temp0);
    }
    else
    {
      op->vtkRandomAttributeGenerator::SetAttributesConstantPerBlock(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GetAttributesConstantPerBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesConstantPerBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAttributesConstantPerBlock() :
      op->vtkRandomAttributeGenerator::GetAttributesConstantPerBlock());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_AttributesConstantPerBlockOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttributesConstantPerBlockOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AttributesConstantPerBlockOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::AttributesConstantPerBlockOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_AttributesConstantPerBlockOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttributesConstantPerBlockOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AttributesConstantPerBlockOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::AttributesConstantPerBlockOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateAllPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateAllPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateAllPointDataOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateAllPointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateAllPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateAllPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateAllPointDataOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateAllPointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateAllCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateAllCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateAllCellDataOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateAllCellDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateAllCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateAllCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateAllCellDataOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateAllCellDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateAllDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateAllDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateAllDataOn();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateAllDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomAttributeGenerator_GenerateAllDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateAllDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomAttributeGenerator *op = static_cast<vtkRandomAttributeGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateAllDataOff();
    }
    else
    {
      op->vtkRandomAttributeGenerator::GenerateAllDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRandomAttributeGenerator_Methods[] = {
  {"IsTypeOf", PyvtkRandomAttributeGenerator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRandomAttributeGenerator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRandomAttributeGenerator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRandomAttributeGenerator\nC++: static vtkRandomAttributeGenerator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRandomAttributeGenerator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRandomAttributeGenerator\nC++: vtkRandomAttributeGenerator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRandomAttributeGenerator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRandomAttributeGenerator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDataType", PyvtkRandomAttributeGenerator_SetDataType, METH_VARARGS,
   "SetDataType(self, _arg:int) -> None\nC++: virtual void SetDataType(int _arg)\n\nSpecify the type of array to create (all components of this array\nare of this type). This holds true for all arrays that are\ncreated.\n"},
  {"SetDataTypeToBit", PyvtkRandomAttributeGenerator_SetDataTypeToBit, METH_VARARGS,
   "SetDataTypeToBit(self) -> None\nC++: void SetDataTypeToBit()\n\n"},
  {"SetDataTypeToChar", PyvtkRandomAttributeGenerator_SetDataTypeToChar, METH_VARARGS,
   "SetDataTypeToChar(self) -> None\nC++: void SetDataTypeToChar()\n\n"},
  {"SetDataTypeToUnsignedChar", PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedChar, METH_VARARGS,
   "SetDataTypeToUnsignedChar(self) -> None\nC++: void SetDataTypeToUnsignedChar()\n\n"},
  {"SetDataTypeToShort", PyvtkRandomAttributeGenerator_SetDataTypeToShort, METH_VARARGS,
   "SetDataTypeToShort(self) -> None\nC++: void SetDataTypeToShort()\n\n"},
  {"SetDataTypeToUnsignedShort", PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedShort, METH_VARARGS,
   "SetDataTypeToUnsignedShort(self) -> None\nC++: void SetDataTypeToUnsignedShort()\n\n"},
  {"SetDataTypeToInt", PyvtkRandomAttributeGenerator_SetDataTypeToInt, METH_VARARGS,
   "SetDataTypeToInt(self) -> None\nC++: void SetDataTypeToInt()\n\n"},
  {"SetDataTypeToUnsignedInt", PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedInt, METH_VARARGS,
   "SetDataTypeToUnsignedInt(self) -> None\nC++: void SetDataTypeToUnsignedInt()\n\n"},
  {"SetDataTypeToLong", PyvtkRandomAttributeGenerator_SetDataTypeToLong, METH_VARARGS,
   "SetDataTypeToLong(self) -> None\nC++: void SetDataTypeToLong()\n\n"},
  {"SetDataTypeToLongLong", PyvtkRandomAttributeGenerator_SetDataTypeToLongLong, METH_VARARGS,
   "SetDataTypeToLongLong(self) -> None\nC++: void SetDataTypeToLongLong()\n\n"},
  {"SetDataTypeToUnsignedLong", PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedLong, METH_VARARGS,
   "SetDataTypeToUnsignedLong(self) -> None\nC++: void SetDataTypeToUnsignedLong()\n\n"},
  {"SetDataTypeToUnsignedLongLong", PyvtkRandomAttributeGenerator_SetDataTypeToUnsignedLongLong, METH_VARARGS,
   "SetDataTypeToUnsignedLongLong(self) -> None\nC++: void SetDataTypeToUnsignedLongLong()\n\n"},
  {"SetDataTypeToIdType", PyvtkRandomAttributeGenerator_SetDataTypeToIdType, METH_VARARGS,
   "SetDataTypeToIdType(self) -> None\nC++: void SetDataTypeToIdType()\n\n"},
  {"SetDataTypeToFloat", PyvtkRandomAttributeGenerator_SetDataTypeToFloat, METH_VARARGS,
   "SetDataTypeToFloat(self) -> None\nC++: void SetDataTypeToFloat()\n\n"},
  {"SetDataTypeToDouble", PyvtkRandomAttributeGenerator_SetDataTypeToDouble, METH_VARARGS,
   "SetDataTypeToDouble(self) -> None\nC++: void SetDataTypeToDouble()\n\n"},
  {"GetDataType", PyvtkRandomAttributeGenerator_GetDataType, METH_VARARGS,
   "GetDataType(self) -> int\nC++: virtual int GetDataType()\n\n"},
  {"SetNumberOfComponents", PyvtkRandomAttributeGenerator_SetNumberOfComponents, METH_VARARGS,
   "SetNumberOfComponents(self, _arg:int) -> None\nC++: virtual void SetNumberOfComponents(int _arg)\n\nSpecify the number of components to generate. This value only\napplies to those attribute types that take a variable number of\ncomponents. For example, a vector is only three components so the\nnumber of components is not applicable; whereas a scalar may\nsupport multiple, varying number of components.\n"},
  {"GetNumberOfComponentsMinValue", PyvtkRandomAttributeGenerator_GetNumberOfComponentsMinValue, METH_VARARGS,
   "GetNumberOfComponentsMinValue(self) -> int\nC++: virtual int GetNumberOfComponentsMinValue()\n\n"},
  {"GetNumberOfComponentsMaxValue", PyvtkRandomAttributeGenerator_GetNumberOfComponentsMaxValue, METH_VARARGS,
   "GetNumberOfComponentsMaxValue(self) -> int\nC++: virtual int GetNumberOfComponentsMaxValue()\n\n"},
  {"GetNumberOfComponents", PyvtkRandomAttributeGenerator_GetNumberOfComponents, METH_VARARGS,
   "GetNumberOfComponents(self) -> int\nC++: virtual int GetNumberOfComponents()\n\n"},
  {"SetMinimumComponentValue", PyvtkRandomAttributeGenerator_SetMinimumComponentValue, METH_VARARGS,
   "SetMinimumComponentValue(self, _arg:float) -> None\nC++: virtual void SetMinimumComponentValue(double _arg)\n\nSet the minimum component value. This applies to all data that is\ngenerated, although normals and tensors have internal constraints\nthat must be observed.\n"},
  {"GetMinimumComponentValue", PyvtkRandomAttributeGenerator_GetMinimumComponentValue, METH_VARARGS,
   "GetMinimumComponentValue(self) -> float\nC++: virtual double GetMinimumComponentValue()\n\n"},
  {"SetComponentRange", PyvtkRandomAttributeGenerator_SetComponentRange, METH_VARARGS,
   "SetComponentRange(self, minimumValue:float, maximumValue:float)\n    -> None\nC++: void SetComponentRange(double minimumValue,\n    double maximumValue)\n\n"},
  {"SetMaximumComponentValue", PyvtkRandomAttributeGenerator_SetMaximumComponentValue, METH_VARARGS,
   "SetMaximumComponentValue(self, _arg:float) -> None\nC++: virtual void SetMaximumComponentValue(double _arg)\n\nSet the maximum component value. This applies to all data that is\ngenerated, although normals and tensors have internal constraints\nthat must be observed.\n"},
  {"GetMaximumComponentValue", PyvtkRandomAttributeGenerator_GetMaximumComponentValue, METH_VARARGS,
   "GetMaximumComponentValue(self) -> float\nC++: virtual double GetMaximumComponentValue()\n\n"},
  {"SetNumberOfTuples", PyvtkRandomAttributeGenerator_SetNumberOfTuples, METH_VARARGS,
   "SetNumberOfTuples(self, _arg:int) -> None\nC++: virtual void SetNumberOfTuples(vtkIdType _arg)\n\nSpecify the number of tuples to generate. This value only applies\nwhen creating general field data. In all other cases (i.e., point\ndata or cell data), the number of tuples is controlled by the\nnumber of points and cells, respectively.\n"},
  {"GetNumberOfTuplesMinValue", PyvtkRandomAttributeGenerator_GetNumberOfTuplesMinValue, METH_VARARGS,
   "GetNumberOfTuplesMinValue(self) -> int\nC++: virtual vtkIdType GetNumberOfTuplesMinValue()\n\n"},
  {"GetNumberOfTuplesMaxValue", PyvtkRandomAttributeGenerator_GetNumberOfTuplesMaxValue, METH_VARARGS,
   "GetNumberOfTuplesMaxValue(self) -> int\nC++: virtual vtkIdType GetNumberOfTuplesMaxValue()\n\n"},
  {"GetNumberOfTuples", PyvtkRandomAttributeGenerator_GetNumberOfTuples, METH_VARARGS,
   "GetNumberOfTuples(self) -> int\nC++: virtual vtkIdType GetNumberOfTuples()\n\n"},
  {"SetGeneratePointScalars", PyvtkRandomAttributeGenerator_SetGeneratePointScalars, METH_VARARGS,
   "SetGeneratePointScalars(self, _arg:int) -> None\nC++: virtual void SetGeneratePointScalars(vtkTypeBool _arg)\n\nIndicate that point scalars are to be generated. Note that the\nspecified number of components is used to create the scalar.\n"},
  {"GetGeneratePointScalars", PyvtkRandomAttributeGenerator_GetGeneratePointScalars, METH_VARARGS,
   "GetGeneratePointScalars(self) -> int\nC++: virtual vtkTypeBool GetGeneratePointScalars()\n\n"},
  {"GeneratePointScalarsOn", PyvtkRandomAttributeGenerator_GeneratePointScalarsOn, METH_VARARGS,
   "GeneratePointScalarsOn(self) -> None\nC++: virtual void GeneratePointScalarsOn()\n\n"},
  {"GeneratePointScalarsOff", PyvtkRandomAttributeGenerator_GeneratePointScalarsOff, METH_VARARGS,
   "GeneratePointScalarsOff(self) -> None\nC++: virtual void GeneratePointScalarsOff()\n\n"},
  {"SetGeneratePointVectors", PyvtkRandomAttributeGenerator_SetGeneratePointVectors, METH_VARARGS,
   "SetGeneratePointVectors(self, _arg:int) -> None\nC++: virtual void SetGeneratePointVectors(vtkTypeBool _arg)\n\nIndicate that point vectors are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {"GetGeneratePointVectors", PyvtkRandomAttributeGenerator_GetGeneratePointVectors, METH_VARARGS,
   "GetGeneratePointVectors(self) -> int\nC++: virtual vtkTypeBool GetGeneratePointVectors()\n\n"},
  {"GeneratePointVectorsOn", PyvtkRandomAttributeGenerator_GeneratePointVectorsOn, METH_VARARGS,
   "GeneratePointVectorsOn(self) -> None\nC++: virtual void GeneratePointVectorsOn()\n\n"},
  {"GeneratePointVectorsOff", PyvtkRandomAttributeGenerator_GeneratePointVectorsOff, METH_VARARGS,
   "GeneratePointVectorsOff(self) -> None\nC++: virtual void GeneratePointVectorsOff()\n\n"},
  {"SetGeneratePointNormals", PyvtkRandomAttributeGenerator_SetGeneratePointNormals, METH_VARARGS,
   "SetGeneratePointNormals(self, _arg:int) -> None\nC++: virtual void SetGeneratePointNormals(vtkTypeBool _arg)\n\nIndicate that point normals are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {"GetGeneratePointNormals", PyvtkRandomAttributeGenerator_GetGeneratePointNormals, METH_VARARGS,
   "GetGeneratePointNormals(self) -> int\nC++: virtual vtkTypeBool GetGeneratePointNormals()\n\n"},
  {"GeneratePointNormalsOn", PyvtkRandomAttributeGenerator_GeneratePointNormalsOn, METH_VARARGS,
   "GeneratePointNormalsOn(self) -> None\nC++: virtual void GeneratePointNormalsOn()\n\n"},
  {"GeneratePointNormalsOff", PyvtkRandomAttributeGenerator_GeneratePointNormalsOff, METH_VARARGS,
   "GeneratePointNormalsOff(self) -> None\nC++: virtual void GeneratePointNormalsOff()\n\n"},
  {"SetGeneratePointTensors", PyvtkRandomAttributeGenerator_SetGeneratePointTensors, METH_VARARGS,
   "SetGeneratePointTensors(self, _arg:int) -> None\nC++: virtual void SetGeneratePointTensors(vtkTypeBool _arg)\n\nIndicate that point tensors are to be generated. Note that the\nnumber of components is always equal to nine.\n"},
  {"GetGeneratePointTensors", PyvtkRandomAttributeGenerator_GetGeneratePointTensors, METH_VARARGS,
   "GetGeneratePointTensors(self) -> int\nC++: virtual vtkTypeBool GetGeneratePointTensors()\n\n"},
  {"GeneratePointTensorsOn", PyvtkRandomAttributeGenerator_GeneratePointTensorsOn, METH_VARARGS,
   "GeneratePointTensorsOn(self) -> None\nC++: virtual void GeneratePointTensorsOn()\n\n"},
  {"GeneratePointTensorsOff", PyvtkRandomAttributeGenerator_GeneratePointTensorsOff, METH_VARARGS,
   "GeneratePointTensorsOff(self) -> None\nC++: virtual void GeneratePointTensorsOff()\n\n"},
  {"SetGeneratePointTCoords", PyvtkRandomAttributeGenerator_SetGeneratePointTCoords, METH_VARARGS,
   "SetGeneratePointTCoords(self, _arg:int) -> None\nC++: virtual void SetGeneratePointTCoords(vtkTypeBool _arg)\n\nIndicate that point texture coordinates are to be generated. Note\nthat the specified number of components is used to create the\ntexture coordinates (but must range between one and three).\n"},
  {"GetGeneratePointTCoords", PyvtkRandomAttributeGenerator_GetGeneratePointTCoords, METH_VARARGS,
   "GetGeneratePointTCoords(self) -> int\nC++: virtual vtkTypeBool GetGeneratePointTCoords()\n\n"},
  {"GeneratePointTCoordsOn", PyvtkRandomAttributeGenerator_GeneratePointTCoordsOn, METH_VARARGS,
   "GeneratePointTCoordsOn(self) -> None\nC++: virtual void GeneratePointTCoordsOn()\n\n"},
  {"GeneratePointTCoordsOff", PyvtkRandomAttributeGenerator_GeneratePointTCoordsOff, METH_VARARGS,
   "GeneratePointTCoordsOff(self) -> None\nC++: virtual void GeneratePointTCoordsOff()\n\n"},
  {"SetGeneratePointArray", PyvtkRandomAttributeGenerator_SetGeneratePointArray, METH_VARARGS,
   "SetGeneratePointArray(self, _arg:int) -> None\nC++: virtual void SetGeneratePointArray(vtkTypeBool _arg)\n\nIndicate that an arbitrary point array is to be generated. The\narray is added to the points data but is not labeled as one of\nscalars, vectors, normals, tensors, or texture coordinates (i.e.,\nAddArray() is used). Note that the specified number of components\nis used to create the array.\n"},
  {"GetGeneratePointArray", PyvtkRandomAttributeGenerator_GetGeneratePointArray, METH_VARARGS,
   "GetGeneratePointArray(self) -> int\nC++: virtual vtkTypeBool GetGeneratePointArray()\n\n"},
  {"GeneratePointArrayOn", PyvtkRandomAttributeGenerator_GeneratePointArrayOn, METH_VARARGS,
   "GeneratePointArrayOn(self) -> None\nC++: virtual void GeneratePointArrayOn()\n\n"},
  {"GeneratePointArrayOff", PyvtkRandomAttributeGenerator_GeneratePointArrayOff, METH_VARARGS,
   "GeneratePointArrayOff(self) -> None\nC++: virtual void GeneratePointArrayOff()\n\n"},
  {"SetGenerateCellScalars", PyvtkRandomAttributeGenerator_SetGenerateCellScalars, METH_VARARGS,
   "SetGenerateCellScalars(self, _arg:int) -> None\nC++: virtual void SetGenerateCellScalars(vtkTypeBool _arg)\n\nIndicate that cell scalars are to be generated. Note that the\nspecified number of components is used to create the scalar.\n"},
  {"GetGenerateCellScalars", PyvtkRandomAttributeGenerator_GetGenerateCellScalars, METH_VARARGS,
   "GetGenerateCellScalars(self) -> int\nC++: virtual vtkTypeBool GetGenerateCellScalars()\n\n"},
  {"GenerateCellScalarsOn", PyvtkRandomAttributeGenerator_GenerateCellScalarsOn, METH_VARARGS,
   "GenerateCellScalarsOn(self) -> None\nC++: virtual void GenerateCellScalarsOn()\n\n"},
  {"GenerateCellScalarsOff", PyvtkRandomAttributeGenerator_GenerateCellScalarsOff, METH_VARARGS,
   "GenerateCellScalarsOff(self) -> None\nC++: virtual void GenerateCellScalarsOff()\n\n"},
  {"SetGenerateCellVectors", PyvtkRandomAttributeGenerator_SetGenerateCellVectors, METH_VARARGS,
   "SetGenerateCellVectors(self, _arg:int) -> None\nC++: virtual void SetGenerateCellVectors(vtkTypeBool _arg)\n\nIndicate that cell vectors are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {"GetGenerateCellVectors", PyvtkRandomAttributeGenerator_GetGenerateCellVectors, METH_VARARGS,
   "GetGenerateCellVectors(self) -> int\nC++: virtual vtkTypeBool GetGenerateCellVectors()\n\n"},
  {"GenerateCellVectorsOn", PyvtkRandomAttributeGenerator_GenerateCellVectorsOn, METH_VARARGS,
   "GenerateCellVectorsOn(self) -> None\nC++: virtual void GenerateCellVectorsOn()\n\n"},
  {"GenerateCellVectorsOff", PyvtkRandomAttributeGenerator_GenerateCellVectorsOff, METH_VARARGS,
   "GenerateCellVectorsOff(self) -> None\nC++: virtual void GenerateCellVectorsOff()\n\n"},
  {"SetGenerateCellNormals", PyvtkRandomAttributeGenerator_SetGenerateCellNormals, METH_VARARGS,
   "SetGenerateCellNormals(self, _arg:int) -> None\nC++: virtual void SetGenerateCellNormals(vtkTypeBool _arg)\n\nIndicate that cell normals are to be generated. Note that the\nnumber of components is always equal to three.\n"},
  {"GetGenerateCellNormals", PyvtkRandomAttributeGenerator_GetGenerateCellNormals, METH_VARARGS,
   "GetGenerateCellNormals(self) -> int\nC++: virtual vtkTypeBool GetGenerateCellNormals()\n\n"},
  {"GenerateCellNormalsOn", PyvtkRandomAttributeGenerator_GenerateCellNormalsOn, METH_VARARGS,
   "GenerateCellNormalsOn(self) -> None\nC++: virtual void GenerateCellNormalsOn()\n\n"},
  {"GenerateCellNormalsOff", PyvtkRandomAttributeGenerator_GenerateCellNormalsOff, METH_VARARGS,
   "GenerateCellNormalsOff(self) -> None\nC++: virtual void GenerateCellNormalsOff()\n\n"},
  {"SetGenerateCellTensors", PyvtkRandomAttributeGenerator_SetGenerateCellTensors, METH_VARARGS,
   "SetGenerateCellTensors(self, _arg:int) -> None\nC++: virtual void SetGenerateCellTensors(vtkTypeBool _arg)\n\nIndicate that cell tensors are to be generated. Note that the\nnumber of components is always equal to nine.\n"},
  {"GetGenerateCellTensors", PyvtkRandomAttributeGenerator_GetGenerateCellTensors, METH_VARARGS,
   "GetGenerateCellTensors(self) -> int\nC++: virtual vtkTypeBool GetGenerateCellTensors()\n\n"},
  {"GenerateCellTensorsOn", PyvtkRandomAttributeGenerator_GenerateCellTensorsOn, METH_VARARGS,
   "GenerateCellTensorsOn(self) -> None\nC++: virtual void GenerateCellTensorsOn()\n\n"},
  {"GenerateCellTensorsOff", PyvtkRandomAttributeGenerator_GenerateCellTensorsOff, METH_VARARGS,
   "GenerateCellTensorsOff(self) -> None\nC++: virtual void GenerateCellTensorsOff()\n\n"},
  {"SetGenerateCellTCoords", PyvtkRandomAttributeGenerator_SetGenerateCellTCoords, METH_VARARGS,
   "SetGenerateCellTCoords(self, _arg:int) -> None\nC++: virtual void SetGenerateCellTCoords(vtkTypeBool _arg)\n\nIndicate that cell texture coordinates are to be generated. Note\nthat the specified number of components is used to create the\ntexture coordinates (but must range between one and three).\n"},
  {"GetGenerateCellTCoords", PyvtkRandomAttributeGenerator_GetGenerateCellTCoords, METH_VARARGS,
   "GetGenerateCellTCoords(self) -> int\nC++: virtual vtkTypeBool GetGenerateCellTCoords()\n\n"},
  {"GenerateCellTCoordsOn", PyvtkRandomAttributeGenerator_GenerateCellTCoordsOn, METH_VARARGS,
   "GenerateCellTCoordsOn(self) -> None\nC++: virtual void GenerateCellTCoordsOn()\n\n"},
  {"GenerateCellTCoordsOff", PyvtkRandomAttributeGenerator_GenerateCellTCoordsOff, METH_VARARGS,
   "GenerateCellTCoordsOff(self) -> None\nC++: virtual void GenerateCellTCoordsOff()\n\n"},
  {"SetGenerateCellArray", PyvtkRandomAttributeGenerator_SetGenerateCellArray, METH_VARARGS,
   "SetGenerateCellArray(self, _arg:int) -> None\nC++: virtual void SetGenerateCellArray(vtkTypeBool _arg)\n\nIndicate that an arbitrary cell array is to be generated. The\narray is added to the cell data but is not labeled as one of\nscalars, vectors, normals, tensors, or texture coordinates array\n(i.e., AddArray() is used). Note that the specified number of\ncomponents is used to create the array.\n"},
  {"GetGenerateCellArray", PyvtkRandomAttributeGenerator_GetGenerateCellArray, METH_VARARGS,
   "GetGenerateCellArray(self) -> int\nC++: virtual vtkTypeBool GetGenerateCellArray()\n\n"},
  {"GenerateCellArrayOn", PyvtkRandomAttributeGenerator_GenerateCellArrayOn, METH_VARARGS,
   "GenerateCellArrayOn(self) -> None\nC++: virtual void GenerateCellArrayOn()\n\n"},
  {"GenerateCellArrayOff", PyvtkRandomAttributeGenerator_GenerateCellArrayOff, METH_VARARGS,
   "GenerateCellArrayOff(self) -> None\nC++: virtual void GenerateCellArrayOff()\n\n"},
  {"SetGenerateFieldArray", PyvtkRandomAttributeGenerator_SetGenerateFieldArray, METH_VARARGS,
   "SetGenerateFieldArray(self, _arg:int) -> None\nC++: virtual void SetGenerateFieldArray(vtkTypeBool _arg)\n\nIndicate that an arbitrary field data array is to be generated.\nNote that the specified number of components is used to create\nthe scalar.\n"},
  {"GetGenerateFieldArray", PyvtkRandomAttributeGenerator_GetGenerateFieldArray, METH_VARARGS,
   "GetGenerateFieldArray(self) -> int\nC++: virtual vtkTypeBool GetGenerateFieldArray()\n\n"},
  {"GenerateFieldArrayOn", PyvtkRandomAttributeGenerator_GenerateFieldArrayOn, METH_VARARGS,
   "GenerateFieldArrayOn(self) -> None\nC++: virtual void GenerateFieldArrayOn()\n\n"},
  {"GenerateFieldArrayOff", PyvtkRandomAttributeGenerator_GenerateFieldArrayOff, METH_VARARGS,
   "GenerateFieldArrayOff(self) -> None\nC++: virtual void GenerateFieldArrayOff()\n\n"},
  {"SetAttributesConstantPerBlock", PyvtkRandomAttributeGenerator_SetAttributesConstantPerBlock, METH_VARARGS,
   "SetAttributesConstantPerBlock(self, _arg:bool) -> None\nC++: virtual void SetAttributesConstantPerBlock(bool _arg)\n\nIndicate that the generated attributes are constant within a\nblock. This can be used to highlight blocks in a composite\ndataset.\n"},
  {"GetAttributesConstantPerBlock", PyvtkRandomAttributeGenerator_GetAttributesConstantPerBlock, METH_VARARGS,
   "GetAttributesConstantPerBlock(self) -> bool\nC++: virtual bool GetAttributesConstantPerBlock()\n\n"},
  {"AttributesConstantPerBlockOn", PyvtkRandomAttributeGenerator_AttributesConstantPerBlockOn, METH_VARARGS,
   "AttributesConstantPerBlockOn(self) -> None\nC++: virtual void AttributesConstantPerBlockOn()\n\n"},
  {"AttributesConstantPerBlockOff", PyvtkRandomAttributeGenerator_AttributesConstantPerBlockOff, METH_VARARGS,
   "AttributesConstantPerBlockOff(self) -> None\nC++: virtual void AttributesConstantPerBlockOff()\n\n"},
  {"GenerateAllPointDataOn", PyvtkRandomAttributeGenerator_GenerateAllPointDataOn, METH_VARARGS,
   "GenerateAllPointDataOn(self) -> None\nC++: void GenerateAllPointDataOn()\n\nConvenience methods for generating data: all data, all point\ndata, or all cell data. For example, if all data is enabled, then\nall point, cell and field data is generated. If all point data is\nenabled, then point scalars, vectors, normals, tensors, tcoords,\nand a data array are produced.\n"},
  {"GenerateAllPointDataOff", PyvtkRandomAttributeGenerator_GenerateAllPointDataOff, METH_VARARGS,
   "GenerateAllPointDataOff(self) -> None\nC++: void GenerateAllPointDataOff()\n\n"},
  {"GenerateAllCellDataOn", PyvtkRandomAttributeGenerator_GenerateAllCellDataOn, METH_VARARGS,
   "GenerateAllCellDataOn(self) -> None\nC++: void GenerateAllCellDataOn()\n\n"},
  {"GenerateAllCellDataOff", PyvtkRandomAttributeGenerator_GenerateAllCellDataOff, METH_VARARGS,
   "GenerateAllCellDataOff(self) -> None\nC++: void GenerateAllCellDataOff()\n\n"},
  {"GenerateAllDataOn", PyvtkRandomAttributeGenerator_GenerateAllDataOn, METH_VARARGS,
   "GenerateAllDataOn(self) -> None\nC++: void GenerateAllDataOn()\n\n"},
  {"GenerateAllDataOff", PyvtkRandomAttributeGenerator_GenerateAllDataOff, METH_VARARGS,
   "GenerateAllDataOff(self) -> None\nC++: void GenerateAllDataOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRandomAttributeGenerator_Doc =
  "vtkRandomAttributeGenerator - generate and create random data\nattributes\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkRandomAttributeGenerator is a filter that creates random\n"
  "attributes including scalars, vectors, normals, tensors, texture\n"
  "coordinates and/or general data arrays. These attributes can be\n"
  "generated as point data, cell data or general field data. The\n"
  "generation of each component is normalized between a user-specified\n"
  "minimum and maximum value.\n\n"
  "This filter provides that capability to specify the data type of the\n"
  "attributes, the range for each of the components, and the number of\n"
  "components. Note, however, that this flexibility only goes so far\n"
  "because some attributes (e.g., normals, vectors and tensors) are\n"
  "fixed in the number of components, and in the case of normals and\n"
  "tensors, are constrained in the values that some of the components\n"
  "can take (i.e., normals have magnitude one, and tensors are\n"
  "symmetric).\n\n"
  "@warning\n"
  "In general this class is used for debugging or testing purposes.\n\n"
  "@warning\n"
  "It is possible to generate multiple attributes simultaneously.\n\n"
  "@warning\n"
  "By default, no data is generated. Make sure to enable the generation\n"
  "of some attributes if you want this filter to affect the output. Also\n"
  "note that this filter passes through input geometry, topology and\n"
  "attributes. Newly created attributes may replace attribute data that\n"
  "would have otherwise been passed through.\n\n"
  "@sa\n"
  "vtkBrownianPoints\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRandomAttributeGenerator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkRandomAttributeGenerator", // tp_name
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
  PyvtkRandomAttributeGenerator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRandomAttributeGenerator_StaticNew()
{
  return vtkRandomAttributeGenerator::New();
}

PyObject *PyvtkRandomAttributeGenerator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRandomAttributeGenerator_Type, PyvtkRandomAttributeGenerator_Methods,
    "vtkRandomAttributeGenerator",
 &PyvtkRandomAttributeGenerator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRandomAttributeGenerator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRandomAttributeGenerator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRandomAttributeGenerator", o) != 0)
  {
    Py_DECREF(o);
  }

}

