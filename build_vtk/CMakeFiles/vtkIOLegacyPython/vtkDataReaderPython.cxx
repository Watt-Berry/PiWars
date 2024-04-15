// python wrapper for vtkDataReader
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
#include "vtkDataReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataReader(PyObject *dict); }
extern "C" { PyObject *PyvtkDataReader_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataReader_FieldType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOLegacy.vtkDataReader.FieldType", // tp_name
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
PyObject *PyvtkDataReader_FieldType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDataReader_FieldType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkDataReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataReader *tempr = vtkDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataReader::NewInstance());

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
PyvtkDataReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetFileName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDataReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_GetFileName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName(temp0) :
      op->vtkDataReader::GetFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_GetFileName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataReader_GetFileName_s1(self, args);
    case 1:
      return PyvtkDataReader_GetFileName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetFileName");
  return nullptr;
}


static PyObject *
PyvtkDataReader_GetFileVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileVersion() :
      op->vtkDataReader::GetFileVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetFileMajorVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileMajorVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileMajorVersion() :
      op->vtkDataReader::GetFileMajorVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetFileMinorVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileMinorVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileMinorVersion() :
      op->vtkDataReader::GetFileMinorVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsFileValid(temp0) :
      op->vtkDataReader::IsFileValid(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileStructuredPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileStructuredPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsFileStructuredPoints() :
      op->vtkDataReader::IsFileStructuredPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_IsFilePolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFilePolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsFilePolyData() :
      op->vtkDataReader::IsFilePolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileStructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileStructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsFileStructuredGrid() :
      op->vtkDataReader::IsFileStructuredGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsFileUnstructuredGrid() :
      op->vtkDataReader::IsFileUnstructuredGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_IsFileRectilinearGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFileRectilinearGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsFileRectilinearGrid() :
      op->vtkDataReader::IsFileRectilinearGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputString() :
      op->vtkDataReader::GetInputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetInputString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetInputString(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_SetInputString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_SetInputString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataReader_SetInputString_s1(self, args);
    case 1:
      return PyvtkDataReader_SetInputString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputString");
  return nullptr;
}


static PyObject *
PyvtkDataReader_GetInputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputStringLength() :
      op->vtkDataReader::GetInputStringLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetBinaryInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinaryInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBinaryInputString(temp0, temp1);
    }
    else
    {
      op->vtkDataReader::SetBinaryInputString(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetInputArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkCharArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCharArray"))
  {
    if (ap.IsBound())
    {
      op->SetInputArray(temp0);
    }
    else
    {
      op->vtkDataReader::SetInputArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetInputArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCharArray *tempr = (ap.IsBound() ?
      op->GetInputArray() :
      op->vtkDataReader::GetInputArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetHeader() :
      op->vtkDataReader::GetHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetReadFromInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadFromInputString() :
      op->vtkDataReader::GetReadFromInputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadFromInputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOn();
    }
    else
    {
      op->vtkDataReader::ReadFromInputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadFromInputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOff();
    }
    else
    {
      op->vtkDataReader::ReadFromInputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileType() :
      op->vtkDataReader::GetFileType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfScalarsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarsInFile() :
      op->vtkDataReader::GetNumberOfScalarsInFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfVectorsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVectorsInFile() :
      op->vtkDataReader::GetNumberOfVectorsInFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfTensorsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTensorsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTensorsInFile() :
      op->vtkDataReader::GetNumberOfTensorsInFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfNormalsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNormalsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNormalsInFile() :
      op->vtkDataReader::GetNumberOfNormalsInFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfTCoordsInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTCoordsInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTCoordsInFile() :
      op->vtkDataReader::GetNumberOfTCoordsInFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNumberOfFieldDataInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFieldDataInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFieldDataInFile() :
      op->vtkDataReader::GetNumberOfFieldDataInFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetScalarsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarsNameInFile(temp0) :
      op->vtkDataReader::GetScalarsNameInFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetVectorsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVectorsNameInFile(temp0) :
      op->vtkDataReader::GetVectorsNameInFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetTensorsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTensorsNameInFile(temp0) :
      op->vtkDataReader::GetTensorsNameInFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNormalsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNormalsNameInFile(temp0) :
      op->vtkDataReader::GetNormalsNameInFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetTCoordsNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTCoordsNameInFile(temp0) :
      op->vtkDataReader::GetTCoordsNameInFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetFieldDataNameInFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataNameInFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFieldDataNameInFile(temp0) :
      op->vtkDataReader::GetFieldDataNameInFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetScalarsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetScalarsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalarsName() :
      op->vtkDataReader::GetScalarsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetVectorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetVectorsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetVectorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVectorsName() :
      op->vtkDataReader::GetVectorsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetTensorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetTensorsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetTensorsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTensorsName() :
      op->vtkDataReader::GetTensorsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetNormalsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetNormalsName() :
      op->vtkDataReader::GetNormalsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetTCoordsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetTCoordsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetTCoordsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTCoordsName() :
      op->vtkDataReader::GetTCoordsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetLookupTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetLookupTableName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetLookupTableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLookupTableName() :
      op->vtkDataReader::GetLookupTableName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::SetFieldDataName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDataName() :
      op->vtkDataReader::GetFieldDataName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAllScalars(temp0);
    }
    else
    {
      op->vtkDataReader::SetReadAllScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadAllScalars() :
      op->vtkDataReader::GetReadAllScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllScalarsOn();
    }
    else
    {
      op->vtkDataReader::ReadAllScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllScalarsOff();
    }
    else
    {
      op->vtkDataReader::ReadAllScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAllVectors(temp0);
    }
    else
    {
      op->vtkDataReader::SetReadAllVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadAllVectors() :
      op->vtkDataReader::GetReadAllVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllVectorsOn();
    }
    else
    {
      op->vtkDataReader::ReadAllVectorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllVectorsOff();
    }
    else
    {
      op->vtkDataReader::ReadAllVectorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAllNormals(temp0);
    }
    else
    {
      op->vtkDataReader::SetReadAllNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadAllNormals() :
      op->vtkDataReader::GetReadAllNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllNormalsOn();
    }
    else
    {
      op->vtkDataReader::ReadAllNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllNormalsOff();
    }
    else
    {
      op->vtkDataReader::ReadAllNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAllTensors(temp0);
    }
    else
    {
      op->vtkDataReader::SetReadAllTensors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadAllTensors() :
      op->vtkDataReader::GetReadAllTensors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllTensorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllTensorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllTensorsOn();
    }
    else
    {
      op->vtkDataReader::ReadAllTensorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllTensorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllTensorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllTensorsOff();
    }
    else
    {
      op->vtkDataReader::ReadAllTensorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllColorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllColorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAllColorScalars(temp0);
    }
    else
    {
      op->vtkDataReader::SetReadAllColorScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllColorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllColorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadAllColorScalars() :
      op->vtkDataReader::GetReadAllColorScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllColorScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllColorScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllColorScalarsOn();
    }
    else
    {
      op->vtkDataReader::ReadAllColorScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllColorScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllColorScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllColorScalarsOff();
    }
    else
    {
      op->vtkDataReader::ReadAllColorScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAllTCoords(temp0);
    }
    else
    {
      op->vtkDataReader::SetReadAllTCoords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadAllTCoords() :
      op->vtkDataReader::GetReadAllTCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllTCoordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllTCoordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllTCoordsOn();
    }
    else
    {
      op->vtkDataReader::ReadAllTCoordsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllTCoordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllTCoordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllTCoordsOff();
    }
    else
    {
      op->vtkDataReader::ReadAllTCoordsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_SetReadAllFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadAllFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadAllFields(temp0);
    }
    else
    {
      op->vtkDataReader::SetReadAllFields(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_GetReadAllFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadAllFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadAllFields() :
      op->vtkDataReader::GetReadAllFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllFieldsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllFieldsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllFieldsOn();
    }
    else
    {
      op->vtkDataReader::ReadAllFieldsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadAllFieldsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadAllFieldsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadAllFieldsOff();
    }
    else
    {
      op->vtkDataReader::ReadAllFieldsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_OpenVTKFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenVTKFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetFilePath(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->OpenVTKFile(temp0) :
      op->vtkDataReader::OpenVTKFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetFilePath(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->ReadHeader(temp0) :
      op->vtkDataReader::ReadHeader(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkDataSet *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ReadCellData(temp0, temp1) :
      op->vtkDataReader::ReadCellData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkDataSet *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ReadPointData(temp0, temp1) :
      op->vtkDataReader::ReadPointData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadPointCoordinates_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPointCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkPointSet *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPointSet") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ReadPointCoordinates(temp0, temp1) :
      op->vtkDataReader::ReadPointCoordinates(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_ReadPointCoordinates_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPointCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkGraph *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGraph") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ReadPointCoordinates(temp0, temp1) :
      op->vtkDataReader::ReadPointCoordinates(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataReader_ReadPointCoordinates_Methods[] = {
  {"ReadPointCoordinates", PyvtkDataReader_ReadPointCoordinates_s1, METH_VARARGS,
   "@Vk *vtkPointSet"},
  {"ReadPointCoordinates", PyvtkDataReader_ReadPointCoordinates_s2, METH_VARARGS,
   "@Vk *vtkGraph"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataReader_ReadPointCoordinates(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataReader_ReadPointCoordinates_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReadPointCoordinates");
  return nullptr;
}


static PyObject *
PyvtkDataReader_ReadVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkGraph *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGraph") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ReadVertexData(temp0, temp1) :
      op->vtkDataReader::ReadVertexData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadEdgeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadEdgeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkGraph *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGraph") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ReadEdgeData(temp0, temp1) :
      op->vtkDataReader::ReadEdgeData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadRowData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadRowData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkTable *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ReadRowData(temp0, temp1) :
      op->vtkDataReader::ReadRowData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkSmartPointer<vtkCellArray> temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadCells(temp0) :
      op->vtkDataReader::ReadCells(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadCellsLegacy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCellsLegacy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ReadCellsLegacy(temp0, temp1) :
      op->vtkDataReader::ReadCellsLegacy(temp0, temp1));

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

static PyObject *
PyvtkDataReader_ReadCellsLegacy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCellsLegacy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ReadCellsLegacy(temp0, temp1, temp2, temp3, temp4) :
      op->vtkDataReader::ReadCellsLegacy(temp0, temp1, temp2, temp3, temp4));

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

static PyObject *
PyvtkDataReader_ReadCellsLegacy(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataReader_ReadCellsLegacy_s1(self, args);
    case 5:
      return PyvtkDataReader_ReadCellsLegacy_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReadCellsLegacy");
  return nullptr;
}


static PyObject *
PyvtkDataReader_ReadCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  vtkRectilinearGrid *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRectilinearGrid") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->ReadCoordinates(temp0, temp1, temp2) :
      op->vtkDataReader::ReadCoordinates(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const char *temp0 = nullptr;
  long long temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->ReadArray(temp0, temp1, temp2) :
      op->vtkDataReader::ReadArray(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  typedef vtkDataReader::FieldType temp0_type;
  temp0_type temp0 = vtkDataReader::FIELD_DATA;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetEnumValue(temp0, "vtkDataReader.FieldType")))
  {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->ReadFieldData(temp0) :
      op->vtkDataReader::ReadFieldData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_Read_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Read(temp0) :
      op->vtkDataReader::Read(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_Read_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Read(temp0) :
      op->vtkDataReader::Read(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_Read_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(2*size0);
  long *temp0 = store0.Data();
  long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Read(temp0) :
      op->vtkDataReader::Read(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_Read_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Read(temp0) :
      op->vtkDataReader::Read(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataReader_Read_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Read(temp0) :
      op->vtkDataReader::Read(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataReader_Read_Methods[] = {
  {"Read", PyvtkDataReader_Read_s1, METH_VARARGS,
   "@z"},
  {"Read", PyvtkDataReader_Read_s2, METH_VARARGS,
   "@P *i"},
  {"Read", PyvtkDataReader_Read_s3, METH_VARARGS,
   "@P *l"},
  {"Read", PyvtkDataReader_Read_s4, METH_VARARGS,
   "@P *k"},
  {"Read", PyvtkDataReader_Read_s5, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataReader_Read(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataReader_Read_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Read");
  return nullptr;
}


static PyObject *
PyvtkDataReader_Peek(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Peek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  size_t temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    size_t tempr = (ap.IsBound() ?
      op->Peek(temp0, temp1) :
      op->vtkDataReader::Peek(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_CloseVTKFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseVTKFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CloseVTKFile();
    }
    else
    {
      op->vtkDataReader::CloseVTKFile();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const size_t size0 = 256;
  char *temp0 = nullptr;
  char *save0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ReadLine(temp0) :
      op->vtkDataReader::ReadLine(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  const size_t size0 = 256;
  char temp0[256];
  char save0[256];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = (ap.IsBound() ?
      op->ReadString(temp0) :
      op->vtkDataReader::ReadString(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_LowerCase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LowerCase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  size_t temp1 = 256;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    char *tempr = (ap.IsBound() ?
      op->LowerCase(temp0, temp1) :
      op->vtkDataReader::LowerCase(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadTimeDependentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadTimeDependentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadTimeDependentMetaData(temp0, temp1) :
      op->vtkDataReader::ReadTimeDependentMetaData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::ReadMesh(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::ReadPoints(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

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
      op->vtkDataReader::ReadArrays(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadMeshSimple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMeshSimple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  std::string temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetFilePath(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadMeshSimple(temp0, temp1) :
      op->vtkDataReader::ReadMeshSimple(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadPointsSimple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPointsSimple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  std::string temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetFilePath(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadPointsSimple(temp0, temp1) :
      op->vtkDataReader::ReadPointsSimple(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataReader_ReadArraysSimple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadArraysSimple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataReader *op = static_cast<vtkDataReader *>(vp);

  std::string temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetFilePath(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadArraysSimple(temp0, temp1) :
      op->vtkDataReader::ReadArraysSimple(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataReader_Methods[] = {
  {"IsTypeOf", PyvtkDataReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataReader\nC++: static vtkDataReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataReader\nC++: vtkDataReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkDataReader_SetFileName, METH_VARARGS,
   "SetFileName(self, fname:str) -> None\nC++: void SetFileName(const char *fname)\n\nSpecify file name of vtk data file to read. This is just a\nconvenience method that calls the superclass' AddFileName method.\n"},
  {"GetFileName", PyvtkDataReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: const char *GetFileName()\nGetFileName(self, i:int) -> str\nC++: const char *GetFileName(int i)\n\n"},
  {"GetFileVersion", PyvtkDataReader_GetFileVersion, METH_VARARGS,
   "GetFileVersion(self) -> int\nC++: virtual int GetFileVersion()\n\nReturn the version of the file read; for example, VTK legacy\nreaders will return the version of the VTK legacy file. (In the\ncase of VTK legacy files, see vtkDataWriter.h for the enum types\nreturned.) This method only returns useful information after a\nsuccessful read is performed; and some derived classes may not\nreturn relevant information.) Note that for VTK legacy readers,\nthe FileVersion is defined by the compositing the major version\ndigits with the minor version digit. Extremely ancient VTK files\n(e.g., before version 4.2) will return a FileVersion of 3.0.\n"},
  {"GetFileMajorVersion", PyvtkDataReader_GetFileMajorVersion, METH_VARARGS,
   "GetFileMajorVersion(self) -> int\nC++: virtual int GetFileMajorVersion()\n\n"},
  {"GetFileMinorVersion", PyvtkDataReader_GetFileMinorVersion, METH_VARARGS,
   "GetFileMinorVersion(self) -> int\nC++: virtual int GetFileMinorVersion()\n\n"},
  {"IsFileValid", PyvtkDataReader_IsFileValid, METH_VARARGS,
   "IsFileValid(self, dstype:str) -> int\nC++: int IsFileValid(const char *dstype)\n\nIs the file a valid vtk file of the passed dataset type ? The\ndataset type is passed as a lower case string.\n"},
  {"IsFileStructuredPoints", PyvtkDataReader_IsFileStructuredPoints, METH_VARARGS,
   "IsFileStructuredPoints(self) -> int\nC++: int IsFileStructuredPoints()\n\n"},
  {"IsFilePolyData", PyvtkDataReader_IsFilePolyData, METH_VARARGS,
   "IsFilePolyData(self) -> int\nC++: int IsFilePolyData()\n\n"},
  {"IsFileStructuredGrid", PyvtkDataReader_IsFileStructuredGrid, METH_VARARGS,
   "IsFileStructuredGrid(self) -> int\nC++: int IsFileStructuredGrid()\n\n"},
  {"IsFileUnstructuredGrid", PyvtkDataReader_IsFileUnstructuredGrid, METH_VARARGS,
   "IsFileUnstructuredGrid(self) -> int\nC++: int IsFileUnstructuredGrid()\n\n"},
  {"IsFileRectilinearGrid", PyvtkDataReader_IsFileRectilinearGrid, METH_VARARGS,
   "IsFileRectilinearGrid(self) -> int\nC++: int IsFileRectilinearGrid()\n\n"},
  {"GetInputString", PyvtkDataReader_GetInputString, METH_VARARGS,
   "GetInputString(self) -> str\nC++: virtual char *GetInputString()\n\n"},
  {"SetInputString", PyvtkDataReader_SetInputString, METH_VARARGS,
   "SetInputString(self, in_:str, len:int) -> None\nC++: void SetInputString(const char *in, int len)\nSetInputString(self, input:str) -> None\nC++: void SetInputString(const vtkStdString &input)\n\n"},
  {"GetInputStringLength", PyvtkDataReader_GetInputStringLength, METH_VARARGS,
   "GetInputStringLength(self) -> int\nC++: virtual int GetInputStringLength()\n\n"},
  {"SetBinaryInputString", PyvtkDataReader_SetBinaryInputString, METH_VARARGS,
   "SetBinaryInputString(self, __a:str, len:int) -> None\nC++: void SetBinaryInputString(const char *, int len)\n\n"},
  {"SetInputArray", PyvtkDataReader_SetInputArray, METH_VARARGS,
   "SetInputArray(self, __a:vtkCharArray) -> None\nC++: virtual void SetInputArray(vtkCharArray *)\n\nSpecify the vtkCharArray to be used  when reading from a string.\nIf set, this array has precedence over InputString. Use this\ninstead of InputString to avoid the extra memory copy. It should\nbe noted that if the underlying char* is owned by the user (\nvtkCharArray::SetArray(array, 1); ) and is deleted before the\nreader, bad things will happen during a pipeline update.\n"},
  {"GetInputArray", PyvtkDataReader_GetInputArray, METH_VARARGS,
   "GetInputArray(self) -> vtkCharArray\nC++: virtual vtkCharArray *GetInputArray()\n\n"},
  {"GetHeader", PyvtkDataReader_GetHeader, METH_VARARGS,
   "GetHeader(self) -> str\nC++: virtual char *GetHeader()\n\nGet the header from the vtk data file.\n"},
  {"SetReadFromInputString", PyvtkDataReader_SetReadFromInputString, METH_VARARGS,
   "SetReadFromInputString(self, _arg:int) -> None\nC++: virtual void SetReadFromInputString(vtkTypeBool _arg)\n\nEnable reading from an InputString or InputArray instead of the\ndefault, a file.\n"},
  {"GetReadFromInputString", PyvtkDataReader_GetReadFromInputString, METH_VARARGS,
   "GetReadFromInputString(self) -> int\nC++: virtual vtkTypeBool GetReadFromInputString()\n\n"},
  {"ReadFromInputStringOn", PyvtkDataReader_ReadFromInputStringOn, METH_VARARGS,
   "ReadFromInputStringOn(self) -> None\nC++: virtual void ReadFromInputStringOn()\n\n"},
  {"ReadFromInputStringOff", PyvtkDataReader_ReadFromInputStringOff, METH_VARARGS,
   "ReadFromInputStringOff(self) -> None\nC++: virtual void ReadFromInputStringOff()\n\n"},
  {"GetFileType", PyvtkDataReader_GetFileType, METH_VARARGS,
   "GetFileType(self) -> int\nC++: virtual int GetFileType()\n\nGet the type of file (ASCII or BINARY). Returned value only valid\nafter file has been read.\n"},
  {"GetNumberOfScalarsInFile", PyvtkDataReader_GetNumberOfScalarsInFile, METH_VARARGS,
   "GetNumberOfScalarsInFile(self) -> int\nC++: int GetNumberOfScalarsInFile()\n\nHow many attributes of various types are in this file? This\nrequires reading the file, so the filename must be set prior to\ninvoking this operation. (Note: file characteristics are cached,\nso only a single read is necessary to return file\ncharacteristics.)\n"},
  {"GetNumberOfVectorsInFile", PyvtkDataReader_GetNumberOfVectorsInFile, METH_VARARGS,
   "GetNumberOfVectorsInFile(self) -> int\nC++: int GetNumberOfVectorsInFile()\n\n"},
  {"GetNumberOfTensorsInFile", PyvtkDataReader_GetNumberOfTensorsInFile, METH_VARARGS,
   "GetNumberOfTensorsInFile(self) -> int\nC++: int GetNumberOfTensorsInFile()\n\n"},
  {"GetNumberOfNormalsInFile", PyvtkDataReader_GetNumberOfNormalsInFile, METH_VARARGS,
   "GetNumberOfNormalsInFile(self) -> int\nC++: int GetNumberOfNormalsInFile()\n\n"},
  {"GetNumberOfTCoordsInFile", PyvtkDataReader_GetNumberOfTCoordsInFile, METH_VARARGS,
   "GetNumberOfTCoordsInFile(self) -> int\nC++: int GetNumberOfTCoordsInFile()\n\n"},
  {"GetNumberOfFieldDataInFile", PyvtkDataReader_GetNumberOfFieldDataInFile, METH_VARARGS,
   "GetNumberOfFieldDataInFile(self) -> int\nC++: int GetNumberOfFieldDataInFile()\n\n"},
  {"GetScalarsNameInFile", PyvtkDataReader_GetScalarsNameInFile, METH_VARARGS,
   "GetScalarsNameInFile(self, i:int) -> str\nC++: const char *GetScalarsNameInFile(int i)\n\nWhat is the name of the ith attribute of a certain type in this\nfile? This requires reading the file, so the filename must be set\nprior to invoking this operation.\n"},
  {"GetVectorsNameInFile", PyvtkDataReader_GetVectorsNameInFile, METH_VARARGS,
   "GetVectorsNameInFile(self, i:int) -> str\nC++: const char *GetVectorsNameInFile(int i)\n\n"},
  {"GetTensorsNameInFile", PyvtkDataReader_GetTensorsNameInFile, METH_VARARGS,
   "GetTensorsNameInFile(self, i:int) -> str\nC++: const char *GetTensorsNameInFile(int i)\n\n"},
  {"GetNormalsNameInFile", PyvtkDataReader_GetNormalsNameInFile, METH_VARARGS,
   "GetNormalsNameInFile(self, i:int) -> str\nC++: const char *GetNormalsNameInFile(int i)\n\n"},
  {"GetTCoordsNameInFile", PyvtkDataReader_GetTCoordsNameInFile, METH_VARARGS,
   "GetTCoordsNameInFile(self, i:int) -> str\nC++: const char *GetTCoordsNameInFile(int i)\n\n"},
  {"GetFieldDataNameInFile", PyvtkDataReader_GetFieldDataNameInFile, METH_VARARGS,
   "GetFieldDataNameInFile(self, i:int) -> str\nC++: const char *GetFieldDataNameInFile(int i)\n\n"},
  {"SetScalarsName", PyvtkDataReader_SetScalarsName, METH_VARARGS,
   "SetScalarsName(self, _arg:str) -> None\nC++: virtual void SetScalarsName(const char *_arg)\n\nSet the name of the scalar data to extract. If not specified,\nfirst scalar data encountered is extracted.\n"},
  {"GetScalarsName", PyvtkDataReader_GetScalarsName, METH_VARARGS,
   "GetScalarsName(self) -> str\nC++: virtual char *GetScalarsName()\n\n"},
  {"SetVectorsName", PyvtkDataReader_SetVectorsName, METH_VARARGS,
   "SetVectorsName(self, _arg:str) -> None\nC++: virtual void SetVectorsName(const char *_arg)\n\nSet the name of the vector data to extract. If not specified,\nfirst vector data encountered is extracted.\n"},
  {"GetVectorsName", PyvtkDataReader_GetVectorsName, METH_VARARGS,
   "GetVectorsName(self) -> str\nC++: virtual char *GetVectorsName()\n\n"},
  {"SetTensorsName", PyvtkDataReader_SetTensorsName, METH_VARARGS,
   "SetTensorsName(self, _arg:str) -> None\nC++: virtual void SetTensorsName(const char *_arg)\n\nSet the name of the tensor data to extract. If not specified,\nfirst tensor data encountered is extracted.\n"},
  {"GetTensorsName", PyvtkDataReader_GetTensorsName, METH_VARARGS,
   "GetTensorsName(self) -> str\nC++: virtual char *GetTensorsName()\n\n"},
  {"SetNormalsName", PyvtkDataReader_SetNormalsName, METH_VARARGS,
   "SetNormalsName(self, _arg:str) -> None\nC++: virtual void SetNormalsName(const char *_arg)\n\nSet the name of the normal data to extract. If not specified,\nfirst normal data encountered is extracted.\n"},
  {"GetNormalsName", PyvtkDataReader_GetNormalsName, METH_VARARGS,
   "GetNormalsName(self) -> str\nC++: virtual char *GetNormalsName()\n\n"},
  {"SetTCoordsName", PyvtkDataReader_SetTCoordsName, METH_VARARGS,
   "SetTCoordsName(self, _arg:str) -> None\nC++: virtual void SetTCoordsName(const char *_arg)\n\nSet the name of the texture coordinate data to extract. If not\nspecified, first texture coordinate data encountered is\nextracted.\n"},
  {"GetTCoordsName", PyvtkDataReader_GetTCoordsName, METH_VARARGS,
   "GetTCoordsName(self) -> str\nC++: virtual char *GetTCoordsName()\n\n"},
  {"SetLookupTableName", PyvtkDataReader_SetLookupTableName, METH_VARARGS,
   "SetLookupTableName(self, _arg:str) -> None\nC++: virtual void SetLookupTableName(const char *_arg)\n\nSet the name of the lookup table data to extract. If not\nspecified, uses lookup table named by scalar. Otherwise, this\nspecification supersedes.\n"},
  {"GetLookupTableName", PyvtkDataReader_GetLookupTableName, METH_VARARGS,
   "GetLookupTableName(self) -> str\nC++: virtual char *GetLookupTableName()\n\n"},
  {"SetFieldDataName", PyvtkDataReader_SetFieldDataName, METH_VARARGS,
   "SetFieldDataName(self, _arg:str) -> None\nC++: virtual void SetFieldDataName(const char *_arg)\n\nSet the name of the field data to extract. If not specified, uses\nfirst field data encountered in file.\n"},
  {"GetFieldDataName", PyvtkDataReader_GetFieldDataName, METH_VARARGS,
   "GetFieldDataName(self) -> str\nC++: virtual char *GetFieldDataName()\n\n"},
  {"SetReadAllScalars", PyvtkDataReader_SetReadAllScalars, METH_VARARGS,
   "SetReadAllScalars(self, _arg:int) -> None\nC++: virtual void SetReadAllScalars(vtkTypeBool _arg)\n\nEnable reading all scalars.\n"},
  {"GetReadAllScalars", PyvtkDataReader_GetReadAllScalars, METH_VARARGS,
   "GetReadAllScalars(self) -> int\nC++: virtual vtkTypeBool GetReadAllScalars()\n\n"},
  {"ReadAllScalarsOn", PyvtkDataReader_ReadAllScalarsOn, METH_VARARGS,
   "ReadAllScalarsOn(self) -> None\nC++: virtual void ReadAllScalarsOn()\n\n"},
  {"ReadAllScalarsOff", PyvtkDataReader_ReadAllScalarsOff, METH_VARARGS,
   "ReadAllScalarsOff(self) -> None\nC++: virtual void ReadAllScalarsOff()\n\n"},
  {"SetReadAllVectors", PyvtkDataReader_SetReadAllVectors, METH_VARARGS,
   "SetReadAllVectors(self, _arg:int) -> None\nC++: virtual void SetReadAllVectors(vtkTypeBool _arg)\n\nEnable reading all vectors.\n"},
  {"GetReadAllVectors", PyvtkDataReader_GetReadAllVectors, METH_VARARGS,
   "GetReadAllVectors(self) -> int\nC++: virtual vtkTypeBool GetReadAllVectors()\n\n"},
  {"ReadAllVectorsOn", PyvtkDataReader_ReadAllVectorsOn, METH_VARARGS,
   "ReadAllVectorsOn(self) -> None\nC++: virtual void ReadAllVectorsOn()\n\n"},
  {"ReadAllVectorsOff", PyvtkDataReader_ReadAllVectorsOff, METH_VARARGS,
   "ReadAllVectorsOff(self) -> None\nC++: virtual void ReadAllVectorsOff()\n\n"},
  {"SetReadAllNormals", PyvtkDataReader_SetReadAllNormals, METH_VARARGS,
   "SetReadAllNormals(self, _arg:int) -> None\nC++: virtual void SetReadAllNormals(vtkTypeBool _arg)\n\nEnable reading all normals.\n"},
  {"GetReadAllNormals", PyvtkDataReader_GetReadAllNormals, METH_VARARGS,
   "GetReadAllNormals(self) -> int\nC++: virtual vtkTypeBool GetReadAllNormals()\n\n"},
  {"ReadAllNormalsOn", PyvtkDataReader_ReadAllNormalsOn, METH_VARARGS,
   "ReadAllNormalsOn(self) -> None\nC++: virtual void ReadAllNormalsOn()\n\n"},
  {"ReadAllNormalsOff", PyvtkDataReader_ReadAllNormalsOff, METH_VARARGS,
   "ReadAllNormalsOff(self) -> None\nC++: virtual void ReadAllNormalsOff()\n\n"},
  {"SetReadAllTensors", PyvtkDataReader_SetReadAllTensors, METH_VARARGS,
   "SetReadAllTensors(self, _arg:int) -> None\nC++: virtual void SetReadAllTensors(vtkTypeBool _arg)\n\nEnable reading all tensors.\n"},
  {"GetReadAllTensors", PyvtkDataReader_GetReadAllTensors, METH_VARARGS,
   "GetReadAllTensors(self) -> int\nC++: virtual vtkTypeBool GetReadAllTensors()\n\n"},
  {"ReadAllTensorsOn", PyvtkDataReader_ReadAllTensorsOn, METH_VARARGS,
   "ReadAllTensorsOn(self) -> None\nC++: virtual void ReadAllTensorsOn()\n\n"},
  {"ReadAllTensorsOff", PyvtkDataReader_ReadAllTensorsOff, METH_VARARGS,
   "ReadAllTensorsOff(self) -> None\nC++: virtual void ReadAllTensorsOff()\n\n"},
  {"SetReadAllColorScalars", PyvtkDataReader_SetReadAllColorScalars, METH_VARARGS,
   "SetReadAllColorScalars(self, _arg:int) -> None\nC++: virtual void SetReadAllColorScalars(vtkTypeBool _arg)\n\nEnable reading all color scalars.\n"},
  {"GetReadAllColorScalars", PyvtkDataReader_GetReadAllColorScalars, METH_VARARGS,
   "GetReadAllColorScalars(self) -> int\nC++: virtual vtkTypeBool GetReadAllColorScalars()\n\n"},
  {"ReadAllColorScalarsOn", PyvtkDataReader_ReadAllColorScalarsOn, METH_VARARGS,
   "ReadAllColorScalarsOn(self) -> None\nC++: virtual void ReadAllColorScalarsOn()\n\n"},
  {"ReadAllColorScalarsOff", PyvtkDataReader_ReadAllColorScalarsOff, METH_VARARGS,
   "ReadAllColorScalarsOff(self) -> None\nC++: virtual void ReadAllColorScalarsOff()\n\n"},
  {"SetReadAllTCoords", PyvtkDataReader_SetReadAllTCoords, METH_VARARGS,
   "SetReadAllTCoords(self, _arg:int) -> None\nC++: virtual void SetReadAllTCoords(vtkTypeBool _arg)\n\nEnable reading all tcoords.\n"},
  {"GetReadAllTCoords", PyvtkDataReader_GetReadAllTCoords, METH_VARARGS,
   "GetReadAllTCoords(self) -> int\nC++: virtual vtkTypeBool GetReadAllTCoords()\n\n"},
  {"ReadAllTCoordsOn", PyvtkDataReader_ReadAllTCoordsOn, METH_VARARGS,
   "ReadAllTCoordsOn(self) -> None\nC++: virtual void ReadAllTCoordsOn()\n\n"},
  {"ReadAllTCoordsOff", PyvtkDataReader_ReadAllTCoordsOff, METH_VARARGS,
   "ReadAllTCoordsOff(self) -> None\nC++: virtual void ReadAllTCoordsOff()\n\n"},
  {"SetReadAllFields", PyvtkDataReader_SetReadAllFields, METH_VARARGS,
   "SetReadAllFields(self, _arg:int) -> None\nC++: virtual void SetReadAllFields(vtkTypeBool _arg)\n\nEnable reading all fields.\n"},
  {"GetReadAllFields", PyvtkDataReader_GetReadAllFields, METH_VARARGS,
   "GetReadAllFields(self) -> int\nC++: virtual vtkTypeBool GetReadAllFields()\n\n"},
  {"ReadAllFieldsOn", PyvtkDataReader_ReadAllFieldsOn, METH_VARARGS,
   "ReadAllFieldsOn(self) -> None\nC++: virtual void ReadAllFieldsOn()\n\n"},
  {"ReadAllFieldsOff", PyvtkDataReader_ReadAllFieldsOff, METH_VARARGS,
   "ReadAllFieldsOff(self) -> None\nC++: virtual void ReadAllFieldsOff()\n\n"},
  {"OpenVTKFile", PyvtkDataReader_OpenVTKFile, METH_VARARGS,
   "OpenVTKFile(self, fname:str=...) -> int\nC++: int OpenVTKFile(const char *fname=nullptr)\n\nOpen a vtk data file. Returns zero if error.\n"},
  {"ReadHeader", PyvtkDataReader_ReadHeader, METH_VARARGS,
   "ReadHeader(self, fname:str=...) -> int\nC++: int ReadHeader(const char *fname=nullptr)\n\nRead the header of a vtk data file. Returns 0 if error.\n"},
  {"ReadCellData", PyvtkDataReader_ReadCellData, METH_VARARGS,
   "ReadCellData(self, ds:vtkDataSet, numCells:int) -> int\nC++: int ReadCellData(vtkDataSet *ds, vtkIdType numCells)\n\nRead the cell data of a vtk data file. The number of cells (from\nthe dataset) must match the number of cells defined in cell\nattributes (unless no geometry was defined).\n"},
  {"ReadPointData", PyvtkDataReader_ReadPointData, METH_VARARGS,
   "ReadPointData(self, ds:vtkDataSet, numPts:int) -> int\nC++: int ReadPointData(vtkDataSet *ds, vtkIdType numPts)\n\nRead the point data of a vtk data file. The number of points\n(from the dataset) must match the number of points defined in\npoint attributes (unless no geometry was defined).\n"},
  {"ReadPointCoordinates", PyvtkDataReader_ReadPointCoordinates, METH_VARARGS,
   "ReadPointCoordinates(self, ps:vtkPointSet, numPts:int) -> int\nC++: int ReadPointCoordinates(vtkPointSet *ps, vtkIdType numPts)\nReadPointCoordinates(self, g:vtkGraph, numPts:int) -> int\nC++: int ReadPointCoordinates(vtkGraph *g, vtkIdType numPts)\n\nRead point coordinates. Return 0 if error.\n"},
  {"ReadVertexData", PyvtkDataReader_ReadVertexData, METH_VARARGS,
   "ReadVertexData(self, g:vtkGraph, numVertices:int) -> int\nC++: int ReadVertexData(vtkGraph *g, vtkIdType numVertices)\n\nRead the vertex data of a vtk data file. The number of vertices\n(from the graph) must match the number of vertices defined in\nvertex attributes (unless no geometry was defined).\n"},
  {"ReadEdgeData", PyvtkDataReader_ReadEdgeData, METH_VARARGS,
   "ReadEdgeData(self, g:vtkGraph, numEdges:int) -> int\nC++: int ReadEdgeData(vtkGraph *g, vtkIdType numEdges)\n\nRead the edge data of a vtk data file. The number of edges (from\nthe graph) must match the number of edges defined in edge\nattributes (unless no geometry was defined).\n"},
  {"ReadRowData", PyvtkDataReader_ReadRowData, METH_VARARGS,
   "ReadRowData(self, t:vtkTable, numEdges:int) -> int\nC++: int ReadRowData(vtkTable *t, vtkIdType numEdges)\n\nRead the row data of a vtk data file.\n"},
  {"ReadCells", PyvtkDataReader_ReadCells, METH_VARARGS,
   "ReadCells(self, cellArray:vtkCellArray) -> int\nC++: int ReadCells(vtkSmartPointer<vtkCellArray> &cellArray)\n\nRead cells in a vtkCellArray, and update the smartpointer\nreference passed in. If no cells are present in the file,\ncellArray will be set to nullptr. Returns 0 if error.\n"},
  {"ReadCellsLegacy", PyvtkDataReader_ReadCellsLegacy, METH_VARARGS,
   "ReadCellsLegacy(self, size:int, data:[int, ...]) -> int\nC++: int ReadCellsLegacy(vtkIdType size, int *data)\nReadCellsLegacy(self, size:int, data:[int, ...], skip1:int,\n    read2:int, skip3:int) -> int\nC++: int ReadCellsLegacy(vtkIdType size, int *data, int skip1,\n    int read2, int skip3)\n\nRead a bunch of \"cells\". Return 0 if error.\n\note Legacy implementation for file versions < 5.0.\n"},
  {"ReadCoordinates", PyvtkDataReader_ReadCoordinates, METH_VARARGS,
   "ReadCoordinates(self, rg:vtkRectilinearGrid, axes:int,\n    numCoords:int) -> int\nC++: int ReadCoordinates(vtkRectilinearGrid *rg, int axes,\n    int numCoords)\n\nRead the coordinates for a rectilinear grid. The axes parameter\nspecifies which coordinate axes (0,1,2) is being read.\n"},
  {"ReadArray", PyvtkDataReader_ReadArray, METH_VARARGS,
   "ReadArray(self, dataType:str, numTuples:int, numComp:int)\n    -> vtkAbstractArray\nC++: vtkAbstractArray *ReadArray(const char *dataType,\n    vtkIdType numTuples, vtkIdType numComp)\n\nHelper functions for reading data.\n"},
  {"ReadFieldData", PyvtkDataReader_ReadFieldData, METH_VARARGS,
   "ReadFieldData(self, fieldType:FieldType=...) -> vtkFieldData\nC++: vtkFieldData *ReadFieldData(FieldType fieldType=FIELD_DATA)\n\n"},
  {"Read", PyvtkDataReader_Read, METH_VARARGS,
   "Read(self, __a:str) -> int\nC++: int Read(char *)\nRead(self, __a:[int, ...]) -> int\nC++: int Read(int *)\nRead(self, __a:[int, ...]) -> int\nC++: int Read(long *)\nRead(self, result:[int, ...]) -> int\nC++: int Read(long long *result)\nRead(self, __a:[float, ...]) -> int\nC++: int Read(double *)\n\nInternal function to read in a value.  Returns zero if there was\nan error.\n"},
  {"Peek", PyvtkDataReader_Peek, METH_VARARGS,
   "Peek(self, str:str, n:int) -> int\nC++: size_t Peek(char *str, size_t n)\n\nRead n character from the stream into str, then reset the stream\nposition. Returns the number of characters actually read.\n"},
  {"CloseVTKFile", PyvtkDataReader_CloseVTKFile, METH_VARARGS,
   "CloseVTKFile(self) -> None\nC++: void CloseVTKFile()\n\nClose the vtk file.\n"},
  {"ReadLine", PyvtkDataReader_ReadLine, METH_VARARGS,
   "ReadLine(self, result:[str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str]) -> int\nC++: int ReadLine(char result[256])\n\nInternal function to read in a line up to 256 characters. Returns\nzero if there was an error.\n"},
  {"ReadString", PyvtkDataReader_ReadString, METH_VARARGS,
   "ReadString(self, result:[str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str, str, str, str, str,\n    str, str, str, str, str, str, str, str]) -> int\nC++: int ReadString(char (&result)[256])\n\nInternal function to read in a string up to 256 characters.\nReturns zero if there was an error.\n"},
  {"LowerCase", PyvtkDataReader_LowerCase, METH_VARARGS,
   "LowerCase(self, str:str, len:int=256) -> str\nC++: char *LowerCase(char *str, size_t len=256)\n\nHelper method for reading in data.\n"},
  {"ReadTimeDependentMetaData", PyvtkDataReader_ReadTimeDependentMetaData, METH_VARARGS,
   "ReadTimeDependentMetaData(self, timestep:int,\n    metadata:vtkInformation) -> int\nC++: int ReadTimeDependentMetaData(int timestep,\n    vtkInformation *metadata) override;\n\nOverridden to handle reading from a string. The superclass only\nknows about files.\n"},
  {"ReadMesh", PyvtkDataReader_ReadMesh, METH_VARARGS,
   "ReadMesh(self, piece:int, npieces:int, nghosts:int, timestep:int,\n    output:vtkDataObject) -> int\nC++: int ReadMesh(int piece, int npieces, int nghosts,\n    int timestep, vtkDataObject *output) override;\n\nRead the mesh (connectivity) for a given set of data\npartitioning, number of ghost levels and time step (index). The\nreader populates the data object passed in as the last argument.\nIt is OK to read more than the mesh (points, arrays etc.).\nHowever, this may interfere with any caching implemented by the\nexecutive (i.e. cause more reads).\n"},
  {"ReadPoints", PyvtkDataReader_ReadPoints, METH_VARARGS,
   "ReadPoints(self, __a:int, __b:int, __c:int, __d:int,\n    __e:vtkDataObject) -> int\nC++: int ReadPoints(int, int, int, int, vtkDataObject *) override;\n\nRead the points. The reader populates the input data object. This\nis called after ReadMesh() so the data object should already\ncontain the mesh.\n"},
  {"ReadArrays", PyvtkDataReader_ReadArrays, METH_VARARGS,
   "ReadArrays(self, __a:int, __b:int, __c:int, __d:int,\n    __e:vtkDataObject) -> int\nC++: int ReadArrays(int, int, int, int, vtkDataObject *) override;\n\nRead all the arrays (point, cell, field etc.). This is called\nafter ReadPoints() so the data object should already contain the\nmesh and points.\n"},
  {"ReadMeshSimple", PyvtkDataReader_ReadMeshSimple, METH_VARARGS,
   "ReadMeshSimple(self, __a:str, __b:vtkDataObject) -> int\nC++: int ReadMeshSimple(const std::string &, vtkDataObject *)\n    override;\n\nOverridden with default implementation of doing nothing so that\nsubclasses only override what is needed (usually only ReadMesh).\n"},
  {"ReadPointsSimple", PyvtkDataReader_ReadPointsSimple, METH_VARARGS,
   "ReadPointsSimple(self, __a:str, __b:vtkDataObject) -> int\nC++: int ReadPointsSimple(const std::string &, vtkDataObject *)\n    override;\n\nA method that needs to be override by the subclass to provide the\npoint coordinates. Note that the filename is passed to this\nmethod and should be used by the subclass. The subclass directly\nadds the coordinates to the provided data object.\n"},
  {"ReadArraysSimple", PyvtkDataReader_ReadArraysSimple, METH_VARARGS,
   "ReadArraysSimple(self, __a:str, __b:vtkDataObject) -> int\nC++: int ReadArraysSimple(const std::string &, vtkDataObject *)\n    override;\n\nA method that needs to be override by the subclass to provide\ndata arrays. Note that the filename is passed to this method and\nshould be used by the subclass. The subclass directly adds data\narrays to the provided data object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataReader_Doc =
  "vtkDataReader - helper superclass for objects that read vtk data files\n\n"
  "Superclass: vtkSimpleReader\n\n"
  "vtkDataReader is a helper superclass that reads the vtk data file\n"
  "header, dataset type, and attribute data (point and cell attributes\n"
  "such as scalars, vectors, normals, etc.) from a vtk data file.  See\n"
  "text for the format of the various vtk file types.\n\n"
  "@sa\n"
  "vtkPolyDataReader vtkStructuredPointsReader vtkStructuredGridReader\n"
  "vtkUnstructuredGridReader vtkRectilinearGridReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOLegacy.vtkDataReader", // tp_name
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
  PyvtkDataReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataReader_StaticNew()
{
  return vtkDataReader::New();
}

PyObject *PyvtkDataReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataReader_Type, PyvtkDataReader_Methods,
    "vtkDataReader",
 &PyvtkDataReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSimpleReader");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDataReader_FieldType_Type);
  PyVTKEnum_Add(&PyvtkDataReader_FieldType_Type, "vtkDataReader.FieldType");

  o = (PyObject *)&PyvtkDataReader_FieldType_Type;
  if (PyDict_SetItemString(d, "FieldType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkDataReader::FieldType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "POINT_DATA", vtkDataReader::POINT_DATA },
        { "CELL_DATA", vtkDataReader::CELL_DATA },
        { "FIELD_DATA", vtkDataReader::FIELD_DATA },
      };

    o = PyvtkDataReader_FieldType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataReader", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_ASCII", 1 },
        { "VTK_BINARY", 2 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

