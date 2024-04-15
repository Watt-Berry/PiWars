// python wrapper for vtkDelimitedTextReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkDelimitedTextReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDelimitedTextReader(PyObject *dict); }
extern "C" { PyObject *PyvtkDelimitedTextReader_ClassNew(); }


static PyObject *
PyvtkDelimitedTextReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDelimitedTextReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDelimitedTextReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDelimitedTextReader *tempr = vtkDelimitedTextReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDelimitedTextReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDelimitedTextReader::NewInstance());

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
PyvtkDelimitedTextReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDelimitedTextReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDelimitedTextReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDelimitedTextReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

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
      op->vtkDelimitedTextReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputString() :
      op->vtkDelimitedTextReader::GetInputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetInputString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputString(temp0, temp1);
    }
    else
    {
      op->vtkDelimitedTextReader::SetInputString(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDelimitedTextReader_SetInputString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputString(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDelimitedTextReader_SetInputString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDelimitedTextReader_SetInputString_s1(self, args);
    case 1:
      return PyvtkDelimitedTextReader_SetInputString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputString");
  return nullptr;
}


static PyObject *
PyvtkDelimitedTextReader_GetInputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputStringLength() :
      op->vtkDelimitedTextReader::GetInputStringLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadFromInputString(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetReadFromInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadFromInputString() :
      op->vtkDelimitedTextReader::GetReadFromInputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_ReadFromInputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOn();
    }
    else
    {
      op->vtkDelimitedTextReader::ReadFromInputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_ReadFromInputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOff();
    }
    else
    {
      op->vtkDelimitedTextReader::ReadFromInputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUnicodeCharacterSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnicodeCharacterSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetUnicodeCharacterSet() :
      op->vtkDelimitedTextReader::GetUnicodeCharacterSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUnicodeCharacterSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnicodeCharacterSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnicodeCharacterSet(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetUnicodeCharacterSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUTF8RecordDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUTF8RecordDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUTF8RecordDelimiters(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetUTF8RecordDelimiters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUTF8RecordDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUTF8RecordDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetUTF8RecordDelimiters() :
      op->vtkDelimitedTextReader::GetUTF8RecordDelimiters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetFieldDelimiterCharacters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDelimiterCharacters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDelimiterCharacters(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetFieldDelimiterCharacters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetFieldDelimiterCharacters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDelimiterCharacters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDelimiterCharacters() :
      op->vtkDelimitedTextReader::GetFieldDelimiterCharacters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUTF8FieldDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUTF8FieldDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUTF8FieldDelimiters(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetUTF8FieldDelimiters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUTF8FieldDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUTF8FieldDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetUTF8FieldDelimiters() :
      op->vtkDelimitedTextReader::GetUTF8FieldDelimiters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetStringDelimiter() :
      op->vtkDelimitedTextReader::GetStringDelimiter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStringDelimiter(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetStringDelimiter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUTF8StringDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUTF8StringDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUTF8StringDelimiters(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetUTF8StringDelimiters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUTF8StringDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUTF8StringDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetUTF8StringDelimiters() :
      op->vtkDelimitedTextReader::GetUTF8StringDelimiters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseStringDelimiter(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetUseStringDelimiter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseStringDelimiter() :
      op->vtkDelimitedTextReader::GetUseStringDelimiter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_UseStringDelimiterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStringDelimiterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseStringDelimiterOn();
    }
    else
    {
      op->vtkDelimitedTextReader::UseStringDelimiterOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_UseStringDelimiterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseStringDelimiterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseStringDelimiterOff();
    }
    else
    {
      op->vtkDelimitedTextReader::UseStringDelimiterOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetHaveHeaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHaveHeaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHaveHeaders() :
      op->vtkDelimitedTextReader::GetHaveHeaders());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetHaveHeaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHaveHeaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHaveHeaders(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetHaveHeaders(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetMergeConsecutiveDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeConsecutiveDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeConsecutiveDelimiters(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetMergeConsecutiveDelimiters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetMergeConsecutiveDelimiters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeConsecutiveDelimiters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergeConsecutiveDelimiters() :
      op->vtkDelimitedTextReader::GetMergeConsecutiveDelimiters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_MergeConsecutiveDelimitersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeConsecutiveDelimitersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeConsecutiveDelimitersOn();
    }
    else
    {
      op->vtkDelimitedTextReader::MergeConsecutiveDelimitersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_MergeConsecutiveDelimitersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeConsecutiveDelimitersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeConsecutiveDelimitersOff();
    }
    else
    {
      op->vtkDelimitedTextReader::MergeConsecutiveDelimitersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaxRecords() :
      op->vtkDelimitedTextReader::GetMaxRecords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxRecords(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetMaxRecords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetDetectNumericColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDetectNumericColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDetectNumericColumns(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetDetectNumericColumns(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetDetectNumericColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDetectNumericColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDetectNumericColumns() :
      op->vtkDelimitedTextReader::GetDetectNumericColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_DetectNumericColumnsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetectNumericColumnsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DetectNumericColumnsOn();
    }
    else
    {
      op->vtkDelimitedTextReader::DetectNumericColumnsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_DetectNumericColumnsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetectNumericColumnsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DetectNumericColumnsOff();
    }
    else
    {
      op->vtkDelimitedTextReader::DetectNumericColumnsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetForceDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceDouble(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetForceDouble(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetForceDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceDouble() :
      op->vtkDelimitedTextReader::GetForceDouble());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_ForceDoubleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceDoubleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceDoubleOn();
    }
    else
    {
      op->vtkDelimitedTextReader::ForceDoubleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_ForceDoubleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceDoubleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceDoubleOff();
    }
    else
    {
      op->vtkDelimitedTextReader::ForceDoubleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetTrimWhitespacePriorToNumericConversion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrimWhitespacePriorToNumericConversion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTrimWhitespacePriorToNumericConversion(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetTrimWhitespacePriorToNumericConversion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetTrimWhitespacePriorToNumericConversion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrimWhitespacePriorToNumericConversion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTrimWhitespacePriorToNumericConversion() :
      op->vtkDelimitedTextReader::GetTrimWhitespacePriorToNumericConversion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_TrimWhitespacePriorToNumericConversionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TrimWhitespacePriorToNumericConversionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TrimWhitespacePriorToNumericConversionOn();
    }
    else
    {
      op->vtkDelimitedTextReader::TrimWhitespacePriorToNumericConversionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_TrimWhitespacePriorToNumericConversionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TrimWhitespacePriorToNumericConversionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TrimWhitespacePriorToNumericConversionOff();
    }
    else
    {
      op->vtkDelimitedTextReader::TrimWhitespacePriorToNumericConversionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetDefaultIntegerValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultIntegerValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultIntegerValue(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetDefaultIntegerValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetDefaultIntegerValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultIntegerValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultIntegerValue() :
      op->vtkDelimitedTextReader::GetDefaultIntegerValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetDefaultDoubleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultDoubleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultDoubleValue(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetDefaultDoubleValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetDefaultDoubleValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultDoubleValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDefaultDoubleValue() :
      op->vtkDelimitedTextReader::GetDefaultDoubleValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPedigreeIdArrayName(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetPedigreeIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPedigreeIdArrayName() :
      op->vtkDelimitedTextReader::GetPedigreeIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePedigreeIds(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetGeneratePedigreeIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePedigreeIds() :
      op->vtkDelimitedTextReader::GetGeneratePedigreeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GeneratePedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePedigreeIdsOn();
    }
    else
    {
      op->vtkDelimitedTextReader::GeneratePedigreeIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GeneratePedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePedigreeIdsOff();
    }
    else
    {
      op->vtkDelimitedTextReader::GeneratePedigreeIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetOutputPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPedigreeIds(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetOutputPedigreeIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetOutputPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOutputPedigreeIds() :
      op->vtkDelimitedTextReader::GetOutputPedigreeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_OutputPedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputPedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputPedigreeIdsOn();
    }
    else
    {
      op->vtkDelimitedTextReader::OutputPedigreeIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_OutputPedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputPedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputPedigreeIdsOff();
    }
    else
    {
      op->vtkDelimitedTextReader::OutputPedigreeIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetAddTabFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddTabFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddTabFieldDelimiter(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetAddTabFieldDelimiter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetAddTabFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddTabFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAddTabFieldDelimiter() :
      op->vtkDelimitedTextReader::GetAddTabFieldDelimiter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_AddTabFieldDelimiterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTabFieldDelimiterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddTabFieldDelimiterOn();
    }
    else
    {
      op->vtkDelimitedTextReader::AddTabFieldDelimiterOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_AddTabFieldDelimiterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTabFieldDelimiterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddTabFieldDelimiterOff();
    }
    else
    {
      op->vtkDelimitedTextReader::AddTabFieldDelimiterOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetLastError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetLastError() :
      op->vtkDelimitedTextReader::GetLastError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_SetReplacementCharacter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplacementCharacter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplacementCharacter(temp0);
    }
    else
    {
      op->vtkDelimitedTextReader::SetReplacementCharacter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextReader_GetReplacementCharacter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementCharacter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextReader *op = static_cast<vtkDelimitedTextReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetReplacementCharacter() :
      op->vtkDelimitedTextReader::GetReplacementCharacter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDelimitedTextReader_Methods[] = {
  {"IsTypeOf", PyvtkDelimitedTextReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDelimitedTextReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDelimitedTextReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDelimitedTextReader\nC++: static vtkDelimitedTextReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDelimitedTextReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDelimitedTextReader\nC++: vtkDelimitedTextReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDelimitedTextReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDelimitedTextReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetFileName", PyvtkDelimitedTextReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\nSpecifies the delimited text file to be loaded.\n"},
  {"SetFileName", PyvtkDelimitedTextReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\n"},
  {"GetInputString", PyvtkDelimitedTextReader_GetInputString, METH_VARARGS,
   "GetInputString(self) -> str\nC++: virtual char *GetInputString()\n\n"},
  {"SetInputString", PyvtkDelimitedTextReader_SetInputString, METH_VARARGS,
   "SetInputString(self, in_:str, len:int) -> None\nC++: void SetInputString(const char *in, int len)\nSetInputString(self, input:str) -> None\nC++: void SetInputString(const vtkStdString &input)\n\n"},
  {"GetInputStringLength", PyvtkDelimitedTextReader_GetInputStringLength, METH_VARARGS,
   "GetInputStringLength(self) -> int\nC++: virtual int GetInputStringLength()\n\n"},
  {"SetReadFromInputString", PyvtkDelimitedTextReader_SetReadFromInputString, METH_VARARGS,
   "SetReadFromInputString(self, _arg:int) -> None\nC++: virtual void SetReadFromInputString(vtkTypeBool _arg)\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {"GetReadFromInputString", PyvtkDelimitedTextReader_GetReadFromInputString, METH_VARARGS,
   "GetReadFromInputString(self) -> int\nC++: virtual vtkTypeBool GetReadFromInputString()\n\n"},
  {"ReadFromInputStringOn", PyvtkDelimitedTextReader_ReadFromInputStringOn, METH_VARARGS,
   "ReadFromInputStringOn(self) -> None\nC++: virtual void ReadFromInputStringOn()\n\n"},
  {"ReadFromInputStringOff", PyvtkDelimitedTextReader_ReadFromInputStringOff, METH_VARARGS,
   "ReadFromInputStringOff(self) -> None\nC++: virtual void ReadFromInputStringOff()\n\n"},
  {"GetUnicodeCharacterSet", PyvtkDelimitedTextReader_GetUnicodeCharacterSet, METH_VARARGS,
   "GetUnicodeCharacterSet(self) -> str\nC++: virtual char *GetUnicodeCharacterSet()\n\nSpecifies the character set used in the input file.  Valid\ncharacter set names will be drawn from the list maintained by the\nInternet Assigned Name Authority at\n\n* http://www.iana.org/assignments/character-sets\n\n* Where multiple aliases are provided for a character set, the\n  preferred MIME name\n* will be used.  vtkUnicodeDelimitedTextReader currently supports\n\"US-ASCII\", \"UTF-8\",\n* \"UTF-16\", \"UTF-16BE\", and \"UTF-16LE\" character sets.\n"},
  {"SetUnicodeCharacterSet", PyvtkDelimitedTextReader_SetUnicodeCharacterSet, METH_VARARGS,
   "SetUnicodeCharacterSet(self, _arg:str) -> None\nC++: virtual void SetUnicodeCharacterSet(const char *_arg)\n\n"},
  {"SetUTF8RecordDelimiters", PyvtkDelimitedTextReader_SetUTF8RecordDelimiters, METH_VARARGS,
   "SetUTF8RecordDelimiters(self, delimiters:str) -> None\nC++: void SetUTF8RecordDelimiters(const char *delimiters)\n\nSpecify the character(s) that will be used to separate records.\nThe order of characters in the string does not matter.  Defaults\nto \"\\r\\n\".\n"},
  {"GetUTF8RecordDelimiters", PyvtkDelimitedTextReader_GetUTF8RecordDelimiters, METH_VARARGS,
   "GetUTF8RecordDelimiters(self) -> str\nC++: const char *GetUTF8RecordDelimiters()\n\n"},
  {"SetFieldDelimiterCharacters", PyvtkDelimitedTextReader_SetFieldDelimiterCharacters, METH_VARARGS,
   "SetFieldDelimiterCharacters(self, _arg:str) -> None\nC++: virtual void SetFieldDelimiterCharacters(const char *_arg)\n\nSpecify the character(s) that will be used to separate fields. \nFor example, set this to \",\" for a comma-separated value file. \nSet it to \".:;\" for a file where columns can be separated by a\nperiod, colon or semicolon.  The order of the characters in the\nstring does not matter.  Defaults to a comma.\n"},
  {"GetFieldDelimiterCharacters", PyvtkDelimitedTextReader_GetFieldDelimiterCharacters, METH_VARARGS,
   "GetFieldDelimiterCharacters(self) -> str\nC++: virtual char *GetFieldDelimiterCharacters()\n\n"},
  {"SetUTF8FieldDelimiters", PyvtkDelimitedTextReader_SetUTF8FieldDelimiters, METH_VARARGS,
   "SetUTF8FieldDelimiters(self, delimiters:str) -> None\nC++: void SetUTF8FieldDelimiters(const char *delimiters)\n\n"},
  {"GetUTF8FieldDelimiters", PyvtkDelimitedTextReader_GetUTF8FieldDelimiters, METH_VARARGS,
   "GetUTF8FieldDelimiters(self) -> str\nC++: const char *GetUTF8FieldDelimiters()\n\n"},
  {"GetStringDelimiter", PyvtkDelimitedTextReader_GetStringDelimiter, METH_VARARGS,
   "GetStringDelimiter(self) -> str\nC++: virtual char GetStringDelimiter()\n\nGet/set the character that will begin and end strings.  Microsoft\nExcel, for example, will export the following format:\n\n* \"First Field\",\"Second Field\",\"Field, With, Commas\",\"Fourth\n  Field\"\n\n* The third field has a comma in it.  By using a string\n  delimiter,\n* this will be correctly read.  The delimiter defaults to '\"'.\n"},
  {"SetStringDelimiter", PyvtkDelimitedTextReader_SetStringDelimiter, METH_VARARGS,
   "SetStringDelimiter(self, _arg:str) -> None\nC++: virtual void SetStringDelimiter(char _arg)\n\n"},
  {"SetUTF8StringDelimiters", PyvtkDelimitedTextReader_SetUTF8StringDelimiters, METH_VARARGS,
   "SetUTF8StringDelimiters(self, delimiters:str) -> None\nC++: void SetUTF8StringDelimiters(const char *delimiters)\n\n"},
  {"GetUTF8StringDelimiters", PyvtkDelimitedTextReader_GetUTF8StringDelimiters, METH_VARARGS,
   "GetUTF8StringDelimiters(self) -> str\nC++: const char *GetUTF8StringDelimiters()\n\n"},
  {"SetUseStringDelimiter", PyvtkDelimitedTextReader_SetUseStringDelimiter, METH_VARARGS,
   "SetUseStringDelimiter(self, _arg:bool) -> None\nC++: virtual void SetUseStringDelimiter(bool _arg)\n\nSet/get whether to use the string delimiter.  Defaults to on.\n"},
  {"GetUseStringDelimiter", PyvtkDelimitedTextReader_GetUseStringDelimiter, METH_VARARGS,
   "GetUseStringDelimiter(self) -> bool\nC++: virtual bool GetUseStringDelimiter()\n\n"},
  {"UseStringDelimiterOn", PyvtkDelimitedTextReader_UseStringDelimiterOn, METH_VARARGS,
   "UseStringDelimiterOn(self) -> None\nC++: virtual void UseStringDelimiterOn()\n\n"},
  {"UseStringDelimiterOff", PyvtkDelimitedTextReader_UseStringDelimiterOff, METH_VARARGS,
   "UseStringDelimiterOff(self) -> None\nC++: virtual void UseStringDelimiterOff()\n\n"},
  {"GetHaveHeaders", PyvtkDelimitedTextReader_GetHaveHeaders, METH_VARARGS,
   "GetHaveHeaders(self) -> bool\nC++: virtual bool GetHaveHeaders()\n\nSet/get whether to treat the first line of the file as headers.\nThe default is false (no headers).\n"},
  {"SetHaveHeaders", PyvtkDelimitedTextReader_SetHaveHeaders, METH_VARARGS,
   "SetHaveHeaders(self, _arg:bool) -> None\nC++: virtual void SetHaveHeaders(bool _arg)\n\n"},
  {"SetMergeConsecutiveDelimiters", PyvtkDelimitedTextReader_SetMergeConsecutiveDelimiters, METH_VARARGS,
   "SetMergeConsecutiveDelimiters(self, _arg:bool) -> None\nC++: virtual void SetMergeConsecutiveDelimiters(bool _arg)\n\nSet/get whether to merge successive delimiters.  Use this if (for\nexample) your fields are separated by spaces but you don't know\nexactly how many.\n"},
  {"GetMergeConsecutiveDelimiters", PyvtkDelimitedTextReader_GetMergeConsecutiveDelimiters, METH_VARARGS,
   "GetMergeConsecutiveDelimiters(self) -> bool\nC++: virtual bool GetMergeConsecutiveDelimiters()\n\n"},
  {"MergeConsecutiveDelimitersOn", PyvtkDelimitedTextReader_MergeConsecutiveDelimitersOn, METH_VARARGS,
   "MergeConsecutiveDelimitersOn(self) -> None\nC++: virtual void MergeConsecutiveDelimitersOn()\n\n"},
  {"MergeConsecutiveDelimitersOff", PyvtkDelimitedTextReader_MergeConsecutiveDelimitersOff, METH_VARARGS,
   "MergeConsecutiveDelimitersOff(self) -> None\nC++: virtual void MergeConsecutiveDelimitersOff()\n\n"},
  {"GetMaxRecords", PyvtkDelimitedTextReader_GetMaxRecords, METH_VARARGS,
   "GetMaxRecords(self) -> int\nC++: virtual vtkIdType GetMaxRecords()\n\nSpecifies the maximum number of records to read from the file. \nLimiting the number of records to read is useful for previewing\nthe contents of a file.\n"},
  {"SetMaxRecords", PyvtkDelimitedTextReader_SetMaxRecords, METH_VARARGS,
   "SetMaxRecords(self, _arg:int) -> None\nC++: virtual void SetMaxRecords(vtkIdType _arg)\n\n"},
  {"SetDetectNumericColumns", PyvtkDelimitedTextReader_SetDetectNumericColumns, METH_VARARGS,
   "SetDetectNumericColumns(self, _arg:bool) -> None\nC++: virtual void SetDetectNumericColumns(bool _arg)\n\nWhen set to true, the reader will detect numeric columns and\ncreate vtkDoubleArray or vtkIntArray for those instead of\nvtkStringArray. Default is off.\n"},
  {"GetDetectNumericColumns", PyvtkDelimitedTextReader_GetDetectNumericColumns, METH_VARARGS,
   "GetDetectNumericColumns(self) -> bool\nC++: virtual bool GetDetectNumericColumns()\n\n"},
  {"DetectNumericColumnsOn", PyvtkDelimitedTextReader_DetectNumericColumnsOn, METH_VARARGS,
   "DetectNumericColumnsOn(self) -> None\nC++: virtual void DetectNumericColumnsOn()\n\n"},
  {"DetectNumericColumnsOff", PyvtkDelimitedTextReader_DetectNumericColumnsOff, METH_VARARGS,
   "DetectNumericColumnsOff(self) -> None\nC++: virtual void DetectNumericColumnsOff()\n\n"},
  {"SetForceDouble", PyvtkDelimitedTextReader_SetForceDouble, METH_VARARGS,
   "SetForceDouble(self, _arg:bool) -> None\nC++: virtual void SetForceDouble(bool _arg)\n\nWhen set to true and DetectNumericColumns is also true, forces\nall numeric columns to vtkDoubleArray even if they contain only\ninteger values. Default is off.\n"},
  {"GetForceDouble", PyvtkDelimitedTextReader_GetForceDouble, METH_VARARGS,
   "GetForceDouble(self) -> bool\nC++: virtual bool GetForceDouble()\n\n"},
  {"ForceDoubleOn", PyvtkDelimitedTextReader_ForceDoubleOn, METH_VARARGS,
   "ForceDoubleOn(self) -> None\nC++: virtual void ForceDoubleOn()\n\n"},
  {"ForceDoubleOff", PyvtkDelimitedTextReader_ForceDoubleOff, METH_VARARGS,
   "ForceDoubleOff(self) -> None\nC++: virtual void ForceDoubleOff()\n\n"},
  {"SetTrimWhitespacePriorToNumericConversion", PyvtkDelimitedTextReader_SetTrimWhitespacePriorToNumericConversion, METH_VARARGS,
   "SetTrimWhitespacePriorToNumericConversion(self, _arg:bool) -> None\nC++: virtual void SetTrimWhitespacePriorToNumericConversion(\n    bool _arg)\n\nWhen DetectNumericColumns is set to true, whether to trim\nwhitespace from strings prior to conversion to a numeric. Default\nis false to preserve backward compatibility.\n\n* vtkVariant handles whitespace inconsistently, so trim it before\nwe try to\n* convert it.  For example:\n\n* vtkVariant(\"  2.0\").ToDouble() == 2.0 <-- leading whitespace is\nnot a problem\n* vtkVariant(\"  2.0  \").ToDouble() == NaN <-- trailing whitespace\nis a problem\n* vtkVariant(\"  infinity  \").ToDouble() == NaN <-- any whitespace\nis a problem\n\n* In these cases, trimming the whitespace gives us the result we\n  expect:\n* 2.0 and INF respectively.\n"},
  {"GetTrimWhitespacePriorToNumericConversion", PyvtkDelimitedTextReader_GetTrimWhitespacePriorToNumericConversion, METH_VARARGS,
   "GetTrimWhitespacePriorToNumericConversion(self) -> bool\nC++: virtual bool GetTrimWhitespacePriorToNumericConversion()\n\n"},
  {"TrimWhitespacePriorToNumericConversionOn", PyvtkDelimitedTextReader_TrimWhitespacePriorToNumericConversionOn, METH_VARARGS,
   "TrimWhitespacePriorToNumericConversionOn(self) -> None\nC++: virtual void TrimWhitespacePriorToNumericConversionOn()\n\n"},
  {"TrimWhitespacePriorToNumericConversionOff", PyvtkDelimitedTextReader_TrimWhitespacePriorToNumericConversionOff, METH_VARARGS,
   "TrimWhitespacePriorToNumericConversionOff(self) -> None\nC++: virtual void TrimWhitespacePriorToNumericConversionOff()\n\n"},
  {"SetDefaultIntegerValue", PyvtkDelimitedTextReader_SetDefaultIntegerValue, METH_VARARGS,
   "SetDefaultIntegerValue(self, _arg:int) -> None\nC++: virtual void SetDefaultIntegerValue(int _arg)\n\nWhen DetectNumericColumns is set to true, the reader use this\nvalue to populate the vtkIntArray where empty strings are found.\nDefault is 0.\n"},
  {"GetDefaultIntegerValue", PyvtkDelimitedTextReader_GetDefaultIntegerValue, METH_VARARGS,
   "GetDefaultIntegerValue(self) -> int\nC++: virtual int GetDefaultIntegerValue()\n\n"},
  {"SetDefaultDoubleValue", PyvtkDelimitedTextReader_SetDefaultDoubleValue, METH_VARARGS,
   "SetDefaultDoubleValue(self, _arg:float) -> None\nC++: virtual void SetDefaultDoubleValue(double _arg)\n\nWhen DetectNumericColumns is set to true, the reader use this\nvalue to populate the vtkDoubleArray where empty strings are\nfound. Default is 0.0\n"},
  {"GetDefaultDoubleValue", PyvtkDelimitedTextReader_GetDefaultDoubleValue, METH_VARARGS,
   "GetDefaultDoubleValue(self) -> float\nC++: virtual double GetDefaultDoubleValue()\n\n"},
  {"SetPedigreeIdArrayName", PyvtkDelimitedTextReader_SetPedigreeIdArrayName, METH_VARARGS,
   "SetPedigreeIdArrayName(self, _arg:str) -> None\nC++: virtual void SetPedigreeIdArrayName(const char *_arg)\n\nThe name of the array for generating or assigning pedigree ids\n(default \"id\").\n"},
  {"GetPedigreeIdArrayName", PyvtkDelimitedTextReader_GetPedigreeIdArrayName, METH_VARARGS,
   "GetPedigreeIdArrayName(self) -> str\nC++: virtual char *GetPedigreeIdArrayName()\n\n"},
  {"SetGeneratePedigreeIds", PyvtkDelimitedTextReader_SetGeneratePedigreeIds, METH_VARARGS,
   "SetGeneratePedigreeIds(self, _arg:bool) -> None\nC++: virtual void SetGeneratePedigreeIds(bool _arg)\n\nIf on (default), generates pedigree ids automatically. If off,\nassign one of the arrays to be the pedigree id.\n"},
  {"GetGeneratePedigreeIds", PyvtkDelimitedTextReader_GetGeneratePedigreeIds, METH_VARARGS,
   "GetGeneratePedigreeIds(self) -> bool\nC++: virtual bool GetGeneratePedigreeIds()\n\n"},
  {"GeneratePedigreeIdsOn", PyvtkDelimitedTextReader_GeneratePedigreeIdsOn, METH_VARARGS,
   "GeneratePedigreeIdsOn(self) -> None\nC++: virtual void GeneratePedigreeIdsOn()\n\n"},
  {"GeneratePedigreeIdsOff", PyvtkDelimitedTextReader_GeneratePedigreeIdsOff, METH_VARARGS,
   "GeneratePedigreeIdsOff(self) -> None\nC++: virtual void GeneratePedigreeIdsOff()\n\n"},
  {"SetOutputPedigreeIds", PyvtkDelimitedTextReader_SetOutputPedigreeIds, METH_VARARGS,
   "SetOutputPedigreeIds(self, _arg:bool) -> None\nC++: virtual void SetOutputPedigreeIds(bool _arg)\n\nIf on, assigns pedigree ids to output. Defaults to off.\n"},
  {"GetOutputPedigreeIds", PyvtkDelimitedTextReader_GetOutputPedigreeIds, METH_VARARGS,
   "GetOutputPedigreeIds(self) -> bool\nC++: virtual bool GetOutputPedigreeIds()\n\n"},
  {"OutputPedigreeIdsOn", PyvtkDelimitedTextReader_OutputPedigreeIdsOn, METH_VARARGS,
   "OutputPedigreeIdsOn(self) -> None\nC++: virtual void OutputPedigreeIdsOn()\n\n"},
  {"OutputPedigreeIdsOff", PyvtkDelimitedTextReader_OutputPedigreeIdsOff, METH_VARARGS,
   "OutputPedigreeIdsOff(self) -> None\nC++: virtual void OutputPedigreeIdsOff()\n\n"},
  {"SetAddTabFieldDelimiter", PyvtkDelimitedTextReader_SetAddTabFieldDelimiter, METH_VARARGS,
   "SetAddTabFieldDelimiter(self, _arg:bool) -> None\nC++: virtual void SetAddTabFieldDelimiter(bool _arg)\n\nIf on, also add in the tab (i.e. '\\t') character as a field\ndelimiter. We add this specially since applications may have a\nmore difficult time doing this. Defaults to off.\n"},
  {"GetAddTabFieldDelimiter", PyvtkDelimitedTextReader_GetAddTabFieldDelimiter, METH_VARARGS,
   "GetAddTabFieldDelimiter(self) -> bool\nC++: virtual bool GetAddTabFieldDelimiter()\n\n"},
  {"AddTabFieldDelimiterOn", PyvtkDelimitedTextReader_AddTabFieldDelimiterOn, METH_VARARGS,
   "AddTabFieldDelimiterOn(self) -> None\nC++: virtual void AddTabFieldDelimiterOn()\n\n"},
  {"AddTabFieldDelimiterOff", PyvtkDelimitedTextReader_AddTabFieldDelimiterOff, METH_VARARGS,
   "AddTabFieldDelimiterOff(self) -> None\nC++: virtual void AddTabFieldDelimiterOff()\n\n"},
  {"GetLastError", PyvtkDelimitedTextReader_GetLastError, METH_VARARGS,
   "GetLastError(self) -> str\nC++: vtkStdString GetLastError()\n\nReturns a human-readable description of the most recent error, if\nany. Otherwise, returns an empty string.  Note that the result is\nonly valid after calling Update().\n"},
  {"SetReplacementCharacter", PyvtkDelimitedTextReader_SetReplacementCharacter, METH_VARARGS,
   "SetReplacementCharacter(self, _arg:int) -> None\nC++: virtual void SetReplacementCharacter(vtkTypeUInt32 _arg)\n\nFallback character for use in the US-ASCII-WITH-FALLBACK\ncharacter set.  Any characters that have their 8th bit set will\nbe replaced with this code point.  Defaults to 'x'.\n"},
  {"GetReplacementCharacter", PyvtkDelimitedTextReader_GetReplacementCharacter, METH_VARARGS,
   "GetReplacementCharacter(self) -> int\nC++: virtual vtkTypeUInt32 GetReplacementCharacter()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDelimitedTextReader_Doc =
  "vtkDelimitedTextReader - reads in delimited ascii or unicode text\nfiles and outputs a vtkTable data structure.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkDelimitedTextReader is an interface for pulling in data from a\n"
  "flat, delimited ascii or unicode text file (delimiter can be any\n"
  "character).\n\n"
  "The behavior of the reader with respect to ascii or unicode input is\n"
  "controlled by the SetUnicodeCharacterSet() method.  By default\n"
  "(without calling SetUnicodeCharacterSet()), the reader will expect to\n"
  "read ascii text and will output vtkStdString columns.  Use the Set\n"
  "and Get methods to set delimiters that do not contain UTF8 in the\n"
  "name when operating the reader in default ascii mode.  If the\n"
  "SetUnicodeCharacterSet() method is called, the reader will output\n"
  "vtkStdString columns in the output table.  In addition, it is\n"
  "necessary to use the Set and Get methods that contain UTF8 in the\n"
  "name to specify delimiters when operating in unicode mode.\n\n"
  "There is also a special character set US-ASCII-WITH-FALLBACK that\n"
  "will treat the input text as ASCII no matter what.  If and when it\n"
  "encounters a character with its 8th bit set it will replace that\n"
  "character with the code point ReplacementCharacter.  You may use this\n"
  "if you have text that belongs to a code page like LATIN9 or\n"
  "ISO-8859-1 or friends: mostly ASCII but not entirely.  Eventually\n"
  "this class will acquire the ability to read gracefully text from any\n"
  "code page, making this option obsolete.\n\n"
  "This class emits ProgressEvent for every 100 lines it reads.\n\n"
  "@par Thanks: Thanks to Andy Wilson, Brian Wylie, Tim Shead, and\n"
  "Thomas Otahal from Sandia National Laboratories for implementing this\n"
  "class.\n\n"
  "@warning\n"
  "This reader assumes that the first line in the file (whether that's\n"
  "headers or the first document) contains at least as many fields as\n"
  "any other line in the file.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDelimitedTextReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOInfovis.vtkDelimitedTextReader", // tp_name
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
  PyvtkDelimitedTextReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDelimitedTextReader_StaticNew()
{
  return vtkDelimitedTextReader::New();
}

PyObject *PyvtkDelimitedTextReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDelimitedTextReader_Type, PyvtkDelimitedTextReader_Methods,
    "vtkDelimitedTextReader",
 &PyvtkDelimitedTextReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDelimitedTextReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDelimitedTextReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDelimitedTextReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

