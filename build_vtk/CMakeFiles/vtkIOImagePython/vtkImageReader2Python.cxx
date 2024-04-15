// python wrapper for vtkImageReader2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageReader2.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageReader2(PyObject *dict); }
extern "C" { PyObject *PyvtkImageReader2_ClassNew(); }


static PyObject *
PyvtkImageReader2_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageReader2::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageReader2::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageReader2 *tempr = vtkImageReader2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageReader2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageReader2::NewInstance());

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
PyvtkImageReader2_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageReader2::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageReader2::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkImageReader2::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkImageReader2::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetFileNames(temp0);
    }
    else
    {
      op->vtkImageReader2::SetFileNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetFileNames() :
      op->vtkImageReader2::GetFileNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilePrefix(temp0);
    }
    else
    {
      op->vtkImageReader2::SetFilePrefix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFilePrefix() :
      op->vtkImageReader2::GetFilePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilePattern(temp0);
    }
    else
    {
      op->vtkImageReader2::SetFilePattern(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFilePattern() :
      op->vtkImageReader2::GetFilePattern());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetMemoryBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMemoryBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetMemoryBuffer(temp0);
    }
    else
    {
      op->vtkImageReader2::SetMemoryBuffer(temp0);
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
PyvtkImageReader2_GetMemoryBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const void  *tempr = (ap.IsBound() ?
      op->GetMemoryBuffer() :
      op->vtkImageReader2::GetMemoryBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetMemoryBufferLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMemoryBufferLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMemoryBufferLength(temp0);
    }
    else
    {
      op->vtkImageReader2::SetMemoryBufferLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetMemoryBufferLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryBufferLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMemoryBufferLength() :
      op->vtkImageReader2::GetMemoryBufferLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->vtkImageReader2::SetDataScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToFloat();
    }
    else
    {
      op->vtkImageReader2::SetDataScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToDouble();
    }
    else
    {
      op->vtkImageReader2::SetDataScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToInt();
    }
    else
    {
      op->vtkImageReader2::SetDataScalarTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToUnsignedInt();
    }
    else
    {
      op->vtkImageReader2::SetDataScalarTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToShort();
    }
    else
    {
      op->vtkImageReader2::SetDataScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkImageReader2::SetDataScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToChar();
    }
    else
    {
      op->vtkImageReader2::SetDataScalarTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToSignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToSignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToSignedChar();
    }
    else
    {
      op->vtkImageReader2::SetDataScalarTypeToSignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkImageReader2::SetDataScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataScalarType() :
      op->vtkImageReader2::GetDataScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->vtkImageReader2::SetNumberOfScalarComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarComponents() :
      op->vtkImageReader2::GetNumberOfScalarComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->vtkImageReader2::SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReader2_SetDataExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->vtkImageReader2::SetDataExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReader2_SetDataExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImageReader2_SetDataExtent_s1(self, args);
    case 1:
      return PyvtkImageReader2_SetDataExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataExtent");
  return nullptr;
}


static PyObject *
PyvtkImageReader2_GetDataExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDataExtent() :
      op->vtkImageReader2::GetDataExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetFileDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileDimensionality(temp0);
    }
    else
    {
      op->vtkImageReader2::SetFileDimensionality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFileDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileDimensionality() :
      op->vtkImageReader2::GetFileDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->vtkImageReader2::SetDataSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReader2_SetDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->vtkImageReader2::SetDataSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReader2_SetDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageReader2_SetDataSpacing_s1(self, args);
    case 1:
      return PyvtkImageReader2_SetDataSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSpacing");
  return nullptr;
}


static PyObject *
PyvtkImageReader2_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataSpacing() :
      op->vtkImageReader2::GetDataSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->vtkImageReader2::SetDataOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReader2_SetDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->vtkImageReader2::SetDataOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReader2_SetDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageReader2_SetDataOrigin_s1(self, args);
    case 1:
      return PyvtkImageReader2_SetDataOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataOrigin");
  return nullptr;
}


static PyObject *
PyvtkImageReader2_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataOrigin() :
      op->vtkImageReader2::GetDataOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

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
      op->vtkImageReader2::SetDataDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetDataDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  size_t sizer = 9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataDirection() :
      op->vtkImageReader2::GetDataDirection());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetHeaderSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetHeaderSize() :
      op->vtkImageReader2::GetHeaderSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageReader2_GetHeaderSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetHeaderSize(temp0) :
      op->vtkImageReader2::GetHeaderSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageReader2_GetHeaderSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageReader2_GetHeaderSize_s1(self, args);
    case 1:
      return PyvtkImageReader2_GetHeaderSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetHeaderSize");
  return nullptr;
}


static PyObject *
PyvtkImageReader2_SetHeaderSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeaderSize(temp0);
    }
    else
    {
      op->vtkImageReader2::SetHeaderSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrderToBigEndian();
    }
    else
    {
      op->vtkImageReader2::SetDataByteOrderToBigEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrderToLittleEndian();
    }
    else
    {
      op->vtkImageReader2::SetDataByteOrderToLittleEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataByteOrder() :
      op->vtkImageReader2::GetDataByteOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrder(temp0);
    }
    else
    {
      op->vtkImageReader2::SetDataByteOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetDataByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataByteOrderAsString() :
      op->vtkImageReader2::GetDataByteOrderAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetFileNameSliceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameSliceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileNameSliceOffset(temp0);
    }
    else
    {
      op->vtkImageReader2::SetFileNameSliceOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFileNameSliceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameSliceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileNameSliceOffset() :
      op->vtkImageReader2::GetFileNameSliceOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetFileNameSliceSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameSliceSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileNameSliceSpacing(temp0);
    }
    else
    {
      op->vtkImageReader2::SetFileNameSliceSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFileNameSliceSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameSliceSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileNameSliceSpacing() :
      op->vtkImageReader2::GetFileNameSliceSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSwapBytes(temp0);
    }
    else
    {
      op->vtkImageReader2::SetSwapBytes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSwapBytes() :
      op->vtkImageReader2::GetSwapBytes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SwapBytesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwapBytesOn();
    }
    else
    {
      op->vtkImageReader2::SwapBytesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SwapBytesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwapBytesOff();
    }
    else
    {
      op->vtkImageReader2::SwapBytesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetDataIncrements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long *tempr = (ap.IsBound() ?
      op->GetDataIncrements() :
      op->vtkImageReader2::GetDataIncrements());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_OpenFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->OpenFile() :
      op->vtkImageReader2::OpenFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_CloseFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CloseFile();
    }
    else
    {
      op->vtkImageReader2::CloseFile();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SeekFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SeekFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SeekFile(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageReader2::SeekFile(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_FileLowerLeftOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FileLowerLeftOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FileLowerLeftOn();
    }
    else
    {
      op->vtkImageReader2::FileLowerLeftOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_FileLowerLeftOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FileLowerLeftOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FileLowerLeftOff();
    }
    else
    {
      op->vtkImageReader2::FileLowerLeftOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFileLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileLowerLeft() :
      op->vtkImageReader2::GetFileLowerLeft());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_SetFileLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileLowerLeft(temp0);
    }
    else
    {
      op->vtkImageReader2::SetFileLowerLeft(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_ComputeInternalFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInternalFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ComputeInternalFileName(temp0);
    }
    else
    {
      op->vtkImageReader2::ComputeInternalFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetInternalFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInternalFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInternalFileName() :
      op->vtkImageReader2::GetInternalFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkImageReader2::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkImageReader2::GetFileExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReader2_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReader2 *op = static_cast<vtkImageReader2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkImageReader2::GetDescriptiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageReader2_Methods[] = {
  {"IsTypeOf", PyvtkImageReader2_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageReader2_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageReader2_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageReader2\nC++: static vtkImageReader2 *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageReader2_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageReader2\nC++: vtkImageReader2 *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageReader2_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageReader2_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkImageReader2_SetFileName, METH_VARARGS,
   "SetFileName(self, __a:str) -> None\nC++: virtual void SetFileName(const char *)\n\nSpecify file name for the image file. If the data is stored in\nmultiple files, then use SetFileNames or SetFilePrefix instead.\n"},
  {"GetFileName", PyvtkImageReader2_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetFileNames", PyvtkImageReader2_SetFileNames, METH_VARARGS,
   "SetFileNames(self, __a:vtkStringArray) -> None\nC++: virtual void SetFileNames(vtkStringArray *)\n\nSpecify a list of file names.  Each file must be a single slice,\nand each slice must be of the same size. The files must be in the\ncorrect order. Use SetFileName when reading a volume (multiple\nslice), since DataExtent will be modified after a SetFileNames\ncall.\n"},
  {"GetFileNames", PyvtkImageReader2_GetFileNames, METH_VARARGS,
   "GetFileNames(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetFileNames()\n\n"},
  {"SetFilePrefix", PyvtkImageReader2_SetFilePrefix, METH_VARARGS,
   "SetFilePrefix(self, __a:str) -> None\nC++: virtual void SetFilePrefix(const char *)\n\nSpecify file prefix for the image file or files.  This can be\nused in place of SetFileName or SetFileNames if the filenames\nfollow a specific naming pattern, but you must explicitly set the\nDataExtent so that the reader will know what range of slices to\nload.\n"},
  {"GetFilePrefix", PyvtkImageReader2_GetFilePrefix, METH_VARARGS,
   "GetFilePrefix(self) -> str\nC++: virtual char *GetFilePrefix()\n\n"},
  {"SetFilePattern", PyvtkImageReader2_SetFilePattern, METH_VARARGS,
   "SetFilePattern(self, __a:str) -> None\nC++: virtual void SetFilePattern(const char *)\n\nThe snprintf-style format string used to build filename from\nFilePrefix and slice number.\n"},
  {"GetFilePattern", PyvtkImageReader2_GetFilePattern, METH_VARARGS,
   "GetFilePattern(self) -> str\nC++: virtual char *GetFilePattern()\n\n"},
  {"SetMemoryBuffer", PyvtkImageReader2_SetMemoryBuffer, METH_VARARGS,
   "SetMemoryBuffer(self, __a:Pointer) -> None\nC++: virtual void SetMemoryBuffer(const void *)\n\nSpecify the in memory image buffer. May be used by a reader to\nallow the reading of an image from memory instead of from file.\n"},
  {"GetMemoryBuffer", PyvtkImageReader2_GetMemoryBuffer, METH_VARARGS,
   "GetMemoryBuffer(self) -> Pointer\nC++: virtual const void *GetMemoryBuffer()\n\n"},
  {"SetMemoryBufferLength", PyvtkImageReader2_SetMemoryBufferLength, METH_VARARGS,
   "SetMemoryBufferLength(self, buflen:int) -> None\nC++: virtual void SetMemoryBufferLength(vtkIdType buflen)\n\nSpecify the in memory image buffer length.\n"},
  {"GetMemoryBufferLength", PyvtkImageReader2_GetMemoryBufferLength, METH_VARARGS,
   "GetMemoryBufferLength(self) -> int\nC++: vtkIdType GetMemoryBufferLength()\n\n"},
  {"SetDataScalarType", PyvtkImageReader2_SetDataScalarType, METH_VARARGS,
   "SetDataScalarType(self, type:int) -> None\nC++: virtual void SetDataScalarType(int type)\n\nSet the data type of pixels in the file. If you want the output\nscalar type to have a different value, set it after this method\nis called.\n"},
  {"SetDataScalarTypeToFloat", PyvtkImageReader2_SetDataScalarTypeToFloat, METH_VARARGS,
   "SetDataScalarTypeToFloat(self) -> None\nC++: virtual void SetDataScalarTypeToFloat()\n\n"},
  {"SetDataScalarTypeToDouble", PyvtkImageReader2_SetDataScalarTypeToDouble, METH_VARARGS,
   "SetDataScalarTypeToDouble(self) -> None\nC++: virtual void SetDataScalarTypeToDouble()\n\n"},
  {"SetDataScalarTypeToInt", PyvtkImageReader2_SetDataScalarTypeToInt, METH_VARARGS,
   "SetDataScalarTypeToInt(self) -> None\nC++: virtual void SetDataScalarTypeToInt()\n\n"},
  {"SetDataScalarTypeToUnsignedInt", PyvtkImageReader2_SetDataScalarTypeToUnsignedInt, METH_VARARGS,
   "SetDataScalarTypeToUnsignedInt(self) -> None\nC++: virtual void SetDataScalarTypeToUnsignedInt()\n\n"},
  {"SetDataScalarTypeToShort", PyvtkImageReader2_SetDataScalarTypeToShort, METH_VARARGS,
   "SetDataScalarTypeToShort(self) -> None\nC++: virtual void SetDataScalarTypeToShort()\n\n"},
  {"SetDataScalarTypeToUnsignedShort", PyvtkImageReader2_SetDataScalarTypeToUnsignedShort, METH_VARARGS,
   "SetDataScalarTypeToUnsignedShort(self) -> None\nC++: virtual void SetDataScalarTypeToUnsignedShort()\n\n"},
  {"SetDataScalarTypeToChar", PyvtkImageReader2_SetDataScalarTypeToChar, METH_VARARGS,
   "SetDataScalarTypeToChar(self) -> None\nC++: virtual void SetDataScalarTypeToChar()\n\n"},
  {"SetDataScalarTypeToSignedChar", PyvtkImageReader2_SetDataScalarTypeToSignedChar, METH_VARARGS,
   "SetDataScalarTypeToSignedChar(self) -> None\nC++: virtual void SetDataScalarTypeToSignedChar()\n\n"},
  {"SetDataScalarTypeToUnsignedChar", PyvtkImageReader2_SetDataScalarTypeToUnsignedChar, METH_VARARGS,
   "SetDataScalarTypeToUnsignedChar(self) -> None\nC++: virtual void SetDataScalarTypeToUnsignedChar()\n\n"},
  {"GetDataScalarType", PyvtkImageReader2_GetDataScalarType, METH_VARARGS,
   "GetDataScalarType(self) -> int\nC++: virtual int GetDataScalarType()\n\nGet the file format.  Pixels are this type in the file.\n"},
  {"SetNumberOfScalarComponents", PyvtkImageReader2_SetNumberOfScalarComponents, METH_VARARGS,
   "SetNumberOfScalarComponents(self, _arg:int) -> None\nC++: virtual void SetNumberOfScalarComponents(int _arg)\n\nSet/Get the number of scalar components\n"},
  {"GetNumberOfScalarComponents", PyvtkImageReader2_GetNumberOfScalarComponents, METH_VARARGS,
   "GetNumberOfScalarComponents(self) -> int\nC++: virtual int GetNumberOfScalarComponents()\n\n"},
  {"SetDataExtent", PyvtkImageReader2_SetDataExtent, METH_VARARGS,
   "SetDataExtent(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int,\n    _arg5:int, _arg6:int) -> None\nC++: virtual void SetDataExtent(int _arg1, int _arg2, int _arg3,\n    int _arg4, int _arg5, int _arg6)\nSetDataExtent(self, _arg:(int, int, int, int, int, int)) -> None\nC++: virtual void SetDataExtent(const int _arg[6])\n\nGet/Set the extent of the data on disk.\n"},
  {"GetDataExtent", PyvtkImageReader2_GetDataExtent, METH_VARARGS,
   "GetDataExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetDataExtent()\n\n"},
  {"SetFileDimensionality", PyvtkImageReader2_SetFileDimensionality, METH_VARARGS,
   "SetFileDimensionality(self, _arg:int) -> None\nC++: virtual void SetFileDimensionality(int _arg)\n\nThe number of dimensions stored in a file. This defaults to two.\n"},
  {"GetFileDimensionality", PyvtkImageReader2_GetFileDimensionality, METH_VARARGS,
   "GetFileDimensionality(self) -> int\nC++: int GetFileDimensionality()\n\n"},
  {"SetDataSpacing", PyvtkImageReader2_SetDataSpacing, METH_VARARGS,
   "SetDataSpacing(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetDataSpacing(double _arg1, double _arg2,\n    double _arg3)\nSetDataSpacing(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDataSpacing(const double _arg[3])\n\nSet/Get the spacing of the data in the file.\n"},
  {"GetDataSpacing", PyvtkImageReader2_GetDataSpacing, METH_VARARGS,
   "GetDataSpacing(self) -> (float, float, float)\nC++: virtual double *GetDataSpacing()\n\n"},
  {"SetDataOrigin", PyvtkImageReader2_SetDataOrigin, METH_VARARGS,
   "SetDataOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetDataOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetDataOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDataOrigin(const double _arg[3])\n\nSet/Get the origin of the data (location of first pixel in the\nfile).\n"},
  {"GetDataOrigin", PyvtkImageReader2_GetDataOrigin, METH_VARARGS,
   "GetDataOrigin(self) -> (float, float, float)\nC++: virtual double *GetDataOrigin()\n\n"},
  {"SetDataDirection", PyvtkImageReader2_SetDataDirection, METH_VARARGS,
   "SetDataDirection(self, data:(float, ...)) -> None\nC++: virtual void SetDataDirection(const double data[])\n\nSet/Get the direction of the data (9 elements: 3x3 matrix).\n"},
  {"GetDataDirection", PyvtkImageReader2_GetDataDirection, METH_VARARGS,
   "GetDataDirection(self) -> (float, float, float, float, float,\n    float, float, float, float)\nC++: virtual double *GetDataDirection()\n\n"},
  {"GetHeaderSize", PyvtkImageReader2_GetHeaderSize, METH_VARARGS,
   "GetHeaderSize(self) -> int\nC++: unsigned long GetHeaderSize()\nGetHeaderSize(self, slice:int) -> int\nC++: unsigned long GetHeaderSize(unsigned long slice)\n\nGet the size of the header computed by this object.\n"},
  {"SetHeaderSize", PyvtkImageReader2_SetHeaderSize, METH_VARARGS,
   "SetHeaderSize(self, size:int) -> None\nC++: virtual void SetHeaderSize(unsigned long size)\n\nIf there is a tail on the file, you want to explicitly set the\nheader size.\n"},
  {"SetDataByteOrderToBigEndian", PyvtkImageReader2_SetDataByteOrderToBigEndian, METH_VARARGS,
   "SetDataByteOrderToBigEndian(self) -> None\nC++: virtual void SetDataByteOrderToBigEndian()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {"SetDataByteOrderToLittleEndian", PyvtkImageReader2_SetDataByteOrderToLittleEndian, METH_VARARGS,
   "SetDataByteOrderToLittleEndian(self) -> None\nC++: virtual void SetDataByteOrderToLittleEndian()\n\n"},
  {"GetDataByteOrder", PyvtkImageReader2_GetDataByteOrder, METH_VARARGS,
   "GetDataByteOrder(self) -> int\nC++: virtual int GetDataByteOrder()\n\n"},
  {"SetDataByteOrder", PyvtkImageReader2_SetDataByteOrder, METH_VARARGS,
   "SetDataByteOrder(self, __a:int) -> None\nC++: virtual void SetDataByteOrder(int)\n\n"},
  {"GetDataByteOrderAsString", PyvtkImageReader2_GetDataByteOrderAsString, METH_VARARGS,
   "GetDataByteOrderAsString(self) -> str\nC++: virtual const char *GetDataByteOrderAsString()\n\n"},
  {"SetFileNameSliceOffset", PyvtkImageReader2_SetFileNameSliceOffset, METH_VARARGS,
   "SetFileNameSliceOffset(self, _arg:int) -> None\nC++: virtual void SetFileNameSliceOffset(int _arg)\n\nWhen reading files which start at an unusual index, this can be\nadded to the slice number when generating the file name (default\n= 0)\n"},
  {"GetFileNameSliceOffset", PyvtkImageReader2_GetFileNameSliceOffset, METH_VARARGS,
   "GetFileNameSliceOffset(self) -> int\nC++: virtual int GetFileNameSliceOffset()\n\n"},
  {"SetFileNameSliceSpacing", PyvtkImageReader2_SetFileNameSliceSpacing, METH_VARARGS,
   "SetFileNameSliceSpacing(self, _arg:int) -> None\nC++: virtual void SetFileNameSliceSpacing(int _arg)\n\nWhen reading files which have regular, but non contiguous slices\n(eg filename.1,filename.3,filename.5) a spacing can be specified\nto skip missing files (default = 1)\n"},
  {"GetFileNameSliceSpacing", PyvtkImageReader2_GetFileNameSliceSpacing, METH_VARARGS,
   "GetFileNameSliceSpacing(self) -> int\nC++: virtual int GetFileNameSliceSpacing()\n\n"},
  {"SetSwapBytes", PyvtkImageReader2_SetSwapBytes, METH_VARARGS,
   "SetSwapBytes(self, _arg:int) -> None\nC++: virtual void SetSwapBytes(vtkTypeBool _arg)\n\nSet/Get the byte swapping to explicitly swap the bytes of a file.\n"},
  {"GetSwapBytes", PyvtkImageReader2_GetSwapBytes, METH_VARARGS,
   "GetSwapBytes(self) -> int\nC++: virtual vtkTypeBool GetSwapBytes()\n\n"},
  {"SwapBytesOn", PyvtkImageReader2_SwapBytesOn, METH_VARARGS,
   "SwapBytesOn(self) -> None\nC++: virtual void SwapBytesOn()\n\n"},
  {"SwapBytesOff", PyvtkImageReader2_SwapBytesOff, METH_VARARGS,
   "SwapBytesOff(self) -> None\nC++: virtual void SwapBytesOff()\n\n"},
  {"GetDataIncrements", PyvtkImageReader2_GetDataIncrements, METH_VARARGS,
   "GetDataIncrements(self) -> (int, int, int, int)\nC++: virtual unsigned long *GetDataIncrements()\n\n"},
  {"OpenFile", PyvtkImageReader2_OpenFile, METH_VARARGS,
   "OpenFile(self) -> int\nC++: virtual int OpenFile()\n\n"},
  {"CloseFile", PyvtkImageReader2_CloseFile, METH_VARARGS,
   "CloseFile(self) -> None\nC++: void CloseFile()\n\n"},
  {"SeekFile", PyvtkImageReader2_SeekFile, METH_VARARGS,
   "SeekFile(self, i:int, j:int, k:int) -> None\nC++: virtual void SeekFile(int i, int j, int k)\n\n"},
  {"FileLowerLeftOn", PyvtkImageReader2_FileLowerLeftOn, METH_VARARGS,
   "FileLowerLeftOn(self) -> None\nC++: virtual void FileLowerLeftOn()\n\nSet/Get whether the data comes from the file starting in the\nlower left corner or upper left corner.\n"},
  {"FileLowerLeftOff", PyvtkImageReader2_FileLowerLeftOff, METH_VARARGS,
   "FileLowerLeftOff(self) -> None\nC++: virtual void FileLowerLeftOff()\n\n"},
  {"GetFileLowerLeft", PyvtkImageReader2_GetFileLowerLeft, METH_VARARGS,
   "GetFileLowerLeft(self) -> int\nC++: virtual vtkTypeBool GetFileLowerLeft()\n\n"},
  {"SetFileLowerLeft", PyvtkImageReader2_SetFileLowerLeft, METH_VARARGS,
   "SetFileLowerLeft(self, _arg:int) -> None\nC++: virtual void SetFileLowerLeft(vtkTypeBool _arg)\n\n"},
  {"ComputeInternalFileName", PyvtkImageReader2_ComputeInternalFileName, METH_VARARGS,
   "ComputeInternalFileName(self, slice:int) -> None\nC++: virtual void ComputeInternalFileName(int slice)\n\nSet/Get the internal file name\n"},
  {"GetInternalFileName", PyvtkImageReader2_GetInternalFileName, METH_VARARGS,
   "GetInternalFileName(self) -> str\nC++: virtual char *GetInternalFileName()\n\n"},
  {"CanReadFile", PyvtkImageReader2_CanReadFile, METH_VARARGS,
   "CanReadFile(self, fname:str) -> int\nC++: virtual int CanReadFile(const char *fname)\n\nReturn non zero if the reader can read the given file name.\nShould be implemented by all sub-classes of vtkImageReader2. For\nnon zero return values the following values are to be used 1 - I\nthink I can read the file but I cannot prove it 2 - I definitely\ncan read the file 3 - I can read the file and I have validated\nthat I am the correct reader for this file\n"},
  {"GetFileExtensions", PyvtkImageReader2_GetFileExtensions, METH_VARARGS,
   "GetFileExtensions(self) -> str\nC++: virtual const char *GetFileExtensions()\n\nGet the file extensions for this format. Returns a string with a\nspace separated list of extensions in the format .extension\n"},
  {"GetDescriptiveName", PyvtkImageReader2_GetDescriptiveName, METH_VARARGS,
   "GetDescriptiveName(self) -> str\nC++: virtual const char *GetDescriptiveName()\n\nReturn a descriptive name for the file format that might be\nuseful in a GUI.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageReader2_Doc =
  "vtkImageReader2 - Superclass of binary file readers.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageReader2 is a parent class for many VTK image readers. It was\n"
  "written to simplify the interface of vtkImageReader. It can also be\n"
  "used directly to read data without headers (raw). It is a good super\n"
  "class for streaming readers that do not require a mask or transform\n"
  "on the data. An example of reading a raw file is shown\n"
  "below:vtkSmartPointer<vtkImageReader2> reader =\n"
  "  vtkSmartPointer<vtkImageReader2>::New();\n"
  "reader->SetFilePrefix(argv[1]);\n"
  "reader->SetDataExtent(0, 63, 0, 63, 1, 93);\n"
  "reader->SetDataSpacing(3.2, 3.2, 1.5);\n"
  "reader->SetDataOrigin(0.0, 0.0, 0.0);\n"
  "reader->SetDataScalarTypeToUnsignedShort();\n"
  "reader->SetDataByteOrderToLittleEndian();\n"
  "reader->UpdateWholeExtent();\n\n"
  "@sa\n"
  "vtkJPEGReader vtkPNGReader vtkImageReader vtkGESignaReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageReader2_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImage.vtkImageReader2", // tp_name
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
  PyvtkImageReader2_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageReader2_StaticNew()
{
  return vtkImageReader2::New();
}

PyObject *PyvtkImageReader2_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageReader2_Type, PyvtkImageReader2_Methods,
    "vtkImageReader2",
 &PyvtkImageReader2_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageReader2(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageReader2_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageReader2", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_FILE_BYTE_ORDER_BIG_ENDIAN", 0 },
        { "VTK_FILE_BYTE_ORDER_LITTLE_ENDIAN", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

