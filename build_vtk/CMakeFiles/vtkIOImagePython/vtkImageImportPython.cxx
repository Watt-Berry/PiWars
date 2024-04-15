// python wrapper for vtkImageImport
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageImport.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageImport(PyObject *dict); }
extern "C" { PyObject *PyvtkImageImport_ClassNew(); }


static PyObject *
PyvtkImageImport_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageImport::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageImport::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageImport *tempr = vtkImageImport::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageImport *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageImport::NewInstance());

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
PyvtkImageImport_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageImport::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageImport::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_CopyImportVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyImportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CopyImportVoidPointer(temp0, temp1);
    }
    else
    {
      op->vtkImageImport::CopyImportVoidPointer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkImageImport_SetImportVoidPointer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetImportVoidPointer(temp0);
    }
    else
    {
      op->vtkImageImport::SetImportVoidPointer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}

static PyObject *
PyvtkImageImport_SetImportVoidPointer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetImportVoidPointer(temp0, temp1);
    }
    else
    {
      op->vtkImageImport::SetImportVoidPointer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}

static PyObject *
PyvtkImageImport_SetImportVoidPointer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageImport_SetImportVoidPointer_s1(self, args);
    case 2:
      return PyvtkImageImport_SetImportVoidPointer_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetImportVoidPointer");
  return nullptr;
}


static PyObject *
PyvtkImageImport_GetImportVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetImportVoidPointer() :
      op->vtkImageImport::GetImportVoidPointer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarType(temp0);
    }
    else
    {
      op->vtkImageImport::SetDataScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToDouble();
    }
    else
    {
      op->vtkImageImport::SetDataScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToFloat();
    }
    else
    {
      op->vtkImageImport::SetDataScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToInt();
    }
    else
    {
      op->vtkImageImport::SetDataScalarTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToShort();
    }
    else
    {
      op->vtkImageImport::SetDataScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkImageImport::SetDataScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkImageImport::SetDataScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_GetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataScalarType() :
      op->vtkImageImport::GetDataScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_GetDataScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataScalarTypeAsString() :
      op->vtkImageImport::GetDataScalarTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfScalarComponents(temp0);
    }
    else
    {
      op->vtkImageImport::SetNumberOfScalarComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_GetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarComponents() :
      op->vtkImageImport::GetNumberOfScalarComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  int temp0;
  int temp1;
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
      op->SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageImport::SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataExtent(temp0);
    }
    else
    {
      op->vtkImageImport::SetDataExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImageImport_SetDataExtent_s1(self, args);
    case 1:
      return PyvtkImageImport_SetDataExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataExtent");
  return nullptr;
}


static PyObject *
PyvtkImageImport_GetDataExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDataExtent() :
      op->vtkImageImport::GetDataExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataExtentToWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtentToWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataExtentToWholeExtent();
    }
    else
    {
      op->vtkImageImport::SetDataExtentToWholeExtent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

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
      op->SetDataSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageImport::SetDataSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataSpacing(temp0);
    }
    else
    {
      op->vtkImageImport::SetDataSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageImport_SetDataSpacing_s1(self, args);
    case 1:
      return PyvtkImageImport_SetDataSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSpacing");
  return nullptr;
}


static PyObject *
PyvtkImageImport_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataSpacing() :
      op->vtkImageImport::GetDataSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

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
      op->SetDataOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageImport::SetDataOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataOrigin(temp0);
    }
    else
    {
      op->vtkImageImport::SetDataOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageImport_SetDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageImport_SetDataOrigin_s1(self, args);
    case 1:
      return PyvtkImageImport_SetDataOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataOrigin");
  return nullptr;
}


static PyObject *
PyvtkImageImport_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataOrigin() :
      op->vtkImageImport::GetDataOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetDataDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataDirection(temp0);
    }
    else
    {
      op->vtkImageImport::SetDataDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_GetDataDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  size_t sizer = 9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataDirection() :
      op->vtkImageImport::GetDataDirection());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  int temp0;
  int temp1;
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
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageImport::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageImport_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWholeExtent(temp0);
    }
    else
    {
      op->vtkImageImport::SetWholeExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageImport_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImageImport_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkImageImport_SetWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return nullptr;
}


static PyObject *
PyvtkImageImport_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkImageImport::GetWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarArrayName(temp0);
    }
    else
    {
      op->vtkImageImport::SetScalarArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_GetScalarArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalarArrayName() :
      op->vtkImageImport::GetScalarArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_SetCallbackUserData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCallbackUserData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetCallbackUserData(temp0);
    }
    else
    {
      op->vtkImageImport::SetCallbackUserData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkImageImport_GetCallbackUserData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCallbackUserData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetCallbackUserData() :
      op->vtkImageImport::GetCallbackUserData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_InvokePipelineModifiedCallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokePipelineModifiedCallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->InvokePipelineModifiedCallbacks() :
      op->vtkImageImport::InvokePipelineModifiedCallbacks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_InvokeUpdateInformationCallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeUpdateInformationCallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvokeUpdateInformationCallbacks();
    }
    else
    {
      op->vtkImageImport::InvokeUpdateInformationCallbacks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_InvokeExecuteInformationCallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeExecuteInformationCallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvokeExecuteInformationCallbacks();
    }
    else
    {
      op->vtkImageImport::InvokeExecuteInformationCallbacks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_InvokeExecuteDataCallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeExecuteDataCallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvokeExecuteDataCallbacks();
    }
    else
    {
      op->vtkImageImport::InvokeExecuteDataCallbacks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageImport_LegacyCheckWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegacyCheckWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImport *op = static_cast<vtkImageImport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegacyCheckWholeExtent();
    }
    else
    {
      op->vtkImageImport::LegacyCheckWholeExtent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageImport_Methods[] = {
  {"IsTypeOf", PyvtkImageImport_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageImport_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageImport_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageImport\nC++: static vtkImageImport *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageImport_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageImport\nC++: vtkImageImport *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageImport_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageImport_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CopyImportVoidPointer", PyvtkImageImport_CopyImportVoidPointer, METH_VARARGS,
   "CopyImportVoidPointer(self, ptr:Pointer, size:int) -> None\nC++: void CopyImportVoidPointer(void *ptr, vtkIdType size)\n\nImport data and make an internal copy of it.  If you do not want\nVTK to copy the data, then use SetImportVoidPointer instead (do\nnot use both).  Give the size of the data array in bytes.\n"},
  {"SetImportVoidPointer", PyvtkImageImport_SetImportVoidPointer, METH_VARARGS,
   "SetImportVoidPointer(self, ptr:Pointer) -> None\nC++: void SetImportVoidPointer(void *ptr)\nSetImportVoidPointer(self, ptr:Pointer, save:int) -> None\nC++: void SetImportVoidPointer(void *ptr, int save)\n\nSet the pointer from which the image data is imported.  VTK will\nnot make its own copy of the data, it will access the data\ndirectly from the supplied array.  VTK will not attempt to delete\nthe data nor modify the data.\n"},
  {"GetImportVoidPointer", PyvtkImageImport_GetImportVoidPointer, METH_VARARGS,
   "GetImportVoidPointer(self) -> Pointer\nC++: void *GetImportVoidPointer()\n\n"},
  {"SetDataScalarType", PyvtkImageImport_SetDataScalarType, METH_VARARGS,
   "SetDataScalarType(self, _arg:int) -> None\nC++: virtual void SetDataScalarType(int _arg)\n\nSet/Get the data type of pixels in the imported data.  This is\nused as the scalar type of the Output.  Default: Short.\n"},
  {"SetDataScalarTypeToDouble", PyvtkImageImport_SetDataScalarTypeToDouble, METH_VARARGS,
   "SetDataScalarTypeToDouble(self) -> None\nC++: void SetDataScalarTypeToDouble()\n\n"},
  {"SetDataScalarTypeToFloat", PyvtkImageImport_SetDataScalarTypeToFloat, METH_VARARGS,
   "SetDataScalarTypeToFloat(self) -> None\nC++: void SetDataScalarTypeToFloat()\n\n"},
  {"SetDataScalarTypeToInt", PyvtkImageImport_SetDataScalarTypeToInt, METH_VARARGS,
   "SetDataScalarTypeToInt(self) -> None\nC++: void SetDataScalarTypeToInt()\n\n"},
  {"SetDataScalarTypeToShort", PyvtkImageImport_SetDataScalarTypeToShort, METH_VARARGS,
   "SetDataScalarTypeToShort(self) -> None\nC++: void SetDataScalarTypeToShort()\n\n"},
  {"SetDataScalarTypeToUnsignedShort", PyvtkImageImport_SetDataScalarTypeToUnsignedShort, METH_VARARGS,
   "SetDataScalarTypeToUnsignedShort(self) -> None\nC++: void SetDataScalarTypeToUnsignedShort()\n\n"},
  {"SetDataScalarTypeToUnsignedChar", PyvtkImageImport_SetDataScalarTypeToUnsignedChar, METH_VARARGS,
   "SetDataScalarTypeToUnsignedChar(self) -> None\nC++: void SetDataScalarTypeToUnsignedChar()\n\n"},
  {"GetDataScalarType", PyvtkImageImport_GetDataScalarType, METH_VARARGS,
   "GetDataScalarType(self) -> int\nC++: virtual int GetDataScalarType()\n\n"},
  {"GetDataScalarTypeAsString", PyvtkImageImport_GetDataScalarTypeAsString, METH_VARARGS,
   "GetDataScalarTypeAsString(self) -> str\nC++: const char *GetDataScalarTypeAsString()\n\n"},
  {"SetNumberOfScalarComponents", PyvtkImageImport_SetNumberOfScalarComponents, METH_VARARGS,
   "SetNumberOfScalarComponents(self, _arg:int) -> None\nC++: virtual void SetNumberOfScalarComponents(int _arg)\n\nSet/Get the number of scalar components, for RGB images this must\nbe 3. Default: 1.\n"},
  {"GetNumberOfScalarComponents", PyvtkImageImport_GetNumberOfScalarComponents, METH_VARARGS,
   "GetNumberOfScalarComponents(self) -> int\nC++: virtual int GetNumberOfScalarComponents()\n\n"},
  {"SetDataExtent", PyvtkImageImport_SetDataExtent, METH_VARARGS,
   "SetDataExtent(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int,\n    _arg5:int, _arg6:int) -> None\nC++: virtual void SetDataExtent(int _arg1, int _arg2, int _arg3,\n    int _arg4, int _arg5, int _arg6)\nSetDataExtent(self, _arg:(int, int, int, int, int, int)) -> None\nC++: virtual void SetDataExtent(const int _arg[6])\n\nGet/Set the extent of the data buffer.  The dimensions of your\ndata must be equal to (extent[1]-extent[0]+1) *\n(extent[3]-extent[2]+1) * (extent[5]-DataExtent[4]+1).  For\nexample, for a 2D image use (0,width-1, 0,height-1, 0,0).\n"},
  {"GetDataExtent", PyvtkImageImport_GetDataExtent, METH_VARARGS,
   "GetDataExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetDataExtent()\n\n"},
  {"SetDataExtentToWholeExtent", PyvtkImageImport_SetDataExtentToWholeExtent, METH_VARARGS,
   "SetDataExtentToWholeExtent(self) -> None\nC++: void SetDataExtentToWholeExtent()\n\n"},
  {"SetDataSpacing", PyvtkImageImport_SetDataSpacing, METH_VARARGS,
   "SetDataSpacing(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetDataSpacing(double _arg1, double _arg2,\n    double _arg3)\nSetDataSpacing(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDataSpacing(const double _arg[3])\n\nSet/Get the spacing (typically in mm) between image voxels.\nDefault: (1.0, 1.0, 1.0).\n"},
  {"GetDataSpacing", PyvtkImageImport_GetDataSpacing, METH_VARARGS,
   "GetDataSpacing(self) -> (float, float, float)\nC++: virtual double *GetDataSpacing()\n\n"},
  {"SetDataOrigin", PyvtkImageImport_SetDataOrigin, METH_VARARGS,
   "SetDataOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetDataOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetDataOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDataOrigin(const double _arg[3])\n\nSet/Get the origin of the data, i.e. the coordinates (usually in\nmm) of voxel (0,0,0).  Default: (0.0, 0.0, 0.0).\n"},
  {"GetDataOrigin", PyvtkImageImport_GetDataOrigin, METH_VARARGS,
   "GetDataOrigin(self) -> (float, float, float)\nC++: virtual double *GetDataOrigin()\n\n"},
  {"SetDataDirection", PyvtkImageImport_SetDataDirection, METH_VARARGS,
   "SetDataDirection(self, data:(float, ...)) -> None\nC++: virtual void SetDataDirection(const double data[])\n\nSet/Get the direction of the data, i.e. the 3x3 matrix to rotate\nthe coordinates from index space (ijk) to physical space (xyz).\nDefault: Identity Matrix (1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,\n1.0)\n"},
  {"GetDataDirection", PyvtkImageImport_GetDataDirection, METH_VARARGS,
   "GetDataDirection(self) -> (float, float, float, float, float,\n    float, float, float, float)\nC++: virtual double *GetDataDirection()\n\n"},
  {"SetWholeExtent", PyvtkImageImport_SetWholeExtent, METH_VARARGS,
   "SetWholeExtent(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int,\n    _arg5:int, _arg6:int) -> None\nC++: virtual void SetWholeExtent(int _arg1, int _arg2, int _arg3,\n    int _arg4, int _arg5, int _arg6)\nSetWholeExtent(self, _arg:(int, int, int, int, int, int)) -> None\nC++: virtual void SetWholeExtent(const int _arg[6])\n\nGet/Set the whole extent of the image.  This is the largest\npossible extent.  Set the DataExtent to the extent of the image\nin the buffer pointed to by the ImportVoidPointer.\n"},
  {"GetWholeExtent", PyvtkImageImport_GetWholeExtent, METH_VARARGS,
   "GetWholeExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetWholeExtent()\n\n"},
  {"SetScalarArrayName", PyvtkImageImport_SetScalarArrayName, METH_VARARGS,
   "SetScalarArrayName(self, _arg:str) -> None\nC++: virtual void SetScalarArrayName(const char *_arg)\n\nSet/get the scalar array name for this data set. Initial value is\n\"scalars\".\n"},
  {"GetScalarArrayName", PyvtkImageImport_GetScalarArrayName, METH_VARARGS,
   "GetScalarArrayName(self) -> str\nC++: virtual char *GetScalarArrayName()\n\n"},
  {"SetCallbackUserData", PyvtkImageImport_SetCallbackUserData, METH_VARARGS,
   "SetCallbackUserData(self, _arg:Pointer) -> None\nC++: virtual void SetCallbackUserData(void *_arg)\n\nSet/Get the user data which will be passed as the first argument\nto all of the third-party pipeline callbacks.\n"},
  {"GetCallbackUserData", PyvtkImageImport_GetCallbackUserData, METH_VARARGS,
   "GetCallbackUserData(self) -> Pointer\nC++: virtual void *GetCallbackUserData()\n\n"},
  {"InvokePipelineModifiedCallbacks", PyvtkImageImport_InvokePipelineModifiedCallbacks, METH_VARARGS,
   "InvokePipelineModifiedCallbacks(self) -> int\nC++: int InvokePipelineModifiedCallbacks()\n\nInvoke the appropriate callbacks\n"},
  {"InvokeUpdateInformationCallbacks", PyvtkImageImport_InvokeUpdateInformationCallbacks, METH_VARARGS,
   "InvokeUpdateInformationCallbacks(self) -> None\nC++: void InvokeUpdateInformationCallbacks()\n\n"},
  {"InvokeExecuteInformationCallbacks", PyvtkImageImport_InvokeExecuteInformationCallbacks, METH_VARARGS,
   "InvokeExecuteInformationCallbacks(self) -> None\nC++: void InvokeExecuteInformationCallbacks()\n\n"},
  {"InvokeExecuteDataCallbacks", PyvtkImageImport_InvokeExecuteDataCallbacks, METH_VARARGS,
   "InvokeExecuteDataCallbacks(self) -> None\nC++: void InvokeExecuteDataCallbacks()\n\n"},
  {"LegacyCheckWholeExtent", PyvtkImageImport_LegacyCheckWholeExtent, METH_VARARGS,
   "LegacyCheckWholeExtent(self) -> None\nC++: void LegacyCheckWholeExtent()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageImport_Doc =
  "vtkImageImport - Import data from a C array.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageImport provides methods needed to import image data from a\n"
  "source independent of VTK, such as a simple C array or a third-party\n"
  "pipeline. Note that the VTK convention is for the image voxel index\n"
  "(0,0,0) to be the lower-left corner of the image, while most 2D image\n"
  "formats use the upper-left corner.  You can use vtkImageFlip to\n"
  "correct the orientation after the image has been loaded into VTK.\n"
  "Note that is also possible to import the raw data from a Python\n"
  "string instead of from a C array. The array applies on scalar point\n"
  "data only, not on cell data.\n"
  "@sa\n"
  "vtkImageExport\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageImport_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImage.vtkImageImport", // tp_name
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
  PyvtkImageImport_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageImport_StaticNew()
{
  return vtkImageImport::New();
}

PyObject *PyvtkImageImport_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageImport_Type, PyvtkImageImport_Methods,
    "vtkImageImport",
 &PyvtkImageImport_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageImport(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageImport_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageImport", o) != 0)
  {
    Py_DECREF(o);
  }

}

