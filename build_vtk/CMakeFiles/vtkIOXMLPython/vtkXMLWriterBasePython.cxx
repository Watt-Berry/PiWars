// python wrapper for vtkXMLWriterBase
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXMLWriterBase.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLWriterBase(PyObject *dict); }
extern "C" { PyObject *PyvtkXMLWriterBase_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXMLWriterBase_CompressorType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOXML.vtkXMLWriterBase.CompressorType", // tp_name
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
PyObject *PyvtkXMLWriterBase_CompressorType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkXMLWriterBase_CompressorType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkXMLWriterBase_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLWriterBase::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLWriterBase::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLWriterBase *tempr = vtkXMLWriterBase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLWriterBase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLWriterBase::NewInstance());

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
PyvtkXMLWriterBase_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXMLWriterBase::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXMLWriterBase::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrder(temp0);
    }
    else
    {
      op->vtkXMLWriterBase::SetByteOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_GetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetByteOrder() :
      op->vtkXMLWriterBase::GetByteOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrderToBigEndian();
    }
    else
    {
      op->vtkXMLWriterBase::SetByteOrderToBigEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrderToLittleEndian();
    }
    else
    {
      op->vtkXMLWriterBase::SetByteOrderToLittleEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetHeaderType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeaderType(temp0);
    }
    else
    {
      op->vtkXMLWriterBase::SetHeaderType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_GetHeaderType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHeaderType() :
      op->vtkXMLWriterBase::GetHeaderType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetHeaderTypeToUInt32(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderTypeToUInt32");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHeaderTypeToUInt32();
    }
    else
    {
      op->vtkXMLWriterBase::SetHeaderTypeToUInt32();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetHeaderTypeToUInt64(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderTypeToUInt64");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetHeaderTypeToUInt64();
    }
    else
    {
      op->vtkXMLWriterBase::SetHeaderTypeToUInt64();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetIdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIdType(temp0);
    }
    else
    {
      op->vtkXMLWriterBase::SetIdType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_GetIdType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIdType() :
      op->vtkXMLWriterBase::GetIdType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetIdTypeToInt32(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdTypeToInt32");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIdTypeToInt32();
    }
    else
    {
      op->vtkXMLWriterBase::SetIdTypeToInt32();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetIdTypeToInt64(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdTypeToInt64");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIdTypeToInt64();
    }
    else
    {
      op->vtkXMLWriterBase::SetIdTypeToInt64();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

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
      op->vtkXMLWriterBase::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkXMLWriterBase::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  bool temp0 = false;
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
      op->vtkXMLWriterBase::SetWriteToOutputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkXMLWriterBase::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOn();
    }
    else
    {
      op->vtkXMLWriterBase::WriteToOutputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOff();
    }
    else
    {
      op->vtkXMLWriterBase::WriteToOutputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetOutputString() :
      op->vtkXMLWriterBase::GetOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  vtkDataCompressor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataCompressor"))
  {
    if (ap.IsBound())
    {
      op->SetCompressor(temp0);
    }
    else
    {
      op->vtkXMLWriterBase::SetCompressor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_GetCompressor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataCompressor *tempr = (ap.IsBound() ?
      op->GetCompressor() :
      op->vtkXMLWriterBase::GetCompressor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetCompressorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompressorType(temp0);
    }
    else
    {
      op->vtkXMLWriterBase::SetCompressorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetCompressorTypeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressorTypeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompressorTypeToNone();
    }
    else
    {
      op->vtkXMLWriterBase::SetCompressorTypeToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetCompressorTypeToLZ4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressorTypeToLZ4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompressorTypeToLZ4();
    }
    else
    {
      op->vtkXMLWriterBase::SetCompressorTypeToLZ4();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetCompressorTypeToZLib(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressorTypeToZLib");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompressorTypeToZLib();
    }
    else
    {
      op->vtkXMLWriterBase::SetCompressorTypeToZLib();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetCompressorTypeToLZMA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressorTypeToLZMA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompressorTypeToLZMA();
    }
    else
    {
      op->vtkXMLWriterBase::SetCompressorTypeToLZMA();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompressionLevel(temp0);
    }
    else
    {
      op->vtkXMLWriterBase::SetCompressionLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_GetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevel() :
      op->vtkXMLWriterBase::GetCompressionLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlockSize(temp0);
    }
    else
    {
      op->vtkXMLWriterBase::SetBlockSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_GetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetBlockSize() :
      op->vtkXMLWriterBase::GetBlockSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetDataMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataMode(temp0);
    }
    else
    {
      op->vtkXMLWriterBase::SetDataMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_GetDataMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataMode() :
      op->vtkXMLWriterBase::GetDataMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetDataModeToAscii(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataModeToAscii");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataModeToAscii();
    }
    else
    {
      op->vtkXMLWriterBase::SetDataModeToAscii();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetDataModeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataModeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataModeToBinary();
    }
    else
    {
      op->vtkXMLWriterBase::SetDataModeToBinary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetDataModeToAppended(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataModeToAppended");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataModeToAppended();
    }
    else
    {
      op->vtkXMLWriterBase::SetDataModeToAppended();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_SetEncodeAppendedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEncodeAppendedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEncodeAppendedData(temp0);
    }
    else
    {
      op->vtkXMLWriterBase::SetEncodeAppendedData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_GetEncodeAppendedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodeAppendedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEncodeAppendedData() :
      op->vtkXMLWriterBase::GetEncodeAppendedData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_EncodeAppendedDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeAppendedDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EncodeAppendedDataOn();
    }
    else
    {
      op->vtkXMLWriterBase::EncodeAppendedDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_EncodeAppendedDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeAppendedDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EncodeAppendedDataOff();
    }
    else
    {
      op->vtkXMLWriterBase::EncodeAppendedDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetDefaultFileExtension();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLWriterBase_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLWriterBase *op = static_cast<vtkXMLWriterBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Write() :
      op->vtkXMLWriterBase::Write());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLWriterBase_Methods[] = {
  {"IsTypeOf", PyvtkXMLWriterBase_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLWriterBase_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLWriterBase_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkXMLWriterBase\nC++: static vtkXMLWriterBase *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLWriterBase_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXMLWriterBase\nC++: vtkXMLWriterBase *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXMLWriterBase_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXMLWriterBase_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetByteOrder", PyvtkXMLWriterBase_SetByteOrder, METH_VARARGS,
   "SetByteOrder(self, _arg:int) -> None\nC++: virtual void SetByteOrder(int _arg)\n\nGet/Set the byte order of data written to the file.  The default\nis the machine's hardware byte order.\n"},
  {"GetByteOrder", PyvtkXMLWriterBase_GetByteOrder, METH_VARARGS,
   "GetByteOrder(self) -> int\nC++: virtual int GetByteOrder()\n\n"},
  {"SetByteOrderToBigEndian", PyvtkXMLWriterBase_SetByteOrderToBigEndian, METH_VARARGS,
   "SetByteOrderToBigEndian(self) -> None\nC++: void SetByteOrderToBigEndian()\n\n"},
  {"SetByteOrderToLittleEndian", PyvtkXMLWriterBase_SetByteOrderToLittleEndian, METH_VARARGS,
   "SetByteOrderToLittleEndian(self) -> None\nC++: void SetByteOrderToLittleEndian()\n\n"},
  {"SetHeaderType", PyvtkXMLWriterBase_SetHeaderType, METH_VARARGS,
   "SetHeaderType(self, __a:int) -> None\nC++: virtual void SetHeaderType(int)\n\nGet/Set the binary data header word type.  The default is UInt32.\nSet to UInt64 when storing arrays requiring 64-bit indexing.\n"},
  {"GetHeaderType", PyvtkXMLWriterBase_GetHeaderType, METH_VARARGS,
   "GetHeaderType(self) -> int\nC++: virtual int GetHeaderType()\n\n"},
  {"SetHeaderTypeToUInt32", PyvtkXMLWriterBase_SetHeaderTypeToUInt32, METH_VARARGS,
   "SetHeaderTypeToUInt32(self) -> None\nC++: void SetHeaderTypeToUInt32()\n\n"},
  {"SetHeaderTypeToUInt64", PyvtkXMLWriterBase_SetHeaderTypeToUInt64, METH_VARARGS,
   "SetHeaderTypeToUInt64(self) -> None\nC++: void SetHeaderTypeToUInt64()\n\n"},
  {"SetIdType", PyvtkXMLWriterBase_SetIdType, METH_VARARGS,
   "SetIdType(self, __a:int) -> None\nC++: virtual void SetIdType(int)\n\nGet/Set the size of the vtkIdType values stored in the file.  The\ndefault is the real size of vtkIdType.\n"},
  {"GetIdType", PyvtkXMLWriterBase_GetIdType, METH_VARARGS,
   "GetIdType(self) -> int\nC++: virtual int GetIdType()\n\n"},
  {"SetIdTypeToInt32", PyvtkXMLWriterBase_SetIdTypeToInt32, METH_VARARGS,
   "SetIdTypeToInt32(self) -> None\nC++: void SetIdTypeToInt32()\n\n"},
  {"SetIdTypeToInt64", PyvtkXMLWriterBase_SetIdTypeToInt64, METH_VARARGS,
   "SetIdTypeToInt64(self) -> None\nC++: void SetIdTypeToInt64()\n\n"},
  {"SetFileName", PyvtkXMLWriterBase_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nGet/Set the name of the output file.\n"},
  {"GetFileName", PyvtkXMLWriterBase_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetWriteToOutputString", PyvtkXMLWriterBase_SetWriteToOutputString, METH_VARARGS,
   "SetWriteToOutputString(self, _arg:bool) -> None\nC++: virtual void SetWriteToOutputString(bool _arg)\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"GetWriteToOutputString", PyvtkXMLWriterBase_GetWriteToOutputString, METH_VARARGS,
   "GetWriteToOutputString(self) -> bool\nC++: virtual bool GetWriteToOutputString()\n\n"},
  {"WriteToOutputStringOn", PyvtkXMLWriterBase_WriteToOutputStringOn, METH_VARARGS,
   "WriteToOutputStringOn(self) -> None\nC++: virtual void WriteToOutputStringOn()\n\n"},
  {"WriteToOutputStringOff", PyvtkXMLWriterBase_WriteToOutputStringOff, METH_VARARGS,
   "WriteToOutputStringOff(self) -> None\nC++: virtual void WriteToOutputStringOff()\n\n"},
  {"GetOutputString", PyvtkXMLWriterBase_GetOutputString, METH_VARARGS,
   "GetOutputString(self) -> str\nC++: std::string GetOutputString()\n\n"},
  {"SetCompressor", PyvtkXMLWriterBase_SetCompressor, METH_VARARGS,
   "SetCompressor(self, __a:vtkDataCompressor) -> None\nC++: virtual void SetCompressor(vtkDataCompressor *)\n\nGet/Set the compressor used to compress binary and appended data\nbefore writing to the file.  Default is a vtkZLibDataCompressor.\n"},
  {"GetCompressor", PyvtkXMLWriterBase_GetCompressor, METH_VARARGS,
   "GetCompressor(self) -> vtkDataCompressor\nC++: virtual vtkDataCompressor *GetCompressor()\n\n"},
  {"SetCompressorType", PyvtkXMLWriterBase_SetCompressorType, METH_VARARGS,
   "SetCompressorType(self, compressorType:int) -> None\nC++: void SetCompressorType(int compressorType)\n\nConvenience functions to set the compressor to certain known\ntypes.\n"},
  {"SetCompressorTypeToNone", PyvtkXMLWriterBase_SetCompressorTypeToNone, METH_VARARGS,
   "SetCompressorTypeToNone(self) -> None\nC++: void SetCompressorTypeToNone()\n\n"},
  {"SetCompressorTypeToLZ4", PyvtkXMLWriterBase_SetCompressorTypeToLZ4, METH_VARARGS,
   "SetCompressorTypeToLZ4(self) -> None\nC++: void SetCompressorTypeToLZ4()\n\n"},
  {"SetCompressorTypeToZLib", PyvtkXMLWriterBase_SetCompressorTypeToZLib, METH_VARARGS,
   "SetCompressorTypeToZLib(self) -> None\nC++: void SetCompressorTypeToZLib()\n\n"},
  {"SetCompressorTypeToLZMA", PyvtkXMLWriterBase_SetCompressorTypeToLZMA, METH_VARARGS,
   "SetCompressorTypeToLZMA(self) -> None\nC++: void SetCompressorTypeToLZMA()\n\n"},
  {"SetCompressionLevel", PyvtkXMLWriterBase_SetCompressionLevel, METH_VARARGS,
   "SetCompressionLevel(self, compressorLevel:int) -> None\nC++: void SetCompressionLevel(int compressorLevel)\n\nGet/Set compression level. 1 (worst compression, fastest) ... 9\n(best compression, slowest).\n"},
  {"GetCompressionLevel", PyvtkXMLWriterBase_GetCompressionLevel, METH_VARARGS,
   "GetCompressionLevel(self) -> int\nC++: virtual int GetCompressionLevel()\n\n"},
  {"SetBlockSize", PyvtkXMLWriterBase_SetBlockSize, METH_VARARGS,
   "SetBlockSize(self, blockSize:int) -> None\nC++: virtual void SetBlockSize(size_t blockSize)\n\nGet/Set the block size used in compression.  When reading, this\ncontrols the granularity of how much extra information must be\nread when only part of the data are requested.  The value should\nbe a multiple of the largest scalar data type.\n"},
  {"GetBlockSize", PyvtkXMLWriterBase_GetBlockSize, METH_VARARGS,
   "GetBlockSize(self) -> int\nC++: virtual size_t GetBlockSize()\n\n"},
  {"SetDataMode", PyvtkXMLWriterBase_SetDataMode, METH_VARARGS,
   "SetDataMode(self, _arg:int) -> None\nC++: virtual void SetDataMode(int _arg)\n\nGet/Set the data mode used for the file's data.  The options are\nvtkXMLWriter::Ascii, vtkXMLWriter::Binary, and\nvtkXMLWriter::Appended.\n"},
  {"GetDataMode", PyvtkXMLWriterBase_GetDataMode, METH_VARARGS,
   "GetDataMode(self) -> int\nC++: virtual int GetDataMode()\n\n"},
  {"SetDataModeToAscii", PyvtkXMLWriterBase_SetDataModeToAscii, METH_VARARGS,
   "SetDataModeToAscii(self) -> None\nC++: void SetDataModeToAscii()\n\n"},
  {"SetDataModeToBinary", PyvtkXMLWriterBase_SetDataModeToBinary, METH_VARARGS,
   "SetDataModeToBinary(self) -> None\nC++: void SetDataModeToBinary()\n\n"},
  {"SetDataModeToAppended", PyvtkXMLWriterBase_SetDataModeToAppended, METH_VARARGS,
   "SetDataModeToAppended(self) -> None\nC++: void SetDataModeToAppended()\n\n"},
  {"SetEncodeAppendedData", PyvtkXMLWriterBase_SetEncodeAppendedData, METH_VARARGS,
   "SetEncodeAppendedData(self, _arg:bool) -> None\nC++: virtual void SetEncodeAppendedData(bool _arg)\n\nGet/Set whether the appended data section is base64 encoded.  If\nencoded, reading and writing will be slower, but the file will be\nfully valid XML and text-only.  If not encoded, the XML\nspecification will be violated, but reading and writing will be\nfast.  The default is to do the encoding.\n"},
  {"GetEncodeAppendedData", PyvtkXMLWriterBase_GetEncodeAppendedData, METH_VARARGS,
   "GetEncodeAppendedData(self) -> bool\nC++: virtual bool GetEncodeAppendedData()\n\n"},
  {"EncodeAppendedDataOn", PyvtkXMLWriterBase_EncodeAppendedDataOn, METH_VARARGS,
   "EncodeAppendedDataOn(self) -> None\nC++: virtual void EncodeAppendedDataOn()\n\n"},
  {"EncodeAppendedDataOff", PyvtkXMLWriterBase_EncodeAppendedDataOff, METH_VARARGS,
   "EncodeAppendedDataOff(self) -> None\nC++: virtual void EncodeAppendedDataOff()\n\n"},
  {"GetDefaultFileExtension", PyvtkXMLWriterBase_GetDefaultFileExtension, METH_VARARGS,
   "GetDefaultFileExtension(self) -> str\nC++: virtual const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {"Write", PyvtkXMLWriterBase_Write, METH_VARARGS,
   "Write(self) -> int\nC++: int Write()\n\nInvoke the writer.  Returns 1 for success, 0 for failure.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkXMLWriterBase_Doc =
  "vtkXMLWriterBase - Abstract base class for VTK-XML writers.\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkXMLWriterBase class was created to help refactor XML writers\n"
  "(vtkXMLWriter and subclasses). Get/Set API on vtkXMLWriter is moved\n"
  "here while all the gory implementation details are left in\n"
  "vtkXMLWriter. This enables use to create a sibling hierarchy to\n"
  "vtkXMLWriter that uses a cleaner design to implement the IO\n"
  "capabilities. Eventually, we vtkXMLWriter and its children will be\n"
  "substituted by a parallel hierarchy at which point this class may\n"
  "merge with it's new subclass.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXMLWriterBase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOXML.vtkXMLWriterBase", // tp_name
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
  PyvtkXMLWriterBase_Doc, // tp_doc
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

PyObject *PyvtkXMLWriterBase_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXMLWriterBase_Type, PyvtkXMLWriterBase_Methods,
    "vtkXMLWriterBase",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkXMLWriterBase_CompressorType_Type);
  PyVTKEnum_Add(&PyvtkXMLWriterBase_CompressorType_Type, "vtkXMLWriterBase.CompressorType");

  o = (PyObject *)&PyvtkXMLWriterBase_CompressorType_Type;
  if (PyDict_SetItemString(d, "CompressorType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "BigEndian", vtkXMLWriterBase::BigEndian },
        { "LittleEndian", vtkXMLWriterBase::LittleEndian },
        { "Ascii", vtkXMLWriterBase::Ascii },
        { "Binary", vtkXMLWriterBase::Binary },
        { "Appended", vtkXMLWriterBase::Appended },
        { "Int32", vtkXMLWriterBase::Int32 },
        { "Int64", vtkXMLWriterBase::Int64 },
        { "UInt32", vtkXMLWriterBase::UInt32 },
        { "UInt64", vtkXMLWriterBase::UInt64 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkXMLWriterBase::CompressorType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "NONE", vtkXMLWriterBase::NONE },
        { "ZLIB", vtkXMLWriterBase::ZLIB },
        { "LZ4", vtkXMLWriterBase::LZ4 },
        { "LZMA", vtkXMLWriterBase::LZMA },
      };

    o = PyvtkXMLWriterBase_CompressorType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLWriterBase(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLWriterBase_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLWriterBase", o) != 0)
  {
    Py_DECREF(o);
  }

}

