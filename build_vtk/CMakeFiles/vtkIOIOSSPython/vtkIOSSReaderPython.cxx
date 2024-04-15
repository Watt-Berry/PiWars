// python wrapper for vtkIOSSReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkIOSSReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIOSSReader(PyObject *dict); }
extern "C" { PyObject *PyvtkIOSSReader_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkIOSSReader_EntityType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOIOSS.vtkIOSSReader.EntityType", // tp_name
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
PyObject *PyvtkIOSSReader_EntityType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkIOSSReader_EntityType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkIOSSReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIOSSReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIOSSReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIOSSReader *tempr = vtkIOSSReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIOSSReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIOSSReader::NewInstance());

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
PyvtkIOSSReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkIOSSReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkIOSSReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_AddFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->AddFileName(temp0);
    }
    else
    {
      op->vtkIOSSReader::AddFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ClearFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearFileNames();
    }
    else
    {
      op->vtkIOSSReader::ClearFileNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName(temp0) :
      op->vtkIOSSReader::GetFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetNumberOfFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFileNames() :
      op->vtkIOSSReader::GetNumberOfFileNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

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
      op->vtkIOSSReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetDatabaseTypeOverride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDatabaseTypeOverride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDatabaseTypeOverride(temp0);
    }
    else
    {
      op->vtkIOSSReader::SetDatabaseTypeOverride(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetDatabaseTypeOverride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDatabaseTypeOverride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDatabaseTypeOverride() :
      op->vtkIOSSReader::GetDatabaseTypeOverride());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetDisplacementMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementMagnitude(temp0);
    }
    else
    {
      op->vtkIOSSReader::SetDisplacementMagnitude(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetDisplacementMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementMagnitude() :
      op->vtkIOSSReader::GetDisplacementMagnitude());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetGroupNumericVectorFieldComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGroupNumericVectorFieldComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGroupNumericVectorFieldComponents(temp0);
    }
    else
    {
      op->vtkIOSSReader::SetGroupNumericVectorFieldComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetGroupNumericVectorFieldComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroupNumericVectorFieldComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGroupNumericVectorFieldComponents() :
      op->vtkIOSSReader::GetGroupNumericVectorFieldComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetFieldSuffixSeparator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldSuffixSeparator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldSuffixSeparator(temp0);
    }
    else
    {
      op->vtkIOSSReader::SetFieldSuffixSeparator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetFieldSuffixSeparator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldSuffixSeparator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFieldSuffixSeparator() :
      op->vtkIOSSReader::GetFieldSuffixSeparator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetScanForRelatedFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScanForRelatedFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScanForRelatedFiles(temp0);
    }
    else
    {
      op->vtkIOSSReader::SetScanForRelatedFiles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetScanForRelatedFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScanForRelatedFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScanForRelatedFiles() :
      op->vtkIOSSReader::GetScanForRelatedFiles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ScanForRelatedFilesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScanForRelatedFilesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScanForRelatedFilesOn();
    }
    else
    {
      op->vtkIOSSReader::ScanForRelatedFilesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ScanForRelatedFilesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScanForRelatedFilesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScanForRelatedFilesOff();
    }
    else
    {
      op->vtkIOSSReader::ScanForRelatedFilesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetFileRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFileRange(temp0, temp1);
    }
    else
    {
      op->vtkIOSSReader::SetFileRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIOSSReader_SetFileRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetFileRange(temp0);
    }
    else
    {
      op->vtkIOSSReader::SetFileRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIOSSReader_SetFileRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkIOSSReader_SetFileRange_s1(self, args);
    case 1:
      return PyvtkIOSSReader_SetFileRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFileRange");
  return nullptr;
}


static PyObject *
PyvtkIOSSReader_GetFileRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetFileRange() :
      op->vtkIOSSReader::GetFileRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetFileStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileStride(temp0);
    }
    else
    {
      op->vtkIOSSReader::SetFileStride(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetFileStrideMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileStrideMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileStrideMinValue() :
      op->vtkIOSSReader::GetFileStrideMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetFileStrideMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileStrideMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileStrideMaxValue() :
      op->vtkIOSSReader::GetFileStrideMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetFileStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileStride() :
      op->vtkIOSSReader::GetFileStride());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetMergeExodusEntityBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeExodusEntityBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeExodusEntityBlocks(temp0);
    }
    else
    {
      op->vtkIOSSReader::SetMergeExodusEntityBlocks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetMergeExodusEntityBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeExodusEntityBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergeExodusEntityBlocks() :
      op->vtkIOSSReader::GetMergeExodusEntityBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_MergeExodusEntityBlocksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeExodusEntityBlocksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeExodusEntityBlocksOn();
    }
    else
    {
      op->vtkIOSSReader::MergeExodusEntityBlocksOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_MergeExodusEntityBlocksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeExodusEntityBlocksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeExodusEntityBlocksOff();
    }
    else
    {
      op->vtkIOSSReader::MergeExodusEntityBlocksOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetGenerateFileId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFileId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateFileId(temp0);
    }
    else
    {
      op->vtkIOSSReader::SetGenerateFileId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetGenerateFileId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFileId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateFileId() :
      op->vtkIOSSReader::GetGenerateFileId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GenerateFileIdOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFileIdOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFileIdOn();
    }
    else
    {
      op->vtkIOSSReader::GenerateFileIdOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GenerateFileIdOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFileIdOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFileIdOff();
    }
    else
    {
      op->vtkIOSSReader::GenerateFileIdOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetReadIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadIds(temp0);
    }
    else
    {
      op->vtkIOSSReader::SetReadIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetReadIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReadIds() :
      op->vtkIOSSReader::GetReadIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ReadIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadIdsOn();
    }
    else
    {
      op->vtkIOSSReader::ReadIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ReadIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadIdsOff();
    }
    else
    {
      op->vtkIOSSReader::ReadIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetRemoveUnusedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveUnusedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

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
      op->vtkIOSSReader::SetRemoveUnusedPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetRemoveUnusedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveUnusedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveUnusedPoints() :
      op->vtkIOSSReader::GetRemoveUnusedPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_RemoveUnusedPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUnusedPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveUnusedPointsOn();
    }
    else
    {
      op->vtkIOSSReader::RemoveUnusedPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_RemoveUnusedPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUnusedPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveUnusedPointsOff();
    }
    else
    {
      op->vtkIOSSReader::RemoveUnusedPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetApplyDisplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetApplyDisplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetApplyDisplacements(temp0);
    }
    else
    {
      op->vtkIOSSReader::SetApplyDisplacements(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetApplyDisplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetApplyDisplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetApplyDisplacements() :
      op->vtkIOSSReader::GetApplyDisplacements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ApplyDisplacementsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyDisplacementsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ApplyDisplacementsOn();
    }
    else
    {
      op->vtkIOSSReader::ApplyDisplacementsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ApplyDisplacementsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyDisplacementsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ApplyDisplacementsOff();
    }
    else
    {
      op->vtkIOSSReader::ApplyDisplacementsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetReadGlobalFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadGlobalFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadGlobalFields(temp0);
    }
    else
    {
      op->vtkIOSSReader::SetReadGlobalFields(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetReadGlobalFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadGlobalFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReadGlobalFields() :
      op->vtkIOSSReader::GetReadGlobalFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ReadGlobalFieldsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadGlobalFieldsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadGlobalFieldsOn();
    }
    else
    {
      op->vtkIOSSReader::ReadGlobalFieldsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ReadGlobalFieldsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadGlobalFieldsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadGlobalFieldsOff();
    }
    else
    {
      op->vtkIOSSReader::ReadGlobalFieldsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetReadAllFilesToDetermineStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllFilesToDetermineStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAllFilesToDetermineStructure(temp0);
    }
    else
    {
      op->vtkIOSSReader::SetReadAllFilesToDetermineStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetReadAllFilesToDetermineStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllFilesToDetermineStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReadAllFilesToDetermineStructure() :
      op->vtkIOSSReader::GetReadAllFilesToDetermineStructure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ReadAllFilesToDetermineStructureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllFilesToDetermineStructureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllFilesToDetermineStructureOn();
    }
    else
    {
      op->vtkIOSSReader::ReadAllFilesToDetermineStructureOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ReadAllFilesToDetermineStructureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllFilesToDetermineStructureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllFilesToDetermineStructureOff();
    }
    else
    {
      op->vtkIOSSReader::ReadAllFilesToDetermineStructureOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetReadQAAndInformationRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadQAAndInformationRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadQAAndInformationRecords(temp0);
    }
    else
    {
      op->vtkIOSSReader::SetReadQAAndInformationRecords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetReadQAAndInformationRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadQAAndInformationRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReadQAAndInformationRecords() :
      op->vtkIOSSReader::GetReadQAAndInformationRecords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ReadQAAndInformationRecordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadQAAndInformationRecordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadQAAndInformationRecordsOn();
    }
    else
    {
      op->vtkIOSSReader::ReadQAAndInformationRecordsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ReadQAAndInformationRecordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadQAAndInformationRecordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadQAAndInformationRecordsOff();
    }
    else
    {
      op->vtkIOSSReader::ReadQAAndInformationRecordsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkIOSSReader::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkIOSSReader::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_AddProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddProperty(temp0, temp1);
    }
    else
    {
      op->vtkIOSSReader::AddProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIOSSReader_AddProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddProperty(temp0, temp1);
    }
    else
    {
      op->vtkIOSSReader::AddProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIOSSReader_AddProperty_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  const char *temp0 = nullptr;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1))
  {
    if (ap.IsBound())
    {
      op->AddProperty(temp0, temp1);
    }
    else
    {
      op->vtkIOSSReader::AddProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}

static PyObject *
PyvtkIOSSReader_AddProperty_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddProperty(temp0, temp1);
    }
    else
    {
      op->vtkIOSSReader::AddProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkIOSSReader_AddProperty_Methods[] = {
  {"AddProperty", PyvtkIOSSReader_AddProperty_s1, METH_VARARGS,
   "@zi"},
  {"AddProperty", PyvtkIOSSReader_AddProperty_s2, METH_VARARGS,
   "@zd"},
  {"AddProperty", PyvtkIOSSReader_AddProperty_s3, METH_VARARGS,
   "@zv"},
  {"AddProperty", PyvtkIOSSReader_AddProperty_s4, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkIOSSReader_AddProperty(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkIOSSReader_AddProperty_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddProperty");
  return nullptr;
}


static PyObject *
PyvtkIOSSReader_RemoveProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveProperty(temp0);
    }
    else
    {
      op->vtkIOSSReader::RemoveProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ClearProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearProperties();
    }
    else
    {
      op->vtkIOSSReader::ClearProperties();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetEntityTypeIsBlock(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEntityTypeIsBlock");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkIOSSReader::GetEntityTypeIsBlock(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetEntityTypeIsSet(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEntityTypeIsSet");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkIOSSReader::GetEntityTypeIsSet(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetDataAssemblyNodeNameForEntityType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataAssemblyNodeNameForEntityType");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkIOSSReader::GetDataAssemblyNodeNameForEntityType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetMergedEntityNameForEntityType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMergedEntityNameForEntityType");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkIOSSReader::GetMergedEntityNameForEntityType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetEntitySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntitySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetEntitySelection(temp0) :
      op->vtkIOSSReader::GetEntitySelection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetNodeBlockSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeBlockSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetNodeBlockSelection() :
      op->vtkIOSSReader::GetNodeBlockSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetEdgeBlockSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeBlockSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetEdgeBlockSelection() :
      op->vtkIOSSReader::GetEdgeBlockSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetFaceBlockSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceBlockSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetFaceBlockSelection() :
      op->vtkIOSSReader::GetFaceBlockSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetElementBlockSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementBlockSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetElementBlockSelection() :
      op->vtkIOSSReader::GetElementBlockSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetStructuredBlockSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredBlockSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetStructuredBlockSelection() :
      op->vtkIOSSReader::GetStructuredBlockSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetNodeSetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetNodeSetSelection() :
      op->vtkIOSSReader::GetNodeSetSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetEdgeSetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetEdgeSetSelection() :
      op->vtkIOSSReader::GetEdgeSetSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetFaceSetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceSetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetFaceSetSelection() :
      op->vtkIOSSReader::GetFaceSetSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetElementSetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementSetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetElementSetSelection() :
      op->vtkIOSSReader::GetElementSetSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetSideSetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetSideSetSelection() :
      op->vtkIOSSReader::GetSideSetSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetFieldSelection(temp0) :
      op->vtkIOSSReader::GetFieldSelection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetNodeBlockFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeBlockFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetNodeBlockFieldSelection() :
      op->vtkIOSSReader::GetNodeBlockFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetEdgeBlockFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeBlockFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetEdgeBlockFieldSelection() :
      op->vtkIOSSReader::GetEdgeBlockFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetFaceBlockFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceBlockFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetFaceBlockFieldSelection() :
      op->vtkIOSSReader::GetFaceBlockFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetElementBlockFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementBlockFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetElementBlockFieldSelection() :
      op->vtkIOSSReader::GetElementBlockFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetStructuredBlockFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredBlockFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetStructuredBlockFieldSelection() :
      op->vtkIOSSReader::GetStructuredBlockFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetNodeSetFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetNodeSetFieldSelection() :
      op->vtkIOSSReader::GetNodeSetFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetEdgeSetFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSetFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetEdgeSetFieldSelection() :
      op->vtkIOSSReader::GetEdgeSetFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetFaceSetFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceSetFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetFaceSetFieldSelection() :
      op->vtkIOSSReader::GetFaceSetFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetElementSetFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementSetFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetElementSetFieldSelection() :
      op->vtkIOSSReader::GetElementSetFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetSideSetFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetSideSetFieldSelection() :
      op->vtkIOSSReader::GetSideSetFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_RemoveAllEntitySelections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllEntitySelections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllEntitySelections();
    }
    else
    {
      op->vtkIOSSReader::RemoveAllEntitySelections();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_RemoveAllFieldSelections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllFieldSelections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllFieldSelections();
    }
    else
    {
      op->vtkIOSSReader::RemoveAllFieldSelections();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_RemoveAllSelections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSelections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllSelections();
    }
    else
    {
      op->vtkIOSSReader::RemoveAllSelections();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetEntityIdMapAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntityIdMapAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetEntityIdMapAsString(temp0) :
      op->vtkIOSSReader::GetEntityIdMapAsString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetNodeBlockIdMapAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeBlockIdMapAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetNodeBlockIdMapAsString() :
      op->vtkIOSSReader::GetNodeBlockIdMapAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetEdgeBlockIdMapAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeBlockIdMapAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetEdgeBlockIdMapAsString() :
      op->vtkIOSSReader::GetEdgeBlockIdMapAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetFaceBlockIdMapAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceBlockIdMapAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetFaceBlockIdMapAsString() :
      op->vtkIOSSReader::GetFaceBlockIdMapAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetElementBlockIdMapAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementBlockIdMapAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetElementBlockIdMapAsString() :
      op->vtkIOSSReader::GetElementBlockIdMapAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetStructuredBlockIdMapAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredBlockIdMapAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetStructuredBlockIdMapAsString() :
      op->vtkIOSSReader::GetStructuredBlockIdMapAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetNodeSetIdMapAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetIdMapAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetNodeSetIdMapAsString() :
      op->vtkIOSSReader::GetNodeSetIdMapAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetEdgeSetIdMapAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSetIdMapAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetEdgeSetIdMapAsString() :
      op->vtkIOSSReader::GetEdgeSetIdMapAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetFaceSetIdMapAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceSetIdMapAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetFaceSetIdMapAsString() :
      op->vtkIOSSReader::GetFaceSetIdMapAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetElementSetIdMapAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementSetIdMapAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetElementSetIdMapAsString() :
      op->vtkIOSSReader::GetElementSetIdMapAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetSideSetIdMapAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetIdMapAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetSideSetIdMapAsString() :
      op->vtkIOSSReader::GetSideSetIdMapAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetAssembly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssembly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataAssembly *tempr = (ap.IsBound() ?
      op->GetAssembly() :
      op->vtkIOSSReader::GetAssembly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetAssemblyTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAssemblyTag() :
      op->vtkIOSSReader::GetAssemblyTag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_AddSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->AddSelector(temp0) :
      op->vtkIOSSReader::AddSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ClearSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearSelectors();
    }
    else
    {
      op->vtkIOSSReader::ClearSelectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_SetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelector(temp0);
    }
    else
    {
      op->vtkIOSSReader::SetSelector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetNumberOfSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSelectors() :
      op->vtkIOSSReader::GetNumberOfSelectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSelector(temp0) :
      op->vtkIOSSReader::GetSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ReadMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadMetaData(temp0) :
      op->vtkIOSSReader::ReadMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ReadMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkDataObject *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadMesh(temp0, temp1, temp2, temp3, temp4) :
      op->vtkIOSSReader::ReadMesh(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ReadPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkDataObject *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadPoints(temp0, temp1, temp2, temp3, temp4) :
      op->vtkIOSSReader::ReadPoints(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ReadArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkDataObject *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadArrays(temp0, temp1, temp2, temp3, temp4) :
      op->vtkIOSSReader::ReadArrays(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSReader *op = static_cast<vtkIOSSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkIOSSReader::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_DoTestFilePatternMatching(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DoTestFilePatternMatching");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkIOSSReader::DoTestFilePatternMatching();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSReader_ENTITY_ID(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ENTITY_ID");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkIOSSReader::ENTITY_ID();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkIOSSReader_Methods[] = {
  {"IsTypeOf", PyvtkIOSSReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIOSSReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIOSSReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkIOSSReader\nC++: static vtkIOSSReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIOSSReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkIOSSReader\nC++: vtkIOSSReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkIOSSReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkIOSSReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddFileName", PyvtkIOSSReader_AddFileName, METH_VARARGS,
   "AddFileName(self, fname:str) -> None\nC++: void AddFileName(const char *fname)\n\nAPI to set the filenames.\n"},
  {"ClearFileNames", PyvtkIOSSReader_ClearFileNames, METH_VARARGS,
   "ClearFileNames(self) -> None\nC++: void ClearFileNames()\n\n"},
  {"GetFileName", PyvtkIOSSReader_GetFileName, METH_VARARGS,
   "GetFileName(self, index:int) -> str\nC++: const char *GetFileName(int index)\n\n"},
  {"GetNumberOfFileNames", PyvtkIOSSReader_GetNumberOfFileNames, METH_VARARGS,
   "GetNumberOfFileNames(self) -> int\nC++: int GetNumberOfFileNames()\n\n"},
  {"SetFileName", PyvtkIOSSReader_SetFileName, METH_VARARGS,
   "SetFileName(self, fname:str) -> None\nC++: void SetFileName(const char *fname)\n\nSet a single filename. Note, this will clear all existing\nfilenames.\n"},
  {"SetDatabaseTypeOverride", PyvtkIOSSReader_SetDatabaseTypeOverride, METH_VARARGS,
   "SetDatabaseTypeOverride(self, _arg:str) -> None\nC++: virtual void SetDatabaseTypeOverride(const char *_arg)\n\nGet/Set the IOSS database name to use for reading the file. If\nnot specified (default), the reader will determine based on the\nfile extension.\n"},
  {"GetDatabaseTypeOverride", PyvtkIOSSReader_GetDatabaseTypeOverride, METH_VARARGS,
   "GetDatabaseTypeOverride(self) -> str\nC++: virtual char *GetDatabaseTypeOverride()\n\n"},
  {"SetDisplacementMagnitude", PyvtkIOSSReader_SetDisplacementMagnitude, METH_VARARGS,
   "SetDisplacementMagnitude(self, magnitude:float) -> None\nC++: void SetDisplacementMagnitude(double magnitude)\n\nWhen displacements are being applied, they are scaled by this\namount. Set to 1 (default) for no scaling.\n"},
  {"GetDisplacementMagnitude", PyvtkIOSSReader_GetDisplacementMagnitude, METH_VARARGS,
   "GetDisplacementMagnitude(self) -> float\nC++: double GetDisplacementMagnitude()\n\n"},
  {"SetGroupNumericVectorFieldComponents", PyvtkIOSSReader_SetGroupNumericVectorFieldComponents, METH_VARARGS,
   "SetGroupNumericVectorFieldComponents(self, value:bool) -> None\nC++: void SetGroupNumericVectorFieldComponents(bool value)\n\nSet whether the reader should treat numeric suffixes for a vector\nfield as vector components. By default, this property is off.\nExample: DENSITY_1, DENSITY_2, DENSITY_3, DENSITY_4 If the\nproperty is true, those fields will be parsed as a 4-component\nvtkDataArray named DENSITY. When turned off, DENSITY_1,\nDENSITY_2, DENSITY_3, DENSITY_4 fields will be parsed as 4\nvtkDataArrays with 1 component each.\n"},
  {"GetGroupNumericVectorFieldComponents", PyvtkIOSSReader_GetGroupNumericVectorFieldComponents, METH_VARARGS,
   "GetGroupNumericVectorFieldComponents(self) -> bool\nC++: bool GetGroupNumericVectorFieldComponents()\n\n"},
  {"SetFieldSuffixSeparator", PyvtkIOSSReader_SetFieldSuffixSeparator, METH_VARARGS,
   "SetFieldSuffixSeparator(self, value:str) -> None\nC++: void SetFieldSuffixSeparator(const char *value)\n\nSet the character used to separate suffix from the field.\n"},
  {"GetFieldSuffixSeparator", PyvtkIOSSReader_GetFieldSuffixSeparator, METH_VARARGS,
   "GetFieldSuffixSeparator(self) -> str\nC++: std::string GetFieldSuffixSeparator()\n\n"},
  {"SetScanForRelatedFiles", PyvtkIOSSReader_SetScanForRelatedFiles, METH_VARARGS,
   "SetScanForRelatedFiles(self, value:bool) -> None\nC++: void SetScanForRelatedFiles(bool value)\n\nWhen set to true, the reader can automatically locate and load\nadditional files that are part of the collection.\n"},
  {"GetScanForRelatedFiles", PyvtkIOSSReader_GetScanForRelatedFiles, METH_VARARGS,
   "GetScanForRelatedFiles(self) -> bool\nC++: virtual bool GetScanForRelatedFiles()\n\n"},
  {"ScanForRelatedFilesOn", PyvtkIOSSReader_ScanForRelatedFilesOn, METH_VARARGS,
   "ScanForRelatedFilesOn(self) -> None\nC++: virtual void ScanForRelatedFilesOn()\n\n"},
  {"ScanForRelatedFilesOff", PyvtkIOSSReader_ScanForRelatedFilesOff, METH_VARARGS,
   "ScanForRelatedFilesOff(self) -> None\nC++: virtual void ScanForRelatedFilesOff()\n\n"},
  {"SetFileRange", PyvtkIOSSReader_SetFileRange, METH_VARARGS,
   "SetFileRange(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetFileRange(int _arg1, int _arg2)\nSetFileRange(self, _arg:(int, int)) -> None\nC++: void SetFileRange(const int _arg[2])\n\nThis provides a mechanism to limit to reading to certain files in\na spatially partitioned file-series. To just specific subset of\nfiles, one can always simply specify those files using\n`AddFileName` and then set `ScanForRelatedFiles` to false.\nAnother way is to let the reader scan for all related files and\nthen use `FileRange` and `FileStride` to limit which files are\nread.\n\nIf the range is invalid, i.e. `FileRange[0] >= FileRange[1]`,\nit's assumed that no file-range overrides have been specified and\nboth FileRange and FileStride will be ignored. When valid, only\nthe chosen subset of files will be processed.\n"},
  {"GetFileRange", PyvtkIOSSReader_GetFileRange, METH_VARARGS,
   "GetFileRange(self) -> (int, int)\nC++: virtual int *GetFileRange()\n\n"},
  {"SetFileStride", PyvtkIOSSReader_SetFileStride, METH_VARARGS,
   "SetFileStride(self, _arg:int) -> None\nC++: virtual void SetFileStride(int _arg)\n\n"},
  {"GetFileStrideMinValue", PyvtkIOSSReader_GetFileStrideMinValue, METH_VARARGS,
   "GetFileStrideMinValue(self) -> int\nC++: virtual int GetFileStrideMinValue()\n\n"},
  {"GetFileStrideMaxValue", PyvtkIOSSReader_GetFileStrideMaxValue, METH_VARARGS,
   "GetFileStrideMaxValue(self) -> int\nC++: virtual int GetFileStrideMaxValue()\n\n"},
  {"GetFileStride", PyvtkIOSSReader_GetFileStride, METH_VARARGS,
   "GetFileStride(self) -> int\nC++: virtual int GetFileStride()\n\n"},
  {"SetMergeExodusEntityBlocks", PyvtkIOSSReader_SetMergeExodusEntityBlocks, METH_VARARGS,
   "SetMergeExodusEntityBlocks(self, value:bool) -> None\nC++: void SetMergeExodusEntityBlocks(bool value)\n\nWhen this flag on blocks of entities of exodus data will be\nmerged.\n\nNote: This flag is ignored for non-exodus data.\n"},
  {"GetMergeExodusEntityBlocks", PyvtkIOSSReader_GetMergeExodusEntityBlocks, METH_VARARGS,
   "GetMergeExodusEntityBlocks(self) -> bool\nC++: virtual bool GetMergeExodusEntityBlocks()\n\n"},
  {"MergeExodusEntityBlocksOn", PyvtkIOSSReader_MergeExodusEntityBlocksOn, METH_VARARGS,
   "MergeExodusEntityBlocksOn(self) -> None\nC++: virtual void MergeExodusEntityBlocksOn()\n\n"},
  {"MergeExodusEntityBlocksOff", PyvtkIOSSReader_MergeExodusEntityBlocksOff, METH_VARARGS,
   "MergeExodusEntityBlocksOff(self) -> None\nC++: virtual void MergeExodusEntityBlocksOff()\n\n"},
  {"SetGenerateFileId", PyvtkIOSSReader_SetGenerateFileId, METH_VARARGS,
   "SetGenerateFileId(self, _arg:bool) -> None\nC++: virtual void SetGenerateFileId(bool _arg)\n\nWhen set to true, the reader will add a cell-data array for cells\nnamed 'file_id' which identifies the file number when reading\nspatially partitioned files.\n\nDefault is false.\n"},
  {"GetGenerateFileId", PyvtkIOSSReader_GetGenerateFileId, METH_VARARGS,
   "GetGenerateFileId(self) -> bool\nC++: virtual bool GetGenerateFileId()\n\n"},
  {"GenerateFileIdOn", PyvtkIOSSReader_GenerateFileIdOn, METH_VARARGS,
   "GenerateFileIdOn(self) -> None\nC++: virtual void GenerateFileIdOn()\n\n"},
  {"GenerateFileIdOff", PyvtkIOSSReader_GenerateFileIdOff, METH_VARARGS,
   "GenerateFileIdOff(self) -> None\nC++: virtual void GenerateFileIdOff()\n\n"},
  {"SetReadIds", PyvtkIOSSReader_SetReadIds, METH_VARARGS,
   "SetReadIds(self, _arg:bool) -> None\nC++: virtual void SetReadIds(bool _arg)\n\nWhen set to true (default), the reader will read ids associated\nwith elements.\n"},
  {"GetReadIds", PyvtkIOSSReader_GetReadIds, METH_VARARGS,
   "GetReadIds(self) -> bool\nC++: virtual bool GetReadIds()\n\n"},
  {"ReadIdsOn", PyvtkIOSSReader_ReadIdsOn, METH_VARARGS,
   "ReadIdsOn(self) -> None\nC++: virtual void ReadIdsOn()\n\n"},
  {"ReadIdsOff", PyvtkIOSSReader_ReadIdsOff, METH_VARARGS,
   "ReadIdsOff(self) -> None\nC++: virtual void ReadIdsOff()\n\n"},
  {"SetRemoveUnusedPoints", PyvtkIOSSReader_SetRemoveUnusedPoints, METH_VARARGS,
   "SetRemoveUnusedPoints(self, __a:bool) -> None\nC++: void SetRemoveUnusedPoints(bool)\n\nNode related data, including point coordinates, point field data\netc. is typically shared between all blocks and sets. By default,\nthe reader will remove unused points for each block or set. To\navoid this, set this flag to false.\n\nDefault is true, unused points are removed.\n"},
  {"GetRemoveUnusedPoints", PyvtkIOSSReader_GetRemoveUnusedPoints, METH_VARARGS,
   "GetRemoveUnusedPoints(self) -> bool\nC++: virtual bool GetRemoveUnusedPoints()\n\n"},
  {"RemoveUnusedPointsOn", PyvtkIOSSReader_RemoveUnusedPointsOn, METH_VARARGS,
   "RemoveUnusedPointsOn(self) -> None\nC++: virtual void RemoveUnusedPointsOn()\n\n"},
  {"RemoveUnusedPointsOff", PyvtkIOSSReader_RemoveUnusedPointsOff, METH_VARARGS,
   "RemoveUnusedPointsOff(self) -> None\nC++: virtual void RemoveUnusedPointsOff()\n\n"},
  {"SetApplyDisplacements", PyvtkIOSSReader_SetApplyDisplacements, METH_VARARGS,
   "SetApplyDisplacements(self, _arg:bool) -> None\nC++: virtual void SetApplyDisplacements(bool _arg)\n\nWhen set to true (default), if an array named 'displacement' is\npresent in the node field arrays, it will be used to transform\nthe point coordinates.\n"},
  {"GetApplyDisplacements", PyvtkIOSSReader_GetApplyDisplacements, METH_VARARGS,
   "GetApplyDisplacements(self) -> bool\nC++: virtual bool GetApplyDisplacements()\n\n"},
  {"ApplyDisplacementsOn", PyvtkIOSSReader_ApplyDisplacementsOn, METH_VARARGS,
   "ApplyDisplacementsOn(self) -> None\nC++: virtual void ApplyDisplacementsOn()\n\n"},
  {"ApplyDisplacementsOff", PyvtkIOSSReader_ApplyDisplacementsOff, METH_VARARGS,
   "ApplyDisplacementsOff(self) -> None\nC++: virtual void ApplyDisplacementsOff()\n\n"},
  {"SetReadGlobalFields", PyvtkIOSSReader_SetReadGlobalFields, METH_VARARGS,
   "SetReadGlobalFields(self, _arg:bool) -> None\nC++: virtual void SetReadGlobalFields(bool _arg)\n\nWhen set to true (default), the reader will read global fields.\n"},
  {"GetReadGlobalFields", PyvtkIOSSReader_GetReadGlobalFields, METH_VARARGS,
   "GetReadGlobalFields(self) -> bool\nC++: virtual bool GetReadGlobalFields()\n\n"},
  {"ReadGlobalFieldsOn", PyvtkIOSSReader_ReadGlobalFieldsOn, METH_VARARGS,
   "ReadGlobalFieldsOn(self) -> None\nC++: virtual void ReadGlobalFieldsOn()\n\n"},
  {"ReadGlobalFieldsOff", PyvtkIOSSReader_ReadGlobalFieldsOff, METH_VARARGS,
   "ReadGlobalFieldsOff(self) -> None\nC++: virtual void ReadGlobalFieldsOff()\n\n"},
  {"SetReadAllFilesToDetermineStructure", PyvtkIOSSReader_SetReadAllFilesToDetermineStructure, METH_VARARGS,
   "SetReadAllFilesToDetermineStructure(self, __a:bool) -> None\nC++: void SetReadAllFilesToDetermineStructure(bool)\n\nWhen set to true (default), the reader will read all files to\ndetermine structure of the dataset because some files might have\ncertain blocks that other files don't have. Set to false if you\nare sure that all files have the same structure, i.e. same blocks\nand sets.\n\note When set to false, the reader will only read the first file\nto determine the structure. which is faster than reading all\nfiles.\n"},
  {"GetReadAllFilesToDetermineStructure", PyvtkIOSSReader_GetReadAllFilesToDetermineStructure, METH_VARARGS,
   "GetReadAllFilesToDetermineStructure(self) -> bool\nC++: virtual bool GetReadAllFilesToDetermineStructure()\n\n"},
  {"ReadAllFilesToDetermineStructureOn", PyvtkIOSSReader_ReadAllFilesToDetermineStructureOn, METH_VARARGS,
   "ReadAllFilesToDetermineStructureOn(self) -> None\nC++: virtual void ReadAllFilesToDetermineStructureOn()\n\n"},
  {"ReadAllFilesToDetermineStructureOff", PyvtkIOSSReader_ReadAllFilesToDetermineStructureOff, METH_VARARGS,
   "ReadAllFilesToDetermineStructureOff(self) -> None\nC++: virtual void ReadAllFilesToDetermineStructureOff()\n\n"},
  {"SetReadQAAndInformationRecords", PyvtkIOSSReader_SetReadQAAndInformationRecords, METH_VARARGS,
   "SetReadQAAndInformationRecords(self, _arg:bool) -> None\nC++: virtual void SetReadQAAndInformationRecords(bool _arg)\n\nWhen set to true (default), the reader will read quality\nassurance and information fields.\n"},
  {"GetReadQAAndInformationRecords", PyvtkIOSSReader_GetReadQAAndInformationRecords, METH_VARARGS,
   "GetReadQAAndInformationRecords(self) -> bool\nC++: virtual bool GetReadQAAndInformationRecords()\n\n"},
  {"ReadQAAndInformationRecordsOn", PyvtkIOSSReader_ReadQAAndInformationRecordsOn, METH_VARARGS,
   "ReadQAAndInformationRecordsOn(self) -> None\nC++: virtual void ReadQAAndInformationRecordsOn()\n\n"},
  {"ReadQAAndInformationRecordsOff", PyvtkIOSSReader_ReadQAAndInformationRecordsOff, METH_VARARGS,
   "ReadQAAndInformationRecordsOff(self) -> None\nC++: virtual void ReadQAAndInformationRecordsOff()\n\n"},
  {"SetController", PyvtkIOSSReader_SetController, METH_VARARGS,
   "SetController(self, controller:vtkMultiProcessController) -> None\nC++: void SetController(vtkMultiProcessController *controller)\n\nGet/Set the controller to use when working in parallel.\nInitialized to `vtkMultiProcessController::GetGlobalController`\nin the constructor.\n\nThe controller is used to using `ReadMetaData` stage to\ndistribute the work of gathering meta-data from multiple files,\nif any, across ranks and then exchanging that information between\nall ranks.\n\nThe actual reading of data is controlled by piece requests sent\nby the pipeline e.g. using `vtkAlgorithm::UpdatePiece`.\n"},
  {"GetController", PyvtkIOSSReader_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"AddProperty", PyvtkIOSSReader_AddProperty, METH_VARARGS,
   "AddProperty(self, name:str, value:int) -> None\nC++: void AddProperty(const char *name, int value)\nAddProperty(self, name:str, value:float) -> None\nC++: void AddProperty(const char *name, double value)\nAddProperty(self, name:str, value:Pointer) -> None\nC++: void AddProperty(const char *name, void *value)\nAddProperty(self, name:str, value:str) -> None\nC++: void AddProperty(const char *name, const char *value)\n\nIOSS databases support various properties that affect how the\ndatabase is read. These properties can be set using this API.\nNote, it's best to call this before the first update to the\nreader since any change and the reader will flush all caches and\nclose all open databases etc.\n"},
  {"RemoveProperty", PyvtkIOSSReader_RemoveProperty, METH_VARARGS,
   "RemoveProperty(self, name:str) -> None\nC++: void RemoveProperty(const char *name)\n\n"},
  {"ClearProperties", PyvtkIOSSReader_ClearProperties, METH_VARARGS,
   "ClearProperties(self) -> None\nC++: void ClearProperties()\n\n"},
  {"GetEntityTypeIsBlock", PyvtkIOSSReader_GetEntityTypeIsBlock, METH_VARARGS,
   "GetEntityTypeIsBlock(type:int) -> bool\nC++: static bool GetEntityTypeIsBlock(int type)\n\n"},
  {"GetEntityTypeIsSet", PyvtkIOSSReader_GetEntityTypeIsSet, METH_VARARGS,
   "GetEntityTypeIsSet(type:int) -> bool\nC++: static bool GetEntityTypeIsSet(int type)\n\n"},
  {"GetDataAssemblyNodeNameForEntityType", PyvtkIOSSReader_GetDataAssemblyNodeNameForEntityType, METH_VARARGS,
   "GetDataAssemblyNodeNameForEntityType(type:int) -> str\nC++: static const char *GetDataAssemblyNodeNameForEntityType(\n    int type)\n\n"},
  {"GetMergedEntityNameForEntityType", PyvtkIOSSReader_GetMergedEntityNameForEntityType, METH_VARARGS,
   "GetMergedEntityNameForEntityType(type:int) -> str\nC++: static const char *GetMergedEntityNameForEntityType(int type)\n\n"},
  {"GetEntitySelection", PyvtkIOSSReader_GetEntitySelection, METH_VARARGS,
   "GetEntitySelection(self, type:int) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetEntitySelection(int type)\n\n"},
  {"GetNodeBlockSelection", PyvtkIOSSReader_GetNodeBlockSelection, METH_VARARGS,
   "GetNodeBlockSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetNodeBlockSelection()\n\n"},
  {"GetEdgeBlockSelection", PyvtkIOSSReader_GetEdgeBlockSelection, METH_VARARGS,
   "GetEdgeBlockSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetEdgeBlockSelection()\n\n"},
  {"GetFaceBlockSelection", PyvtkIOSSReader_GetFaceBlockSelection, METH_VARARGS,
   "GetFaceBlockSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetFaceBlockSelection()\n\n"},
  {"GetElementBlockSelection", PyvtkIOSSReader_GetElementBlockSelection, METH_VARARGS,
   "GetElementBlockSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetElementBlockSelection()\n\n"},
  {"GetStructuredBlockSelection", PyvtkIOSSReader_GetStructuredBlockSelection, METH_VARARGS,
   "GetStructuredBlockSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetStructuredBlockSelection()\n\n"},
  {"GetNodeSetSelection", PyvtkIOSSReader_GetNodeSetSelection, METH_VARARGS,
   "GetNodeSetSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetNodeSetSelection()\n\n"},
  {"GetEdgeSetSelection", PyvtkIOSSReader_GetEdgeSetSelection, METH_VARARGS,
   "GetEdgeSetSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetEdgeSetSelection()\n\n"},
  {"GetFaceSetSelection", PyvtkIOSSReader_GetFaceSetSelection, METH_VARARGS,
   "GetFaceSetSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetFaceSetSelection()\n\n"},
  {"GetElementSetSelection", PyvtkIOSSReader_GetElementSetSelection, METH_VARARGS,
   "GetElementSetSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetElementSetSelection()\n\n"},
  {"GetSideSetSelection", PyvtkIOSSReader_GetSideSetSelection, METH_VARARGS,
   "GetSideSetSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetSideSetSelection()\n\n"},
  {"GetFieldSelection", PyvtkIOSSReader_GetFieldSelection, METH_VARARGS,
   "GetFieldSelection(self, type:int) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetFieldSelection(int type)\n\n"},
  {"GetNodeBlockFieldSelection", PyvtkIOSSReader_GetNodeBlockFieldSelection, METH_VARARGS,
   "GetNodeBlockFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetNodeBlockFieldSelection()\n\n"},
  {"GetEdgeBlockFieldSelection", PyvtkIOSSReader_GetEdgeBlockFieldSelection, METH_VARARGS,
   "GetEdgeBlockFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetEdgeBlockFieldSelection()\n\n"},
  {"GetFaceBlockFieldSelection", PyvtkIOSSReader_GetFaceBlockFieldSelection, METH_VARARGS,
   "GetFaceBlockFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetFaceBlockFieldSelection()\n\n"},
  {"GetElementBlockFieldSelection", PyvtkIOSSReader_GetElementBlockFieldSelection, METH_VARARGS,
   "GetElementBlockFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetElementBlockFieldSelection()\n\n"},
  {"GetStructuredBlockFieldSelection", PyvtkIOSSReader_GetStructuredBlockFieldSelection, METH_VARARGS,
   "GetStructuredBlockFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetStructuredBlockFieldSelection()\n\n"},
  {"GetNodeSetFieldSelection", PyvtkIOSSReader_GetNodeSetFieldSelection, METH_VARARGS,
   "GetNodeSetFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetNodeSetFieldSelection()\n\n"},
  {"GetEdgeSetFieldSelection", PyvtkIOSSReader_GetEdgeSetFieldSelection, METH_VARARGS,
   "GetEdgeSetFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetEdgeSetFieldSelection()\n\n"},
  {"GetFaceSetFieldSelection", PyvtkIOSSReader_GetFaceSetFieldSelection, METH_VARARGS,
   "GetFaceSetFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetFaceSetFieldSelection()\n\n"},
  {"GetElementSetFieldSelection", PyvtkIOSSReader_GetElementSetFieldSelection, METH_VARARGS,
   "GetElementSetFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetElementSetFieldSelection()\n\n"},
  {"GetSideSetFieldSelection", PyvtkIOSSReader_GetSideSetFieldSelection, METH_VARARGS,
   "GetSideSetFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetSideSetFieldSelection()\n\n"},
  {"RemoveAllEntitySelections", PyvtkIOSSReader_RemoveAllEntitySelections, METH_VARARGS,
   "RemoveAllEntitySelections(self) -> None\nC++: void RemoveAllEntitySelections()\n\n"},
  {"RemoveAllFieldSelections", PyvtkIOSSReader_RemoveAllFieldSelections, METH_VARARGS,
   "RemoveAllFieldSelections(self) -> None\nC++: void RemoveAllFieldSelections()\n\n"},
  {"RemoveAllSelections", PyvtkIOSSReader_RemoveAllSelections, METH_VARARGS,
   "RemoveAllSelections(self) -> None\nC++: void RemoveAllSelections()\n\n"},
  {"GetEntityIdMapAsString", PyvtkIOSSReader_GetEntityIdMapAsString, METH_VARARGS,
   "GetEntityIdMapAsString(self, type:int) -> vtkStringArray\nC++: vtkStringArray *GetEntityIdMapAsString(int type)\n\nThis API is not really meant for public use and may change\nwithout notices. It is simply provided to make it easy to wrap\nthe API in client-server wrappings for ParaView.\n"},
  {"GetNodeBlockIdMapAsString", PyvtkIOSSReader_GetNodeBlockIdMapAsString, METH_VARARGS,
   "GetNodeBlockIdMapAsString(self) -> vtkStringArray\nC++: vtkStringArray *GetNodeBlockIdMapAsString()\n\n"},
  {"GetEdgeBlockIdMapAsString", PyvtkIOSSReader_GetEdgeBlockIdMapAsString, METH_VARARGS,
   "GetEdgeBlockIdMapAsString(self) -> vtkStringArray\nC++: vtkStringArray *GetEdgeBlockIdMapAsString()\n\n"},
  {"GetFaceBlockIdMapAsString", PyvtkIOSSReader_GetFaceBlockIdMapAsString, METH_VARARGS,
   "GetFaceBlockIdMapAsString(self) -> vtkStringArray\nC++: vtkStringArray *GetFaceBlockIdMapAsString()\n\n"},
  {"GetElementBlockIdMapAsString", PyvtkIOSSReader_GetElementBlockIdMapAsString, METH_VARARGS,
   "GetElementBlockIdMapAsString(self) -> vtkStringArray\nC++: vtkStringArray *GetElementBlockIdMapAsString()\n\n"},
  {"GetStructuredBlockIdMapAsString", PyvtkIOSSReader_GetStructuredBlockIdMapAsString, METH_VARARGS,
   "GetStructuredBlockIdMapAsString(self) -> vtkStringArray\nC++: vtkStringArray *GetStructuredBlockIdMapAsString()\n\n"},
  {"GetNodeSetIdMapAsString", PyvtkIOSSReader_GetNodeSetIdMapAsString, METH_VARARGS,
   "GetNodeSetIdMapAsString(self) -> vtkStringArray\nC++: vtkStringArray *GetNodeSetIdMapAsString()\n\n"},
  {"GetEdgeSetIdMapAsString", PyvtkIOSSReader_GetEdgeSetIdMapAsString, METH_VARARGS,
   "GetEdgeSetIdMapAsString(self) -> vtkStringArray\nC++: vtkStringArray *GetEdgeSetIdMapAsString()\n\n"},
  {"GetFaceSetIdMapAsString", PyvtkIOSSReader_GetFaceSetIdMapAsString, METH_VARARGS,
   "GetFaceSetIdMapAsString(self) -> vtkStringArray\nC++: vtkStringArray *GetFaceSetIdMapAsString()\n\n"},
  {"GetElementSetIdMapAsString", PyvtkIOSSReader_GetElementSetIdMapAsString, METH_VARARGS,
   "GetElementSetIdMapAsString(self) -> vtkStringArray\nC++: vtkStringArray *GetElementSetIdMapAsString()\n\n"},
  {"GetSideSetIdMapAsString", PyvtkIOSSReader_GetSideSetIdMapAsString, METH_VARARGS,
   "GetSideSetIdMapAsString(self) -> vtkStringArray\nC++: vtkStringArray *GetSideSetIdMapAsString()\n\n"},
  {"GetAssembly", PyvtkIOSSReader_GetAssembly, METH_VARARGS,
   "GetAssembly(self) -> vtkDataAssembly\nC++: vtkDataAssembly *GetAssembly()\n\nAssemblies provide yet another way of selection blocks/sets to\nload, if available in the dataset. If a block (or set) is enabled\neither in the block (or set) selection or using assembly selector\nthen it is treated as enabled and will be read.\n\nThis method returns the vtkDataAssembly. Since IOSS can have\nmultiple assemblies, all are nested under the root \"Assemblies\"\nnode.\n\nIf the file has no assemblies, this will return nullptr.\n"},
  {"GetAssemblyTag", PyvtkIOSSReader_GetAssemblyTag, METH_VARARGS,
   "GetAssemblyTag(self) -> int\nC++: virtual int GetAssemblyTag()\n\nWhenever the assembly is changed, this tag gets changed. Note,\nusers should not assume that this is monotonically increasing but\ninstead simply rely on its value to determine if the assembly may\nhave changed since last time.\n\nIt is set to 0 whenever there's no valid assembly available.\n"},
  {"AddSelector", PyvtkIOSSReader_AddSelector, METH_VARARGS,
   "AddSelector(self, selector:str) -> bool\nC++: bool AddSelector(const char *selector)\n\nAPI to specify selectors that indicate which branches on the\nassembly are chosen.\n"},
  {"ClearSelectors", PyvtkIOSSReader_ClearSelectors, METH_VARARGS,
   "ClearSelectors(self) -> None\nC++: void ClearSelectors()\n\n"},
  {"SetSelector", PyvtkIOSSReader_SetSelector, METH_VARARGS,
   "SetSelector(self, selector:str) -> None\nC++: void SetSelector(const char *selector)\n\n"},
  {"GetNumberOfSelectors", PyvtkIOSSReader_GetNumberOfSelectors, METH_VARARGS,
   "GetNumberOfSelectors(self) -> int\nC++: int GetNumberOfSelectors()\n\nAPI to access selectors.\n"},
  {"GetSelector", PyvtkIOSSReader_GetSelector, METH_VARARGS,
   "GetSelector(self, index:int) -> str\nC++: const char *GetSelector(int index)\n\n"},
  {"ReadMetaData", PyvtkIOSSReader_ReadMetaData, METH_VARARGS,
   "ReadMetaData(self, metadata:vtkInformation) -> int\nC++: int ReadMetaData(vtkInformation *metadata) override;\n\nImplementation for vtkReaderAlgorithm API\n"},
  {"ReadMesh", PyvtkIOSSReader_ReadMesh, METH_VARARGS,
   "ReadMesh(self, piece:int, npieces:int, nghosts:int, timestep:int,\n    output:vtkDataObject) -> int\nC++: int ReadMesh(int piece, int npieces, int nghosts,\n    int timestep, vtkDataObject *output) override;\n\nRead the mesh (connectivity) for a given set of data\npartitioning, number of ghost levels and time step (index). The\nreader populates the data object passed in as the last argument.\nIt is OK to read more than the mesh (points, arrays etc.).\nHowever, this may interfere with any caching implemented by the\nexecutive (i.e. cause more reads).\n"},
  {"ReadPoints", PyvtkIOSSReader_ReadPoints, METH_VARARGS,
   "ReadPoints(self, __a:int, __b:int, __c:int, __d:int,\n    __e:vtkDataObject) -> int\nC++: int ReadPoints(int, int, int, int, vtkDataObject *) override;\n\nRead the points. The reader populates the input data object. This\nis called after ReadMesh() so the data object should already\ncontain the mesh.\n"},
  {"ReadArrays", PyvtkIOSSReader_ReadArrays, METH_VARARGS,
   "ReadArrays(self, __a:int, __b:int, __c:int, __d:int,\n    __e:vtkDataObject) -> int\nC++: int ReadArrays(int, int, int, int, vtkDataObject *) override;\n\nRead all the arrays (point, cell, field etc.). This is called\nafter ReadPoints() so the data object should already contain the\nmesh and points.\n"},
  {"GetMTime", PyvtkIOSSReader_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverridden to take into account mtimes for vtkDataArraySelection\ninstances.\n"},
  {"DoTestFilePatternMatching", PyvtkIOSSReader_DoTestFilePatternMatching, METH_VARARGS,
   "DoTestFilePatternMatching() -> bool\nC++: static bool DoTestFilePatternMatching()\n\nRuns a bunch of tests for file pattern matching.\n"},
  {"ENTITY_ID", PyvtkIOSSReader_ENTITY_ID, METH_VARARGS,
   "ENTITY_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ENTITY_ID()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkIOSSReader_Doc =
  "vtkIOSSReader - Reader for IOSS (Sierra IO System)\n\n"
  "Superclass: vtkReaderAlgorithm\n\n"
  "vtkIOSSReader is reader that uses the IOSS (Sierra IO System) library\n"
  "to read files. Currently, this reader support Exodus and CGNS file\n"
  "formats. IOSS imposes certain restrictions on these file formats and\n"
  "hence it may not be possible to open every Exodus or CGNS file using\n"
  "this reader. This is true especially for CGNS, more so than Exodus.\n"
  "In that case `vtkCGNSReader` may be more appropriate.\n\n"
  "@section SpecifyingFiles Specifying Files\n\n"
  "One can select a single file to read using\n"
  "`vtkIOSSReader::SetFileName`. With IOSS, however, it is not uncommon\n"
  "to have a collection of files named using standard patterns\n"
  "(described in Section @ref IossNamingConventions). To support this\n"
  "use-case, the reader automatically scans for additionally files\n"
  "internally. To disable this behaviour, call\n"
  "`vtkIOSSReader::ScanForRelatedFilesOff`.\n\n"
  "Alternatively, the list of files to be read can be explicitly\n"
  "specified using `vtkIOSSReader::AddFileName`. Then too, if\n"
  "`ScanForRelatedFiles` is `true`, the reader will search for related\n"
  "files for each of the files specified.\n\n"
  "Additionally, `FileRange` and `FileStride` may be used to limit to\n"
  "reading a subset of files.\n\n"
  "@section SelectingBlocksSets Selecting blocks and sets to read\n\n"
  "An IOSS file comprises of blocks and sets of various types. These are\n"
  "described by the enum `vtkIOSSReader::EntityType`.\n\n"
  "`vtkIOSSReader::GetEntitySelection` returns a `vtkDataArraySelection`\n"
  "instance for each of the entity types. This `vtkDataArraySelection`\n"
  "can be used to query the names for available blocks or sets and also\n"
  "select which ones to read.\n\n"
  "Typical usage is as follows:\n\n"
  "{.cpp}\n\n"
  "vtkNewreader; reader->SetFileName(...); reader->UpdateInformation();\n"
  "reader->GetElementBlockSelection()->EnableArray(\"Block0\");\n"
  "reader->GetEntitySelection(vtkIOSSReader::SIDESET)->DisableAllArrays()\n"
  ";\n\n"
  "By default, all blocks are enabled, while all sets are disabled.\n\n"
  "In additional to selecting blocks and sets by name, if the file\n"
  "defines assemblies that organize these blocks and sets, then one can\n"
  "use selector expressions to enable blocks/sets as defined in the\n"
  "assemblies.\n\n"
  "A block (or set) is treated as enabled if it is either explicitly\n"
  "enabled using the block selection or implicitly enabled due to a\n"
  "selector specified on over the assemblies.\n\n"
  "Typical usage to select blocks by assembly alone is as follows:\n\n"
  "{.cpp}\n"
  "vtkNewreader;\n"
  "reader->SetFileName(...);\n"
  "reader->UpdateInformation();\n"
  "reader->GetElementBlockSelection()->DisableAllArrays();\n"
  "...\n"
  "reader->AddSelector(\"//Low\");\n"
  "reader->AddSelector(\"//High\");\n\n"
  "@section SelectingArrays Selecting arrays to read\n\n"
  "Similar to the block and set selection, arrays (or fields as IOSS\n"
  "refers to them) to read from each of the blocks or sets can be\n"
  "specified using the `vtkDataArraySelection` instance returned using\n"
  "`vtkIOSSReader::GetFieldSelection` (or one of its convenience\n"
  "variants).\n\n"
  "By default all arrays are enabled.\n\n"
  "@section IossNamingConventions IOSS Naming Conventions\n\n"
  "An IOSS complete dataset is referred to as a database. There can be\n"
  "multiple multiple timesteps in a single database. A single database\n"
  "may split among multiple files. When a database is split among\n"
  "multiple files, this is strictly spatial partitioning with each file\n"
  "storing part of the data for a specific partition. In this case, the\n"
  "files are named with suffix `.{NP}.{RANK}` where `{NP}` is the total\n"
  "number of partitions  and `{RANK}` is the partition number. For\n"
  "example, if database named `can.e` is split among four files\n"
  "representing 4 partitions, it will be named as follows:\n\n\n"
  "  can.e.4.0\n"
  "  can.e.4.1\n"
  "  can.e.4.2\n"
  "  can.e.4.3\n"
  " \n\n"
  "In this example, the database name is `can.e` while the `.4.[0-4]`\n"
  "suffix provides the partition information.\n\n"
  "Note, the database need not be split into multiple files. Thus, a\n"
  "writer may generate a single `can.e` file that has all the timesteps\n"
  "and partitions and still provide all information available when the\n"
  "database is split among multiple files.\n\n"
  "Multiple databases (with each stored in a single file or spatially\n"
  "split among files) can form a temporal sequence. This done by using\n"
  "another file naming convention. If the database name is followed by\n"
  "`-s.{RS}`, where `{RS}` is some number sequence), then the databases\n"
  "are treated as a temporal sequence with `{RS}` (called restart\n"
  "numbers) representing the temporal sequence order.\n\n"
  "The follow represents a temporal sequence:\n\n\n"
  "  mysimoutput.e-s.000\n"
  "  mysimoutput.e-s.001\n"
  "  mysimoutput.e-s.002\n"
  " \n\n"
  "You can use any number of digits for the restart number, but by\n"
  "convention the number used should be the same for all files. Also by\n"
  "convention, you can leave off the `-s.{RS}` suffix for the first\n"
  "file. The following sequence is internally the same as that above:\n\n\n"
  "  mysimoutput.e-s\n"
  "  mysimoutput.e-s.001\n"
  "  mysimoutput.e-s.002\n"
  " \n\n"
  "When a database in the temporal sequence is spatially split in\n"
  "multiple files, the corresponding filename is suffixed by the\n"
  "partition information. For example:\n\n\n"
  "  mysimoutput.e-s.2.0\n"
  "  mysimoutput.e-s.2.1\n"
  "  mysimoutput.e-s.001.2.0\n"
  "  mysimoutput.e-s.001.2.1\n"
  "  mysimoutput.e-s.002.2.0\n"
  "  mysimoutput.e-s.002.2.1\n"
  " \n\n"
  "In this case, the filenames take the form\n"
  "`{DBNAME}-s.{RS}.{NP}.{RANK}`, where `{DBNAME}` is the database name,\n"
  "`{RS}` is the restart number, `{NP}` is the number of spatial\n"
  "partitions and `{RANK}` is the spatial partition number.\n\n"
  "@section References References\n"
  "* [Sierra IO System](https://sandialabs.github.io/seacas-docs)\n\n"
  "@sa\n"
  "vtkIOSSWriter, vtkExodusIIReader, vtkCGNSReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkIOSSReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOIOSS.vtkIOSSReader", // tp_name
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
  PyvtkIOSSReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIOSSReader_StaticNew()
{
  return vtkIOSSReader::New();
}

PyObject *PyvtkIOSSReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkIOSSReader_Type, PyvtkIOSSReader_Methods,
    "vtkIOSSReader",
 &PyvtkIOSSReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkReaderAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkIOSSReader_EntityType_Type);
  PyVTKEnum_Add(&PyvtkIOSSReader_EntityType_Type, "vtkIOSSReader.EntityType");

  o = (PyObject *)&PyvtkIOSSReader_EntityType_Type;
  if (PyDict_SetItemString(d, "EntityType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 17; c++)
  {
    typedef vtkIOSSReader::EntityType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[17] = {
        { "NODEBLOCK", vtkIOSSReader::NODEBLOCK },
        { "EDGEBLOCK", vtkIOSSReader::EDGEBLOCK },
        { "FACEBLOCK", vtkIOSSReader::FACEBLOCK },
        { "ELEMENTBLOCK", vtkIOSSReader::ELEMENTBLOCK },
        { "STRUCTUREDBLOCK", vtkIOSSReader::STRUCTUREDBLOCK },
        { "NODESET", vtkIOSSReader::NODESET },
        { "EDGESET", vtkIOSSReader::EDGESET },
        { "FACESET", vtkIOSSReader::FACESET },
        { "ELEMENTSET", vtkIOSSReader::ELEMENTSET },
        { "SIDESET", vtkIOSSReader::SIDESET },
        { "NUMBER_OF_ENTITY_TYPES", vtkIOSSReader::NUMBER_OF_ENTITY_TYPES },
        { "BLOCK_START", vtkIOSSReader::BLOCK_START },
        { "BLOCK_END", vtkIOSSReader::BLOCK_END },
        { "SET_START", vtkIOSSReader::SET_START },
        { "SET_END", vtkIOSSReader::SET_END },
        { "ENTITY_START", vtkIOSSReader::ENTITY_START },
        { "ENTITY_END", vtkIOSSReader::ENTITY_END },
      };

    o = PyvtkIOSSReader_EntityType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIOSSReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIOSSReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIOSSReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

