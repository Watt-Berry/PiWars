// python wrapper for vtkDataWriter
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
#include "vtkDataWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkDataWriter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataWriter_VTKFileVersion_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOLegacy.vtkDataWriter.VTKFileVersion", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkDataWriter_VTKFileVersion_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDataWriter_VTKFileVersion_Type, static_cast<int>(val));
}


static PyObject *
PyvtkDataWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataWriter *tempr = vtkDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataWriter::NewInstance());

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
PyvtkDataWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

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
      op->vtkDataWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDataWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileVersion(temp0);
    }
    else
    {
      op->vtkDataWriter::SetFileVersion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileVersion() :
      op->vtkDataWriter::GetFileVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileMajorVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileMajorVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileMajorVersion() :
      op->vtkDataWriter::GetFileMajorVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileMinorVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileMinorVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileMinorVersion() :
      op->vtkDataWriter::GetFileMinorVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteToOutputString(temp0);
    }
    else
    {
      op->vtkDataWriter::SetWriteToOutputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkDataWriter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOn();
    }
    else
    {
      op->vtkDataWriter::WriteToOutputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOff();
    }
    else
    {
      op->vtkDataWriter::WriteToOutputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetOutputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetOutputStringLength() :
      op->vtkDataWriter::GetOutputStringLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOutputString() :
      op->vtkDataWriter::GetOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetBinaryOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryOutputString() :
      op->vtkDataWriter::GetBinaryOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetOutputStdString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStdString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetOutputStdString() :
      op->vtkDataWriter::GetOutputStdString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_RegisterAndGetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterAndGetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->RegisterAndGetOutputString() :
      op->vtkDataWriter::RegisterAndGetOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeader(temp0);
    }
    else
    {
      op->vtkDataWriter::SetHeader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetHeader() :
      op->vtkDataWriter::GetHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetWriteArrayMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteArrayMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteArrayMetaData(temp0);
    }
    else
    {
      op->vtkDataWriter::SetWriteArrayMetaData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetWriteArrayMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteArrayMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteArrayMetaData() :
      op->vtkDataWriter::GetWriteArrayMetaData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_WriteArrayMetaDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteArrayMetaDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteArrayMetaDataOn();
    }
    else
    {
      op->vtkDataWriter::WriteArrayMetaDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_WriteArrayMetaDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteArrayMetaDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteArrayMetaDataOff();
    }
    else
    {
      op->vtkDataWriter::WriteArrayMetaDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileType(temp0);
    }
    else
    {
      op->vtkDataWriter::SetFileType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMinValue() :
      op->vtkDataWriter::GetFileTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMaxValue() :
      op->vtkDataWriter::GetFileTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileType() :
      op->vtkDataWriter::GetFileType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileTypeToASCII(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToASCII");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToASCII();
    }
    else
    {
      op->vtkDataWriter::SetFileTypeToASCII();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFileTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToBinary();
    }
    else
    {
      op->vtkDataWriter::SetFileTypeToBinary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarsName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetScalarsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalarsName() :
      op->vtkDataWriter::GetScalarsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetVectorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorsName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetVectorsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetVectorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVectorsName() :
      op->vtkDataWriter::GetVectorsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetTensorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTensorsName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetTensorsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetTensorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTensorsName() :
      op->vtkDataWriter::GetTensorsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalsName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetNormalsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetNormalsName() :
      op->vtkDataWriter::GetNormalsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetTCoordsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTCoordsName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetTCoordsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetTCoordsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTCoordsName() :
      op->vtkDataWriter::GetTCoordsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetGlobalIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlobalIdsName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetGlobalIdsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetGlobalIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGlobalIdsName() :
      op->vtkDataWriter::GetGlobalIdsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetPedigreeIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPedigreeIdsName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetPedigreeIdsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetPedigreeIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPedigreeIdsName() :
      op->vtkDataWriter::GetPedigreeIdsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetEdgeFlagsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeFlagsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeFlagsName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetEdgeFlagsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetEdgeFlagsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeFlagsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEdgeFlagsName() :
      op->vtkDataWriter::GetEdgeFlagsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetLookupTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLookupTableName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetLookupTableName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetLookupTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLookupTableName() :
      op->vtkDataWriter::GetLookupTableName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_SetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDataName(temp0);
    }
    else
    {
      op->vtkDataWriter::SetFieldDataName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataWriter_GetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataWriter *op = static_cast<vtkDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDataName() :
      op->vtkDataWriter::GetFieldDataName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataWriter_Methods[] = {
  {"IsTypeOf", PyvtkDataWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataWriter\nC++: static vtkDataWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataWriter\nC++: vtkDataWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkDataWriter_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify the file name of VTK data file to write.\n"},
  {"GetFileName", PyvtkDataWriter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetFileVersion", PyvtkDataWriter_SetFileVersion, METH_VARARGS,
   "SetFileVersion(self, __a:int) -> None\nC++: void SetFileVersion(int)\n\nSpecify the VTK file version to write. See the enum documentation\nabove (VTKFileVersion) for additional information about supported\nversions. It is possible to get the file major and minor versions\nseparately.  See also vtkDataReader for related methods. (Note,\nthe parsing of the FileVersion into major and minor version is as\nfollows: the least significant digit is the minor version; the\nremaining digits are the major version.\n"},
  {"GetFileVersion", PyvtkDataWriter_GetFileVersion, METH_VARARGS,
   "GetFileVersion(self) -> int\nC++: virtual int GetFileVersion()\n\n"},
  {"GetFileMajorVersion", PyvtkDataWriter_GetFileMajorVersion, METH_VARARGS,
   "GetFileMajorVersion(self) -> int\nC++: virtual int GetFileMajorVersion()\n\n"},
  {"GetFileMinorVersion", PyvtkDataWriter_GetFileMinorVersion, METH_VARARGS,
   "GetFileMinorVersion(self) -> int\nC++: virtual int GetFileMinorVersion()\n\n"},
  {"SetWriteToOutputString", PyvtkDataWriter_SetWriteToOutputString, METH_VARARGS,
   "SetWriteToOutputString(self, _arg:int) -> None\nC++: virtual void SetWriteToOutputString(vtkTypeBool _arg)\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"GetWriteToOutputString", PyvtkDataWriter_GetWriteToOutputString, METH_VARARGS,
   "GetWriteToOutputString(self) -> int\nC++: virtual vtkTypeBool GetWriteToOutputString()\n\n"},
  {"WriteToOutputStringOn", PyvtkDataWriter_WriteToOutputStringOn, METH_VARARGS,
   "WriteToOutputStringOn(self) -> None\nC++: virtual void WriteToOutputStringOn()\n\n"},
  {"WriteToOutputStringOff", PyvtkDataWriter_WriteToOutputStringOff, METH_VARARGS,
   "WriteToOutputStringOff(self) -> None\nC++: virtual void WriteToOutputStringOff()\n\n"},
  {"GetOutputStringLength", PyvtkDataWriter_GetOutputStringLength, METH_VARARGS,
   "GetOutputStringLength(self) -> int\nC++: virtual vtkIdType GetOutputStringLength()\n\nWhen WriteToOutputString in on, then a string is allocated,\nwritten to, and can be retrieved with these methods.  The string\nis deleted during the next call to write ...\n"},
  {"GetOutputString", PyvtkDataWriter_GetOutputString, METH_VARARGS,
   "GetOutputString(self) -> str\nC++: virtual char *GetOutputString()\n\n"},
  {"GetBinaryOutputString", PyvtkDataWriter_GetBinaryOutputString, METH_VARARGS,
   "GetBinaryOutputString(self) -> Pointer\nC++: unsigned char *GetBinaryOutputString()\n\n"},
  {"GetOutputStdString", PyvtkDataWriter_GetOutputStdString, METH_VARARGS,
   "GetOutputStdString(self) -> str\nC++: vtkStdString GetOutputStdString()\n\nWhen WriteToOutputString is on, this method returns a copy of the\noutput string in a vtkStdString.\n"},
  {"RegisterAndGetOutputString", PyvtkDataWriter_RegisterAndGetOutputString, METH_VARARGS,
   "RegisterAndGetOutputString(self) -> str\nC++: char *RegisterAndGetOutputString()\n\nThis convenience method returns the string, sets the IVAR to\nnullptr, so that the user is responsible for deleting the string.\nI am not sure what the name should be, so it may change in the\nfuture.\n"},
  {"SetHeader", PyvtkDataWriter_SetHeader, METH_VARARGS,
   "SetHeader(self, _arg:str) -> None\nC++: virtual void SetHeader(const char *_arg)\n\nSpecify the header for the VTK data file.\n"},
  {"GetHeader", PyvtkDataWriter_GetHeader, METH_VARARGS,
   "GetHeader(self) -> str\nC++: virtual char *GetHeader()\n\n"},
  {"SetWriteArrayMetaData", PyvtkDataWriter_SetWriteArrayMetaData, METH_VARARGS,
   "SetWriteArrayMetaData(self, _arg:bool) -> None\nC++: virtual void SetWriteArrayMetaData(bool _arg)\n\nIf true, vtkInformation objects attached to arrays and array\ncomponent nameswill be written to the output. The default is\ntrue.\n"},
  {"GetWriteArrayMetaData", PyvtkDataWriter_GetWriteArrayMetaData, METH_VARARGS,
   "GetWriteArrayMetaData(self) -> bool\nC++: virtual bool GetWriteArrayMetaData()\n\n"},
  {"WriteArrayMetaDataOn", PyvtkDataWriter_WriteArrayMetaDataOn, METH_VARARGS,
   "WriteArrayMetaDataOn(self) -> None\nC++: virtual void WriteArrayMetaDataOn()\n\n"},
  {"WriteArrayMetaDataOff", PyvtkDataWriter_WriteArrayMetaDataOff, METH_VARARGS,
   "WriteArrayMetaDataOff(self) -> None\nC++: virtual void WriteArrayMetaDataOff()\n\n"},
  {"SetFileType", PyvtkDataWriter_SetFileType, METH_VARARGS,
   "SetFileType(self, _arg:int) -> None\nC++: virtual void SetFileType(int _arg)\n\nSpecify the file type (ASCII or BINARY) of the VTK data file.\n"},
  {"GetFileTypeMinValue", PyvtkDataWriter_GetFileTypeMinValue, METH_VARARGS,
   "GetFileTypeMinValue(self) -> int\nC++: virtual int GetFileTypeMinValue()\n\n"},
  {"GetFileTypeMaxValue", PyvtkDataWriter_GetFileTypeMaxValue, METH_VARARGS,
   "GetFileTypeMaxValue(self) -> int\nC++: virtual int GetFileTypeMaxValue()\n\n"},
  {"GetFileType", PyvtkDataWriter_GetFileType, METH_VARARGS,
   "GetFileType(self) -> int\nC++: virtual int GetFileType()\n\n"},
  {"SetFileTypeToASCII", PyvtkDataWriter_SetFileTypeToASCII, METH_VARARGS,
   "SetFileTypeToASCII(self) -> None\nC++: void SetFileTypeToASCII()\n\n"},
  {"SetFileTypeToBinary", PyvtkDataWriter_SetFileTypeToBinary, METH_VARARGS,
   "SetFileTypeToBinary(self) -> None\nC++: void SetFileTypeToBinary()\n\n"},
  {"SetScalarsName", PyvtkDataWriter_SetScalarsName, METH_VARARGS,
   "SetScalarsName(self, _arg:str) -> None\nC++: virtual void SetScalarsName(const char *_arg)\n\nGive a name to the scalar data. If not specified, uses default\nname \"scalars\".\n"},
  {"GetScalarsName", PyvtkDataWriter_GetScalarsName, METH_VARARGS,
   "GetScalarsName(self) -> str\nC++: virtual char *GetScalarsName()\n\n"},
  {"SetVectorsName", PyvtkDataWriter_SetVectorsName, METH_VARARGS,
   "SetVectorsName(self, _arg:str) -> None\nC++: virtual void SetVectorsName(const char *_arg)\n\nGive a name to the vector data. If not specified, uses default\nname \"vectors\".\n"},
  {"GetVectorsName", PyvtkDataWriter_GetVectorsName, METH_VARARGS,
   "GetVectorsName(self) -> str\nC++: virtual char *GetVectorsName()\n\n"},
  {"SetTensorsName", PyvtkDataWriter_SetTensorsName, METH_VARARGS,
   "SetTensorsName(self, _arg:str) -> None\nC++: virtual void SetTensorsName(const char *_arg)\n\nGive a name to the tensors data. If not specified, uses default\nname \"tensors\".\n"},
  {"GetTensorsName", PyvtkDataWriter_GetTensorsName, METH_VARARGS,
   "GetTensorsName(self) -> str\nC++: virtual char *GetTensorsName()\n\n"},
  {"SetNormalsName", PyvtkDataWriter_SetNormalsName, METH_VARARGS,
   "SetNormalsName(self, _arg:str) -> None\nC++: virtual void SetNormalsName(const char *_arg)\n\nGive a name to the normals data. If not specified, uses default\nname \"normals\".\n"},
  {"GetNormalsName", PyvtkDataWriter_GetNormalsName, METH_VARARGS,
   "GetNormalsName(self) -> str\nC++: virtual char *GetNormalsName()\n\n"},
  {"SetTCoordsName", PyvtkDataWriter_SetTCoordsName, METH_VARARGS,
   "SetTCoordsName(self, _arg:str) -> None\nC++: virtual void SetTCoordsName(const char *_arg)\n\nGive a name to the texture coordinates data. If not specified,\nuses default name \"textureCoords\".\n"},
  {"GetTCoordsName", PyvtkDataWriter_GetTCoordsName, METH_VARARGS,
   "GetTCoordsName(self) -> str\nC++: virtual char *GetTCoordsName()\n\n"},
  {"SetGlobalIdsName", PyvtkDataWriter_SetGlobalIdsName, METH_VARARGS,
   "SetGlobalIdsName(self, _arg:str) -> None\nC++: virtual void SetGlobalIdsName(const char *_arg)\n\nGive a name to the global ids data. If not specified, uses\ndefault name \"global_ids\".\n"},
  {"GetGlobalIdsName", PyvtkDataWriter_GetGlobalIdsName, METH_VARARGS,
   "GetGlobalIdsName(self) -> str\nC++: virtual char *GetGlobalIdsName()\n\n"},
  {"SetPedigreeIdsName", PyvtkDataWriter_SetPedigreeIdsName, METH_VARARGS,
   "SetPedigreeIdsName(self, _arg:str) -> None\nC++: virtual void SetPedigreeIdsName(const char *_arg)\n\nGive a name to the pedigree ids data. If not specified, uses\ndefault name \"pedigree_ids\".\n"},
  {"GetPedigreeIdsName", PyvtkDataWriter_GetPedigreeIdsName, METH_VARARGS,
   "GetPedigreeIdsName(self) -> str\nC++: virtual char *GetPedigreeIdsName()\n\n"},
  {"SetEdgeFlagsName", PyvtkDataWriter_SetEdgeFlagsName, METH_VARARGS,
   "SetEdgeFlagsName(self, _arg:str) -> None\nC++: virtual void SetEdgeFlagsName(const char *_arg)\n\nGive a name to the edge flags data. If not specified, uses\ndefault name \"edge_flags\".\n"},
  {"GetEdgeFlagsName", PyvtkDataWriter_GetEdgeFlagsName, METH_VARARGS,
   "GetEdgeFlagsName(self) -> str\nC++: virtual char *GetEdgeFlagsName()\n\n"},
  {"SetLookupTableName", PyvtkDataWriter_SetLookupTableName, METH_VARARGS,
   "SetLookupTableName(self, _arg:str) -> None\nC++: virtual void SetLookupTableName(const char *_arg)\n\nGive a name to the lookup table. If not specified, uses default\nname \"lookupTable\".\n"},
  {"GetLookupTableName", PyvtkDataWriter_GetLookupTableName, METH_VARARGS,
   "GetLookupTableName(self) -> str\nC++: virtual char *GetLookupTableName()\n\n"},
  {"SetFieldDataName", PyvtkDataWriter_SetFieldDataName, METH_VARARGS,
   "SetFieldDataName(self, _arg:str) -> None\nC++: virtual void SetFieldDataName(const char *_arg)\n\nGive a name to the field data. If not specified, uses default\nname \"field\".\n"},
  {"GetFieldDataName", PyvtkDataWriter_GetFieldDataName, METH_VARARGS,
   "GetFieldDataName(self) -> str\nC++: virtual char *GetFieldDataName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataWriter_Doc =
  "vtkDataWriter - helper class for objects that write VTK data files\n\n"
  "Superclass: vtkWriter\n\n"
  "vtkDataWriter is a helper class that opens and writes the VTK header\n"
  "and point data (e.g., scalars, vectors, normals, etc.) from a vtk\n"
  "data file. See the VTK textbook and online resources for various\n"
  "formats.\n\n"
  "@sa\n"
  "vtkDataSetWriter vtkPolyDataWriter vtkStructuredGridWriter\n"
  "vtkStructuredPointsWriter vtkUnstructuredGridWriter\n"
  "vtkFieldDataWriter vtkRectilinearGridWriter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOLegacy.vtkDataWriter", // tp_name
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
  PyvtkDataWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataWriter_StaticNew()
{
  return vtkDataWriter::New();
}

PyObject *PyvtkDataWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataWriter_Type, PyvtkDataWriter_Methods,
    "vtkDataWriter",
 &PyvtkDataWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkWriter");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDataWriter_VTKFileVersion_Type);
  PyVTKEnum_Add(&PyvtkDataWriter_VTKFileVersion_Type, "vtkDataWriter.VTKFileVersion");

  o = (PyObject *)&PyvtkDataWriter_VTKFileVersion_Type;
  if (PyDict_SetItemString(d, "VTKFileVersion", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkDataWriter::VTKFileVersion cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "VTK_LEGACY_READER_VERSION_4_2", vtkDataWriter::VTK_LEGACY_READER_VERSION_4_2 },
        { "VTK_LEGACY_READER_VERSION_5_1", vtkDataWriter::VTK_LEGACY_READER_VERSION_5_1 },
      };

    o = PyvtkDataWriter_VTKFileVersion_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

